//      // verilator_coverage annotation
        `include "defines.v"
        `include "fpga_define.v"
        
        module jz_core(
        
 020001 	input wire						clk,
%000002 	input wire						rst,
        	
 004950 	input wire[`RegBus]				rom_data_i,
%000001 	output wire[`RegBus]			rom_addr_o,
%000002 	output wire						rom_ce_o,
        	
        `ifdef FPGA_MODE
        	input wire[`SwitchWide]			switch_on, //接拨码开关
        	output wire[`LedWide]			led_out, //接led灯
        `endif
        
          	//data_ram
%000000 	input wire[`RegBus]				ram_data_i,
 006925 	output wire[`RegBus]			ram_addr_o,
%000001 	output wire[`RegBus]			ram_data_o,
 006925 	output wire						ram_we_o,
 006925 	output wire						ram_ce_o
        );
        
%000001 	wire[`InstAddrBus] pc;
%000000 	wire[`InstAddrBus] id_pc_i;
 004950 	wire[`InstBus] id_inst_i;
        	
 000988 	wire[`AluOpBus] id_aluop_o;
 005935 	wire[`AluSelBus] id_alusel_o;
%000000 	wire[`RegBus] id_reg1_o;
%000000 	wire[`RegBus] id_reg2_o;
 005940 	wire id_wreg_o;
 004952 	wire[`RegAddrBus] id_wd_o;
 004950 	wire[`RegBus] id_inst_o;
        	
 000988 	wire[`AluOpBus] ex_aluop_i;
 005936 	wire[`AluSelBus] ex_alusel_i;
%000001 	wire[`RegBus] ex_reg1_i;
%000000 	wire[`RegBus] ex_reg2_i;
 005940 	wire ex_wreg_i;
 004952 	wire[`RegAddrBus] ex_wd_i;
%000001 	wire[`RegBus] ex_inst_i;
        	
 005941 	wire ex_wreg_o;
 004952 	wire[`RegAddrBus] ex_wd_o;
%000000 	wire[`RegBus] ex_wdata_o;
 000988 	wire[`AluOpBus] ex_aluop_o;
 004949 	wire[`RegBus] ex_mem_addr_o;
%000000 	wire[`RegBus] ex_reg1_o;
%000000 	wire[`RegBus] ex_reg2_o;	
        
 005941 	wire mem_wreg_i;
 004949 	wire[`RegAddrBus] mem_wd_i;
%000002 	wire[`RegBus] mem_wdata_i;	
 000990 	wire[`AluOpBus] mem_aluop_i;
 004947 	wire[`RegBus] mem_mem_addr_i;
%000000 	wire[`RegBus] mem_reg1_i;
%000001 	wire[`RegBus] mem_reg2_i;		
        
 005941 	wire mem_wreg_o;
 004950 	wire[`RegAddrBus] mem_wd_o;
%000001 	wire[`RegBus] mem_wdata_o;		
        	
 005940 	wire wb_wreg_i;
 004950 	wire[`RegAddrBus] wb_wd_i;
%000001 	wire[`RegBus] wb_wdata_i;
        	
 004948 	wire reg1_read;
 004949 	wire reg2_read;
%000002 	wire[`RegBus] reg1_data;
%000002 	wire[`RegBus] reg2_data;
%000000 	wire[`RegAddrBus] reg1_addr;
%000000 	wire[`RegAddrBus] reg2_addr;
        
        
 001976 	wire id_branch_flag_o;
%000001 	wire[`RegBus] branch_target_address;
        
%000001 	wire[5:0] stall;
%000002 	wire stallreq_from_id;	
          
        
        	pc_reg pc_reg0(
        		.clk						(clk					),
        		.rst						(rst					),
        		.stall						(stall					),
        		.branch_flag_i				(id_branch_flag_o		),
        		.branch_target_address_i	(branch_target_address	),		
        		.pc							(pc						),
        		.ce							(rom_ce_o				)
        	);
        	
          	assign rom_addr_o = pc;
        
        	if_id if_id0(
        		.clk						(clk					),
        		.rst						(rst					),
        		.stall						(stall					),
        		.if_pc						(pc						),
        		.if_inst					(rom_data_i				),
        		.id_pc						(id_pc_i				),
        		.id_inst					(id_inst_i				)      	
        	);
        	
        
        	id id0(
        		.rst						(rst					),
        		.pc_i						(id_pc_i				),
        		.inst_i						(id_inst_i				),
        
          		.ex_aluop_i					(ex_aluop_o				),
        
        		.reg1_data_i				(reg1_data				),
        		.reg2_data_i				(reg2_data				),
        
        		.ex_wreg_i					(ex_wreg_o				),
        		.ex_wdata_i					(ex_wdata_o				),
        		.ex_wd_i					(ex_wd_o				),
        
        		.mem_wreg_i					(mem_wreg_o				),
        		.mem_wdata_i				(mem_wdata_o			),
        		.mem_wd_i					(mem_wd_o				),
        
        		.reg1_read_o				(reg1_read				),
        		.reg2_read_o				(reg2_read				), 	  
        
        		.reg1_addr_o				(reg1_addr				),
        		.reg2_addr_o				(reg2_addr				), 
        	  
        		.aluop_o					(id_aluop_o				),
        		.alusel_o					(id_alusel_o			),
        		.reg1_o						(id_reg1_o				),
        		.reg2_o						(id_reg2_o				),
        		.wd_o						(id_wd_o				),
        		.wreg_o						(id_wreg_o				),
        		.inst_o						(id_inst_o				),
        	
        		.branch_flag_o				(id_branch_flag_o		),
        		.branch_target_address_o	(branch_target_address	),       
        		
        		.stallreq					(stallreq_from_id		)		
        	);
        
        
        	regfile regfile1(
        		.clk 						(clk					),
        		.rst 						(rst					),
        		.we							(wb_wreg_i				),
        		.waddr 						(wb_wd_i				),
        		.wdata 						(wb_wdata_i				),
        		.re1 						(reg1_read				),
        		.raddr1 					(reg1_addr				),
        		.rdata1 					(reg1_data				),
        		.re2 						(reg2_read				),
        		.raddr2 					(reg2_addr				),
        		.rdata2 					(reg2_data				)
        	);
        
        
        	id_ex id_ex0(
        		.clk						(clk					),
        		.rst						(rst					),
        		
        		.stall						(stall					),
        
        
        		.id_aluop					(id_aluop_o				),
        		.id_alusel					(id_alusel_o			),
        		.id_reg1					(id_reg1_o				),
        		.id_reg2					(id_reg2_o				),
        		.id_wd						(id_wd_o				),
        		.id_wreg					(id_wreg_o				),	
        		.id_inst					(id_inst_o				),		
        	
        
        		.ex_aluop					(ex_aluop_i				),
        		.ex_alusel					(ex_alusel_i			),
        		.ex_reg1					(ex_reg1_i				),
        		.ex_reg2					(ex_reg2_i				),
        		.ex_wd						(ex_wd_i				),
        		.ex_wreg					(ex_wreg_i				),
        		.ex_inst					(ex_inst_i				)		
        	);		
        	
        
        	ex ex0(
        		.rst						(rst					),
        	
        		.aluop_i					(ex_aluop_i				),
        		.alusel_i					(ex_alusel_i			),
        		.reg1_i						(ex_reg1_i				),
        		.reg2_i						(ex_reg2_i				),
        		.wd_i						(ex_wd_i				),
        		.wreg_i						(ex_wreg_i				),
        		.inst_i						(ex_inst_i				),
        			  
        		.wd_o						(ex_wd_o				),
        		.wreg_o						(ex_wreg_o				),
        		.wdata_o					(ex_wdata_o				),
        
        		.aluop_o					(ex_aluop_o				),
        		.mem_addr_o					(ex_mem_addr_o			),
        		.reg2_o						(ex_reg2_o				)	
        		
        	);
        
        
          	ex_mem ex_mem0(
        		.clk						(clk					),
        		.rst						(rst					),
        	  
        	  	.stall						(stall					),
        	  
        		.ex_wd						(ex_wd_o				),
        		.ex_wreg					(ex_wreg_o				),
        		.ex_wdata					(ex_wdata_o				),
        
          		.ex_aluop					(ex_aluop_o				),
        		.ex_mem_addr				(ex_mem_addr_o			),
        		.ex_reg2					(ex_reg2_o				),			
        
        		.mem_wd						(mem_wd_i				),
        		.mem_wreg					(mem_wreg_i				),
        		.mem_wdata					(mem_wdata_i			),
        
          		.mem_aluop					(mem_aluop_i			),
        		.mem_mem_addr				(mem_mem_addr_i			),
        		.mem_reg2					(mem_reg2_i				) 	
        	);
        	
        
        	mem mem0(
        		.rst			(rst			),
        
        		.wd_i			(mem_wd_i		),
        		.wreg_i			(mem_wreg_i		),
        		.wdata_i		(mem_wdata_i	),
        
          		.aluop_i		(mem_aluop_i	),
        		.mem_addr_i		(mem_mem_addr_i	),
        		.reg2_i			(mem_reg2_i		),
        
        		.mem_data_i		(ram_data_i		),
        
        `ifdef FPGA_MODE
        		.switch_on		(switch_on		),
        		.led_out		(led_out		),
        `endif
        
        		.wd_o			(mem_wd_o		),
        		.wreg_o			(mem_wreg_o		),
        		.wdata_o		(mem_wdata_o	),
        
        		.mem_addr_o		(ram_addr_o		),
        		.mem_we_o		(ram_we_o		),
        		.mem_data_o		(ram_data_o		),
        		.mem_ce_o		(ram_ce_o		)
        	);
        
        
        	mem_wb mem_wb0(
        		.clk			(clk			),
        		.rst			(rst			),
        
            	.stall			(stall			),
        
        		.mem_wd			(mem_wd_o		),
        		.mem_wreg		(mem_wreg_o		),
        		.mem_wdata		(mem_wdata_o	),				
        
        		.wb_wd			(wb_wd_i		),
        		.wb_wreg		(wb_wreg_i		),
        		.wb_wdata		(wb_wdata_i		)
        
        	);
        
        	
        	ctrl ctrl0(
        		.rst				(rst				),
        	
        		.stallreq_from_id	(stallreq_from_id	),
        
        		.stall				(stall				)       	
        	);
        	
        endmodule
