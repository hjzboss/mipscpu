	// verilator_coverage annotation
	`include "defines.v"
	
	//寄存器堆
	module regfile(
	
%000002		input wire									clk,
%000001		input wire									rst,
		
%000001		input wire									we,
%000002		input wire[`RegAddrBus]						waddr,
%000014		input wire[`RegBus]							wdata,
		
%000000		input wire									re1,
%000002		input wire[`RegAddrBus]						raddr1,
%000021		output reg[`RegBus]							rdata1,
		
%000000		input wire									re2,
%000005		input wire[`RegAddrBus]						raddr2,
%000011		output reg[`RegBus]							rdata2
		
	);
	
		reg[`RegBus]  regs[0:`RegNum-1];
	
%000000		always @ (posedge clk) begin
%000000			if (rst == `RstDisable) begin
%000000			verilator_coverage: (next point on previous line)

%000000				if((we == `WriteEnable) && (waddr != `RegNumLog2'h0)) begin
%000000				verilator_coverage: (next point on previous line)

%000000					regs[waddr]	<= wdata;
				end
			end
		end
		
		//解决数据相关问题，方法：旁路和停顿
%000002		always @ (*) begin
 002008			if(rst == `RstEnable) begin
 001004				rdata1	= `ZeroWord;
		  	end 
%000000			else if(raddr1 == `RegNumLog2'h0) begin
%000000		  		rdata1	= `ZeroWord;
		  	end 
%000000			else if((raddr1 == waddr) && (we == `WriteEnable) 
%000000		  	            && (re1 == `ReadEnable)) begin
%000000		  	  	rdata1	= wdata;
		  	end 
%000000			else if(re1 == `ReadEnable) begin
 099000			verilator_coverage: (next point on previous line)

%000000		      	rdata1	= regs[raddr1];
		  	end 
 099000			else begin
 099000		      	rdata1	= `ZeroWord;
		  	end
		end
	
%000002		always @ (*) begin
 002008			if(rst == `RstEnable) begin
 001004				rdata2	= `ZeroWord;
			end
%000000			else if(raddr2 == `RegNumLog2'h0) begin
%000000		  		rdata2	= `ZeroWord;
		  	end
%000000			else if((raddr2 == waddr) && (we == `WriteEnable) 
%000000		  	            && (re2 == `ReadEnable)) begin
%000000		  		rdata2	= wdata;
		  	end
%000000			else if(re2 == `ReadEnable) begin
 099000			verilator_coverage: (next point on previous line)

%000000		      	rdata2	= regs[raddr2];
		  	end
 099000			else begin
 099000		    	rdata2	= `ZeroWord;
		  	end
		end
	
	endmodule
