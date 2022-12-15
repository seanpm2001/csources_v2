/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64

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
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
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
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NI, parseSaturatedNatural__pureZparseutils_435)(NIM_CHAR* s, NI sLen_0, NI* b);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NI, parseHex__pureZstrutils_989)(NIM_CHAR* s, NI sLen_0, NI* number, NI maxLen);
N_LIB_PRIVATE N_NIMCALL(NI, npuParseInt)(NIM_CHAR* s, NI sLen_0, NI* number);
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestInt)(NIM_CHAR* s, NI sLen_0, NI64* number);
N_LIB_PRIVATE N_NIMCALL(NI, rawParseInt__pureZparseutils_364)(NIM_CHAR* s, NI sLen_0, NI64* b);
N_LIB_PRIVATE N_NOINLINE(void, integerOutOfRangeError__pureZparseutils_325)(void);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NI, npuParseFloat)(NIM_CHAR* s, NI sLen_0, NF* number);
N_NIMCALL(NI, nimParseBiggestFloat)(NIM_CHAR* s, NI sLen_0, NF* number);
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestUInt)(NIM_CHAR* s, NI sLen_0, NU64* number);
N_LIB_PRIVATE N_NIMCALL(NI, rawParseUInt__pureZparseutils_490)(NIM_CHAR* s, NI sLen_0, NU64* b);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_3157)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE N_NIMCALL(NI, parseIdent__pureZparseutils_56)(NIM_CHAR* s, NI sLen_0, NimStringV2* ident);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7518)(NIM_CHAR* s, NI sLen_0);
extern TNimTypeV2 NTIv2__ke0esfQKJkTSUu9bpZ7VlFw_;
static const struct {
  NI cap; NIM_CHAR data[37+1];
} TM__vI9aZNKIcImom6dDyKXW1ZA_2 = { 37 | NIM_STRLIT_FLAG, "Parsed integer outside of valid range" };
static const NimStringV2 TM__vI9aZNKIcImom6dDyKXW1ZA_3 = {37, (NimStrPayload*)&TM__vI9aZNKIcImom6dDyKXW1ZA_2};
extern NIM_BOOL nimInErrorMode__system_3994;
N_LIB_PRIVATE N_NIMCALL(NI, parseSaturatedNatural__pureZparseutils_435)(NIM_CHAR* s, NI sLen_0, NI* b) {
	NI result;
	NI i;
	result = (NI)0;
	i = ((NI)0);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (i < sLen_0);
		if (!(T3_)) goto LA4_;
		T3_ = ((NU8)(s[i]) == (NU8)(43));
		LA4_: ;
		if (!T3_) goto LA5_;
		i += ((NI)1);
	}
	LA5_: ;
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = (i < sLen_0);
		if (!(T9_)) goto LA10_;
		T9_ = (((NU8)(s[i])) >= ((NU8)(48)) && ((NU8)(s[i])) <= ((NU8)(57)));
		LA10_: ;
		if (!T9_) goto LA11_;
		(*b) = ((NI)0);
		{
			while (1) {
				NIM_BOOL T15_;
				NI c;
				T15_ = (NIM_BOOL)0;
				T15_ = (i < sLen_0);
				if (!(T15_)) goto LA16_;
				T15_ = (((NU8)(s[i])) >= ((NU8)(48)) && ((NU8)(s[i])) <= ((NU8)(57)));
				LA16_: ;
				if (!T15_) goto LA14				;
				c = (NI)(((NU8)(s[i])) - ((NI)48));
				{
					if (!((*b) <= (NI)((NI)(((NI)IL64(9223372036854775807)) - c) / ((NI)10)))) goto LA19_;
					(*b) = (NI)((NI)((*b) * ((NI)10)) + c);
				}
				goto LA17_;
				LA19_: ;
				{
					(*b) = ((NI)IL64(9223372036854775807));
				}
				LA17_: ;
				i += ((NI)1);
				{
					while (1) {
						NIM_BOOL T24_;
						T24_ = (NIM_BOOL)0;
						T24_ = (i < sLen_0);
						if (!(T24_)) goto LA25_;
						T24_ = ((NU8)(s[i]) == (NU8)(95));
						LA25_: ;
						if (!T24_) goto LA23						;
						i += ((NI)1);
					} LA23: ;
				}
			} LA14: ;
		}
		result = i;
	}
	LA11_: ;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3994);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseSaturatedNatural__pureZparseutils_829)(NimStringV2 s, NI* b, NI start) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = parseSaturatedNatural__pureZparseutils_435((((s).p) ? ((NIM_CHAR*)s.p->data+(start)) : NIM_NIL), ((s.len-1))-(start)+1, b);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseHex__pureZstrutils_989)(NIM_CHAR* s, NI sLen_0, NI* number, NI maxLen) {
	NI result;
	NI colontmpD_;
	NI colontmpD__2;
	NI i;
	NI output;
	NIM_BOOL foundDigit;
	NI last;
	NI T1_;
	result = (NI)0;
	colontmpD_ = (NI)0;
	colontmpD__2 = (NI)0;
	i = ((NI)0);
	output = ((NI)0);
	foundDigit = NIM_FALSE;
	T1_ = (NI)0;
	{
		if (!(maxLen == ((NI)0))) goto LA4_;
		colontmpD_ = sLen_0;
		T1_ = colontmpD_;
	}
	goto LA2_;
	LA4_: ;
	{
		colontmpD__2 = (NI)(i + maxLen);
		T1_ = colontmpD__2;
	}
	LA2_: ;
	last = ((sLen_0 <= T1_) ? sLen_0 : T1_);
	{
		NIM_BOOL T9_;
		NIM_BOOL T10_;
		T9_ = (NIM_BOOL)0;
		T10_ = (NIM_BOOL)0;
		T10_ = ((NI)(i + ((NI)1)) < last);
		if (!(T10_)) goto LA11_;
		T10_ = ((NU8)(s[i]) == (NU8)(48));
		LA11_: ;
		T9_ = T10_;
		if (!(T9_)) goto LA12_;
		T9_ = (((NU8)(s[(NI)(i + ((NI)1))])) == ((NU8)(120)) || ((NU8)(s[(NI)(i + ((NI)1))])) == ((NU8)(88)));
		LA12_: ;
		if (!T9_) goto LA13_;
		i += ((NI)2);
	}
	goto LA7_;
	LA13_: ;
	{
		NIM_BOOL T16_;
		T16_ = (NIM_BOOL)0;
		T16_ = (i < last);
		if (!(T16_)) goto LA17_;
		T16_ = ((NU8)(s[i]) == (NU8)(35));
		LA17_: ;
		if (!T16_) goto LA18_;
		i += ((NI)1);
	}
	goto LA7_;
	LA18_: ;
	LA7_: ;
	{
		while (1) {
			if (!(i < last)) goto LA21			;
			switch (((NU8)(s[i]))) {
			case 95:
			{
			}
			break;
			case 48 ... 57:
			{
				output = (NI)((NI)((NU64)(output) << (NU64)(((NI)4))) | (NI)(((NU8)(s[i])) - ((NI)48)));
				foundDigit = NIM_TRUE;
			}
			break;
			case 97 ... 102:
			{
				output = (NI)((NI)((NU64)(output) << (NU64)(((NI)4))) | (NI)((NI)(((NU8)(s[i])) - ((NI)97)) + ((NI)10)));
				foundDigit = NIM_TRUE;
			}
			break;
			case 65 ... 70:
			{
				output = (NI)((NI)((NU64)(output) << (NU64)(((NI)4))) | (NI)((NI)(((NU8)(s[i])) - ((NI)65)) + ((NI)10)));
				foundDigit = NIM_TRUE;
			}
			break;
			default:
			{
				goto LA20;
			}
			break;
			}
			i += ((NI)1);
		} LA21: ;
	} LA20: ;
	{
		if (!foundDigit) goto LA29_;
		(*number) = output;
		result = i;
	}
	LA29_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseHex__pureZstrutils_982)(NimStringV2 s, NI* number, NI start, NI maxLen) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = parseHex__pureZstrutils_989((((s).p) ? ((NIM_CHAR*)s.p->data+(start)) : NIM_NIL), ((s.len-1))-(start)+1, number, maxLen);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NOINLINE(void, integerOutOfRangeError__pureZparseutils_325)(void) {
	tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw* T1_;
{	T1_ = NIM_NIL;
	T1_ = (tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw*) nimNewObj(sizeof(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw), NIM_ALIGNOF(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTIv2__ke0esfQKJkTSUu9bpZ7VlFw_);
	(*T1_).Sup.Sup.name = "ValueError";
	(*T1_).Sup.Sup.message = TM__vI9aZNKIcImom6dDyKXW1ZA_3;
	(*T1_).Sup.Sup.parent = ((Exception*) NIM_NIL);
	raiseExceptionEx((Exception*)T1_, "ValueError", "integerOutOfRangeError", "parseutils.nim", 421);
goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, rawParseInt__pureZparseutils_364)(NIM_CHAR* s, NI sLen_0, NI64* b) {
	NI result;
	NI64 sign;
	NI i;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	sign = IL64(-1);
	i = ((NI)0);
	{
		if (!(i < sLen_0)) goto LA3_;
		{
			if (!((NU8)(s[i]) == (NU8)(43))) goto LA7_;
			i += ((NI)1);
		}
		goto LA5_;
		LA7_: ;
		{
			if (!((NU8)(s[i]) == (NU8)(45))) goto LA10_;
			i += ((NI)1);
			sign = IL64(1);
		}
		goto LA5_;
		LA10_: ;
		LA5_: ;
	}
	LA3_: ;
	{
		NIM_BOOL T14_;
		T14_ = (NIM_BOOL)0;
		T14_ = (i < sLen_0);
		if (!(T14_)) goto LA15_;
		T14_ = (((NU8)(s[i])) >= ((NU8)(48)) && ((NU8)(s[i])) <= ((NU8)(57)));
		LA15_: ;
		if (!T14_) goto LA16_;
		(*b) = IL64(0);
		{
			while (1) {
				NIM_BOOL T20_;
				NI c;
				T20_ = (NIM_BOOL)0;
				T20_ = (i < sLen_0);
				if (!(T20_)) goto LA21_;
				T20_ = (((NU8)(s[i])) >= ((NU8)(48)) && ((NU8)(s[i])) <= ((NU8)(57)));
				LA21_: ;
				if (!T20_) goto LA19				;
				c = (NI)(((NU8)(s[i])) - ((NI)48));
				{
					if (!((NI64)((NI64)((IL64(-9223372036854775807) - IL64(1)) + ((NI64) (c))) / IL64(10)) <= (*b))) goto LA24_;
					(*b) = (NI64)((NI64)((*b) * IL64(10)) - ((NI64) (c)));
				}
				goto LA22_;
				LA24_: ;
				{
					integerOutOfRangeError__pureZparseutils_325();
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				LA22_: ;
				i += ((NI)1);
				{
					while (1) {
						NIM_BOOL T29_;
						T29_ = (NIM_BOOL)0;
						T29_ = (i < sLen_0);
						if (!(T29_)) goto LA30_;
						T29_ = ((NU8)(s[i]) == (NU8)(95));
						LA30_: ;
						if (!T29_) goto LA28						;
						i += ((NI)1);
					} LA28: ;
				}
			} LA19: ;
		}
		{
			NIM_BOOL T33_;
			T33_ = (NIM_BOOL)0;
			T33_ = (sign == IL64(-1));
			if (!(T33_)) goto LA34_;
			T33_ = ((*b) == (IL64(-9223372036854775807) - IL64(1)));
			LA34_: ;
			if (!T33_) goto LA35_;
			integerOutOfRangeError__pureZparseutils_325();
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		goto LA31_;
		LA35_: ;
		{
			(*b) = (NI64)((*b) * sign);
			result = i;
		}
		LA31_: ;
	}
	LA16_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestInt)(NIM_CHAR* s, NI sLen_0, NI64* number) {
	NI result;
	NI64 res;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	res = IL64(0);
	result = rawParseInt__pureZparseutils_364(s, sLen_0, (&res));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!!((result == ((NI)0)))) goto LA3_;
		(*number) = res;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseInt)(NIM_CHAR* s, NI sLen_0, NI* number) {
	NI result;
	NI64 res;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	res = IL64(0);
	result = npuParseBiggestInt(s, sLen_0, (&res));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!!((result == ((NI)0)))) goto LA3_;
		(*number) = ((NI) (res));
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseInt__pureZparseutils_824)(NimStringV2 s, NI* number, NI start) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = npuParseInt((((s).p) ? ((NIM_CHAR*)s.p->data+(start)) : NIM_NIL), ((s.len-1))-(start)+1, number);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseFloat)(NIM_CHAR* s, NI sLen_0, NF* number) {
	NI result;
	NF bf;
	result = (NI)0;
	bf = 0.0;
	result = nimParseBiggestFloat(s, sLen_0, (&bf));
	{
		if (!!((result == ((NI)0)))) goto LA3_;
		(*number) = bf;
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseFloat__pureZparseutils_849)(NimStringV2 s, NF* number, NI start) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = npuParseFloat((((s).p) ? ((NIM_CHAR*)s.p->data+(start)) : NIM_NIL), ((s.len-1))-(start)+1, number);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rawParseUInt__pureZparseutils_490)(NIM_CHAR* s, NI sLen_0, NU64* b) {
	NI result;
	NU64 res;
	NU64 prev;
	NI i;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	res = 0ULL;
	prev = 0ULL;
	i = ((NI)0);
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = (i < (NI)(sLen_0 - ((NI)1)));
		if (!(T4_)) goto LA5_;
		T4_ = ((NU8)(s[i]) == (NU8)(45));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		T3_ = (((NU8)(s[(NI)(i + ((NI)1))])) >= ((NU8)(48)) && ((NU8)(s[(NI)(i + ((NI)1))])) <= ((NU8)(57)));
		LA6_: ;
		if (!T3_) goto LA7_;
		integerOutOfRangeError__pureZparseutils_325();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA7_: ;
	{
		NIM_BOOL T11_;
		T11_ = (NIM_BOOL)0;
		T11_ = (i < sLen_0);
		if (!(T11_)) goto LA12_;
		T11_ = ((NU8)(s[i]) == (NU8)(43));
		LA12_: ;
		if (!T11_) goto LA13_;
		i += ((NI)1);
	}
	LA13_: ;
	{
		NIM_BOOL T17_;
		T17_ = (NIM_BOOL)0;
		T17_ = (i < sLen_0);
		if (!(T17_)) goto LA18_;
		T17_ = (((NU8)(s[i])) >= ((NU8)(48)) && ((NU8)(s[i])) <= ((NU8)(57)));
		LA18_: ;
		if (!T17_) goto LA19_;
		(*b) = 0ULL;
		{
			while (1) {
				NIM_BOOL T23_;
				T23_ = (NIM_BOOL)0;
				T23_ = (i < sLen_0);
				if (!(T23_)) goto LA24_;
				T23_ = (((NU8)(s[i])) >= ((NU8)(48)) && ((NU8)(s[i])) <= ((NU8)(57)));
				LA24_: ;
				if (!T23_) goto LA22				;
				prev = res;
				res = (NU64)((NU64)((NU64)((NU64)(res) * (NU64)(10ULL))) + (NU64)(((NU64) ((NI)(((NU8)(s[i])) - ((NI)48))))));
				{
					if (!((NU64)(res) < (NU64)(prev))) goto LA27_;
					integerOutOfRangeError__pureZparseutils_325();
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				LA27_: ;
				i += ((NI)1);
				{
					while (1) {
						NIM_BOOL T31_;
						T31_ = (NIM_BOOL)0;
						T31_ = (i < sLen_0);
						if (!(T31_)) goto LA32_;
						T31_ = ((NU8)(s[i]) == (NU8)(95));
						LA32_: ;
						if (!T31_) goto LA30						;
						i += ((NI)1);
					} LA30: ;
				}
			} LA22: ;
		}
		(*b) = res;
		result = i;
	}
	LA19_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestUInt)(NIM_CHAR* s, NI sLen_0, NU64* number) {
	NI result;
	NU64 res;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	res = 0ULL;
	result = rawParseUInt__pureZparseutils_490(s, sLen_0, (&res));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!!((result == ((NI)0)))) goto LA3_;
		(*number) = res;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseBiggestUInt__pureZparseutils_834)(NimStringV2 s, NU64* number, NI start) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = npuParseBiggestUInt((((s).p) ? ((NIM_CHAR*)s.p->data+(start)) : NIM_NIL), ((s.len-1))-(start)+1, number);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseBiggestInt__pureZparseutils_819)(NimStringV2 s, NI64* number, NI start) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = npuParseBiggestInt((((s).p) ? ((NIM_CHAR*)s.p->data+(start)) : NIM_NIL), ((s.len-1))-(start)+1, number);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
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
N_LIB_PRIVATE N_NIMCALL(void, fastSubstr__pureZparseutils_225)(NIM_CHAR* s, NI sLen_0, NimStringV2* token, NI length) {
	setLengthStrV2((&(*token)), ((NI) (length)));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < length)) goto LA3				;
				i = i_2;
				nimPrepareStrMutationV2((&(*token)));
				(*token).p->data[i] = s[i];
				i_2 += ((NI)1);
			} LA3: ;
		}
	}
}
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
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
		rememberCycle__system_3157(result, cell, (*((TNimTypeV2**) (p))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZparseutils_349)(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw** dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest));
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseBiggestFloat__pureZparseutils_844)(NimStringV2 s, NF* number, NI start) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = npuParseFloat((((s).p) ? ((NIM_CHAR*)s.p->data+(start)) : NIM_NIL), ((s.len-1))-(start)+1, number);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseIdent__pureZparseutils_56)(NIM_CHAR* s, NI sLen_0, NimStringV2* ident) {
	NI result;
	NI i;
	result = (NI)0;
	i = ((NI)0);
	{
		NIM_BOOL T3_;
		NimStringV2 T11_;
		T3_ = (NIM_BOOL)0;
		T3_ = (i < sLen_0);
		if (!(T3_)) goto LA4_;
		T3_ = (((NU8)(s[i])) >= ((NU8)(97)) && ((NU8)(s[i])) <= ((NU8)(122)) || ((NU8)(s[i])) >= ((NU8)(65)) && ((NU8)(s[i])) <= ((NU8)(90)) || ((NU8)(s[i])) == ((NU8)(95)));
		LA4_: ;
		if (!T3_) goto LA5_;
		i += ((NI)1);
		{
			while (1) {
				NIM_BOOL T9_;
				T9_ = (NIM_BOOL)0;
				T9_ = (i < sLen_0);
				if (!(T9_)) goto LA10_;
				T9_ = (((NU8)(s[i])) >= ((NU8)(97)) && ((NU8)(s[i])) <= ((NU8)(122)) || ((NU8)(s[i])) >= ((NU8)(65)) && ((NU8)(s[i])) <= ((NU8)(90)) || ((NU8)(s[i])) >= ((NU8)(48)) && ((NU8)(s[i])) <= ((NU8)(57)) || ((NU8)(s[i])) == ((NU8)(95)));
				LA10_: ;
				if (!T9_) goto LA8				;
				i += ((NI)1);
			} LA8: ;
		}
		T11_.len = 0; T11_.p = NIM_NIL;
		T11_ = substr__system_7518((NIM_CHAR*)(s)+(((NI)0)), ((NI)(i - ((NI)1)))-(((NI)0))+1);
		eqsink___stdZassertions_19((&(*ident)), T11_);
		result = i;
	}
	LA5_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseIdent__pureZparseutils_746)(NimStringV2 s, NimStringV2* ident, NI start) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = parseIdent__pureZparseutils_56((((s).p) ? ((NIM_CHAR*)s.p->data+(start)) : NIM_NIL), ((s.len-1))-(start)+1, ident);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
