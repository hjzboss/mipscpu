
`include "defines.v"

//控制模块，控制停顿
module ctrl(

	input wire			rst,

	input wire			stallreq_from_id,

	output reg[5:0]		stall       
	
);

	//每一位对应一个阶段，为1则对应模块停顿
	always @ (*) begin
		if(rst == `RstEnable) begin
			stall <= 6'b000000;
		end 
		else if(stallreq_from_id == `Stop) begin
			stall <= 6'b000111;			
		end 
		else begin
			stall <= 6'b000000;
		end
	end
			
endmodule