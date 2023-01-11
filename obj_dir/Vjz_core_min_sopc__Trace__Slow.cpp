// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vjz_core_min_sopc__Syms.h"


void Vjz_core_min_sopc___024root__traceInitSub0(Vjz_core_min_sopc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vjz_core_min_sopc___024root__traceInitTop(Vjz_core_min_sopc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vjz_core_min_sopc___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vjz_core_min_sopc___024root__traceInitSub0(Vjz_core_min_sopc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+99,"switch_on", false,-1, 11,0);
        tracep->declBus(c+100,"led_out", false,-1, 11,0);
        tracep->declBit(c+101,"clk", false,-1);
        tracep->declBit(c+102,"rst", false,-1);
        tracep->declBus(c+99,"jz_core_min_sopc switch_on", false,-1, 11,0);
        tracep->declBus(c+100,"jz_core_min_sopc led_out", false,-1, 11,0);
        tracep->declBit(c+101,"jz_core_min_sopc clk", false,-1);
        tracep->declBit(c+102,"jz_core_min_sopc rst", false,-1);
        tracep->declBus(c+31,"jz_core_min_sopc inst_addr", false,-1, 31,0);
        tracep->declBus(c+32,"jz_core_min_sopc inst", false,-1, 31,0);
        tracep->declBit(c+33,"jz_core_min_sopc rom_ce", false,-1);
        tracep->declBit(c+2,"jz_core_min_sopc mem_we_i", false,-1);
        tracep->declBus(c+3,"jz_core_min_sopc mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+4,"jz_core_min_sopc mem_data_i", false,-1, 31,0);
        tracep->declBus(c+5,"jz_core_min_sopc mem_data_o", false,-1, 31,0);
        tracep->declBit(c+6,"jz_core_min_sopc mem_ce_i", false,-1);
        tracep->declBit(c+103,"jz_core_min_sopc clk_o", false,-1);
        tracep->declBit(c+101,"jz_core_min_sopc fp0 clk", false,-1);
        tracep->declBit(c+102,"jz_core_min_sopc fp0 rst", false,-1);
        tracep->declBit(c+103,"jz_core_min_sopc fp0 fp_clk", false,-1);
        tracep->declBus(c+104,"jz_core_min_sopc fp0 count", false,-1, 30,0);
        tracep->declBit(c+103,"jz_core_min_sopc core0 clk", false,-1);
        tracep->declBit(c+102,"jz_core_min_sopc core0 rst", false,-1);
        tracep->declBus(c+32,"jz_core_min_sopc core0 rom_data_i", false,-1, 31,0);
        tracep->declBus(c+31,"jz_core_min_sopc core0 rom_addr_o", false,-1, 31,0);
        tracep->declBit(c+33,"jz_core_min_sopc core0 rom_ce_o", false,-1);
        tracep->declBus(c+99,"jz_core_min_sopc core0 switch_on", false,-1, 11,0);
        tracep->declBus(c+100,"jz_core_min_sopc core0 led_out", false,-1, 11,0);
        tracep->declBus(c+5,"jz_core_min_sopc core0 ram_data_i", false,-1, 31,0);
        tracep->declBus(c+3,"jz_core_min_sopc core0 ram_addr_o", false,-1, 31,0);
        tracep->declBus(c+4,"jz_core_min_sopc core0 ram_data_o", false,-1, 31,0);
        tracep->declBit(c+2,"jz_core_min_sopc core0 ram_we_o", false,-1);
        tracep->declBit(c+6,"jz_core_min_sopc core0 ram_ce_o", false,-1);
        tracep->declBus(c+31,"jz_core_min_sopc core0 pc", false,-1, 31,0);
        tracep->declBus(c+34,"jz_core_min_sopc core0 id_pc_i", false,-1, 31,0);
        tracep->declBus(c+35,"jz_core_min_sopc core0 id_inst_i", false,-1, 31,0);
        tracep->declBus(c+7,"jz_core_min_sopc core0 id_aluop_o", false,-1, 7,0);
        tracep->declBus(c+8,"jz_core_min_sopc core0 id_alusel_o", false,-1, 2,0);
        tracep->declBus(c+9,"jz_core_min_sopc core0 id_reg1_o", false,-1, 31,0);
        tracep->declBus(c+10,"jz_core_min_sopc core0 id_reg2_o", false,-1, 31,0);
        tracep->declBit(c+11,"jz_core_min_sopc core0 id_wreg_o", false,-1);
        tracep->declBus(c+12,"jz_core_min_sopc core0 id_wd_o", false,-1, 4,0);
        tracep->declBus(c+35,"jz_core_min_sopc core0 id_inst_o", false,-1, 31,0);
        tracep->declBus(c+36,"jz_core_min_sopc core0 ex_aluop_i", false,-1, 7,0);
        tracep->declBus(c+37,"jz_core_min_sopc core0 ex_alusel_i", false,-1, 2,0);
        tracep->declBus(c+38,"jz_core_min_sopc core0 ex_reg1_i", false,-1, 31,0);
        tracep->declBus(c+39,"jz_core_min_sopc core0 ex_reg2_i", false,-1, 31,0);
        tracep->declBit(c+40,"jz_core_min_sopc core0 ex_wreg_i", false,-1);
        tracep->declBus(c+41,"jz_core_min_sopc core0 ex_wd_i", false,-1, 4,0);
        tracep->declBus(c+42,"jz_core_min_sopc core0 ex_inst_i", false,-1, 31,0);
        tracep->declBit(c+43,"jz_core_min_sopc core0 ex_wreg_o", false,-1);
        tracep->declBus(c+41,"jz_core_min_sopc core0 ex_wd_o", false,-1, 4,0);
        tracep->declBus(c+13,"jz_core_min_sopc core0 ex_wdata_o", false,-1, 31,0);
        tracep->declBus(c+36,"jz_core_min_sopc core0 ex_aluop_o", false,-1, 7,0);
        tracep->declBus(c+44,"jz_core_min_sopc core0 ex_mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+105,"jz_core_min_sopc core0 ex_reg1_o", false,-1, 31,0);
        tracep->declBus(c+39,"jz_core_min_sopc core0 ex_reg2_o", false,-1, 31,0);
        tracep->declBit(c+45,"jz_core_min_sopc core0 mem_wreg_i", false,-1);
        tracep->declBus(c+46,"jz_core_min_sopc core0 mem_wd_i", false,-1, 4,0);
        tracep->declBus(c+47,"jz_core_min_sopc core0 mem_wdata_i", false,-1, 31,0);
        tracep->declBus(c+48,"jz_core_min_sopc core0 mem_aluop_i", false,-1, 7,0);
        tracep->declBus(c+49,"jz_core_min_sopc core0 mem_mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+106,"jz_core_min_sopc core0 mem_reg1_i", false,-1, 31,0);
        tracep->declBus(c+50,"jz_core_min_sopc core0 mem_reg2_i", false,-1, 31,0);
        tracep->declBit(c+14,"jz_core_min_sopc core0 mem_wreg_o", false,-1);
        tracep->declBus(c+15,"jz_core_min_sopc core0 mem_wd_o", false,-1, 4,0);
        tracep->declBus(c+16,"jz_core_min_sopc core0 mem_wdata_o", false,-1, 31,0);
        tracep->declBit(c+51,"jz_core_min_sopc core0 wb_wreg_i", false,-1);
        tracep->declBus(c+52,"jz_core_min_sopc core0 wb_wd_i", false,-1, 4,0);
        tracep->declBus(c+53,"jz_core_min_sopc core0 wb_wdata_i", false,-1, 31,0);
        tracep->declBit(c+17,"jz_core_min_sopc core0 reg1_read", false,-1);
        tracep->declBit(c+18,"jz_core_min_sopc core0 reg2_read", false,-1);
        tracep->declBus(c+19,"jz_core_min_sopc core0 reg1_data", false,-1, 31,0);
        tracep->declBus(c+20,"jz_core_min_sopc core0 reg2_data", false,-1, 31,0);
        tracep->declBus(c+21,"jz_core_min_sopc core0 reg1_addr", false,-1, 4,0);
        tracep->declBus(c+22,"jz_core_min_sopc core0 reg2_addr", false,-1, 4,0);
        tracep->declBit(c+23,"jz_core_min_sopc core0 id_branch_flag_o", false,-1);
        tracep->declBus(c+24,"jz_core_min_sopc core0 branch_target_address", false,-1, 31,0);
        tracep->declBus(c+25,"jz_core_min_sopc core0 stall", false,-1, 5,0);
        tracep->declBit(c+26,"jz_core_min_sopc core0 stallreq_from_id", false,-1);
        tracep->declBit(c+103,"jz_core_min_sopc core0 pc_reg0 clk", false,-1);
        tracep->declBit(c+102,"jz_core_min_sopc core0 pc_reg0 rst", false,-1);
        tracep->declBus(c+25,"jz_core_min_sopc core0 pc_reg0 stall", false,-1, 5,0);
        tracep->declBit(c+23,"jz_core_min_sopc core0 pc_reg0 branch_flag_i", false,-1);
        tracep->declBus(c+24,"jz_core_min_sopc core0 pc_reg0 branch_target_address_i", false,-1, 31,0);
        tracep->declBus(c+31,"jz_core_min_sopc core0 pc_reg0 pc", false,-1, 31,0);
        tracep->declBit(c+33,"jz_core_min_sopc core0 pc_reg0 ce", false,-1);
        tracep->declBit(c+103,"jz_core_min_sopc core0 if_id0 clk", false,-1);
        tracep->declBit(c+102,"jz_core_min_sopc core0 if_id0 rst", false,-1);
        tracep->declBus(c+25,"jz_core_min_sopc core0 if_id0 stall", false,-1, 5,0);
        tracep->declBus(c+31,"jz_core_min_sopc core0 if_id0 if_pc", false,-1, 31,0);
        tracep->declBus(c+32,"jz_core_min_sopc core0 if_id0 if_inst", false,-1, 31,0);
        tracep->declBus(c+34,"jz_core_min_sopc core0 if_id0 id_pc", false,-1, 31,0);
        tracep->declBus(c+35,"jz_core_min_sopc core0 if_id0 id_inst", false,-1, 31,0);
        tracep->declBit(c+102,"jz_core_min_sopc core0 id0 rst", false,-1);
        tracep->declBus(c+34,"jz_core_min_sopc core0 id0 pc_i", false,-1, 31,0);
        tracep->declBus(c+35,"jz_core_min_sopc core0 id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+36,"jz_core_min_sopc core0 id0 ex_aluop_i", false,-1, 7,0);
        tracep->declBit(c+43,"jz_core_min_sopc core0 id0 ex_wreg_i", false,-1);
        tracep->declBus(c+13,"jz_core_min_sopc core0 id0 ex_wdata_i", false,-1, 31,0);
        tracep->declBus(c+41,"jz_core_min_sopc core0 id0 ex_wd_i", false,-1, 4,0);
        tracep->declBit(c+14,"jz_core_min_sopc core0 id0 mem_wreg_i", false,-1);
        tracep->declBus(c+16,"jz_core_min_sopc core0 id0 mem_wdata_i", false,-1, 31,0);
        tracep->declBus(c+15,"jz_core_min_sopc core0 id0 mem_wd_i", false,-1, 4,0);
        tracep->declBus(c+19,"jz_core_min_sopc core0 id0 reg1_data_i", false,-1, 31,0);
        tracep->declBus(c+20,"jz_core_min_sopc core0 id0 reg2_data_i", false,-1, 31,0);
        tracep->declBit(c+17,"jz_core_min_sopc core0 id0 reg1_read_o", false,-1);
        tracep->declBit(c+18,"jz_core_min_sopc core0 id0 reg2_read_o", false,-1);
        tracep->declBus(c+21,"jz_core_min_sopc core0 id0 reg1_addr_o", false,-1, 4,0);
        tracep->declBus(c+22,"jz_core_min_sopc core0 id0 reg2_addr_o", false,-1, 4,0);
        tracep->declBus(c+7,"jz_core_min_sopc core0 id0 aluop_o", false,-1, 7,0);
        tracep->declBus(c+8,"jz_core_min_sopc core0 id0 alusel_o", false,-1, 2,0);
        tracep->declBus(c+9,"jz_core_min_sopc core0 id0 reg1_o", false,-1, 31,0);
        tracep->declBus(c+10,"jz_core_min_sopc core0 id0 reg2_o", false,-1, 31,0);
        tracep->declBus(c+12,"jz_core_min_sopc core0 id0 wd_o", false,-1, 4,0);
        tracep->declBit(c+11,"jz_core_min_sopc core0 id0 wreg_o", false,-1);
        tracep->declBus(c+35,"jz_core_min_sopc core0 id0 inst_o", false,-1, 31,0);
        tracep->declBit(c+23,"jz_core_min_sopc core0 id0 branch_flag_o", false,-1);
        tracep->declBus(c+24,"jz_core_min_sopc core0 id0 branch_target_address_o", false,-1, 31,0);
        tracep->declBit(c+26,"jz_core_min_sopc core0 id0 stallreq", false,-1);
        tracep->declBus(c+54,"jz_core_min_sopc core0 id0 op", false,-1, 5,0);
        tracep->declBus(c+55,"jz_core_min_sopc core0 id0 op2", false,-1, 4,0);
        tracep->declBus(c+56,"jz_core_min_sopc core0 id0 op3", false,-1, 5,0);
        tracep->declBus(c+57,"jz_core_min_sopc core0 id0 op4", false,-1, 4,0);
        tracep->declBus(c+1,"jz_core_min_sopc core0 id0 imm", false,-1, 31,0);
        tracep->declBus(c+58,"jz_core_min_sopc core0 id0 pc_plus_8", false,-1, 31,0);
        tracep->declBus(c+59,"jz_core_min_sopc core0 id0 pc_plus_4", false,-1, 31,0);
        tracep->declBus(c+60,"jz_core_min_sopc core0 id0 imm_sll2_signedext", false,-1, 31,0);
        tracep->declBit(c+27,"jz_core_min_sopc core0 id0 stallreq_for_reg1_loadrelate", false,-1);
        tracep->declBit(c+28,"jz_core_min_sopc core0 id0 stallreq_for_reg2_loadrelate", false,-1);
        tracep->declBit(c+61,"jz_core_min_sopc core0 id0 pre_inst_is_load", false,-1);
        tracep->declBit(c+103,"jz_core_min_sopc core0 regfile1 clk", false,-1);
        tracep->declBit(c+102,"jz_core_min_sopc core0 regfile1 rst", false,-1);
        tracep->declBit(c+51,"jz_core_min_sopc core0 regfile1 we", false,-1);
        tracep->declBus(c+52,"jz_core_min_sopc core0 regfile1 waddr", false,-1, 4,0);
        tracep->declBus(c+53,"jz_core_min_sopc core0 regfile1 wdata", false,-1, 31,0);
        tracep->declBit(c+17,"jz_core_min_sopc core0 regfile1 re1", false,-1);
        tracep->declBus(c+21,"jz_core_min_sopc core0 regfile1 raddr1", false,-1, 4,0);
        tracep->declBus(c+19,"jz_core_min_sopc core0 regfile1 rdata1", false,-1, 31,0);
        tracep->declBit(c+18,"jz_core_min_sopc core0 regfile1 re2", false,-1);
        tracep->declBus(c+22,"jz_core_min_sopc core0 regfile1 raddr2", false,-1, 4,0);
        tracep->declBus(c+20,"jz_core_min_sopc core0 regfile1 rdata2", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+62+i*1,"jz_core_min_sopc core0 regfile1 regs", true,(i+0), 31,0);}}
        tracep->declBit(c+103,"jz_core_min_sopc core0 id_ex0 clk", false,-1);
        tracep->declBit(c+102,"jz_core_min_sopc core0 id_ex0 rst", false,-1);
        tracep->declBus(c+25,"jz_core_min_sopc core0 id_ex0 stall", false,-1, 5,0);
        tracep->declBus(c+7,"jz_core_min_sopc core0 id_ex0 id_aluop", false,-1, 7,0);
        tracep->declBus(c+8,"jz_core_min_sopc core0 id_ex0 id_alusel", false,-1, 2,0);
        tracep->declBus(c+9,"jz_core_min_sopc core0 id_ex0 id_reg1", false,-1, 31,0);
        tracep->declBus(c+10,"jz_core_min_sopc core0 id_ex0 id_reg2", false,-1, 31,0);
        tracep->declBus(c+12,"jz_core_min_sopc core0 id_ex0 id_wd", false,-1, 4,0);
        tracep->declBit(c+11,"jz_core_min_sopc core0 id_ex0 id_wreg", false,-1);
        tracep->declBus(c+35,"jz_core_min_sopc core0 id_ex0 id_inst", false,-1, 31,0);
        tracep->declBus(c+36,"jz_core_min_sopc core0 id_ex0 ex_aluop", false,-1, 7,0);
        tracep->declBus(c+37,"jz_core_min_sopc core0 id_ex0 ex_alusel", false,-1, 2,0);
        tracep->declBus(c+38,"jz_core_min_sopc core0 id_ex0 ex_reg1", false,-1, 31,0);
        tracep->declBus(c+39,"jz_core_min_sopc core0 id_ex0 ex_reg2", false,-1, 31,0);
        tracep->declBus(c+41,"jz_core_min_sopc core0 id_ex0 ex_wd", false,-1, 4,0);
        tracep->declBit(c+40,"jz_core_min_sopc core0 id_ex0 ex_wreg", false,-1);
        tracep->declBus(c+42,"jz_core_min_sopc core0 id_ex0 ex_inst", false,-1, 31,0);
        tracep->declBit(c+102,"jz_core_min_sopc core0 ex0 rst", false,-1);
        tracep->declBus(c+36,"jz_core_min_sopc core0 ex0 aluop_i", false,-1, 7,0);
        tracep->declBus(c+37,"jz_core_min_sopc core0 ex0 alusel_i", false,-1, 2,0);
        tracep->declBus(c+38,"jz_core_min_sopc core0 ex0 reg1_i", false,-1, 31,0);
        tracep->declBus(c+39,"jz_core_min_sopc core0 ex0 reg2_i", false,-1, 31,0);
        tracep->declBus(c+41,"jz_core_min_sopc core0 ex0 wd_i", false,-1, 4,0);
        tracep->declBit(c+40,"jz_core_min_sopc core0 ex0 wreg_i", false,-1);
        tracep->declBus(c+42,"jz_core_min_sopc core0 ex0 inst_i", false,-1, 31,0);
        tracep->declBus(c+41,"jz_core_min_sopc core0 ex0 wd_o", false,-1, 4,0);
        tracep->declBit(c+43,"jz_core_min_sopc core0 ex0 wreg_o", false,-1);
        tracep->declBus(c+13,"jz_core_min_sopc core0 ex0 wdata_o", false,-1, 31,0);
        tracep->declBus(c+36,"jz_core_min_sopc core0 ex0 aluop_o", false,-1, 7,0);
        tracep->declBus(c+44,"jz_core_min_sopc core0 ex0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+39,"jz_core_min_sopc core0 ex0 reg2_o", false,-1, 31,0);
        tracep->declBus(c+29,"jz_core_min_sopc core0 ex0 logicout", false,-1, 31,0);
        tracep->declBus(c+30,"jz_core_min_sopc core0 ex0 arithmeticres", false,-1, 31,0);
        tracep->declBus(c+94,"jz_core_min_sopc core0 ex0 reg2_i_mux", false,-1, 31,0);
        tracep->declBus(c+95,"jz_core_min_sopc core0 ex0 reg1_i_not", false,-1, 31,0);
        tracep->declBus(c+96,"jz_core_min_sopc core0 ex0 result_sum", false,-1, 31,0);
        tracep->declBit(c+97,"jz_core_min_sopc core0 ex0 ov_sum", false,-1);
        tracep->declBit(c+107,"jz_core_min_sopc core0 ex0 reg1_eq_reg2", false,-1);
        tracep->declBit(c+98,"jz_core_min_sopc core0 ex0 reg1_lt_reg2", false,-1);
        tracep->declBit(c+103,"jz_core_min_sopc core0 ex_mem0 clk", false,-1);
        tracep->declBit(c+102,"jz_core_min_sopc core0 ex_mem0 rst", false,-1);
        tracep->declBus(c+25,"jz_core_min_sopc core0 ex_mem0 stall", false,-1, 5,0);
        tracep->declBus(c+41,"jz_core_min_sopc core0 ex_mem0 ex_wd", false,-1, 4,0);
        tracep->declBit(c+43,"jz_core_min_sopc core0 ex_mem0 ex_wreg", false,-1);
        tracep->declBus(c+13,"jz_core_min_sopc core0 ex_mem0 ex_wdata", false,-1, 31,0);
        tracep->declBus(c+36,"jz_core_min_sopc core0 ex_mem0 ex_aluop", false,-1, 7,0);
        tracep->declBus(c+44,"jz_core_min_sopc core0 ex_mem0 ex_mem_addr", false,-1, 31,0);
        tracep->declBus(c+39,"jz_core_min_sopc core0 ex_mem0 ex_reg2", false,-1, 31,0);
        tracep->declBus(c+46,"jz_core_min_sopc core0 ex_mem0 mem_wd", false,-1, 4,0);
        tracep->declBit(c+45,"jz_core_min_sopc core0 ex_mem0 mem_wreg", false,-1);
        tracep->declBus(c+47,"jz_core_min_sopc core0 ex_mem0 mem_wdata", false,-1, 31,0);
        tracep->declBus(c+48,"jz_core_min_sopc core0 ex_mem0 mem_aluop", false,-1, 7,0);
        tracep->declBus(c+49,"jz_core_min_sopc core0 ex_mem0 mem_mem_addr", false,-1, 31,0);
        tracep->declBus(c+50,"jz_core_min_sopc core0 ex_mem0 mem_reg2", false,-1, 31,0);
        tracep->declBit(c+102,"jz_core_min_sopc core0 mem0 rst", false,-1);
        tracep->declBus(c+46,"jz_core_min_sopc core0 mem0 wd_i", false,-1, 4,0);
        tracep->declBit(c+45,"jz_core_min_sopc core0 mem0 wreg_i", false,-1);
        tracep->declBus(c+47,"jz_core_min_sopc core0 mem0 wdata_i", false,-1, 31,0);
        tracep->declBus(c+48,"jz_core_min_sopc core0 mem0 aluop_i", false,-1, 7,0);
        tracep->declBus(c+49,"jz_core_min_sopc core0 mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+50,"jz_core_min_sopc core0 mem0 reg2_i", false,-1, 31,0);
        tracep->declBus(c+5,"jz_core_min_sopc core0 mem0 mem_data_i", false,-1, 31,0);
        tracep->declBus(c+99,"jz_core_min_sopc core0 mem0 switch_on", false,-1, 11,0);
        tracep->declBus(c+100,"jz_core_min_sopc core0 mem0 led_out", false,-1, 11,0);
        tracep->declBus(c+15,"jz_core_min_sopc core0 mem0 wd_o", false,-1, 4,0);
        tracep->declBit(c+14,"jz_core_min_sopc core0 mem0 wreg_o", false,-1);
        tracep->declBus(c+16,"jz_core_min_sopc core0 mem0 wdata_o", false,-1, 31,0);
        tracep->declBus(c+3,"jz_core_min_sopc core0 mem0 mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+2,"jz_core_min_sopc core0 mem0 mem_we_o", false,-1);
        tracep->declBus(c+4,"jz_core_min_sopc core0 mem0 mem_data_o", false,-1, 31,0);
        tracep->declBit(c+6,"jz_core_min_sopc core0 mem0 mem_ce_o", false,-1);
        tracep->declBus(c+108,"jz_core_min_sopc core0 mem0 zero32", false,-1, 31,0);
        tracep->declBit(c+2,"jz_core_min_sopc core0 mem0 mem_we", false,-1);
        tracep->declBit(c+103,"jz_core_min_sopc core0 mem_wb0 clk", false,-1);
        tracep->declBit(c+102,"jz_core_min_sopc core0 mem_wb0 rst", false,-1);
        tracep->declBus(c+25,"jz_core_min_sopc core0 mem_wb0 stall", false,-1, 5,0);
        tracep->declBus(c+15,"jz_core_min_sopc core0 mem_wb0 mem_wd", false,-1, 4,0);
        tracep->declBit(c+14,"jz_core_min_sopc core0 mem_wb0 mem_wreg", false,-1);
        tracep->declBus(c+16,"jz_core_min_sopc core0 mem_wb0 mem_wdata", false,-1, 31,0);
        tracep->declBus(c+52,"jz_core_min_sopc core0 mem_wb0 wb_wd", false,-1, 4,0);
        tracep->declBit(c+51,"jz_core_min_sopc core0 mem_wb0 wb_wreg", false,-1);
        tracep->declBus(c+53,"jz_core_min_sopc core0 mem_wb0 wb_wdata", false,-1, 31,0);
        tracep->declBit(c+102,"jz_core_min_sopc core0 ctrl0 rst", false,-1);
        tracep->declBit(c+26,"jz_core_min_sopc core0 ctrl0 stallreq_from_id", false,-1);
        tracep->declBus(c+25,"jz_core_min_sopc core0 ctrl0 stall", false,-1, 5,0);
        tracep->declBit(c+103,"jz_core_min_sopc data_ram0 clk", false,-1);
        tracep->declBit(c+6,"jz_core_min_sopc data_ram0 ce", false,-1);
        tracep->declBit(c+2,"jz_core_min_sopc data_ram0 we", false,-1);
        tracep->declBus(c+3,"jz_core_min_sopc data_ram0 addr", false,-1, 31,0);
        tracep->declBus(c+4,"jz_core_min_sopc data_ram0 data_i", false,-1, 31,0);
        tracep->declBus(c+5,"jz_core_min_sopc data_ram0 data_o", false,-1, 31,0);
        tracep->declBit(c+33,"jz_core_min_sopc inst_rom0 ce", false,-1);
        tracep->declBus(c+31,"jz_core_min_sopc inst_rom0 addr", false,-1, 31,0);
        tracep->declBus(c+32,"jz_core_min_sopc inst_rom0 inst", false,-1, 31,0);
    }
}

void Vjz_core_min_sopc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vjz_core_min_sopc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vjz_core_min_sopc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vjz_core_min_sopc___024root__traceRegister(Vjz_core_min_sopc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vjz_core_min_sopc___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vjz_core_min_sopc___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vjz_core_min_sopc___024root__traceCleanup, vlSelf);
    }
}

void Vjz_core_min_sopc___024root__traceFullSub0(Vjz_core_min_sopc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vjz_core_min_sopc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vjz_core_min_sopc___024root* const __restrict vlSelf = static_cast<Vjz_core_min_sopc___024root*>(voidSelf);
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vjz_core_min_sopc___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vjz_core_min_sopc___024root__traceFullSub0(Vjz_core_min_sopc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm),32);
        tracep->fullBit(oldp+2,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT__mem_we));
        tracep->fullIData(oldp+3,(vlSelf->jz_core_min_sopc__DOT__mem_addr_i),32);
        tracep->fullIData(oldp+4,(vlSelf->jz_core_min_sopc__DOT__mem_data_i),32);
        tracep->fullIData(oldp+5,(vlSelf->jz_core_min_sopc__DOT__mem_data_o),32);
        tracep->fullBit(oldp+6,(vlSelf->jz_core_min_sopc__DOT__mem_ce_i));
        tracep->fullCData(oldp+7,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o),8);
        tracep->fullCData(oldp+8,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o),3);
        tracep->fullIData(oldp+9,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o),32);
        tracep->fullIData(oldp+10,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o),32);
        tracep->fullBit(oldp+11,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o));
        tracep->fullCData(oldp+12,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o),5);
        tracep->fullIData(oldp+13,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o),32);
        tracep->fullBit(oldp+14,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o));
        tracep->fullCData(oldp+15,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o),5);
        tracep->fullIData(oldp+16,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o),32);
        tracep->fullBit(oldp+17,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read));
        tracep->fullBit(oldp+18,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read));
        tracep->fullIData(oldp+19,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data),32);
        tracep->fullIData(oldp+20,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data),32);
        tracep->fullCData(oldp+21,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr),5);
        tracep->fullCData(oldp+22,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr),5);
        tracep->fullBit(oldp+23,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_branch_flag_o));
        tracep->fullIData(oldp+24,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address),32);
        tracep->fullCData(oldp+25,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall),6);
        tracep->fullBit(oldp+26,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stallreq_from_id));
        tracep->fullBit(oldp+27,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg1_loadrelate));
        tracep->fullBit(oldp+28,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg2_loadrelate));
        tracep->fullIData(oldp+29,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout),32);
        tracep->fullIData(oldp+30,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres),32);
        tracep->fullIData(oldp+31,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc),32);
        tracep->fullIData(oldp+32,(vlSelf->jz_core_min_sopc__DOT__inst),32);
        tracep->fullBit(oldp+33,(vlSelf->jz_core_min_sopc__DOT__rom_ce));
        tracep->fullIData(oldp+34,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i),32);
        tracep->fullIData(oldp+35,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i),32);
        tracep->fullCData(oldp+36,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i),8);
        tracep->fullCData(oldp+37,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i),3);
        tracep->fullIData(oldp+38,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i),32);
        tracep->fullIData(oldp+39,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i),32);
        tracep->fullBit(oldp+40,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_i));
        tracep->fullCData(oldp+41,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i),5);
        tracep->fullIData(oldp+42,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i),32);
        tracep->fullBit(oldp+43,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o));
        tracep->fullIData(oldp+44,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o),32);
        tracep->fullBit(oldp+45,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_i));
        tracep->fullCData(oldp+46,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_i),5);
        tracep->fullIData(oldp+47,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i),32);
        tracep->fullCData(oldp+48,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i),8);
        tracep->fullIData(oldp+49,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i),32);
        tracep->fullIData(oldp+50,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i),32);
        tracep->fullBit(oldp+51,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wreg_i));
        tracep->fullCData(oldp+52,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i),5);
        tracep->fullIData(oldp+53,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i),32);
        tracep->fullCData(oldp+54,((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                    >> 0x1aU)),6);
        tracep->fullCData(oldp+55,((0x1fU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 6U))),5);
        tracep->fullCData(oldp+56,((0x3fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)),6);
        tracep->fullCData(oldp+57,((0x1fU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                             >> 0x10U))),5);
        tracep->fullIData(oldp+58,(((IData)(8U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)),32);
        tracep->fullIData(oldp+59,(((IData)(4U) + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)),32);
        tracep->fullIData(oldp+60,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext),32);
        tracep->fullBit(oldp+61,((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))));
        tracep->fullIData(oldp+62,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[0]),32);
        tracep->fullIData(oldp+63,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[1]),32);
        tracep->fullIData(oldp+64,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[2]),32);
        tracep->fullIData(oldp+65,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[3]),32);
        tracep->fullIData(oldp+66,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[4]),32);
        tracep->fullIData(oldp+67,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[5]),32);
        tracep->fullIData(oldp+68,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[6]),32);
        tracep->fullIData(oldp+69,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[7]),32);
        tracep->fullIData(oldp+70,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[8]),32);
        tracep->fullIData(oldp+71,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[9]),32);
        tracep->fullIData(oldp+72,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[10]),32);
        tracep->fullIData(oldp+73,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[11]),32);
        tracep->fullIData(oldp+74,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[12]),32);
        tracep->fullIData(oldp+75,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[13]),32);
        tracep->fullIData(oldp+76,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[14]),32);
        tracep->fullIData(oldp+77,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[15]),32);
        tracep->fullIData(oldp+78,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[16]),32);
        tracep->fullIData(oldp+79,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[17]),32);
        tracep->fullIData(oldp+80,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[18]),32);
        tracep->fullIData(oldp+81,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[19]),32);
        tracep->fullIData(oldp+82,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[20]),32);
        tracep->fullIData(oldp+83,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[21]),32);
        tracep->fullIData(oldp+84,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[22]),32);
        tracep->fullIData(oldp+85,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[23]),32);
        tracep->fullIData(oldp+86,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[24]),32);
        tracep->fullIData(oldp+87,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[25]),32);
        tracep->fullIData(oldp+88,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[26]),32);
        tracep->fullIData(oldp+89,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[27]),32);
        tracep->fullIData(oldp+90,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[28]),32);
        tracep->fullIData(oldp+91,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[29]),32);
        tracep->fullIData(oldp+92,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[30]),32);
        tracep->fullIData(oldp+93,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[31]),32);
        tracep->fullIData(oldp+94,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux),32);
        tracep->fullIData(oldp+95,((~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i)),32);
        tracep->fullIData(oldp+96,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum),32);
        tracep->fullBit(oldp+97,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__ov_sum));
        tracep->fullBit(oldp+98,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg1_lt_reg2));
        tracep->fullSData(oldp+99,(vlSelf->switch_on),12);
        tracep->fullSData(oldp+100,(vlSelf->led_out),12);
        tracep->fullBit(oldp+101,(vlSelf->clk));
        tracep->fullBit(oldp+102,(vlSelf->rst));
        tracep->fullBit(oldp+103,(vlSelf->jz_core_min_sopc__DOT__clk_o));
        tracep->fullIData(oldp+104,(vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count),31);
        tracep->fullIData(oldp+105,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o),32);
        tracep->fullIData(oldp+106,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i),32);
        tracep->fullBit(oldp+107,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg1_eq_reg2));
        tracep->fullIData(oldp+108,(0U),32);
    }
}
