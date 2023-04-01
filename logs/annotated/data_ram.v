//      // verilator_coverage annotation
        `include "defines.v"
        
        //32位数据存储器
        module data_ram(
        
 020001 	input wire					clk,
 006925 	input wire					ce,
 006925 	input wire					we,
 006925 	input wire[`DataAddrBus]	addr,
%000001 	input wire[`DataBus]		data_i,
%000000 	output reg[`DataBus]		data_o
        	
        );
        
        	reg[`RegBus] data_mem[0:`DataMemNum-1];
        
 010000 	always @ (posedge clk) begin
 006533 		if (ce == `ChipDisable) begin
        		//do nothing
        		end
%000004 		else if(we == `WriteEnable) begin
 003463 			data_mem[addr] <= data_i;	   	    
        		end
        	end
        	
%000001 	always @ (*) begin
 071855 		if (ce == `ChipDisable) begin
 071855 			data_o = `ZeroWord;
        	  	end
 000044 		else if(we == `WriteDisable) begin
 000044 		    data_o = data_mem[addr];
        		end
 038103 		else begin
 038103 			data_o = `ZeroWord;
        		end
        	end		
        
        endmodule
