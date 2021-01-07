`include "defines.v"

//译码阶段
module id(

	input wire					  rst,
	input wire[`InstAddrBus]	  pc_i,
	input wire[`InstBus]          inst_i,

  	//ex阶段运算
  	input wire[`AluOpBus]		  ex_aluop_i,

	//ex阶段寄存器的值，用于旁路
	input wire					  ex_wreg_i,
	input wire[`RegBus]			  ex_wdata_i,
	input wire[`RegAddrBus]       ex_wd_i,
	
	//访存阶段寄存器的值
	input wire					  mem_wreg_i,
	input wire[`RegBus]			  mem_wdata_i,
	input wire[`RegAddrBus]       mem_wd_i,
	
	//从寄存堆返回的值
	input wire[`RegBus]           reg1_data_i,
	input wire[`RegBus]           reg2_data_i,

	//要读取的寄存器地址，送给寄存器堆
	output reg                    reg1_read_o,
	output reg                    reg2_read_o,     
	output reg[`RegAddrBus]       reg1_addr_o,
	output reg[`RegAddrBus]       reg2_addr_o, 	      
	
	//送给下一阶段的信号
	output reg[`AluOpBus]         aluop_o,
	output reg[`AluSelBus]        alusel_o,
	output reg[`RegBus]           reg1_o,
	output reg[`RegBus]           reg2_o,
	output reg[`RegAddrBus]       wd_o,
	output reg                    wreg_o,
	output wire[`RegBus]          inst_o,
	
	output reg                    branch_flag_o,
	output reg[`RegBus]           branch_target_address_o,
	
	output wire                   stallreq	
);

	wire[5:0] op = inst_i[31:26];
	wire[4:0] op2 = inst_i[10:6];
	wire[5:0] op3 = inst_i[5:0];
	wire[4:0] op4 = inst_i[20:16];
	reg[`RegBus]	imm;
	wire[`RegBus] pc_plus_8;
	wire[`RegBus] pc_plus_4;
	wire[`RegBus] imm_sll2_signedext;  

	reg stallreq_for_reg1_loadrelate;
	reg stallreq_for_reg2_loadrelate;
	wire pre_inst_is_load;
  
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
	always @ (*) begin	
		if (rst == `RstEnable) begin
			aluop_o <= `EXE_NOP_OP;
			alusel_o <= `EXE_RES_NOP;
			wd_o <= `NOPRegAddr;
			wreg_o <= `WriteDisable;
			reg1_read_o <= 1'b0;
			reg2_read_o <= 1'b0;
			reg1_addr_o <= `NOPRegAddr;
			reg2_addr_o <= `NOPRegAddr;
			imm <= 32'h0;	
			branch_target_address_o <= `ZeroWord;
			branch_flag_o <= `NotBranch;				
	  end else begin
			aluop_o <= `EXE_NOP_OP;
			alusel_o <= `EXE_RES_NOP;
			wd_o <= inst_i[15:11];
			wreg_o <= `WriteDisable;  
			reg1_read_o <= 1'b0;
			reg2_read_o <= 1'b0;
			reg1_addr_o <= inst_i[25:21];
			reg2_addr_o <= inst_i[20:16];		
			imm <= `ZeroWord;
			branch_target_address_o <= `ZeroWord;
			branch_flag_o <= `NotBranch;		
		  case (op)
		    `EXE_SPECIAL_INST:		begin
		    	case (op2)
		    		5'b00000:			begin
		    			case (op3)
		    				`EXE_OR:	begin
		    					wreg_o <= `WriteEnable;		
								aluop_o <= `EXE_OR_OP;
		  						alusel_o <= `EXE_RES_LOGIC; 	
								reg1_read_o <= 1'b1;	
								reg2_read_o <= 1'b1;
								end  
		    				`EXE_AND:	begin
		    					wreg_o <= `WriteEnable;		
								aluop_o <= `EXE_AND_OP;
		  						alusel_o <= `EXE_RES_LOGIC;	 
								reg1_read_o <= 1'b1;	
								reg2_read_o <= 1'b1;	
								end  					
							`EXE_SLT: begin
								wreg_o <= `WriteEnable;		
								aluop_o <= `EXE_SLT_OP;
		  						alusel_o <= `EXE_RES_ARITHMETIC;		
								reg1_read_o <= 1'b1;	
								reg2_read_o <= 1'b1;
								end						
							`EXE_ADD: begin
								wreg_o <= `WriteEnable;		
								aluop_o <= `EXE_ADD_OP;
		  						alusel_o <= `EXE_RES_ARITHMETIC;		
								reg1_read_o <= 1'b1;	
								reg2_read_o <= 1'b1;
								end
							`EXE_SUB: begin
								wreg_o <= `WriteEnable;		
								aluop_o <= `EXE_SUB_OP;
		  						alusel_o <= `EXE_RES_ARITHMETIC;		
								reg1_read_o <= 1'b1;	
								reg2_read_o <= 1'b1;
								end													 											  											
						    default:	begin
						    end
						endcase
					end
					default: begin
					end
				endcase	
			end									  
			`EXE_J:			begin
		  		wreg_o <= `WriteDisable;		
				aluop_o <= `EXE_J_OP;
		  		alusel_o <= `EXE_RES_JUMP_BRANCH; 
				reg1_read_o <= 1'b0;	
				reg2_read_o <= 1'b0;
			    branch_target_address_o <= {pc_plus_4[31:28], inst_i[25:0], 2'b00};
			    branch_flag_o <= `Branch;		
			end
			`EXE_BEQ:			begin
		  		wreg_o <= `WriteDisable;	
				aluop_o <= `EXE_BEQ_OP;
		  		alusel_o <= `EXE_RES_JUMP_BRANCH; 
				reg1_read_o <= 1'b1;	
				reg2_read_o <= 1'b1;	
		  		if(reg1_o == reg2_o) begin
			    	branch_target_address_o <= pc_plus_4 + imm_sll2_signedext;
			    	branch_flag_o <= `Branch;	  	
			    end
			end
			`EXE_LW:			begin
		  		wreg_o <= `WriteEnable;		
				aluop_o <= `EXE_LW_OP;
		  		alusel_o <= `EXE_RES_LOAD_STORE; 
				reg1_read_o <= 1'b1;	
				reg2_read_o <= 1'b0;	  	
				wd_o <= inst_i[20:16]; 
			end
			`EXE_SW:			begin
		  		wreg_o <= `WriteDisable;		
				aluop_o <= `EXE_SW_OP;
		  		reg1_read_o <= 1'b1;	
				reg2_read_o <= 1'b1; 	
		  		alusel_o <= `EXE_RES_LOAD_STORE; 
			end							  	
		    default:			begin
		    end
		  endcase		  //case op
		  end		//if
	end         //always
	

	//旁路，解决id模块的数据冲突
	always @ (*) begin
			stallreq_for_reg1_loadrelate <= `NoStop;	
		if(rst == `RstEnable) begin
			reg1_o <= `ZeroWord;	
		end else if(pre_inst_is_load == 1'b1 && ex_wd_i == reg1_addr_o 
								&& reg1_read_o == 1'b1 ) begin
		  	stallreq_for_reg1_loadrelate <= `Stop;							
		end else if((reg1_read_o == 1'b1) && (ex_wreg_i == 1'b1) 
								&& (ex_wd_i == reg1_addr_o)) begin
			reg1_o <= ex_wdata_i; 
		end else if((reg1_read_o == 1'b1) && (mem_wreg_i == 1'b1) 
								&& (mem_wd_i == reg1_addr_o)) begin
			reg1_o <= mem_wdata_i; 			
	  end else if(reg1_read_o == 1'b1) begin
	  	reg1_o <= reg1_data_i;
	  end else if(reg1_read_o == 1'b0) begin
	  	reg1_o <= imm;
	  end else begin
	    reg1_o <= `ZeroWord;
	  end
	end
	
	
	always @ (*) begin
			stallreq_for_reg2_loadrelate <= `NoStop;
		if(rst == `RstEnable) begin
			reg2_o <= `ZeroWord;
		end else if(pre_inst_is_load == 1'b1 && ex_wd_i == reg2_addr_o 
								&& reg2_read_o == 1'b1 ) begin
		  stallreq_for_reg2_loadrelate <= `Stop;			
		end else if((reg2_read_o == 1'b1) && (ex_wreg_i == 1'b1) 
								&& (ex_wd_i == reg2_addr_o)) begin
			reg2_o <= ex_wdata_i; 
		end else if((reg2_read_o == 1'b1) && (mem_wreg_i == 1'b1) 
								&& (mem_wd_i == reg2_addr_o)) begin
			reg2_o <= mem_wdata_i;			
	  	end else if(reg2_read_o == 1'b1) begin
	  		reg2_o <= reg2_data_i;
	  	end else if(reg2_read_o == 1'b0) begin
	  		reg2_o <= imm;
	  	end else begin
	    	reg2_o <= `ZeroWord;
	  	end
	end

endmodule