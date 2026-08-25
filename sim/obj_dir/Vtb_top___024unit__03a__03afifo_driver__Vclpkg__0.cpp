// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top___024unit__03a__03afifo_driver::init(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_fifo_if* vif, VlClassRef<Vtb_top_std__03a__03amailbox__Tz1> w_mbx, VlClassRef<Vtb_top_std__03a__03amailbox__Tz1> r_mbx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__vif = vif;
    this->__PVT__w_mbx = w_mbx;
    this->__PVT__r_mbx = r_mbx;
}

void Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_run(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_run\n"); );
    // Body
    this->__VnoInFunc_run____Vfork_1__0(vlSymsp);
    this->__VnoInFunc_run____Vfork_1__1(vlSymsp);
}

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_run____Vfork_1__1(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_run____Vfork_1__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                            34);
    co_await this->__VnoInFunc_drive_read(vlSymsp);
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_run____Vfork_1__0(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                            34);
    co_await this->__VnoInFunc_drive_write(vlSymsp);
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_write(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_write\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hcc1f762a__2;
    __Vtrigprevexpr_hcc1f762a__2 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hcc1f762a__1;
    __Vtrigprevexpr_hcc1f762a__1 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hcc1f762a__0;
    __Vtrigprevexpr_hcc1f762a__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hb56faa66__0;
    __Vtrigprevexpr_hb56faa66__0 = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtb_top___024unit__03a__03afifo_transaction> unnamedblk1__DOT__tr;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    this->__VnoInFunc_drive_write____Vfork_2__0(vlSymsp, 0U);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*7:0*/ __Vintraval_h35736a09__0;
    __Vintraval_h35736a09__0 = 0;
    __Vintraval_h35736a09__0 = 0U;
    this->__VnoInFunc_drive_write____Vfork_3__0(vlSymsp, __Vintraval_h35736a09__0);
    VL_WRITEF_NX("[%0d] drive_write: waiting for reset\n",1
                 , '#',64,VL_TIME_UNITED_Q(1));
    CData/*0:0*/ __VdynTrigger_hcf8fe07d__0;
    __VdynTrigger_hcf8fe07d__0 = 0;
    __VdynTrigger_hcf8fe07d__0 = 0U;
    __Vtrigprevexpr_hb56faa66__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 44)
        ->wrst_n;
    while ((1U & (~ (IData)(__VdynTrigger_hcf8fe07d__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_driver.vif.wrst_n)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     44);
        __VdynTrigger_hcf8fe07d__0 = (VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 44)
                                      ->wrst_n & (~ (IData)(__Vtrigprevexpr_hb56faa66__0)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hcf8fe07d__0);
        __Vtrigprevexpr_hb56faa66__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 44)
            ->wrst_n;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge $unit::fifo_driver.vif.wrst_n)", 
                                                 "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                 44);
    VL_WRITEF_NX("[%0d] drive_write: reset released\n",1
                 , '#',64,VL_TIME_UNITED_Q(1));
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__w_mbx, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 48)->__VnoInFunc_get(vlSymsp, unnamedblk1__DOT__tr);
        VL_WRITEF_NX("[%0d] drive_write: got transaction, delay=%0d, data=%h\n",3
                     , '#',64,VL_TIME_UNITED_Q(1), '~',32,VL_NULL_CHECK(unnamedblk1__DOT__tr, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 49)
                     ->__PVT__delay, '#',8,VL_NULL_CHECK(unnamedblk1__DOT__tr, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 49)
                     ->__PVT__data);
        unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = VL_NULL_CHECK(unnamedblk1__DOT__tr, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 50)
            ->__PVT__delay;
        while (VL_LTS_III(32, 0U, unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            CData/*0:0*/ __VdynTrigger_hfa5fa749__0;
            __VdynTrigger_hfa5fa749__0 = 0;
            __VdynTrigger_hfa5fa749__0 = 0U;
            __Vtrigprevexpr_hcc1f762a__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 50)
                ->wclk;
            while ((1U & (~ (IData)(__VdynTrigger_hfa5fa749__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@(posedge $unit::fifo_driver.vif.wclk)", 
                                                             "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                             50);
                __VdynTrigger_hfa5fa749__0 = (VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 50)
                                              ->wclk 
                                              & (~ (IData)(__Vtrigprevexpr_hcc1f762a__0)));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfa5fa749__0);
                __Vtrigprevexpr_hcc1f762a__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 50)
                    ->wclk;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@(posedge $unit::fifo_driver.vif.wclk)", 
                                                         "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                         50);
            unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        co_await vlSymsp->TOP.__VdlySched.delay(1ULL, 
                                                nullptr, 
                                                "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                51);
        while (vlSymsp->TOP.tb_top__DOT____Vcellout__dut__wfull) {
            VL_WRITEF_NX("[%0d] drive_write: FIFO full, waiting... wfull=%b, wptr=%h, wq2_rptr=%h\n",4
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',1,(IData)(vlSymsp->TOP.tb_top__DOT____Vcellout__dut__wfull)
                         , '#',5,vlSymsp->TOP.tb_top__DOT__dut__DOT__wptr
                         , '#',5,(IData)(vlSymsp->TOP.tb_top__DOT__dut__DOT__wq2_rptr));
            CData/*0:0*/ __VdynTrigger_hfa5fa749__1;
            __VdynTrigger_hfa5fa749__1 = 0;
            __VdynTrigger_hfa5fa749__1 = 0U;
            __Vtrigprevexpr_hcc1f762a__1 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 55)
                ->wclk;
            while ((1U & (~ (IData)(__VdynTrigger_hfa5fa749__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@(posedge $unit::fifo_driver.vif.wclk)", 
                                                             "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                             55);
                __VdynTrigger_hfa5fa749__1 = (VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 55)
                                              ->wclk 
                                              & (~ (IData)(__Vtrigprevexpr_hcc1f762a__1)));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfa5fa749__1);
                __Vtrigprevexpr_hcc1f762a__1 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 55)
                    ->wclk;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@(posedge $unit::fifo_driver.vif.wclk)", 
                                                         "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                         55);
            co_await vlSymsp->TOP.__VdlySched.delay(1ULL, 
                                                    nullptr, 
                                                    "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                    56);
        }
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_hc104ef22__0;
        __Vintraval_hc104ef22__0 = 0;
        __Vintraval_hc104ef22__0 = 1U;
        this->__VnoInFunc_drive_write____Vfork_4__0(vlSymsp, __Vintraval_hc104ef22__0);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*7:0*/ __Vintraval_h48de5348__0;
        __Vintraval_h48de5348__0 = 0;
        __Vintraval_h48de5348__0 = VL_NULL_CHECK(unnamedblk1__DOT__tr, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 59)
            ->__PVT__data;
        this->__VnoInFunc_drive_write____Vfork_5__0(vlSymsp, __Vintraval_h48de5348__0);
        CData/*0:0*/ __VdynTrigger_hfa5fa749__2;
        __VdynTrigger_hfa5fa749__2 = 0;
        __VdynTrigger_hfa5fa749__2 = 0U;
        __Vtrigprevexpr_hcc1f762a__2 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 60)
            ->wclk;
        while ((1U & (~ (IData)(__VdynTrigger_hfa5fa749__2)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::fifo_driver.vif.wclk)", 
                                                         "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                         60);
            __VdynTrigger_hfa5fa749__2 = (VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 60)
                                          ->wclk & 
                                          (~ (IData)(__Vtrigprevexpr_hcc1f762a__2)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfa5fa749__2);
            __Vtrigprevexpr_hcc1f762a__2 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 60)
                ->wclk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_driver.vif.wclk)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     60);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_hc10438d6__1;
        __Vintraval_hc10438d6__1 = 0;
        __Vintraval_hc10438d6__1 = 0U;
        this->__VnoInFunc_drive_write____Vfork_6__0(vlSymsp, __Vintraval_hc10438d6__1);
        VL_WRITEF_NX("[%0d] drive_write: wrote data=%h\n",2
                     , '#',64,VL_TIME_UNITED_Q(1), '#',8,VL_NULL_CHECK(unnamedblk1__DOT__tr, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 62)
                     ->__PVT__data);
    }
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_write____Vfork_6__0(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hc10438d6__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_write____Vfork_6__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h10706a9b__4;
    __VdynTrigger_h10706a9b__4 = 0;
    __VdynTrigger_h10706a9b__4 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h10706a9b__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     61);
        __VdynTrigger_h10706a9b__4 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h10706a9b__4);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     61);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                 61);
    VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 61)->winc 
        = __Vintraval_hc10438d6__1;
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_write____Vfork_5__0(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_h48de5348__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_write____Vfork_5__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h10706a9b__3;
    __VdynTrigger_h10706a9b__3 = 0;
    __VdynTrigger_h10706a9b__3 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h10706a9b__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     59);
        __VdynTrigger_h10706a9b__3 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h10706a9b__3);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     59);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                 59);
    VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 59)->wdata 
        = __Vintraval_h48de5348__0;
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_write____Vfork_4__0(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hc104ef22__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_write____Vfork_4__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h10706a9b__2;
    __VdynTrigger_h10706a9b__2 = 0;
    __VdynTrigger_h10706a9b__2 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h10706a9b__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     58);
        __VdynTrigger_h10706a9b__2 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h10706a9b__2);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     58);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                 58);
    VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 58)->winc 
        = __Vintraval_hc104ef22__0;
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_write____Vfork_3__0(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ __Vintraval_h35736a09__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_write____Vfork_3__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h10706a9b__1;
    __VdynTrigger_h10706a9b__1 = 0;
    __VdynTrigger_h10706a9b__1 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h10706a9b__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     42);
        __VdynTrigger_h10706a9b__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h10706a9b__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     42);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                 42);
    VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 42)->wdata 
        = __Vintraval_h35736a09__0;
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_write____Vfork_2__0(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hc10438d6__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_write____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h10706a9b__0;
    __VdynTrigger_h10706a9b__0 = 0;
    __VdynTrigger_h10706a9b__0 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h10706a9b__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     41);
        __VdynTrigger_h10706a9b__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h10706a9b__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     41);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                 41);
    VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 41)->winc 
        = __Vintraval_hc10438d6__0;
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_read(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_read\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h60d68dda__2;
    __Vtrigprevexpr_h60d68dda__2 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h60d68dda__1;
    __Vtrigprevexpr_h60d68dda__1 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h60d68dda__0;
    __Vtrigprevexpr_h60d68dda__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_ha0b9d63d__0;
    __Vtrigprevexpr_ha0b9d63d__0 = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtb_top___024unit__03a__03afifo_transaction> unnamedblk2__DOT__tr;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk2__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    this->__VnoInFunc_drive_read____Vfork_7__0(vlSymsp, 0U);
    VL_WRITEF_NX("[%0d] drive_read: waiting for reset\n",1
                 , '#',64,VL_TIME_UNITED_Q(1));
    CData/*0:0*/ __VdynTrigger_ha2c507a6__0;
    __VdynTrigger_ha2c507a6__0 = 0;
    __VdynTrigger_ha2c507a6__0 = 0U;
    __Vtrigprevexpr_ha0b9d63d__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 69)
        ->rrst_n;
    while ((1U & (~ (IData)(__VdynTrigger_ha2c507a6__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_driver.vif.rrst_n)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     69);
        __VdynTrigger_ha2c507a6__0 = (VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 69)
                                      ->rrst_n & (~ (IData)(__Vtrigprevexpr_ha0b9d63d__0)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_ha2c507a6__0);
        __Vtrigprevexpr_ha0b9d63d__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 69)
            ->rrst_n;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge $unit::fifo_driver.vif.rrst_n)", 
                                                 "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                 69);
    VL_WRITEF_NX("[%0d] drive_read: reset released\n",1
                 , '#',64,VL_TIME_UNITED_Q(1));
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__r_mbx, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 73)->__VnoInFunc_get(vlSymsp, unnamedblk2__DOT__tr);
        VL_WRITEF_NX("[%0d] drive_read: got transaction, delay=%0d\n",2
                     , '#',64,VL_TIME_UNITED_Q(1), '~',32,VL_NULL_CHECK(unnamedblk2__DOT__tr, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 74)
                     ->__PVT__delay);
        unnamedblk2__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = VL_NULL_CHECK(unnamedblk2__DOT__tr, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 75)
            ->__PVT__delay;
        while (VL_LTS_III(32, 0U, unnamedblk2__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
            CData/*0:0*/ __VdynTrigger_h6318bbf9__0;
            __VdynTrigger_h6318bbf9__0 = 0;
            __VdynTrigger_h6318bbf9__0 = 0U;
            __Vtrigprevexpr_h60d68dda__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 75)
                ->rclk;
            while ((1U & (~ (IData)(__VdynTrigger_h6318bbf9__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@(posedge $unit::fifo_driver.vif.rclk)", 
                                                             "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                             75);
                __VdynTrigger_h6318bbf9__0 = (VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 75)
                                              ->rclk 
                                              & (~ (IData)(__Vtrigprevexpr_h60d68dda__0)));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h6318bbf9__0);
                __Vtrigprevexpr_h60d68dda__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 75)
                    ->rclk;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@(posedge $unit::fifo_driver.vif.rclk)", 
                                                         "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                         75);
            unnamedblk2__DOT__unnamedblk1_2__DOT____Vrepeat1 
                = (unnamedblk2__DOT__unnamedblk1_2__DOT____Vrepeat1 
                   - (IData)(1U));
        }
        co_await vlSymsp->TOP.__VdlySched.delay(1ULL, 
                                                nullptr, 
                                                "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                76);
        while (vlSymsp->TOP.tb_top__DOT____Vcellout__dut__rempty) {
            VL_WRITEF_NX("[%0d] drive_read: FIFO empty, waiting...\n",1
                         , '#',64,VL_TIME_UNITED_Q(1));
            CData/*0:0*/ __VdynTrigger_h6318bbf9__1;
            __VdynTrigger_h6318bbf9__1 = 0;
            __VdynTrigger_h6318bbf9__1 = 0U;
            __Vtrigprevexpr_h60d68dda__1 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 79)
                ->rclk;
            while ((1U & (~ (IData)(__VdynTrigger_h6318bbf9__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@(posedge $unit::fifo_driver.vif.rclk)", 
                                                             "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                             79);
                __VdynTrigger_h6318bbf9__1 = (VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 79)
                                              ->rclk 
                                              & (~ (IData)(__Vtrigprevexpr_h60d68dda__1)));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h6318bbf9__1);
                __Vtrigprevexpr_h60d68dda__1 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 79)
                    ->rclk;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@(posedge $unit::fifo_driver.vif.rclk)", 
                                                         "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                         79);
            co_await vlSymsp->TOP.__VdlySched.delay(1ULL, 
                                                    nullptr, 
                                                    "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                    80);
        }
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h79304275__0;
        __Vintraval_h79304275__0 = 0;
        __Vintraval_h79304275__0 = 1U;
        this->__VnoInFunc_drive_read____Vfork_8__0(vlSymsp, __Vintraval_h79304275__0);
        CData/*0:0*/ __VdynTrigger_h6318bbf9__2;
        __VdynTrigger_h6318bbf9__2 = 0;
        __VdynTrigger_h6318bbf9__2 = 0U;
        __Vtrigprevexpr_h60d68dda__2 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 83)
            ->rclk;
        while ((1U & (~ (IData)(__VdynTrigger_h6318bbf9__2)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::fifo_driver.vif.rclk)", 
                                                         "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                         83);
            __VdynTrigger_h6318bbf9__2 = (VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 83)
                                          ->rclk & 
                                          (~ (IData)(__Vtrigprevexpr_h60d68dda__2)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h6318bbf9__2);
            __Vtrigprevexpr_h60d68dda__2 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 83)
                ->rclk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_driver.vif.rclk)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     83);
        vlSymsp->TOP.__VnbaEventTrigger = 1U;
        CData/*0:0*/ __Vintraval_h793191f9__1;
        __Vintraval_h793191f9__1 = 0;
        __Vintraval_h793191f9__1 = 0U;
        this->__VnoInFunc_drive_read____Vfork_9__0(vlSymsp, __Vintraval_h793191f9__1);
        VL_WRITEF_NX("[%0d] drive_read: read transaction complete\n",1
                     , '#',64,VL_TIME_UNITED_Q(1));
    }
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_read____Vfork_9__0(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h793191f9__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_read____Vfork_9__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h10706a9b__7;
    __VdynTrigger_h10706a9b__7 = 0;
    __VdynTrigger_h10706a9b__7 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h10706a9b__7)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     84);
        __VdynTrigger_h10706a9b__7 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h10706a9b__7);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     84);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                 84);
    VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 84)->rinc 
        = __Vintraval_h793191f9__1;
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_read____Vfork_8__0(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h79304275__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_read____Vfork_8__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h10706a9b__6;
    __VdynTrigger_h10706a9b__6 = 0;
    __VdynTrigger_h10706a9b__6 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h10706a9b__6)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     82);
        __VdynTrigger_h10706a9b__6 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h10706a9b__6);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     82);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                 82);
    VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 82)->rinc 
        = __Vintraval_h79304275__0;
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_read____Vfork_7__0(Vtb_top__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h793191f9__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::__VnoInFunc_drive_read____Vfork_7__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h10706a9b__5;
    __VdynTrigger_h10706a9b__5 = 0;
    __VdynTrigger_h10706a9b__5 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h10706a9b__5)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     67);
        __VdynTrigger_h10706a9b__5 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h10706a9b__5);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     67);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                 67);
    VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 67)->rinc 
        = __Vintraval_h793191f9__0;
    co_return;
}

void Vtb_top___024unit__03a__03afifo_driver::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top___024unit__03a__03afifo_driver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}
