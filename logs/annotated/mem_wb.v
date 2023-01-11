	// verilator_coverage annotation
	`include "defines.v"
	
	module mem_wb(
	
%000002		input wire					clk,
%000001		input wire					rst,
	
%000004		input wire[5:0]				stall,	
	
%000007		input wire[`RegAddrBus]		mem_wd,
%000002		input wire					mem_wreg,
%000029		input wire[`RegBus]			mem_wdata,	
	
%000002		output reg[`RegAddrBus]		wb_wd,
%000001		output reg					wb_wreg,
%000014		output reg[`RegBus]			wb_wdata  
		
	);
	
	
%000000		always @(posedge clk) begin
%000000			if(rst == `RstEnable) begin
%000000				wb_wd 		<= `NOPRegAddr;
%000000				wb_wreg 	<= `WriteDisable;
%000000			  	wb_wdata 	<= `ZeroWord;			  	 	  	  
			end 
%000000			else if(stall[4] == `NoStop) begin
%000000			verilator_coverage: (next point on previous line)

%000000				wb_wd 		<= mem_wd;
%000000				wb_wreg 	<= mem_wreg;
%000000				wb_wdata 	<= mem_wdata;				
			end    
		end      
				
	
	endmodule
