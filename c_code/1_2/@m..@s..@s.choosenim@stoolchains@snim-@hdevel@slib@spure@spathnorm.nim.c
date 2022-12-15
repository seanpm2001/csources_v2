/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64

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
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
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
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringV2 Field0;
NimStringV2 Field1;
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
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, splitDrive__stdZprivateZntpath_2)(NimStringV2 p, tyTuple__UV3llMMYFckfui8YMBuUZA* Result);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__pureZpathnorm_6)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it, NimStringV2 x);
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next__pureZpathnorm_10)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg* it, NimStringV2 x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash__pureZpathnorm_69)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot__pureZpathnorm_65)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7601)(NimStringV2 s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot__pureZpathnorm_61)(NimStringV2 x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_NIMCALL(NimStringV2, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__pureZpathnorm_78)(NimStringV2 x, NimStringV2* result, NI* state, NIM_CHAR dirSep);
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__DfU0iuayCGwHDN1Exp9cbKg_2 = { 1 | NIM_STRLIT_FLAG, "." };
static const NimStringV2 TM__DfU0iuayCGwHDN1Exp9cbKg_3 = {1, (NimStrPayload*)&TM__DfU0iuayCGwHDN1Exp9cbKg_2};
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
		T3_ = (((NU8)(x.p->data[(*it).i])) == ((NU8)(92)) || ((NU8)(x.p->data[(*it).i])) == ((NU8)(47)));
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
				T10_ = !((((NU8)(x.p->data[(*it).i])) == ((NU8)(92)) || ((NU8)(x.p->data[(*it).i])) == ((NU8)(47))));
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
			T22_ = (((NU8)(x.p->data[(*it).i])) == ((NU8)(92)) || ((NU8)(x.p->data[(*it).i])) == ((NU8)(47)));
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
	T1_ = (((NU8)(x.p->data[bounds.Field0])) == ((NU8)(92)) || ((NU8)(x.p->data[bounds.Field0])) == ((NU8)(47)));
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
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__pureZpathnorm_78)(NimStringV2 x, NimStringV2* result, NI* state, NIM_CHAR dirSep) {
	NimStringV2 x_2;
	tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	x_2.len = 0; x_2.p = NIM_NIL;
	eqcopy___stdZassertions_16((&x_2), x);
	{
		tyTuple__UV3llMMYFckfui8YMBuUZA colontmp_;
		NimStringV2 drive;
		NimStringV2 file;
		NimStringV2 blitTmp;
		if (!((*result).len == 0)) goto LA3_;
		nimZeroMem((void*)(&colontmp_), sizeof(tyTuple__UV3llMMYFckfui8YMBuUZA));
		drive.len = 0; drive.p = NIM_NIL;
		file.len = 0; file.p = NIM_NIL;
		blitTmp = x_2;
		x_2.len = 0; x_2.p = NIM_NIL;
		splitDrive__stdZprivateZntpath_2(blitTmp, (&colontmp_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		drive = colontmp_.Field0;
		file = colontmp_.Field1;
		eqsink___stdZassertions_19((&x_2), file);
		prepareAdd((&(*result)), drive.len + 0);
appendString((&(*result)), drive);
		{
			NIM_CHAR* c;
			NI i;
			NI L;
			c = (NIM_CHAR*)0;
			i = ((NI)0);
			L = (*result).len;
			{
				while (1) {
					if (!(i < L)) goto LA7					;
					nimPrepareStrMutationV2((&(*result)));
					c = (&(*result).p->data[i]);
					{
						if (!(((NU8)((*c))) == ((NU8)(92)) || ((NU8)((*c))) == ((NU8)(47)))) goto LA10_;
						(*c) = dirSep;
					}
					LA10_: ;
					i += ((NI)1);
				} LA7: ;
			}
		}
		eqdestroy___stdZassertions_13((&drive));
	}
	LA3_: ;
	nimZeroMem((void*)(&it), sizeof(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg));
	it.notFirst = (((NI)0) < (NI)((NI64)((*state)) >> (NU64)(((NI)1))));
	{
		if (!it.notFirst) goto LA14_;
		{
			while (1) {
				NIM_BOOL T18_;
				T18_ = (NIM_BOOL)0;
				T18_ = (it.i < x_2.len);
				if (!(T18_)) goto LA19_;
				T18_ = (((NU8)(x_2.p->data[it.i])) == ((NU8)(92)) || ((NU8)(x_2.p->data[it.i])) == ((NU8)(47)));
				LA19_: ;
				if (!T18_) goto LA17				;
				it.i += ((NI)1);
			} LA17: ;
		}
	}
	LA14_: ;
	{
		while (1) {
			NIM_BOOL T22_;
			tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ b;
			T22_ = (NIM_BOOL)0;
			T22_ = hasNext__pureZpathnorm_6(it, x_2);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T22_) goto LA21			;
			b = next__pureZpathnorm_10((&it), x_2);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			{
				NIM_BOOL T25_;
				T25_ = (NIM_BOOL)0;
				T25_ = ((NI)((NI64)((*state)) >> (NU64)(((NI)1))) == ((NI)0));
				if (!(T25_)) goto LA26_;
				T25_ = isSlash__pureZpathnorm_69(x_2, b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				LA26_: ;
				if (!T25_) goto LA27_;
				{
					NIM_BOOL T31_;
					T31_ = (NIM_BOOL)0;
					T31_ = ((*result).len == ((NI)0));
					if (T31_) goto LA32_;
					T31_ = !((((NU8)((*result).p->data[(NI)((*result).len - ((NI)1))])) == ((NU8)(92)) || ((NU8)((*result).p->data[(NI)((*result).len - ((NI)1))])) == ((NU8)(47))));
					LA32_: ;
					if (!T31_) goto LA33_;
					nimAddCharV1((&(*result)), dirSep);
				}
				LA33_: ;
				(*state) = (NI)((*state) | ((NI)1));
			}
			goto LA23_;
			LA27_: ;
			{
				NIM_BOOL T36_;
				T36_ = (NIM_BOOL)0;
				T36_ = isDotDot__pureZpathnorm_65(x_2, b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!T36_) goto LA37_;
				{
					NI d;
					if (!(((NI)1) <= (NI)((NI64)((*state)) >> (NU64)(((NI)1))))) goto LA41_;
					d = (*result).len;
					{
						while (1) {
							NIM_BOOL T45_;
							T45_ = (NIM_BOOL)0;
							T45_ = ((NI)((*state) & ((NI)1)) < (NI)(d - ((NI)1)));
							if (!(T45_)) goto LA46_;
							T45_ = !((((NU8)((*result).p->data[(NI)(d - ((NI)1))])) == ((NU8)(92)) || ((NU8)((*result).p->data[(NI)(d - ((NI)1))])) == ((NU8)(47))));
							LA46_: ;
							if (!T45_) goto LA44							;
							d -= ((NI)1);
						} LA44: ;
					}
					{
						if (!(((NI)0) < d)) goto LA49_;
						setLengthStrV2((&(*result)), ((NI) ((NI)(d - ((NI)1)))));
						(*state) -= ((NI)2);
					}
					LA49_: ;
				}
				goto LA39_;
				LA41_: ;
				{
					NimStringV2 colontmpD_;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					{
						NIM_BOOL T54_;
						T54_ = (NIM_BOOL)0;
						T54_ = (((NI)0) < (*result).len);
						if (!(T54_)) goto LA55_;
						T54_ = !((((NU8)((*result).p->data[(NI)((*result).len - ((NI)1))])) == ((NU8)(92)) || ((NU8)((*result).p->data[(NI)((*result).len - ((NI)1))])) == ((NU8)(47))));
						LA55_: ;
						if (!T54_) goto LA56_;
						nimAddCharV1((&(*result)), dirSep);
					}
					LA56_: ;
					colontmpD_ = substr__system_7601(x_2, b.Field0, b.Field1);
					prepareAdd((&(*result)), colontmpD_.len + 0);
appendString((&(*result)), colontmpD_);
					eqdestroy___stdZassertions_13((&colontmpD_));
				}
				LA39_: ;
			}
			goto LA23_;
			LA37_: ;
			{
				NIM_BOOL T59_;
				T59_ = (NIM_BOOL)0;
				T59_ = isDot__pureZpathnorm_61(x_2, b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!T59_) goto LA60_;
			}
			goto LA23_;
			LA60_: ;
			{
				NimStringV2 colontmpD__2;
				if (!(b.Field0 <= b.Field1)) goto LA63_;
				colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
				{
					NIM_BOOL T67_;
					T67_ = (NIM_BOOL)0;
					T67_ = (((NI)0) < (*result).len);
					if (!(T67_)) goto LA68_;
					T67_ = !((((NU8)((*result).p->data[(NI)((*result).len - ((NI)1))])) == ((NU8)(92)) || ((NU8)((*result).p->data[(NI)((*result).len - ((NI)1))])) == ((NU8)(47))));
					LA68_: ;
					if (!T67_) goto LA69_;
					nimAddCharV1((&(*result)), dirSep);
				}
				LA69_: ;
				colontmpD__2 = substr__system_7601(x_2, b.Field0, b.Field1);
				prepareAdd((&(*result)), colontmpD__2.len + 0);
appendString((&(*result)), colontmpD__2);
				(*state) += ((NI)2);
				eqdestroy___stdZassertions_13((&colontmpD__2));
			}
			goto LA23_;
			LA63_: ;
			LA23_: ;
		} LA21: ;
	}
	{
		NIM_BOOL T73_;
		T73_ = (NIM_BOOL)0;
		T73_ = ((*result).len == 0);
		if (!(T73_)) goto LA74_;
		T73_ = !((x_2.len == 0));
		LA74_: ;
		if (!T73_) goto LA75_;
		eqsink___stdZassertions_19((&(*result)), TM__DfU0iuayCGwHDN1Exp9cbKg_3);
	}
	LA75_: ;
	eqdestroy___stdZassertions_13((&x_2));
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, normalizePath__pureZpathnorm_158)(NimStringV2 path, NIM_CHAR dirSep) {
	NimStringV2 result;
	NI state;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = rawNewString(((NI) (path.len)));
	state = ((NI)0);
	addNormalizePath__pureZpathnorm_78(path, (&result), (&state), dirSep);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
