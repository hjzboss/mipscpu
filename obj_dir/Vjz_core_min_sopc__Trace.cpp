// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vjz_core_min_sopc__Syms.h"


void Vjz_core_min_sopc___024root__traceChgSub0(Vjz_core_min_sopc___024root* vlSelf, VerilatedVcd* tracep);

void Vjz_core_min_sopc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vjz_core_min_sopc___024root* const __restrict vlSelf = static_cast<Vjz_core_min_sopc___024root*>(voidSelf);
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vjz_core_min_sopc___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vjz_core_min_sopc___024root__traceChgSub0(Vjz_core_min_sopc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+1,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem0__DOT__mem_we));
            tracep->chgIData(oldp+2,(vlSelf->jz_core_min_sopc__DOT__mem_addr_i),32);
            tracep->chgIData(oldp+3,(vlSelf->jz_core_min_sopc__DOT__mem_data_i),32);
            tracep->chgIData(oldp+4,(vlSelf->jz_core_min_sopc__DOT__mem_data_o),32);
            tracep->chgBit(oldp+5,(vlSelf->jz_core_min_sopc__DOT__mem_ce_i));
            tracep->chgCData(oldp+6,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_aluop_o),8);
            tracep->chgCData(oldp+7,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_alusel_o),3);
            tracep->chgIData(oldp+8,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg1_o),32);
            tracep->chgIData(oldp+9,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_reg2_o),32);
            tracep->chgBit(oldp+10,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wreg_o));
            tracep->chgCData(oldp+11,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_wd_o),5);
            tracep->chgIData(oldp+12,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o),32);
            tracep->chgBit(oldp+13,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o));
            tracep->chgCData(oldp+14,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_o),5);
            tracep->chgIData(oldp+15,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o),32);
            tracep->chgBit(oldp+16,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_read));
            tracep->chgBit(oldp+17,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_read));
            tracep->chgIData(oldp+18,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_data),32);
            tracep->chgIData(oldp+19,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_data),32);
            tracep->chgCData(oldp+20,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg1_addr),5);
            tracep->chgCData(oldp+21,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__reg2_addr),5);
            tracep->chgBit(oldp+22,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_branch_flag_o));
            tracep->chgIData(oldp+23,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__branch_target_address),32);
            tracep->chgCData(oldp+24,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stall),6);
            tracep->chgBit(oldp+25,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__stallreq_from_id));
            tracep->chgBit(oldp+26,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg1_loadrelate));
            tracep->chgBit(oldp+27,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg2_loadrelate));
            tracep->chgIData(oldp+28,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout),32);
            tracep->chgIData(oldp+29,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+30,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__pc),32);
            tracep->chgIData(oldp+31,(vlSelf->jz_core_min_sopc__DOT__inst),32);
            tracep->chgBit(oldp+32,(vlSelf->jz_core_min_sopc__DOT__rom_ce));
            tracep->chgIData(oldp+33,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i),32);
            tracep->chgIData(oldp+34,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i),32);
            tracep->chgCData(oldp+35,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i),8);
            tracep->chgCData(oldp+36,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i),3);
            tracep->chgIData(oldp+37,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i),32);
            tracep->chgIData(oldp+38,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i),32);
            tracep->chgBit(oldp+39,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_i));
            tracep->chgCData(oldp+40,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wd_i),5);
            tracep->chgIData(oldp+41,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_inst_i),32);
            tracep->chgBit(oldp+42,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o));
            tracep->chgIData(oldp+43,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o),32);
            tracep->chgBit(oldp+44,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wreg_i));
            tracep->chgCData(oldp+45,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wd_i),5);
            tracep->chgIData(oldp+46,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i),32);
            tracep->chgCData(oldp+47,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i),8);
            tracep->chgIData(oldp+48,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i),32);
            tracep->chgIData(oldp+49,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i),32);
            tracep->chgBit(oldp+50,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wreg_i));
            tracep->chgCData(oldp+51,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wd_i),5);
            tracep->chgIData(oldp+52,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i),32);
            tracep->chgCData(oldp+53,((vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                       >> 0x1aU)),6);
            tracep->chgCData(oldp+54,((0x1fU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                >> 6U))),5);
            tracep->chgCData(oldp+55,((0x3fU & vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i)),6);
            tracep->chgCData(oldp+56,((0x1fU & (vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_inst_i 
                                                >> 0x10U))),5);
            tracep->chgIData(oldp+57,(((IData)(8U) 
                                       + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)),32);
            tracep->chgIData(oldp+58,(((IData)(4U) 
                                       + vlSelf->jz_core_min_sopc__DOT__core0__DOT__id_pc_i)),32);
            tracep->chgIData(oldp+59,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext),32);
            tracep->chgBit(oldp+60,((0xe3U == (IData)(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i))));
            tracep->chgIData(oldp+61,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[0]),32);
            tracep->chgIData(oldp+62,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[1]),32);
            tracep->chgIData(oldp+63,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[2]),32);
            tracep->chgIData(oldp+64,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[3]),32);
            tracep->chgIData(oldp+65,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[4]),32);
            tracep->chgIData(oldp+66,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[5]),32);
            tracep->chgIData(oldp+67,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[6]),32);
            tracep->chgIData(oldp+68,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[7]),32);
            tracep->chgIData(oldp+69,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[8]),32);
            tracep->chgIData(oldp+70,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[9]),32);
            tracep->chgIData(oldp+71,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[10]),32);
            tracep->chgIData(oldp+72,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[11]),32);
            tracep->chgIData(oldp+73,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[12]),32);
            tracep->chgIData(oldp+74,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[13]),32);
            tracep->chgIData(oldp+75,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[14]),32);
            tracep->chgIData(oldp+76,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[15]),32);
            tracep->chgIData(oldp+77,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[16]),32);
            tracep->chgIData(oldp+78,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[17]),32);
            tracep->chgIData(oldp+79,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[18]),32);
            tracep->chgIData(oldp+80,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[19]),32);
            tracep->chgIData(oldp+81,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[20]),32);
            tracep->chgIData(oldp+82,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[21]),32);
            tracep->chgIData(oldp+83,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[22]),32);
            tracep->chgIData(oldp+84,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[23]),32);
            tracep->chgIData(oldp+85,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[24]),32);
            tracep->chgIData(oldp+86,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[25]),32);
            tracep->chgIData(oldp+87,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[26]),32);
            tracep->chgIData(oldp+88,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[27]),32);
            tracep->chgIData(oldp+89,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[28]),32);
            tracep->chgIData(oldp+90,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[29]),32);
            tracep->chgIData(oldp+91,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[30]),32);
            tracep->chgIData(oldp+92,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs[31]),32);
            tracep->chgIData(oldp+93,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux),32);
            tracep->chgIData(oldp+94,((~ vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i)),32);
            tracep->chgIData(oldp+95,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum),32);
            tracep->chgBit(oldp+96,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__ov_sum));
            tracep->chgBit(oldp+97,(vlSelf->jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg1_lt_reg2));
        }
        tracep->chgSData(oldp+98,(vlSelf->switch_on),12);
        tracep->chgSData(oldp+99,(vlSelf->led_out),12);
        tracep->chgBit(oldp+100,(vlSelf->clk));
        tracep->chgBit(oldp+101,(vlSelf->rst));
        tracep->chgBit(oldp+102,(vlSelf->jz_core_min_sopc__DOT__clk_o));
        tracep->chgIData(oldp+103,(vlSelf->jz_core_min_sopc__DOT__fp0__DOT__count),31);
    }
}

void Vjz_core_min_sopc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vjz_core_min_sopc___024root* const __restrict vlSelf = static_cast<Vjz_core_min_sopc___024root*>(voidSelf);
    Vjz_core_min_sopc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
