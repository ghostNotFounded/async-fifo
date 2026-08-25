// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024UNIT__03A__03AFIFO_TRANSACTION__VCLPKG_H_
#define VERILATED_VTB_TOP___024UNIT__03A__03AFIFO_TRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024unit__03a__03afifo_transaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top___024unit__03a__03afifo_transaction__Vclpkg();
    ~Vtb_top___024unit__03a__03afifo_transaction__Vclpkg();
    void ctor(Vtb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_top___024unit__03a__03afifo_transaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_top__Syms;

class Vtb_top___024unit__03a__03afifo_transaction : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__data;
    IData/*31:0*/ __PVT__delay;
    VlRandomizer __PVT__constraint;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::fifo_transaction"; }
    VlClass* clone() const { return new Vtb_top___024unit__03a__03afifo_transaction(*this); }
    void __VnoInFunc___VBasicRand(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_c_delay_setup_constraint(Vtb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top___024unit__03a__03afifo_transaction() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp);
    ~Vtb_top___024unit__03a__03afifo_transaction() {}
};


#endif  // guard
