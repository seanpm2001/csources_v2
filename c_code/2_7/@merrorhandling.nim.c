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
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg;
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA;
typedef struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg;
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ tySequence__xxu3GgaFAGO6lOns9aHaeLQ;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw;
typedef NU8 tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ;
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ {
  NI len; tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content* p;
};
struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q {
tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typ;
tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info;
tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw flags;
tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ kind;
union{
struct {NI64 intVal;
} _kind_1;
struct {NF floatVal;
} _kind_2;
struct {NimStringV2 strVal;
} _kind_3;
struct {tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* sym;
} _kind_4;
struct {tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* ident;
} _kind_5;
struct {tySequence__xxu3GgaFAGO6lOns9aHaeLQ sons;
} _kind_6;
};
};
typedef NU8 tyEnum_ErrorKind__yJ5zZNcpFhIDTHa5QOoXew;
typedef NU16 tySet_tyEnum_TRenderFlag__MM5FVX0phapzCgLaUUssTA;
typedef NU8 tyEnum_TPreferedDesc__bf5goTo3KJxvaEQ7KVg4rQ;
typedef NimStringV2 tyArray__24KAM9afIUgUaqBaEBB6r9bg[3];


#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuFormatSingleElem)(NimStringV2 formatstr, NimStringV2 a);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderTree__renderer_50)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, tySet_tyEnum_TRenderFlag__MM5FVX0phapzCgLaUUssTA renderFlags);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_4063)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA** dest, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* src);
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeToString__types_51)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typ, tyEnum_TPreferedDesc__bf5goTo3KJxvaEQ7KVg4rQ prefer);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuFormatOpenArray)(NimStringV2 formatstr, NimStringV2* a, NI aLen_0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getProcHeader__types_223)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* sym, tyEnum_TPreferedDesc__bf5goTo3KJxvaEQ7KVg4rQ prefer, NIM_BOOL getDeclarationPath);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_4060)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA** dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3454)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static const struct {
  NI cap; NIM_CHAR data[13+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_2 = { 13 | NIM_STRLIT_FLAG, "type mismatch" };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_3 = {13, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_2};
static const struct {
  NI cap; NIM_CHAR data[32+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_4 = { 32 | NIM_STRLIT_FLAG, "expression \'$1\' cannot be called" };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_5 = {32, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_4};
static const struct {
  NI cap; NIM_CHAR data[25+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_6 = { 25 | NIM_STRLIT_FLAG, "wrong number of arguments" };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_7 = {25, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_6};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_8 = { 1 | NIM_STRLIT_FLAG, "(" };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_9 = {1, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_8};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_10 = { 2 | NIM_STRLIT_FLAG, ", " };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_11 = {2, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_10};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_12 = { 1 | NIM_STRLIT_FLAG, ")" };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_13 = {1, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_12};
static const struct {
  NI cap; NIM_CHAR data[44+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_14 = { 44 | NIM_STRLIT_FLAG, "ambiguous call; both $1 and $2 match for: $3" };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_15 = {44, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_14};
extern NIM_BOOL nimInErrorMode__system_3980;
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = (*n)._kind_6.sons.len;
	result = T1_;
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
	result = (&nimInErrorMode__system_3980);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, errorToString__errorhandling_109)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* config, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NimStringV2 result;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* wrongNode;
NIM_BOOL oldNimErrFin9_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	wrongNode = NIM_NIL;
	eqcopy___ast_3457(&wrongNode, (*n)._kind_6.sons.p->data[((NI)0)]);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	switch (((tyEnum_ErrorKind__yJ5zZNcpFhIDTHa5QOoXew) ((*(*n)._kind_6.sons.p->data[((NI)1)])._kind_1.intVal))) {
	case ((tyEnum_ErrorKind__yJ5zZNcpFhIDTHa5QOoXew)0):
	{
		result = TM__PAgkFH59bCpZS6kyA7bT09ag_3;
	}
	break;
	case ((tyEnum_ErrorKind__yJ5zZNcpFhIDTHa5QOoXew)1):
	{
		tySet_tyEnum_TRenderFlag__MM5FVX0phapzCgLaUUssTA T4_;
		NimStringV2 T5_;
		T4_ = 0;
		T5_.len = 0; T5_.p = NIM_NIL;
		T5_ = renderTree__renderer_50((*wrongNode)._kind_6.sons.p->data[((NI)0)], T4_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		result = nsuFormatSingleElem(TM__PAgkFH59bCpZS6kyA7bT09ag_5, T5_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	break;
	case ((tyEnum_ErrorKind__yJ5zZNcpFhIDTHa5QOoXew)2):
	{
		eqcopy___stdZassertions_16((&result), (*(*n)._kind_6.sons.p->data[((NI)2)])._kind_3.strVal);
	}
	break;
	case ((tyEnum_ErrorKind__yJ5zZNcpFhIDTHa5QOoXew)3):
	{
		result = TM__PAgkFH59bCpZS6kyA7bT09ag_7;
	}
	break;
	case ((tyEnum_ErrorKind__yJ5zZNcpFhIDTHa5QOoXew)4):
	{
		tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* a;
		tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* b;
		NimStringV2 args;
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		tyArray__24KAM9afIUgUaqBaEBB6r9bg T20_;
		a = NIM_NIL;
		b = NIM_NIL;
		args.len = 0; args.p = NIM_NIL;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		eqcopy___ast_4063(&a, (*(*n)._kind_6.sons.p->data[((NI)2)])._kind_4.sym);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		eqcopy___ast_4063(&b, (*(*n)._kind_6.sons.p->data[((NI)3)])._kind_4.sym);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		args = TM__PAgkFH59bCpZS6kyA7bT09ag_9;
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len__ast_3325(wrongNode);
			if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
			i_2 = ((NI)1);
			{
				while (1) {
					NimStringV2 colontmpD__3;
					if (!(i_2 < colontmp_)) goto LA12					;
					colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
					i = i_2;
					{
						if (!(((NI)1) < i)) goto LA16_;
						prepareAdd((&args), 2);
appendString((&args), TM__PAgkFH59bCpZS6kyA7bT09ag_11);
					}
					LA16_: ;
					colontmpD__3 = typeToString__types_51((*(*wrongNode)._kind_6.sons.p->data[i]).typ, ((tyEnum_TPreferedDesc__bf5goTo3KJxvaEQ7KVg4rQ)0));
					if (NIM_UNLIKELY(*nimErr_)) goto LA13_;
					prepareAdd((&args), colontmpD__3.len + 0);
appendString((&args), colontmpD__3);
					i_2 += ((NI)1);
					{
						LA13_:;
					}
					{
						eqdestroy___stdZassertions_13((&colontmpD__3));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
				} LA12: ;
			}
		}
		prepareAdd((&args), 1);
appendString((&args), TM__PAgkFH59bCpZS6kyA7bT09ag_13);
		colontmpD_ = getProcHeader__types_223(config, a, ((tyEnum_TPreferedDesc__bf5goTo3KJxvaEQ7KVg4rQ)0), NIM_TRUE);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		T20_[0] = colontmpD_;
		colontmpD__2 = getProcHeader__types_223(config, b, ((tyEnum_TPreferedDesc__bf5goTo3KJxvaEQ7KVg4rQ)0), NIM_TRUE);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		T20_[1] = colontmpD__2;
		T20_[2] = args;
		result = nsuFormatOpenArray(TM__PAgkFH59bCpZS6kyA7bT09ag_15, T20_, 3);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		{
			LA9_:;
		}
		{
			oldNimErrFin9_ = *nimErr_; *nimErr_ = NIM_FALSE;
			eqdestroy___stdZassertions_13((&colontmpD__2));
			eqdestroy___stdZassertions_13((&colontmpD_));
			eqdestroy___stdZassertions_13((&args));
			eqdestroy___ast_4060(&b);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			eqdestroy___ast_4060(&a);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			*nimErr_ = oldNimErrFin9_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	break;
	}
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___ast_3454(&wrongNode);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
