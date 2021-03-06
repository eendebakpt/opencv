//
// AUTOGENERATED, DO NOT EDIT
//
#ifndef ADDITIONAL_FN_DEFINITIONS
#define ADDITIONAL_FN_DEFINITIONS
#endif

// generated by parser_clamdfft.py
enum OPENCLAMDFFT_FN_ID {
    OPENCLAMDFFT_FN_clAmdFftBakePlan = 0,
//    OPENCLAMDFFT_FN_clAmdFftCopyPlan = 1,
    OPENCLAMDFFT_FN_clAmdFftCreateDefaultPlan = 2,
    OPENCLAMDFFT_FN_clAmdFftDestroyPlan = 3,
    OPENCLAMDFFT_FN_clAmdFftEnqueueTransform = 4,
//    OPENCLAMDFFT_FN_clAmdFftGetLayout = 5,
//    OPENCLAMDFFT_FN_clAmdFftGetPlanBatchSize = 6,
//    OPENCLAMDFFT_FN_clAmdFftGetPlanContext = 7,
//    OPENCLAMDFFT_FN_clAmdFftGetPlanDim = 8,
//    OPENCLAMDFFT_FN_clAmdFftGetPlanDistance = 9,
//    OPENCLAMDFFT_FN_clAmdFftGetPlanInStride = 10,
//    OPENCLAMDFFT_FN_clAmdFftGetPlanLength = 11,
//    OPENCLAMDFFT_FN_clAmdFftGetPlanOutStride = 12,
//    OPENCLAMDFFT_FN_clAmdFftGetPlanPrecision = 13,
//    OPENCLAMDFFT_FN_clAmdFftGetPlanScale = 14,
//    OPENCLAMDFFT_FN_clAmdFftGetPlanTransposeResult = 15,
//    OPENCLAMDFFT_FN_clAmdFftGetResultLocation = 16,
    OPENCLAMDFFT_FN_clAmdFftGetTmpBufSize = 17,
//    OPENCLAMDFFT_FN_clAmdFftGetVersion = 18,
    OPENCLAMDFFT_FN_clAmdFftSetLayout = 19,
    OPENCLAMDFFT_FN_clAmdFftSetPlanBatchSize = 20,
//    OPENCLAMDFFT_FN_clAmdFftSetPlanDim = 21,
    OPENCLAMDFFT_FN_clAmdFftSetPlanDistance = 22,
    OPENCLAMDFFT_FN_clAmdFftSetPlanInStride = 23,
//    OPENCLAMDFFT_FN_clAmdFftSetPlanLength = 24,
    OPENCLAMDFFT_FN_clAmdFftSetPlanOutStride = 25,
//    OPENCLAMDFFT_FN_clAmdFftSetPlanPrecision = 26,
    OPENCLAMDFFT_FN_clAmdFftSetPlanScale = 27,
//    OPENCLAMDFFT_FN_clAmdFftSetPlanTransposeResult = 28,
    OPENCLAMDFFT_FN_clAmdFftSetResultLocation = 29,
    OPENCLAMDFFT_FN_clAmdFftSetup = 30,
    OPENCLAMDFFT_FN_clAmdFftTeardown = 31,
};

namespace {
// generated by parser_clamdfft.py
template <int ID, typename _R>
struct openclamdfft_fn0
{
    typedef _R (*FN)();
    static _R switch_fn()
    { return ((FN)openclamdfft_check_fn(ID))(); }
};

template <int ID, typename _R, typename _T1>
struct openclamdfft_fn1
{
    typedef _R (*FN)(_T1);
    static _R switch_fn(_T1 p1)
    { return ((FN)openclamdfft_check_fn(ID))(p1); }
};

template <int ID, typename _R, typename _T1, typename _T2>
struct openclamdfft_fn2
{
    typedef _R (*FN)(_T1, _T2);
    static _R switch_fn(_T1 p1, _T2 p2)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3>
struct openclamdfft_fn3
{
    typedef _R (*FN)(_T1, _T2, _T3);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4>
struct openclamdfft_fn4
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5>
struct openclamdfft_fn5
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6>
struct openclamdfft_fn6
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7>
struct openclamdfft_fn7
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8>
struct openclamdfft_fn8
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9>
struct openclamdfft_fn9
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9, typename _T10>
struct openclamdfft_fn10
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9, _T10);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9, _T10 p10)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9, typename _T10, typename _T11>
struct openclamdfft_fn11
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9, _T10, _T11);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9, _T10 p10, _T11 p11)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9, typename _T10, typename _T11, typename _T12>
struct openclamdfft_fn12
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9, _T10, _T11, _T12);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9, _T10 p10, _T11 p11, _T12 p12)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9, typename _T10, typename _T11, typename _T12, typename _T13>
struct openclamdfft_fn13
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9, _T10, _T11, _T12, _T13);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9, _T10 p10, _T11 p11, _T12 p12, _T13 p13)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9, typename _T10, typename _T11, typename _T12, typename _T13, typename _T14>
struct openclamdfft_fn14
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9, _T10, _T11, _T12, _T13, _T14);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9, _T10 p10, _T11 p11, _T12 p12, _T13 p13, _T14 p14)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9, typename _T10, typename _T11, typename _T12, typename _T13, typename _T14, typename _T15>
struct openclamdfft_fn15
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9, _T10, _T11, _T12, _T13, _T14, _T15);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9, _T10 p10, _T11 p11, _T12 p12, _T13 p13, _T14 p14, _T15 p15)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9, typename _T10, typename _T11, typename _T12, typename _T13, typename _T14, typename _T15, typename _T16>
struct openclamdfft_fn16
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9, _T10, _T11, _T12, _T13, _T14, _T15, _T16);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9, _T10 p10, _T11 p11, _T12 p12, _T13 p13, _T14 p14, _T15 p15, _T16 p16)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9, typename _T10, typename _T11, typename _T12, typename _T13, typename _T14, typename _T15, typename _T16, typename _T17>
struct openclamdfft_fn17
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9, _T10, _T11, _T12, _T13, _T14, _T15, _T16, _T17);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9, _T10 p10, _T11 p11, _T12 p12, _T13 p13, _T14 p14, _T15 p15, _T16 p16, _T17 p17)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9, typename _T10, typename _T11, typename _T12, typename _T13, typename _T14, typename _T15, typename _T16, typename _T17, typename _T18>
struct openclamdfft_fn18
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9, _T10, _T11, _T12, _T13, _T14, _T15, _T16, _T17, _T18);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9, _T10 p10, _T11 p11, _T12 p12, _T13 p13, _T14 p14, _T15 p15, _T16 p16, _T17 p17, _T18 p18)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9, typename _T10, typename _T11, typename _T12, typename _T13, typename _T14, typename _T15, typename _T16, typename _T17, typename _T18, typename _T19>
struct openclamdfft_fn19
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9, _T10, _T11, _T12, _T13, _T14, _T15, _T16, _T17, _T18, _T19);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9, _T10 p10, _T11 p11, _T12 p12, _T13 p13, _T14 p14, _T15 p15, _T16 p16, _T17 p17, _T18 p18, _T19 p19)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9, typename _T10, typename _T11, typename _T12, typename _T13, typename _T14, typename _T15, typename _T16, typename _T17, typename _T18, typename _T19, typename _T20>
struct openclamdfft_fn20
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9, _T10, _T11, _T12, _T13, _T14, _T15, _T16, _T17, _T18, _T19, _T20);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9, _T10 p10, _T11 p11, _T12 p12, _T13 p13, _T14 p14, _T15 p15, _T16 p16, _T17 p17, _T18 p18, _T19 p19, _T20 p20)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9, typename _T10, typename _T11, typename _T12, typename _T13, typename _T14, typename _T15, typename _T16, typename _T17, typename _T18, typename _T19, typename _T20, typename _T21>
struct openclamdfft_fn21
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9, _T10, _T11, _T12, _T13, _T14, _T15, _T16, _T17, _T18, _T19, _T20, _T21);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9, _T10 p10, _T11 p11, _T12 p12, _T13 p13, _T14 p14, _T15 p15, _T16 p16, _T17 p17, _T18 p18, _T19 p19, _T20 p20, _T21 p21)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21); }
};

template <int ID, typename _R, typename _T1, typename _T2, typename _T3, typename _T4, typename _T5, typename _T6, typename _T7, typename _T8, typename _T9, typename _T10, typename _T11, typename _T12, typename _T13, typename _T14, typename _T15, typename _T16, typename _T17, typename _T18, typename _T19, typename _T20, typename _T21, typename _T22>
struct openclamdfft_fn22
{
    typedef _R (*FN)(_T1, _T2, _T3, _T4, _T5, _T6, _T7, _T8, _T9, _T10, _T11, _T12, _T13, _T14, _T15, _T16, _T17, _T18, _T19, _T20, _T21, _T22);
    static _R switch_fn(_T1 p1, _T2 p2, _T3 p3, _T4 p4, _T5 p5, _T6 p6, _T7 p7, _T8 p8, _T9 p9, _T10 p10, _T11 p11, _T12 p12, _T13 p13, _T14 p14, _T15 p15, _T16 p16, _T17 p17, _T18 p18, _T19 p19, _T20 p20, _T21 p21, _T22 p22)
    { return ((FN)openclamdfft_check_fn(ID))(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22); }
};

}

// generated by parser_clamdfft.py
clAmdFftStatus (*clAmdFftBakePlan)(clAmdFftPlanHandle, cl_uint, cl_command_queue*, void (CL_CALLBACK*) (clAmdFftPlanHandle plHandle, void* user_data), void*) =
        openclamdfft_fn5<OPENCLAMDFFT_FN_clAmdFftBakePlan, clAmdFftStatus, clAmdFftPlanHandle, cl_uint, cl_command_queue*, void (CL_CALLBACK*) (clAmdFftPlanHandle plHandle, void* user_data), void*>::switch_fn;
static const struct DynamicFnEntry clAmdFftBakePlan_definition = { "clAmdFftBakePlan", (void**)&clAmdFftBakePlan};

//clAmdFftStatus (*clAmdFftCopyPlan)(clAmdFftPlanHandle*, cl_context, clAmdFftPlanHandle) =
//        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftCopyPlan, clAmdFftStatus, clAmdFftPlanHandle*, cl_context, clAmdFftPlanHandle>::switch_fn;
//static const struct DynamicFnEntry clAmdFftCopyPlan_definition = { "clAmdFftCopyPlan", (void**)&clAmdFftCopyPlan};

clAmdFftStatus (*clAmdFftCreateDefaultPlan)(clAmdFftPlanHandle*, cl_context, const clAmdFftDim, const size_t*) =
        openclamdfft_fn4<OPENCLAMDFFT_FN_clAmdFftCreateDefaultPlan, clAmdFftStatus, clAmdFftPlanHandle*, cl_context, const clAmdFftDim, const size_t*>::switch_fn;
static const struct DynamicFnEntry clAmdFftCreateDefaultPlan_definition = { "clAmdFftCreateDefaultPlan", (void**)&clAmdFftCreateDefaultPlan};

clAmdFftStatus (*clAmdFftDestroyPlan)(clAmdFftPlanHandle*) =
        openclamdfft_fn1<OPENCLAMDFFT_FN_clAmdFftDestroyPlan, clAmdFftStatus, clAmdFftPlanHandle*>::switch_fn;
static const struct DynamicFnEntry clAmdFftDestroyPlan_definition = { "clAmdFftDestroyPlan", (void**)&clAmdFftDestroyPlan};

clAmdFftStatus (*clAmdFftEnqueueTransform)(clAmdFftPlanHandle, clAmdFftDirection, cl_uint, cl_command_queue*, cl_uint, const cl_event*, cl_event*, cl_mem*, cl_mem*, cl_mem) =
        openclamdfft_fn10<OPENCLAMDFFT_FN_clAmdFftEnqueueTransform, clAmdFftStatus, clAmdFftPlanHandle, clAmdFftDirection, cl_uint, cl_command_queue*, cl_uint, const cl_event*, cl_event*, cl_mem*, cl_mem*, cl_mem>::switch_fn;
static const struct DynamicFnEntry clAmdFftEnqueueTransform_definition = { "clAmdFftEnqueueTransform", (void**)&clAmdFftEnqueueTransform};

//clAmdFftStatus (*clAmdFftGetLayout)(const clAmdFftPlanHandle, clAmdFftLayout*, clAmdFftLayout*) =
//        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftGetLayout, clAmdFftStatus, const clAmdFftPlanHandle, clAmdFftLayout*, clAmdFftLayout*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftGetLayout_definition = { "clAmdFftGetLayout", (void**)&clAmdFftGetLayout};

//clAmdFftStatus (*clAmdFftGetPlanBatchSize)(const clAmdFftPlanHandle, size_t*) =
//        openclamdfft_fn2<OPENCLAMDFFT_FN_clAmdFftGetPlanBatchSize, clAmdFftStatus, const clAmdFftPlanHandle, size_t*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftGetPlanBatchSize_definition = { "clAmdFftGetPlanBatchSize", (void**)&clAmdFftGetPlanBatchSize};

//clAmdFftStatus (*clAmdFftGetPlanContext)(const clAmdFftPlanHandle, cl_context*) =
//        openclamdfft_fn2<OPENCLAMDFFT_FN_clAmdFftGetPlanContext, clAmdFftStatus, const clAmdFftPlanHandle, cl_context*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftGetPlanContext_definition = { "clAmdFftGetPlanContext", (void**)&clAmdFftGetPlanContext};

//clAmdFftStatus (*clAmdFftGetPlanDim)(const clAmdFftPlanHandle, clAmdFftDim*, cl_uint*) =
//        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftGetPlanDim, clAmdFftStatus, const clAmdFftPlanHandle, clAmdFftDim*, cl_uint*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftGetPlanDim_definition = { "clAmdFftGetPlanDim", (void**)&clAmdFftGetPlanDim};

//clAmdFftStatus (*clAmdFftGetPlanDistance)(const clAmdFftPlanHandle, size_t*, size_t*) =
//        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftGetPlanDistance, clAmdFftStatus, const clAmdFftPlanHandle, size_t*, size_t*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftGetPlanDistance_definition = { "clAmdFftGetPlanDistance", (void**)&clAmdFftGetPlanDistance};

//clAmdFftStatus (*clAmdFftGetPlanInStride)(const clAmdFftPlanHandle, const clAmdFftDim, size_t*) =
//        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftGetPlanInStride, clAmdFftStatus, const clAmdFftPlanHandle, const clAmdFftDim, size_t*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftGetPlanInStride_definition = { "clAmdFftGetPlanInStride", (void**)&clAmdFftGetPlanInStride};

//clAmdFftStatus (*clAmdFftGetPlanLength)(const clAmdFftPlanHandle, const clAmdFftDim, size_t*) =
//        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftGetPlanLength, clAmdFftStatus, const clAmdFftPlanHandle, const clAmdFftDim, size_t*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftGetPlanLength_definition = { "clAmdFftGetPlanLength", (void**)&clAmdFftGetPlanLength};

//clAmdFftStatus (*clAmdFftGetPlanOutStride)(const clAmdFftPlanHandle, const clAmdFftDim, size_t*) =
//        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftGetPlanOutStride, clAmdFftStatus, const clAmdFftPlanHandle, const clAmdFftDim, size_t*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftGetPlanOutStride_definition = { "clAmdFftGetPlanOutStride", (void**)&clAmdFftGetPlanOutStride};

//clAmdFftStatus (*clAmdFftGetPlanPrecision)(const clAmdFftPlanHandle, clAmdFftPrecision*) =
//        openclamdfft_fn2<OPENCLAMDFFT_FN_clAmdFftGetPlanPrecision, clAmdFftStatus, const clAmdFftPlanHandle, clAmdFftPrecision*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftGetPlanPrecision_definition = { "clAmdFftGetPlanPrecision", (void**)&clAmdFftGetPlanPrecision};

//clAmdFftStatus (*clAmdFftGetPlanScale)(const clAmdFftPlanHandle, clAmdFftDirection, cl_float*) =
//        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftGetPlanScale, clAmdFftStatus, const clAmdFftPlanHandle, clAmdFftDirection, cl_float*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftGetPlanScale_definition = { "clAmdFftGetPlanScale", (void**)&clAmdFftGetPlanScale};

//clAmdFftStatus (*clAmdFftGetPlanTransposeResult)(const clAmdFftPlanHandle, clAmdFftResultTransposed*) =
//        openclamdfft_fn2<OPENCLAMDFFT_FN_clAmdFftGetPlanTransposeResult, clAmdFftStatus, const clAmdFftPlanHandle, clAmdFftResultTransposed*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftGetPlanTransposeResult_definition = { "clAmdFftGetPlanTransposeResult", (void**)&clAmdFftGetPlanTransposeResult};

//clAmdFftStatus (*clAmdFftGetResultLocation)(const clAmdFftPlanHandle, clAmdFftResultLocation*) =
//        openclamdfft_fn2<OPENCLAMDFFT_FN_clAmdFftGetResultLocation, clAmdFftStatus, const clAmdFftPlanHandle, clAmdFftResultLocation*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftGetResultLocation_definition = { "clAmdFftGetResultLocation", (void**)&clAmdFftGetResultLocation};

clAmdFftStatus (*clAmdFftGetTmpBufSize)(const clAmdFftPlanHandle, size_t*) =
        openclamdfft_fn2<OPENCLAMDFFT_FN_clAmdFftGetTmpBufSize, clAmdFftStatus, const clAmdFftPlanHandle, size_t*>::switch_fn;
static const struct DynamicFnEntry clAmdFftGetTmpBufSize_definition = { "clAmdFftGetTmpBufSize", (void**)&clAmdFftGetTmpBufSize};

//clAmdFftStatus (*clAmdFftGetVersion)(cl_uint*, cl_uint*, cl_uint*) =
//        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftGetVersion, clAmdFftStatus, cl_uint*, cl_uint*, cl_uint*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftGetVersion_definition = { "clAmdFftGetVersion", (void**)&clAmdFftGetVersion};

clAmdFftStatus (*clAmdFftSetLayout)(clAmdFftPlanHandle, clAmdFftLayout, clAmdFftLayout) =
        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftSetLayout, clAmdFftStatus, clAmdFftPlanHandle, clAmdFftLayout, clAmdFftLayout>::switch_fn;
static const struct DynamicFnEntry clAmdFftSetLayout_definition = { "clAmdFftSetLayout", (void**)&clAmdFftSetLayout};

clAmdFftStatus (*clAmdFftSetPlanBatchSize)(clAmdFftPlanHandle, size_t) =
        openclamdfft_fn2<OPENCLAMDFFT_FN_clAmdFftSetPlanBatchSize, clAmdFftStatus, clAmdFftPlanHandle, size_t>::switch_fn;
static const struct DynamicFnEntry clAmdFftSetPlanBatchSize_definition = { "clAmdFftSetPlanBatchSize", (void**)&clAmdFftSetPlanBatchSize};

//clAmdFftStatus (*clAmdFftSetPlanDim)(clAmdFftPlanHandle, const clAmdFftDim) =
//        openclamdfft_fn2<OPENCLAMDFFT_FN_clAmdFftSetPlanDim, clAmdFftStatus, clAmdFftPlanHandle, const clAmdFftDim>::switch_fn;
//static const struct DynamicFnEntry clAmdFftSetPlanDim_definition = { "clAmdFftSetPlanDim", (void**)&clAmdFftSetPlanDim};

clAmdFftStatus (*clAmdFftSetPlanDistance)(clAmdFftPlanHandle, size_t, size_t) =
        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftSetPlanDistance, clAmdFftStatus, clAmdFftPlanHandle, size_t, size_t>::switch_fn;
static const struct DynamicFnEntry clAmdFftSetPlanDistance_definition = { "clAmdFftSetPlanDistance", (void**)&clAmdFftSetPlanDistance};

clAmdFftStatus (*clAmdFftSetPlanInStride)(clAmdFftPlanHandle, const clAmdFftDim, size_t*) =
        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftSetPlanInStride, clAmdFftStatus, clAmdFftPlanHandle, const clAmdFftDim, size_t*>::switch_fn;
static const struct DynamicFnEntry clAmdFftSetPlanInStride_definition = { "clAmdFftSetPlanInStride", (void**)&clAmdFftSetPlanInStride};

//clAmdFftStatus (*clAmdFftSetPlanLength)(clAmdFftPlanHandle, const clAmdFftDim, const size_t*) =
//        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftSetPlanLength, clAmdFftStatus, clAmdFftPlanHandle, const clAmdFftDim, const size_t*>::switch_fn;
//static const struct DynamicFnEntry clAmdFftSetPlanLength_definition = { "clAmdFftSetPlanLength", (void**)&clAmdFftSetPlanLength};

clAmdFftStatus (*clAmdFftSetPlanOutStride)(clAmdFftPlanHandle, const clAmdFftDim, size_t*) =
        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftSetPlanOutStride, clAmdFftStatus, clAmdFftPlanHandle, const clAmdFftDim, size_t*>::switch_fn;
static const struct DynamicFnEntry clAmdFftSetPlanOutStride_definition = { "clAmdFftSetPlanOutStride", (void**)&clAmdFftSetPlanOutStride};

//clAmdFftStatus (*clAmdFftSetPlanPrecision)(clAmdFftPlanHandle, clAmdFftPrecision) =
//        openclamdfft_fn2<OPENCLAMDFFT_FN_clAmdFftSetPlanPrecision, clAmdFftStatus, clAmdFftPlanHandle, clAmdFftPrecision>::switch_fn;
//static const struct DynamicFnEntry clAmdFftSetPlanPrecision_definition = { "clAmdFftSetPlanPrecision", (void**)&clAmdFftSetPlanPrecision};

clAmdFftStatus (*clAmdFftSetPlanScale)(clAmdFftPlanHandle, clAmdFftDirection, cl_float) =
        openclamdfft_fn3<OPENCLAMDFFT_FN_clAmdFftSetPlanScale, clAmdFftStatus, clAmdFftPlanHandle, clAmdFftDirection, cl_float>::switch_fn;
static const struct DynamicFnEntry clAmdFftSetPlanScale_definition = { "clAmdFftSetPlanScale", (void**)&clAmdFftSetPlanScale};

//clAmdFftStatus (*clAmdFftSetPlanTransposeResult)(clAmdFftPlanHandle, clAmdFftResultTransposed) =
//        openclamdfft_fn2<OPENCLAMDFFT_FN_clAmdFftSetPlanTransposeResult, clAmdFftStatus, clAmdFftPlanHandle, clAmdFftResultTransposed>::switch_fn;
//static const struct DynamicFnEntry clAmdFftSetPlanTransposeResult_definition = { "clAmdFftSetPlanTransposeResult", (void**)&clAmdFftSetPlanTransposeResult};

clAmdFftStatus (*clAmdFftSetResultLocation)(clAmdFftPlanHandle, clAmdFftResultLocation) =
        openclamdfft_fn2<OPENCLAMDFFT_FN_clAmdFftSetResultLocation, clAmdFftStatus, clAmdFftPlanHandle, clAmdFftResultLocation>::switch_fn;
static const struct DynamicFnEntry clAmdFftSetResultLocation_definition = { "clAmdFftSetResultLocation", (void**)&clAmdFftSetResultLocation};

clAmdFftStatus (*clAmdFftSetup)(const clAmdFftSetupData*) =
        openclamdfft_fn1<OPENCLAMDFFT_FN_clAmdFftSetup, clAmdFftStatus, const clAmdFftSetupData*>::switch_fn;
static const struct DynamicFnEntry clAmdFftSetup_definition = { "clAmdFftSetup", (void**)&clAmdFftSetup};

clAmdFftStatus (*clAmdFftTeardown)() =
        openclamdfft_fn0<OPENCLAMDFFT_FN_clAmdFftTeardown, clAmdFftStatus>::switch_fn;
static const struct DynamicFnEntry clAmdFftTeardown_definition = { "clAmdFftTeardown", (void**)&clAmdFftTeardown};


// generated by parser_clamdfft.py
static const struct DynamicFnEntry* openclamdfft_fn[] = {
    &clAmdFftBakePlan_definition,
    NULL/*&clAmdFftCopyPlan_definition*/,
    &clAmdFftCreateDefaultPlan_definition,
    &clAmdFftDestroyPlan_definition,
    &clAmdFftEnqueueTransform_definition,
    NULL/*&clAmdFftGetLayout_definition*/,
    NULL/*&clAmdFftGetPlanBatchSize_definition*/,
    NULL/*&clAmdFftGetPlanContext_definition*/,
    NULL/*&clAmdFftGetPlanDim_definition*/,
    NULL/*&clAmdFftGetPlanDistance_definition*/,
    NULL/*&clAmdFftGetPlanInStride_definition*/,
    NULL/*&clAmdFftGetPlanLength_definition*/,
    NULL/*&clAmdFftGetPlanOutStride_definition*/,
    NULL/*&clAmdFftGetPlanPrecision_definition*/,
    NULL/*&clAmdFftGetPlanScale_definition*/,
    NULL/*&clAmdFftGetPlanTransposeResult_definition*/,
    NULL/*&clAmdFftGetResultLocation_definition*/,
    &clAmdFftGetTmpBufSize_definition,
    NULL/*&clAmdFftGetVersion_definition*/,
    &clAmdFftSetLayout_definition,
    &clAmdFftSetPlanBatchSize_definition,
    NULL/*&clAmdFftSetPlanDim_definition*/,
    &clAmdFftSetPlanDistance_definition,
    &clAmdFftSetPlanInStride_definition,
    NULL/*&clAmdFftSetPlanLength_definition*/,
    &clAmdFftSetPlanOutStride_definition,
    NULL/*&clAmdFftSetPlanPrecision_definition*/,
    &clAmdFftSetPlanScale_definition,
    NULL/*&clAmdFftSetPlanTransposeResult_definition*/,
    &clAmdFftSetResultLocation_definition,
    &clAmdFftSetup_definition,
    &clAmdFftTeardown_definition,
    ADDITIONAL_FN_DEFINITIONS // macro for custom functions
};

// number of enabled functions: 14
