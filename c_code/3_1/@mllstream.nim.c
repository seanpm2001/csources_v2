/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
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
typedef struct tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct RootObj RootObj;
typedef struct tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ;
typedef struct tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ;
typedef struct tyTuple__N4J9cV4JZGem3ljqqj5rT0Q tyTuple__N4J9cV4JZGem3ljqqj5rT0Q;
typedef struct tyObject_CellSeq__z4KasHYddby49cXX2MD4LxQ tyObject_CellSeq__z4KasHYddby49cXX2MD4LxQ;
typedef struct tyTuple__0F3Kz25HWtRatQmCDVHWEA tyTuple__0F3Kz25HWtRatQmCDVHWEA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NU8 tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg;
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
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
typedef NU8 tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w;
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s, void* buf, NI bufLen, void* ClE_0);
void* ClE_0;
} tyProc__oi9b0z9awBBnvGw9arizvgdNw;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;
struct tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw {
  RootObj Sup;
tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w kind;
FILE* f;
NimStringV2 s;
NI rd;
NI wr;
NI lineOffset;
tyProc__oi9b0z9awBBnvGw9arizvgdNw repl;
tyProc__HzVCwACFYM9cx9aV62PdjtuA onPrompt;
};
struct tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ {
NI len;
NI cap;
tyTuple__N4J9cV4JZGem3ljqqj5rT0Q* d;
};
struct tyObject_CellSeq__z4KasHYddby49cXX2MD4LxQ {
NI len;
NI cap;
tyTuple__0F3Kz25HWtRatQmCDVHWEA* d;
};
struct tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ {
tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ traceStack;
tyObject_CellSeq__z4KasHYddby49cXX2MD4LxQ toFree;
NI freed;
NI touched;
NI edges;
NI rcSum;
NIM_BOOL keepThreshold;
};
struct tyTuple__N4J9cV4JZGem3ljqqj5rT0Q {
void** Field0;
TNimTypeV2* Field1;
};
typedef tyTuple__N4J9cV4JZGem3ljqqj5rT0Q tyUncheckedArray__72XmdLy0QAaMtx66AmNKfA[1];
typedef N_CLOSURE_PTR(void, TM__Q5pPHKW81rXwtH2v9bMQlZA_4) (void);
typedef N_CLOSURE_PTR(NI, TM__Q5pPHKW81rXwtH2v9bMQlZA_5) (tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s, void* buf, NI bufLen);
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___llstream_68)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw** dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_3143)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___llstream_37)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___llstream_46)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* dest, void* env);
static N_INLINE(void, nimTraceRefDyn)(void* q, void* env);
static N_INLINE(void, add__system_2688)(tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ* s, void** c, TNimTypeV2* t);
N_LIB_PRIVATE N_NOCONV(void*, allocImpl__system_1735)(NI size);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NOCONV(void, dealloc)(void* p);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__stdZsyncio_405)(FILE** f, NimStringV2 filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___llstream_75)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw** dest, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* src);
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__stdZsyncio_155)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(void, close__stdZsyncio_243)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__stdZsyncio_265)(FILE* f, NimStringV2* line);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, write__stdZsyncio_230)(FILE* f, NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__stdZsyncio_186)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(void, llStreamWrite__llstream_280)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s, NimStringV2 data);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___llstream_127)(tyProc__oi9b0z9awBBnvGw9arizvgdNw* dest, tyProc__oi9b0z9awBBnvGw9arizvgdNw src, NIM_BOOL cyclic);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___llstream_147)(tyProc__HzVCwACFYM9cx9aV62PdjtuA* dest, tyProc__HzVCwACFYM9cx9aV62PdjtuA src, NIM_BOOL cyclic);
N_NIMCALL(NimStringV2, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLineFromStdin__llstream_166)(NimStringV2 prompt, NimStringV2* line);
static N_INLINE(void, quit__system_6941)(NI errorcode);
N_LIB_PRIVATE N_NIMCALL(NI, countTriples__llstream_197)(NimStringV2 s);
static N_INLINE(NIM_BOOL, continueLine__llstream_189)(NimStringV2 line, NIM_BOOL inTripleString);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endsWith__llstream_170)(NimStringV2 x, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw s);
N_LIB_PRIVATE TNimTypeV2 NTIv2__f9cpUXDA3VY8pIlUfIovHaw_;
static NIM_CONST tyProc__HzVCwACFYM9cx9aV62PdjtuA TM__Q5pPHKW81rXwtH2v9bMQlZA_3 = {NIM_NIL,NIM_NIL};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__Q5pPHKW81rXwtH2v9bMQlZA_6 = { 1 | NIM_STRLIT_FLAG, "\012" };
static const NimStringV2 TM__Q5pPHKW81rXwtH2v9bMQlZA_7 = {1, (NimStrPayload*)&TM__Q5pPHKW81rXwtH2v9bMQlZA_6};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__Q5pPHKW81rXwtH2v9bMQlZA_8 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__Q5pPHKW81rXwtH2v9bMQlZA_9 = {0, (NimStrPayload*)&TM__Q5pPHKW81rXwtH2v9bMQlZA_8};
static const NimStringV2 TM__Q5pPHKW81rXwtH2v9bMQlZA_10 = {0, (NimStrPayload*)&TM__Q5pPHKW81rXwtH2v9bMQlZA_8};
static const NimStringV2 TM__Q5pPHKW81rXwtH2v9bMQlZA_11 = {1, (NimStrPayload*)&TM__Q5pPHKW81rXwtH2v9bMQlZA_6};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__Q5pPHKW81rXwtH2v9bMQlZA_12 = { 4 | NIM_STRLIT_FLAG, ">>> " };
static const NimStringV2 TM__Q5pPHKW81rXwtH2v9bMQlZA_13 = {4, (NimStrPayload*)&TM__Q5pPHKW81rXwtH2v9bMQlZA_12};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__Q5pPHKW81rXwtH2v9bMQlZA_14 = { 4 | NIM_STRLIT_FLAG, "... " };
static const NimStringV2 TM__Q5pPHKW81rXwtH2v9bMQlZA_15 = {4, (NimStrPayload*)&TM__Q5pPHKW81rXwtH2v9bMQlZA_14};
static const NimStringV2 TM__Q5pPHKW81rXwtH2v9bMQlZA_16 = {1, (NimStrPayload*)&TM__Q5pPHKW81rXwtH2v9bMQlZA_6};
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__Q5pPHKW81rXwtH2v9bMQlZA_17 = {
0x00, 0x00, 0x00, 0x00, 0x7a, 0xbc, 0x00, 0xf4,
0x01, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x50,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern NIM_BOOL nimInErrorMode__system_3980;
static NIM_CONST NU32 TM__Q5pPHKW81rXwtH2v9bMQlZA_2[2] = {3701606400, 4199832576};
N_LIB_PRIVATE TNimTypeV2 NTIv2__f9cpUXDA3VY8pIlUfIovHaw_ = {.destructor = (void*)eqdestroy___llstream_37, .size = sizeof(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw), .align = (NI16) NIM_ALIGNOF(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw), .depth = 1, .display = TM__Q5pPHKW81rXwtH2v9bMQlZA_2, .traceImpl = (void*)eqtrace___llstream_46, .flags = 0};
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	{
		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;
		NI T5_;
		if (!!((p == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)8));
		cell = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T5_));
		{
			if (!((NI)((*cell).rc & ((NI)-16)) == ((NI)0))) goto LA8_;
			result = NIM_TRUE;
		}
		goto LA6_;
		LA8_: ;
		{
			(*cell).rc -= ((NI)16);
		}
		LA6_: ;
		rememberCycle__system_3143(result, cell, (*((TNimTypeV2**) (p))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___llstream_68)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw** dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest));
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___llstream_37)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* dest) {
	eqdestroy___stdZassertions_13((&(*dest).s));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest).repl.ClE_0);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).repl.ClE_0);
	}
	LA4_: ;
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest).onPrompt.ClE_0);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest).onPrompt.ClE_0);
	}
	LA9_: ;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, add__system_2688)(tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ* s, void** c, TNimTypeV2* t) {
	void** colontmp_;
	TNimTypeV2* colontmp__2;
	{
		tyTuple__N4J9cV4JZGem3ljqqj5rT0Q* d;
		void* T5_;
		if (!((*s).cap <= (*s).len)) goto LA3_;
		(*s).cap = (NI)((NI)((*s).cap * ((NI)3)) / ((NI)2));
		T5_ = (void*)0;
		T5_ = allocImpl__system_1735(((NI) ((NI)((*s).cap * ((NI)8)))));
		d = ((tyTuple__N4J9cV4JZGem3ljqqj5rT0Q*) (T5_));
		copyMem__system_1719(((void*) (d)), ((void*) ((*s).d)), ((NI) ((NI)((*s).len * ((NI)8)))));
		dealloc(((void*) ((*s).d)));
		(*s).d = d;
	}
	LA3_: ;
	colontmp_ = c;
	colontmp__2 = t;
	(*s).d[(*s).len].Field0 = colontmp_;
	(*s).d[(*s).len].Field1 = colontmp__2;
	(*s).len += ((NI)1);
}
static N_INLINE(void, nimTraceRefDyn)(void* q, void* env) {
	void** p;
	p = ((void**) (q));
	{
		tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ* j;
		if (!!(((*p) == NIM_NIL))) goto LA3_;
		j = ((tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ*) (env));
		add__system_2688((&(*j).traceStack), p, (*((TNimTypeV2**) ((*p)))));
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___llstream_46)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* dest, void* env) {
	nimTraceRefDyn((&(*dest).repl.ClE_0), env);
	nimTraceRefDyn((&(*dest).onPrompt.ClE_0), env);
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___llstream_75)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw** dest, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* src) {
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* colontmp_;
	colontmp_ = (*dest);
	(*dest) = src;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn(colontmp_);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose(colontmp_);
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, llStreamOpen__llstream_101)(NimStringV2 filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode) {
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	eqdestroy___llstream_68(&result);
	result = (tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*) nimNewObj(sizeof(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw), NIM_ALIGNOF(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw));
	(*result).Sup.m_type = (&NTIv2__f9cpUXDA3VY8pIlUfIovHaw_);
	(*result).kind = ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)2);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__stdZsyncio_405(&(*result).f, filename, mode, ((NI)-1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T3_)) goto LA4_;
		eqsink___llstream_75(&result, ((tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*) NIM_NIL));
	}
	LA4_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic) {
	tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* h;
	NI T1_;
	T1_ = (NI)0;
	T1_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)8));
	h = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T1_));
	(*h).rc += ((NI)16);
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___llstream_71)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw** dest, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* src, NIM_BOOL cyclic) {
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* colontmp_;
	colontmp_ = (*dest);
	{
		if (!src) goto LA3_;
		nimIncRefCyclic(src, cyclic);
	}
	LA3_: ;
	(*dest) = src;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLastCyclicDyn(colontmp_);
		if (!T7_) goto LA8_;
		nimDestroyAndDispose(colontmp_);
	}
	LA8_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, llStreamRead__llstream_238)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s, void* buf, NI bufLen) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	switch ((*s).kind) {
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)0):
	{
		result = ((NI)0);
	}
	break;
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)1):
	{
		result = ((bufLen <= (NI)((*s).s.len - (*s).rd)) ? bufLen : (NI)((*s).s.len - (*s).rd));
		{
			if (!(((NI)0) < result)) goto LA5_;
			copyMem__system_1719(buf, ((void*) ((&(*s).s.p->data[(NI)(((NI)0) + (*s).rd)]))), ((NI) (result)));
			(*s).rd += result;
		}
		LA5_: ;
	}
	break;
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)2):
	{
		result = readBuffer__stdZsyncio_155((*s).f, buf, ((NI) (bufLen)));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)3):
	{
		{
			if (!!(((*s).onPrompt.ClP_0 == TM__Q5pPHKW81rXwtH2v9bMQlZA_3.ClP_0 && (*s).onPrompt.ClE_0 == TM__Q5pPHKW81rXwtH2v9bMQlZA_3.ClE_0))) goto LA11_;
			(*s).onPrompt.ClE_0? (*s).onPrompt.ClP_0((*s).onPrompt.ClE_0):((TM__Q5pPHKW81rXwtH2v9bMQlZA_4)((*s).onPrompt.ClP_0))();
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA11_: ;
		result = (*s).repl.ClE_0? (*s).repl.ClP_0(s, buf, bufLen, (*s).repl.ClE_0):((TM__Q5pPHKW81rXwtH2v9bMQlZA_5)((*s).repl.ClP_0))(s, buf, bufLen);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose__llstream_164)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	switch ((*s).kind) {
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)0):
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)1):
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)3):
	{
	}
	break;
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)2):
	{
		close__stdZsyncio_243((*s).f);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, llStreamOpen__llstream_95)(FILE* f) {
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* result;
	result = NIM_NIL;
	eqdestroy___llstream_68(&result);
	result = (tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*) nimNewObj(sizeof(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw), NIM_ALIGNOF(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw));
	(*result).Sup.m_type = (&NTIv2__f9cpUXDA3VY8pIlUfIovHaw_);
	(*result).f = f;
	(*result).kind = ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)2);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, llStreamOpen__llstream_31)(NimStringV2 data) {
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* result;
	result = NIM_NIL;
	eqdestroy___llstream_68(&result);
	result = (tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*) nimNewObj(sizeof(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw), NIM_ALIGNOF(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw));
	(*result).Sup.m_type = (&NTIv2__f9cpUXDA3VY8pIlUfIovHaw_);
	eqcopy___stdZassertions_16((&(*result).s), data);
	(*result).kind = ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)1);
	return result;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI)1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI)1))] = 0;
	(*s).len += ((NI)1);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, llStreamReadLine__llstream_256)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s, NimStringV2* line) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	setLengthStrV2((&(*line)), ((NI)0));
	switch ((*s).kind) {
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)0):
	{
		result = NIM_TRUE;
	}
	break;
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)1):
	{
		NIM_BOOL T12_;
		{
			while (1) {
				if (!((*s).rd < (*s).s.len)) goto LA4				;
				switch (((NU8)((*s).s.p->data[(*s).rd]))) {
				case 13:
				{
					(*s).rd += ((NI)1);
					{
						if (!((NU8)((*s).s.p->data[(*s).rd]) == (NU8)(10))) goto LA8_;
						(*s).rd += ((NI)1);
					}
					LA8_: ;
					goto LA3;
				}
				break;
				case 10:
				{
					(*s).rd += ((NI)1);
					goto LA3;
				}
				break;
				default:
				{
					nimAddCharV1((&(*line)), (*s).s.p->data[(*s).rd]);
					(*s).rd += ((NI)1);
				}
				break;
				}
			} LA4: ;
		} LA3: ;
		T12_ = (NIM_BOOL)0;
		T12_ = (((NI)0) < (*line).len);
		if (T12_) goto LA13_;
		T12_ = ((*s).rd < (*s).s.len);
		LA13_: ;
		result = T12_;
	}
	break;
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)2):
	{
		result = readLine__stdZsyncio_265((*s).f, line);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)3):
	{
		result = readLine__stdZsyncio_265(__stdinp, line);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src) {
	{
		if (!(((NI)0) < src.len)) goto LA3_;
		copyMem__system_1719(((void*) ((&(*(*dest).p).data[(*dest).len]))), ((void*) ((&(*src.p).data[((NI)0)]))), ((NI) ((NI)(src.len + ((NI)1)))));
		(*dest).len += src.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, llStreamWrite__llstream_280)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s, NimStringV2 data) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	switch ((*s).kind) {
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)0):
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)3):
	{
	}
	break;
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)1):
	{
		prepareAdd((&(*s).s), data.len + 0);
appendString((&(*s).s), data);
		(*s).wr += data.len;
	}
	break;
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)2):
	{
		write__stdZsyncio_230((*s).f, data);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endsWith__llstream_170)(NimStringV2 x, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw s) {
	NIM_BOOL result;
	NI i;
	result = (NIM_BOOL)0;
	i = (NI)(x.len - ((NI)1));
	{
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = (((NI)0) <= i);
			if (!(T3_)) goto LA4_;
			T3_ = ((NU8)(x.p->data[i]) == (NU8)(32));
			LA4_: ;
			if (!T3_) goto LA2			;
			i -= ((NI)1);
		} LA2: ;
	}
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (((NI)0) <= i);
		if (!(T7_)) goto LA8_;
		T7_ = ((s[(NU)((((NU8)(x.p->data[i]))))>>3] &(1U<<((NU)((((NU8)(x.p->data[i]))))&7U)))!=0);
		LA8_: ;
		if (!T7_) goto LA9_;
		result = NIM_TRUE;
	}
	LA9_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, llStreamWrite__llstream_291)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s, NIM_CHAR data) {
	NIM_CHAR c;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	c = (NIM_CHAR)0;
	switch ((*s).kind) {
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)0):
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)3):
	{
	}
	break;
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)1):
	{
		nimAddCharV1((&(*s).s), data);
		(*s).wr += ((NI)1);
	}
	break;
	case ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)2):
	{
		NI T4_;
		c = data;
		T4_ = (NI)0;
		T4_ = writeBuffer__stdZsyncio_186((*s).f, ((void*) ((&c))), ((NI)1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(void)(T4_);
	}
	break;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, llStreamWriteln__llstream_288)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s, NimStringV2 data) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	llStreamWrite__llstream_280(s, data);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	llStreamWrite__llstream_280(s, TM__Q5pPHKW81rXwtH2v9bMQlZA_7);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___llstream_127)(tyProc__oi9b0z9awBBnvGw9arizvgdNw* dest, tyProc__oi9b0z9awBBnvGw9arizvgdNw src, NIM_BOOL cyclic) {
	void* colontmp_;
	colontmp_ = (*dest).ClE_0;
	{
		if (!src.ClE_0) goto LA3_;
		nimIncRefCyclic(src.ClE_0, cyclic);
	}
	LA3_: ;
	(*dest).ClE_0 = src.ClE_0;
	(*dest).ClP_0 = src.ClP_0;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLastCyclicDyn(colontmp_);
		if (!T7_) goto LA8_;
		nimDestroyAndDispose(colontmp_);
	}
	LA8_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___llstream_147)(tyProc__HzVCwACFYM9cx9aV62PdjtuA* dest, tyProc__HzVCwACFYM9cx9aV62PdjtuA src, NIM_BOOL cyclic) {
	void* colontmp_;
	colontmp_ = (*dest).ClE_0;
	{
		if (!src.ClE_0) goto LA3_;
		nimIncRefCyclic(src.ClE_0, cyclic);
	}
	LA3_: ;
	(*dest).ClE_0 = src.ClE_0;
	(*dest).ClP_0 = src.ClP_0;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLastCyclicDyn(colontmp_);
		if (!T7_) goto LA8_;
		nimDestroyAndDispose(colontmp_);
	}
	LA8_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, llStreamOpenStdIn__llstream_117)(tyProc__oi9b0z9awBBnvGw9arizvgdNw r, tyProc__HzVCwACFYM9cx9aV62PdjtuA onPrompt) {
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* result;
	result = NIM_NIL;
	eqdestroy___llstream_68(&result);
	result = (tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*) nimNewObj(sizeof(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw), NIM_ALIGNOF(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw));
	(*result).Sup.m_type = (&NTIv2__f9cpUXDA3VY8pIlUfIovHaw_);
	(*result).kind = ((tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w)3);
	eqsink___stdZassertions_19((&(*result).s), TM__Q5pPHKW81rXwtH2v9bMQlZA_9);
	(*result).lineOffset = ((NI)-1);
	eqcopy___llstream_127((&(*result).repl), r, NIM_TRUE);
	eqcopy___llstream_147((&(*result).onPrompt), onPrompt, NIM_TRUE);
	return result;
}
static N_INLINE(void, quit__system_6941)(NI errorcode) {
	{
		if (!(errorcode < ((NI)-128))) goto LA3_;
		exit(((int)-128));
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(((NI)127) < errorcode)) goto LA6_;
		exit(((int)127));
	}
	goto LA1_;
	LA6_: ;
	{
		exit(((int) (errorcode)));
	}
	LA1_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLineFromStdin__llstream_166)(NimStringV2 prompt, NimStringV2* line) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	write__stdZsyncio_230(__stdoutp, prompt);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = readLine__stdZsyncio_265(__stdinp, line);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!!(result)) goto LA3_;
		write__stdZsyncio_230(__stdoutp, TM__Q5pPHKW81rXwtH2v9bMQlZA_11);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		quit__system_6941(((NI)0));
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, countTriples__llstream_197)(NimStringV2 s) {
	NI result;
	NI i;
	result = (NI)0;
	i = ((NI)0);
	{
		while (1) {
			if (!((NI)(i + ((NI)2)) < s.len)) goto LA2			;
			{
				NIM_BOOL T5_;
				NIM_BOOL T6_;
				T5_ = (NIM_BOOL)0;
				T6_ = (NIM_BOOL)0;
				T6_ = ((NU8)(s.p->data[i]) == (NU8)(34));
				if (!(T6_)) goto LA7_;
				T6_ = ((NU8)(s.p->data[(NI)(i + ((NI)1))]) == (NU8)(34));
				LA7_: ;
				T5_ = T6_;
				if (!(T5_)) goto LA8_;
				T5_ = ((NU8)(s.p->data[(NI)(i + ((NI)2))]) == (NU8)(34));
				LA8_: ;
				if (!T5_) goto LA9_;
				result += ((NI)1);
				i += ((NI)2);
			}
			LA9_: ;
			i += ((NI)1);
		} LA2: ;
	}
	return result;
}
static N_INLINE(NIM_BOOL, continueLine__llstream_189)(NimStringV2 line, NIM_BOOL inTripleString) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T3_;
	NIM_BOOL T5_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = inTripleString;
	if (T1_) goto LA2_;
	T3_ = (NIM_BOOL)0;
	T3_ = (((NI)0) < line.len);
	if (!(T3_)) goto LA4_;
	T5_ = (NIM_BOOL)0;
	T5_ = ((NU8)(line.p->data[((NI)0)]) == (NU8)(32));
	if (T5_) goto LA6_;
	T5_ = endsWith__llstream_170(line, TM__Q5pPHKW81rXwtH2v9bMQlZA_17);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	LA6_: ;
	T3_ = T5_;
	LA4_: ;
	T1_ = T3_;
	LA2_: ;
	result = T1_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, llReadFromStdin__llstream_113)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s, void* buf, NI bufLen) {
	NI result;
	NimStringV2 line;
	NI triples;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	line.len = 0; line.p = NIM_NIL;
	eqsink___stdZassertions_19((&(*s).s), TM__Q5pPHKW81rXwtH2v9bMQlZA_10);
	(*s).rd = ((NI)0);
	line = rawNewString(((NI)120));
	triples = ((NI)0);
	{
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		while (1) {
			NimStringV2 T5_;
			NIM_BOOL T11_;
			NI T12_;
			T5_.len = 0; T5_.p = NIM_NIL;
			{
				if (!((*s).s.len == ((NI)0))) goto LA8_;
				eqsink___stdZassertions_19((&colontmpD_), TM__Q5pPHKW81rXwtH2v9bMQlZA_13);
				T5_ = colontmpD_;
			}
			goto LA6_;
			LA8_: ;
			{
				eqsink___stdZassertions_19((&colontmpD__2), TM__Q5pPHKW81rXwtH2v9bMQlZA_15);
				T5_ = colontmpD__2;
			}
			LA6_: ;
			T11_ = (NIM_BOOL)0;
			T11_ = readLineFromStdin__llstream_166(T5_, (&line));
			if (NIM_UNLIKELY(*nimErr_)) goto LA3_;
			if (!T11_) goto LA4			;
			prepareAdd((&(*s).s), line.len + 0);
appendString((&(*s).s), line);
			prepareAdd((&(*s).s), 1);
appendString((&(*s).s), TM__Q5pPHKW81rXwtH2v9bMQlZA_16);
			T12_ = (NI)0;
			T12_ = countTriples__llstream_197(line);
			if (NIM_UNLIKELY(*nimErr_)) goto LA3_;
			triples += T12_;
			{
				NIM_BOOL T15_;
				T15_ = (NIM_BOOL)0;
				T15_ = continueLine__llstream_189(line, ((NI)(triples & ((NI)1)) == ((NI)1)));
				if (NIM_UNLIKELY(*nimErr_)) goto LA3_;
				if (!!(T15_)) goto LA16_;
				eqdestroy___stdZassertions_13((&colontmpD__2));
				eqdestroy___stdZassertions_13((&colontmpD_));
				goto LA2;
			}
			LA16_: ;
		} LA4: ;
		{
			LA3_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD__2));
			eqdestroy___stdZassertions_13((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	} LA2: ;
	(*s).lineOffset += ((NI)1);
	result = ((bufLen <= (NI)((*s).s.len - (*s).rd)) ? bufLen : (NI)((*s).s.len - (*s).rd));
	{
		if (!(((NI)0) < result)) goto LA22_;
		copyMem__system_1719(buf, ((void*) ((&(*s).s.p->data[(*s).rd]))), ((NI) (result)));
		(*s).rd += result;
	}
	LA22_: ;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&line));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
