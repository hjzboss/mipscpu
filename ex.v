`include "defines.v"

//执行阶段
module ex(

	input wire					rst,
	
	input wire[`AluOpBus]		aluop_i,
	input wire[`AluSelBus]		alusel_i,
	input wire[`RegBus]			reg1_i,
	input wire[`RegBus]			reg2_i,
	input wire[`RegAddrBus]		wd_i,
	input wire					wreg_i,
	input wire[`RegBus]			inst_i,
	
	
	output reg[`RegAddrBus]		wd_o,
	output reg					wreg_o,
	output reg[`RegBus]			wdata_o,
	
	output wire[`AluOpBus]		aluop_o,
	output wire[`RegBus]		mem_addr_o,
	output wire[`RegBus]		reg2_o	
	
);

	reg[`RegBus] logicout;//逻辑运算的结果
	reg[`RegBus] arithmeticres;//算术运算的结果
	wire[`RegBus] reg2_i_mux;//补码
	wire[`RegBus] reg1_i_not;	
	wire[`RegBus] result_sum;
	wire ov_sum;//溢出位
	wire reg1_eq_reg2;//相等位
	wire reg1_lt_reg2;//小于位

  assign aluop_o = aluop_i;
  
  //访存地址
  assign mem_addr_o = reg1_i + {{16{inst_i[15]}},inst_i[15:0]};

  assign reg2_o = reg2_i;

	//逻辑运算		
	always @ (*) begin
		if(rst == `RstEnable) begin
			logicout <= `ZeroWord;
		end else begin
			case (aluop_i)
				`EXE_OR_OP:			begin
					logicout <= reg1_i | reg2_i;
				end
				`EXE_AND_OP:		begin
					logicout <= reg1_i & reg2_i;
				end
				default:				begin
					logicout <= `ZeroWord;
				end
			endcase
		end    //if
	end      //always

	//补码
	assign reg2_i_mux = ((aluop_i == `EXE_SUB_OP) ||
											 (aluop_i == `EXE_SLT_OP) ) 
											 ? (~reg2_i)+1 : reg2_i;

	//加减法的结果
	assign result_sum = reg1_i + reg2_i_mux;										 

	//结果是否溢出
	assign ov_sum = ((!reg1_i[31] && !reg2_i_mux[31]) && result_sum[31]) ||
							((reg1_i[31] && reg2_i_mux[31]) && (!result_sum[31]));  
	//寄存器1的值是否小于寄存器2								
	assign reg1_lt_reg2 = ((aluop_i == `EXE_SLT_OP)) ?
							((reg1_i[31] && !reg2_i[31]) || 
							(!reg1_i[31] && !reg2_i[31] && result_sum[31]) ||
							(reg1_i[31] && reg2_i[31] && result_sum[31])) : (reg1_i < reg2_i);
  
  	assign reg1_i_not = ~reg1_i;

	//算术运算						
	always @ (*) begin
		if(rst == `RstEnable) begin
			arithmeticres <= `ZeroWord;
		end 
		else begin
			case (aluop_i)
				`EXE_SLT_OP: begin
					arithmeticres <= reg1_lt_reg2 ;
				end
				`EXE_ADD_OP: begin
					arithmeticres <= result_sum; 
				end
				`EXE_SUB_OP: begin
					arithmeticres <= result_sum; 
				end		
				default: begin
					arithmeticres <= `ZeroWord;
				end
			endcase
		end
	end																			

	//写入结果
	always @ (*) begin
		wd_o <= wd_i;
					
		if(((aluop_i == `EXE_ADD_OP) || 
			(aluop_i == `EXE_SUB_OP)) && (ov_sum == 1'b1)) begin
			wreg_o <= `WriteDisable;
		end 
		else begin
			wreg_o <= wreg_i;
		end

		case ( alusel_i ) 
			`EXE_RES_LOGIC: begin
				wdata_o <= logicout;
			end	
			`EXE_RES_ARITHMETIC: begin
				wdata_o <= arithmeticres;
			end 	
			default: begin
				wdata_o <= `ZeroWord;
			end
		endcase
	end		

endmodule