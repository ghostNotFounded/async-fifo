// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top___024unit__03a__03afifo_scoreboard::init(Vtb_top__Syms* __restrict vlSymsp, VlClassRef<Vtb_top_std__03a__03amailbox__Tz2> mon_w_mbx, VlClassRef<Vtb_top_std__03a__03amailbox__Tz2> mon_r_mbx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_scoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__match_count = 0U;
    this->__PVT__error_count = 0U;
    this->__PVT__mon_w_mbx = mon_w_mbx;
    this->__PVT__mon_r_mbx = mon_r_mbx;
}

void Vtb_top___024unit__03a__03afifo_scoreboard::__VnoInFunc_run(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_scoreboard::__VnoInFunc_run\n"); );
    // Body
    this->__VnoInFunc_run____Vfork_1__0(vlSymsp);
    this->__VnoInFunc_run____Vfork_1__1(vlSymsp);
}

VlCoroutine Vtb_top___024unit__03a__03afifo_scoreboard::__VnoInFunc_run____Vfork_1__1(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_scoreboard::__VnoInFunc_run____Vfork_1__1\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                            143);
    co_await this->__VnoInFunc_collect_reads(vlSymsp);
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_scoreboard::__VnoInFunc_run____Vfork_1__0(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_scoreboard::__VnoInFunc_run____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            nullptr, 
                                            "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 
                                            143);
    co_await this->__VnoInFunc_collect_writes(vlSymsp);
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_scoreboard::__VnoInFunc_collect_writes(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_scoreboard::__VnoInFunc_collect_writes\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*7:0*/ unnamedblk1__DOT__wdata;
    while (true) {
        unnamedblk1__DOT__wdata = 0;
        co_await VL_NULL_CHECK(this->__PVT__mon_w_mbx, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 152)->__VnoInFunc_get(vlSymsp, unnamedblk1__DOT__wdata);
        this->__PVT__ref_queue.push_back(unnamedblk1__DOT__wdata);
    }
    co_return;
}

VlCoroutine Vtb_top___024unit__03a__03afifo_scoreboard::__VnoInFunc_collect_reads(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_scoreboard::__VnoInFunc_collect_reads\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*7:0*/ unnamedblk2__DOT__rdata;
    CData/*7:0*/ unnamedblk2__DOT__expected_data;
    while (true) {
        unnamedblk2__DOT__rdata = 0;
        unnamedblk2__DOT__expected_data = 0;
        co_await VL_NULL_CHECK(this->__PVT__mon_r_mbx, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 161)->__VnoInFunc_get(vlSymsp, unnamedblk2__DOT__rdata);
        if (VL_LIKELY((VL_LTS_III(32, 0U, this->__PVT__ref_queue.size())))) {
            unnamedblk2__DOT__expected_data = this->__PVT__ref_queue.pop_front();
            if (VL_LIKELY((((IData)(unnamedblk2__DOT__rdata) 
                            == (IData)(unnamedblk2__DOT__expected_data))))) {
                this->__PVT__match_count = ((IData)(1U) 
                                            + this->__PVT__match_count);
            } else {
                this->__PVT__error_count = ((IData)(1U) 
                                            + this->__PVT__error_count);
                VL_WRITEF_NX("[%0t] %%Error: tb_async_fifo.sv:168: Assertion failed in %m: Mismatch! Expected: %h, Got: %h\n",5, 'M',vlSymsp->name(),"$unit.fifo_scoreboard.collect_reads.unnamedblk2", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',8,(IData)(unnamedblk2__DOT__expected_data)
                             , '#',8,unnamedblk2__DOT__rdata);
                VL_STOP_MT("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 168, "");
            }
        } else {
            this->__PVT__error_count = ((IData)(1U) 
                                        + this->__PVT__error_count);
            VL_WRITEF_NX("[%0t] %%Error: tb_async_fifo.sv:172: Assertion failed in %m: Read occurred but reference queue is empty! Got: %h\n",4, 'M',vlSymsp->name(),"$unit.fifo_scoreboard.collect_reads.unnamedblk2", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',8,(IData)(unnamedblk2__DOT__rdata));
            VL_STOP_MT("/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 172, "");
        }
    }
    co_return;
}

void Vtb_top___024unit__03a__03afifo_scoreboard::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_scoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__ref_queue.atDefault() = VL_SCOPED_RAND_RESET_I(8, 9819753097203476992ULL, 10108412767011498502ull);
}
