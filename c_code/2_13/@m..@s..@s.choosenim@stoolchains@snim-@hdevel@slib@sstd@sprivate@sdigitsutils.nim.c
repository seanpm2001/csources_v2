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
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NIM_CHAR tyArray__PbS9a6gkxCuxWEnFq4lOU9aw[24];
typedef NIM_CHAR tyArray__38Z69amCaoywES5tRmClBSw[200];
typedef NI8 tyArray__k7wgHIN8mKeRF236nmwvnQ[100];
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_173)(NimStringV2* result, NU64 x);
static N_INLINE(void, addIntImpl__stdZprivateZdigitsutils_71)(NimStringV2* result, NU64 x);
static N_INLINE(void, addChars__stdZprivateZdigitsutils_114)(NimStringV2* result, tyArray__PbS9a6gkxCuxWEnFq4lOU9aw x, NI start, NI n);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE NIM_CONST tyArray__38Z69amCaoywES5tRmClBSw digits100__stdZprivateZdigitsutils_2 = {48,
48,
48,
49,
48,
50,
48,
51,
48,
52,
48,
53,
48,
54,
48,
55,
48,
56,
48,
57,
49,
48,
49,
49,
49,
50,
49,
51,
49,
52,
49,
53,
49,
54,
49,
55,
49,
56,
49,
57,
50,
48,
50,
49,
50,
50,
50,
51,
50,
52,
50,
53,
50,
54,
50,
55,
50,
56,
50,
57,
51,
48,
51,
49,
51,
50,
51,
51,
51,
52,
51,
53,
51,
54,
51,
55,
51,
56,
51,
57,
52,
48,
52,
49,
52,
50,
52,
51,
52,
52,
52,
53,
52,
54,
52,
55,
52,
56,
52,
57,
53,
48,
53,
49,
53,
50,
53,
51,
53,
52,
53,
53,
53,
54,
53,
55,
53,
56,
53,
57,
54,
48,
54,
49,
54,
50,
54,
51,
54,
52,
54,
53,
54,
54,
54,
55,
54,
56,
54,
57,
55,
48,
55,
49,
55,
50,
55,
51,
55,
52,
55,
53,
55,
54,
55,
55,
55,
56,
55,
57,
56,
48,
56,
49,
56,
50,
56,
51,
56,
52,
56,
53,
56,
54,
56,
55,
56,
56,
56,
57,
57,
48,
57,
49,
57,
50,
57,
51,
57,
52,
57,
53,
57,
54,
57,
55,
57,
56,
57,
57}
;
N_LIB_PRIVATE NIM_CONST tyArray__k7wgHIN8mKeRF236nmwvnQ trailingZeros100__stdZprivateZdigitsutils_1 = {((NI8)2),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0)}
;
extern NIM_BOOL nimInErrorMode__system_3980;
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
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, addChars__stdZprivateZdigitsutils_114)(NimStringV2* result, tyArray__PbS9a6gkxCuxWEnFq4lOU9aw x, NI start, NI n) {
	NI old;
	old = (*result).len;
	setLengthStrV2((&(*result)), ((NI) ((NI)(old + n))));
	copyMem__system_1719(((void*) ((&(*result).p->data[old]))), ((void*) ((&x[(start)- 0]))), ((NI) (n)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
static N_INLINE(void, addIntImpl__stdZprivateZdigitsutils_71)(NimStringV2* result, NU64 x) {
	tyArray__PbS9a6gkxCuxWEnFq4lOU9aw tmp;
	NU64 num;
	NI next;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	num = x;
	next = ((NI)23);
	{
		while (1) {
			NU64 originNum;
			NI16 index;
			if (!((NU64)(100ULL) <= (NU64)(num))) goto LA2			;
			originNum = num;
			num = (NU64)((NU64)(num) / (NU64)(100ULL));
			index = ((NI16) ((NU64)((NU64)((NU64)((NU64)(originNum) - (NU64)((NU64)((NU64)(num) * (NU64)(100ULL))))) << (NU64)(((NI)1)))));
			tmp[(next)- 0] = digits100__stdZprivateZdigitsutils_2[((NI16)(index + ((NI16)1)))- 0];
			tmp[((NI)(next - ((NI)1)))- 0] = digits100__stdZprivateZdigitsutils_2[(index)- 0];
			next -= ((NI)2);
		} LA2: ;
	}
	{
		if (!((NU64)(num) < (NU64)(10ULL))) goto LA5_;
		tmp[(next)- 0] = ((NIM_CHAR) (((NI) ((NU8)((NU8)(((NU8)48)) + (NU8)(((NU8) (num))))))));
	}
	goto LA3_;
	LA5_: ;
	{
		NU64 index_2;
		index_2 = (NU64)((NU64)(num) * (NU64)(2ULL));
		tmp[(next)- 0] = digits100__stdZprivateZdigitsutils_2[((NU64)((NU64)(index_2) + (NU64)(1ULL)))- 0];
		tmp[((NI)(next - ((NI)1)))- 0] = digits100__stdZprivateZdigitsutils_2[(index_2)- 0];
		next -= ((NI)1);
	}
	LA3_: ;
	addChars__stdZprivateZdigitsutils_114(result, tmp, next, (NI)(((NI)24) - next));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_173)(NimStringV2* result, NU64 x) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	addIntImpl__stdZprivateZdigitsutils_71(result, x);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_176)(NimStringV2* result, NI64 x) {
	NU64 numX60gensym3_;
	numX60gensym3_ = (NU64)0;
	{
		NI baseX60gensym3_;
		if (!(x < IL64(0))) goto LA3_;
		{
			if (!(x == (IL64(-9223372036854775807) - IL64(1)))) goto LA7_;
			numX60gensym3_ = ((NU64) (x));
		}
		goto LA5_;
		LA7_: ;
		{
			numX60gensym3_ = ((NU64) (-(x)));
		}
		LA5_: ;
		baseX60gensym3_ = (*result).len;
		setLengthStrV2((&(*result)), ((NI) ((NI)(baseX60gensym3_ + ((NI)1)))));
		nimPrepareStrMutationV2((&(*result)));
		(*result).p->data[baseX60gensym3_] = 45;
	}
	goto LA1_;
	LA3_: ;
	{
		numX60gensym3_ = ((NU64) (x));
	}
	LA1_: ;
	addInt__stdZprivateZdigitsutils_173(result, numX60gensym3_);
}
