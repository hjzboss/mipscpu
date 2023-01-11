	// verilator_coverage annotation
	//分频器，此处只是为了分到最大值，便于fpga板上观察
	`include "defines.v"
	
	module fp(
 020000	    input wire		clk,
%000001	    input wire		rst,
%000002	    output reg		fp_clk
	);
	
 019818	    reg[30:0] count;
	
 020000	    always @(posedge clk) begin
 000200	        if(rst == `RstEnable) begin
 000100	            count		<= 0;
 000100	            fp_clk		<= 0;
	        end 
%000000	        else if(count == 31'd14999999) begin 
 009900	        verilator_coverage: (next point on previous line)

%000000	            count		<= 0;
%000000	            fp_clk		<= !fp_clk;
	        end 
 009900	        else begin
 009900	            count		<= count + 1;
	        end
	    end
	
	endmodule
