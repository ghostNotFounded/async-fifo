// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP_STD__03A__03AMAILBOX__TZ2__VCLPKG_H_
#define VERILATED_VTB_TOP_STD__03A__03AMAILBOX__TZ2__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top_std__03a__03amailbox__Tz2__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top_std__03a__03amailbox__Tz2__Vclpkg();
    ~Vtb_top_std__03a__03amailbox__Tz2__Vclpkg();
    void ctor(Vtb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_top_std__03a__03amailbox__Tz2__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_top__Syms;

class Vtb_top_std__03a__03amailbox__Tz2 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<CData/*7:0*/> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tz2"; }
    VlClass* clone() const { return new Vtb_top_std__03a__03amailbox__Tz2(*this); }
    VlCoroutine __VnoInFunc_get(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ &message);
    void __VnoInFunc_num(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ &message);
    VlCoroutine __VnoInFunc_put(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ message);
    void __VnoInFunc_try_get(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vtb_top__Syms* __restrict vlSymsp, CData/*7:0*/ message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_top__Syms* __restrict vlSymsp);
  public:
    Vtb_top_std__03a__03amailbox__Tz2() = default;
    void init(Vtb_top__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    ~Vtb_top_std__03a__03amailbox__Tz2() {}
};


#endif  // guard
