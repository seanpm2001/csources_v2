/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
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
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA {
NI id;
NimStringV2 s;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* next;
NI h;
};
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
typedef tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* tyArray__ves2GtSi5FewHyZ4nBr7Ag[8192];
struct tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ {
tyArray__ves2GtSi5FewHyZ4nBr7Ag buckets;
NI wordCounter;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* idAnon;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* idDelegator;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* emptyIdent;
};
typedef NU16 tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA;
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___idents_145)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* dest);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p, NI alignment);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___idents_224)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* dest);
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicStatic)(void* p, TNimTypeV2* desc);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_3141)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
static N_INLINE(void, nimIncRef)(void* p);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA*, getIdent__idents_96)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* ic, NCSTRING identifier, NI length, NI h);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___idents_136)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA** dest, tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* src);
N_LIB_PRIVATE N_NIMCALL(NI, cmpExact__idents_71)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___idents_133)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA** dest);
N_LIB_PRIVATE N_NIMCALL(NI, cmpIgnoreStyle__idents_18)(NCSTRING a, NCSTRING b, NI blen);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_NIMCALL(NimStringV2, mnewString)(NI len);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle__pureZhashes_295)(NimStringV2 x);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___idents_139)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA** dest, tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA*, getIdent__idents_166)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* ic, NimStringV2 identifier);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA*, getIdent__idents_170)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* ic, NimStringV2 identifier, NI h);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___wordrecg_302)(tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA e);
N_LIB_PRIVATE TNimTypeV2 NTIv2__4yiDOEx3Y9aOTV1fsziBtCQ_;
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__iH9c83Zzpq6dnlJwMQd00aw_3 = { 10 | NIM_STRLIT_FLAG, ":anonymous" };
static const NimStringV2 TM__iH9c83Zzpq6dnlJwMQd00aw_4 = {10, (NimStrPayload*)&TM__iH9c83Zzpq6dnlJwMQd00aw_3};
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__iH9c83Zzpq6dnlJwMQd00aw_5 = { 10 | NIM_STRLIT_FLAG, ":delegator" };
static const NimStringV2 TM__iH9c83Zzpq6dnlJwMQd00aw_6 = {10, (NimStrPayload*)&TM__iH9c83Zzpq6dnlJwMQd00aw_5};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__iH9c83Zzpq6dnlJwMQd00aw_7 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__iH9c83Zzpq6dnlJwMQd00aw_8 = {0, (NimStrPayload*)&TM__iH9c83Zzpq6dnlJwMQd00aw_7};
extern NIM_BOOL nimInErrorMode__system_3978;
static NIM_CONST NU32 TM__iH9c83Zzpq6dnlJwMQd00aw_2[1] = {679688192};
N_LIB_PRIVATE TNimTypeV2 NTIv2__4yiDOEx3Y9aOTV1fsziBtCQ_ = {.destructor = (void*)eqdestroy___idents_224, .size = sizeof(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ), .align = (NI16) NIM_ALIGNOF(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ), .depth = 0, .display = TM__iH9c83Zzpq6dnlJwMQd00aw_2, .traceImpl = (void*)NIM_NIL, .flags = 0};
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
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
	}
	LA3_: ;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3978);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___idents_145)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	eqdestroy___stdZassertions_13((&(*dest).s));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest).next);
		if (!T3_) goto LA4_;
		eqdestroy___idents_145((*dest).next);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest).next, ((NI)8));
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___idents_224)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* dest) {
	NI colontmp_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmp_ = ((NI)0);
	{
		while (1) {
			if (!(colontmp_ < ((NI)8192))) goto LA2			;
			{
				NIM_BOOL T5_;
				T5_ = (NIM_BOOL)0;
				T5_ = nimDecRefIsLast((*dest).buckets[(colontmp_)- 0]);
				if (!T5_) goto LA6_;
				eqdestroy___idents_145((*dest).buckets[(colontmp_)- 0]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				nimRawDispose((*dest).buckets[(colontmp_)- 0], ((NI)8));
			}
			LA6_: ;
			colontmp_ += ((NI)1);
		} LA2: ;
	}
	{
		NIM_BOOL T10_;
		T10_ = (NIM_BOOL)0;
		T10_ = nimDecRefIsLast((*dest).idAnon);
		if (!T10_) goto LA11_;
		eqdestroy___idents_145((*dest).idAnon);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest).idAnon, ((NI)8));
	}
	LA11_: ;
	{
		NIM_BOOL T15_;
		T15_ = (NIM_BOOL)0;
		T15_ = nimDecRefIsLast((*dest).idDelegator);
		if (!T15_) goto LA16_;
		eqdestroy___idents_145((*dest).idDelegator);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest).idDelegator, ((NI)8));
	}
	LA16_: ;
	{
		NIM_BOOL T20_;
		T20_ = (NIM_BOOL)0;
		T20_ = nimDecRefIsLast((*dest).emptyIdent);
		if (!T20_) goto LA21_;
		eqdestroy___idents_145((*dest).emptyIdent);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest).emptyIdent, ((NI)8));
	}
	LA21_: ;
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
		rememberCycle__system_3141(result, cell, desc);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___idents_266)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ** dest, tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* src, NIM_BOOL cyclic) {
	tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* colontmp_;
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
		T7_ = nimDecRefIsLastCyclicStatic(colontmp_, (&NTIv2__4yiDOEx3Y9aOTV1fsziBtCQ_));
		if (!T7_) goto LA8_;
		eqdestroy___idents_224(colontmp_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose(colontmp_, ((NI)8));
	}
	LA8_: ;
	}BeforeRet_: ;
}
static N_INLINE(void, nimIncRef)(void* p) {
	NI T1_;
	T1_ = (NI)0;
	T1_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)16));
	(*((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T1_))).rc += ((NI)16);
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___idents_136)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA** dest, tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!src) goto LA3_;
		nimIncRef(src);
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLast((*dest));
		if (!T7_) goto LA8_;
		eqdestroy___idents_145((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI)8));
	}
	LA8_: ;
	(*dest) = src;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, cmpExact__idents_71)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
	result = (NI)0;
	i = ((NI)0);
	j = ((NI)0);
	result = ((NI)1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA2			;
			aa = a[i];
			bb = b[j];
			result = (NI)(((NU8)(aa)) - ((NU8)(bb)));
			{
				NIM_BOOL T5_;
				T5_ = (NIM_BOOL)0;
				T5_ = !((result == ((NI)0)));
				if (T5_) goto LA6_;
				T5_ = ((NU8)(aa) == (NU8)(0));
				LA6_: ;
				if (!T5_) goto LA7_;
				goto LA1;
			}
			LA7_: ;
			i += ((NI)1);
			j += ((NI)1);
		} LA2: ;
	} LA1: ;
	{
		if (!(result == ((NI)0))) goto LA11_;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA15_;
			result = ((NI)1);
		}
		LA15_: ;
	}
	LA11_: ;
	return result;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		if (!(s.len == ((NI)0))) goto LA3_;
		result = "";
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NCSTRING) ((*s.p).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___idents_133)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA** dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___idents_145((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI)8));
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, cmpIgnoreStyle__idents_18)(NCSTRING a, NCSTRING b, NI blen) {
	NI result;
	NI i;
	NI j;
{	result = (NI)0;
	{
		if (!!(((NU8)(a[((NI)0)]) == (NU8)(b[((NI)0)])))) goto LA3_;
		result = ((NI)1);
		goto BeforeRet_;
	}
	LA3_: ;
	i = ((NI)0);
	j = ((NI)0);
	result = ((NI)1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA6			;
			{
				while (1) {
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA8					;
					i += ((NI)1);
				} LA8: ;
			}
			{
				while (1) {
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA10					;
					j += ((NI)1);
				} LA10: ;
			}
			aa = a[i];
			bb = b[j];
			{
				NIM_BOOL T13_;
				T13_ = (NIM_BOOL)0;
				T13_ = ((NU8)(65) <= (NU8)(aa));
				if (!(T13_)) goto LA14_;
				T13_ = ((NU8)(aa) <= (NU8)(90));
				LA14_: ;
				if (!T13_) goto LA15_;
				aa = ((NIM_CHAR) (((NI) ((NI)(((NU8)(aa)) + ((NI)32))))));
			}
			LA15_: ;
			{
				NIM_BOOL T19_;
				T19_ = (NIM_BOOL)0;
				T19_ = ((NU8)(65) <= (NU8)(bb));
				if (!(T19_)) goto LA20_;
				T19_ = ((NU8)(bb) <= (NU8)(90));
				LA20_: ;
				if (!T19_) goto LA21_;
				bb = ((NIM_CHAR) (((NI) ((NI)(((NU8)(bb)) + ((NI)32))))));
			}
			LA21_: ;
			result = (NI)(((NU8)(aa)) - ((NU8)(bb)));
			{
				NIM_BOOL T25_;
				T25_ = (NIM_BOOL)0;
				T25_ = !((result == ((NI)0)));
				if (T25_) goto LA26_;
				T25_ = ((NU8)(aa) == (NU8)(0));
				LA26_: ;
				if (!T25_) goto LA27_;
				goto LA5;
			}
			LA27_: ;
			i += ((NI)1);
			j += ((NI)1);
		} LA6: ;
	} LA5: ;
	{
		if (!(result == ((NI)0))) goto LA31_;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA35_;
			result = ((NI)1);
		}
		LA35_: ;
	}
	LA31_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !(((*s).p == ((NimStrPayload*) NIM_NIL)));
		if (!(T3_)) goto LA4_;
		T3_ = ((NI)((*(*s).p).cap & ((NI)IL64(4611686018427387904))) == ((NI)IL64(4611686018427387904)));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimPrepareStrMutationImpl__system_2301(s);
	}
	LA5_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA*, getIdent__idents_96)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* ic, NCSTRING identifier, NI length, NI h) {
	tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* result;
	tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* last;
	NI idx;
	NI id;
	NimStringV2 T17_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	last = NIM_NIL;
	idx = (NI)(h & ((NI)8191));
	eqcopy___idents_136(&result, (*ic).buckets[(idx)- 0]);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	last = ((tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA*) NIM_NIL);
	id = ((NI)0);
	{
		while (1) {
			if (!!((result == ((tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA*) NIM_NIL)))) goto LA3			;
			{
				NI T6_;
				T6_ = (NI)0;
				T6_ = cmpExact__idents_71(nimToCStringConv((*result).s), identifier, length);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				if (!(T6_ == ((NI)0))) goto LA7_;
				{
					if (!!((last == ((tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA*) NIM_NIL)))) goto LA11_;
					eqcopy___idents_136(&(*last).next, (*result).next);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					eqcopy___idents_136(&(*result).next, (*ic).buckets[(idx)- 0]);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					eqcopy___idents_136(&(*ic).buckets[(idx)- 0], result);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				}
				LA11_: ;
				eqdestroy___idents_133(&last);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				goto BeforeRet_;
			}
			goto LA4_;
			LA7_: ;
			{
				NI T14_;
				T14_ = (NI)0;
				T14_ = cmpIgnoreStyle__idents_18(nimToCStringConv((*result).s), identifier, length);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				if (!(T14_ == ((NI)0))) goto LA15_;
				id = (*result).id;
			}
			goto LA4_;
			LA15_: ;
			LA4_: ;
			eqcopy___idents_136(&last, result);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			eqcopy___idents_136(&result, (*result).next);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		} LA3: ;
	}
	eqdestroy___idents_133(&result);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = (tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA*) nimNewObj(sizeof(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA), NIM_ALIGNOF(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA));
	(*result).h = h;
	T17_.len = 0; T17_.p = NIM_NIL;
	T17_ = mnewString(((NI) (length)));
	eqsink___stdZassertions_19((&(*result).s), T17_);
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < length)) goto LA20				;
				i = i_2;
				nimPrepareStrMutationV2((&(*result).s));
				(*result).s.p->data[i] = identifier[i];
				i_2 += ((NI)1);
			} LA20: ;
		}
	}
	eqcopy___idents_136(&(*result).next, (*ic).buckets[(idx)- 0]);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	eqcopy___idents_136(&(*ic).buckets[(idx)- 0], result);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		if (!(id == ((NI)0))) goto LA23_;
		(*ic).wordCounter += ((NI)1);
		(*result).id = ((NI64)-((*ic).wordCounter));
	}
	goto LA21_;
	LA23_: ;
	{
		(*result).id = id;
	}
	LA21_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___idents_133(&last);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA*, getIdent__idents_166)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* ic, NimStringV2 identifier) {
	tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* result;
	NI T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	T1_ = (NI)0;
	T1_ = hashIgnoreStyle__pureZhashes_295(identifier);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = getIdent__idents_96(ic, nimToCStringConv(identifier), identifier.len, T1_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___idents_139)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA** dest, tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___idents_145((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI)8));
	}
	LA4_: ;
	(*dest) = src;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA, whichKeyword__idents_287)(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* id) {
	tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA result;
	result = (tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA)0;
	{
		if (!((*id).id < ((NI)0))) goto LA3_;
		result = ((tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA)0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA) ((*id).id));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA*, getIdent__idents_170)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* ic, NimStringV2 identifier, NI h) {
	tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	result = getIdent__idents_96(ic, nimToCStringConv(identifier), identifier.len, h);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ*, newIdentCache__idents_175)(void) {
	tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* result;
	tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ* T1_;
	tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* T2_;
	tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* T3_;
	tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* T4_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	T1_ = NIM_NIL;
	T1_ = (tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ*) nimNewObj(sizeof(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ), NIM_ALIGNOF(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ));
	result = T1_;
	T2_ = NIM_NIL;
	T2_ = getIdent__idents_166(result, TM__iH9c83Zzpq6dnlJwMQd00aw_4);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqsink___idents_139(&(*result).idAnon, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*result).wordCounter = ((NI)1);
	T3_ = NIM_NIL;
	T3_ = getIdent__idents_166(result, TM__iH9c83Zzpq6dnlJwMQd00aw_6);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqsink___idents_139(&(*result).idDelegator, T3_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T4_ = NIM_NIL;
	T4_ = getIdent__idents_166(result, TM__iH9c83Zzpq6dnlJwMQd00aw_8);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqsink___idents_139(&(*result).emptyIdent, T4_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA s;
		NI res;
		s = (tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA)0;
		res = ((NI)1);
		{
			while (1) {
				NimStringV2 colontmpD_;
				NimStringV2 colontmpD__2;
				tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* colontmpD__3;
				NI T8_;
				if (!(res <= ((NI)298))) goto LA7				;
				colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
				colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
				colontmpD__3 = NIM_NIL;
				s = ((tyEnum_TSpecialWord__hTGV9ad79bZJfqtldnYLJ8AA) (res));
				colontmpD_ = dollar___wordrecg_302(s);
				colontmpD__2 = dollar___wordrecg_302(s);
				T8_ = (NI)0;
				T8_ = hashIgnoreStyle__pureZhashes_295(colontmpD__2);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				colontmpD__3 = getIdent__idents_170(result, colontmpD_, T8_);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				(*colontmpD__3).id = s;
				res += ((NI)1);
				eqdestroy___idents_133(&colontmpD__3);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				eqdestroy___stdZassertions_13((&colontmpD__2));
				eqdestroy___stdZassertions_13((&colontmpD_));
			} LA7: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___idents_263)(tyObject_IdentCachecolonObjectType___4yiDOEx3Y9aOTV1fsziBtCQ** dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicStatic((*dest), (&NTIv2__4yiDOEx3Y9aOTV1fsziBtCQ_));
		if (!T3_) goto LA4_;
		eqdestroy___idents_224((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI)8));
	}
	LA4_: ;
	}BeforeRet_: ;
}
