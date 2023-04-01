//      // verilator_coverage annotation
        `include "defines.v"
        `include "fpga_define.v"
        
        module mem(
        
%000002 	input wire						rst,
        	
 004949 	input wire[`RegAddrBus]			wd_i,
 005941 	input wire						wreg_i,
%000002 	input wire[`RegBus]				wdata_i,
        
 000990   	input wire[`AluOpBus]			aluop_i,
 004947 	input wire[`RegBus]				mem_addr_i,
%000001 	input wire[`RegBus]				reg2_i,
        	
%000000 	input wire[`RegBus]				mem_data_i,
        
        `ifdef FPGA_MODE
        	input wire[`SwitchWide]			switch_on,
        	output reg[`LedWide]			led_out,
        `endif
        
 004950 	output reg[`RegAddrBus]			wd_o,
 005941 	output reg						wreg_o,
%000001 	output reg[`RegBus]				wdata_o,
        
        	//访问存储器
 006925 	output reg[`RegBus]				mem_addr_o,
 006925 	output wire					 	mem_we_o,
%000001 	output reg[`RegBus]				mem_data_o,
 006925 	output reg						mem_ce_o
        );
        
%000001 	wire[`RegBus] zero32;
 006925 	reg mem_we;
        
        	assign mem_we_o = mem_we ;
        	assign zero32 = `ZeroWord;
        
        	
%000001 	always @ (*) begin
 001002 		if(rst == `RstEnable) begin
 001002 			wd_o 		= `NOPRegAddr;
 001002 			wreg_o 		= `WriteDisable;
 001002 			wdata_o 	= `ZeroWord;
 001002 			mem_addr_o 	= `ZeroWord;
 001002 			mem_we 		= `WriteDisable;
 001002 			mem_data_o 	= `ZeroWord;
 001002 			mem_ce_o 	= `ChipDisable;			      
        		end 
 099000 		else begin
 099000 		  	wd_o 		= wd_i;
 099000 			wreg_o 		= wreg_i;
 099000 			wdata_o 	= wdata_i;	
 099000 			mem_we 		= `WriteDisable;
 099000 			mem_addr_o 	= `ZeroWord;
 099000 			mem_ce_o 	= `ChipDisable;		
 099000 			case (aluop_i)
 000044 				`EXE_LW_OP: begin
 000044 					mem_addr_o 	= mem_addr_i;
 000044 					mem_we 		= `WriteDisable;
        
        				`ifdef FPGA_MODE
        					//如果地址最高位为0，从存储器读取数据，否则从输入寄存器读取数据
        					wdata_o		= mem_addr_i[31] ? {{`RegWidth-`SwitchNum{1'b0}}, switch_on} : mem_data_i;
        				`else
 000044 					wdata_o		= mem_data_i;
        				`endif
 000044 					mem_ce_o	= `ChipEnable;
        				end
 038103 				`EXE_SW_OP: begin
 038103 					mem_addr_o	= mem_addr_i;
 038103 					mem_we 		= `WriteEnable;
        
        				`ifdef FPGA_MODE
        					//如果地址最高位为0，则写入存储器，否则写入输出寄存器
        					mem_ce_o	= mem_addr_i[31] ? `ChipDisable : `ChipEnable;
        					led_out		= mem_addr_i[31] ? reg2_i[`LedWide] : `LedOff;
        				`else
 038103 					mem_ce_o	= `ChipEnable;
        				`endif
 038103 					mem_data_o	= reg2_i;
        				end
 070753 				default: begin
        					
        				end
        			endcase	
        		end
        	end
        endmodule
