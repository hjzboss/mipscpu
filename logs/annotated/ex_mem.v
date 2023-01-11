	// verilator_coverage annotation
	`include "defines.v"
	
	module ex_mem(
	
%000002		input wire					clk,
%000001		input wire					rst,
	
%000004		input wire[5:0]				stall,	
		
%000002		input wire[`RegAddrBus]		ex_wd,
%000001		input wire					ex_wreg,
%000014		input wire[`RegBus]			ex_wdata, 	
	
%000003	  	input wire[`AluOpBus]		ex_aluop,
%000021		input wire[`RegBus]			ex_mem_addr,
%000018		input wire[`RegBus]			ex_reg2,	
		
%000002		output reg[`RegAddrBus]		mem_wd,
%000000		output reg					mem_wreg,
%000016		output reg[`RegBus]			mem_wdata,
	
%000004	 	output reg[`AluOpBus]		mem_aluop,
%000011		output reg[`RegBus]			mem_mem_addr,
%000015		output reg[`RegBus]			mem_reg2
		
	);
	
	
%000000		always @ (posedge clk) begin
%000000			if(rst == `RstEnable) begin
%000000				mem_wd 			<= `NOPRegAddr;
%000000				mem_wreg		<= `WriteDisable;
%000000			  	mem_wdata		<= `ZeroWord;	
%000000	  			mem_aluop		<= `EXE_NOP_OP;
%000000				mem_mem_addr	<= `ZeroWord;
%000000				mem_reg2		<= `ZeroWord;			  				    
			end 
%000000			else if(stall[3] == `NoStop) begin
%000000			verilator_coverage: (next point on previous line)

%000000				mem_wd			<= ex_wd;
%000000				mem_wreg		<= ex_wreg;
%000000				mem_wdata		<= ex_wdata;	
%000000	  			mem_aluop		<= ex_aluop;
%000000				mem_mem_addr	<= ex_mem_addr;
%000000				mem_reg2		<= ex_reg2;			
			end
		end     
				
	
	endmodule
