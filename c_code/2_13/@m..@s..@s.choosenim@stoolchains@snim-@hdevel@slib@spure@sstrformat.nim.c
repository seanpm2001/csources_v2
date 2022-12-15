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
typedef struct tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ;
typedef struct tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ {
NIM_CHAR fill;
NIM_CHAR align;
NIM_CHAR sign;
NIM_BOOL alternateForm;
NIM_BOOL padWithZero;
NI minimumWidth;
NI precision;
NIM_CHAR typ;
NI endPosition;
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
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
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

      static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, parseStandardFormatSpecifier__pureZstrformat_57)(NimStringV2 s, NI start, NIM_BOOL ignoreUnknownSuffix, tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ* Result);
N_LIB_PRIVATE N_NIMCALL(NI, parseSaturatedNatural__pureZparseutils_829)(NimStringV2 s, NI* b, NI start);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
static N_INLINE(NimStringV2, X5BX5D___pureZstrutils_1307)(NimStringV2 s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x);
N_NIMCALL(NimStringV2, mnewString)(NI len);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___stdZenumutils_128)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, appendChar)(NimStringV2* dest, NIM_CHAR c);
static N_INLINE(NI, runeLen__pureZunicode_7215)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NI, nucruneLen)(NIM_CHAR* s, NI sLen_0);
static N_INLINE(NI, runeOffset__pureZunicode_7390)(NimStringV2 s, NI pos, NI start);
N_LIB_PRIVATE N_NIMCALL(NI, runeOffset__pureZunicode_794)(NIM_CHAR* s, NI sLen_0, NI pos, NI start);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, alignString__pureZstrformat_19)(NimStringV2 s, NI minimumWidth, NIM_CHAR align, NIM_CHAR fill);
static N_INLINE(NI, validateUtf8__pureZunicode_7387)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NI, validateUtf8__pureZunicode_329)(NIM_CHAR* s, NI sLen_0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuRepeatChar)(NIM_CHAR c, NI count);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___systemZdollars_3)(NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, formatInt__pureZterminal_218)(NI n, NI radix, tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ* spec);
static N_INLINE(NimStringV2, mkDigit__pureZstrformat_6)(NI v, NIM_CHAR typ);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nimCharToStr)(NIM_CHAR x);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
extern TNimTypeV2 NTIv2__ke0esfQKJkTSUu9bpZ7VlFw_;
static const struct {
  NI cap; NIM_CHAR data[37+1];
} TM__qDXzsifTQdn8ucTam9cFp4w_2 = { 37 | NIM_STRLIT_FLAG, "invalid format string, cannot parse: " };
static const NimStringV2 TM__qDXzsifTQdn8ucTam9cFp4w_3 = {37, (NimStrPayload*)&TM__qDXzsifTQdn8ucTam9cFp4w_2};
static const struct {
  NI cap; NIM_CHAR data[64+1];
} TM__qDXzsifTQdn8ucTam9cFp4w_4 = { 64 | NIM_STRLIT_FLAG, "invalid type in format string for string, expected \'s\', but got " };
static const NimStringV2 TM__qDXzsifTQdn8ucTam9cFp4w_5 = {64, (NimStrPayload*)&TM__qDXzsifTQdn8ucTam9cFp4w_4};
static const struct {
  NI cap; NIM_CHAR data[92+1];
} TM__qDXzsifTQdn8ucTam9cFp4w_6 = { 92 | NIM_STRLIT_FLAG, "invalid type in format string for number, expected one  of \'x\', \'X\', \'b\', \'d\', \'o\' but got: " };
static const NimStringV2 TM__qDXzsifTQdn8ucTam9cFp4w_7 = {92, (NimStrPayload*)&TM__qDXzsifTQdn8ucTam9cFp4w_6};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__qDXzsifTQdn8ucTam9cFp4w_8 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__qDXzsifTQdn8ucTam9cFp4w_9 = {0, (NimStrPayload*)&TM__qDXzsifTQdn8ucTam9cFp4w_8};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__qDXzsifTQdn8ucTam9cFp4w_10 = { 2 | NIM_STRLIT_FLAG, "0x" };
static const NimStringV2 TM__qDXzsifTQdn8ucTam9cFp4w_11 = {2, (NimStrPayload*)&TM__qDXzsifTQdn8ucTam9cFp4w_10};
static const NimStringV2 TM__qDXzsifTQdn8ucTam9cFp4w_12 = {2, (NimStrPayload*)&TM__qDXzsifTQdn8ucTam9cFp4w_10};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__qDXzsifTQdn8ucTam9cFp4w_13 = { 2 | NIM_STRLIT_FLAG, "0b" };
static const NimStringV2 TM__qDXzsifTQdn8ucTam9cFp4w_14 = {2, (NimStrPayload*)&TM__qDXzsifTQdn8ucTam9cFp4w_13};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__qDXzsifTQdn8ucTam9cFp4w_15 = { 2 | NIM_STRLIT_FLAG, "0o" };
static const NimStringV2 TM__qDXzsifTQdn8ucTam9cFp4w_16 = {2, (NimStrPayload*)&TM__qDXzsifTQdn8ucTam9cFp4w_15};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__qDXzsifTQdn8ucTam9cFp4w_17 = { 1 | NIM_STRLIT_FLAG, "0" };
static const NimStringV2 TM__qDXzsifTQdn8ucTam9cFp4w_18 = {1, (NimStrPayload*)&TM__qDXzsifTQdn8ucTam9cFp4w_17};
static const NimStringV2 TM__qDXzsifTQdn8ucTam9cFp4w_19 = {0, (NimStrPayload*)&TM__qDXzsifTQdn8ucTam9cFp4w_8};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__qDXzsifTQdn8ucTam9cFp4w_20 = { 1 | NIM_STRLIT_FLAG, "-" };
static const NimStringV2 TM__qDXzsifTQdn8ucTam9cFp4w_21 = {1, (NimStrPayload*)&TM__qDXzsifTQdn8ucTam9cFp4w_20};
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
static N_INLINE(NimStringV2, X5BX5D___pureZstrutils_1307)(NimStringV2 s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x) {
	NimStringV2 result;
	NI a;
	NI L;
	result.len = 0; result.p = NIM_NIL;
	a = x.a;
	L = (NI)((NI)((NI)(s.len - x.b) - a) + ((NI)1));
	result = mnewString(((NI) (L)));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < L)) goto LA3				;
				i = i_2;
				nimPrepareStrMutationV2((&result));
				result.p->data[i] = s.p->data[(NI)(i + a)];
				i_2 += ((NI)1);
			} LA3: ;
		}
	}
	return result;
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___stdZenumutils_128)(NI a, NI b) {
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, parseStandardFormatSpecifier__pureZstrformat_57)(NimStringV2 s, NI start, NIM_BOOL ignoreUnknownSuffix, tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ* Result) {
	NI i;
	NI parsedLength;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)Result, sizeof(tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ));
	(*Result).fill = 32;
	(*Result).align = 0;
	(*Result).sign = 45;
	i = start;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ((NI)(i + ((NI)1)) < s.len);
		if (!(T3_)) goto LA4_;
		T3_ = (((NU8)(s.p->data[(NI)(i + ((NI)1))])) == ((NU8)(60)) || ((NU8)(s.p->data[(NI)(i + ((NI)1))])) == ((NU8)(62)) || ((NU8)(s.p->data[(NI)(i + ((NI)1))])) == ((NU8)(94)));
		LA4_: ;
		if (!T3_) goto LA5_;
		(*Result).fill = s.p->data[i];
		(*Result).align = s.p->data[(NI)(i + ((NI)1))];
		i += ((NI)2);
	}
	goto LA1_;
	LA5_: ;
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = (i < s.len);
		if (!(T8_)) goto LA9_;
		T8_ = (((NU8)(s.p->data[i])) == ((NU8)(60)) || ((NU8)(s.p->data[i])) == ((NU8)(62)) || ((NU8)(s.p->data[i])) == ((NU8)(94)));
		LA9_: ;
		if (!T8_) goto LA10_;
		(*Result).align = s.p->data[i];
		i += ((NI)1);
	}
	goto LA1_;
	LA10_: ;
	LA1_: ;
	{
		NIM_BOOL T14_;
		T14_ = (NIM_BOOL)0;
		T14_ = (i < s.len);
		if (!(T14_)) goto LA15_;
		T14_ = (((NU8)(s.p->data[i])) == ((NU8)(45)) || ((NU8)(s.p->data[i])) == ((NU8)(43)) || ((NU8)(s.p->data[i])) == ((NU8)(32)));
		LA15_: ;
		if (!T14_) goto LA16_;
		(*Result).sign = s.p->data[i];
		i += ((NI)1);
	}
	LA16_: ;
	{
		NIM_BOOL T20_;
		T20_ = (NIM_BOOL)0;
		T20_ = (i < s.len);
		if (!(T20_)) goto LA21_;
		T20_ = ((NU8)(s.p->data[i]) == (NU8)(35));
		LA21_: ;
		if (!T20_) goto LA22_;
		(*Result).alternateForm = NIM_TRUE;
		i += ((NI)1);
	}
	LA22_: ;
	{
		NIM_BOOL T26_;
		NIM_BOOL T27_;
		T26_ = (NIM_BOOL)0;
		T27_ = (NIM_BOOL)0;
		T27_ = ((NI)(i + ((NI)1)) < s.len);
		if (!(T27_)) goto LA28_;
		T27_ = ((NU8)(s.p->data[i]) == (NU8)(48));
		LA28_: ;
		T26_ = T27_;
		if (!(T26_)) goto LA29_;
		T26_ = (((NU8)(s.p->data[(NI)(i + ((NI)1))])) >= ((NU8)(48)) && ((NU8)(s.p->data[(NI)(i + ((NI)1))])) <= ((NU8)(57)));
		LA29_: ;
		if (!T26_) goto LA30_;
		(*Result).padWithZero = NIM_TRUE;
		i += ((NI)1);
	}
	LA30_: ;
	parsedLength = parseSaturatedNatural__pureZparseutils_829(s, (&(*Result).minimumWidth), i);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	i += parsedLength;
	{
		NIM_BOOL T34_;
		NI parsedLengthB;
		T34_ = (NIM_BOOL)0;
		T34_ = (i < s.len);
		if (!(T34_)) goto LA35_;
		T34_ = ((NU8)(s.p->data[i]) == (NU8)(46));
		LA35_: ;
		if (!T34_) goto LA36_;
		i += ((NI)1);
		parsedLengthB = parseSaturatedNatural__pureZparseutils_829(s, (&(*Result).precision), i);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		i += parsedLengthB;
	}
	goto LA32_;
	LA36_: ;
	{
		(*Result).precision = ((NI)-1);
	}
	LA32_: ;
	{
		NIM_BOOL T41_;
		T41_ = (NIM_BOOL)0;
		T41_ = (i < s.len);
		if (!(T41_)) goto LA42_;
		T41_ = (((NU8)(s.p->data[i])) >= ((NU8)(65)) && ((NU8)(s.p->data[i])) <= ((NU8)(90)) || ((NU8)(s.p->data[i])) >= ((NU8)(97)) && ((NU8)(s.p->data[i])) <= ((NU8)(122)));
		LA42_: ;
		if (!T41_) goto LA43_;
		(*Result).typ = s.p->data[i];
		i += ((NI)1);
	}
	LA43_: ;
	(*Result).endPosition = i;
	{
		NIM_BOOL T47_;
		NimStringV2 colontmpD_;
		tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw* T52_;
		NimStringV2 T53_;
		tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T54_;
		T47_ = (NIM_BOOL)0;
		T47_ = !((i == s.len));
		if (!(T47_)) goto LA48_;
		T47_ = !(ignoreUnknownSuffix);
		LA48_: ;
		if (!T47_) goto LA49_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		T52_ = NIM_NIL;
		T52_ = (tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw*) nimNewObj(sizeof(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw), NIM_ALIGNOF(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw));
		(*T52_).Sup.Sup.Sup.m_type = (&NTIv2__ke0esfQKJkTSUu9bpZ7VlFw_);
		(*T52_).Sup.Sup.name = "ValueError";
		T53_.len = 0; T53_.p = NIM_NIL;
		T54_ = dotdot___stdZenumutils_128(i, ((NI)1));
		colontmpD_ = X5BX5D___pureZstrutils_1307(s, T54_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA51_;
		T53_ = rawNewString(colontmpD_.len + 37);
appendString((&T53_), TM__qDXzsifTQdn8ucTam9cFp4w_3);
appendString((&T53_), colontmpD_);
		(*T52_).Sup.Sup.message = T53_;
		(*T52_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T52_, "ValueError", "parseStandardFormatSpecifier", "strformat.nim", 472);
goto LA51_;
		{
			LA51_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA49_: ;
	}BeforeRet_: ;
}
static N_INLINE(void, appendChar)(NimStringV2* dest, NIM_CHAR c) {
	(*(*dest).p).data[(*dest).len] = c;
	(*(*dest).p).data[(NI)((*dest).len + ((NI)1))] = 0;
	(*dest).len += ((NI)1);
}
static N_INLINE(NI, runeLen__pureZunicode_7215)(NimStringV2 s) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = nucruneLen((((s).p) ? ((NIM_CHAR*)s.p->data+(((NI)0))) : NIM_NIL), ((s.len-1))-(((NI)0))+1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, runeOffset__pureZunicode_7390)(NimStringV2 s, NI pos, NI start) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = runeOffset__pureZunicode_794((((s).p) ? ((NIM_CHAR*)s.p->data+(((NI)0))) : NIM_NIL), ((s.len-1))-(((NI)0))+1, pos, start);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, validateUtf8__pureZunicode_7387)(NimStringV2 s) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = validateUtf8__pureZunicode_329((((s).p) ? ((NIM_CHAR*)s.p->data+(((NI)0))) : NIM_NIL), ((s.len-1))-(((NI)0))+1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, alignString__pureZstrformat_19)(NimStringV2 s, NI minimumWidth, NIM_CHAR align, NIM_CHAR fill) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	{
		if (!(minimumWidth == ((NI)0))) goto LA3_;
		eqcopy___stdZassertions_16((&result), s);
	}
	goto LA1_;
	LA3_: ;
	{
		NI colontmpD_;
		NI colontmpD__2;
		NI sRuneLen;
		NI toFill;
		colontmpD_ = (NI)0;
		colontmpD__2 = (NI)0;
		{
			NI T8_;
			T8_ = (NI)0;
			T8_ = validateUtf8__pureZunicode_7387(s);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!(T8_ == ((NI)-1))) goto LA9_;
			colontmpD_ = runeLen__pureZunicode_7215(s);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			sRuneLen = colontmpD_;
		}
		goto LA6_;
		LA9_: ;
		{
			colontmpD__2 = s.len;
			sRuneLen = colontmpD__2;
		}
		LA6_: ;
		toFill = (NI)(minimumWidth - sRuneLen);
		{
			if (!(toFill <= ((NI)0))) goto LA14_;
			eqcopy___stdZassertions_16((&result), s);
		}
		goto LA12_;
		LA14_: ;
		{
			NIM_BOOL T17_;
			NimStringV2 colontmpD__3;
			NimStringV2 T21_;
			T17_ = (NIM_BOOL)0;
			T17_ = ((NU8)(align) == (NU8)(60));
			if (T17_) goto LA18_;
			T17_ = ((NU8)(align) == (NU8)(0));
			LA18_: ;
			if (!T17_) goto LA19_;
			colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
			T21_.len = 0; T21_.p = NIM_NIL;
			colontmpD__3 = nsuRepeatChar(fill, ((NI) (toFill)));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			T21_ = rawNewString(s.len + colontmpD__3.len + 0);
appendString((&T21_), s);
appendString((&T21_), colontmpD__3);
			result = T21_;
			eqdestroy___stdZassertions_13((&colontmpD__3));
		}
		goto LA12_;
		LA19_: ;
		{
			NimStringV2 colontmpD__4;
			NimStringV2 colontmpD__5;
			NI half;
			NimStringV2 T25_;
			if (!((NU8)(align) == (NU8)(94))) goto LA23_;
			colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
			colontmpD__5.len = 0; colontmpD__5.p = NIM_NIL;
			half = (NI)(toFill / ((NI)2));
			T25_.len = 0; T25_.p = NIM_NIL;
			colontmpD__4 = nsuRepeatChar(fill, ((NI) (half)));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			colontmpD__5 = nsuRepeatChar(fill, ((NI) ((NI)(toFill - half))));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			T25_ = rawNewString(colontmpD__4.len + s.len + colontmpD__5.len + 0);
appendString((&T25_), colontmpD__4);
appendString((&T25_), s);
appendString((&T25_), colontmpD__5);
			result = T25_;
			eqdestroy___stdZassertions_13((&colontmpD__5));
			eqdestroy___stdZassertions_13((&colontmpD__4));
		}
		goto LA12_;
		LA23_: ;
		{
			NimStringV2 colontmpD__6;
			NimStringV2 T27_;
			colontmpD__6.len = 0; colontmpD__6.p = NIM_NIL;
			T27_.len = 0; T27_.p = NIM_NIL;
			colontmpD__6 = nsuRepeatChar(fill, ((NI) (toFill)));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			T27_ = rawNewString(colontmpD__6.len + s.len + 0);
appendString((&T27_), colontmpD__6);
appendString((&T27_), s);
			result = T27_;
			eqdestroy___stdZassertions_13((&colontmpD__6));
		}
		LA12_: ;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, formatValue__pureZstrformat_170)(NimStringV2* result, NimStringV2 value, NimStringV2 specifier) {
	NimStringV2 value_2;
	NimStringV2 colontmpD_;
	tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ spec;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	value_2.len = 0; value_2.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	nimZeroMem((void*)(&spec), sizeof(tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ));
	parseStandardFormatSpecifier__pureZstrformat_57(specifier, ((NI)0), NIM_FALSE, (&spec));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	eqcopy___stdZassertions_16((&value_2), value);
	switch (((NU8)(spec.typ))) {
	case 115:
	case 0:
	{
	}
	break;
	default:
	{
		tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw* T4_;
		NimStringV2 T5_;
		T4_ = NIM_NIL;
		T4_ = (tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw*) nimNewObj(sizeof(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw), NIM_ALIGNOF(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw));
		(*T4_).Sup.Sup.Sup.m_type = (&NTIv2__ke0esfQKJkTSUu9bpZ7VlFw_);
		(*T4_).Sup.Sup.name = "ValueError";
		T5_.len = 0; T5_.p = NIM_NIL;
		T5_ = rawNewString(65);
appendString((&T5_), TM__qDXzsifTQdn8ucTam9cFp4w_5);
appendChar((&T5_), spec.typ);
		(*T4_).Sup.Sup.message = T5_;
		(*T4_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T4_, "ValueError", "formatValue", "strformat.nim", 562);
goto LA1_;
	}
	break;
	}
	{
		if (!!((spec.precision == ((NI)-1)))) goto LA8_;
		{
			NI T12_;
			NI T15_;
			T12_ = (NI)0;
			T12_ = runeLen__pureZunicode_7215(value_2);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			if (!(spec.precision < T12_)) goto LA13_;
			T15_ = (NI)0;
			T15_ = runeOffset__pureZunicode_7390(value_2, ((NI) (spec.precision)), ((NI)0));
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			setLengthStrV2((&value_2), ((NI) (T15_)));
		}
		LA13_: ;
	}
	LA8_: ;
	colontmpD_ = alignString__pureZstrformat_19(value_2, spec.minimumWidth, spec.align, spec.fill);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	prepareAdd((&(*result)), colontmpD_.len + 0);
appendString((&(*result)), colontmpD_);
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&colontmpD_));
		eqdestroy___stdZassertions_13((&value_2));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(NimStringV2, mkDigit__pureZstrformat_6)(NI v, NIM_CHAR typ) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	{
		if (!(v < ((NI)10))) goto LA3_;
		result = nimCharToStr(((NIM_CHAR) (((NI) ((NI)(((NI)48) + v))))));
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_CHAR colontmpD_;
		NIM_CHAR colontmpD__2;
		NIM_CHAR T6_;
		colontmpD_ = (NIM_CHAR)0;
		colontmpD__2 = (NIM_CHAR)0;
		T6_ = (NIM_CHAR)0;
		{
			if (!((NU8)(typ) == (NU8)(120))) goto LA9_;
			colontmpD_ = 97;
			T6_ = colontmpD_;
		}
		goto LA7_;
		LA9_: ;
		{
			colontmpD__2 = 65;
			T6_ = colontmpD__2;
		}
		LA7_: ;
		result = nimCharToStr(((NIM_CHAR) (((NI) ((NI)((NI)(((NU8)(T6_)) + v) - ((NI)10)))))));
	}
	LA1_: ;
	return result;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI)1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI)1))] = 0;
	(*s).len += ((NI)1);
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, formatInt__pureZterminal_218)(NI n, NI radix, tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ* spec) {
	NimStringV2 result;
	NU64 colontmpD_;
	NU64 colontmpD__2;
	NimStringV2 xx;
	NI64 n_2;
	NIM_BOOL negative;
	NU64 v;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	colontmpD_ = (NU64)0;
	colontmpD__2 = (NU64)0;
	xx.len = 0; xx.p = NIM_NIL;
	n_2 = ((NI64) (n));
	negative = (n_2 < IL64(0));
	{
		if (!negative) goto LA3_;
		colontmpD_ = (NU64)((NU64)(((NU64) ((NI64)((NU64) ~(n_2))))) + (NU64)(1ULL));
		v = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = ((NU64) (n_2));
		v = colontmpD__2;
	}
	LA1_: ;
	xx = TM__qDXzsifTQdn8ucTam9cFp4w_9;
	{
		if (!(*spec).alternateForm) goto LA8_;
		switch (((NU8)((*spec).typ))) {
		case 88:
		{
			xx = TM__qDXzsifTQdn8ucTam9cFp4w_11;
		}
		break;
		case 120:
		{
			xx = TM__qDXzsifTQdn8ucTam9cFp4w_12;
		}
		break;
		case 98:
		{
			xx = TM__qDXzsifTQdn8ucTam9cFp4w_14;
		}
		break;
		case 111:
		{
			xx = TM__qDXzsifTQdn8ucTam9cFp4w_16;
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA8_: ;
	{
		if (!(v == 0ULL)) goto LA17_;
		result = TM__qDXzsifTQdn8ucTam9cFp4w_18;
	}
	goto LA15_;
	LA17_: ;
	{
		result = TM__qDXzsifTQdn8ucTam9cFp4w_19;
		{
			while (1) {
				NimStringV2 colontmpD__3;
				NU64 d;
				if (!((NU64)(0ULL) < (NU64)(v))) goto LA21				;
				colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
				d = (NU64)((NU64)(v) % (NU64)(((NU64) (radix))));
				v = (NU64)((NU64)(v) / (NU64)(((NU64) (radix))));
				colontmpD__3 = mkDigit__pureZstrformat_6(((NI) (d)), (*spec).typ);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				prepareAdd((&result), colontmpD__3.len + 0);
appendString((&result), colontmpD__3);
				eqdestroy___stdZassertions_13((&colontmpD__3));
			} LA21: ;
		}
		{
			NI idx;
			NI colontmp_;
			NI i;
			idx = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (NI)(result.len / ((NI)2));
			i = ((NI)0);
			{
				while (1) {
					NIM_CHAR T25_;
					if (!(i < colontmp_)) goto LA24					;
					idx = i;
					nimPrepareStrMutationV2((&result));
					nimPrepareStrMutationV2((&result));
					T25_ = (NIM_CHAR)0;
					T25_ = result.p->data[idx];
					result.p->data[idx] = result.p->data[(NI)((NI)(result.len - idx) - ((NI)1))];
					result.p->data[(NI)((NI)(result.len - idx) - ((NI)1))] = T25_;
					i += ((NI)1);
				} LA24: ;
			}
		}
	}
	LA15_: ;
	{
		NIM_BOOL sign;
		NIM_BOOL T30_;
		NI toFill;
		if (!(*spec).padWithZero) goto LA28_;
		T30_ = (NIM_BOOL)0;
		T30_ = negative;
		if (T30_) goto LA31_;
		T30_ = !(((NU8)((*spec).sign) == (NU8)(45)));
		LA31_: ;
		sign = T30_;
		toFill = (NI)((NI)((NI)((*spec).minimumWidth - result.len) - xx.len) - sign);
		{
			NimStringV2 colontmpD__4;
			NimStringV2 T36_;
			if (!(((NI)0) < toFill)) goto LA34_;
			colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
			T36_.len = 0; T36_.p = NIM_NIL;
			colontmpD__4 = nsuRepeatChar(48, ((NI) (toFill)));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			T36_ = rawNewString(colontmpD__4.len + result.len + 0);
appendString((&T36_), colontmpD__4);
appendString((&T36_), result);
			eqsink___stdZassertions_19((&result), T36_);
			eqdestroy___stdZassertions_13((&colontmpD__4));
		}
		LA34_: ;
	}
	LA28_: ;
	{
		NimStringV2 T41_;
		if (!negative) goto LA39_;
		T41_.len = 0; T41_.p = NIM_NIL;
		T41_ = rawNewString(xx.len + result.len + 1);
appendString((&T41_), TM__qDXzsifTQdn8ucTam9cFp4w_21);
appendString((&T41_), xx);
appendString((&T41_), result);
		eqsink___stdZassertions_19((&result), T41_);
	}
	goto LA37_;
	LA39_: ;
	{
		NimStringV2 T45_;
		if (!!(((NU8)((*spec).sign) == (NU8)(45)))) goto LA43_;
		T45_.len = 0; T45_.p = NIM_NIL;
		T45_ = rawNewString(xx.len + result.len + 1);
appendChar((&T45_), (*spec).sign);
appendString((&T45_), xx);
appendString((&T45_), result);
		eqsink___stdZassertions_19((&result), T45_);
	}
	goto LA37_;
	LA43_: ;
	{
		NimStringV2 T47_;
		T47_.len = 0; T47_.p = NIM_NIL;
		T47_ = rawNewString(xx.len + result.len + 0);
appendString((&T47_), xx);
appendString((&T47_), result);
		eqsink___stdZassertions_19((&result), T47_);
	}
	LA37_: ;
	{
		if (!((NU8)((*spec).align) == (NU8)(60))) goto LA50_;
		{
			NI i_2;
			NI colontmp__2;
			NI i_3;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = result.len;
			i_3 = colontmp__2;
			{
				while (1) {
					if (!(i_3 < (*spec).minimumWidth)) goto LA54					;
					i_2 = i_3;
					nimAddCharV1((&result), (*spec).fill);
					i_3 += ((NI)1);
				} LA54: ;
			}
		}
	}
	goto LA48_;
	LA50_: ;
	{
		NI toFill_2;
		toFill_2 = (NI)((*spec).minimumWidth - result.len);
		{
			NimStringV2 colontmpD__5;
			NimStringV2 colontmpD__6;
			NI half;
			NimStringV2 T60_;
			if (!((NU8)((*spec).align) == (NU8)(94))) goto LA58_;
			colontmpD__5.len = 0; colontmpD__5.p = NIM_NIL;
			colontmpD__6.len = 0; colontmpD__6.p = NIM_NIL;
			half = (NI)(toFill_2 / ((NI)2));
			T60_.len = 0; T60_.p = NIM_NIL;
			colontmpD__5 = nsuRepeatChar((*spec).fill, ((NI) (half)));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			colontmpD__6 = nsuRepeatChar((*spec).fill, ((NI) ((NI)(toFill_2 - half))));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			T60_ = rawNewString(colontmpD__5.len + result.len + colontmpD__6.len + 0);
appendString((&T60_), colontmpD__5);
appendString((&T60_), result);
appendString((&T60_), colontmpD__6);
			eqsink___stdZassertions_19((&result), T60_);
			eqdestroy___stdZassertions_13((&colontmpD__6));
			eqdestroy___stdZassertions_13((&colontmpD__5));
		}
		goto LA56_;
		LA58_: ;
		{
			{
				NimStringV2 colontmpD__7;
				NimStringV2 T66_;
				if (!(((NI)0) < toFill_2)) goto LA64_;
				colontmpD__7.len = 0; colontmpD__7.p = NIM_NIL;
				T66_.len = 0; T66_.p = NIM_NIL;
				colontmpD__7 = nsuRepeatChar((*spec).fill, ((NI) (toFill_2)));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				T66_ = rawNewString(colontmpD__7.len + result.len + 0);
appendString((&T66_), colontmpD__7);
appendString((&T66_), result);
				eqsink___stdZassertions_19((&result), T66_);
				eqdestroy___stdZassertions_13((&colontmpD__7));
			}
			LA64_: ;
		}
		LA56_: ;
	}
	LA48_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, formatValue__pureZterminal_210)(NimStringV2* result, NI value, NimStringV2 specifier) {
	NimStringV2 colontmpD_;
	tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ spec;
	NI radix;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	{
		NimStringV2 colontmpD__2;
		if (!(specifier.len == ((NI)0))) goto LA4_;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		colontmpD__2 = dollar___systemZdollars_3(value);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		prepareAdd((&(*result)), colontmpD__2.len + 0);
appendString((&(*result)), colontmpD__2);
		eqdestroy___stdZassertions_13((&colontmpD__2));
		eqdestroy___stdZassertions_13((&colontmpD_));
		goto BeforeRet_;
		{
			LA6_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD__2));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA4_: ;
	nimZeroMem((void*)(&spec), sizeof(tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ));
	parseStandardFormatSpecifier__pureZstrformat_57(specifier, ((NI)0), NIM_FALSE, (&spec));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	radix = ((NI)10);
	switch (((NU8)(spec.typ))) {
	case 120:
	case 88:
	{
		radix = ((NI)16);
	}
	break;
	case 100:
	case 0:
	{
	}
	break;
	case 98:
	{
		radix = ((NI)2);
	}
	break;
	case 111:
	{
		radix = ((NI)8);
	}
	break;
	default:
	{
		tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw* T14_;
		NimStringV2 T15_;
		T14_ = NIM_NIL;
		T14_ = (tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw*) nimNewObj(sizeof(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw), NIM_ALIGNOF(tyObject_ValueError__ke0esfQKJkTSUu9bpZ7VlFw));
		(*T14_).Sup.Sup.Sup.m_type = (&NTIv2__ke0esfQKJkTSUu9bpZ7VlFw_);
		(*T14_).Sup.Sup.name = "ValueError";
		T15_.len = 0; T15_.p = NIM_NIL;
		T15_ = rawNewString(93);
appendString((&T15_), TM__qDXzsifTQdn8ucTam9cFp4w_7);
appendChar((&T15_), spec.typ);
		(*T14_).Sup.Sup.message = T15_;
		(*T14_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T14_, "ValueError", "formatValue", "strformat.nim", 491);
goto LA1_;
	}
	break;
	}
	colontmpD_ = formatInt__pureZterminal_218(value, radix, (&spec));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	prepareAdd((&(*result)), colontmpD_.len + 0);
appendString((&(*result)), colontmpD_);
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&colontmpD_));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
