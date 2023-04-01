//      // verilator_coverage annotation
        `include "defines.v"
        
        module if_id(
        
 020001 	input wire						clk,
%000002 	input wire						rst,
        
%000001 	input wire[5:0]					stall,	
        
%000001 	input wire[`InstAddrBus]		if_pc,
 004950 	input wire[`InstBus]			if_inst,
%000000 	output reg[`InstAddrBus]		id_pc,
 004950 	output reg[`InstBus]			id_inst  
        	
        );
        
 010000 	always @ (posedge clk) begin
 000100 		if (rst == `RstEnable) begin
 000100 			id_pc	<= `ZeroWord;
 000100 			id_inst	<= `ZeroWord;
        		end 
%000000 		else if(stall[1] == `Stop && stall[2] == `NoStop) begin
%000000 			id_pc	<= `ZeroWord;
%000000 			id_inst	<= `ZeroWord;	
        	  	end 
%000001 		else if(stall[1] == `NoStop) begin
 009899 		  	id_pc	<= if_pc;
 009899 		  	id_inst	<= if_inst;
        		end
        	end
        
        endmodule
