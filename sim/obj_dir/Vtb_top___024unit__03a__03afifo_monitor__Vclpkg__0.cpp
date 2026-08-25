// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top___024unit__03a__03afifo_monitor::init(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_fifo_if* vif, VlClassRef<Vtb_top_std__03a__03amailbox__Tz2> mon_w_mbx, VlClassRef<Vtb_top_std__03a__03amailbox__Tz2> mon_r_mbx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_monitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__vif = vif;
    this->__PVT__mon_w_mbx = mon_w_mbx;
    this->__PVT__mon_r_mbx = mon_r_mbx;
}

void Vtb_top___024unit__03a__03afifo_monitor::__VnoInFunc_run(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_monitor::__VnoInFunc_run\n"); );
    // Body
    this->__VnoInFunc_run____Vfork_1__0(vlSymsp);
    this->__VnoInFunc_run____Vfork_1__1(vlSymsp);
}

VlCoroutine Vtb_top___024unit__03a__03afifo_monitor::__VnoInFunc_run____Vfork_1__1(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_monitor::__VnoInFunc_run____Vfork_1__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                            102);
    co_await this->__VnoInFunc_monitor_read(vlSymsp);
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_monitor::__VnoInFunc_run____Vfork_1__0(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_monitor::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                            102);
    co_await this->__VnoInFunc_monitor_write(vlSymsp);
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_monitor::__VnoInFunc_monitor_write(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_monitor::__VnoInFunc_monitor_write\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hf93b069e__0;
    __Vtrigprevexpr_hf93b069e__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h67539cd2__0;
    __Vtrigprevexpr_h67539cd2__0 = 0;
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h5d9bce81__0;
    __VdynTrigger_h5d9bce81__0 = 0;
    __VdynTrigger_h5d9bce81__0 = 0U;
    __Vtrigprevexpr_h67539cd2__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 109)
        ->wrst_n;
    while ((1U & (~ (IData)(__VdynTrigger_h5d9bce81__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_monitor.vif.wrst_n)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     109);
        __VdynTrigger_h5d9bce81__0 = (VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 109)
                                      ->wrst_n & (~ (IData)(__Vtrigprevexpr_h67539cd2__0)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h5d9bce81__0);
        __Vtrigprevexpr_h67539cd2__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 109)
            ->wrst_n;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge $unit::fifo_monitor.vif.wrst_n)", 
                                                 "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                 109);
    while (true) {
        CData/*0:0*/ __VdynTrigger_h0b4443c5__0;
        __VdynTrigger_h0b4443c5__0 = 0;
        __VdynTrigger_h0b4443c5__0 = 0U;
        __Vtrigprevexpr_hf93b069e__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 111)
            ->wclk;
        while ((1U & (~ (IData)(__VdynTrigger_h0b4443c5__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::fifo_monitor.vif.wclk)", 
                                                         "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                         111);
            __VdynTrigger_h0b4443c5__0 = (VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 111)
                                          ->wclk & 
                                          (~ (IData)(__Vtrigprevexpr_hf93b069e__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h0b4443c5__0);
            __Vtrigprevexpr_hf93b069e__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 111)
                ->wclk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_monitor.vif.wclk)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     111);
        if ((VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 112)
             ->winc && (1U & (~ VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 112)
                              ->wfull)))) {
            co_await VL_NULL_CHECK(this->__PVT__mon_w_mbx, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 113)->__VnoInFunc_put(vlSymsp, VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 113)
                                                                                ->wdata);
        }
    }
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_monitor::__VnoInFunc_monitor_read(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_monitor::__VnoInFunc_monitor_read\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hd7327e76__0;
    __Vtrigprevexpr_hd7327e76__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h9addc6e9__0;
    __Vtrigprevexpr_h9addc6e9__0 = 0;
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_ha921050a__0;
    __VdynTrigger_ha921050a__0 = 0;
    __VdynTrigger_ha921050a__0 = 0U;
    __Vtrigprevexpr_h9addc6e9__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 119)
        ->rrst_n;
    while ((1U & (~ (IData)(__VdynTrigger_ha921050a__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_monitor.vif.rrst_n)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     119);
        __VdynTrigger_ha921050a__0 = (VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 119)
                                      ->rrst_n & (~ (IData)(__Vtrigprevexpr_h9addc6e9__0)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_ha921050a__0);
        __Vtrigprevexpr_h9addc6e9__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 119)
            ->rrst_n;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge $unit::fifo_monitor.vif.rrst_n)", 
                                                 "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                 119);
    while (true) {
        CData/*0:0*/ __VdynTrigger_hed3cbc8d__0;
        __VdynTrigger_hed3cbc8d__0 = 0;
        __VdynTrigger_hed3cbc8d__0 = 0U;
        __Vtrigprevexpr_hd7327e76__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 121)
            ->rclk;
        while ((1U & (~ (IData)(__VdynTrigger_hed3cbc8d__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::fifo_monitor.vif.rclk)", 
                                                         "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                         121);
            __VdynTrigger_hed3cbc8d__0 = (VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 121)
                                          ->rclk & 
                                          (~ (IData)(__Vtrigprevexpr_hd7327e76__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hed3cbc8d__0);
            __Vtrigprevexpr_hd7327e76__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 121)
                ->rclk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_monitor.vif.rclk)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     121);
        if ((VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 122)
             ->rinc && (1U & (~ VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 122)
                              ->rempty)))) {
            co_await VL_NULL_CHECK(this->__PVT__mon_r_mbx, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 123)->__VnoInFunc_put(vlSymsp, VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 123)
                                                                                ->rdata);
        }
    }
    co_return;
}

void Vtb_top___024unit__03a__03afifo_monitor::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_monitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}
