// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__2(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vtb_top___024root* vlSelf, VlForkSync __Vfork_1__sync);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vtb_top___024root* vlSelf, VlForkSync __Vfork_1__sync);

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__unnamedblk1__DOT__env = VL_NEW(Vtb_top___024unit__03a__03afifo_environment, vlSymsp, (&vlSymsp->TOP__tb_top__DOT__vif));
    {
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(2U, nullptr);
        Vtb_top___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(vlSelf, __Vfork_1__sync);
        Vtb_top___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(vlSelf, __Vfork_1__sync);
        co_await __Vfork_1__sync.join(nullptr, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                      274);
    }
    VL_FINISH_MT("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 282, "");
    co_return;
}

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vtb_top___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000014ULL, 
                                         nullptr, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                         277);
    vlSelfRef.tb_top__DOT__wrst_n = 1U;
    vlSelfRef.tb_top__DOT__rrst_n = 1U;
    __Vfork_1__sync.done("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                         276);
    co_return;
}

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vtb_top___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await VL_NULL_CHECK(vlSelfRef.tb_top__DOT__unnamedblk1__DOT__env, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 275)->__VnoInFunc_run(vlSymsp, 0x00000064U);
    __Vfork_1__sync.done("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                         275);
    co_return;
}

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(7ULL, 
                                             nullptr, 
                                             "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                             245);
        vlSelfRef.tb_top__DOT__rclk = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__rclk)));
    }
    co_return;
}

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                             244);
        vlSelfRef.tb_top__DOT__wclk = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__wclk)));
    }
    co_return;
}

bool Vtb_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__ico\n"); );
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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_top___024root___eval_phase__ico(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__ico\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffff7ULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP__tb_top__DOT__vif.winc) 
                                                             != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__winc)))) 
                                            << 3U));
        vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__winc 
            = vlSymsp->TOP__tb_top__DOT__vif.winc;
        vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffbULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP__tb_top__DOT__vif.wdata) 
                                                             != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__wdata)))) 
                                            << 2U));
        vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__wdata 
            = vlSymsp->TOP__tb_top__DOT__vif.wdata;
        vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffdULL 
                                          & vlSelfRef.__VicoTriggered[0U]) 
                                         | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP__tb_top__DOT__vif.rinc) 
                                                             != (IData)(vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__rinc)))) 
                                            << 1U));
        vlSelfRef.__Vtrigprevvif_ico_TOP__tb_top__DOT__vif__rinc 
            = vlSymsp->TOP__tb_top__DOT__vif.rinc;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtb_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((8ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbinnext 
                        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbin) 
                                          + ((~ (IData)(vlSelfRef.tb_top__DOT____Vcellout__dut__wfull)) 
                                             & (IData)(vlSymsp->TOP__tb_top__DOT__vif.winc))));
                    vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wgraynext 
                        = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbinnext) 
                           ^ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbinnext) 
                              >> 1U));
                }
            }
            if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__1
                    vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbinnext 
                        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbin) 
                                          + ((~ (IData)(vlSelfRef.tb_top__DOT____Vcellout__dut__rempty)) 
                                             & (IData)(vlSymsp->TOP__tb_top__DOT__vif.rinc))));
                    vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rgraynext 
                        = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbinnext) 
                           ^ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbinnext) 
                              >> 1U));
                }
            }
        }
    }
    return (__VicoExecute);
}

bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (vlSymsp->TOP__tb_top__DOT__vif.rrst_n) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_top__DOT__vif__rinc)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__tb_top__DOT____Vcellout__dut__rempty)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: async_fifo_sva.sv:28: Assertion failed in %m: SVA Error: Read increment occurred while FIFO is empty!\n",3, 'M',vlSymsp->name(),"tb_top.dut.u_async_fifo_sva.ap_no_underflow", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/home/beebadoobee/code/async_FIFO/async_fifo_sva.sv", 28, "");
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I(
                                                       ((IData)(vlSelfRef.__Vsampled_TOP__tb_top__DOT__dut__DOT__rptr) 
                                                        ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_async_fifo_sva__DOT___Vpast_6_1)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: async_fifo_sva.sv:45: Assertion failed in %m: SVA Error: Read pointer Gray code transition changed more than 1 bit!\n",3, 'M',vlSymsp->name(),"tb_top.dut.u_async_fifo_sva.ap_gray_rptr_transition", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/home/beebadoobee/code/async_FIFO/async_fifo_sva.sv", 45, "");
                }
            }
        }
    }
    vlSelfRef.tb_top__DOT__dut__DOT__u_async_fifo_sva__DOT___Vpast_6_1 
        = vlSelfRef.__Vsampled_TOP__tb_top__DOT__dut__DOT__rptr;
}

void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__tb_top__DOT__dut__DOT__u_fifomem__DOT__mem__v0;
    __VdlyVal__tb_top__DOT__dut__DOT__u_fifomem__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__u_fifomem__DOT__mem__v0;
    __VdlyDim0__tb_top__DOT__dut__DOT__u_fifomem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_top__DOT__dut__DOT__u_fifomem__DOT__mem__v0;
    __VdlySet__tb_top__DOT__dut__DOT__u_fifomem__DOT__mem__v0 = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (vlSymsp->TOP__tb_top__DOT__vif.wrst_n) {
                if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__tb_top__DOT__vif__winc)) 
                                           | (~ (IData)(vlSelfRef.__Vsampled_TOP__tb_top__DOT____Vcellout__dut__wfull)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: async_fifo_sva.sv:22: Assertion failed in %m: SVA Error: Write increment occurred while FIFO is full!\n",3, 'M',vlSymsp->name(),"tb_top.dut.u_async_fifo_sva.ap_no_overflow", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/home/beebadoobee/code/async_FIFO/async_fifo_sva.sv", 22, "");
                }
                if (VL_UNLIKELY((((IData)(vlSelfRef.__Vsampled_TOP__tb_top__DOT____Vcellout__dut__wfull) 
                                  & (IData)(vlSelfRef.__Vsampled_TOP__tb_top__DOT____Vcellout__dut__rempty))))) {
                    VL_WRITEF_NX("[%0t] %%Error: async_fifo_sva.sv:34: Assertion failed in %m: SVA Error: FIFO cannot be both FULL and EMPTY simultaneously!\n",3, 'M',vlSymsp->name(),"tb_top.dut.u_async_fifo_sva.ap_flag_consistency", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/home/beebadoobee/code/async_FIFO/async_fifo_sva.sv", 34, "");
                }
                if (VL_UNLIKELY(((1U & (~ VL_ONEHOT0_I(
                                                       ((IData)(vlSelfRef.__Vsampled_TOP__tb_top__DOT__dut__DOT__wptr) 
                                                        ^ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_async_fifo_sva__DOT___Vpast_4_1)))))))) {
                    VL_WRITEF_NX("[%0t] %%Error: async_fifo_sva.sv:40: Assertion failed in %m: SVA Error: Write pointer Gray code transition changed more than 1 bit!\n",3, 'M',vlSymsp->name(),"tb_top.dut.u_async_fifo_sva.ap_gray_wptr_transition", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("/home/beebadoobee/code/async_FIFO/async_fifo_sva.sv", 40, "");
                }
            }
        }
    }
    __VdlySet__tb_top__DOT__dut__DOT__u_fifomem__DOT__mem__v0 = 0U;
    if (((~ (IData)(vlSelfRef.tb_top__DOT____Vcellout__dut__wfull)) 
         & (IData)(vlSymsp->TOP__tb_top__DOT__vif.winc))) {
        __VdlyVal__tb_top__DOT__dut__DOT__u_fifomem__DOT__mem__v0 
            = vlSymsp->TOP__tb_top__DOT__vif.wdata;
        __VdlyDim0__tb_top__DOT__dut__DOT__u_fifomem__DOT__mem__v0 
            = (0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbin));
        __VdlySet__tb_top__DOT__dut__DOT__u_fifomem__DOT__mem__v0 = 1U;
    }
    vlSelfRef.tb_top__DOT__dut__DOT__u_async_fifo_sva__DOT___Vpast_4_1 
        = vlSelfRef.__Vsampled_TOP__tb_top__DOT__dut__DOT__wptr;
    if (__VdlySet__tb_top__DOT__dut__DOT__u_fifomem__DOT__mem__v0) {
        vlSelfRef.tb_top__DOT__dut__DOT__u_fifomem__DOT__mem[__VdlyDim0__tb_top__DOT__dut__DOT__u_fifomem__DOT__mem__v0] 
            = __VdlyVal__tb_top__DOT__dut__DOT__u_fifomem__DOT__mem__v0;
    }
}

void Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x000000000000000aULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            vlSelfRef.tb_top__DOT____Vcellout__dut__rempty 
                = ((1U & (~ (IData)(vlSymsp->TOP__tb_top__DOT__vif.rrst_n))) 
                   || ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__rq2_wptr) 
                       == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rgraynext)));
            if (vlSymsp->TOP__tb_top__DOT__vif.rrst_n) {
                vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbin 
                    = vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbinnext;
                vlSelfRef.tb_top__DOT__dut__DOT__rq2_wptr 
                    = vlSelfRef.tb_top__DOT__dut__DOT__u_sync_w2r__DOT__rq1_wptr;
                vlSelfRef.tb_top__DOT__dut__DOT__u_sync_w2r__DOT__rq1_wptr 
                    = vlSelfRef.tb_top__DOT__dut__DOT__wptr;
            } else {
                vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbin = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__rq2_wptr = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__u_sync_w2r__DOT__rq1_wptr = 0U;
            }
            vlSymsp->TOP__tb_top__DOT__vif.rempty = vlSelfRef.tb_top__DOT____Vcellout__dut__rempty;
        }
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            vlSelfRef.tb_top__DOT____Vcellout__dut__wfull 
                = ((IData)(vlSymsp->TOP__tb_top__DOT__vif.wrst_n) 
                   && (((0x00000018U & ((~ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__wq2_rptr) 
                                            >> 3U)) 
                                        << 3U)) | (7U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__wq2_rptr))) 
                       == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wgraynext)));
            if (vlSymsp->TOP__tb_top__DOT__vif.wrst_n) {
                vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbin 
                    = vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbinnext;
                vlSelfRef.tb_top__DOT__dut__DOT__wptr 
                    = vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wgraynext;
                vlSelfRef.tb_top__DOT__dut__DOT__wq2_rptr 
                    = vlSelfRef.tb_top__DOT__dut__DOT__u_sync_r2w__DOT__wq1_rptr;
                vlSelfRef.tb_top__DOT__dut__DOT__u_sync_r2w__DOT__wq1_rptr 
                    = vlSelfRef.tb_top__DOT__dut__DOT__rptr;
            } else {
                vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbin = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__wptr = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__wq2_rptr = 0U;
                vlSelfRef.tb_top__DOT__dut__DOT__u_sync_r2w__DOT__wq1_rptr = 0U;
            }
            vlSymsp->TOP__tb_top__DOT__vif.wfull = vlSelfRef.tb_top__DOT____Vcellout__dut__wfull;
        }
    }
    if ((0x000000000000000bULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSymsp->TOP__tb_top__DOT__vif.rdata = vlSelfRef.tb_top__DOT__dut__DOT__u_fifomem__DOT__mem
                [(0x0000000fU & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbin))];
        }
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0x000000000000000aULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbinnext 
                = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbin) 
                                  + ((~ (IData)(vlSelfRef.tb_top__DOT____Vcellout__dut__rempty)) 
                                     & (IData)(vlSymsp->TOP__tb_top__DOT__vif.rinc))));
        }
    }
    if (((4ULL & vlSelfRef.__VnbaTriggered[1U]) | (5ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        {
            // Inlined CFunc: _ico_sequent__TOP__0
            vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbinnext 
                = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbin) 
                                  + ((~ (IData)(vlSelfRef.tb_top__DOT____Vcellout__dut__wfull)) 
                                     & (IData)(vlSymsp->TOP__tb_top__DOT__vif.winc))));
            vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wgraynext 
                = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbinnext) 
                   ^ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_wptr_full__DOT__wbinnext) 
                      >> 1U));
        }
    }
    if ((0x000000000000000aULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            vlSelfRef.tb_top__DOT__dut__DOT__rptr = 
                ((IData)(vlSymsp->TOP__tb_top__DOT__vif.rrst_n)
                  ? (IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rgraynext)
                  : 0U);
        }
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0x000000000000000aULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rgraynext 
                = ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbinnext) 
                   ^ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__u_rptr_empty__DOT__rbinnext) 
                      >> 1U));
        }
    }
}

void Vtb_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_top___024root___eval_phase__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffbULL 
                                          & vlSelfRef.__VactTriggered[1U]) 
                                         | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP__tb_top__DOT__vif.winc) 
                                                             != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__winc)))) 
                                            << 2U));
        vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__winc 
            = vlSymsp->TOP__tb_top__DOT__vif.winc;
        vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffdULL 
                                          & vlSelfRef.__VactTriggered[1U]) 
                                         | ((QData)((IData)(
                                                            ((IData)(vlSymsp->TOP__tb_top__DOT__vif.wdata) 
                                                             != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__wdata)))) 
                                            << 1U));
        vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__wdata 
            = vlSymsp->TOP__tb_top__DOT__vif.wdata;
        vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VactTriggered[1U]) 
                                         | (IData)((IData)(
                                                           ((IData)(vlSymsp->TOP__tb_top__DOT__vif.rinc) 
                                                            != (IData)(vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__rinc)))));
        vlSelfRef.__Vtrigprevvif_act_TOP__tb_top__DOT__vif__rinc 
            = vlSymsp->TOP__tb_top__DOT__vif.rinc;
        vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,8, 
                                                     ((VL_EXTEND_II(4,2, 
                                                                    ((vlSelfRef.__VdynSched.evaluate() 
                                                                      << 1U) 
                                                                     | vlSelfRef.__VdlySched.awaitingCurrentTime())) 
                                                       << 4U) 
                                                      | (((((~ (IData)(vlSymsp->TOP__tb_top__DOT__vif.rrst_n)) 
                                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__rrst_n__0)) 
                                                           << 3U) 
                                                          | (((~ (IData)(vlSymsp->TOP__tb_top__DOT__vif.wrst_n)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__wrst_n__0)) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSymsp->TOP__tb_top__DOT__vif.rclk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__rclk__0))) 
                                                             << 1U) 
                                                            | ((IData)(vlSymsp->TOP__tb_top__DOT__vif.wclk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__wclk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__wclk__0 
            = vlSymsp->TOP__tb_top__DOT__vif.wclk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__rclk__0 
            = vlSymsp->TOP__tb_top__DOT__vif.rclk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__wrst_n__0 
            = vlSymsp->TOP__tb_top__DOT__vif.wrst_n;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__vif__rrst_n__0 
            = vlSymsp->TOP__tb_top__DOT__vif.rrst_n;
        vlSelfRef.__VdynSched.doPostUpdates();
    }
    Vtb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            vlSelfRef.__VdynSched.resume();
            if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
        {
            // Inlined CFunc: _eval_act
            if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSymsp->TOP__tb_top__DOT__vif.wclk 
                        = vlSelfRef.tb_top__DOT__wclk;
                    vlSymsp->TOP__tb_top__DOT__vif.rclk 
                        = vlSelfRef.tb_top__DOT__rclk;
                    vlSymsp->TOP__tb_top__DOT__vif.wrst_n 
                        = vlSelfRef.tb_top__DOT__wrst_n;
                    vlSymsp->TOP__tb_top__DOT__vif.rrst_n 
                        = vlSelfRef.tb_top__DOT__rrst_n;
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_top___024root___eval_phase__inact(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__inact\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 235, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtb_top___024root___eval_phase__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_top___024root___eval_nba(vlSelf);
        Vtb_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

void Vtb_top___024root___eval(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    {
        // Inlined CFunc: _sample
        vlSelfRef.__Vsampled_TOP__tb_top__DOT__vif__winc 
            = vlSymsp->TOP__tb_top__DOT__vif.winc;
        vlSelfRef.__Vsampled_TOP__tb_top__DOT____Vcellout__dut__wfull 
            = vlSelfRef.tb_top__DOT____Vcellout__dut__wfull;
        vlSelfRef.__Vsampled_TOP__tb_top__DOT____Vcellout__dut__rempty 
            = vlSelfRef.tb_top__DOT____Vcellout__dut__rempty;
        vlSelfRef.__Vsampled_TOP__tb_top__DOT__dut__DOT__wptr 
            = vlSelfRef.tb_top__DOT__dut__DOT__wptr;
        vlSelfRef.__Vsampled_TOP__tb_top__DOT__vif__rinc 
            = vlSymsp->TOP__tb_top__DOT__vif.rinc;
        vlSelfRef.__Vsampled_TOP__tb_top__DOT__dut__DOT__rptr 
            = vlSelfRef.tb_top__DOT__dut__DOT__rptr;
    }
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 235, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtb_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 235, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 235, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 235, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_top___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_top___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_debug_assertions\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
