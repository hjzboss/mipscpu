`include "defines.v"

//访存阶段
module mem(

	input wire						rst,
	
	input wire[`RegAddrBus]       	wd_i,
	input wire                    	wreg_i,
	input wire[`RegBus]				wdata_i,

  	input wire[`AluOpBus]        	aluop_i,
	input wire[`RegBus]          	mem_addr_i,
	input wire[`RegBus]          	reg2_i,
	
	input wire[`RegBus]          	mem_data_i,

	//拨码开关信号
	input wire[11:0]				switch_on,
	
	output reg[`RegAddrBus]      	wd_o,
	output reg                   	wreg_o,
	output reg[`RegBus]				wdata_o,

	//访问存储器
	output reg[`RegBus]          	mem_addr_o,
	output wire					 	mem_we_o,
	output reg[`RegBus]          	mem_data_o,
	output reg                   	mem_ce_o,
	//led灯输出	
	output reg[`RegBus]				led_out
);

	wire[`RegBus] zero32;
	reg           mem_we;

	assign mem_we_o = mem_we ;
	assign zero32 = `ZeroWord;

	
	always @ (*) begin
		if(rst == `RstEnable) begin
			wd_o <= `NOPRegAddr;
			wreg_o <= `WriteDisable;
			wdata_o <= `ZeroWord;
			mem_addr_o <= `ZeroWord;
			mem_we <= `WriteDisable;
			mem_data_o <= `ZeroWord;
			mem_ce_o <= `ChipDisable;			      
		end else begin
		  	wd_o <= wd_i;
			wreg_o <= wreg_i;
			wdata_o <= wdata_i;	
			mem_we <= `WriteDisable;
			mem_addr_o <= `ZeroWord;
			mem_ce_o <= `ChipDisable;		
			case (aluop_i)
				`EXE_LW_OP:		begin
					mem_addr_o <= mem_addr_i;
					mem_we <= `WriteDisable;
					//如果地址最高位为0，从存储器读取数据，否则从输入寄存器读取数据
					if(mem_addr_i[31] == 0) begin
						wdata_o <= mem_data_i;
					end else begin 
						wdata_o <= {20'd0,switch_on};
					end	
						mem_ce_o <= `ChipEnable;
				end
				`EXE_SW_OP:		begin
					mem_addr_o <= mem_addr_i;
					mem_we <= `WriteEnable;
					//如果地址最高位为0，则写入存储器，否则写入输出寄存器
					if(mem_addr_i[31] == 0) begin
						mem_data_o <= reg2_i;
					end else begin
						led_out <= reg2_i[11:0];
					end			
					mem_ce_o <= `ChipEnable;
				end		
				default:		begin
				end
			endcase							
		end    //if
	end      //always
			

endmodule