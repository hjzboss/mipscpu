`include "fpga_define.v"
`include "defines.v"

//简单sopc
module jz_core_min_sopc(
`ifdef FPGA_MODE
	input wire[`SwitchWide]			switch_on,
	output wire[`LedWide]			led_out,
`endif
	input wire						clk,
	input wire						rst
);

	wire[`InstAddrBus] inst_addr;
	wire[`InstBus] inst;
	wire rom_ce;
	wire mem_we_i;
	wire[`RegBus] mem_addr_i;
	wire[`RegBus] mem_data_i;
	wire[`RegBus] mem_data_o;
	wire mem_ce_i; 
	wire clk_o;

`ifdef FPGA_MODE
	fp fp0(
		.clk	(clk	),
		.rst	(rst	),
		.fp_clk	(clk_o	)
	);
`else
	assign clk_o = clk;
`endif

	jz_core core0(
		.clk		(clk_o		),
		.rst		(rst		),

		.rom_addr_o	(inst_addr	),
		.rom_data_i	(inst		),
		.rom_ce_o	(rom_ce		),

`ifdef FPGA_MODE
		.switch_on	(switch_on	),
		.led_out	(led_out	),
`endif

		.ram_we_o	(mem_we_i	),
		.ram_addr_o	(mem_addr_i	),
		.ram_data_o	(mem_data_i	),
		.ram_data_i	(mem_data_o	),
		.ram_ce_o	(mem_ce_i	)
	);

	data_ram data_ram0(
		.clk		(clk_o		),
		.ce			(mem_ce_i	),
		.we			(mem_we_i	),
		.addr		(mem_addr_i	),
		.data_i		(mem_data_i	),
		.data_o		(mem_data_o	)	
	);

	inst_rom inst_rom0(
		.ce			(rom_ce		),
		.addr		(inst_addr	),
		.inst		(inst		)	
	);
endmodule