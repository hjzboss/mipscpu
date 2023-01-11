	// verilator_coverage annotation
	`include "defines.v"
	
	//译码阶段
	module id(
	
%000001		input wire						rst,
%000015		input wire[`InstAddrBus]		pc_i,
%000018		input wire[`InstBus]			inst_i,
	
	  	//ex阶段运算
%000003	  	input wire[`AluOpBus]			ex_aluop_i,
	
		//ex阶段寄存器的值，用于旁路
%000001		input wire						ex_wreg_i,
%000014		input wire[`RegBus]				ex_wdata_i,
%000002		input wire[`RegAddrBus]			ex_wd_i,
		
		//访存阶段寄存器的值
%000002		input wire						mem_wreg_i,
%000029		input wire[`RegBus]				mem_wdata_i,
%000007		input wire[`RegAddrBus]			mem_wd_i,
		
		//从寄存堆返回的值
%000021		input wire[`RegBus]				reg1_data_i,
%000011		input wire[`RegBus]				reg2_data_i,
	
		//要读取的寄存器地址，送给寄存器堆
%000000		output reg						reg1_read_o,
%000000		output reg						reg2_read_o,     
%000002		output reg[`RegAddrBus]			reg1_addr_o,
%000005		output reg[`RegAddrBus]			reg2_addr_o, 	      
		
		//送给下一阶段的信号
%000004		output reg[`AluOpBus]			aluop_o,
%000001		output reg[`AluSelBus]			alusel_o,
%000018		output reg[`RegBus]				reg1_o,
%000015		output reg[`RegBus]				reg2_o,
%000005		output reg[`RegAddrBus]			wd_o,
%000000		output reg						wreg_o,
%000018		output wire[`RegBus]			inst_o,
		
%000001		output reg						branch_flag_o,
%000015		output reg[`RegBus]				branch_target_address_o,
		
%000001		output wire						stallreq	
	);
	
%000006		wire[5:0] op = inst_i[31:26];
%000001		wire[4:0] op2 = inst_i[10:6];
%000003		wire[5:0] op3 = inst_i[5:0];
%000003		wire[4:0] op4 = inst_i[20:16];
%000018		reg[`RegBus] imm;
%000014		wire[`RegBus] pc_plus_8;
%000021		wire[`RegBus] pc_plus_4;
%000012		wire[`RegBus] imm_sll2_signedext;  
	
%000000		reg stallreq_for_reg1_loadrelate;
%000000		reg stallreq_for_reg2_loadrelate;
%000001		wire pre_inst_is_load;
	  
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
%000002		always @(*) begin	
 002008			if (rst == `RstEnable) begin
 099000			verilator_coverage: (next point on previous line)

 001004				aluop_o					= `EXE_NOP_OP;
 001004				alusel_o				= `EXE_RES_NOP;
 001004				wd_o					= `NOPRegAddr;
 001004				wreg_o					= `WriteDisable;
 001004				reg1_read_o				= 1'b0;
 001004				reg2_read_o				= 1'b0;
 001004				reg1_addr_o				= `NOPRegAddr;
 001004				reg2_addr_o				= `NOPRegAddr;
 001004				imm						= 32'h0;	
 001004				branch_target_address_o	= `ZeroWord;
 001004				branch_flag_o 			= `NotBranch;				
			end 
 099000		  	else begin
 099000				aluop_o					= `EXE_NOP_OP;
 099000				alusel_o				= `EXE_RES_NOP;
 099000				wd_o					= inst_i[15:11];
 099000				wreg_o					= `WriteDisable;  
 099000				reg1_read_o				= 1'b0;
 099000				reg2_read_o				= 1'b0;
 099000				reg1_addr_o				= inst_i[25:21];
 099000				reg2_addr_o				= inst_i[20:16];		
 099000				imm						= `ZeroWord;
 099000				branch_target_address_o	= `ZeroWord;
 099000				branch_flag_o			= `NotBranch;		
 099000			  	case (op)
%000000					`EXE_SPECIAL_INST: begin
%000000						case (op2)
%000000							5'b00000: begin
%000000								case (op3)
%000000									`EXE_OR: begin
%000000										wreg_o		= `WriteEnable;		
%000000										aluop_o		= `EXE_OR_OP;
%000000										alusel_o	= `EXE_RES_LOGIC; 	
%000000										reg1_read_o	= 1'b1;	
%000000										reg2_read_o	= 1'b1;
									end  
%000000									`EXE_AND: begin
%000000										wreg_o		= `WriteEnable;		
%000000										aluop_o		= `EXE_AND_OP;
%000000										alusel_o	= `EXE_RES_LOGIC;	 
%000000										reg1_read_o	= 1'b1;	
%000000										reg2_read_o	= 1'b1;	
									end  					
%000000									`EXE_SLT: begin
%000000										wreg_o		= `WriteEnable;		
%000000										aluop_o		= `EXE_SLT_OP;
%000000										alusel_o	= `EXE_RES_ARITHMETIC;		
%000000										reg1_read_o	= 1'b1;	
%000000										reg2_read_o	= 1'b1;
									end						
%000000									`EXE_ADD: begin
%000000										wreg_o		= `WriteEnable;		
%000000										aluop_o		= `EXE_ADD_OP;
%000000										alusel_o	= `EXE_RES_ARITHMETIC;		
%000000										reg1_read_o	= 1'b1;	
%000000										reg2_read_o	= 1'b1;
									end
%000000									`EXE_SUB: begin
%000000										wreg_o		= `WriteEnable;		
%000000										aluop_o		= `EXE_SUB_OP;
%000000										alusel_o	= `EXE_RES_ARITHMETIC;		
%000000										reg1_read_o	= 1'b1;	
%000000										reg2_read_o	= 1'b1;
									end
%000000									default: begin
									end
								endcase
							end
%000000							default: begin
							end
						endcase	
					end								  
%000000					`EXE_J: begin
%000000						wreg_o					= `WriteDisable;		
%000000						aluop_o					= `EXE_J_OP;
%000000						alusel_o				= `EXE_RES_JUMP_BRANCH; 
%000000						reg1_read_o				= 1'b0;	
%000000						reg2_read_o				= 1'b0;
%000000						branch_target_address_o	= {pc_plus_4[31:28], inst_i[25:0], 2'b00};
%000000						branch_flag_o			= `Branch;		
					end
%000000					`EXE_BEQ: begin
%000000						wreg_o		= `WriteDisable;	
%000000						aluop_o		= `EXE_BEQ_OP;
%000000						alusel_o	= `EXE_RES_JUMP_BRANCH; 
%000000						reg1_read_o	= 1'b1;	
%000000						reg2_read_o	= 1'b1;	
%000000						if(reg1_o == reg2_o) begin
%000000						verilator_coverage: (next point on previous line)

%000000							branch_target_address_o	= pc_plus_4 + imm_sll2_signedext;
%000000							branch_flag_o			= `Branch;	  	
						end
					end
%000000					`EXE_LW: begin
%000000						wreg_o		= `WriteEnable;		
%000000						aluop_o		= `EXE_LW_OP;
%000000						alusel_o	= `EXE_RES_LOAD_STORE; 
%000000						reg1_read_o	= 1'b1;	
%000000						reg2_read_o	= 1'b0;	  	
%000000						wd_o		= inst_i[20:16]; 
					end
%000000					`EXE_SW: begin
%000000						wreg_o		= `WriteDisable;		
%000000						aluop_o		= `EXE_SW_OP;
%000000						reg1_read_o	= 1'b1;	
%000000						reg2_read_o	= 1'b1; 	
%000000						alusel_o	= `EXE_RES_LOAD_STORE; 
					end
 198000				default: begin
				end
				endcase		  //case op
			end		//if
		end         //always
		
	
		//旁路，解决id模块的数据冲突
%000002		always @(*) begin
%000001			stallreq_for_reg1_loadrelate = `NoStop;	
 002008			if(rst == `RstEnable) begin
 001004				reg1_o = `ZeroWord;	
			end 
%000000			else if(pre_inst_is_load == 1'b1 && ex_wd_i == reg1_addr_o 
%000000									&& reg1_read_o == 1'b1 ) begin
%000000			  	stallreq_for_reg1_loadrelate	= `Stop;
%000000				reg1_o							= `ZeroWord;			
			end 
%000000			else if((reg1_read_o == 1'b1) && (ex_wreg_i == 1'b1) 
%000000									&& (ex_wd_i == reg1_addr_o)) begin
%000000				reg1_o = ex_wdata_i; 
			end 
%000000			else if((reg1_read_o == 1'b1) && (mem_wreg_i == 1'b1) 
%000000									&& (mem_wd_i == reg1_addr_o)) begin
%000000				reg1_o = mem_wdata_i; 			
		  	end 
%000000			else if(reg1_read_o == 1'b1) begin
%000000		  		reg1_o = reg1_data_i;
		 	end 
 198000			else if(reg1_read_o == 1'b0) begin
%000000			verilator_coverage: (next point on previous line)

 099000		  		reg1_o = imm;
		  	end 
%000000			else begin
%000000		    	reg1_o = `ZeroWord;
		  	end
		end
		
		
%000002		always @(*) begin
%000001			stallreq_for_reg2_loadrelate = `NoStop;
 002008			if(rst == `RstEnable) begin
 001004				reg2_o = `ZeroWord;
			end
%000000			else if(pre_inst_is_load == 1'b1 && ex_wd_i == reg2_addr_o 
%000000									&& reg2_read_o == 1'b1) begin
%000000			  	stallreq_for_reg2_loadrelate	= `Stop;
%000000				reg2_o							= `ZeroWord;
			end 
%000000			else if((reg2_read_o == 1'b1) && (ex_wreg_i == 1'b1) 
%000000									&& (ex_wd_i == reg2_addr_o)) begin
%000000				reg2_o = ex_wdata_i;
			end 
%000000			else if((reg2_read_o == 1'b1) && (mem_wreg_i == 1'b1) 
%000000									&& (mem_wd_i == reg2_addr_o)) begin
%000000				reg2_o = mem_wdata_i;
		  	end
%000000			else if(reg2_read_o == 1'b1) begin
%000000		  		reg2_o = reg2_data_i;
		  	end
 198000			else if(reg2_read_o == 1'b0) begin
%000000			verilator_coverage: (next point on previous line)

 099000		  		reg2_o = imm;
		  	end 
%000000			else begin
%000000		    	reg2_o = `ZeroWord;
		  	end
		end
	
	endmodule
