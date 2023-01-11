	// verilator_coverage annotation
	`include "defines.v"
	
	//pc
	module pc_reg(
	
%000002		input wire						clk,
%000001		input wire						rst,
	
%000004		input wire[5:0]					stall,
	
%000001		input wire						branch_flag_i,
%000015		input wire[`RegBus]				branch_target_address_i,
		
%000016		output reg[`InstAddrBus]		pc,
%000000		output reg						ce
		
	);
	
%000000		always @ (posedge clk) begin
%000000			if (ce == `ChipDisable) begin
%000000				pc <= 32'h00000000;
			end 
%000000			else if(stall[0] == `NoStop) begin
%000000			verilator_coverage: (next point on previous line)

%000000			  	if(branch_flag_i == `Branch) begin
%000000			  	verilator_coverage: (next point on previous line)

%000000					pc	<= branch_target_address_i;
				end 
%000000				else begin
%000000			  		pc	<= pc + 4;
			  	end
			end
		end
	
%000000		always @ (posedge clk) begin
%000000			if (rst == `RstEnable) begin
%000000			verilator_coverage: (next point on previous line)

%000000				ce	<= `ChipDisable;
			end 
%000000			else begin
%000000				ce	<= `ChipEnable;
			end
		end
	
	endmodule
	
