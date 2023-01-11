	// verilator_coverage annotation
	`include "defines.v"
	
	module if_id(
	
%000002		input wire						clk,
%000001		input wire						rst,
	
%000004		input wire[5:0]					stall,	
	
%000016		input wire[`InstAddrBus]		if_pc,
%000018		input wire[`InstBus]			if_inst,
%000015		output reg[`InstAddrBus]		id_pc,
%000018		output reg[`InstBus]			id_inst  
		
	);
	
%000000		always @ (posedge clk) begin
%000000			if (rst == `RstEnable) begin
%000000				id_pc	<= `ZeroWord;
%000000				id_inst	<= `ZeroWord;
			end 
%000000			else if(stall[1] == `Stop && stall[2] == `NoStop) begin
%000000				id_pc	<= `ZeroWord;
%000000				id_inst	<= `ZeroWord;	
		  	end 
%000000			else if(stall[1] == `NoStop) begin
%000000			verilator_coverage: (next point on previous line)

%000000			  	id_pc	<= if_pc;
%000000			  	id_inst	<= if_inst;
			end
		end
	
	endmodule
