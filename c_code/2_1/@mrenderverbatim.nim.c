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
typedef struct tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg;
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw;
typedef struct tySequence__shxop0zPIs5Ec3k71aCLuQ tySequence__shxop0zPIs5Ec3k71aCLuQ;
typedef struct tySequence__shxop0zPIs5Ec3k71aCLuQ_Content tySequence__shxop0zPIs5Ec3k71aCLuQ_Content;
typedef struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg;
typedef struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA;
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ tySequence__xxu3GgaFAGO6lOns9aHaeLQ;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content;
typedef struct tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tySequence__shxop0zPIs5Ec3k71aCLuQ {
  NI len; tySequence__shxop0zPIs5Ec3k71aCLuQ_Content* p;
};
struct tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw {
tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf;
NI lineFirst;
tySequence__shxop0zPIs5Ec3k71aCLuQ lines;
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
struct tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ {
NI16 a;
NI b;
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
};


#ifndef tySequence__shxop0zPIs5Ec3k71aCLuQ_Content_PP
#define tySequence__shxop0zPIs5Ec3k71aCLuQ_Content_PP
struct tySequence__shxop0zPIs5Ec3k71aCLuQ_Content { NI cap; NIM_BOOL data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__shxop0zPIs5Ec3k71aCLuQ_Content_PP
#define tySequence__shxop0zPIs5Ec3k71aCLuQ_Content_PP
struct tySequence__shxop0zPIs5Ec3k71aCLuQ_Content { NI cap; NIM_BOOL data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, lastSon__ast_6268)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, lastNodeRec__renderverbatim_7)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
static N_INLINE(NI, safeLen__ast_3318)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(NI, numLines__msgs_1144)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, NI32 fileIdx);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___options_3378)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg** dest, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* src);
N_LIB_PRIVATE N_NIMCALL(void, visitMultilineStrings__renderverbatim_52)(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw* ldata, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tripleStrLitStartsAtNextLine__renderverbatim_28)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, sourceLine__msgs_1155)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg i);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuContinuesWith)(NimStringV2 s, NimStringV2 substr, NI start);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_224)(NimStringV2 msg);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, setLen__cgen_12254)(tySequence__shxop0zPIs5Ec3k71aCLuQ* s, NI newlen);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, startOfLineInsideTriple__renderverbatim_93)(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw ldata, NI line);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isInIndentationBlock__renderverbatim_15)(NimStringV2 src, NI indent);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
static N_INLINE(NimStringV2, X5BX5D___renderverbatim_172)(NimStringV2 s, tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ x);
N_NIMCALL(NimStringV2, mnewString)(NI len);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
static N_INLINE(tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ, dotdot___renderverbatim_142)(NI16 a, NI b);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___renderverbatim_187)(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw* dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___options_3149)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* dest);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___cgen_12348)(tySequence__shxop0zPIs5Ec3k71aCLuQ* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3454)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest);
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__Ut3DGYXxqjf6Sd7VfREQEw_2 = { 3 | NIM_STRLIT_FLAG, "\"\"\"" };
static const NimStringV2 TM__Ut3DGYXxqjf6Sd7VfREQEw_3 = {3, (NimStrPayload*)&TM__Ut3DGYXxqjf6Sd7VfREQEw_2};
static const struct {
  NI cap; NIM_CHAR data[64+1];
} TM__Ut3DGYXxqjf6Sd7VfREQEw_4 = { 64 | NIM_STRLIT_FLAG, "renderverbatim.nim(46, 3) `src.continuesWith(tripleQuote, col)` " };
static const NimStringV2 TM__Ut3DGYXxqjf6Sd7VfREQEw_5 = {64, (NimStrPayload*)&TM__Ut3DGYXxqjf6Sd7VfREQEw_4};
static const struct {
  NI cap; NIM_CHAR data[41+1];
} TM__Ut3DGYXxqjf6Sd7VfREQEw_6 = { 41 | NIM_STRLIT_FLAG, "renderverbatim.nim(51, 7) `src.len == i` " };
static const NimStringV2 TM__Ut3DGYXxqjf6Sd7VfREQEw_7 = {41, (NimStrPayload*)&TM__Ut3DGYXxqjf6Sd7VfREQEw_6};
static const NimStringV2 TM__Ut3DGYXxqjf6Sd7VfREQEw_8 = {3, (NimStrPayload*)&TM__Ut3DGYXxqjf6Sd7VfREQEw_2};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__Ut3DGYXxqjf6Sd7VfREQEw_9 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__Ut3DGYXxqjf6Sd7VfREQEw_10 = {0, (NimStrPayload*)&TM__Ut3DGYXxqjf6Sd7VfREQEw_9};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__Ut3DGYXxqjf6Sd7VfREQEw_11 = { 1 | NIM_STRLIT_FLAG, "\012" };
static const NimStringV2 TM__Ut3DGYXxqjf6Sd7VfREQEw_12 = {1, (NimStrPayload*)&TM__Ut3DGYXxqjf6Sd7VfREQEw_11};
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
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = (*n)._kind_6.sons.len;
	result = T1_;
	return result;
}
static N_INLINE(NI, safeLen__ast_3318)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if (!((*n).kind >= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)0) && (*n).kind <= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)23))) goto LA3_;
		result = ((NI)0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = len__ast_3325(n);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, lastNodeRec__renderverbatim_7)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	eqcopy___ast_3457(&result, n);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		while (1) {
			NI T3_;
			NI T4_;
			T3_ = (NI)0;
			T3_ = safeLen__ast_3318(result);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!(((NI)0) < T3_)) goto LA2			;
			T4_ = (NI)0;
			T4_ = len__ast_3325(result);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			eqcopy___ast_3457(&result, (*result)._kind_6.sons.p->data[(NI)(T4_ - ((NI)1))]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		} LA2: ;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tripleStrLitStartsAtNextLine__renderverbatim_28)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NIM_BOOL result;
	NimStringV2 src;
	NI16 col;
	NI16 i;
	NIM_BOOL onlySpace;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	src.len = 0; src.p = NIM_NIL;
	src = sourceLine__msgs_1155(conf, (*n).info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	col = (*n).info.col;
	{
		NIM_BOOL T4_;
		T4_ = (NIM_BOOL)0;
		T4_ = nsuContinuesWith(src, TM__Ut3DGYXxqjf6Sd7VfREQEw_3, ((NI) (col)));
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!!(T4_)) goto LA5_;
		failedAssertImpl__stdZassertions_224(TM__Ut3DGYXxqjf6Sd7VfREQEw_5);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA5_: ;
	i = (NI16)(col + ((NI16)3));
	onlySpace = NIM_TRUE;
	{
		while (1) {
			{
				if (!(src.len <= ((NI) (i)))) goto LA11_;
				{
					if (!!((src.len == ((NI) (i))))) goto LA15_;
					failedAssertImpl__stdZassertions_224(TM__Ut3DGYXxqjf6Sd7VfREQEw_7);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				}
				LA15_: ;
				result = onlySpace;
				eqdestroy___stdZassertions_13((&src));
				goto BeforeRet_;
			}
			goto LA9_;
			LA11_: ;
			{
				NIM_BOOL T18_;
				NIM_BOOL T20_;
				T18_ = (NIM_BOOL)0;
				T18_ = nsuContinuesWith(src, TM__Ut3DGYXxqjf6Sd7VfREQEw_8, ((NI) (i)));
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				if (!(T18_)) goto LA19_;
				T20_ = (NIM_BOOL)0;
				T20_ = (src.len == ((NI) ((NI16)(i + ((NI16)3)))));
				if (T20_) goto LA21_;
				T20_ = !(((NU8)(src.p->data[(NI16)(i + ((NI16)3))]) == (NU8)(34)));
				LA21_: ;
				T18_ = T20_;
				LA19_: ;
				if (!T18_) goto LA22_;
				result = NIM_FALSE;
				eqdestroy___stdZassertions_13((&src));
				goto BeforeRet_;
			}
			goto LA9_;
			LA22_: ;
			{
				if (!!(((NU8)(src.p->data[i]) == (NU8)(32)))) goto LA25_;
				onlySpace = NIM_FALSE;
			}
			goto LA9_;
			LA25_: ;
			LA9_: ;
			i += ((NI)1);
		}
	}
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&src));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, visitMultilineStrings__renderverbatim_52)(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw* ldata, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NI cline;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	cline = (*ldata).lineFirst;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)22):
	{
		cline = ((NI) ((*n).info.line));
		{
			NIM_BOOL T4_;
			NI indexX60gensym11_;
			T4_ = (NIM_BOOL)0;
			T4_ = tripleStrLitStartsAtNextLine__renderverbatim_28((*ldata).conf, n);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T4_) goto LA5_;
			cline += ((NI)1);
			indexX60gensym11_ = (NI)(cline - (*ldata).lineFirst);
			{
				NI T9_;
				T9_ = (*ldata).lines.len;
				if (!(T9_ < (NI)(indexX60gensym11_ + ((NI)1)))) goto LA10_;
				setLen__cgen_12254((&(*ldata).lines), ((NI) ((NI)(indexX60gensym11_ + ((NI)1)))));
			}
			LA10_: ;
			(*ldata).lines.p->data[indexX60gensym11_] = NIM_TRUE;
		}
		LA5_: ;
		{
			NimStringV2 colontmp_;
			NIM_CHAR ai;
			NI i;
			NI L;
			colontmp_.len = 0; colontmp_.p = NIM_NIL;
			ai = (NIM_CHAR)0;
			eqcopy___stdZassertions_16((&colontmp_), (*n)._kind_3.strVal);
			i = ((NI)0);
			L = colontmp_.len;
			{
				while (1) {
					if (!(i < L)) goto LA14					;
					ai = colontmp_.p->data[i];
					switch (((NU8)(ai))) {
					case 10:
					{
						NI indexX60gensym12_;
						cline += ((NI)1);
						indexX60gensym12_ = (NI)(cline - (*ldata).lineFirst);
						{
							NI T18_;
							T18_ = (*ldata).lines.len;
							if (!(T18_ < (NI)(indexX60gensym12_ + ((NI)1)))) goto LA19_;
							setLen__cgen_12254((&(*ldata).lines), ((NI) ((NI)(indexX60gensym12_ + ((NI)1)))));
						}
						LA19_: ;
						(*ldata).lines.p->data[indexX60gensym12_] = NIM_TRUE;
					}
					break;
					default:
					{
					}
					break;
					}
					i += ((NI)1);
				} LA14: ;
			}
			eqdestroy___stdZassertions_13((&colontmp_));
		}
	}
	break;
	default:
	{
		{
			NI i_2;
			NI colontmp__2;
			NI i_3;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = safeLen__ast_3318(n);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			i_3 = ((NI)0);
			{
				while (1) {
					if (!(i_3 < colontmp__2)) goto LA25					;
					i_2 = i_3;
					visitMultilineStrings__renderverbatim_52(ldata, (*n)._kind_6.sons.p->data[i_2]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					i_3 += ((NI)1);
				} LA25: ;
			}
		}
	}
	break;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, startOfLineInsideTriple__renderverbatim_93)(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw ldata, NI line) {
	NIM_BOOL result;
	NIM_BOOL colontmpD_;
	NIM_BOOL colontmpD__2;
	NI index;
	result = (NIM_BOOL)0;
	colontmpD_ = (NIM_BOOL)0;
	colontmpD__2 = (NIM_BOOL)0;
	index = (NI)(line - ldata.lineFirst);
	{
		NI T3_;
		T3_ = ldata.lines.len;
		if (!(T3_ <= index)) goto LA4_;
		colontmpD_ = NIM_FALSE;
		result = colontmpD_;
	}
	goto LA1_;
	LA4_: ;
	{
		colontmpD__2 = ldata.lines.p->data[index];
		result = colontmpD__2;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isInIndentationBlock__renderverbatim_15)(NimStringV2 src, NI indent) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NI j;
		NI i;
		j = (NI)0;
		i = ((NI)0);
		{
			while (1) {
				if (!(i < indent)) goto LA3				;
				j = i;
				{
					if (!(src.len <= j)) goto LA6_;
					result = NIM_TRUE;
					goto BeforeRet_;
				}
				LA6_: ;
				{
					if (!!(((NU8)(src.p->data[j]) == (NU8)(32)))) goto LA10_;
					result = NIM_FALSE;
					goto BeforeRet_;
				}
				LA10_: ;
				i += ((NI)1);
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	goto BeforeRet_;
	}BeforeRet_: ;
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
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI)1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI)1))] = 0;
	(*s).len += ((NI)1);
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
static N_INLINE(NimStringV2, X5BX5D___renderverbatim_172)(NimStringV2 s, tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ x) {
	NimStringV2 result;
	NI a;
	NI L;
	result.len = 0; result.p = NIM_NIL;
	a = ((NI) (x.a));
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
static N_INLINE(tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ, dotdot___renderverbatim_142)(NI16 a, NI b) {
	tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ));
	result.a = a;
	result.b = b;
	return result;
}
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;
		NI T5_;
		if (!!((p == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)8));
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
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___renderverbatim_187)(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw* dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest).conf);
		if (!T3_) goto LA4_;
		eqdestroy___options_3149((*dest).conf);
		nimRawDispose((*dest).conf, ((NI)4));
	}
	LA4_: ;
	eqdestroy___cgen_12348((&(*dest).lines));
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, extractRunnableExamplesSource__renderverbatim_101)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NI indent) {
	NimStringV2 result;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD_;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__2;
	tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw ldata;
	tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* colontmpD__3;
	tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg first;
	tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg last;
	tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info;
	NI16 indent2;
	NU16 numLines;
	NI T7_;
	NI lastNonemptyPos;
	NI T8_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD__2 = NIM_NIL;
	nimZeroMem((void*)(&ldata), sizeof(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw));
	colontmpD__3 = NIM_NIL;
	colontmpD_ = lastSon__ast_6268(n);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	first = (*colontmpD_).info;
	{
		if (!(first.line == (*(*n)._kind_6.sons.p->data[((NI)0)]).info.line)) goto LA4_;
	}
	goto LA2_;
	LA4_: ;
	{
		first.line = (NU16)((NU16)((*(*n)._kind_6.sons.p->data[((NI)0)]).info.line) + (NU16)(((NU16)1)));
	}
	LA2_: ;
	colontmpD__2 = lastNodeRec__renderverbatim_7(n);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	last = (*colontmpD__2).info;
	info = first;
	indent2 = info.col;
	T7_ = (NI)0;
	T7_ = numLines__msgs_1144(conf, info.fileIndex);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	numLines = ((NU16) (T7_));
	lastNonemptyPos = ((NI)0);
	nimZeroMem((void*)(&ldata), sizeof(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw));
	ldata.lineFirst = ((NI) (first.line));
	colontmpD__3 = 0;
	eqcopy___options_3378(&colontmpD__3, conf);
	ldata.conf = colontmpD__3;
	T8_ = (NI)0;
	T8_ = len__ast_3325(n);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	visitMultilineStrings__renderverbatim_52((&ldata), (*n)._kind_6.sons.p->data[(NI)(T8_ - ((NI)1))]);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = TM__Ut3DGYXxqjf6Sd7VfREQEw_10;
	{
		NU16 line;
		NI res;
		line = (NU16)0;
		res = ((NI) (first.line));
		{
			while (1) {
				NimStringV2 src;
				NIM_BOOL special;
				if (!(res <= ((NI) (numLines)))) goto LA11				;
				src.len = 0; src.p = NIM_NIL;
				line = ((NU16) (res));
				info.line = line;
				src = sourceLine__msgs_1155(conf, info);
				if (NIM_UNLIKELY(*nimErr_)) goto LA12_;
				special = startOfLineInsideTriple__renderverbatim_93(ldata, ((NI) (line)));
				if (NIM_UNLIKELY(*nimErr_)) goto LA12_;
				{
					NIM_BOOL T15_;
					NIM_BOOL T16_;
					NIM_BOOL T19_;
					T15_ = (NIM_BOOL)0;
					T16_ = (NIM_BOOL)0;
					T16_ = ((NU16)(last.line) < (NU16)(line));
					if (!(T16_)) goto LA17_;
					T16_ = !(special);
					LA17_: ;
					T15_ = T16_;
					if (!(T15_)) goto LA18_;
					T19_ = (NIM_BOOL)0;
					T19_ = isInIndentationBlock__renderverbatim_15(src, ((NI) (indent2)));
					if (NIM_UNLIKELY(*nimErr_)) goto LA12_;
					T15_ = !(T19_);
					LA18_: ;
					if (!T15_) goto LA20_;
					eqdestroy___stdZassertions_13((&src));
					goto LA9;
				}
				LA20_: ;
				{
					if (!((NU16)(first.line) < (NU16)(line))) goto LA24_;
					prepareAdd((&result), 1);
appendString((&result), TM__Ut3DGYXxqjf6Sd7VfREQEw_12);
				}
				LA24_: ;
				{
					if (!special) goto LA28_;
					prepareAdd((&result), src.len + 0);
appendString((&result), src);
					lastNonemptyPos = result.len;
				}
				goto LA26_;
				LA28_: ;
				{
					NimStringV2 colontmpD__4;
					tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ T36_;
					if (!(((NI) (indent2)) < src.len)) goto LA31_;
					colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
					{
						NI i;
						NI i_2;
						i = (NI)0;
						i_2 = ((NI)0);
						{
							while (1) {
								if (!(i_2 < indent)) goto LA35								;
								i = i_2;
								nimAddCharV1((&result), 32);
								i_2 += ((NI)1);
							} LA35: ;
						}
					}
					T36_ = dotdot___renderverbatim_142(indent2, ((NI)1));
					colontmpD__4 = X5BX5D___renderverbatim_172(src, T36_);
					if (NIM_UNLIKELY(*nimErr_)) goto LA12_;
					prepareAdd((&result), colontmpD__4.len + 0);
appendString((&result), colontmpD__4);
					lastNonemptyPos = result.len;
					eqdestroy___stdZassertions_13((&colontmpD__4));
				}
				goto LA26_;
				LA31_: ;
				LA26_: ;
				res += ((NI)1);
				{
					LA12_:;
				}
				{
					eqdestroy___stdZassertions_13((&src));
				}
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			} LA11: ;
		}
	} LA9: ;
	setLengthStrV2((&result), ((NI) (lastNonemptyPos)));
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___renderverbatim_187((&ldata));
		eqdestroy___ast_3454(&colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
