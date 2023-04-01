//      // verilator_coverage annotation
        `include "defines.v"
        
        //寄存器堆
        module regfile(
        
 020001 	input wire									clk,
%000002 	input wire									rst,
        	
 005940 	input wire									we,
 004950 	input wire[`RegAddrBus]						waddr,
%000001 	input wire[`RegBus]							wdata,
        	
 004948 	input wire									re1,
%000000 	input wire[`RegAddrBus]						raddr1,
%000002 	output reg[`RegBus]							rdata1,
        	
 004949 	input wire									re2,
%000000 	input wire[`RegAddrBus]						raddr2,
%000002 	output reg[`RegBus]							rdata2
        	
        );
        
        	reg[`RegBus]  regs[0:`RegNum-1];
        
 010000 	always @ (posedge clk) begin
 000100 		if (rst == `RstDisable) begin
 002971 			if((we == `WriteEnable) && (waddr != `RegNumLog2'h0)) begin
 002971 				regs[waddr]	<= wdata;
        			end
        		end
        	end
        	
        	//解决数据相关问题，方法：旁路和停顿
%000001 	always @ (*) begin
 001002 		if(rst == `RstEnable) begin
 001002 			rdata1	= `ZeroWord;
        	  	end 
 070797 		else if(raddr1 == `RegNumLog2'h0) begin
 070797 	  		rdata1	= `ZeroWord;
        	  	end 
 016345 		else if((raddr1 == waddr) && (we == `WriteEnable) 
 016345 	  	            && (re1 == `ReadEnable)) begin
 016345 	  	  	rdata1	= wdata;
        	  	end 
%000000 		else if(re1 == `ReadEnable) begin
 021758 	      	rdata1	= regs[raddr1];
        	  	end 
%000000 		else begin
%000000 	      	rdata1	= `ZeroWord;
        	  	end
        	end
        
%000001 	always @ (*) begin
 001002 		if(rst == `RstEnable) begin
 001002 			rdata2	= `ZeroWord;
        		end
 032649 		else if(raddr2 == `RegNumLog2'h0) begin
 032649 	  		rdata2	= `ZeroWord;
        	  	end
 010879 		else if((raddr2 == waddr) && (we == `WriteEnable) 
 010879 	  	            && (re2 == `ReadEnable)) begin
 010879 	  		rdata2	= wdata;
        	  	end
 000044 		else if(re2 == `ReadEnable) begin
 065328 	      	rdata2	= regs[raddr2];
        	  	end
 000044 		else begin
 000044 	    	rdata2	= `ZeroWord;
        	  	end
        	end
        
        endmodule
