//      // verilator_coverage annotation
        `include "defines.v"
        
        //译码阶段
        module id(
        
%000002 	input wire						rst,
%000000 	input wire[`InstAddrBus]		pc_i,
 004950 	input wire[`InstBus]			inst_i,
        
          	//ex阶段运算
 000988   	input wire[`AluOpBus]			ex_aluop_i,
        
        	//ex阶段寄存器的值，用于旁路
 005941 	input wire						ex_wreg_i,
%000000 	input wire[`RegBus]				ex_wdata_i,
 004952 	input wire[`RegAddrBus]			ex_wd_i,
        	
        	//访存阶段寄存器的值
 005941 	input wire						mem_wreg_i,
%000001 	input wire[`RegBus]				mem_wdata_i,
 004950 	input wire[`RegAddrBus]			mem_wd_i,
        	
        	//从寄存堆返回的值
%000002 	input wire[`RegBus]				reg1_data_i,
%000002 	input wire[`RegBus]				reg2_data_i,
        
        	//要读取的寄存器地址，送给寄存器堆
 004948 	output reg						reg1_read_o,
 004949 	output reg						reg2_read_o,     
%000000 	output reg[`RegAddrBus]			reg1_addr_o,
%000000 	output reg[`RegAddrBus]			reg2_addr_o, 	      
        	
        	//送给下一阶段的信号
 000988 	output reg[`AluOpBus]			aluop_o,
 005935 	output reg[`AluSelBus]			alusel_o,
%000000 	output reg[`RegBus]				reg1_o,
%000000 	output reg[`RegBus]				reg2_o,
 004952 	output reg[`RegAddrBus]			wd_o,
 005940 	output reg						wreg_o,
 004950 	output wire[`RegBus]			inst_o,
        	
 001976 	output reg						branch_flag_o,
%000001 	output reg[`RegBus]				branch_target_address_o,
        	
%000002 	output wire						stallreq	
        );
        
 006927 	wire[5:0] op = inst_i[31:26];
 006927 	wire[4:0] op2 = inst_i[10:6];
 004950 	wire[5:0] op3 = inst_i[5:0];
%000001 	wire[4:0] op4 = inst_i[20:16];
%000001 	reg[`RegBus] imm;
%000000 	wire[`RegBus] pc_plus_8;
%000001 	wire[`RegBus] pc_plus_4;
 004951 	wire[`RegBus] imm_sll2_signedext;  
        
%000001 	reg stallreq_for_reg1_loadrelate;
%000003 	reg stallreq_for_reg2_loadrelate;
%000004 	wire pre_inst_is_load;
          
        	assign pc_plus_8 = pc_i + 8;
        	assign pc_plus_4 = pc_i +4;
        
        	//立即数符号位扩展
        	assign imm_sll2_signedext = {{14{inst_i[15]}}, inst_i[15:0], 2'b00 }; 
        	
        	//停顿信号，解决数据相关，送回给控制模块
        	assign stallreq = stallreq_for_reg1_loadrelate | stallreq_for_reg2_loadrelate;
        
        	//上一条指令是否为访存指令 
        	assign pre_inst_is_load = (ex_aluop_i == `EXE_LW_OP) ? 1'b1 : 1'b0;
        
        	assign inst_o = inst_i;
        		
        	//指令译码
%000001 	always @(*) begin	
 001002 		if (rst == `RstEnable) begin
 001002 			aluop_o					= `EXE_NOP_OP;
 001002 			alusel_o				= `EXE_RES_NOP;
 001002 			wd_o					= `NOPRegAddr;
 001002 			wreg_o					= `WriteDisable;
 001002 			reg1_read_o				= 1'b0;
 001002 			reg2_read_o				= 1'b0;
 001002 			reg1_addr_o				= `NOPRegAddr;
 001002 			reg2_addr_o				= `NOPRegAddr;
 001002 			imm						= 32'h0;	
 001002 			branch_target_address_o	= `ZeroWord;
 001002 			branch_flag_o 			= `NotBranch;				
        		end 
 099000 	  	else begin
 099000 			aluop_o					= `EXE_NOP_OP;
 099000 			alusel_o				= `EXE_RES_NOP;
 099000 			wd_o					= inst_i[15:11];
 099000 			wreg_o					= `WriteDisable;  
 099000 			reg1_read_o				= 1'b0;
 099000 			reg2_read_o				= 1'b0;
 099000 			reg1_addr_o				= inst_i[25:21];
 099000 			reg2_addr_o				= inst_i[20:16];		
 099000 			imm						= `ZeroWord;
 099000 			branch_target_address_o	= `ZeroWord;
 099000 			branch_flag_o			= `NotBranch;		
 099000 		  	case (op)
 059884 				`EXE_SPECIAL_INST: begin
 059884 					case (op2)
 059884 						5'b00000: begin
 059884 							case (op3)
 005444 								`EXE_OR: begin
 005444 									wreg_o		= `WriteEnable;		
 005444 									aluop_o		= `EXE_OR_OP;
 005444 									alusel_o	= `EXE_RES_LOGIC; 	
 005444 									reg1_read_o	= 1'b1;	
 005444 									reg2_read_o	= 1'b1;
        								end  
 010879 								`EXE_AND: begin
 010879 									wreg_o		= `WriteEnable;		
 010879 									aluop_o		= `EXE_AND_OP;
 010879 									alusel_o	= `EXE_RES_LOGIC;	 
 010879 									reg1_read_o	= 1'b1;	
 010879 									reg2_read_o	= 1'b1;	
        								end  					
 005445 								`EXE_SLT: begin
 005445 									wreg_o		= `WriteEnable;		
 005445 									aluop_o		= `EXE_SLT_OP;
 005445 									alusel_o	= `EXE_RES_ARITHMETIC;		
 005445 									reg1_read_o	= 1'b1;	
 005445 									reg2_read_o	= 1'b1;
        								end						
 005456 								`EXE_ADD: begin
 005456 									wreg_o		= `WriteEnable;		
 005456 									aluop_o		= `EXE_ADD_OP;
 005456 									alusel_o	= `EXE_RES_ARITHMETIC;		
 005456 									reg1_read_o	= 1'b1;	
 005456 									reg2_read_o	= 1'b1;
        								end
 005445 								`EXE_SUB: begin
 005445 									wreg_o		= `WriteEnable;		
 005445 									aluop_o		= `EXE_SUB_OP;
 005445 									alusel_o	= `EXE_RES_ARITHMETIC;		
 005445 									reg1_read_o	= 1'b1;	
 005445 									reg2_read_o	= 1'b1;
        								end
 027215 								default: begin
        								end
        							endcase
        						end
%000000 						default: begin
        						end
        					endcase	
        				end								  
 005434 				`EXE_J: begin
 005434 					wreg_o					= `WriteDisable;		
 005434 					aluop_o					= `EXE_J_OP;
 005434 					alusel_o				= `EXE_RES_JUMP_BRANCH; 
 005434 					reg1_read_o				= 1'b0;	
 005434 					reg2_read_o				= 1'b0;
 005434 					branch_target_address_o	= {pc_plus_4[31:28], inst_i[25:0], 2'b00};
 005434 					branch_flag_o			= `Branch;		
        				end
 005434 				`EXE_BEQ: begin
 005434 					wreg_o		= `WriteDisable;	
 005434 					aluop_o		= `EXE_BEQ_OP;
 005434 					alusel_o	= `EXE_RES_JUMP_BRANCH; 
 005434 					reg1_read_o	= 1'b1;	
 005434 					reg2_read_o	= 1'b1;	
%000000 					if(reg1_o == reg2_o) begin
 005434 						branch_target_address_o	= pc_plus_4 + imm_sll2_signedext;
 005434 						branch_flag_o			= `Branch;	  	
        					end
        				end
 000044 				`EXE_LW: begin
 000044 					wreg_o		= `WriteEnable;		
 000044 					aluop_o		= `EXE_LW_OP;
 000044 					alusel_o	= `EXE_RES_LOAD_STORE; 
 000044 					reg1_read_o	= 1'b1;	
 000044 					reg2_read_o	= 1'b0;	  	
 000044 					wd_o		= inst_i[20:16]; 
        				end
 038104 				`EXE_SW: begin
 038104 					wreg_o		= `WriteDisable;		
 038104 					aluop_o		= `EXE_SW_OP;
 038104 					reg1_read_o	= 1'b1;	
 038104 					reg2_read_o	= 1'b1; 	
 038104 					alusel_o	= `EXE_RES_LOAD_STORE; 
        				end
%000000 			default: begin
        			end
        			endcase		  //case op
        		end		//if
        	end         //always
        	
        
        	//旁路，解决id模块的数据冲突
%000001 	always @(*) begin
%000001 		stallreq_for_reg1_loadrelate = `NoStop;	
 001002 		if(rst == `RstEnable) begin
 001002 			reg1_o = `ZeroWord;	
        		end 
%000000 		else if(pre_inst_is_load == 1'b1 && ex_wd_i == reg1_addr_o 
%000000 								&& reg1_read_o == 1'b1 ) begin
%000000 		  	stallreq_for_reg1_loadrelate	= `Stop;
%000000 			reg1_o							= `ZeroWord;			
        		end 
%000000 		else if((reg1_read_o == 1'b1) && (ex_wreg_i == 1'b1) 
%000000 								&& (ex_wd_i == reg1_addr_o)) begin
%000000 			reg1_o = ex_wdata_i; 
        		end 
 010879 		else if((reg1_read_o == 1'b1) && (mem_wreg_i == 1'b1) 
 010879 								&& (mem_wd_i == reg1_addr_o)) begin
 010879 			reg1_o = mem_wdata_i; 			
        	  	end 
 065372 		else if(reg1_read_o == 1'b1) begin
 065372 	  		reg1_o = reg1_data_i;
        	 	end 
%000000 		else if(reg1_read_o == 1'b0) begin
 032649 	  		reg1_o = imm;
        	  	end 
%000000 		else begin
%000000 	    	reg1_o = `ZeroWord;
        	  	end
        	end
        	
        	
%000001 	always @(*) begin
%000001 		stallreq_for_reg2_loadrelate = `NoStop;
 001002 		if(rst == `RstEnable) begin
 001002 			reg2_o = `ZeroWord;
        		end
 000011 		else if(pre_inst_is_load == 1'b1 && ex_wd_i == reg2_addr_o 
 000011 								&& reg2_read_o == 1'b1) begin
 000011 		  	stallreq_for_reg2_loadrelate	= `Stop;
 000011 			reg2_o							= `ZeroWord;
        		end 
 032648 		else if((reg2_read_o == 1'b1) && (ex_wreg_i == 1'b1) 
 032648 								&& (ex_wd_i == reg2_addr_o)) begin
 032648 			reg2_o = ex_wdata_i;
        		end 
 005478 		else if((reg2_read_o == 1'b1) && (mem_wreg_i == 1'b1) 
 005478 								&& (mem_wd_i == reg2_addr_o)) begin
 005478 			reg2_o = mem_wdata_i;
        	  	end
 038070 		else if(reg2_read_o == 1'b1) begin
 038070 	  		reg2_o = reg2_data_i;
        	  	end
%000000 		else if(reg2_read_o == 1'b0) begin
 032693 	  		reg2_o = imm;
        	  	end 
%000000 		else begin
%000000 	    	reg2_o = `ZeroWord;
        	  	end
        	end
        
        endmodule
