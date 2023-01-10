`include "defines.v"

//32位数据存储器
module data_ram(

	input wire					clk,
	input wire					ce,
	input wire					we,
	input wire[`DataAddrBus]	addr,
	input wire[`DataBus]		data_i,
	output reg[`DataBus]		data_o
	
);

	reg[`RegBus] data_mem[0:`DataMemNum-1];

	always @ (posedge clk) begin
		if (ce == `ChipDisable) begin
		//do nothing
		end
		else if(we == `WriteEnable) begin
			data_mem[addr] <= data_i;	   	    
		end
	end
	
	always @ (*) begin
		if (ce == `ChipDisable) begin
			data_o <= `ZeroWord;
	  	end
		else if(we == `WriteDisable) begin
		    data_o <= data_mem[addr];
		end
		else begin
			data_o <= `ZeroWord;
		end
	end		

endmodule