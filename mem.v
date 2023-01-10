`include "defines.v"
`include "fpga_define.v"

module mem(

	input wire						rst,
	
	input wire[`RegAddrBus]			wd_i,
	input wire						wreg_i,
	input wire[`RegBus]				wdata_i,

  	input wire[`AluOpBus]			aluop_i,
	input wire[`RegBus]				mem_addr_i,
	input wire[`RegBus]				reg2_i,
	
	input wire[`RegBus]				mem_data_i,

`ifdef FPGA_MODE
	input wire[`SwitchWide]			switch_on,
	output reg[`LedWide]			led_out,
`endif

	output reg[`RegAddrBus]			wd_o,
	output reg						wreg_o,
	output reg[`RegBus]				wdata_o,

	//访问存储器
	output reg[`RegBus]				mem_addr_o,
	output wire					 	mem_we_o,
	output reg[`RegBus]				mem_data_o,
	output reg						mem_ce_o
);

	wire[`RegBus] zero32;
	reg mem_we;

	assign mem_we_o = mem_we ;
	assign zero32 = `ZeroWord;

	
	always @ (*) begin
		if(rst == `RstEnable) begin
			wd_o 		<= `NOPRegAddr;
			wreg_o 		<= `WriteDisable;
			wdata_o 	<= `ZeroWord;
			mem_addr_o 	<= `ZeroWord;
			mem_we 		<= `WriteDisable;
			mem_data_o 	<= `ZeroWord;
			mem_ce_o 	<= `ChipDisable;			      
		end 
		else begin
		  	wd_o 		<= wd_i;
			wreg_o 		<= wreg_i;
			wdata_o 	<= wdata_i;	
			mem_we 		<= `WriteDisable;
			mem_addr_o 	<= `ZeroWord;
			mem_ce_o 	<= `ChipDisable;		
			case (aluop_i)
				`EXE_LW_OP: begin
					mem_addr_o 	<= mem_addr_i;
					mem_we 		<= `WriteDisable;

				`ifdef FPGA_MODE
					//如果地址最高位为0，从存储器读取数据，否则从输入寄存器读取数据
					wdata_o		<= mem_addr_i[31] ? switch_on : mem_data_i;
				`else
					wdata_o		<= mem_data_i;
				`endif
					mem_ce_o	<= `ChipEnable;
				end
				`EXE_SW_OP: begin
					mem_addr_o	<= mem_addr_i;
					mem_we 		<= `WriteEnable;

				`ifdef FPGA_MODE
					//如果地址最高位为0，则写入存储器，否则写入输出寄存器
					mem_ce_o	<= mem_addr_i[31] ? `ChipDisable : `ChipEnable;
					led_out		<= mem_addr_i[31] ? reg2_i[`LedWide] : `LedOff;
				`else
					mem_ce_o	<= `ChipEnable;
				`endif
					mem_data_o	<= reg2_i;
				end
			endcase	
		end
	end
endmodule