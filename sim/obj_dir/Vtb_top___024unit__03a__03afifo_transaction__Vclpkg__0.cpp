// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

void Vtb_top___024unit__03a__03afifo_transaction::init(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_transaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__constraint.write_var(this->__PVT__delay, 0x0000000000000020ULL, 
                                      "delay", 0ULL);
}

void Vtb_top___024unit__03a__03afifo_transaction::__VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_transaction::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    this->__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = this->__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vtb_top___024unit__03a__03afifo_transaction::__VnoInFunc_c_delay_setup_constraint(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_transaction::__VnoInFunc_c_delay_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(bvand (__Vbv (bvsge delay #x00000000)) (__Vbv (bvsle delay #x00000004)))"s, "/home/beebadoobee/code/async_FIFO/tb_async_fifo.sv", 0x00000013U, 
                                 "    constraint c_delay { delay inside {[0:4]}; }");
}

void Vtb_top___024unit__03a__03afifo_transaction::__VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_transaction::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_c_delay_setup_constraint(vlSymsp);
}

void Vtb_top___024unit__03a__03afifo_transaction::__VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_transaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__data = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vtb_top___024unit__03a__03afifo_transaction::_ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top___024unit__03a__03afifo_transaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__data = VL_SCOPED_RAND_RESET_I(8, 6962161574850448493ULL, 10363016170300574568ull);
    __PVT__delay = 0;
}
