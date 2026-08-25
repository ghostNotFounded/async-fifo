// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top_fifo_if___ctor_var_reset(Vtb_top_fifo_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtb_top_fifo_if___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->wclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12278276179844817653ull);
    vlSelf->wrst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 258982040489774707ull);
    vlSelf->winc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16007895650452401314ull);
    vlSelf->wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12890271867161903902ull);
    vlSelf->wfull = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5864852463863308700ull);
    vlSelf->rclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12802990810940348356ull);
    vlSelf->rrst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17959613517326749ull);
    vlSelf->rinc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3707185169570288080ull);
    vlSelf->rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10065165116613087284ull);
    vlSelf->rempty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13287137859590754213ull);
}
