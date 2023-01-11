	// verilator_coverage annotation
	`include "defines.v"
	
	module id_ex(
	
%000002		input wire						clk,
%000001		input wire						rst,
	
%000004		input wire[5:0]					stall,
		
%000004		input wire[`AluOpBus]			id_aluop,
%000001		input wire[`AluSelBus]			id_alusel,
%000018		input wire[`RegBus]				id_reg1,
%000015		input wire[`RegBus]				id_reg2,
%000005		input wire[`RegAddrBus]			id_wd,
%000000		input wire						id_wreg,
%000018		input wire[`RegBus]				id_inst,		
		
%000003		output reg[`AluOpBus]			ex_aluop,
%000000		output reg[`AluSelBus]			ex_alusel,
%000022		output reg[`RegBus]				ex_reg1,
%000018		output reg[`RegBus]				ex_reg2,
%000002		output reg[`RegAddrBus]			ex_wd,
%000000		output reg						ex_wreg,
%000014		output reg[`RegBus]				ex_inst	
		
	);
	
%000000		always @ (posedge clk) begin
%000000			if (rst == `RstEnable) begin
%000000				ex_aluop	<= `EXE_NOP_OP;
%000000				ex_alusel	<= `EXE_RES_NOP;
%000000				ex_reg1		<= `ZeroWord;
%000000				ex_reg2		<= `ZeroWord;
%000000				ex_wd		<= `NOPRegAddr;
%000000				ex_wreg		<= `WriteDisable;	
%000000		    	ex_inst		<= `ZeroWord;	
			end 
%000000			else if(stall[2] == `Stop && stall[3] == `NoStop) begin
%000000				ex_aluop	<= `EXE_NOP_OP;
%000000				ex_alusel	<= `EXE_RES_NOP;
%000000				ex_reg1		<= `ZeroWord;
%000000				ex_reg2		<= `ZeroWord;
%000000				ex_wd		<= `NOPRegAddr;
%000000				ex_wreg		<= `WriteDisable;	
%000000		    	ex_inst		<= `ZeroWord;			
			end 
%000000			else if(stall[2] == `NoStop) begin		
%000000			verilator_coverage: (next point on previous line)

%000000				ex_aluop	<= id_aluop;
%000000				ex_alusel	<= id_alusel;
%000000				ex_reg1		<= id_reg1;
%000000				ex_reg2		<= id_reg2;
%000000				ex_wd		<= id_wd;
%000000				ex_wreg		<= id_wreg;		
%000000		    	ex_inst		<= id_inst;				
			end
		end
		
	endmodule
