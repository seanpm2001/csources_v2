/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 32

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
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg {
NI i;
NI prev;
NIM_BOOL notFirst;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__pureZpathnorm_6)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it, NimStringV2 x);
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next__pureZpathnorm_10)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg* it, NimStringV2 x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash__pureZpathnorm_69)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot__pureZpathnorm_65)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7535)(NimStringV2 s, NI first, NI last);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot__pureZpathnorm_61)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_NIMCALL(NimStringV2, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__pureZpathnorm_77)(NimStringV2 x, NimStringV2* result, NI* state, NIM_CHAR dirSep);
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__DfU0iuayCGwHDN1Exp9cbKg_2 = { 1 | NIM_STRLIT_FLAG, "." };
static const NimStringV2 TM__DfU0iuayCGwHDN1Exp9cbKg_3 = {1, (NimStrPayload*)&TM__DfU0iuayCGwHDN1Exp9cbKg_2};
extern NIM_BOOL nimInErrorMode__system_4003;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4003);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int)0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__pureZpathnorm_6)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it, NimStringV2 x) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (it.i < x.len);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next__pureZpathnorm_10)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg* it, NimStringV2 x) {
	tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ));
	(*it).prev = (*it).i;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !((*it).notFirst);
		if (!(T3_)) goto LA4_;
		T3_ = (((NU8)(x.p->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x.p->data[(*it).i])) == ((NU8)(47)));
		LA4_: ;
		if (!T3_) goto LA5_;
		(*it).i += ((NI)1);
	}
	goto LA1_;
	LA5_: ;
	{
		{
			while (1) {
				NIM_BOOL T10_;
				T10_ = (NIM_BOOL)0;
				T10_ = ((*it).i < x.len);
				if (!(T10_)) goto LA11_;
				T10_ = !((((NU8)(x.p->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x.p->data[(*it).i])) == ((NU8)(47))));
				LA11_: ;
				if (!T10_) goto LA9				;
				(*it).i += ((NI)1);
			} LA9: ;
		}
	}
	LA1_: ;
	{
		NI colontmp_;
		NI colontmp__2;
		if (!((*it).prev < (*it).i)) goto LA14_;
		colontmp_ = (*it).prev;
		colontmp__2 = (NI)((*it).i - ((NI)1));
		result.Field0 = colontmp_;
		result.Field1 = colontmp__2;
	}
	goto LA12_;
	LA14_: ;
	{
		NIM_BOOL T17_;
		T17_ = (NIM_BOOL)0;
		T17_ = hasNext__pureZpathnorm_6((*it), x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T17_) goto LA18_;
		result = next__pureZpathnorm_10(it, x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA12_;
	LA18_: ;
	LA12_: ;
	{
		while (1) {
			NIM_BOOL T22_;
			T22_ = (NIM_BOOL)0;
			T22_ = ((*it).i < x.len);
			if (!(T22_)) goto LA23_;
			T22_ = (((NU8)(x.p->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x.p->data[(*it).i])) == ((NU8)(47)));
			LA23_: ;
			if (!T22_) goto LA21			;
			(*it).i += ((NI)1);
		} LA21: ;
	}
	(*it).notFirst = NIM_TRUE;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash__pureZpathnorm_69)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	T1_ = (((NU8)(x.p->data[bounds.Field0])) == ((NU8)(47)) || ((NU8)(x.p->data[bounds.Field0])) == ((NU8)(47)));
	LA2_: ;
	result = T1_;
	return result;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI)1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI)1))] = 0;
	(*s).len += ((NI)1);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot__pureZpathnorm_65)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	T2_ = (bounds.Field1 == (NI)(bounds.Field0 + ((NI)1)));
	if (!(T2_)) goto LA3_;
	T2_ = ((NU8)(x.p->data[bounds.Field0]) == (NU8)(46));
	LA3_: ;
	T1_ = T2_;
	if (!(T1_)) goto LA4_;
	T1_ = ((NU8)(x.p->data[(NI)(bounds.Field0 + ((NI)1))]) == (NU8)(46));
	LA4_: ;
	result = T1_;
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src) {
	{
		if (!(((NI)0) < src.len)) goto LA3_;
		copyMem__system_1719(((void*) ((&(*(*dest).p).data[(*dest).len]))), ((void*) ((&(*src.p).data[((NI)0)]))), ((NI) ((NI)(src.len + ((NI)1)))));
		(*dest).len += src.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot__pureZpathnorm_61)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	T1_ = ((NU8)(x.p->data[bounds.Field0]) == (NU8)(46));
	LA2_: ;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__pureZpathnorm_77)(NimStringV2 x, NimStringV2* result, NI* state, NIM_CHAR dirSep) {
	tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&it), sizeof(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg));
	it.notFirst = (((NI)0) < (NI)((NI32)((*state)) >> (NU32)(((NI)1))));
	{
		if (!it.notFirst) goto LA3_;
		{
			while (1) {
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				T7_ = (it.i < x.len);
				if (!(T7_)) goto LA8_;
				T7_ = (((NU8)(x.p->data[it.i])) == ((NU8)(47)) || ((NU8)(x.p->data[it.i])) == ((NU8)(47)));
				LA8_: ;
				if (!T7_) goto LA6				;
				it.i += ((NI)1);
			} LA6: ;
		}
	}
	LA3_: ;
	{
		while (1) {
			NIM_BOOL T11_;
			tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ b;
			T11_ = (NIM_BOOL)0;
			T11_ = hasNext__pureZpathnorm_6(it, x);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T11_) goto LA10			;
			b = next__pureZpathnorm_10((&it), x);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			{
				NIM_BOOL T14_;
				T14_ = (NIM_BOOL)0;
				T14_ = ((NI)((NI32)((*state)) >> (NU32)(((NI)1))) == ((NI)0));
				if (!(T14_)) goto LA15_;
				T14_ = isSlash__pureZpathnorm_69(x, b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				LA15_: ;
				if (!T14_) goto LA16_;
				{
					NIM_BOOL T20_;
					T20_ = (NIM_BOOL)0;
					T20_ = ((*result).len == ((NI)0));
					if (T20_) goto LA21_;
					T20_ = !((((NU8)((*result).p->data[(NI)((*result).len - ((NI)1))])) == ((NU8)(47)) || ((NU8)((*result).p->data[(NI)((*result).len - ((NI)1))])) == ((NU8)(47))));
					LA21_: ;
					if (!T20_) goto LA22_;
					nimAddCharV1((&(*result)), dirSep);
				}
				LA22_: ;
				(*state) = (NI)((*state) | ((NI)1));
			}
			goto LA12_;
			LA16_: ;
			{
				NIM_BOOL T25_;
				T25_ = (NIM_BOOL)0;
				T25_ = isDotDot__pureZpathnorm_65(x, b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!T25_) goto LA26_;
				{
					NI d;
					if (!(((NI)1) <= (NI)((NI32)((*state)) >> (NU32)(((NI)1))))) goto LA30_;
					d = (*result).len;
					{
						while (1) {
							NIM_BOOL T34_;
							T34_ = (NIM_BOOL)0;
							T34_ = ((NI)((*state) & ((NI)1)) < (NI)(d - ((NI)1)));
							if (!(T34_)) goto LA35_;
							T34_ = !((((NU8)((*result).p->data[(NI)(d - ((NI)1))])) == ((NU8)(47)) || ((NU8)((*result).p->data[(NI)(d - ((NI)1))])) == ((NU8)(47))));
							LA35_: ;
							if (!T34_) goto LA33							;
							d -= ((NI)1);
						} LA33: ;
					}
					{
						if (!(((NI)0) < d)) goto LA38_;
						setLengthStrV2((&(*result)), ((NI) ((NI)(d - ((NI)1)))));
						(*state) -= ((NI)2);
					}
					LA38_: ;
				}
				goto LA28_;
				LA30_: ;
				{
					NimStringV2 colontmpD_;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					{
						NIM_BOOL T43_;
						T43_ = (NIM_BOOL)0;
						T43_ = (((NI)0) < (*result).len);
						if (!(T43_)) goto LA44_;
						T43_ = !((((NU8)((*result).p->data[(NI)((*result).len - ((NI)1))])) == ((NU8)(47)) || ((NU8)((*result).p->data[(NI)((*result).len - ((NI)1))])) == ((NU8)(47))));
						LA44_: ;
						if (!T43_) goto LA45_;
						nimAddCharV1((&(*result)), dirSep);
					}
					LA45_: ;
					colontmpD_ = substr__system_7535(x, b.Field0, b.Field1);
					prepareAdd((&(*result)), colontmpD_.len + 0);
appendString((&(*result)), colontmpD_);
					eqdestroy___stdZassertions_13((&colontmpD_));
				}
				LA28_: ;
			}
			goto LA12_;
			LA26_: ;
			{
				NIM_BOOL T48_;
				T48_ = (NIM_BOOL)0;
				T48_ = isDot__pureZpathnorm_61(x, b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!T48_) goto LA49_;
			}
			goto LA12_;
			LA49_: ;
			{
				NimStringV2 colontmpD__2;
				if (!(b.Field0 <= b.Field1)) goto LA52_;
				colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
				{
					NIM_BOOL T56_;
					T56_ = (NIM_BOOL)0;
					T56_ = (((NI)0) < (*result).len);
					if (!(T56_)) goto LA57_;
					T56_ = !((((NU8)((*result).p->data[(NI)((*result).len - ((NI)1))])) == ((NU8)(47)) || ((NU8)((*result).p->data[(NI)((*result).len - ((NI)1))])) == ((NU8)(47))));
					LA57_: ;
					if (!T56_) goto LA58_;
					nimAddCharV1((&(*result)), dirSep);
				}
				LA58_: ;
				colontmpD__2 = substr__system_7535(x, b.Field0, b.Field1);
				prepareAdd((&(*result)), colontmpD__2.len + 0);
appendString((&(*result)), colontmpD__2);
				(*state) += ((NI)2);
				eqdestroy___stdZassertions_13((&colontmpD__2));
			}
			goto LA12_;
			LA52_: ;
			LA12_: ;
		} LA10: ;
	}
	{
		NIM_BOOL T62_;
		T62_ = (NIM_BOOL)0;
		T62_ = ((*result).len == 0);
		if (!(T62_)) goto LA63_;
		T62_ = !((x.len == 0));
		LA63_: ;
		if (!T62_) goto LA64_;
		eqsink___stdZassertions_19((&(*result)), TM__DfU0iuayCGwHDN1Exp9cbKg_3);
	}
	LA64_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, normalizePath__pureZpathnorm_137)(NimStringV2 path, NIM_CHAR dirSep) {
	NimStringV2 result;
	NI state;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = rawNewString(((NI) (path.len)));
	state = ((NI)0);
	addNormalizePath__pureZpathnorm_77(path, (&result), (&state), dirSep);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
