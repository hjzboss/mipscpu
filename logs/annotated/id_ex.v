//      // verilator_coverage annotation
        `include "defines.v"
        
        module id_ex(
        
 020001 	input wire						clk,
%000002 	input wire						rst,
        
%000001 	input wire[5:0]					stall,
        	
 000988 	input wire[`AluOpBus]			id_aluop,
 005935 	input wire[`AluSelBus]			id_alusel,
%000000 	input wire[`RegBus]				id_reg1,
%000000 	input wire[`RegBus]				id_reg2,
 004952 	input wire[`RegAddrBus]			id_wd,
 005940 	input wire						id_wreg,
 004950 	input wire[`RegBus]				id_inst,		
        	
 000988 	output reg[`AluOpBus]			ex_aluop,
 005936 	output reg[`AluSelBus]			ex_alusel,
%000001 	output reg[`RegBus]				ex_reg1,
%000000 	output reg[`RegBus]				ex_reg2,
 004952 	output reg[`RegAddrBus]			ex_wd,
 005940 	output reg						ex_wreg,
%000001 	output reg[`RegBus]				ex_inst	
        	
        );
        
 010000 	always @ (posedge clk) begin
 000100 		if (rst == `RstEnable) begin
 000100 			ex_aluop	<= `EXE_NOP_OP;
 000100 			ex_alusel	<= `EXE_RES_NOP;
 000100 			ex_reg1		<= `ZeroWord;
 000100 			ex_reg2		<= `ZeroWord;
 000100 			ex_wd		<= `NOPRegAddr;
 000100 			ex_wreg		<= `WriteDisable;	
 000100 	    	ex_inst		<= `ZeroWord;	
        		end 
%000001 		else if(stall[2] == `Stop && stall[3] == `NoStop) begin
%000001 			ex_aluop	<= `EXE_NOP_OP;
%000001 			ex_alusel	<= `EXE_RES_NOP;
%000001 			ex_reg1		<= `ZeroWord;
%000001 			ex_reg2		<= `ZeroWord;
%000001 			ex_wd		<= `NOPRegAddr;
%000001 			ex_wreg		<= `WriteDisable;	
%000001 	    	ex_inst		<= `ZeroWord;			
        		end 
%000000 		else if(stall[2] == `NoStop) begin		
 009899 			ex_aluop	<= id_aluop;
 009899 			ex_alusel	<= id_alusel;
 009899 			ex_reg1		<= id_reg1;
 009899 			ex_reg2		<= id_reg2;
 009899 			ex_wd		<= id_wd;
 009899 			ex_wreg		<= id_wreg;		
 009899 	    	ex_inst		<= id_inst;				
        		end
        	end
        	
        endmodule
