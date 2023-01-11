	// verilator_coverage annotation
	`include "defines.v"
	
	//执行阶段
	module ex(
	
%000001		input wire					rst,
		
%000003		input wire[`AluOpBus]		aluop_i,
%000000		input wire[`AluSelBus]		alusel_i,
%000022		input wire[`RegBus]			reg1_i,
%000018		input wire[`RegBus]			reg2_i,
%000002		input wire[`RegAddrBus]		wd_i,
%000000		input wire					wreg_i,
%000014		input wire[`RegBus]			inst_i,
		
		
%000002		output reg[`RegAddrBus]		wd_o,
%000001		output reg					wreg_o,
%000014		output reg[`RegBus]			wdata_o,
		
%000003		output wire[`AluOpBus]		aluop_o,
%000021		output wire[`RegBus]		mem_addr_o,
%000018		output wire[`RegBus]		reg2_o	
		
	);
	
%000019		reg[`RegBus] logicout;//逻辑运算的结果
%000017		reg[`RegBus] arithmeticres;//算术运算的结果
%000015		wire[`RegBus] reg2_i_mux;//补码
%000012		wire[`RegBus] reg1_i_not;	
%000017		wire[`RegBus] result_sum;
%000000		wire ov_sum;//溢出位
%000000		wire reg1_eq_reg2;//相等位
%000000		wire reg1_lt_reg2;//小于位
	
	  assign aluop_o = aluop_i;
	  
	  //访存地址
	  assign mem_addr_o = reg1_i + {{16{inst_i[15]}},inst_i[15:0]};
	
	  assign reg2_o = reg2_i;
	
		//逻辑运算		
%000002		always @ (*) begin
 002008			if(rst == `RstEnable) begin
 099000			verilator_coverage: (next point on previous line)

 001004				logicout = `ZeroWord;
			end 
 099000			else begin
 099000				case (aluop_i)
%000000					`EXE_OR_OP:			begin
%000000						logicout = reg1_i | reg2_i;
					end
%000000					`EXE_AND_OP:		begin
%000000						logicout = reg1_i & reg2_i;
					end
 198000					default:				begin
 099000						logicout = `ZeroWord;
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
%000002		always @ (*) begin
 002008			if(rst == `RstEnable) begin
 099000			verilator_coverage: (next point on previous line)

 001004				arithmeticres = `ZeroWord;
			end 
 099000			else begin
 099000				case (aluop_i)
%000000					`EXE_SLT_OP: begin
%000000						arithmeticres = {{`RegWidth-1{1'b0}}, reg1_lt_reg2};
					end
%000000					`EXE_ADD_OP: begin
%000000						arithmeticres = result_sum; 
					end
%000000					`EXE_SUB_OP: begin
%000000						arithmeticres = result_sum; 
					end		
 198000					default: begin
 099000						arithmeticres = `ZeroWord;
					end
				endcase
			end
		end																			
	
		//写入结果
%000002		always @ (*) begin
%000001			wd_o = wd_i;
						
%000000			if(((aluop_i == `EXE_ADD_OP) || 
%000001			verilator_coverage: (next point on previous line)

%000000				(aluop_i == `EXE_SUB_OP)) && (ov_sum == 1'b1)) begin
%000000				wreg_o = `WriteDisable;
			end 
%000001			else begin
%000001				wreg_o = wreg_i;
			end
	
%000001			case (alusel_i) 
%000000				`EXE_RES_LOGIC: begin
%000000					wdata_o	= logicout;
				end	
%000000				`EXE_RES_ARITHMETIC: begin
%000000					wdata_o	= arithmeticres;
				end 	
%000002				default: begin
%000001					wdata_o	= `ZeroWord;
				end
			endcase
		end		
	
	endmodule
	
