/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_TCtx__b6xwcD9cMKdlvd6DZIf4rHg tyObject_TCtx__b6xwcD9cMKdlvd6DZIf4rHg;
typedef struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA;
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ tySequence__xxu3GgaFAGO6lOns9aHaeLQ;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content;
typedef struct tySequence__L8fp6QCa2lczU05QM7SC9cg tySequence__L8fp6QCa2lczU05QM7SC9cg;
typedef struct tySequence__L8fp6QCa2lczU05QM7SC9cg_Content tySequence__L8fp6QCa2lczU05QM7SC9cg_Content;
typedef struct tyTuple__5ax60W9cMsa4brP9b9aNP9cF9aw tyTuple__5ax60W9cMsa4brP9b9aNP9cF9aw;
typedef struct tyObject_TPassContext__9aUzdnrOgAbujYuO39brF9bbA tyObject_TPassContext__9aUzdnrOgAbujYuO39brF9bbA;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag;
typedef struct tySequence__YdLNCDKYeipzJx3I8Xw82Q tySequence__YdLNCDKYeipzJx3I8Xw82Q;
typedef struct tySequence__YdLNCDKYeipzJx3I8Xw82Q_Content tySequence__YdLNCDKYeipzJx3I8Xw82Q_Content;
typedef struct tySequence__vGSdgYDvgwpTIM9bdnxpXHA tySequence__vGSdgYDvgwpTIM9bdnxpXHA;
typedef struct tySequence__vGSdgYDvgwpTIM9bdnxpXHA_Content tySequence__vGSdgYDvgwpTIM9bdnxpXHA_Content;
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ;
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content;
typedef struct tyObject_PProccolonObjectType___ZvYI1A9bklY7Sm9c9adwVzF9cQ tyObject_PProccolonObjectType___ZvYI1A9bklY7Sm9c9adwVzF9cQ;
typedef struct tySequence__6ARqGI2Ygeh4NflrqLf1hQ tySequence__6ARqGI2Ygeh4NflrqLf1hQ;
typedef struct tySequence__6ARqGI2Ygeh4NflrqLf1hQ_Content tySequence__6ARqGI2Ygeh4NflrqLf1hQ_Content;
typedef struct tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ;
typedef struct tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg;
typedef struct tyObject_ModuleGraphcolonObjectType___g2oCqJbiuGsLLrs8RBMKXg tyObject_ModuleGraphcolonObjectType___g2oCqJbiuGsLLrs8RBMKXg;
typedef struct tyObject_Profiler__tQl6UXzSSBVlFmDrJGqqPA tyObject_Profiler__tQl6UXzSSBVlFmDrJGqqPA;
typedef struct tyObject_TStackFrame__N30BaqTxdO9aOeBDi8omH3g tyObject_TStackFrame__N30BaqTxdO9aOeBDi8omH3g;
typedef struct tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w;
typedef struct tySequence__E8pi9b5QNahsURYzXMjh3qw tySequence__E8pi9b5QNahsURYzXMjh3qw;
typedef struct tySequence__E8pi9b5QNahsURYzXMjh3qw_Content tySequence__E8pi9b5QNahsURYzXMjh3qw_Content;
typedef struct tyTuple__o6BCEw8CrFLefGO7X45k6w tyTuple__o6BCEw8CrFLefGO7X45k6w;
typedef struct tyObject_VmArgs__m5KtcByJU2AdS9bbHP7rUig tyObject_VmArgs__m5KtcByJU2AdS9bbHP7rUig;
typedef struct tyTuple__47w2DboNEPf69aPgubZdd7Q tyTuple__47w2DboNEPf69aPgubZdd7Q;
typedef struct tyObject_TFullReg__TAKBj64um9cIhYRFcPXkxSQ tyObject_TFullReg__TAKBj64um9cIhYRFcPXkxSQ;
struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg {
NU16 line;
NI16 col;
NI32 fileIndex;
};
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NU32 tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw;
typedef NU8 tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ;
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ {
  NI len; tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content* p;
};
struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q {
tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typ;
tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info;
tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw flags;
tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ kind;
union{
struct {NI64 intVal;
} _kind_1;
struct {NF floatVal;
} _kind_2;
struct {NimStringV2 strVal;
} _kind_3;
struct {tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* sym;
} _kind_4;
struct {tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* ident;
} _kind_5;
struct {tySequence__xxu3GgaFAGO6lOns9aHaeLQ sons;
} _kind_6;
};
};
struct tySequence__L8fp6QCa2lczU05QM7SC9cg {
  NI len; tySequence__L8fp6QCa2lczU05QM7SC9cg_Content* p;
};
struct tyTuple__5ax60W9cMsa4brP9b9aNP9cF9aw {
tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* Field0;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* Field1;
};
struct TNimTypeV2 {
void* destructor;
NI size;
NI16 align;
NI16 depth;
NU32* display;
void* traceImpl;
void* typeInfoV1;
NI flags;
};
struct RootObj {
TNimTypeV2* m_type;
};
struct tyObject_TPassContext__9aUzdnrOgAbujYuO39brF9bbA {
  RootObj Sup;
tyObject_IdGeneratorcolonObjectType___C1k2TcDRT9cU4DEatQIT09ag* idgen;
};
struct tySequence__YdLNCDKYeipzJx3I8Xw82Q {
  NI len; tySequence__YdLNCDKYeipzJx3I8Xw82Q_Content* p;
};
struct tySequence__vGSdgYDvgwpTIM9bdnxpXHA {
  NI len; tySequence__vGSdgYDvgwpTIM9bdnxpXHA_Content* p;
};
struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ {
  NI len; tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content* p;
};
typedef NU8 tyEnum_TEvalMode__bzKsByQdtJOXOcqlXsimIg;
typedef NU8 tySet_tyEnum_TSandboxFlag__Z3mEqyGzK2r5jDOYDl7W1Q;
struct tySequence__6ARqGI2Ygeh4NflrqLf1hQ {
  NI len; tySequence__6ARqGI2Ygeh4NflrqLf1hQ_Content* p;
};
struct tyObject_Profiler__tQl6UXzSSBVlFmDrJGqqPA {
NF tEnter;
tyObject_TStackFrame__N30BaqTxdO9aOeBDi8omH3g* tos;
};
struct tySequence__E8pi9b5QNahsURYzXMjh3qw {
  NI len; tySequence__E8pi9b5QNahsURYzXMjh3qw_Content* p;
};
struct tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w {
tySequence__E8pi9b5QNahsURYzXMjh3qw data;
NI counter;
};
struct tyObject_TCtx__b6xwcD9cMKdlvd6DZIf4rHg {
  tyObject_TPassContext__9aUzdnrOgAbujYuO39brF9bbA Sup;
tySequence__YdLNCDKYeipzJx3I8Xw82Q code;
tySequence__vGSdgYDvgwpTIM9bdnxpXHA debug;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* globals;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* constants;
tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ types;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* currentExceptionA;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* currentExceptionB;
NI exceptionInstr;
tyObject_PProccolonObjectType___ZvYI1A9bklY7Sm9c9adwVzF9cQ* prc;
tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* module;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* callsite;
tyEnum_TEvalMode__bzKsByQdtJOXOcqlXsimIg mode;
tySet_tyEnum_TSandboxFlag__Z3mEqyGzK2r5jDOYDl7W1Q features;
NIM_BOOL traceActive;
NI loopIterations;
tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg comesFromHeuristic;
tySequence__6ARqGI2Ygeh4NflrqLf1hQ callbacks;
NimStringV2 errorFlag;
tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* cache;
tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* config;
tyObject_ModuleGraphcolonObjectType___g2oCqJbiuGsLLrs8RBMKXg* graph;
NI oldErrorCount;
tyObject_Profiler__tQl6UXzSSBVlFmDrJGqqPA profiler;
NI* templInstCounter;
tySequence__L8fp6QCa2lczU05QM7SC9cg vmstateDiff;
tyObject_Table__Ea0e9azliYta9cYyn0d49ah0w procToCodePos;
};


#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__L8fp6QCa2lczU05QM7SC9cg_Content_PP
#define tySequence__L8fp6QCa2lczU05QM7SC9cg_Content_PP
struct tySequence__L8fp6QCa2lczU05QM7SC9cg_Content { NI cap; tyTuple__5ax60W9cMsa4brP9b9aNP9cF9aw data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__YdLNCDKYeipzJx3I8Xw82Q_Content_PP
#define tySequence__YdLNCDKYeipzJx3I8Xw82Q_Content_PP
struct tySequence__YdLNCDKYeipzJx3I8Xw82Q_Content { NI cap; NU64 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__vGSdgYDvgwpTIM9bdnxpXHA_Content_PP
#define tySequence__vGSdgYDvgwpTIM9bdnxpXHA_Content_PP
struct tySequence__vGSdgYDvgwpTIM9bdnxpXHA_Content { NI cap; tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content_PP
#define tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content_PP
struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content { NI cap; tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* data[SEQ_DECL_SIZE];};
#endif

      typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_VmArgs__m5KtcByJU2AdS9bbHP7rUig* args, void* ClE_0);
void* ClE_0;
} tyProc__mrbYLH5hYlbDOLEIrzz3iw;
struct tyTuple__o6BCEw8CrFLefGO7X45k6w {
NimStringV2 Field0;
tyProc__mrbYLH5hYlbDOLEIrzz3iw Field1;
};


#ifndef tySequence__6ARqGI2Ygeh4NflrqLf1hQ_Content_PP
#define tySequence__6ARqGI2Ygeh4NflrqLf1hQ_Content_PP
struct tySequence__6ARqGI2Ygeh4NflrqLf1hQ_Content { NI cap; tyTuple__o6BCEw8CrFLefGO7X45k6w data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__L8fp6QCa2lczU05QM7SC9cg_Content_PP
#define tySequence__L8fp6QCa2lczU05QM7SC9cg_Content_PP
struct tySequence__L8fp6QCa2lczU05QM7SC9cg_Content { NI cap; tyTuple__5ax60W9cMsa4brP9b9aNP9cF9aw data[SEQ_DECL_SIZE];};
#endif

      struct tyTuple__47w2DboNEPf69aPgubZdd7Q {
NI Field0;
NI Field1;
NI Field2;
};


#ifndef tySequence__E8pi9b5QNahsURYzXMjh3qw_Content_PP
#define tySequence__E8pi9b5QNahsURYzXMjh3qw_Content_PP
struct tySequence__E8pi9b5QNahsURYzXMjh3qw_Content { NI cap; tyTuple__47w2DboNEPf69aPgubZdd7Q data[SEQ_DECL_SIZE];};
#endif

      struct tyObject_VmArgs__m5KtcByJU2AdS9bbHP7rUig {
NI ra;
NI rb;
NI rc;
tyObject_TFullReg__TAKBj64um9cIhYRFcPXkxSQ* slots;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* currentException;
tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg currentLineInfo;
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, newNodeI__ast_3949)(tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ kind, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info);
N_LIB_PRIVATE N_NIMCALL(void, add__ast_6233)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* father, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* son);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, newStrNode__ast_4885)(NimStringV2 strVal, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, newIntNode__ast_4791)(tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ kind, NI64 intVal);
N_LIB_PRIVATE N_NIMCALL(void, append__macrocacheimpl_4)(tyObject_TCtx__b6xwcD9cMKdlvd6DZIf4rHg* c, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(void, add__macrocacheimpl_7)(tySequence__L8fp6QCa2lczU05QM7SC9cg* x, tyTuple__5ax60W9cMsa4brP9b9aNP9cF9aw value);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_4063)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA** dest, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* src);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3454)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, copyTree__ast_5856)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__2OYppT69ajXDLATpXvoLHDA_2 = { 3 | NIM_STRLIT_FLAG, "inc" };
static const NimStringV2 TM__2OYppT69ajXDLATpXvoLHDA_3 = {3, (NimStrPayload*)&TM__2OYppT69ajXDLATpXvoLHDA_2};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__2OYppT69ajXDLATpXvoLHDA_4 = { 3 | NIM_STRLIT_FLAG, "add" };
static const NimStringV2 TM__2OYppT69ajXDLATpXvoLHDA_5 = {3, (NimStrPayload*)&TM__2OYppT69ajXDLATpXvoLHDA_4};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__2OYppT69ajXDLATpXvoLHDA_6 = { 4 | NIM_STRLIT_FLAG, "incl" };
static const NimStringV2 TM__2OYppT69ajXDLATpXvoLHDA_7 = {4, (NimStrPayload*)&TM__2OYppT69ajXDLATpXvoLHDA_6};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__2OYppT69ajXDLATpXvoLHDA_8 = { 3 | NIM_STRLIT_FLAG, "put" };
static const NimStringV2 TM__2OYppT69ajXDLATpXvoLHDA_9 = {3, (NimStrPayload*)&TM__2OYppT69ajXDLATpXvoLHDA_8};
extern NIM_BOOL nimInErrorMode__system_3980;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int)0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, append__macrocacheimpl_4)(tyObject_TCtx__b6xwcD9cMKdlvd6DZIf4rHg* c, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* colontmpD_;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__2;
	tyTuple__5ax60W9cMsa4brP9b9aNP9cF9aw T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmpD_ = NIM_NIL;
	colontmpD__2 = NIM_NIL;
	nimZeroMem((void*)(&T1_), sizeof(tyTuple__5ax60W9cMsa4brP9b9aNP9cF9aw));
	colontmpD_ = 0;
	eqcopy___ast_4063(&colontmpD_, (*c).module);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T1_.Field0 = colontmpD_;
	colontmpD__2 = 0;
	eqcopy___ast_3457(&colontmpD__2, n);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T1_.Field1 = colontmpD__2;
	add__macrocacheimpl_7((&(*c).vmstateDiff), T1_);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, recordInc__macrocacheimpl_27)(tyObject_TCtx__b6xwcD9cMKdlvd6DZIf4rHg* c, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info, NimStringV2 key, NI64 by) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* recorded;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD_;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__2;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__3;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	recorded = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD__2 = NIM_NIL;
	colontmpD__3 = NIM_NIL;
	recorded = newNodeI__ast_3949(((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)163), info);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	colontmpD_ = newStrNode__ast_4885(TM__2OYppT69ajXDLATpXvoLHDA_3, info);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	add__ast_6233(recorded, colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	colontmpD__2 = newStrNode__ast_4885(key, info);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	add__ast_6233(recorded, colontmpD__2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	colontmpD__3 = newIntNode__ast_4791(((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)6), by);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	add__ast_6233(recorded, colontmpD__3);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	append__macrocacheimpl_4(c, recorded);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___ast_3454(&colontmpD__3);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___ast_3454(&colontmpD__2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___ast_3454(&colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___ast_3454(&recorded);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, recordAdd__macrocacheimpl_68)(tyObject_TCtx__b6xwcD9cMKdlvd6DZIf4rHg* c, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info, NimStringV2 key, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* val) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* recorded;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD_;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__2;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__3;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	recorded = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD__2 = NIM_NIL;
	colontmpD__3 = NIM_NIL;
	recorded = newNodeI__ast_3949(((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)163), info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD_ = newStrNode__ast_4885(TM__2OYppT69ajXDLATpXvoLHDA_5, info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	add__ast_6233(recorded, colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD__2 = newStrNode__ast_4885(key, info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	add__ast_6233(recorded, colontmpD__2);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD__3 = copyTree__ast_5856(val);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	add__ast_6233(recorded, colontmpD__3);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	append__macrocacheimpl_4(c, recorded);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___ast_3454(&colontmpD__3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&recorded);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, recordIncl__macrocacheimpl_86)(tyObject_TCtx__b6xwcD9cMKdlvd6DZIf4rHg* c, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info, NimStringV2 key, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* val) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* recorded;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD_;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__2;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__3;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	recorded = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD__2 = NIM_NIL;
	colontmpD__3 = NIM_NIL;
	recorded = newNodeI__ast_3949(((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)163), info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD_ = newStrNode__ast_4885(TM__2OYppT69ajXDLATpXvoLHDA_7, info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	add__ast_6233(recorded, colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD__2 = newStrNode__ast_4885(key, info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	add__ast_6233(recorded, colontmpD__2);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD__3 = copyTree__ast_5856(val);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	add__ast_6233(recorded, colontmpD__3);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	append__macrocacheimpl_4(c, recorded);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___ast_3454(&colontmpD__3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&recorded);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, recordPut__macrocacheimpl_45)(tyObject_TCtx__b6xwcD9cMKdlvd6DZIf4rHg* c, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info, NimStringV2 key, NimStringV2 k, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* val) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* recorded;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD_;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__2;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__3;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__4;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	recorded = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD__2 = NIM_NIL;
	colontmpD__3 = NIM_NIL;
	colontmpD__4 = NIM_NIL;
	recorded = newNodeI__ast_3949(((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)163), info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD_ = newStrNode__ast_4885(TM__2OYppT69ajXDLATpXvoLHDA_9, info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	add__ast_6233(recorded, colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD__2 = newStrNode__ast_4885(key, info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	add__ast_6233(recorded, colontmpD__2);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD__3 = newStrNode__ast_4885(k, info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	add__ast_6233(recorded, colontmpD__3);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD__4 = copyTree__ast_5856(val);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	add__ast_6233(recorded, colontmpD__4);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	append__macrocacheimpl_4(c, recorded);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___ast_3454(&colontmpD__4);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&colontmpD__3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&recorded);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
