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
typedef struct tyObject_SinglyLinkedList__lIApKraPVkRHGxPCxT2AGA tyObject_SinglyLinkedList__lIApKraPVkRHGxPCxT2AGA;
typedef struct tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q;
typedef struct tyTuple__msoRFpgv3EcbLwCh9arSpYw tyTuple__msoRFpgv3EcbLwCh9arSpYw;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ;
typedef struct tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ;
typedef struct tyTuple__N4J9cV4JZGem3ljqqj5rT0Q tyTuple__N4J9cV4JZGem3ljqqj5rT0Q;
typedef struct tyObject_CellSeq__z4KasHYddby49cXX2MD4LxQ tyObject_CellSeq__z4KasHYddby49cXX2MD4LxQ;
typedef struct tyTuple__0F3Kz25HWtRatQmCDVHWEA tyTuple__0F3Kz25HWtRatQmCDVHWEA;
struct tyObject_SinglyLinkedList__lIApKraPVkRHGxPCxT2AGA {
tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* head;
tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* tail;
};
typedef NU8 tyEnum_FootnoteType__ZCau9bAoJ0KvZYqUKBf6DQA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyTuple__msoRFpgv3EcbLwCh9arSpYw {
tyEnum_FootnoteType__ZCau9bAoJ0KvZYqUKBf6DQA Field0;
NI Field1;
NI Field2;
NI Field3;
NimStringV2 Field4;
};
struct tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q {
tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* next;
tyTuple__msoRFpgv3EcbLwCh9arSpYw value;
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
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
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, add__packagesZdocutilsZrst_6579)(tyObject_SinglyLinkedList__lIApKraPVkRHGxPCxT2AGA* L, tyTuple__msoRFpgv3EcbLwCh9arSpYw* value);
static N_INLINE(void, add__packagesZdocutilsZrst_6707)(tyObject_SinglyLinkedList__lIApKraPVkRHGxPCxT2AGA* L, tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* n);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___packagesZdocutilsZrst_6601)(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q** dest, tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* src);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicStatic)(void* p, TNimTypeV2* desc);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_3143)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrst_6607)(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* dest);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
static N_INLINE(void, nimTraceRef)(void* q, TNimTypeV2* desc, void* env);
static N_INLINE(void, add__system_2688)(tyObject_CellSeq__sGle0igznE2T7vk4dBh5SQ* s, void** c, TNimTypeV2* t);
N_LIB_PRIVATE N_NOCONV(void*, allocImpl__system_1735)(NI size);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NOCONV(void, dealloc)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___packagesZdocutilsZrst_6597)(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q** dest, tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* src, NIM_BOOL cyclic);
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic);
N_LIB_PRIVATE N_NIMCALL(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q*, newSinglyLinkedNode__packagesZdocutilsZrst_6587)(tyTuple__msoRFpgv3EcbLwCh9arSpYw* value);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrst_6594)(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q** dest);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___packagesZdocutilsZrst_3263)(tyTuple__msoRFpgv3EcbLwCh9arSpYw* dest, tyTuple__msoRFpgv3EcbLwCh9arSpYw* src);
extern TNimTypeV2 NTIv2__HiSLnJoU2zkTTpGXzg870Q_;
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
N_LIB_PRIVATE N_NIMCALL(void, initSinglyLinkedList__packagesZdocutilsZrst_6477)(tyObject_SinglyLinkedList__lIApKraPVkRHGxPCxT2AGA* Result) {
	nimZeroMem((void*)Result, sizeof(tyObject_SinglyLinkedList__lIApKraPVkRHGxPCxT2AGA));
}
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicStatic)(void* p, TNimTypeV2* desc) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	{
		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;
		NI T5_;
		if (!!((p == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)16));
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
		rememberCycle__system_3143(result, cell, desc);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrst_6607)(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicStatic((*dest).next, (&NTIv2__HiSLnJoU2zkTTpGXzg870Q_));
		if (!T3_) goto LA4_;
		eqdestroy___packagesZdocutilsZrst_6607((*dest).next);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest).next, ((NI)8));
	}
	LA4_: ;
	eqdestroy___stdZassertions_13((&(*dest).value.Field4));
	}BeforeRet_: ;
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
		T5_ = allocImpl__system_1735(((NI) ((NI)((*s).cap * ((NI)16)))));
		d = ((tyTuple__N4J9cV4JZGem3ljqqj5rT0Q*) (T5_));
		copyMem__system_1719(((void*) (d)), ((void*) ((*s).d)), ((NI) ((NI)((*s).len * ((NI)16)))));
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
static N_INLINE(void, nimTraceRef)(void* q, TNimTypeV2* desc, void* env) {
	void** p;
	p = ((void**) (q));
	{
		tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ* j;
		if (!!(((*p) == NIM_NIL))) goto LA3_;
		j = ((tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ*) (env));
		add__system_2688((&(*j).traceStack), p, desc);
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___packagesZdocutilsZrst_6616)(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* dest, void* env) {
	nimTraceRef(&(*dest).next, (&NTIv2__HiSLnJoU2zkTTpGXzg870Q_), env);
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___packagesZdocutilsZrst_6601)(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q** dest, tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* src) {
	tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* colontmp_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmp_ = (*dest);
	(*dest) = src;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicStatic(colontmp_, (&NTIv2__HiSLnJoU2zkTTpGXzg870Q_));
		if (!T3_) goto LA4_;
		eqdestroy___packagesZdocutilsZrst_6607(colontmp_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose(colontmp_, ((NI)8));
	}
	LA4_: ;
	}BeforeRet_: ;
}
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic) {
	tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* h;
	NI T1_;
	T1_ = (NI)0;
	T1_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)16));
	h = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T1_));
	(*h).rc += ((NI)16);
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___packagesZdocutilsZrst_6597)(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q** dest, tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* src, NIM_BOOL cyclic) {
	tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* colontmp_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
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
		T7_ = nimDecRefIsLastCyclicStatic(colontmp_, (&NTIv2__HiSLnJoU2zkTTpGXzg870Q_));
		if (!T7_) goto LA8_;
		eqdestroy___packagesZdocutilsZrst_6607(colontmp_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose(colontmp_, ((NI)8));
	}
	LA8_: ;
	}BeforeRet_: ;
}
static N_INLINE(void, add__packagesZdocutilsZrst_6707)(tyObject_SinglyLinkedList__lIApKraPVkRHGxPCxT2AGA* L, tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* n) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	eqsink___packagesZdocutilsZrst_6601(&(*n).next, ((tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q*) NIM_NIL));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!!(((*L).tail == ((tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q*) NIM_NIL)))) goto LA3_;
		eqcopy___packagesZdocutilsZrst_6597(&(*(*L).tail).next, n, NIM_TRUE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	(*L).tail = n;
	{
		if (!((*L).head == ((tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q*) NIM_NIL))) goto LA7_;
		eqcopy___packagesZdocutilsZrst_6597(&(*L).head, n, NIM_TRUE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA7_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrst_6594)(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q** dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicStatic((*dest), (&NTIv2__HiSLnJoU2zkTTpGXzg870Q_));
		if (!T3_) goto LA4_;
		eqdestroy___packagesZdocutilsZrst_6607((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI)8));
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q*, newSinglyLinkedNode__packagesZdocutilsZrst_6587)(tyTuple__msoRFpgv3EcbLwCh9arSpYw* value) {
	tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	eqdestroy___packagesZdocutilsZrst_6594(&result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = (tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q*) nimNewObj(sizeof(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q), NIM_ALIGNOF(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q));
	eqcopy___packagesZdocutilsZrst_3263((&(*result).value), value);
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, add__packagesZdocutilsZrst_6579)(tyObject_SinglyLinkedList__lIApKraPVkRHGxPCxT2AGA* L, tyTuple__msoRFpgv3EcbLwCh9arSpYw* value) {
	tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* colontmpD_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmpD_ = NIM_NIL;
	colontmpD_ = newSinglyLinkedNode__packagesZdocutilsZrst_6587(value);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	add__packagesZdocutilsZrst_6707(L, colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___packagesZdocutilsZrst_6594(&colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, append__packagesZdocutilsZrst_6504)(tyObject_SinglyLinkedList__lIApKraPVkRHGxPCxT2AGA* a, tyTuple__msoRFpgv3EcbLwCh9arSpYw* b) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	add__packagesZdocutilsZrst_6579(a, b);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q*, newSinglyLinkedNode__packagesZdocutilsZrst_7119)(tyTuple__msoRFpgv3EcbLwCh9arSpYw* value) {
	tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	eqdestroy___packagesZdocutilsZrst_6594(&result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = (tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q*) nimNewObj(sizeof(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q), NIM_ALIGNOF(tyObject_SinglyLinkedNodeObj__HiSLnJoU2zkTTpGXzg870Q));
	eqcopy___packagesZdocutilsZrst_3263((&(*result).value), value);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, append__packagesZdocutilsZrst_7188)(tyObject_SinglyLinkedList__lIApKraPVkRHGxPCxT2AGA* a, tyTuple__msoRFpgv3EcbLwCh9arSpYw* b) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	add__packagesZdocutilsZrst_6579(a, b);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrst_7425)(tyObject_SinglyLinkedList__lIApKraPVkRHGxPCxT2AGA* dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicStatic((*dest).head, (&NTIv2__HiSLnJoU2zkTTpGXzg870Q_));
		if (!T3_) goto LA4_;
		eqdestroy___packagesZdocutilsZrst_6607((*dest).head);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest).head, ((NI)8));
	}
	LA4_: ;
	}BeforeRet_: ;
}
