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
typedef struct tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg;
typedef struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
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
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg {
  RootObj Sup;
NI bufpos;
NimStringV2 buf;
tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars;
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___pureZstreams_616)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ** dest, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* src, NIM_BOOL cyclic);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_NIMCALL(NimStringV2, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__pureZlexbase_17)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L);
static N_INLINE(void, moveMem__system_1723)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, readDataStr__pureZstreams_85)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___stdZstrbasics_49)(NI a, NI b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom__pureZlexbase_119)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L);
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__pureZlexbase_73)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, close__pureZstreams_58)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
extern NIM_BOOL nimInErrorMode__system_3978;
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, moveMem__system_1723)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memmove(dest, source, ((size_t) (size)));
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3978);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int)0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___stdZstrbasics_49)(NI a, NI b) {
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !(((*s).p == ((NimStrPayload*) NIM_NIL)));
		if (!(T3_)) goto LA4_;
		T3_ = ((NI)((*(*s).p).cap & ((NI)1073741824)) == ((NI)1073741824));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimPrepareStrMutationImpl__system_2301(s);
	}
	LA5_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__pureZlexbase_17)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {
	NI charsRead;
	NI toCopy;
	NI s;
	NI oldBufLen;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* T6_;
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T7_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	charsRead = (NI)0;
	toCopy = (NI)0;
	s = (NI)0;
	oldBufLen = (NI)0;
	toCopy = (NI)((*L).buf.len - (NI)((*L).sentinel + ((NI)1)));
	{
		void* T5_;
		if (!(((NI)0) < toCopy)) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*L).buf.p->data[((NI)0)])));
		moveMem__system_1723(T5_, ((void*) ((&(*L).buf.p->data[(NI)((*L).sentinel + ((NI)1))]))), ((NI) (toCopy)));
	}
	LA3_: ;
	T6_ = NIM_NIL;
	T6_ = (*L).input;
	T7_ = dotdot___stdZstrbasics_49(toCopy, (NI)((NI)((NI)(toCopy + (*L).sentinel) + ((NI)1)) - ((NI)1)));
	charsRead = readDataStr__pureZstreams_85(T6_, (&(*L).buf), T7_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	s = (NI)(toCopy + charsRead);
	{
		if (!(charsRead < (NI)((*L).sentinel + ((NI)1)))) goto LA10_;
		nimPrepareStrMutationV2((&(*L).buf));
		(*L).buf.p->data[s] = 0;
		(*L).sentinel = s;
	}
	goto LA8_;
	LA10_: ;
	{
		s -= ((NI)1);
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL T17_;
						T17_ = (NIM_BOOL)0;
						T17_ = (((NI)0) <= s);
						if (!(T17_)) goto LA18_;
						T17_ = !((((*L).refillChars[(NU)((((NU8)((*L).buf.p->data[s]))))>>3] &(1U<<((NU)((((NU8)((*L).buf.p->data[s]))))&7U)))!=0));
						LA18_: ;
						if (!T17_) goto LA16						;
						s -= ((NI)1);
					} LA16: ;
				}
				{
					if (!(((NI)0) <= s)) goto LA21_;
					(*L).sentinel = s;
					goto LA13;
				}
				goto LA19_;
				LA21_: ;
				{
					tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* T24_;
					tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T25_;
					oldBufLen = (*L).buf.len;
					setLengthStrV2((&(*L).buf), ((NI) ((NI)((*L).buf.len * ((NI)2)))));
					T24_ = NIM_NIL;
					T24_ = (*L).input;
					T25_ = dotdot___stdZstrbasics_49(oldBufLen, (NI)((*L).buf.len - ((NI)1)));
					charsRead = readDataStr__pureZstreams_85(T24_, (&(*L).buf), T25_);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					{
						if (!(charsRead < oldBufLen)) goto LA28_;
						nimPrepareStrMutationV2((&(*L).buf));
						(*L).buf.p->data[(NI)(oldBufLen + charsRead)] = 0;
						(*L).sentinel = (NI)(oldBufLen + charsRead);
						goto LA13;
					}
					LA28_: ;
					s = (NI)((*L).buf.len - ((NI)1));
				}
				LA19_: ;
			}
		} LA13: ;
	}
	LA8_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom__pureZlexbase_119)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = ((NU8)((*L).buf.p->data[((NI)0)]) == (NU8)(239));
		if (!(T4_)) goto LA5_;
		T4_ = ((NU8)((*L).buf.p->data[((NI)1)]) == (NU8)(187));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		T3_ = ((NU8)((*L).buf.p->data[((NI)2)]) == (NU8)(191));
		LA6_: ;
		if (!T3_) goto LA7_;
		(*L).bufpos += ((NI)3);
		(*L).lineStart += ((NI)3);
	}
	LA7_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, open__pureZlexbase_131)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input, NI bufLen, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars) {
	NimStringV2 T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	eqcopy___pureZstreams_616(&(*L).input, input, NIM_TRUE);
	(*L).bufpos = ((NI)0);
	(*L).offsetBase = ((NI)0);
	nimCopyMem((void*)(*L).refillChars, (NIM_CONST void*)refillChars, 32);
	T1_.len = 0; T1_.p = NIM_NIL;
	T1_ = mnewString(((NI) (bufLen)));
	eqsink___stdZassertions_19((&(*L).buf), T1_);
	(*L).sentinel = (NI)(bufLen - ((NI)1));
	(*L).lineStart = ((NI)0);
	(*L).lineNumber = ((NI)1);
	fillBuffer__pureZlexbase_17(L);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	skipUtf8Bom__pureZlexbase_119(L);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__pureZlexbase_73)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if (!(pos < (*L).sentinel)) goto LA3_;
		result = (NI)(pos + ((NI)1));
	}
	goto LA1_;
	LA3_: ;
	{
		fillBuffer__pureZlexbase_17(L);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*L).offsetBase += pos;
		(*L).bufpos = ((NI)0);
		result = ((NI)0);
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleCR__pureZlexbase_84)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	(*L).lineNumber += ((NI)1);
	result = fillBaseLexer__pureZlexbase_73(L, pos);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!((NU8)((*L).buf.p->data[result]) == (NU8)(10))) goto LA3_;
		result = fillBaseLexer__pureZlexbase_73(L, result);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	(*L).lineStart = result;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleLF__pureZlexbase_96)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	(*L).lineNumber += ((NI)1);
	result = fillBaseLexer__pureZlexbase_73(L, pos);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*L).lineStart = result;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, getColNumber__pureZlexbase_146)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	result = (NI)0;
	result = ((NI)(pos - (*L).lineStart) > 0? ((NI)(pos - (*L).lineStart)) : -((NI)(pos - (*L).lineStart)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, close__pureZlexbase_15)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	close__pureZstreams_58((*L).input);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
