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
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA;
typedef struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ tySequence__xxu3GgaFAGO6lOns9aHaeLQ;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content;
typedef struct tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw;
typedef struct tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA;
typedef struct tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg;
typedef struct tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA;
typedef struct tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA;
typedef struct tySequence__Bre9bNyuQOg1EJKitjSzn8w tySequence__Bre9bNyuQOg1EJKitjSzn8w;
typedef struct tySequence__Bre9bNyuQOg1EJKitjSzn8w_Content tySequence__Bre9bNyuQOg1EJKitjSzn8w_Content;
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ;
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content;
typedef NU8 tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A;
struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw;
typedef NU8 tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
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
struct tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw {
NI32 module;
NI32 item;
};
struct tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ {
  RootObj Sup;
tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw itemId;
};
typedef NU8 tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ;
typedef NU16 tyEnum_TMagic__mTDI9bmjHUNrwgx3GHm4Krg;
typedef NU64 tySet_tyEnum_TSymFlag__TAs9cOBd13PVhEf42OX9cOdg;
typedef NU32 tySet_tyEnum_TOption__PrH9cMsvu5oCG0HODAZ3CAg;
typedef NU8 tyEnum_TLocKind__iCEcZjTaghPmL3Wx2e5DQw;
typedef NU8 tyEnum_TStorageLoc__BKvMXWvKko6Yn5329c9aw9afg;
typedef NU16 tySet_tyEnum_TLocFlag__9a7m8BSAfzn6yluCKaq6viw;
struct tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA {
tyEnum_TLocKind__iCEcZjTaghPmL3Wx2e5DQw k;
tyEnum_TStorageLoc__BKvMXWvKko6Yn5329c9aw9afg storage;
tySet_tyEnum_TLocFlag__9a7m8BSAfzn6yluCKaq6viw flags;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* lode;
NimStringV2 r;
};
struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA {
  tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ Sup;
tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ kind;
union{
struct {tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* gcUnsafetyReason;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* transformedBody;
} _kind_1;
struct {tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* guard;
NI bitsize;
NI alignment;
} _kind_2;
};
tyEnum_TMagic__mTDI9bmjHUNrwgx3GHm4Krg magic;
tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typ;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* name;
tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info;
tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* owner;
tySet_tyEnum_TSymFlag__TAs9cOBd13PVhEf42OX9cOdg flags;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* ast;
tySet_tyEnum_TOption__PrH9cMsvu5oCG0HODAZ3CAg options;
NI position;
NI offset;
tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA loc;
tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg* annex;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* constraint;
};
struct tySequence__Bre9bNyuQOg1EJKitjSzn8w {
  NI len; tySequence__Bre9bNyuQOg1EJKitjSzn8w_Content* p;
};
typedef NI tyArray__emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA {
NI elems;
NI counter;
NI max;
tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* head;
tySequence__Bre9bNyuQOg1EJKitjSzn8w data;
tyArray__emiAJ8okywrJw7ZHLzlXbQ a;
};
typedef NU8 tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ;
typedef NU8 tyEnum_TCallingConvention__XL1p2EKvOAlAHpc68ecZPw;
typedef NU64 tySet_tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q;
struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ {
  NI len; tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content* p;
};
struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA {
  tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ Sup;
tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ kind;
tyEnum_TCallingConvention__XL1p2EKvOAlAHpc68ecZPw callConv;
tySet_tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q flags;
tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ sons;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n;
tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* owner;
tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* sym;
NI64 size;
NI16 align;
NI16 paddingAtEnd;
tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA loc;
tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typeInst;
tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw uniqueId;
};
typedef NU8 tyEnum_TDistinctCompare__H0D0zbMLh4bchAD4N9bLm5A;
typedef NU8 tySet_tyEnum_TTypeCmpFlag__taKmDpZ7mWMrTpIE9cV59a7w;
typedef NU8 tySet_tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ[9];


#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__Bre9bNyuQOg1EJKitjSzn8w_Content_PP
#define tySequence__Bre9bNyuQOg1EJKitjSzn8w_Content_PP
struct tySequence__Bre9bNyuQOg1EJKitjSzn8w_Content { NI cap; tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content_PP
#define tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content_PP
struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content { NI cap; tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A, isPartOf__aliases_128)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* a, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, initIntSet__pureZcollectionsZintsets_389)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* Result);
N_LIB_PRIVATE N_NIMCALL(void, initPackedSet__pureZcollectionsZintsets_16)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* Result);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A, isPartOfAux__aliases_14)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* a, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* b, tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* marker);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3543)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA** dest);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsOrIncl__astalgo_402)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* s, NI key);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3546)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA** dest, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, compareTypes__types_2846)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* x, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* y, tyEnum_TDistinctCompare__H0D0zbMLh4bchAD4N9bLm5A cmp, tySet_tyEnum_TTypeCmpFlag__taKmDpZ7mWMrTpIE9cV59a7w flags);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA*, skipTypes__ast_4803)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t, tySet_tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ kinds);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A, isPartOfAux__aliases_18)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* b, tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* marker);
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, lastSon__ast_6268)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3454)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA*, lastSon__ast_4811)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* n);
static N_INLINE(NI, len__ast_5071)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* n);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZcollectionsZintsets_181)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* dest);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A, isPartOf__aliases_133)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDeepConstExpr__trees_178)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, NIM_BOOL preventInheritance);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, sameValue__astalgo_120)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b);
static NIM_CONST tySet_tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ TM__070zgHAEsZhDDk2M26YTLA_2 = {
0x10, 0x09, 0xe0, 0x00, 0x00, 0xe0, 0x80, 0x00,
0x00}
;
extern NIM_BOOL nimInErrorMode__system_3994;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3994);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int)0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, initIntSet__pureZcollectionsZintsets_389)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* Result) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	initPackedSet__pureZcollectionsZintsets_16(Result);
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
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A, isPartOfAux__aliases_18)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* b, tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* marker) {
	tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A result;
NIM_BOOL oldNimErrFin18_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0;
	result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0);
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)138):
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len__ast_3325(n);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			i_2 = ((NI)0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA4					;
					i = i_2;
					result = isPartOfAux__aliases_18((*n)._kind_6.sons.p->data[i], b, marker);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					{
						if (!(result == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)2))) goto LA7_;
						goto BeforeRet_;
					}
					LA7_: ;
					i_2 += ((NI)1);
				} LA4: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)139):
	{
		result = isPartOfAux__aliases_18((*n)._kind_6.sons.p->data[((NI)0)], b, marker);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		{
			if (!(result == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)2))) goto LA12_;
			goto BeforeRet_;
		}
		LA12_: ;
		{
			NI i_3;
			NI colontmp__2;
			NI i_4;
			i_3 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = len__ast_3325(n);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			i_4 = ((NI)1);
			{
				while (1) {
					if (!(i_4 < colontmp__2)) goto LA16					;
					i_3 = i_4;
					switch ((*(*n)._kind_6.sons.p->data[i_3]).kind) {
					case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)85):
					case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)88):
					{
						tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD_;
						colontmpD_ = NIM_NIL;
						colontmpD_ = lastSon__ast_6268((*n)._kind_6.sons.p->data[i_3]);
						if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
						result = isPartOfAux__aliases_18(colontmpD_, b, marker);
						if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
						{
							if (!(result == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)2))) goto LA21_;
							eqdestroy___ast_3454(&colontmpD_);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							goto BeforeRet_;
						}
						LA21_: ;
						{
							LA18_:;
						}
						{
							oldNimErrFin18_ = *nimErr_; *nimErr_ = NIM_FALSE;
							eqdestroy___ast_3454(&colontmpD_);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							*nimErr_ = oldNimErrFin18_;
						}
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
					break;
					default:
					{
					}
					break;
					}
					i_4 += ((NI)1);
				} LA16: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3):
	{
		result = isPartOfAux__aliases_14((*(*n)._kind_4.sym).typ, b, marker);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, len__ast_5071)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = (*n).sons.len;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A, isPartOfAux__aliases_14)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* a, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* b, tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* marker) {
	tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A result;
	tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* xX60gensym7_;
NIM_BOOL oldNimErrFin24_;
NIM_BOOL oldNimErrFin32_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0;
	xX60gensym7_ = NIM_NIL;
	result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0);
	{
		NIM_BOOL T4_;
		T4_ = (NIM_BOOL)0;
		T4_ = (a == ((tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA*) NIM_NIL));
		if (T4_) goto LA5_;
		T4_ = (b == ((tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA*) NIM_NIL));
		LA5_: ;
		if (!T4_) goto LA6_;
		eqdestroy___ast_3543(&xX60gensym7_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA6_: ;
	{
		NIM_BOOL T10_;
		eqcopy___ast_3546(&xX60gensym7_, a);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T10_ = (NIM_BOOL)0;
		T10_ = containsOrIncl__astalgo_402(marker, (NI)((NI)((NU32)(((NI) ((*xX60gensym7_).Sup.itemId.module))) << (NU32)(((NI)20))) + ((NI) ((*xX60gensym7_).Sup.itemId.item))));
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!T10_) goto LA11_;
		eqdestroy___ast_3543(&xX60gensym7_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA11_: ;
	{
		tySet_tyEnum_TTypeCmpFlag__taKmDpZ7mWMrTpIE9cV59a7w T15_;
		NIM_BOOL T16_;
		T15_ = 0;
		T16_ = (NIM_BOOL)0;
		T16_ = compareTypes__types_2846(a, b, ((tyEnum_TDistinctCompare__H0D0zbMLh4bchAD4N9bLm5A)1), T15_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!T16_) goto LA17_;
		result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)2);
		eqdestroy___ast_3543(&xX60gensym7_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA17_: ;
	switch ((*a).kind) {
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)17):
	{
		{
			tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* colontmpD_;
			if (!!(((*a).sons.p->data[((NI)0)] == ((tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA*) NIM_NIL)))) goto LA22_;
			colontmpD_ = NIM_NIL;
			colontmpD_ = skipTypes__ast_4803((*a).sons.p->data[((NI)0)], TM__070zgHAEsZhDDk2M26YTLA_2);
			if (NIM_UNLIKELY(*nimErr_)) goto LA24_;
			result = isPartOfAux__aliases_14(colontmpD_, b, marker);
			if (NIM_UNLIKELY(*nimErr_)) goto LA24_;
			{
				LA24_:;
			}
			{
				oldNimErrFin24_ = *nimErr_; *nimErr_ = NIM_FALSE;
				eqdestroy___ast_3543(&colontmpD_);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				*nimErr_ = oldNimErrFin24_;
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		}
		LA22_: ;
		{
			if (!(result == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0))) goto LA29_;
			result = isPartOfAux__aliases_18((*a).n, b, marker);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		}
		LA29_: ;
	}
	break;
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)11):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)13):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)4):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)46):
	{
		tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* colontmpD__2;
		colontmpD__2 = NIM_NIL;
		colontmpD__2 = lastSon__ast_4811(a);
		if (NIM_UNLIKELY(*nimErr_)) goto LA32_;
		result = isPartOfAux__aliases_14(colontmpD__2, b, marker);
		if (NIM_UNLIKELY(*nimErr_)) goto LA32_;
		{
			LA32_:;
		}
		{
			oldNimErrFin32_ = *nimErr_; *nimErr_ = NIM_FALSE;
			eqdestroy___ast_3543(&colontmpD__2);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			*nimErr_ = oldNimErrFin32_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	break;
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)16):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)19):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)18):
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len__ast_5071(a);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			i_2 = ((NI)0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA38					;
					i = i_2;
					result = isPartOfAux__aliases_14((*a).sons.p->data[i], b, marker);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					{
						if (!(result == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)2))) goto LA41_;
						eqdestroy___ast_3543(&xX60gensym7_);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						goto BeforeRet_;
					}
					LA41_: ;
					i_2 += ((NI)1);
				} LA38: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___ast_3543(&xX60gensym7_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A, isPartOf__aliases_128)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* a, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* b) {
	tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A result;
	tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA marker;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0;
	nimZeroMem((void*)(&marker), sizeof(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA));
	initIntSet__pureZcollectionsZintsets_389((&marker));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = isPartOfAux__aliases_14(b, a, (&marker));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___pureZcollectionsZintsets_181((&marker));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A, isPartOf__aliases_133)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b) {
	tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A result;
NIM_BOOL oldNimErrFin38_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0;
	{
		if (!((*a).kind == (*b).kind)) goto LA3_;
		switch ((*a).kind) {
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3):
		{
			tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* xX60gensym12_;
			tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* xX60gensym13_;
			xX60gensym12_ = NIM_NIL;
			xX60gensym13_ = NIM_NIL;
			{
				xX60gensym12_ = (*a)._kind_4.sym;
				xX60gensym13_ = (*b)._kind_4.sym;
				if (!((NI)((NI)((NU32)(((NI) ((*xX60gensym12_).Sup.itemId.module))) << (NU32)(((NI)20))) + ((NI) ((*xX60gensym12_).Sup.itemId.item))) == (NI)((NI)((NU32)(((NI) ((*xX60gensym13_).Sup.itemId.module))) << (NU32)(((NI)20))) + ((NI) ((*xX60gensym13_).Sup.itemId.item))))) goto LA8_;
				result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)2);
			}
			goto LA6_;
			LA8_: ;
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				T11_ = ((*(*a)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)8) || (*(*a)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)5) || (*(*a)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)12) || (*(*a)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)13));
				if (T11_) goto LA12_;
				T11_ = ((*(*b)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)8) || (*(*b)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)5) || (*(*b)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)12) || (*(*b)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)13));
				LA12_: ;
				if (!T11_) goto LA13_;
				result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0);
			}
			goto LA6_;
			LA13_: ;
			{
				{
					tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A T18_;
					T18_ = (tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0;
					T18_ = isPartOf__aliases_128((*(*a)._kind_4.sym).typ, (*(*b)._kind_4.sym).typ);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					if (!!((T18_ == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0)))) goto LA19_;
					result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)1);
				}
				LA19_: ;
			}
			LA6_: ;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)42):
		{
			result = isPartOf__aliases_133((*a)._kind_6.sons.p->data[((NI)0)], (*b)._kind_6.sons.p->data[((NI)0)]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			{
				NIM_BOOL T24_;
				NI T25_;
				NI T27_;
				T24_ = (NIM_BOOL)0;
				T25_ = (NI)0;
				T25_ = len__ast_3325(a);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				T24_ = (((NI)2) <= T25_);
				if (!(T24_)) goto LA26_;
				T27_ = (NI)0;
				T27_ = len__ast_3325(b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				T24_ = (((NI)2) <= T27_);
				LA26_: ;
				if (!T24_) goto LA28_;
				{
					NIM_BOOL T32_;
					NIM_BOOL T33_;
					tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* x;
					tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* y;
					tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* T39_;
					tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* T45_;
					T32_ = (NIM_BOOL)0;
					T33_ = (NIM_BOOL)0;
					T33_ = (result == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)2));
					if (!(T33_)) goto LA34_;
					T33_ = isDeepConstExpr__trees_178((*a)._kind_6.sons.p->data[((NI)1)], NIM_FALSE);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					LA34_: ;
					T32_ = T33_;
					if (!(T32_)) goto LA35_;
					T32_ = isDeepConstExpr__trees_178((*b)._kind_6.sons.p->data[((NI)1)], NIM_FALSE);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					LA35_: ;
					if (!T32_) goto LA36_;
					x = NIM_NIL;
					y = NIM_NIL;
					T39_ = NIM_NIL;
					{
						if (!((*(*a)._kind_6.sons.p->data[((NI)1)]).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)58))) goto LA42_;
						eqcopy___ast_3457(&x, (*(*a)._kind_6.sons.p->data[((NI)1)])._kind_6.sons.p->data[((NI)1)]);
						if (NIM_UNLIKELY(*nimErr_)) goto LA38_;
					}
					goto LA40_;
					LA42_: ;
					{
						eqcopy___ast_3457(&x, (*a)._kind_6.sons.p->data[((NI)1)]);
						if (NIM_UNLIKELY(*nimErr_)) goto LA38_;
					}
					LA40_: ;
					T45_ = NIM_NIL;
					{
						if (!((*(*b)._kind_6.sons.p->data[((NI)1)]).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)58))) goto LA48_;
						eqcopy___ast_3457(&y, (*(*b)._kind_6.sons.p->data[((NI)1)])._kind_6.sons.p->data[((NI)1)]);
						if (NIM_UNLIKELY(*nimErr_)) goto LA38_;
					}
					goto LA46_;
					LA48_: ;
					{
						eqcopy___ast_3457(&y, (*b)._kind_6.sons.p->data[((NI)1)]);
						if (NIM_UNLIKELY(*nimErr_)) goto LA38_;
					}
					LA46_: ;
					{
						NIM_BOOL T53_;
						T53_ = (NIM_BOOL)0;
						T53_ = sameValue__astalgo_120(x, y);
						if (NIM_UNLIKELY(*nimErr_)) goto LA38_;
						if (!T53_) goto LA54_;
						result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)2);
					}
					goto LA51_;
					LA54_: ;
					{
						result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0);
					}
					LA51_: ;
					{
						LA38_:;
					}
					{
						oldNimErrFin38_ = *nimErr_; *nimErr_ = NIM_FALSE;
						eqdestroy___ast_3454(&y);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						eqdestroy___ast_3454(&x);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						*nimErr_ = oldNimErrFin38_;
					}
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				LA36_: ;
			}
			goto LA22_;
			LA28_: ;
			{
				{
					if (!!((result == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)2)))) goto LA62_;
					{
						tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A T66_;
						T66_ = (tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0;
						T66_ = isPartOf__aliases_128((*a).typ, (*b).typ);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						if (!!((T66_ == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0)))) goto LA67_;
						result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)1);
					}
					LA67_: ;
				}
				LA62_: ;
			}
			LA22_: ;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)45):
		{
			result = isPartOf__aliases_133((*a)._kind_6.sons.p->data[((NI)0)], (*b)._kind_6.sons.p->data[((NI)0)]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			{
				tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* xX60gensym38_;
				tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* xX60gensym40_;
				if (!!((result == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0)))) goto LA72_;
				xX60gensym38_ = NIM_NIL;
				xX60gensym40_ = NIM_NIL;
				{
					xX60gensym38_ = (*(*a)._kind_6.sons.p->data[((NI)1)])._kind_4.sym;
					xX60gensym40_ = (*(*b)._kind_6.sons.p->data[((NI)1)])._kind_4.sym;
					if (!!(((NI)((NI)((NU32)(((NI) ((*xX60gensym38_).Sup.itemId.module))) << (NU32)(((NI)20))) + ((NI) ((*xX60gensym38_).Sup.itemId.item))) == (NI)((NI)((NU32)(((NI) ((*xX60gensym40_).Sup.itemId.module))) << (NU32)(((NI)20))) + ((NI) ((*xX60gensym40_).Sup.itemId.item)))))) goto LA76_;
					result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0);
				}
				LA76_: ;
			}
			LA72_: ;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)65):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)47):
		{
			result = isPartOf__aliases_133((*a)._kind_6.sons.p->data[((NI)0)], (*b)._kind_6.sons.p->data[((NI)0)]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			{
				if (!!((result == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)2)))) goto LA81_;
				{
					tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A T85_;
					T85_ = (tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0;
					T85_ = isPartOf__aliases_128((*a).typ, (*b).typ);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					if (!!((T85_ == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0)))) goto LA86_;
					result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)1);
				}
				LA86_: ;
			}
			LA81_: ;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)58):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)59):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)60):
		{
			result = isPartOf__aliases_133((*a)._kind_6.sons.p->data[((NI)1)], (*b)._kind_6.sons.p->data[((NI)1)]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)67):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)66):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)46):
		{
			result = isPartOf__aliases_133((*a)._kind_6.sons.p->data[((NI)0)], (*b)._kind_6.sons.p->data[((NI)0)]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1_;
	LA3_: ;
	{
		switch ((*b).kind) {
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)42):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)45) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)46):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)64):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)66) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)67):
		{
			result = isPartOf__aliases_133(a, (*b)._kind_6.sons.p->data[((NI)0)]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)47):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)65):
		{
			{
				tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A T96_;
				T96_ = (tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0;
				T96_ = isPartOf__aliases_128((*a).typ, (*b).typ);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!!((T96_ == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0)))) goto LA97_;
				result = isPartOf__aliases_133(a, (*b)._kind_6.sons.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				{
					if (!(result == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0))) goto LA101_;
					result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)1);
				}
				LA101_: ;
			}
			LA97_: ;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)58) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)60):
		{
			result = isPartOf__aliases_133(a, (*b)._kind_6.sons.p->data[((NI)1)]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3):
		{
			switch ((*a).kind) {
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)42):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)45) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)46):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)64):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)66) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)67):
			{
				result = isPartOf__aliases_133((*a)._kind_6.sons.p->data[((NI)0)], b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)58) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)60):
			{
				result = isPartOf__aliases_133((*a)._kind_6.sons.p->data[((NI)1)], b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)47):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)65):
			{
				{
					tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A T110_;
					T110_ = (tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0;
					T110_ = isPartOf__aliases_128((*a).typ, (*b).typ);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					if (!!((T110_ == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0)))) goto LA111_;
					result = isPartOf__aliases_133((*a)._kind_6.sons.p->data[((NI)0)], b);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					{
						if (!(result == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0))) goto LA115_;
						result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)1);
					}
					LA115_: ;
				}
				LA111_: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)38):
		{
			result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0);
			{
				NI i;
				NI colontmp_;
				NI i_2;
				i = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = len__ast_3325(b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i_2 = ((NI)1);
				{
					while (1) {
						tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A res;
						if (!(i_2 < colontmp_)) goto LA121						;
						i = i_2;
						res = isPartOf__aliases_133(a, (*(*b)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)1)]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						{
							if (!!((res == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0)))) goto LA124_;
							result = res;
							{
								if (!(res == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)2))) goto LA128_;
								goto LA119;
							}
							LA128_: ;
						}
						LA124_: ;
						i_2 += ((NI)1);
					} LA121: ;
				}
			} LA119: ;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)26) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)32):
		{
			result = ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0);
			{
				NI i_3;
				NI colontmp__2;
				NI i_4;
				i_3 = (NI)0;
				colontmp__2 = (NI)0;
				colontmp__2 = len__ast_3325(b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i_4 = ((NI)1);
				{
					while (1) {
						tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A res_2;
						if (!(i_4 < colontmp__2)) goto LA133						;
						i_3 = i_4;
						res_2 = isPartOf__aliases_133(a, (*b)._kind_6.sons.p->data[i_3]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						{
							if (!!((res_2 == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)0)))) goto LA136_;
							result = res_2;
							{
								if (!(res_2 == ((tyEnum_TAnalysisResult__lH6TLXHWVWvIEotJXo7r7A)2))) goto LA140_;
								goto LA131;
							}
							LA140_: ;
						}
						LA136_: ;
						i_4 += ((NI)1);
					} LA133: ;
				}
			} LA131: ;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)41):
		{
			{
				NI T145_;
				T145_ = (NI)0;
				T145_ = len__ast_3325(b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!(((NI)0) < T145_)) goto LA146_;
				result = isPartOf__aliases_133(a, (*b)._kind_6.sons.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			}
			LA146_: ;
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
