/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdlib.h>
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
typedef struct tySequence__4eQHGndY6XBYpFOH09apV8Q tySequence__4eQHGndY6XBYpFOH09apV8Q;
typedef struct tySequence__4eQHGndY6XBYpFOH09apV8Q_Content tySequence__4eQHGndY6XBYpFOH09apV8Q_Content;
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
struct tySequence__4eQHGndY6XBYpFOH09apV8Q {
  NI len; tySequence__4eQHGndY6XBYpFOH09apV8Q_Content* p;
};


#ifndef tySequence__4eQHGndY6XBYpFOH09apV8Q_Content_PP
#define tySequence__4eQHGndY6XBYpFOH09apV8Q_Content_PP
struct tySequence__4eQHGndY6XBYpFOH09apV8Q_Content { NI cap; tyTuple__UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NCSTRING, getEnvImpl__stdZenvvars_12)(NCSTRING env);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
static N_INLINE(NIM_BOOL, eqeq___system_7516)(NCSTRING x, NCSTRING y);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_82)(NI32 errorCode, NimStringV2 additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_85)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZoscommon_78)(tyTuple__UV3llMMYFckfui8YMBuUZA* x);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, alignedDealloc)(void* p, NI align);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZenvvars_85)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest);
N_LIB_PRIVATE N_NIMCALL(void, setLen__stdZenvvars_102)(tySequence__4eQHGndY6XBYpFOH09apV8Q* s, NI newlen);
extern NCSTRING* environ;
extern NIM_BOOL nimInErrorMode__system_3994;
N_LIB_PRIVATE N_NIMCALL(NCSTRING, getEnvImpl__stdZenvvars_12)(NCSTRING env) {
	NCSTRING result;
	result = (NCSTRING)0;
	result = getenv(env);
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
static N_INLINE(NIM_BOOL, eqeq___system_7516)(NCSTRING x, NCSTRING y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32)0));
	}
	LA1_: ;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3994);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getEnv__stdZenvvars_15)(NimStringV2 key, NimStringV2 default_0) {
	NimStringV2 result;
	NCSTRING env;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	env = getEnvImpl__stdZenvvars_12(nimToCStringConv(key));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = eqeq___system_7516(env, ((NCSTRING) NIM_NIL));
		if (!T3_) goto LA4_;
		eqcopy___stdZassertions_16((&result), default_0);
		goto BeforeRet_;
	}
	LA4_: ;
	result = cstrToNimstr(env);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, putEnv__stdZenvvars_23)(NimStringV2 key, NimStringV2 val) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		int T3_;
		NimStringV2 colontmpD_;
		NI32 T7_;
		tyTuple__UV3llMMYFckfui8YMBuUZA T8_;
		T3_ = (int)0;
		T3_ = setenv(nimToCStringConv(key), nimToCStringConv(val), ((NI32)1));
		if (!!((T3_ == ((NI32)0)))) goto LA4_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		T7_ = (NI32)0;
		T7_ = osLastError__stdZoserrors_85();
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		T8_.Field0 = key;
		T8_.Field1 = val;
		colontmpD_ = dollar___stdZprivateZoscommon_78((&T8_));
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		raiseOSError__stdZoserrors_82(T7_, colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		{
			LA6_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, existsEnv__stdZenvvars_20)(NimStringV2 key) {
	NIM_BOOL result;
	NCSTRING T1_;
	NIM_BOOL T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (NCSTRING)0;
	T1_ = getEnvImpl__stdZenvvars_12(nimToCStringConv(key));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NIM_BOOL)0;
	T2_ = eqeq___system_7516(T1_, ((NCSTRING) NIM_NIL));
	result = !(T2_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, delEnv__stdZenvvars_29)(NimStringV2 key) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		int T3_;
		NI32 T6_;
		T3_ = (int)0;
		T3_ = unsetenv(nimToCStringConv(key));
		if (!!((T3_ == ((NI32)0)))) goto LA4_;
		T6_ = (NI32)0;
		T6_ = osLastError__stdZoserrors_85();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseOSError__stdZoserrors_82(T6_, key);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZenvvars_85)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest) {
	NI colontmp_;
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T3_;
			T3_ = (*dest).len;
			if (!(colontmp_ < T3_)) goto LA2			;
			eqdestroy___stdZassertions_13((&(*dest).p->data[colontmp_].Field0));
			eqdestroy___stdZassertions_13((&(*dest).p->data[colontmp_].Field1));
			colontmp_ += ((NI)1);
		} LA2: ;
	}
	if ((*dest).p && !((*dest).p->cap & NIM_STRLIT_FLAG)) {
 alignedDealloc((*dest).p, NIM_ALIGNOF(tyTuple__UV3llMMYFckfui8YMBuUZA));
}
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZenvvars_91)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest, tySequence__4eQHGndY6XBYpFOH09apV8Q src) {
	if ((*dest).p != src.p) {	eqdestroy___stdZenvvars_85(dest);
	}
(*dest).len = src.len; (*dest).p = src.p;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZenvvars_94)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest, void* env) {
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZenvvars_88)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest, tySequence__4eQHGndY6XBYpFOH09apV8Q src) {
	NI T1_;
	NI colontmp_;
	T1_ = src.len;
	setLen__stdZenvvars_102((&(*dest)), T1_);
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T4_;
			T4_ = (*dest).len;
			if (!(colontmp_ < T4_)) goto LA3			;
			eqcopy___stdZassertions_16((&(*dest).p->data[colontmp_].Field0), src.p->data[colontmp_].Field0);
			eqcopy___stdZassertions_16((&(*dest).p->data[colontmp_].Field1), src.p->data[colontmp_].Field1);
			colontmp_ += ((NI)1);
		} LA3: ;
	}
}
