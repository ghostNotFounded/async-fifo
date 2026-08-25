// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_top__DOT__wclk = 0U;
        vlSelfRef.tb_top__DOT__rclk = 0U;
        vlSelfRef.tb_top__DOT__wrst_n = 0U;
        vlSelfRef.tb_top__DOT__rrst_n = 0U;
    }
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__rinc 
        = vlSymsp->TOP__tb_top__DOT__vif.rinc;
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__wdata 
        = vlSymsp->TOP__tb_top__DOT__vif.wdata;
    vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__winc 
        = vlSymsp->TOP__tb_top__DOT__vif.winc;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__wclk__0 
        = vlSymsp->TOP__tb_top__DOT__vif.wclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__rclk__0 
        = vlSymsp->TOP__tb_top__DOT__vif.rclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__wrst_n__0 
        = vlSymsp->TOP__tb_top__DOT__vif.wrst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__rrst_n__0 
        = vlSymsp->TOP__tb_top__DOT__vif.rrst_n;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__rinc 
        = vlSymsp->TOP__tb_top__DOT__vif.rinc;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__wdata 
        = vlSymsp->TOP__tb_top__DOT__vif.wdata;
    vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__winc 
        = vlSymsp->TOP__tb_top__DOT__vif.winc;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((1U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_top___024root___eval_final(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_settle(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_settle\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 235, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSymsp->TOP__tb_top__DOT__vif.wclk 
                        = vlSelfRef.tb_top__DOT__wclk;
                    vlSymsp->TOP__tb_top__DOT__vif.rclk 
                        = vlSelfRef.tb_top__DOT__rclk;
                    vlSymsp->TOP__tb_top__DOT__vif.wrst_n 
                        = vlSelfRef.tb_top__DOT__wrst_n;
                    vlSymsp->TOP__tb_top__DOT__vif.rrst_n 
                        = vlSelfRef.tb_top__DOT__rrst_n;
                    vlSymsp->TOP__tb_top__DOT__vif.rempty 
                        = vlSelfRef.tb_top__DOT____Vcellout__dut__rempty;
                    vlSymsp->TOP__tb_top__DOT__vif.wfull 
                        = vlSelfRef.tb_top__DOT____Vcellout__dut__wfull;
                    vlSymsp->TOP__tb_top__DOT__vif.rdata 
                        = vlSelfRef.tb_top__DOT__dut__DOT__u_fifomem__DOT__mem
                        [(0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbin))];
                    vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbinnext 
                        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbin) 
                                          + ((~ (IData)(vlSelfRef.tb_top__DOT____Vcellout__dut__wfull)) 
                                             & (IData)(vlSymsp->TOP__tb_top__DOT__vif.winc))));
                    vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbinnext 
                        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbin) 
                                          + ((~ (IData)(vlSelfRef.tb_top__DOT____Vcellout__dut__rempty)) 
                                             & (IData)(vlSymsp->TOP__tb_top__DOT__vif.rinc))));
                    vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wgraynext 
                        = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbinnext) 
                           ^ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbinnext) 
                              >> 1U));
                    vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rgraynext 
                        = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbinnext) 
                           ^ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbinnext) 
                              >> 1U));
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtb_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: Internal 'ico' trigger - virtual interface member: fifo_if.rinc\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: Internal 'ico' trigger - virtual interface member: fifo_if.wdata\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: Internal 'ico' trigger - virtual interface member: fifo_if.winc\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_top.vif.wclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_top.vif.rclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge tb_top.vif.wrst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_top.vif.rrst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @([true] __VdynSched.evaluate())\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'act' trigger - virtual interface member: fifo_if.rinc\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: Internal 'act' trigger - virtual interface member: fifo_if.wdata\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: Internal 'act' trigger - virtual interface member: fifo_if.winc\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_top__DOT____Vcellout__dut__rempty = 0;
    vlSelf->tb_top__DOT____Vcellout__dut__wfull = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_top__DOT__dut__DOT__wptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7739092359692376602ull);
    vlSelf->tb_top__DOT__dut__DOT__rptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6613968604533572419ull);
    vlSelf->tb_top__DOT__dut__DOT__wq2_rptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2920258539994712155ull);
    vlSelf->tb_top__DOT__dut__DOT__rq2_wptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1453834564174851963ull);
    vlSelf->tb_top__DOT__dut__DOT__u_async_fifo_sva__DOT___Vpast_4_1 = 0;
    vlSelf->tb_top__DOT__dut__DOT__u_async_fifo_sva__DOT___Vpast_6_1 = 0;
    vlSelf->tb_top__DOT__dut__DOT__u_sync_r2w__DOT__wq1_rptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10344256708920720142ull);
    vlSelf->tb_top__DOT__dut__DOT__u_sync_w2r__DOT__rq1_wptr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 318518294754173300ull);
    vlSelf->tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbin = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12186285802599178250ull);
    vlSelf->tb_top__DOT__dut__DOT__u_wptr_full__DOT__wgraynext = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5130649611355685916ull);
    vlSelf->tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbinnext = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3278894172580669076ull);
    vlSelf->tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbin = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4539938398200839929ull);
    vlSelf->tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rgraynext = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8607451463770040163ull);
    vlSelf->tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbinnext = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5609331808264093559ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_top__DOT__dut__DOT__u_fifomem__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16880543745748728142ull);
    }
    vlSelf->__VnbaEventTrigger = 0;
    vlSelf->__Vsampled_TOP__tb_top__DOT__vif__winc = 0;
    vlSelf->__Vsampled_TOP__tb_top__DOT____Vcellout__dut__wfull = 0;
    vlSelf->__Vsampled_TOP__tb_top__DOT____Vcellout__dut__rempty = 0;
    vlSelf->__Vsampled_TOP__tb_top__DOT__dut__DOT__wptr = 0;
    vlSelf->__Vsampled_TOP__tb_top__DOT__vif__rinc = 0;
    vlSelf->__Vsampled_TOP__tb_top__DOT__dut__DOT__rptr = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__rinc = 0;
    vlSelf->__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__wdata = 0;
    vlSelf->__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__winc = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__vif__wclk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__vif__rclk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__vif__wrst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__vif__rrst_n__0 = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb_top__DOT__vif__rinc = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb_top__DOT__vif__wdata = 0;
    vlSelf->__Vtrigprevvif_act_TOP__tb_top__DOT__vif__winc = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
