//      // verilator_coverage annotation
        `include "defines.v"
        
        module mem_wb(
        
 020001 	input wire					clk,
%000002 	input wire					rst,
        
%000001 	input wire[5:0]				stall,	
        
 004950 	input wire[`RegAddrBus]		mem_wd,
 005941 	input wire					mem_wreg,
%000001 	input wire[`RegBus]			mem_wdata,	
        
 004950 	output reg[`RegAddrBus]		wb_wd,
 005940 	output reg					wb_wreg,
%000001 	output reg[`RegBus]			wb_wdata  
        	
        );
        
        
 010000 	always @(posedge clk) begin
 000100 		if(rst == `RstEnable) begin
 000100 			wb_wd 		<= `NOPRegAddr;
 000100 			wb_wreg 	<= `WriteDisable;
 000100 		  	wb_wdata 	<= `ZeroWord;			  	 	  	  
        		end 
%000000 		else if(stall[4] == `NoStop) begin
 009900 			wb_wd 		<= mem_wd;
 009900 			wb_wreg 	<= mem_wreg;
 009900 			wb_wdata 	<= mem_wdata;				
        		end    
        	end      
        			
        
        endmodule
