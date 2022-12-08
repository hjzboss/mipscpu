
`include "defines.v"
`timescale 1ns/1ps

//testbench
module intel_core_i999_min_sopc_tb();

  reg     CLOCK_50;
  reg     rst;
  reg[11:0]     switch_on;
       
  initial begin
    CLOCK_50 = 1'b0;
    forever #10 CLOCK_50 = ~CLOCK_50;
  end
      
  initial begin
    rst = `RstEnable;
    switch_on = 12'd6;
    #195 rst= `RstDisable;
    #4100 $stop;
  end
       
  intel_core_i999_min_sopc intel_core_i999_min_sopc0(
		.clk(CLOCK_50),
		.rst(rst),
    .switch_on(switch_on)
	);

endmodule