//      // verilator_coverage annotation
        `include "defines.v"
        
        //控制模块，控制停顿
        module ctrl(
        
%000002 	input wire			rst,
        
%000002 	input wire			stallreq_from_id,
        
%000001 	output reg[5:0]		stall       
        	
        );
        
        	//每一位对应一个阶段，为1则对应模块停顿
%000001 	always @ (*) begin
 001002 		if(rst == `RstEnable) begin
 001002 			stall = 6'b000000;
        		end 
 000011 		else if(stallreq_from_id == `Stop) begin
 000011 			stall = 6'b000111;			
        		end 
 108889 		else begin
 108889 			stall = 6'b000000;
        		end
        	end
        			
        endmodule
