
/*
`include "defines.v"
`include "fpga_define.v"
`timescale 1ns/1ps

//testbench
module jz_core_min_sopc_tb();

reg						CLOCK_50;
reg						rst;

`ifdef FPGA_MODE
reg[`SwitchWide]		switch_on;
wire[`LedWide]			led_out;

initial begin
	switch_on <= 12'd6;
end
`endif

initial begin
	CLOCK_50 = 1'b0;
	forever #10 CLOCK_50 = ~CLOCK_50;
end
      
initial begin
	rst 		<= `RstEnable;
	#195 rst	<= `RstDisable;
	#4100 $stop;
end
       
jz_core_min_sopc dut(
`ifdef FPGA_MODE
	.switch_on  (switch_on),
    .led_out    (led_out  ),
`endif
	.clk        (CLOCK_50 ),
	.rst        (rst      )	
);

endmodule
*/