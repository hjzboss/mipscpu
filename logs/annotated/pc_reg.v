//      // verilator_coverage annotation
        `include "defines.v"
        
        //pc
        module pc_reg(
        
 020001 	input wire						clk,
%000002 	input wire						rst,
        
%000001 	input wire[5:0]					stall,
        
 001976 	input wire						branch_flag_i,
%000001 	input wire[`RegBus]				branch_target_address_i,
        	
%000001 	output reg[`InstAddrBus]		pc,
%000002 	output reg						ce
        	
        );
        
 010000 	always @ (posedge clk) begin
 000101 		if (ce == `ChipDisable) begin
 000101 			pc <= 32'h00000000;
        		end 
%000001 		else if(stall[0] == `NoStop) begin
 000988 		  	if(branch_flag_i == `Branch) begin
 000988 				pc	<= branch_target_address_i;
        			end 
 008910 			else begin
 008910 		  		pc	<= pc + 4;
        		  	end
        		end
        	end
        
 010000 	always @ (posedge clk) begin
 000100 		if (rst == `RstEnable) begin
 000100 			ce	<= `ChipDisable;
        		end 
 009900 		else begin
 009900 			ce	<= `ChipEnable;
        		end
        	end
        
        endmodule
        
