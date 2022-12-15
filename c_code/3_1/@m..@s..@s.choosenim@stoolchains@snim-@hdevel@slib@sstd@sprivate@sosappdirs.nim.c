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
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getEnv__stdZenvvars_15)(NimStringV2 key, NimStringV2 default_0);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NimStringV2, slash___stdZprivateZospaths50_91)(NimStringV2 head, NimStringV2 tail);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosjoinPath)(NimStringV2 head, NimStringV2 tail);
N_LIB_PRIVATE N_NIMCALL(void, normalizePathEnd__stdZprivateZospaths50_23)(NimStringV2* path, NIM_BOOL trailingSep);
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__XnRPlAiwKKY6TokjvYVCvw_2 = { 4 | NIM_STRLIT_FLAG, "HOME" };
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_3 = {4, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_2};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__XnRPlAiwKKY6TokjvYVCvw_4 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_5 = {0, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__XnRPlAiwKKY6TokjvYVCvw_6 = { 1 | NIM_STRLIT_FLAG, "/" };
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_7 = {1, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_6};
static const struct {
  NI cap; NIM_CHAR data[15+1];
} TM__XnRPlAiwKKY6TokjvYVCvw_8 = { 15 | NIM_STRLIT_FLAG, "XDG_CONFIG_HOME" };
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_9 = {15, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_8};
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_10 = {4, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_2};
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_11 = {0, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_4};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__XnRPlAiwKKY6TokjvYVCvw_12 = { 7 | NIM_STRLIT_FLAG, ".config" };
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_13 = {7, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_12};
extern NIM_BOOL nimInErrorMode__system_3980;
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
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosgetHomeDir)(void) {
	NimStringV2 result;
	NimStringV2 colontmpD_;
	NimStringV2 T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	T2_.len = 0; T2_.p = NIM_NIL;
	colontmpD_ = getEnv__stdZenvvars_15(TM__XnRPlAiwKKY6TokjvYVCvw_3, TM__XnRPlAiwKKY6TokjvYVCvw_5);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T2_ = rawNewString(colontmpD_.len + 1);
appendString((&T2_), colontmpD_);
appendString((&T2_), TM__XnRPlAiwKKY6TokjvYVCvw_7);
	result = T2_;
	eqdestroy___stdZassertions_13((&colontmpD_));
	goto BeforeRet_;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&colontmpD_));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NimStringV2, slash___stdZprivateZospaths50_91)(NimStringV2 head, NimStringV2 tail) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = nosjoinPath(head, tail);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosgetConfigDir)(void) {
	NimStringV2 result;
	NimStringV2 colontmpD_;
	NimStringV2 colontmpD__2;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	colontmpD_ = getEnv__stdZenvvars_15(TM__XnRPlAiwKKY6TokjvYVCvw_10, TM__XnRPlAiwKKY6TokjvYVCvw_11);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	colontmpD__2 = slash___stdZprivateZospaths50_91(colontmpD_, TM__XnRPlAiwKKY6TokjvYVCvw_13);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = getEnv__stdZenvvars_15(TM__XnRPlAiwKKY6TokjvYVCvw_9, colontmpD__2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	normalizePathEnd__stdZprivateZospaths50_23((&result), NIM_TRUE);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___stdZassertions_13((&colontmpD__2));
	eqdestroy___stdZassertions_13((&colontmpD_));
	}BeforeRet_: ;
	return result;
}
