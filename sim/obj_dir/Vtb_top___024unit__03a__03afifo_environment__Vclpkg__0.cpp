// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top___024unit__03a__03afifo_environment::init(Vtb_top__Syms* __restrict vlSymsp, Vtb_top_fifo_if* vif) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_environment::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__vif = vif;
    this->__PVT__drv_w_mbx = VL_NEW(Vtb_top_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__drv_r_mbx = VL_NEW(Vtb_top_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__mon_w_mbx = VL_NEW(Vtb_top_std__03a__03amailbox__Tz2, vlSymsp, 0U);
    this->__PVT__mon_r_mbx = VL_NEW(Vtb_top_std__03a__03amailbox__Tz2, vlSymsp, 0U);
    this->__PVT__drv = VL_NEW(Vtb_top___024unit__03a__03afifo_driver, vlSymsp, vif, this->__PVT__drv_w_mbx, this->__PVT__drv_r_mbx);
    this->__PVT__mon = VL_NEW(Vtb_top___024unit__03a__03afifo_monitor, vlSymsp, vif, this->__PVT__mon_w_mbx, this->__PVT__mon_r_mbx);
    this->__PVT__sb = VL_NEW(Vtb_top___024unit__03a__03afifo_scoreboard, vlSymsp, this->__PVT__mon_w_mbx, this->__PVT__mon_r_mbx);
}

VlCoroutine Vtb_top___024unit__03a__03afifo_environment::__VnoInFunc_run(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ num_transactions) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_environment::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h09d54b54__0;
    __Vtrigprevexpr_h09d54b54__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_hf8d5c263__0;
    __Vtrigprevexpr_hf8d5c263__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VL_NULL_CHECK(this->__PVT__drv, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 203)->__VnoInFunc_run(vlSymsp);
    VL_NULL_CHECK(this->__PVT__mon, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 204)->__VnoInFunc_run(vlSymsp);
    VL_NULL_CHECK(this->__PVT__sb, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 205)->__VnoInFunc_run(vlSymsp);
    {
        VlForkSync __Vfork_1__sync;
        __Vfork_1__sync.init(2U, nullptr);
        this->__VnoInFunc_run____Vfork_1__0(vlSymsp, num_transactions, __Vfork_1__sync);
        this->__VnoInFunc_run____Vfork_1__1(vlSymsp, num_transactions, __Vfork_1__sync);
        co_await __Vfork_1__sync.join(nullptr, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                      207);
    }
    if (((VL_NULL_CHECK(this->__PVT__sb, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 212)
          ->__PVT__match_count + VL_NULL_CHECK(this->__PVT__sb, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 212)
          ->__PVT__error_count) != num_transactions)) {
        CData/*0:0*/ __VdynTrigger_h0b18fad1__0;
        __VdynTrigger_h0b18fad1__0 = 0;
        __VdynTrigger_h0b18fad1__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h0b18fad1__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (($unit::fifo_environment.sb.match_count + $unit::fifo_environment.sb.error_count) == $unit::fifo_environment.num_transactions))", 
                                                         "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                         212);
            __Vtrigprevexpr_hf8d5c263__0 = ((VL_NULL_CHECK(this->__PVT__sb, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 212)
                                             ->__PVT__match_count 
                                             + VL_NULL_CHECK(this->__PVT__sb, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 212)
                                             ->__PVT__error_count) 
                                            == num_transactions);
            __VdynTrigger_h0b18fad1__0 = __Vtrigprevexpr_hf8d5c263__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h0b18fad1__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (($unit::fifo_environment.sb.match_count + $unit::fifo_environment.sb.error_count) == $unit::fifo_environment.num_transactions))", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     212);
    }
    unnamedblk1_1__DOT____Vrepeat0 = 0x00000014U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        CData/*0:0*/ __VdynTrigger_hfc19812f__0;
        __VdynTrigger_hfc19812f__0 = 0;
        __VdynTrigger_hfc19812f__0 = 0U;
        __Vtrigprevexpr_h09d54b54__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 214)
            ->rclk;
        while ((1U & (~ (IData)(__VdynTrigger_hfc19812f__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::fifo_environment.vif.rclk)", 
                                                         "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                         214);
            __VdynTrigger_hfc19812f__0 = (VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 214)
                                          ->rclk & 
                                          (~ (IData)(__Vtrigprevexpr_h09d54b54__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hfc19812f__0);
            __Vtrigprevexpr_h09d54b54__0 = VL_NULL_CHECK(this->__PVT__vif, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 214)
                ->rclk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::fifo_environment.vif.rclk)", 
                                                     "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                                     214);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    VL_WRITEF_NX("Test complete. Matches: %0d, Errors: %0d\n",2
                 , '~',32,VL_NULL_CHECK(this->__PVT__sb, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 215)
                 ->__PVT__match_count, '~',32,VL_NULL_CHECK(this->__PVT__sb, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 215)
                 ->__PVT__error_count);
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_environment::__VnoInFunc_run____Vfork_1__1(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &num_transactions, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_environment::__VnoInFunc_run____Vfork_1__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_generator_read(vlSymsp, num_transactions);
    __Vfork_1__sync.done("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                         209);
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_environment::__VnoInFunc_run____Vfork_1__0(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &num_transactions, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_environment::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_generator_write(vlSymsp, num_transactions);
    __Vfork_1__sync.done("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                         208);
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_environment::__VnoInFunc_generator_write(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ num) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_environment::__VnoInFunc_generator_write\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCond_1;
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    VlClassRef<Vtb_top___024unit__03a__03afifo_transaction> unnamedblk1_2__DOT__unnamedblk1__DOT__tr;
    unnamedblk1_2__DOT____Vrepeat1 = num;
    while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
        unnamedblk1_2__DOT__unnamedblk1__DOT__tr = VL_NEW(Vtb_top___024unit__03a__03afifo_transaction, vlSymsp);
        if ((VlNull{} != unnamedblk1_2__DOT__unnamedblk1__DOT__tr)) {
            VL_NULL_CHECK(unnamedblk1_2__DOT__unnamedblk1__DOT__tr, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 221)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
            __VlefCond_1 = __VlefCall_0__randomize;
        } else {
            __VlefCond_1 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ (0U != __VlefCond_1)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_async_fifo.sv:221: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"$unit.fifo_environment.generator_write.unnamedblk1_2.unnamedblk1", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 221, "", false);
        }
        co_await VL_NULL_CHECK(this->__PVT__drv_w_mbx, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 222)->__VnoInFunc_put(vlSymsp, unnamedblk1_2__DOT__unnamedblk1__DOT__tr);
        unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                          - (IData)(1U));
    }
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_environment::__VnoInFunc_generator_read(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ num) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_environment::__VnoInFunc_generator_read\n"); );
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCond_1;
    IData/*31:0*/ __VlefCall_0__randomize;
    IData/*31:0*/ unnamedblk1_3__DOT____Vrepeat2;
    unnamedblk1_3__DOT____Vrepeat2 = 0;
    VlClassRef<Vtb_top___024unit__03a__03afifo_transaction> unnamedblk1_3__DOT__unnamedblk2__DOT__tr;
    unnamedblk1_3__DOT____Vrepeat2 = num;
    while (VL_LTS_III(32, 0U, unnamedblk1_3__DOT____Vrepeat2)) {
        unnamedblk1_3__DOT__unnamedblk2__DOT__tr = VL_NEW(Vtb_top___024unit__03a__03afifo_transaction, vlSymsp);
        if ((VlNull{} != unnamedblk1_3__DOT__unnamedblk2__DOT__tr)) {
            VL_NULL_CHECK(unnamedblk1_3__DOT__unnamedblk2__DOT__tr, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 229)->__VnoInFunc_randomize(vlSymsp, __VlefCall_0__randomize);
            __VlefCond_1 = __VlefCall_0__randomize;
        } else {
            __VlefCond_1 = 0U;
        }
        if (VL_UNLIKELY(((1U & (~ (0U != __VlefCond_1)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_async_fifo.sv:229: Assertion failed in %m\n",3, 'M',vlSymsp->name(),"$unit.fifo_environment.generator_read.unnamedblk1_3.unnamedblk2", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 229, "", false);
        }
        co_await VL_NULL_CHECK(this->__PVT__drv_r_mbx, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 230)->__VnoInFunc_put(vlSymsp, unnamedblk1_3__DOT__unnamedblk2__DOT__tr);
        unnamedblk1_3__DOT____Vrepeat2 = (unnamedblk1_3__DOT____Vrepeat2 
                                          - (IData)(1U));
    }
    co_return;
}

void Vtb_top___024unit__03a__03afifo_environment::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_environment::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}
