	// verilator_coverage annotation
	`include "defines.v"
	`include "fpga_define.v"
	
	module mem(
	
%000001		input wire						rst,
		
%000002		input wire[`RegAddrBus]			wd_i,
%000000		input wire						wreg_i,
%000016		input wire[`RegBus]				wdata_i,
	
%000004	  	input wire[`AluOpBus]			aluop_i,
%000011		input wire[`RegBus]				mem_addr_i,
%000015		input wire[`RegBus]				reg2_i,
		
%000016		input wire[`RegBus]				mem_data_i,
	
	`ifdef FPGA_MODE
%000006		input wire[`SwitchWide]			switch_on,
%000005		output reg[`LedWide]			led_out,
	`endif
	
%000007		output reg[`RegAddrBus]			wd_o,
%000002		output reg						wreg_o,
%000029		output reg[`RegBus]				wdata_o,
	
		//访问存储器
%000017		output reg[`RegBus]				mem_addr_o,
%000001		output wire					 	mem_we_o,
%000018		output reg[`RegBus]				mem_data_o,
%000000		output reg						mem_ce_o
	);
	
%000000		wire[`RegBus] zero32;
%000001		reg mem_we;
	
		assign mem_we_o = mem_we ;
		assign zero32 = `ZeroWord;
	
		
%000002		always @ (*) begin
 002008			if(rst == `RstEnable) begin
 099000			verilator_coverage: (next point on previous line)

 001004				wd_o 		= `NOPRegAddr;
 001004				wreg_o 		= `WriteDisable;
 001004				wdata_o 	= `ZeroWord;
 001004				mem_addr_o 	= `ZeroWord;
 001004				mem_we 		= `WriteDisable;
 001004				mem_data_o 	= `ZeroWord;
 001004				mem_ce_o 	= `ChipDisable;			      
			end 
 099000			else begin
 099000			  	wd_o 		= wd_i;
 099000				wreg_o 		= wreg_i;
 099000				wdata_o 	= wdata_i;	
 099000				mem_we 		= `WriteDisable;
 099000				mem_addr_o 	= `ZeroWord;
 099000				mem_ce_o 	= `ChipDisable;		
 099000				case (aluop_i)
%000000					`EXE_LW_OP: begin
%000000						mem_addr_o 	= mem_addr_i;
%000000						mem_we 		= `WriteDisable;
	
					`ifdef FPGA_MODE
						//如果地址最高位为0，从存储器读取数据，否则从输入寄存器读取数据
%000000						wdata_o		= mem_addr_i[31] ? {{`RegWidth-`SwitchNum{1'b0}}, switch_on} : mem_data_i;
					`else
						wdata_o		= mem_data_i;
					`endif
%000000						mem_ce_o	= `ChipEnable;
					end
%000000					`EXE_SW_OP: begin
%000000						mem_addr_o	= mem_addr_i;
%000000						mem_we 		= `WriteEnable;
	
					`ifdef FPGA_MODE
						//如果地址最高位为0，则写入存储器，否则写入输出寄存器
%000000						mem_ce_o	= mem_addr_i[31] ? `ChipDisable : `ChipEnable;
%000000						led_out		= mem_addr_i[31] ? reg2_i[`LedWide] : `LedOff;
					`else
						mem_ce_o	= `ChipEnable;
					`endif
%000000						mem_data_o	= reg2_i;
					end
 198000					default: begin
						
					end
				endcase	
			end
		end
	endmodule
