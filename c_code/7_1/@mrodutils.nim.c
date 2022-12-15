/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <math.h>
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
typedef NU8 tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA;
N_LIB_PRIVATE N_NIMCALL(tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA, classify__pureZmath_151)(NF x);
static N_INLINE(NIM_BOOL, signbit__astalgo_921)(NF x);
N_LIB_PRIVATE N_NIMCALL(void, addFloatRoundtrip__system_4375)(NimStringV2* result, NF x);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NIM_BOOL, signbit__cgen_18090)(NF32 x);
N_LIB_PRIVATE N_NIMCALL(void, addFloatRoundtrip__cgen_18097)(NimStringV2* result, NF32 x);
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_2 = { 4 | NIM_STRLIT_FLAG, "-NAN" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_3 = {4, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_2};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_4 = { 3 | NIM_STRLIT_FLAG, "NAN" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_5 = {3, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_4};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_6 = { 4 | NIM_STRLIT_FLAG, "-0.0" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_7 = {4, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_6};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_8 = { 3 | NIM_STRLIT_FLAG, "0.0" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_9 = {3, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_8};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_10 = { 3 | NIM_STRLIT_FLAG, "INF" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_11 = {3, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_10};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_12 = { 4 | NIM_STRLIT_FLAG, "-INF" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_13 = {4, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_12};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_14 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_15 = {0, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_14};
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_16 = {4, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_2};
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_17 = {3, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_4};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_18 = { 5 | NIM_STRLIT_FLAG, "-0.0f" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_19 = {5, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_18};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_20 = { 4 | NIM_STRLIT_FLAG, "0.0f" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_21 = {4, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_20};
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_22 = {3, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_10};
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_23 = {4, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_12};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_24 = { 1 | NIM_STRLIT_FLAG, "f" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_25 = {1, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_24};
extern NIM_BOOL nimInErrorMode__system_3978;
static N_INLINE(NIM_BOOL, signbit__astalgo_921)(NF x) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = signbit(x);
	result = !((T1_ == ((NI32)0)));
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
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3978);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toStrMaxPrecision__astalgo_915)(NF f) {
	NimStringV2 result;
	tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	T1_ = (tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)0;
	T1_ = classify__pureZmath_151(f);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	switch (T1_) {
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)4):
	{
		{
			NIM_BOOL T5_;
			T5_ = (NIM_BOOL)0;
			T5_ = signbit__astalgo_921(f);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T5_) goto LA6_;
			result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_3;
		}
		goto LA3_;
		LA6_: ;
		{
			result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_5;
		}
		LA3_: ;
	}
	break;
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)3):
	{
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_7;
	}
	break;
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)2):
	{
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_9;
	}
	break;
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)5):
	{
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_11;
	}
	break;
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)6):
	{
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_13;
	}
	break;
	default:
	{
		addFloatRoundtrip__system_4375((&result), f);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		prepareAdd((&result), 0);
appendString((&result), TM__qENY1F9aF8k8WjeLE9cUs6Mw_15);
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL, signbit__cgen_18090)(NF32 x) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = signbit(x);
	result = !((T1_ == ((NI32)0)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toStrMaxPrecision__cgen_18084)(NF32 f) {
	NimStringV2 result;
	tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	T1_ = (tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)0;
	T1_ = classify__pureZmath_151(((NF) (f)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	switch (T1_) {
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)4):
	{
		{
			NIM_BOOL T5_;
			T5_ = (NIM_BOOL)0;
			T5_ = signbit__cgen_18090(f);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T5_) goto LA6_;
			result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_16;
		}
		goto LA3_;
		LA6_: ;
		{
			result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_17;
		}
		LA3_: ;
	}
	break;
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)3):
	{
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_19;
	}
	break;
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)2):
	{
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_21;
	}
	break;
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)5):
	{
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_22;
	}
	break;
	case ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)6):
	{
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_23;
	}
	break;
	default:
	{
		addFloatRoundtrip__cgen_18097((&result), f);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		prepareAdd((&result), 1);
appendString((&result), TM__qENY1F9aF8k8WjeLE9cUs6Mw_25);
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
