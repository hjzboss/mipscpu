	// verilator_coverage annotation
	`include "defines.v"
	
	//控制模块，控制停顿
	module ctrl(
	
%000001		input wire			rst,
	
%000001		input wire			stallreq_from_id,
	
%000004		output reg[5:0]		stall       
		
	);
	
		//每一位对应一个阶段，为1则对应模块停顿
%000002		always @ (*) begin
 002008			if(rst == `RstEnable) begin
 001004				stall = 6'b000000;
			end 
%000000			else if(stallreq_from_id == `Stop) begin
 099000			verilator_coverage: (next point on previous line)

%000000				stall = 6'b000111;			
			end 
 099000			else begin
 099000				stall = 6'b000000;
			end
		end
				
	endmodule
