//      // verilator_coverage annotation
        `include "defines.v"
        
        //执行阶段
        module ex(
        
%000002 	input wire					rst,
        	
 000988 	input wire[`AluOpBus]		aluop_i,
 005936 	input wire[`AluSelBus]		alusel_i,
%000001 	input wire[`RegBus]			reg1_i,
%000000 	input wire[`RegBus]			reg2_i,
 004952 	input wire[`RegAddrBus]		wd_i,
 005940 	input wire					wreg_i,
%000001 	input wire[`RegBus]			inst_i,
        	
        	
 004952 	output reg[`RegAddrBus]		wd_o,
 005941 	output reg					wreg_o,
%000000 	output reg[`RegBus]			wdata_o,
        	
 000988 	output wire[`AluOpBus]		aluop_o,
 004949 	output wire[`RegBus]		mem_addr_o,
%000000 	output wire[`RegBus]		reg2_o	
        	
        );
        
%000000 	reg[`RegBus] logicout; // 逻辑运算的结果
%000000 	reg[`RegBus] arithmeticres;// 算术运算的结果
%000000 	wire[`RegBus] reg2_i_mux; // 补码
%000001 	wire[`RegBus] reg1_i_not;	
%000000 	wire[`RegBus] result_sum;
%000001 	wire ov_sum; //溢出位
%000001 	wire reg1_eq_reg2; // 相等位
%000002 	wire reg1_lt_reg2; // 小于位
        
          assign aluop_o = aluop_i;
          
          //访存地址
          assign mem_addr_o = reg1_i + {{16{inst_i[15]}},inst_i[15:0]};
        
          assign reg2_o = reg2_i;
        
        	//逻辑运算		
%000001 	always @ (*) begin
 001002 		if(rst == `RstEnable) begin
 001002 			logicout = `ZeroWord;
        		end 
 099000 		else begin
 099000 			case (aluop_i)
 005434 				`EXE_OR_OP:			begin
 005434 					logicout = reg1_i | reg2_i;
        				end
 010879 				`EXE_AND_OP:		begin
 010879 					logicout = reg1_i & reg2_i;
        				end
 092587 				default:				begin
 092587 					logicout = `ZeroWord;
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
%000001 	always @ (*) begin
 001002 		if(rst == `RstEnable) begin
 001002 			arithmeticres = `ZeroWord;
        		end 
 099000 		else begin
 099000 			case (aluop_i)
 005445 				`EXE_SLT_OP: begin
 005445 					arithmeticres = {{`RegWidth-1{1'b0}}, reg1_lt_reg2};
        				end
 005445 				`EXE_ADD_OP: begin
 005445 					arithmeticres = result_sum; 
        				end
 005445 				`EXE_SUB_OP: begin
 005445 					arithmeticres = result_sum; 
        				end		
 092565 				default: begin
 092565 					arithmeticres = `ZeroWord;
        				end
        			endcase
        		end
        	end																			
        
        	//写入结果
%000001 	always @ (*) begin
%000001 		wd_o = wd_i;
        					
 010001 		if(((aluop_i == `EXE_ADD_OP) || 
%000000 			(aluop_i == `EXE_SUB_OP)) && (ov_sum == 1'b1)) begin
%000000 			wreg_o = `WriteDisable;
        		end 
 010001 		else begin
 010001 			wreg_o = wreg_i;
        		end
        
%000001 		case (alusel_i) 
 001483 			`EXE_RES_LOGIC: begin
 001483 				wdata_o	= logicout;
        			end	
 001485 			`EXE_RES_ARITHMETIC: begin
 001485 				wdata_o	= arithmeticres;
        			end 	
 007033 			default: begin
 007033 				wdata_o	= `ZeroWord;
        			end
        		endcase
        	end		
        
        endmodule
        
