	// verilator_coverage annotation
	`include "defines.v"
	
	//指令存储器
	module inst_rom(
		
%000000		input wire						ce,
%000016		input wire[`InstAddrBus]		addr,
%000018		output reg[`InstBus]			inst
		
	);
	
		reg[`InstBus]  inst_mem[0:`InstMemNum-1];
	
%000002		initial $readmemh ("./JzCore/data/test.data", inst_mem);
	
%000002		always @ (*) begin
%000002			if (ce == `ChipDisable) begin
%000000			verilator_coverage: (next point on previous line)

%000001				inst = `ZeroWord;
		  	end 
%000000			else begin
%000000			  	inst = inst_mem[addr[`InstMemNumLog2+1:2]];
			end
		end
	
	endmodule
	
