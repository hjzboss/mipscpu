//      // verilator_coverage annotation
        `include "defines.v"
        
        module ex_mem(
        
 020001 	input wire					clk,
%000002 	input wire					rst,
        
%000001 	input wire[5:0]				stall,	
        	
 004952 	input wire[`RegAddrBus]		ex_wd,
 005941 	input wire					ex_wreg,
%000000 	input wire[`RegBus]			ex_wdata, 	
        
 000988   	input wire[`AluOpBus]		ex_aluop,
 004949 	input wire[`RegBus]			ex_mem_addr,
%000000 	input wire[`RegBus]			ex_reg2,	
        	
 004949 	output reg[`RegAddrBus]		mem_wd,
 005941 	output reg					mem_wreg,
%000002 	output reg[`RegBus]			mem_wdata,
        
 000990  	output reg[`AluOpBus]		mem_aluop,
 004947 	output reg[`RegBus]			mem_mem_addr,
%000001 	output reg[`RegBus]			mem_reg2
        	
        );
        
        
 010000 	always @ (posedge clk) begin
 000100 		if(rst == `RstEnable) begin
 000100 			mem_wd 			<= `NOPRegAddr;
 000100 			mem_wreg		<= `WriteDisable;
 000100 		  	mem_wdata		<= `ZeroWord;	
 000100   			mem_aluop		<= `EXE_NOP_OP;
 000100 			mem_mem_addr	<= `ZeroWord;
 000100 			mem_reg2		<= `ZeroWord;			  				    
        		end 
%000000 		else if(stall[3] == `NoStop) begin
 009900 			mem_wd			<= ex_wd;
 009900 			mem_wreg		<= ex_wreg;
 009900 			mem_wdata		<= ex_wdata;	
 009900   			mem_aluop		<= ex_aluop;
 009900 			mem_mem_addr	<= ex_mem_addr;
 009900 			mem_reg2		<= ex_reg2;			
        		end
        	end     
        			
        
        endmodule
