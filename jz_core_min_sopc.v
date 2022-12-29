
`include "defines.v"

//简单sopc
module jz_core_min_sopc(

	input wire										clk,
	input wire										rst,
	input wire[11:0] 								switch_on,
	output[`RegBus]									led_out
);

	wire[`InstAddrBus] inst_addr;
	wire[`InstBus] inst;
	wire rom_ce;
	wire mem_we_i;
	wire[`RegBus] mem_addr_i;
	wire[`RegBus] mem_data_i;
	wire[`RegBus] mem_data_o;
	wire mem_ce_i; 
	wire fp_clk;

	fp fp0(
		.clk(clk),
		.rst(rst),
		.fp_clk(fp_clk)
	);

 	jz_core core0(
		.clk(fp_clk),
		.rst(rst),
	
		.rom_addr_o(inst_addr),
		.rom_data_i(inst),
		.rom_ce_o(rom_ce),

		.ram_we_o(mem_we_i),
		.ram_addr_o(mem_addr_i),
		.ram_data_o(mem_data_i),
		.ram_data_i(mem_data_o),
		.ram_ce_o(mem_ce_i),
		.switch_on(switch_on),
		.led_out(led_out)
	);
	
	inst_rom inst_rom0(
		.ce(rom_ce),
		.addr(inst_addr),
		.inst(inst)	
	);

	data_ram data_ram0(
		.clk(fp_clk),
		.ce(mem_ce_i),
		.we(mem_we_i),
		.addr(mem_addr_i),
		.data_i(mem_data_i),
		.data_o(mem_data_o)	
	);

endmodule