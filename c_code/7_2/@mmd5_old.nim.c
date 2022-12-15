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
typedef struct tyObject_MD5Context__vQ9bm9b34hOt1hUPHV0QEYsA tyObject_MD5Context__vQ9bm9b34hOt1hUPHV0QEYsA;
typedef NU32 tyArray__FleBT9cC2nxhgiXmSYYnEKA[4];
typedef NU32 tyArray__JlnxiR65D9cjJpwi6uBZRtA[2];
typedef NU8 tyArray__w5VB8h5K8DB3oWrO5U2wqg[64];
struct tyObject_MD5Context__vQ9bm9b34hOt1hUPHV0QEYsA {
tyArray__FleBT9cC2nxhgiXmSYYnEKA state;
tyArray__JlnxiR65D9cjJpwi6uBZRtA count;
tyArray__w5VB8h5K8DB3oWrO5U2wqg buffer;
};
typedef NU32 tyArray__U0SiHM0pVagA9c71oWelQMA[16];
typedef NU8 tyArray__cdsir9aPB24hAk6k77P9b9bCA[8];
static N_INLINE(void, clearBuffer__md5395old_246)(tyObject_MD5Context__vQ9bm9b34hOt1hUPHV0QEYsA* c);
static N_INLINE(void, zeroMem__system_1716)(void* p, NI size);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, md5Update__md5395old_176)(tyObject_MD5Context__vQ9bm9b34hOt1hUPHV0QEYsA* c, NU8* input, NI inputLen_0);
static N_INLINE(void, writeBuffer__md5395old_262)(tyObject_MD5Context__vQ9bm9b34hOt1hUPHV0QEYsA* c, NI index, NU8* input, NI inputLen_0, NI inputIndex, NI len);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, transform__md5395old_154)(NU8* buffer, NI bufferLen_0, NU32* state);
N_LIB_PRIVATE N_NIMCALL(void, encode__md5395old_74)(NU32* dest, NU8* src, NI srcLen_0);
N_LIB_PRIVATE N_NIMCALL(void, FF__md5395old_42)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, F__md5395old_11)(NU32 x, NU32 y, NU32 z);
static N_INLINE(void, rot__md5395old_31)(NU32* x, NU8 n);
N_LIB_PRIVATE N_NIMCALL(void, GG__md5395old_50)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, G__md5395old_16)(NU32 x, NU32 y, NU32 z);
N_LIB_PRIVATE N_NIMCALL(void, HH__md5395old_58)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, H__md5395old_21)(NU32 x, NU32 y, NU32 z);
N_LIB_PRIVATE N_NIMCALL(void, II__md5395old_66)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac);
static N_INLINE(NU32, I__md5395old_26)(NU32 x, NU32 y, NU32 z);
N_LIB_PRIVATE N_NIMCALL(void, decode__md5395old_116)(NU8* dest, NI destLen_0, NU32* src, NI srcLen_0);
N_LIB_PRIVATE NIM_CONST tyArray__w5VB8h5K8DB3oWrO5U2wqg padding__md5395old_10 = {((NU8)128),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0)}
;
extern NIM_BOOL nimInErrorMode__system_3978;
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
static N_INLINE(void, zeroMem__system_1716)(void* p, NI size) {
	nimZeroMem(p, size);
}
static N_INLINE(void, clearBuffer__md5395old_246)(tyObject_MD5Context__vQ9bm9b34hOt1hUPHV0QEYsA* c) {
	zeroMem__system_1716(((void*) ((*c).buffer)), ((NI)64));
}
N_LIB_PRIVATE N_NIMCALL(void, md5Init__md5395old_174)(tyObject_MD5Context__vQ9bm9b34hOt1hUPHV0QEYsA* c) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	(*c).state[(((NI)0))- 0] = ((NU32)1732584193);
	(*c).state[(((NI)1))- 0] = ((NU32)IL64(4023233417));
	(*c).state[(((NI)2))- 0] = ((NU32)IL64(2562383102));
	(*c).state[(((NI)3))- 0] = ((NU32)271733878);
	(*c).count[(((NI)0))- 0] = ((NU32)0);
	(*c).count[(((NI)1))- 0] = ((NU32)0);
	clearBuffer__md5395old_246(c);
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
static N_INLINE(void, writeBuffer__md5395old_262)(tyObject_MD5Context__vQ9bm9b34hOt1hUPHV0QEYsA* c, NI index, NU8* input, NI inputLen_0, NI inputIndex, NI len) {
	copyMem__system_1719(((void*) ((&(*c).buffer[(index)- 0]))), ((void*) ((&input[inputIndex]))), ((NI) (len)));
}
N_LIB_PRIVATE N_NIMCALL(void, encode__md5395old_74)(NU32* dest, NU8* src, NI srcLen_0) {
	NI j;
	j = ((NI)0);
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI)0);
		{
			while (1) {
				if (!(res <= ((NI)15))) goto LA3				;
				i = res;
				dest[(i)- 0] = (NU32)((NU32)((NU32)(((NU32) (src[j])) | (NU32)((NU64)(((NU32) (src[(NI)(j + ((NI)1))]))) << (NU64)(((NI)8)))) | (NU32)((NU64)(((NU32) (src[(NI)(j + ((NI)2))]))) << (NU64)(((NI)16)))) | (NU32)((NU64)(((NU32) (src[(NI)(j + ((NI)3))]))) << (NU64)(((NI)24))));
				j += ((NI)4);
				res += ((NI)1);
			} LA3: ;
		}
	}
}
static N_INLINE(NU32, F__md5395old_11)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)(x & y) | (NU32)((NU32)((NU32) ~(x)) & z));
	return result;
}
static N_INLINE(void, rot__md5395old_31)(NU32* x, NU8 n) {
	(*x) = (NU32)((NU32)((NU32)((*x)) << (NU32)(n)) | (NU32)((NU32)((*x)) >> (NU32)((NU32)((NU32)(((NU32)32)) - (NU32)(((NU32) (n)))))));
}
N_LIB_PRIVATE N_NIMCALL(void, FF__md5395old_42)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (NU32)0;
	T1_ = F__md5395old_11(b, c, d);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*a) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot__md5395old_31(a, s);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*a) = (NU32)((NU32)((*a)) + (NU32)(b));
	}BeforeRet_: ;
}
static N_INLINE(NU32, G__md5395old_16)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)(x & z) | (NU32)(y & (NU32)((NU32) ~(z))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, GG__md5395old_50)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (NU32)0;
	T1_ = G__md5395old_16(b, c, d);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*a) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot__md5395old_31(a, s);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*a) = (NU32)((NU32)((*a)) + (NU32)(b));
	}BeforeRet_: ;
}
static N_INLINE(NU32, H__md5395old_21)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)(x ^ y) ^ z);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, HH__md5395old_58)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (NU32)0;
	T1_ = H__md5395old_21(b, c, d);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*a) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot__md5395old_31(a, s);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*a) = (NU32)((NU32)((*a)) + (NU32)(b));
	}BeforeRet_: ;
}
static N_INLINE(NU32, I__md5395old_26)(NU32 x, NU32 y, NU32 z) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)(y ^ (NU32)(x | (NU32)((NU32) ~(z))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, II__md5395old_66)(NU32* a, NU32 b, NU32 c, NU32 d, NU32 x, NU8 s, NU32 ac) {
	NU32 T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (NU32)0;
	T1_ = I__md5395old_26(b, c, d);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*a) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a)) + (NU32)(T1_))) + (NU32)(x))) + (NU32)(ac));
	rot__md5395old_31(a, s);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*a) = (NU32)((NU32)((*a)) + (NU32)(b));
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, transform__md5395old_154)(NU8* buffer, NI bufferLen_0, NU32* state) {
	tyArray__U0SiHM0pVagA9c71oWelQMA myBlock;
	NU32 a;
	NU32 b;
	NU32 c;
	NU32 d;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)myBlock, sizeof(tyArray__U0SiHM0pVagA9c71oWelQMA));
	encode__md5395old_74(myBlock, buffer, bufferLen_0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	a = state[(((NI)0))- 0];
	b = state[(((NI)1))- 0];
	c = state[(((NI)2))- 0];
	d = state[(((NI)3))- 0];
	FF__md5395old_42((&a), b, c, d, myBlock[(((NI)0))- 0], ((NU8)7), ((NU32)IL64(3614090360)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&d), a, b, c, myBlock[(((NI)1))- 0], ((NU8)12), ((NU32)IL64(3905402710)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&c), d, a, b, myBlock[(((NI)2))- 0], ((NU8)17), ((NU32)606105819));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&b), c, d, a, myBlock[(((NI)3))- 0], ((NU8)22), ((NU32)IL64(3250441966)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&a), b, c, d, myBlock[(((NI)4))- 0], ((NU8)7), ((NU32)IL64(4118548399)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&d), a, b, c, myBlock[(((NI)5))- 0], ((NU8)12), ((NU32)1200080426));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&c), d, a, b, myBlock[(((NI)6))- 0], ((NU8)17), ((NU32)IL64(2821735955)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&b), c, d, a, myBlock[(((NI)7))- 0], ((NU8)22), ((NU32)IL64(4249261313)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&a), b, c, d, myBlock[(((NI)8))- 0], ((NU8)7), ((NU32)1770035416));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&d), a, b, c, myBlock[(((NI)9))- 0], ((NU8)12), ((NU32)IL64(2336552879)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&c), d, a, b, myBlock[(((NI)10))- 0], ((NU8)17), ((NU32)IL64(4294925233)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&b), c, d, a, myBlock[(((NI)11))- 0], ((NU8)22), ((NU32)IL64(2304563134)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&a), b, c, d, myBlock[(((NI)12))- 0], ((NU8)7), ((NU32)1804603682));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&d), a, b, c, myBlock[(((NI)13))- 0], ((NU8)12), ((NU32)IL64(4254626195)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&c), d, a, b, myBlock[(((NI)14))- 0], ((NU8)17), ((NU32)IL64(2792965006)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	FF__md5395old_42((&b), c, d, a, myBlock[(((NI)15))- 0], ((NU8)22), ((NU32)1236535329));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&a), b, c, d, myBlock[(((NI)1))- 0], ((NU8)5), ((NU32)IL64(4129170786)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&d), a, b, c, myBlock[(((NI)6))- 0], ((NU8)9), ((NU32)IL64(3225465664)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&c), d, a, b, myBlock[(((NI)11))- 0], ((NU8)14), ((NU32)643717713));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&b), c, d, a, myBlock[(((NI)0))- 0], ((NU8)20), ((NU32)IL64(3921069994)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&a), b, c, d, myBlock[(((NI)5))- 0], ((NU8)5), ((NU32)IL64(3593408605)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&d), a, b, c, myBlock[(((NI)10))- 0], ((NU8)9), ((NU32)38016083));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&c), d, a, b, myBlock[(((NI)15))- 0], ((NU8)14), ((NU32)IL64(3634488961)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&b), c, d, a, myBlock[(((NI)4))- 0], ((NU8)20), ((NU32)IL64(3889429448)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&a), b, c, d, myBlock[(((NI)9))- 0], ((NU8)5), ((NU32)568446438));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&d), a, b, c, myBlock[(((NI)14))- 0], ((NU8)9), ((NU32)IL64(3275163606)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&c), d, a, b, myBlock[(((NI)3))- 0], ((NU8)14), ((NU32)IL64(4107603335)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&b), c, d, a, myBlock[(((NI)8))- 0], ((NU8)20), ((NU32)1163531501));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&a), b, c, d, myBlock[(((NI)13))- 0], ((NU8)5), ((NU32)IL64(2850285829)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&d), a, b, c, myBlock[(((NI)2))- 0], ((NU8)9), ((NU32)IL64(4243563512)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&c), d, a, b, myBlock[(((NI)7))- 0], ((NU8)14), ((NU32)1735328473));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	GG__md5395old_50((&b), c, d, a, myBlock[(((NI)12))- 0], ((NU8)20), ((NU32)IL64(2368359562)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&a), b, c, d, myBlock[(((NI)5))- 0], ((NU8)4), ((NU32)IL64(4294588738)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&d), a, b, c, myBlock[(((NI)8))- 0], ((NU8)11), ((NU32)IL64(2272392833)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&c), d, a, b, myBlock[(((NI)11))- 0], ((NU8)16), ((NU32)1839030562));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&b), c, d, a, myBlock[(((NI)14))- 0], ((NU8)23), ((NU32)IL64(4259657740)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&a), b, c, d, myBlock[(((NI)1))- 0], ((NU8)4), ((NU32)IL64(2763975236)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&d), a, b, c, myBlock[(((NI)4))- 0], ((NU8)11), ((NU32)1272893353));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&c), d, a, b, myBlock[(((NI)7))- 0], ((NU8)16), ((NU32)IL64(4139469664)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&b), c, d, a, myBlock[(((NI)10))- 0], ((NU8)23), ((NU32)IL64(3200236656)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&a), b, c, d, myBlock[(((NI)13))- 0], ((NU8)4), ((NU32)681279174));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&d), a, b, c, myBlock[(((NI)0))- 0], ((NU8)11), ((NU32)IL64(3936430074)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&c), d, a, b, myBlock[(((NI)3))- 0], ((NU8)16), ((NU32)IL64(3572445317)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&b), c, d, a, myBlock[(((NI)6))- 0], ((NU8)23), ((NU32)76029189));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&a), b, c, d, myBlock[(((NI)9))- 0], ((NU8)4), ((NU32)IL64(3654602809)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&d), a, b, c, myBlock[(((NI)12))- 0], ((NU8)11), ((NU32)IL64(3873151461)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&c), d, a, b, myBlock[(((NI)15))- 0], ((NU8)16), ((NU32)530742520));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	HH__md5395old_58((&b), c, d, a, myBlock[(((NI)2))- 0], ((NU8)23), ((NU32)IL64(3299628645)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&a), b, c, d, myBlock[(((NI)0))- 0], ((NU8)6), ((NU32)IL64(4096336452)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&d), a, b, c, myBlock[(((NI)7))- 0], ((NU8)10), ((NU32)1126891415));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&c), d, a, b, myBlock[(((NI)14))- 0], ((NU8)15), ((NU32)IL64(2878612391)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&b), c, d, a, myBlock[(((NI)5))- 0], ((NU8)21), ((NU32)IL64(4237533241)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&a), b, c, d, myBlock[(((NI)12))- 0], ((NU8)6), ((NU32)1700485571));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&d), a, b, c, myBlock[(((NI)3))- 0], ((NU8)10), ((NU32)IL64(2399980690)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&c), d, a, b, myBlock[(((NI)10))- 0], ((NU8)15), ((NU32)IL64(4293915773)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&b), c, d, a, myBlock[(((NI)1))- 0], ((NU8)21), ((NU32)IL64(2240044497)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&a), b, c, d, myBlock[(((NI)8))- 0], ((NU8)6), ((NU32)1873313359));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&d), a, b, c, myBlock[(((NI)15))- 0], ((NU8)10), ((NU32)IL64(4264355552)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&c), d, a, b, myBlock[(((NI)6))- 0], ((NU8)15), ((NU32)IL64(2734768916)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&b), c, d, a, myBlock[(((NI)13))- 0], ((NU8)21), ((NU32)1309151649));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&a), b, c, d, myBlock[(((NI)4))- 0], ((NU8)6), ((NU32)IL64(4149444226)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&d), a, b, c, myBlock[(((NI)11))- 0], ((NU8)10), ((NU32)IL64(3174756917)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&c), d, a, b, myBlock[(((NI)2))- 0], ((NU8)15), ((NU32)718787259));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	II__md5395old_66((&b), c, d, a, myBlock[(((NI)9))- 0], ((NU8)21), ((NU32)IL64(3951481745)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	state[(((NI)0))- 0] = (NU32)((NU32)(state[(((NI)0))- 0]) + (NU32)(a));
	state[(((NI)1))- 0] = (NU32)((NU32)(state[(((NI)1))- 0]) + (NU32)(b));
	state[(((NI)2))- 0] = (NU32)((NU32)(state[(((NI)2))- 0]) + (NU32)(c));
	state[(((NI)3))- 0] = (NU32)((NU32)(state[(((NI)3))- 0]) + (NU32)(d));
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, md5Update__md5395old_176)(tyObject_MD5Context__vQ9bm9b34hOt1hUPHV0QEYsA* c, NU8* input, NI inputLen_0) {
	NI Index;
	NI PartLen;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	Index = ((NI) ((NU32)((NU32)((NU32)((*c).count[(((NI)0))- 0]) >> (NU64)(((NI)3))) & ((NU32)63))));
	(*c).count[(((NI)0))- 0] = (NU32)((NU32)((*c).count[(((NI)0))- 0]) + (NU32)((NU32)((NU64)(((NU32) (inputLen_0))) << (NU64)(((NI)3)))));
	{
		if (!((NU32)((*c).count[(((NI)0))- 0]) < (NU32)((NU32)((NU64)(((NU32) (inputLen_0))) << (NU64)(((NI)3)))))) goto LA3_;
		(*c).count[(((NI)1))- 0] = (NU32)((NU32)((*c).count[(((NI)1))- 0]) + (NU32)(((NU32)1)));
	}
	LA3_: ;
	(*c).count[(((NI)1))- 0] = (NU32)((NU32)((*c).count[(((NI)1))- 0]) + (NU32)((NU32)((NU32)(((NU32) (inputLen_0))) >> (NU64)(((NI)29)))));
	PartLen = (NI)(((NI)64) - Index);
	{
		NI i;
		if (!(PartLen <= inputLen_0)) goto LA7_;
		writeBuffer__md5395old_262(c, Index, input, inputLen_0, ((NI)0), PartLen);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		transform__md5395old_154((*c).buffer, 64, (*c).state);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		i = PartLen;
		{
			while (1) {
				if (!((NI)(i + ((NI)63)) < inputLen_0)) goto LA10				;
				transform__md5395old_154((NU8*)(input)+(i), ((NI)(i + ((NI)63)))-(i)+1, (*c).state);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i += ((NI)64);
			} LA10: ;
		}
		{
			if (!(i < inputLen_0)) goto LA13_;
			writeBuffer__md5395old_262(c, ((NI)0), input, inputLen_0, i, (NI)(inputLen_0 - i));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA13_: ;
	}
	goto LA5_;
	LA7_: ;
	{
		if (!(((NI)0) < inputLen_0)) goto LA16_;
		writeBuffer__md5395old_262(c, Index, input, inputLen_0, ((NI)0), inputLen_0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA5_;
	LA16_: ;
	LA5_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, md5Update__md5395old_182)(tyObject_MD5Context__vQ9bm9b34hOt1hUPHV0QEYsA* c, NCSTRING input, NI len) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	md5Update__md5395old_176(c, (NU8*)(input)+(((NI)0)), ((NI)(len - ((NI)1)))-(((NI)0))+1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, decode__md5395old_116)(NU8* dest, NI destLen_0, NU32* src, NI srcLen_0) {
	NI i;
	i = ((NI)0);
	{
		NI j;
		NI colontmp_;
		NI res;
		j = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (srcLen_0-1);
		res = ((NI)0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3				;
				j = res;
				dest[i] = ((NU8) ((NU32)(src[j] & ((NU32)255))));
				dest[(NI)(i + ((NI)1))] = ((NU8) ((NU32)((NU32)((NU32)(src[j]) >> (NU64)(((NI)8))) & ((NU32)255))));
				dest[(NI)(i + ((NI)2))] = ((NU8) ((NU32)((NU32)((NU32)(src[j]) >> (NU64)(((NI)16))) & ((NU32)255))));
				dest[(NI)(i + ((NI)3))] = ((NU8) ((NU32)((NU32)((NU32)(src[j]) >> (NU64)(((NI)24))) & ((NU32)255))));
				i += ((NI)4);
				res += ((NI)1);
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, md5Final__md5395old_179)(tyObject_MD5Context__vQ9bm9b34hOt1hUPHV0QEYsA* c, NU8* digest) {
	tyArray__cdsir9aPB24hAk6k77P9b9bCA Bits;
	NI PadLen;
	NI Index;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)Bits, sizeof(tyArray__cdsir9aPB24hAk6k77P9b9bCA));
	PadLen = (NI)0;
	decode__md5395old_116(Bits, 8, (*c).count, 2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	Index = ((NI) ((NU32)((NU32)((NU32)((*c).count[(((NI)0))- 0]) >> (NU64)(((NI)3))) & ((NU32)63))));
	{
		if (!(Index < ((NI)56))) goto LA3_;
		PadLen = (NI)(((NI)56) - Index);
	}
	goto LA1_;
	LA3_: ;
	{
		PadLen = (NI)(((NI)120) - Index);
	}
	LA1_: ;
	md5Update__md5395old_176(c, (NU8*)((padding__md5395old_10)+(((NI)0))), ((NI)(PadLen - ((NI)1)))-(((NI)0))+1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	md5Update__md5395old_176(c, Bits, 8);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	decode__md5395old_116(digest, 16, (*c).state, 4);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	clearBuffer__md5395old_246(c);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
