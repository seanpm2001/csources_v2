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
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ;
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content;
typedef struct tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA;
typedef struct tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA;
typedef struct tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA;
typedef struct tySequence__Bre9bNyuQOg1EJKitjSzn8w tySequence__Bre9bNyuQOg1EJKitjSzn8w;
typedef struct tySequence__Bre9bNyuQOg1EJKitjSzn8w_Content tySequence__Bre9bNyuQOg1EJKitjSzn8w_Content;
typedef struct tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg;
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
typedef NU8 tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ;
typedef NU8 tyEnum_TCallingConvention__XL1p2EKvOAlAHpc68ecZPw;
typedef NU64 tySet_tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q;
struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ {
  NI len; tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content* p;
};
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
typedef NU8 tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q;
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__f0FB9cnkWctQL3L8oQv5MBg) (tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t);
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
typedef NU8 tyEnum_TDistinctCompare__H0D0zbMLh4bchAD4N9bLm5A;
typedef NU8 tySet_tyEnum_TTypeCmpFlag__taKmDpZ7mWMrTpIE9cV59a7w;
typedef NU8 tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ;
typedef NU16 tyEnum_TMagic__mTDI9bmjHUNrwgx3GHm4Krg;
typedef NU64 tySet_tyEnum_TSymFlag__TAs9cOBd13PVhEf42OX9cOdg;
typedef NU32 tySet_tyEnum_TOption__PrH9cMsvu5oCG0HODAZ3CAg;
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


#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content_PP
#define tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content_PP
struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content { NI cap; tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__Bre9bNyuQOg1EJKitjSzn8w_Content_PP
#define tySequence__Bre9bNyuQOg1EJKitjSzn8w_Content_PP
struct tySequence__Bre9bNyuQOg1EJKitjSzn8w_Content { NI cap; tyObject_TrunkcolonObjectType___POcWT53G7t0BSUjc31o0iA* data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsTyRef__types_652)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typ);
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, checkIsolate__isolation95check_113)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3546)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA** dest, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* src);
static N_INLINE(NIM_BOOL, isCompileTimeOnly__types_3767)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, canAlias__isolation95check_100)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* arg, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* ret);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isValueOnlyType__isolation95check_90)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, searchTypeFor__types_471)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t, tyProc__f0FB9cnkWctQL3L8oQv5MBg predicate);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, wrap__isolation95check_93)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(void, initIntSet__pureZcollectionsZintsets_389)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* Result);
N_LIB_PRIVATE N_NIMCALL(void, initPackedSet__pureZcollectionsZintsets_16)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* Result);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, canAlias__isolation95check_6)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* arg, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* ret, tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* marker);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsOrIncl__astalgo_402)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* s, NI key);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3543)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA** dest);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, compareTypes__types_2855)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* x, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* y, tyEnum_TDistinctCompare__H0D0zbMLh4bchAD4N9bLm5A cmp, tySet_tyEnum_TTypeCmpFlag__taKmDpZ7mWMrTpIE9cV59a7w flags);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isFinal__types_754)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, canAliasN__isolation95check_10)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* arg, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* marker);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, lastSon__ast_6268)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3454)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest);
static N_INLINE(NI, len__ast_5071)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA*, lastSon__ast_4811)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* n);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZcollectionsZintsets_181)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* dest);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsVariable__isolation95check_105)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
static N_INLINE(NI, safeLen__ast_3318)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
extern NIM_BOOL nimInErrorMode__system_3978;
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = (*n)._kind_6.sons.len;
	result = T1_;
	return result;
}
static N_INLINE(NIM_BOOL, isCompileTimeOnly__types_3767)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((*t).kind == ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)8) || (*t).kind == ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)60));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, wrap__isolation95check_93)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((*t).kind == ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)22) || (*t).kind == ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)21) || (*t).kind == ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)23) || (*t).kind == ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)47));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3978);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isValueOnlyType__isolation95check_90)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t) {
	NIM_BOOL result;
	NIM_BOOL T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = searchTypeFor__types_471(t, wrap__isolation95check_93);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = !(T1_);
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
static N_INLINE(void, initIntSet__pureZcollectionsZintsets_389)(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* Result) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	initPackedSet__pureZcollectionsZintsets_16(Result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, canAliasN__isolation95check_10)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* arg, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* marker) {
	NIM_BOOL result;
NIM_BOOL oldNimErrFin18_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
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
					result = canAliasN__isolation95check_10(arg, (*n)._kind_6.sons.p->data[i], marker);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					{
						if (!result) goto LA7_;
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
		result = canAliasN__isolation95check_10(arg, (*n)._kind_6.sons.p->data[((NI)0)], marker);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		{
			if (!result) goto LA12_;
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
						result = canAliasN__isolation95check_10(arg, colontmpD_, marker);
						if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
						{
							if (!result) goto LA21_;
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
		result = canAlias__isolation95check_6(arg, (*(*n)._kind_4.sym).typ, marker);
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, canAlias__isolation95check_6)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* arg, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* ret, tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA* marker) {
	NIM_BOOL result;
	tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* xX60gensym7_;
NIM_BOOL oldNimErrFin42_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	xX60gensym7_ = NIM_NIL;
	{
		NIM_BOOL T4_;
		eqcopy___ast_3546(&xX60gensym7_, ret);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T4_ = (NIM_BOOL)0;
		T4_ = containsOrIncl__astalgo_402(marker, (NI)((NI)((NU64)(((NI) ((*xX60gensym7_).Sup.itemId.module))) << (NU64)(((NI)24))) + ((NI) ((*xX60gensym7_).Sup.itemId.item))));
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!T4_) goto LA5_;
		result = NIM_FALSE;
		eqdestroy___ast_3543(&xX60gensym7_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		if (!((*ret).kind == ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)21) || (*ret).kind == ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)26))) goto LA9_;
		result = NIM_FALSE;
		eqdestroy___ast_3543(&xX60gensym7_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA9_: ;
	{
		tySet_tyEnum_TTypeCmpFlag__taKmDpZ7mWMrTpIE9cV59a7w T13_;
		NIM_BOOL T14_;
		T13_ = 0;
		T14_ = (NIM_BOOL)0;
		T14_ = compareTypes__types_2855(arg, ret, ((tyEnum_TDistinctCompare__H0D0zbMLh4bchAD4N9bLm5A)1), T13_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!T14_) goto LA15_;
		result = NIM_TRUE;
		eqdestroy___ast_3543(&xX60gensym7_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA15_: ;
	switch ((*ret).kind) {
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)17):
	{
		{
			NIM_BOOL T20_;
			T20_ = (NIM_BOOL)0;
			T20_ = isFinal__types_754(ret);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			if (!T20_) goto LA21_;
			result = canAliasN__isolation95check_10(arg, (*ret).n, marker);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			{
				NIM_BOOL T25_;
				NIM_BOOL T26_;
				NI T28_;
				T25_ = (NIM_BOOL)0;
				T26_ = (NIM_BOOL)0;
				T26_ = !(result);
				if (!(T26_)) goto LA27_;
				T28_ = (NI)0;
				T28_ = len__ast_5071(ret);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				T26_ = (((NI)0) < T28_);
				LA27_: ;
				T25_ = T26_;
				if (!(T25_)) goto LA29_;
				T25_ = !(((*ret).sons.p->data[((NI)0)] == ((tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA*) NIM_NIL)));
				LA29_: ;
				if (!T25_) goto LA30_;
				result = canAlias__isolation95check_6(arg, (*ret).sons.p->data[((NI)0)], marker);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			LA30_: ;
		}
		goto LA18_;
		LA21_: ;
		{
			result = NIM_TRUE;
		}
		LA18_: ;
	}
	break;
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)18):
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len__ast_5071(ret);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			i_2 = ((NI)0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA36					;
					i = i_2;
					result = canAlias__isolation95check_6(arg, (*ret).sons.p->data[i], marker);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					{
						if (!result) goto LA39_;
						goto LA34;
					}
					LA39_: ;
					i_2 += ((NI)1);
				} LA36: ;
			}
		} LA34: ;
	}
	break;
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)16):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)24):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)13):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)11):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)4):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)55):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)46):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)47):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)45):
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)22):
	{
		tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* colontmpD_;
		colontmpD_ = NIM_NIL;
		colontmpD_ = lastSon__ast_4811(ret);
		if (NIM_UNLIKELY(*nimErr_)) goto LA42_;
		result = canAlias__isolation95check_6(arg, colontmpD_, marker);
		if (NIM_UNLIKELY(*nimErr_)) goto LA42_;
		{
			LA42_:;
		}
		{
			oldNimErrFin42_ = *nimErr_; *nimErr_ = NIM_FALSE;
			eqdestroy___ast_3543(&colontmpD_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			*nimErr_ = oldNimErrFin42_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	break;
	case ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)25):
	{
		result = ((*ret).callConv == ((tyEnum_TCallingConvention__XL1p2EKvOAlAHpc68ecZPw)9));
	}
	break;
	default:
	{
		result = NIM_FALSE;
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, canAlias__isolation95check_100)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* arg, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* ret) {
	NIM_BOOL result;
NIM_BOOL oldNimErrFin7_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isValueOnlyType__isolation95check_90(arg);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA marker;
		nimZeroMem((void*)(&marker), sizeof(tyObject_PackedSet__IhxwDBRi51nGrosBGFKcsA));
		initIntSet__pureZcollectionsZintsets_389((&marker));
		if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		result = canAlias__isolation95check_6(arg, ret, (&marker));
		if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		{
			LA7_:;
		}
		{
			oldNimErrFin7_ = *nimErr_; *nimErr_ = NIM_FALSE;
			eqdestroy___pureZcollectionsZintsets_181((&marker));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			*nimErr_ = oldNimErrFin7_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsVariable__isolation95check_105)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NIM_BOOL result;
NIM_BOOL oldNimErrFin5_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)0) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)2):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)4) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)23):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)51) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)52):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)79) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)84):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)90):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)98):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)101) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)102):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)116):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)118):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)121) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)123):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)125):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)132):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)158) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)159):
	{
		result = NIM_FALSE;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3):
	{
		result = ((*(*n)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)21) || (*(*n)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)3) || (*(*n)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)8) || (*(*n)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)9) || (*(*n)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)10) || (*(*n)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)11) || (*(*n)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)5));
	}
	break;
	default:
	{
		{
			tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* ch;
			ch = NIM_NIL;
			{
				NI i;
				NI colontmp_;
				NI i_2;
				i = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = safeLen__ast_3318(n);
				if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
				i_2 = ((NI)0);
				{
					while (1) {
						if (!(i_2 < colontmp_)) goto LA8						;
						i = i_2;
						eqcopy___ast_3457(&ch, (*n)._kind_6.sons.p->data[i]);
						if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
						{
							NIM_BOOL T11_;
							T11_ = (NIM_BOOL)0;
							T11_ = containsVariable__isolation95check_105(ch);
							if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
							if (!T11_) goto LA12_;
							result = NIM_TRUE;
							eqdestroy___ast_3454(&ch);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							goto BeforeRet_;
						}
						LA12_: ;
						i_2 += ((NI)1);
					} LA8: ;
				}
			}
			{
				LA5_:;
			}
			{
				oldNimErrFin5_ = *nimErr_; *nimErr_ = NIM_FALSE;
				eqdestroy___ast_3454(&ch);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				*nimErr_ = oldNimErrFin5_;
			}
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		result = NIM_FALSE;
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, checkIsolate__isolation95check_113)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NIM_BOOL result;
NIM_BOOL oldNimErrFin21_;
NIM_BOOL oldNimErrFin45_;
NIM_BOOL oldNimErrFin41_;
NIM_BOOL oldNimErrFin58_;
NIM_BOOL oldNimErrFin69_;
NIM_BOOL oldNimErrFin78_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = containsTyRef__types_652((*n).typ);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		switch ((*n).kind) {
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)5) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)23):
		{
			result = NIM_TRUE;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)26) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)32):
		{
			{
				if (!!((((*(*(*n)._kind_6.sons.p->data[((NI)0)]).typ).flags &((NU64)1<<((NU)((((tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q)1)))&63U)))!=0))) goto LA10_;
				result = NIM_FALSE;
				goto BeforeRet_;
			}
			LA10_: ;
			{
				NI i;
				NI colontmp_;
				NI i_2;
				i = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = len__ast_3325(n);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i_2 = ((NI)1);
				{
					while (1) {
						if (!(i_2 < colontmp_)) goto LA14						;
						i = i_2;
						{
							NIM_BOOL T17_;
							T17_ = (NIM_BOOL)0;
							T17_ = checkIsolate__isolation95check_113((*n)._kind_6.sons.p->data[i]);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							if (!T17_) goto LA18_;
						}
						goto LA15_;
						LA18_: ;
						{
							tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* argType;
							argType = NIM_NIL;
							eqcopy___ast_3546(&argType, (*(*n)._kind_6.sons.p->data[i]).typ);
							if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
							{
								NIM_BOOL T24_;
								NIM_BOOL T25_;
								NIM_BOOL T27_;
								T24_ = (NIM_BOOL)0;
								T25_ = (NIM_BOOL)0;
								T25_ = !((argType == ((tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA*) NIM_NIL)));
								if (!(T25_)) goto LA26_;
								T27_ = (NIM_BOOL)0;
								T27_ = isCompileTimeOnly__types_3767(argType);
								if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
								T25_ = !(T27_);
								LA26_: ;
								T24_ = T25_;
								if (!(T24_)) goto LA28_;
								T24_ = containsTyRef__types_652(argType);
								if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
								LA28_: ;
								if (!T24_) goto LA29_;
								{
									NIM_BOOL T33_;
									T33_ = (NIM_BOOL)0;
									T33_ = canAlias__isolation95check_100(argType, (*n).typ);
									if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
									if (T33_) goto LA34_;
									T33_ = containsVariable__isolation95check_105((*n)._kind_6.sons.p->data[i]);
									if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
									LA34_: ;
									if (!T33_) goto LA35_;
									result = NIM_FALSE;
									eqdestroy___ast_3543(&argType);
									if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
									goto BeforeRet_;
								}
								LA35_: ;
							}
							LA29_: ;
							{
								LA21_:;
							}
							{
								oldNimErrFin21_ = *nimErr_; *nimErr_ = NIM_FALSE;
								eqdestroy___ast_3543(&argType);
								if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
								*nimErr_ = oldNimErrFin21_;
							}
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						}
						LA15_: ;
						i_2 += ((NI)1);
					} LA14: ;
				}
			}
			result = NIM_TRUE;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)92):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)48):
		{
			{
				tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* it;
				it = NIM_NIL;
				{
					NI i_3;
					NI colontmp__2;
					NI i_4;
					i_3 = (NI)0;
					colontmp__2 = (NI)0;
					colontmp__2 = safeLen__ast_3318(n);
					if (NIM_UNLIKELY(*nimErr_)) goto LA41_;
					i_4 = ((NI)0);
					{
						while (1) {
							tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD_;
							if (!(i_4 < colontmp__2)) goto LA44							;
							colontmpD_ = NIM_NIL;
							i_3 = i_4;
							eqcopy___ast_3457(&it, (*n)._kind_6.sons.p->data[i_3]);
							if (NIM_UNLIKELY(*nimErr_)) goto LA45_;
							colontmpD_ = lastSon__ast_6268(it);
							if (NIM_UNLIKELY(*nimErr_)) goto LA45_;
							result = checkIsolate__isolation95check_113(colontmpD_);
							if (NIM_UNLIKELY(*nimErr_)) goto LA45_;
							{
								if (!!(result)) goto LA48_;
								eqdestroy___ast_3454(&colontmpD_);
								if (NIM_UNLIKELY(*nimErr_)) goto LA41_;
								eqdestroy___ast_3454(&it);
								if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
								goto LA40;
							}
							LA48_: ;
							i_4 += ((NI)1);
							{
								LA45_:;
							}
							{
								oldNimErrFin45_ = *nimErr_; *nimErr_ = NIM_FALSE;
								eqdestroy___ast_3454(&colontmpD_);
								if (NIM_UNLIKELY(*nimErr_)) goto LA41_;
								*nimErr_ = oldNimErrFin45_;
							}
							if (NIM_UNLIKELY(*nimErr_)) goto LA41_;
						} LA44: ;
					}
				}
				{
					LA41_:;
				}
				{
					oldNimErrFin41_ = *nimErr_; *nimErr_ = NIM_FALSE;
					eqdestroy___ast_3454(&it);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					*nimErr_ = oldNimErrFin41_;
				}
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			} LA40: ;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)97):
		{
			{
				NI i_5;
				NI colontmp__3;
				NI i_6;
				i_5 = (NI)0;
				colontmp__3 = (NI)0;
				colontmp__3 = len__ast_3325(n);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i_6 = ((NI)1);
				{
					while (1) {
						tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__2;
						if (!(i_6 < colontmp__3)) goto LA57						;
						colontmpD__2 = NIM_NIL;
						i_5 = i_6;
						colontmpD__2 = lastSon__ast_6268((*n)._kind_6.sons.p->data[i_5]);
						if (NIM_UNLIKELY(*nimErr_)) goto LA58_;
						result = checkIsolate__isolation95check_113(colontmpD__2);
						if (NIM_UNLIKELY(*nimErr_)) goto LA58_;
						{
							if (!!(result)) goto LA61_;
							eqdestroy___ast_3454(&colontmpD__2);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							goto LA55;
						}
						LA61_: ;
						i_6 += ((NI)1);
						{
							LA58_:;
						}
						{
							oldNimErrFin58_ = *nimErr_; *nimErr_ = NIM_FALSE;
							eqdestroy___ast_3454(&colontmpD__2);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							*nimErr_ = oldNimErrFin58_;
						}
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					} LA57: ;
				}
			} LA55: ;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)38):
		{
			result = NIM_TRUE;
			{
				NI i_7;
				NI colontmp__4;
				NI i_8;
				i_7 = (NI)0;
				colontmp__4 = (NI)0;
				colontmp__4 = len__ast_3325(n);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i_8 = ((NI)1);
				{
					while (1) {
						tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__3;
						if (!(i_8 < colontmp__4)) goto LA68						;
						colontmpD__3 = NIM_NIL;
						i_7 = i_8;
						colontmpD__3 = lastSon__ast_6268((*n)._kind_6.sons.p->data[i_7]);
						if (NIM_UNLIKELY(*nimErr_)) goto LA69_;
						result = checkIsolate__isolation95check_113(colontmpD__3);
						if (NIM_UNLIKELY(*nimErr_)) goto LA69_;
						{
							if (!!(result)) goto LA72_;
							eqdestroy___ast_3454(&colontmpD__3);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							goto LA66;
						}
						LA72_: ;
						i_8 += ((NI)1);
						{
							LA69_:;
						}
						{
							oldNimErrFin69_ = *nimErr_; *nimErr_ = NIM_FALSE;
							eqdestroy___ast_3454(&colontmpD__3);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							*nimErr_ = oldNimErrFin69_;
						}
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					} LA68: ;
				}
			} LA66: ;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)41):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)160):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)37):
		{
			{
				tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* it_2;
				it_2 = NIM_NIL;
				{
					NI i_9;
					NI colontmp__5;
					NI i_10;
					i_9 = (NI)0;
					colontmp__5 = (NI)0;
					colontmp__5 = safeLen__ast_3318(n);
					if (NIM_UNLIKELY(*nimErr_)) goto LA78_;
					i_10 = ((NI)0);
					{
						while (1) {
							if (!(i_10 < colontmp__5)) goto LA81							;
							i_9 = i_10;
							eqcopy___ast_3457(&it_2, (*n)._kind_6.sons.p->data[i_9]);
							if (NIM_UNLIKELY(*nimErr_)) goto LA78_;
							result = checkIsolate__isolation95check_113(it_2);
							if (NIM_UNLIKELY(*nimErr_)) goto LA78_;
							{
								if (!!(result)) goto LA84_;
								eqdestroy___ast_3454(&it_2);
								if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
								goto LA77;
							}
							LA84_: ;
							i_10 += ((NI)1);
						} LA81: ;
					}
				}
				{
					LA78_:;
				}
				{
					oldNimErrFin78_ = *nimErr_; *nimErr_ = NIM_FALSE;
					eqdestroy___ast_3454(&it_2);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					*nimErr_ = oldNimErrFin78_;
				}
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			} LA77: ;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)58):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)59):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)61):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)60):
		{
			result = checkIsolate__isolation95check_113((*n)._kind_6.sons.p->data[((NI)1)]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)67):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)66):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)45):
		{
			result = checkIsolate__isolation95check_113((*n)._kind_6.sons.p->data[((NI)0)]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)115):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)126):
		{
			{
				NI T93_;
				NI T96_;
				T93_ = (NI)0;
				T93_ = len__ast_3325(n);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!(((NI)0) < T93_)) goto LA94_;
				T96_ = (NI)0;
				T96_ = len__ast_3325(n);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				result = checkIsolate__isolation95check_113((*n)._kind_6.sons.p->data[(NI)(T96_ - ((NI)1))]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			}
			goto LA91_;
			LA94_: ;
			{
				result = NIM_FALSE;
			}
			LA91_: ;
		}
		break;
		default:
		{
			result = NIM_FALSE;
		}
		break;
		}
	}
	goto LA1_;
	LA4_: ;
	{
		result = NIM_TRUE;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
