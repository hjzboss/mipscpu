//      // verilator_coverage annotation
        `include "defines.v"
        
        //指令存储器
        module inst_rom(
        	
%000002 	input wire						ce,
%000001 	input wire[`InstAddrBus]		addr,
 004950 	output reg[`InstBus]			inst
        	
        );
        
        	reg[`InstBus]  inst_mem[0:`InstMemNum-1];
        
%000001 	initial $readmemh ("./JzCore/data/test.data", inst_mem);
        
%000001 	always @ (*) begin
 000101 		if (ce == `ChipDisable) begin
 000101 			inst = `ZeroWord;
        	  	end 
 009900 		else begin
 009900 		  	inst = inst_mem[addr[`InstMemNumLog2+1:2]];
        		end
        	end
        
        endmodule
        
