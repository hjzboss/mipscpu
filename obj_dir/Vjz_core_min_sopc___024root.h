// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjz_core_min_sopc.h for the primary calling header

#ifndef VERILATED_VJZ_CORE_MIN_SOPC___024ROOT_H_
#define VERILATED_VJZ_CORE_MIN_SOPC___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vjz_core_min_sopc__Syms;
class Vjz_core_min_sopc_VerilatedVcd;


//----------

VL_MODULE(Vjz_core_min_sopc___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN16(switch_on,11,0);
    VL_OUT16(led_out,11,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ jz_core_min_sopc__DOT__clk_o;
        CData/*0:0*/ jz_core_min_sopc__DOT__rom_ce;
        CData/*0:0*/ jz_core_min_sopc__DOT__mem_ce_i;
        CData/*7:0*/ jz_core_min_sopc__DOT__core0__DOT__id_aluop_o;
        CData/*2:0*/ jz_core_min_sopc__DOT__core0__DOT__id_alusel_o;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__id_wreg_o;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT__id_wd_o;
        CData/*7:0*/ jz_core_min_sopc__DOT__core0__DOT__ex_aluop_i;
        CData/*2:0*/ jz_core_min_sopc__DOT__core0__DOT__ex_alusel_i;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__ex_wreg_i;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT__ex_wd_i;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__ex_wreg_o;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__mem_wreg_i;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT__mem_wd_i;
        CData/*7:0*/ jz_core_min_sopc__DOT__core0__DOT__mem_aluop_i;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__mem_wreg_o;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT__mem_wd_o;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__wb_wreg_i;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT__wb_wd_i;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__reg1_read;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__reg2_read;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT__reg1_addr;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT__reg2_addr;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__id_branch_flag_o;
        CData/*5:0*/ jz_core_min_sopc__DOT__core0__DOT__stall;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__stallreq_from_id;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg1_loadrelate;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__id0__DOT__stallreq_for_reg2_loadrelate;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__ov_sum;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg1_eq_reg2;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg1_lt_reg2;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__mem0__DOT__mem_we;
        IData/*31:0*/ jz_core_min_sopc__DOT__inst;
        IData/*31:0*/ jz_core_min_sopc__DOT__mem_addr_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__mem_data_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__mem_data_o;
        IData/*30:0*/ jz_core_min_sopc__DOT__fp0__DOT__count;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__pc;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__id_pc_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__id_inst_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__id_reg1_o;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__id_reg2_o;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex_reg1_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex_reg2_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex_inst_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex_wdata_o;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex_mem_addr_o;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex_reg1_o;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__mem_wdata_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__mem_mem_addr_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__mem_reg1_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__mem_reg2_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__mem_wdata_o;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__wb_wdata_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__reg1_data;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__reg2_data;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__branch_target_address;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__id0__DOT__imm_sll2_signedext;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__logicout;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__arithmeticres;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__reg2_i_mux;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT__result_sum;
        VlUnpacked<IData/*31:0*/, 32> jz_core_min_sopc__DOT__core0__DOT__regfile1__DOT__regs;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 255> jz_core_min_sopc__DOT__data_ram0__DOT__data_mem;
        VlUnpacked<IData/*31:0*/, 255> jz_core_min_sopc__DOT__inst_rom0__DOT__inst_mem;
    };

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ jz_core_min_sopc__DOT____Vtogcov__clk;
        CData/*0:0*/ jz_core_min_sopc__DOT____Vtogcov__rst;
        CData/*0:0*/ jz_core_min_sopc__DOT____Vtogcov__rom_ce;
        CData/*0:0*/ jz_core_min_sopc__DOT____Vtogcov__mem_we_i;
        CData/*0:0*/ jz_core_min_sopc__DOT____Vtogcov__mem_ce_i;
        CData/*0:0*/ jz_core_min_sopc__DOT____Vtogcov__clk_o;
        CData/*7:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_aluop_o;
        CData/*2:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_alusel_o;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wreg_o;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_wd_o;
        CData/*7:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_aluop_i;
        CData/*2:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_alusel_i;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wreg_i;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wd_i;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wreg_o;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wreg_i;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_i;
        CData/*7:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_aluop_i;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wreg_o;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wd_o;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wreg_i;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wd_i;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_read;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_read;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_addr;
        CData/*4:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_addr;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_branch_flag_o;
        CData/*5:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stall;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__stallreq_from_id;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__stallreq_for_reg1_loadrelate;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__stallreq_for_reg2_loadrelate;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pre_inst_is_load;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__ov_sum;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_eq_reg2;
        CData/*0:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_lt_reg2;
        CData/*0:0*/ __VinpClk__TOP__jz_core_min_sopc__DOT__clk_o;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__jz_core_min_sopc__DOT__clk_o;
        CData/*0:0*/ __Vchglast__TOP__jz_core_min_sopc__DOT__clk_o;
        SData/*11:0*/ jz_core_min_sopc__DOT____Vtogcov__switch_on;
        SData/*11:0*/ jz_core_min_sopc__DOT____Vtogcov__led_out;
        IData/*31:0*/ jz_core_min_sopc__DOT____Vtogcov__inst_addr;
        IData/*31:0*/ jz_core_min_sopc__DOT____Vtogcov__inst;
        IData/*31:0*/ jz_core_min_sopc__DOT____Vtogcov__mem_addr_i;
        IData/*31:0*/ jz_core_min_sopc__DOT____Vtogcov__mem_data_i;
        IData/*31:0*/ jz_core_min_sopc__DOT____Vtogcov__mem_data_o;
        IData/*30:0*/ jz_core_min_sopc__DOT__fp0__DOT____Vtogcov__count;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_pc_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_inst_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg1_o;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__id_reg2_o;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg2_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_inst_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_wdata_o;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_mem_addr_o;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__ex_reg1_o;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_mem_addr_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg1_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_reg2_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__mem_wdata_o;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__wb_wdata_i;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg1_data;
    };
    struct {
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__reg2_data;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT____Vtogcov__branch_target_address;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_8;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__pc_plus_4;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__id0__DOT____Vtogcov__imm_sll2_signedext;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__logicout;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__arithmeticres;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg2_i_mux;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__reg1_i_not;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__ex0__DOT____Vtogcov__result_sum;
        IData/*31:0*/ jz_core_min_sopc__DOT__core0__DOT__mem0__DOT____Vtogcov__zero32;
        IData/*31:0*/ jz_core_min_sopc__DOT__data_ram0__DOT____Vlvbound1;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vjz_core_min_sopc__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjz_core_min_sopc___024root);  ///< Copying not allowed
  public:
    Vjz_core_min_sopc___024root(const char* name);
    ~Vjz_core_min_sopc___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vjz_core_min_sopc__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
