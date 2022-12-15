/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 32
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
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
typedef struct tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
typedef NU8 tyArray__YtcvxHNKV4YiecPE9ap1mcA[20];
typedef NU32 tyArray__xsE8WL1yT5DKfrMdYB89bYA[5];
typedef NU8 tyArray__w5VB8h5K8DB3oWrO5U2wqg[64];
struct tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow {
NI count;
tyArray__xsE8WL1yT5DKfrMdYB89bYA state;
tyArray__w5VB8h5K8DB3oWrO5U2wqg buf;
};
typedef NU32 tyArray__BhDmUZcWSpYFIy5J8Xi8mQ[80];
typedef NIM_CHAR tyArray__1NlJ8ipZDU6GZ9bDFAyQjfQ[8];
typedef NU8 tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg;
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, allCharsInSet__pureZstrutils_1495)(NimStringV2 s, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw theSet);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, newSha1State__stdZsha49_11)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* Result);
N_LIB_PRIVATE N_NIMCALL(void, update__stdZsha49_775)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx, NIM_CHAR* data, NI dataLen_0);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, transform__stdZsha49_19)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx);
static N_INLINE(void, bigEndian32__pureZendians_65)(void* outp, void* inp);
static N_INLINE(void, swapEndian32__pureZendians_25)(void* outp, void* inp);
N_LIB_PRIVATE N_NIMCALL(void, finalize__stdZsha49_822)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result);
static N_INLINE(void, bigEndian64__pureZendians_62)(void* outp, void* inp);
static N_INLINE(void, swapEndian64__pureZendians_13)(void* outp, void* inp);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toHex__pureZstrutils_1991)(NI x, NI len);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(FILE*, open__stdZsyncio_447)(NimStringV2 filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode, NI bufSize);
N_NIMCALL(NimStringV2, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, readChars__stdZsyncio_167)(FILE* f, NIM_CHAR* a, NI aLen_0);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, close__stdZsyncio_242)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NI, nsuParseHexInt)(NimStringV2 s);
static N_INLINE(void, appendChar)(NimStringV2* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___stdZsha49_950)(tyArray__YtcvxHNKV4YiecPE9ap1mcA x, tyArray__YtcvxHNKV4YiecPE9ap1mcA y);
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__SpWH4VocI3fFoiOGE4MzWw_2 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x03,
0x7e, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__SpWH4VocI3fFoiOGE4MzWw_3 = { 1 | NIM_STRLIT_FLAG, "\200" };
static const NimStringV2 TM__SpWH4VocI3fFoiOGE4MzWw_4 = {1, (NimStrPayload*)&TM__SpWH4VocI3fFoiOGE4MzWw_3};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__SpWH4VocI3fFoiOGE4MzWw_5 = { 1 | NIM_STRLIT_FLAG, "\000" };
static const NimStringV2 TM__SpWH4VocI3fFoiOGE4MzWw_6 = {1, (NimStrPayload*)&TM__SpWH4VocI3fFoiOGE4MzWw_5};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__SpWH4VocI3fFoiOGE4MzWw_7 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__SpWH4VocI3fFoiOGE4MzWw_8 = {0, (NimStrPayload*)&TM__SpWH4VocI3fFoiOGE4MzWw_7};
extern NIM_BOOL nimInErrorMode__system_3978;
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3978);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isValidSha1Hash__stdZsha49_976)(NimStringV2 s) {
	NIM_BOOL result;
	NIM_BOOL T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (s.len == ((NI)40));
	if (!(T1_)) goto LA2_;
	T1_ = allCharsInSet__pureZstrutils_1495(s, TM__SpWH4VocI3fFoiOGE4MzWw_2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	LA2_: ;
	result = T1_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int)0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, newSha1State__stdZsha49_11)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* Result) {
	nimZeroMem((void*)Result, sizeof(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow));
	(*Result).count = ((NI)0);
	(*Result).state[(((NI)0))- 0] = ((NU32)1732584193);
	(*Result).state[(((NI)1))- 0] = ((NU32)IL64(4023233417));
	(*Result).state[(((NI)2))- 0] = ((NU32)IL64(2562383102));
	(*Result).state[(((NI)3))- 0] = ((NU32)271733878);
	(*Result).state[(((NI)4))- 0] = ((NU32)IL64(3285377520));
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, swapEndian32__pureZendians_25)(void* outp, void* inp) {
	NU32 tmpX60gensym1_;
	tmpX60gensym1_ = (NU32)0;
	copyMem__system_1719(((void*) ((&tmpX60gensym1_))), inp, ((NI)4));
	tmpX60gensym1_ = __builtin_bswap32(tmpX60gensym1_);
	copyMem__system_1719(outp, ((void*) ((&tmpX60gensym1_))), ((NI)4));
}
static N_INLINE(void, bigEndian32__pureZendians_65)(void* outp, void* inp) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	swapEndian32__pureZendians_25(outp, inp);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, transform__stdZsha49_19)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx) {
	tyArray__BhDmUZcWSpYFIy5J8Xi8mQ w;
	NU32 a;
	NU32 b;
	NU32 c;
	NU32 d;
	NU32 e;
	NI t;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)w, sizeof(tyArray__BhDmUZcWSpYFIy5J8Xi8mQ));
	a = (NU32)0;
	b = (NU32)0;
	c = (NU32)0;
	d = (NU32)0;
	e = (NU32)0;
	t = ((NI)0);
	a = (*ctx).state[(((NI)0))- 0];
	b = (*ctx).state[(((NI)1))- 0];
	c = (*ctx).state[(((NI)2))- 0];
	d = (*ctx).state[(((NI)3))- 0];
	e = (*ctx).state[(((NI)4))- 0];
	{
		while (1) {
			if (!(t < ((NI)15))) goto LA2			;
			bigEndian32__pureZendians_65(((void*) ((&w[((NI)(t + ((NI)0)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI)0)) * ((NI)4)))- 0]))));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU32)(((NI)27))) | (NU32)((NU32)(a) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)0)))- 0]))) + (NU32)((NU32)(d ^ (NU32)(b & (NU32)(c ^ d)))))) + (NU32)(((NU32)1518500249)));
			b = (NU32)((NU32)((NU32)(b) >> (NU32)(((NI)2))) | (NU32)((NU32)(b) << (NU32)(((NI)30))));
			bigEndian32__pureZendians_65(((void*) ((&w[((NI)(t + ((NI)1)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI)1)) * ((NI)4)))- 0]))));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU32)(((NI)27))) | (NU32)((NU32)(e) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)1)))- 0]))) + (NU32)((NU32)(c ^ (NU32)(a & (NU32)(b ^ c)))))) + (NU32)(((NU32)1518500249)));
			a = (NU32)((NU32)((NU32)(a) >> (NU32)(((NI)2))) | (NU32)((NU32)(a) << (NU32)(((NI)30))));
			bigEndian32__pureZendians_65(((void*) ((&w[((NI)(t + ((NI)2)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI)2)) * ((NI)4)))- 0]))));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU32)(((NI)27))) | (NU32)((NU32)(d) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)2)))- 0]))) + (NU32)((NU32)(b ^ (NU32)(e & (NU32)(a ^ b)))))) + (NU32)(((NU32)1518500249)));
			e = (NU32)((NU32)((NU32)(e) >> (NU32)(((NI)2))) | (NU32)((NU32)(e) << (NU32)(((NI)30))));
			bigEndian32__pureZendians_65(((void*) ((&w[((NI)(t + ((NI)3)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI)3)) * ((NI)4)))- 0]))));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU32)(((NI)27))) | (NU32)((NU32)(c) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)3)))- 0]))) + (NU32)((NU32)(a ^ (NU32)(d & (NU32)(e ^ a)))))) + (NU32)(((NU32)1518500249)));
			d = (NU32)((NU32)((NU32)(d) >> (NU32)(((NI)2))) | (NU32)((NU32)(d) << (NU32)(((NI)30))));
			bigEndian32__pureZendians_65(((void*) ((&w[((NI)(t + ((NI)4)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI)4)) * ((NI)4)))- 0]))));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU32)(((NI)27))) | (NU32)((NU32)(b) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)4)))- 0]))) + (NU32)((NU32)(e ^ (NU32)(c & (NU32)(d ^ e)))))) + (NU32)(((NU32)1518500249)));
			c = (NU32)((NU32)((NU32)(c) >> (NU32)(((NI)2))) | (NU32)((NU32)(c) << (NU32)(((NI)30))));
			t += ((NI)5);
		} LA2: ;
	}
	bigEndian32__pureZendians_65(((void*) ((&w[((NI)(t + ((NI)0)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI)0)) * ((NI)4)))- 0]))));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU32)(((NI)27))) | (NU32)((NU32)(a) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)0)))- 0]))) + (NU32)((NU32)(d ^ (NU32)(b & (NU32)(c ^ d)))))) + (NU32)(((NU32)1518500249)));
	b = (NU32)((NU32)((NU32)(b) >> (NU32)(((NI)2))) | (NU32)((NU32)(b) << (NU32)(((NI)30))));
	w[((NI)(t + ((NI)1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)1)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)1)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
	d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU32)(((NI)27))) | (NU32)((NU32)(e) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)1)))- 0]))) + (NU32)((NU32)(c ^ (NU32)(a & (NU32)(b ^ c)))))) + (NU32)(((NU32)1518500249)));
	a = (NU32)((NU32)((NU32)(a) >> (NU32)(((NI)2))) | (NU32)((NU32)(a) << (NU32)(((NI)30))));
	w[((NI)(t + ((NI)2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)2)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)2)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
	c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU32)(((NI)27))) | (NU32)((NU32)(d) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)2)))- 0]))) + (NU32)((NU32)(b ^ (NU32)(e & (NU32)(a ^ b)))))) + (NU32)(((NU32)1518500249)));
	e = (NU32)((NU32)((NU32)(e) >> (NU32)(((NI)2))) | (NU32)((NU32)(e) << (NU32)(((NI)30))));
	w[((NI)(t + ((NI)3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)3)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)3)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
	b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU32)(((NI)27))) | (NU32)((NU32)(c) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)3)))- 0]))) + (NU32)((NU32)(a ^ (NU32)(d & (NU32)(e ^ a)))))) + (NU32)(((NU32)1518500249)));
	d = (NU32)((NU32)((NU32)(d) >> (NU32)(((NI)2))) | (NU32)((NU32)(d) << (NU32)(((NI)30))));
	w[((NI)(t + ((NI)4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)4)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)4)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
	a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU32)(((NI)27))) | (NU32)((NU32)(b) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)4)))- 0]))) + (NU32)((NU32)(e ^ (NU32)(c & (NU32)(d ^ e)))))) + (NU32)(((NU32)1518500249)));
	c = (NU32)((NU32)((NU32)(c) >> (NU32)(((NI)2))) | (NU32)((NU32)(c) << (NU32)(((NI)30))));
	t = ((NI)20);
	{
		while (1) {
			if (!(t < ((NI)40))) goto LA4			;
			w[((NI)(t + ((NI)0)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)0)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)0)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU32)(((NI)27))) | (NU32)((NU32)(a) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)0)))- 0]))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(((NU32)1859775393)));
			b = (NU32)((NU32)((NU32)(b) >> (NU32)(((NI)2))) | (NU32)((NU32)(b) << (NU32)(((NI)30))));
			w[((NI)(t + ((NI)1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)1)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)1)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU32)(((NI)27))) | (NU32)((NU32)(e) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)1)))- 0]))) + (NU32)((NU32)((NU32)(a ^ b) ^ c)))) + (NU32)(((NU32)1859775393)));
			a = (NU32)((NU32)((NU32)(a) >> (NU32)(((NI)2))) | (NU32)((NU32)(a) << (NU32)(((NI)30))));
			w[((NI)(t + ((NI)2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)2)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)2)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU32)(((NI)27))) | (NU32)((NU32)(d) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)2)))- 0]))) + (NU32)((NU32)((NU32)(e ^ a) ^ b)))) + (NU32)(((NU32)1859775393)));
			e = (NU32)((NU32)((NU32)(e) >> (NU32)(((NI)2))) | (NU32)((NU32)(e) << (NU32)(((NI)30))));
			w[((NI)(t + ((NI)3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)3)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)3)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU32)(((NI)27))) | (NU32)((NU32)(c) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)3)))- 0]))) + (NU32)((NU32)((NU32)(d ^ e) ^ a)))) + (NU32)(((NU32)1859775393)));
			d = (NU32)((NU32)((NU32)(d) >> (NU32)(((NI)2))) | (NU32)((NU32)(d) << (NU32)(((NI)30))));
			w[((NI)(t + ((NI)4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)4)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)4)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU32)(((NI)27))) | (NU32)((NU32)(b) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)4)))- 0]))) + (NU32)((NU32)((NU32)(c ^ d) ^ e)))) + (NU32)(((NU32)1859775393)));
			c = (NU32)((NU32)((NU32)(c) >> (NU32)(((NI)2))) | (NU32)((NU32)(c) << (NU32)(((NI)30))));
			t += ((NI)5);
		} LA4: ;
	}
	{
		while (1) {
			if (!(t < ((NI)60))) goto LA6			;
			w[((NI)(t + ((NI)0)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)0)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)0)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU32)(((NI)27))) | (NU32)((NU32)(a) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)0)))- 0]))) + (NU32)((NU32)((NU32)(b & c) | (NU32)(d & (NU32)(b | c)))))) + (NU32)(((NU32)IL64(2400959708))));
			b = (NU32)((NU32)((NU32)(b) >> (NU32)(((NI)2))) | (NU32)((NU32)(b) << (NU32)(((NI)30))));
			w[((NI)(t + ((NI)1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)1)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)1)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU32)(((NI)27))) | (NU32)((NU32)(e) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)1)))- 0]))) + (NU32)((NU32)((NU32)(a & b) | (NU32)(c & (NU32)(a | b)))))) + (NU32)(((NU32)IL64(2400959708))));
			a = (NU32)((NU32)((NU32)(a) >> (NU32)(((NI)2))) | (NU32)((NU32)(a) << (NU32)(((NI)30))));
			w[((NI)(t + ((NI)2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)2)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)2)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU32)(((NI)27))) | (NU32)((NU32)(d) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)2)))- 0]))) + (NU32)((NU32)((NU32)(e & a) | (NU32)(b & (NU32)(e | a)))))) + (NU32)(((NU32)IL64(2400959708))));
			e = (NU32)((NU32)((NU32)(e) >> (NU32)(((NI)2))) | (NU32)((NU32)(e) << (NU32)(((NI)30))));
			w[((NI)(t + ((NI)3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)3)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)3)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU32)(((NI)27))) | (NU32)((NU32)(c) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)3)))- 0]))) + (NU32)((NU32)((NU32)(d & e) | (NU32)(a & (NU32)(d | e)))))) + (NU32)(((NU32)IL64(2400959708))));
			d = (NU32)((NU32)((NU32)(d) >> (NU32)(((NI)2))) | (NU32)((NU32)(d) << (NU32)(((NI)30))));
			w[((NI)(t + ((NI)4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)4)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)4)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU32)(((NI)27))) | (NU32)((NU32)(b) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)4)))- 0]))) + (NU32)((NU32)((NU32)(c & d) | (NU32)(e & (NU32)(c | d)))))) + (NU32)(((NU32)IL64(2400959708))));
			c = (NU32)((NU32)((NU32)(c) >> (NU32)(((NI)2))) | (NU32)((NU32)(c) << (NU32)(((NI)30))));
			t += ((NI)5);
		} LA6: ;
	}
	{
		while (1) {
			if (!(t < ((NI)80))) goto LA8			;
			w[((NI)(t + ((NI)0)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)0)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)0)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)0)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU32)(((NI)27))) | (NU32)((NU32)(a) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)0)))- 0]))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(((NU32)IL64(3395469782))));
			b = (NU32)((NU32)((NU32)(b) >> (NU32)(((NI)2))) | (NU32)((NU32)(b) << (NU32)(((NI)30))));
			w[((NI)(t + ((NI)1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)1)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)1)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)1)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU32)(((NI)27))) | (NU32)((NU32)(e) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)1)))- 0]))) + (NU32)((NU32)((NU32)(a ^ b) ^ c)))) + (NU32)(((NU32)IL64(3395469782))));
			a = (NU32)((NU32)((NU32)(a) >> (NU32)(((NI)2))) | (NU32)((NU32)(a) << (NU32)(((NI)30))));
			w[((NI)(t + ((NI)2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)2)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)2)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)2)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU32)(((NI)27))) | (NU32)((NU32)(d) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)2)))- 0]))) + (NU32)((NU32)((NU32)(e ^ a) ^ b)))) + (NU32)(((NU32)IL64(3395469782))));
			e = (NU32)((NU32)((NU32)(e) >> (NU32)(((NI)2))) | (NU32)((NU32)(e) << (NU32)(((NI)30))));
			w[((NI)(t + ((NI)3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)3)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)3)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)3)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU32)(((NI)27))) | (NU32)((NU32)(c) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)3)))- 0]))) + (NU32)((NU32)((NU32)(d ^ e) ^ a)))) + (NU32)(((NU32)IL64(3395469782))));
			d = (NU32)((NU32)((NU32)(d) >> (NU32)(((NI)2))) | (NU32)((NU32)(d) << (NU32)(((NI)30))));
			w[((NI)(t + ((NI)4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)4)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)16)))- 0])) >> (NU32)(((NI)31))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI)4)) - ((NI)3)))- 0] ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)8)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)14)))- 0]) ^ w[((NI)((NI)(t + ((NI)4)) - ((NI)16)))- 0])) << (NU32)(((NI)1))));
			a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU32)(((NI)27))) | (NU32)((NU32)(b) << (NU32)(((NI)5))))) + (NU32)(w[((NI)(t + ((NI)4)))- 0]))) + (NU32)((NU32)((NU32)(c ^ d) ^ e)))) + (NU32)(((NU32)IL64(3395469782))));
			c = (NU32)((NU32)((NU32)(c) >> (NU32)(((NI)2))) | (NU32)((NU32)(c) << (NU32)(((NI)30))));
			t += ((NI)5);
		} LA8: ;
	}
	(*ctx).state[(((NI)0))- 0] += a;
	(*ctx).state[(((NI)1))- 0] += b;
	(*ctx).state[(((NI)2))- 0] += c;
	(*ctx).state[(((NI)3))- 0] += d;
	(*ctx).state[(((NI)4))- 0] += e;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, update__stdZsha49_775)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx, NIM_CHAR* data, NI dataLen_0) {
	NI i;
	NI j;
	NI len;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	i = (NI)((*ctx).count % ((NI)64));
	j = ((NI)0);
	len = dataLen_0;
	{
		if (!((NI)(((NI)64) - i) < len)) goto LA3_;
		copyMem__system_1719(((void*) ((&(*ctx).buf[(i)- 0]))), ((void*) ((&data[j]))), ((NI) ((NI)(((NI)64) - i))));
		len -= (NI)(((NI)64) - i);
		j += (NI)(((NI)64) - i);
		transform__stdZsha49_19(ctx);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		i = ((NI)0);
	}
	LA3_: ;
	{
		while (1) {
			if (!(((NI)64) <= len)) goto LA6			;
			copyMem__system_1719(((void*) ((&(*ctx).buf[(((NI)0))- 0]))), ((void*) ((&data[j]))), ((NI)64));
			len -= ((NI)64);
			j += ((NI)64);
			transform__stdZsha49_19(ctx);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		} LA6: ;
	}
	{
		while (1) {
			if (!(((NI)0) < len)) goto LA8			;
			len -= ((NI)1);
			(*ctx).buf[(i)- 0] = ((NU8) (((NU8)(data[j]))));
			i += ((NI)1);
			j += ((NI)1);
			{
				if (!(i == ((NI)64))) goto LA11_;
				transform__stdZsha49_19(ctx);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i = ((NI)0);
			}
			LA11_: ;
		} LA8: ;
	}
	(*ctx).count += dataLen_0;
	}BeforeRet_: ;
}
static N_INLINE(void, swapEndian64__pureZendians_13)(void* outp, void* inp) {
	NU64 tmpX60gensym0_;
	tmpX60gensym0_ = (NU64)0;
	copyMem__system_1719(((void*) ((&tmpX60gensym0_))), inp, ((NI)8));
	tmpX60gensym0_ = __builtin_bswap64(tmpX60gensym0_);
	copyMem__system_1719(outp, ((void*) ((&tmpX60gensym0_))), ((NI)8));
}
static N_INLINE(void, bigEndian64__pureZendians_62)(void* outp, void* inp) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	swapEndian64__pureZendians_13(outp, inp);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, finalize__stdZsha49_822)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result) {
	NU64 cnt;
	tyArray__1NlJ8ipZDU6GZ9bDFAyQjfQ tmp;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)Result, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
	cnt = ((NU64) ((NI)((*ctx).count * ((NI)8))));
	update__stdZsha49_775(ctx, ((TM__SpWH4VocI3fFoiOGE4MzWw_4).p) ? (TM__SpWH4VocI3fFoiOGE4MzWw_4.p->data) : NIM_NIL, TM__SpWH4VocI3fFoiOGE4MzWw_4.len);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		while (1) {
			if (!!(((NI)((*ctx).count % ((NI)64)) == ((NI)56)))) goto LA2			;
			update__stdZsha49_775(ctx, ((TM__SpWH4VocI3fFoiOGE4MzWw_6).p) ? (TM__SpWH4VocI3fFoiOGE4MzWw_6.p->data) : NIM_NIL, TM__SpWH4VocI3fFoiOGE4MzWw_6.len);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		} LA2: ;
	}
	nimZeroMem((void*)tmp, sizeof(tyArray__1NlJ8ipZDU6GZ9bDFAyQjfQ));
	bigEndian64__pureZendians_62(((void*) ((&tmp[(((NI)0))- 0]))), ((void*) ((&cnt))));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	update__stdZsha49_775(ctx, tmp, 8);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI)0);
		{
			while (1) {
				void* T6_;
				if (!(i_2 < ((NI)5))) goto LA5				;
				i = i_2;
				T6_ = (void*)0;
				T6_ = ((void*) ((&(*ctx).state[(i)- 0])));
				bigEndian32__pureZendians_65(T6_, ((void*) ((&(*ctx).state[(i)- 0]))));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i_2 += ((NI)1);
			} LA5: ;
		}
	}
	copyMem__system_1719(((void*) ((&Result[(((NI)0))- 0]))), ((void*) ((&(*ctx).state[(((NI)0))- 0]))), ((NI)20));
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, secureHash__stdZsha49_856)(NIM_CHAR* str, NI strLen_0, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result) {
	tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow state;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&state), sizeof(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow));
	newSha1State__stdZsha49_11((&state));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	update__stdZsha49_775((&state), str, strLen_0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	finalize__stdZsha49_822((&state), Result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src) {
	{
		if (!(((NI)0) < src.len)) goto LA3_;
		copyMem__system_1719(((void*) ((&(*(*dest).p).data[(*dest).len]))), ((void*) ((&(*src.p).data[((NI)0)]))), ((NI) ((NI)(src.len + ((NI)1)))));
		(*dest).len += src.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZsha49_904)(tyArray__YtcvxHNKV4YiecPE9ap1mcA self) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = TM__SpWH4VocI3fFoiOGE4MzWw_8;
	{
		NU8 v;
		tyArray__YtcvxHNKV4YiecPE9ap1mcA colontmp_;
		NI i;
		v = (NU8)0;
		nimZeroMem((void*)colontmp_, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
		nimCopyMem((void*)colontmp_, (NIM_CONST void*)self, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
		i = ((NI)0);
		{
			while (1) {
				NimStringV2 colontmpD_;
				colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
				v = colontmp_[(i)- 0];
				colontmpD_ = toHex__pureZstrutils_1991(((NI) (v)), ((NI)2));
				if (NIM_UNLIKELY(*nimErr_)) goto LA4_;
				prepareAdd((&result), colontmpD_.len + 0);
appendString((&result), colontmpD_);
				{
					if (!(((NI)19) <= ((NI) (i)))) goto LA7_;
					eqdestroy___stdZassertions_13((&colontmpD_));
					goto LA2;
				}
				LA7_: ;
				i += ((NI)1);
				{
					LA4_:;
				}
				{
					eqdestroy___stdZassertions_13((&colontmpD_));
				}
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			}
		} LA2: ;
	}
	}BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(void, secureHashFile__stdZsha49_896)(NimStringV2 filename, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result) {
	NimStringV2 buffer;
	FILE* f;
	tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow state;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)Result, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
	buffer.len = 0; buffer.p = NIM_NIL;
	f = open__stdZsyncio_447(filename, ((tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg)0), ((NI)-1));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimZeroMem((void*)(&state), sizeof(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow));
	newSha1State__stdZsha49_11((&state));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	buffer = mnewString(((NI)8192));
	{
		while (1) {
			NI length;
			nimPrepareStrMutationV2((&buffer));
			length = readChars__stdZsyncio_167(f, ((buffer).p) ? (buffer.p->data) : NIM_NIL, buffer.len);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			{
				if (!(length == ((NI)0))) goto LA6_;
				goto LA2;
			}
			LA6_: ;
			setLengthStrV2((&buffer), ((NI) (length)));
			update__stdZsha49_775((&state), ((buffer).p) ? (buffer.p->data) : NIM_NIL, buffer.len);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			{
				if (!!((length == ((NI)8192)))) goto LA10_;
				goto LA2;
			}
			LA10_: ;
		}
	} LA2: ;
	close__stdZsyncio_242(f);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	finalize__stdZsha49_822((&state), Result);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&buffer));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, appendChar)(NimStringV2* dest, NIM_CHAR c) {
	(*(*dest).p).data[(*dest).len] = c;
	(*(*dest).p).data[(NI)((*dest).len + ((NI)1))] = 0;
	(*dest).len += ((NI)1);
}
N_LIB_PRIVATE N_NIMCALL(void, parseSecureHash__stdZsha49_938)(NimStringV2 hash, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)Result, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI)0);
		{
			while (1) {
				NimStringV2 colontmpD_;
				NimStringV2 T5_;
				NI T6_;
				if (!(i_2 < ((NI)20))) goto LA3				;
				colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
				i = i_2;
				T5_.len = 0; T5_.p = NIM_NIL;
				T5_ = rawNewString(2);
appendChar((&T5_), hash.p->data[(NI)(i * ((NI)2))]);
appendChar((&T5_), hash.p->data[(NI)((NI)(i * ((NI)2)) + ((NI)1))]);
				colontmpD_ = T5_;
				T6_ = (NI)0;
				T6_ = nsuParseHexInt(colontmpD_);
				if (NIM_UNLIKELY(*nimErr_)) goto LA4_;
				Result[(i)- 0] = ((NU8) (T6_));
				i_2 += ((NI)1);
				{
					LA4_:;
				}
				{
					eqdestroy___stdZassertions_13((&colontmpD_));
				}
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			} LA3: ;
		}
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___stdZsha49_946)(tyArray__YtcvxHNKV4YiecPE9ap1mcA a, tyArray__YtcvxHNKV4YiecPE9ap1mcA b) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = eqeq___stdZsha49_950(a, b);
	return result;
}
