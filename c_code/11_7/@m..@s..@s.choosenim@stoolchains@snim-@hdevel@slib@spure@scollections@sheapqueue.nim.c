/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 32
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
typedef struct tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA;
typedef struct tySequence__5ahH19c3MtpJ0F0oa6zJWmw tySequence__5ahH19c3MtpJ0F0oa6zJWmw;
typedef struct tySequence__5ahH19c3MtpJ0F0oa6zJWmw_Content tySequence__5ahH19c3MtpJ0F0oa6zJWmw_Content;
typedef struct tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
struct tySequence__5ahH19c3MtpJ0F0oa6zJWmw {
  NI len; tySequence__5ahH19c3MtpJ0F0oa6zJWmw_Content* p;
};
struct tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA {
tySequence__5ahH19c3MtpJ0F0oa6zJWmw data;
};
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ {
NI dist;
NI depth;
NimStringV2 msg;
tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* sym;
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
};


#ifndef tySequence__5ahH19c3MtpJ0F0oa6zJWmw_Content_PP
#define tySequence__5ahH19c3MtpJ0F0oa6zJWmw_Content_PP
struct tySequence__5ahH19c3MtpJ0F0oa6zJWmw_Content { NI cap; tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__5ahH19c3MtpJ0F0oa6zJWmw_Content_PP
#define tySequence__5ahH19c3MtpJ0F0oa6zJWmw_Content_PP
struct tySequence__5ahH19c3MtpJ0F0oa6zJWmw_Content { NI cap; tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, add__lookups_1181)(tySequence__5ahH19c3MtpJ0F0oa6zJWmw* x, tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ value);
N_LIB_PRIVATE N_NIMCALL(void, siftup__lookups_1268)(tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA* heap, NI startpos, NI p);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___lookups_1245)(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* dest, tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ src);
static N_INLINE(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ*, X5BX5D___lookups_1275)(tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA* heap, NI i);
static N_INLINE(NIM_BOOL, heapCmp__lookups_1304)(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ x, tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ y);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, lt___lookups_1131)(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ a, tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ b);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___lookups_1248)(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* dest, tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ src);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___lookups_1242)(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* dest);
static N_INLINE(NI, len__lookups_1261)(tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA heap);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___lookups_1496)(tySequence__5ahH19c3MtpJ0F0oa6zJWmw* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, alignedDealloc)(void* p, NI align);
static N_INLINE(void, pop__lookups_1337)(tySequence__5ahH19c3MtpJ0F0oa6zJWmw* s, tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* Result);
N_LIB_PRIVATE N_NIMCALL(void, shrink__lookups_1352)(tySequence__5ahH19c3MtpJ0F0oa6zJWmw* x, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, siftdownToBottom__lookups_1428)(tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA* heap, NI p);
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
N_LIB_PRIVATE N_NIMCALL(tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA, initHeapQueue__lookups_1164)(void) {
	tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA));
	return result;
}
static N_INLINE(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ*, X5BX5D___lookups_1275)(tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA* heap, NI i) {
	tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* result;
	result = (tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ*)0;
	result = (&(*heap).data.p->data[i]);
	return result;
}
static N_INLINE(NIM_BOOL, heapCmp__lookups_1304)(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ x, tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ y) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	result = lt___lookups_1131(x, y);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, siftup__lookups_1268)(tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA* heap, NI startpos, NI p) {
	tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ newitem;
	NI pos;
	tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* T2_;
NIM_BOOL oldNimErrFin5_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&newitem), sizeof(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ));
	pos = p;
	T2_ = (tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ*)0;
	T2_ = X5BX5D___lookups_1275((&(*heap)), ((NI) (pos)));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	eqcopy___lookups_1245((&newitem), (*T2_));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		while (1) {
			tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ parent;
			NI parentpos;
			tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* T6_;
			if (!(startpos < pos)) goto LA4			;
			nimZeroMem((void*)(&parent), sizeof(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ));
			parentpos = (NI)((NI32)((NI)(pos - ((NI)1))) >> (NU32)(((NI)1)));
			T6_ = (tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ*)0;
			T6_ = X5BX5D___lookups_1275((&(*heap)), ((NI) (parentpos)));
			if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
			eqcopy___lookups_1245((&parent), (*T6_));
			if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
			{
				NIM_BOOL T9_;
				T9_ = (NIM_BOOL)0;
				T9_ = heapCmp__lookups_1304(newitem, parent);
				if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
				if (!T9_) goto LA10_;
				eqsink___lookups_1248((&(*heap).data.p->data[pos]), parent);
				if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
				nimZeroMem((void*)(&parent), sizeof(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ));
				pos = parentpos;
			}
			goto LA7_;
			LA10_: ;
			{
				eqdestroy___lookups_1242((&parent));
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				goto LA3;
			}
			LA7_: ;
			{
				LA5_:;
			}
			{
				oldNimErrFin5_ = *nimErr_; *nimErr_ = NIM_FALSE;
				eqdestroy___lookups_1242((&parent));
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				*nimErr_ = oldNimErrFin5_;
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		} LA4: ;
	} LA3: ;
	eqsink___lookups_1248((&(*heap).data.p->data[pos]), newitem);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(NI, len__lookups_1261)(tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA heap) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = heap.data.len;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, push__lookups_1177)(tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA* heap, tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ item) {
	tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ blitTmp;
	NI T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&blitTmp), sizeof(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ));
	blitTmp.dist = item.dist;
	blitTmp.depth = item.depth;
	blitTmp.msg = item.msg;
	blitTmp.sym = item.sym;
	add__lookups_1181((&(*heap).data), blitTmp);
	T1_ = (NI)0;
	T1_ = len__lookups_1261((*heap));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	siftup__lookups_1268(heap, ((NI)0), (NI)(T1_ - ((NI)1)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p) {
	NIM_BOOL result;
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
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___lookups_1496)(tySequence__5ahH19c3MtpJ0F0oa6zJWmw* dest) {
	NI colontmp_;
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T3_;
			T3_ = (*dest).len;
			if (!(colontmp_ < T3_)) goto LA2			;
			eqdestroy___stdZassertions_13((&(*dest).p->data[colontmp_].msg));
			{
				NIM_BOOL T6_;
				T6_ = (NIM_BOOL)0;
				T6_ = nimDecRefIsLast((*dest).p->data[colontmp_].sym);
				if (!T6_) goto LA7_;
				nimDestroyAndDispose((*dest).p->data[colontmp_].sym);
			}
			LA7_: ;
			colontmp_ += ((NI)1);
		} LA2: ;
	}
	if ((*dest).p && !((*dest).p->cap & NIM_STRLIT_FLAG)) {
 alignedDealloc((*dest).p, NIM_ALIGNOF(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ));
}
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___lookups_1484)(tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA* dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	eqdestroy___lookups_1496((&(*dest).data));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, pop__lookups_1337)(tySequence__5ahH19c3MtpJ0F0oa6zJWmw* s, tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* Result) {
	NI L;
	NI T1_;
	T1_ = (*s).len;
	L = (NI)(T1_ - ((NI)1));
	(*Result).dist = (*s).p->data[L].dist;
	(*Result).depth = (*s).p->data[L].depth;
	(*Result).msg = (*s).p->data[L].msg;
	(*Result).sym = (*s).p->data[L].sym;
	nimZeroMem((void*)(&(*s).p->data[L]), sizeof(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ));
	shrink__lookups_1352(s, ((NI) (L)));
}
N_LIB_PRIVATE N_NIMCALL(void, siftdownToBottom__lookups_1428)(tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA* heap, NI p) {
	tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ newitem;
	NI endpos;
	NI pos;
	NI startpos;
	tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* T1_;
	NI childpos;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&newitem), sizeof(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ));
	endpos = len__lookups_1261((*heap));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	pos = p;
	startpos = pos;
	T1_ = (tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ*)0;
	T1_ = X5BX5D___lookups_1275((&(*heap)), ((NI) (pos)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqcopy___lookups_1245((&newitem), (*T1_));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	childpos = (NI)((NI)(((NI)2) * pos) + ((NI)1));
	{
		while (1) {
			NI rightpos;
			tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* T13_;
			if (!(childpos < endpos)) goto LA3			;
			rightpos = (NI)(childpos + ((NI)1));
			{
				NIM_BOOL T6_;
				tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* T8_;
				tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* T9_;
				NIM_BOOL T10_;
				T6_ = (NIM_BOOL)0;
				T6_ = (rightpos < endpos);
				if (!(T6_)) goto LA7_;
				T8_ = (tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ*)0;
				T8_ = X5BX5D___lookups_1275((&(*heap)), ((NI) (childpos)));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				T9_ = (tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ*)0;
				T9_ = X5BX5D___lookups_1275((&(*heap)), ((NI) (rightpos)));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				T10_ = (NIM_BOOL)0;
				T10_ = heapCmp__lookups_1304((*T8_), (*T9_));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				T6_ = !(T10_);
				LA7_: ;
				if (!T6_) goto LA11_;
				childpos = rightpos;
			}
			LA11_: ;
			T13_ = (tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ*)0;
			T13_ = X5BX5D___lookups_1275((&(*heap)), ((NI) (childpos)));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			eqcopy___lookups_1245((&(*heap).data.p->data[pos]), (*T13_));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			pos = childpos;
			childpos = (NI)((NI)(((NI)2) * pos) + ((NI)1));
		} LA3: ;
	}
	eqsink___lookups_1248((&(*heap).data.p->data[pos]), newitem);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	siftup__lookups_1268(heap, startpos, pos);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, pop__lookups_1333)(tyObject_HeapQueue__vVDD9cg9cbp2EzHSzf3GRyuA* heap, tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* Result) {
	tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ lastelt;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)Result, sizeof(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ));
	nimZeroMem((void*)(&lastelt), sizeof(tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ));
	pop__lookups_1337((&(*heap).data), (&lastelt));
	{
		NI T3_;
		tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ* T6_;
		T3_ = (NI)0;
		T3_ = len__lookups_1261((*heap));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!(((NI)0) < T3_)) goto LA4_;
		T6_ = (tyObject_SpellCandidate__dnUmN9a9c9bIVDTdmWkwk2ibQ*)0;
		T6_ = X5BX5D___lookups_1275((&(*heap)), ((NI)0));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqcopy___lookups_1245(Result, (*T6_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqsink___lookups_1248((&(*heap).data.p->data[((NI)0)]), lastelt);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		siftdownToBottom__lookups_1428(heap, ((NI)0));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA4_: ;
	{
		(*Result).dist = lastelt.dist;
		(*Result).depth = lastelt.depth;
		(*Result).msg = lastelt.msg;
		(*Result).sym = lastelt.sym;
	}
	LA1_: ;
	}BeforeRet_: ;
}
