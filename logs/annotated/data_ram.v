	// verilator_coverage annotation
	`include "defines.v"
	
	//32位数据存储器
	module data_ram(
	
%000002		input wire					clk,
%000000		input wire					ce,
%000001		input wire					we,
%000017		input wire[`DataAddrBus]	addr,
%000018		input wire[`DataBus]		data_i,
%000016		output reg[`DataBus]		data_o
		
	);
	
		reg[`RegBus] data_mem[0:`DataMemNum-1];
	
%000000		always @ (posedge clk) begin
%000000			if (ce == `ChipDisable) begin
			//do nothing
			end
%000000			else if(we == `WriteEnable) begin
%000000			verilator_coverage: (next point on previous line)

%000000				data_mem[addr] <= data_i;	   	    
			end
		end
		
%000002		always @ (*) begin
 200008			if (ce == `ChipDisable) begin
 100004				data_o = `ZeroWord;
		  	end
%000000			else if(we == `WriteDisable) begin
%000000			verilator_coverage: (next point on previous line)

%000000			    data_o = data_mem[addr];
			end
%000000			else begin
%000000				data_o = `ZeroWord;
			end
		end		
	
	endmodule
