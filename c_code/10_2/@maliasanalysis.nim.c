/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA;
typedef struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ tySequence__xxu3GgaFAGO6lOns9aHaeLQ;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content;
typedef struct tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw;
typedef struct tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA;
typedef struct tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg;
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ;
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content;
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
typedef NU8 tySet_tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ[9];
typedef NU8 tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q;
typedef NU8 tyEnum_AliasKind__s72DW1Oj62bYXnkonKNptQ;


#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content_PP
#define tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content_PP
struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content { NI cap; tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA*, skipTypes__ast_4803)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t, tySet_tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ kinds);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3543)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA** dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3454)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest);
static N_INLINE(NIM_BOOL, isSinkParam__ast_6483)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* s);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, add__ast_4147)(tySequence__xxu3GgaFAGO6lOns9aHaeLQ* x, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* value);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3723)(tySequence__xxu3GgaFAGO6lOns9aHaeLQ* dest);
static N_INLINE(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q**, X5BX5D___ast_6272)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** s, NI sLen_0, NI i);
static NIM_CONST tySet_tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ TM__gQAHS7kLEHIVXkpTOE5V9cw_2 = {
0x10, 0xa9, 0x00, 0x00, 0x00, 0x40, 0x80, 0x00,
0x00}
;
extern NIM_BOOL nimInErrorMode__system_4004;
static N_INLINE(NIM_BOOL, isSinkParam__ast_6483)(tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* s) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T3_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((*s).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)3));
	if (!(T1_)) goto LA2_;
	T3_ = (NIM_BOOL)0;
	T3_ = ((*(*s).typ).kind == ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)46));
	if (T3_) goto LA4_;
	T3_ = (((*(*s).typ).flags &((NU64)1<<((NU)((((tyEnum_TTypeFlag__wRa4s6r4s9cXJ9abWKsrci1Q)4)))&63U)))!=0);
	LA4_: ;
	T1_ = T3_;
	LA2_: ;
	result = T1_;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4004);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isAnalysableFieldAccess__aliasanalysis_10)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* orig, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* owner) {
	NIM_BOOL result;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n;
NIM_BOOL oldNimErrFin7_;
	NIM_BOOL T15_;
	NIM_BOOL T16_;
	NIM_BOOL T17_;
	tySet_tyEnum_TSymFlag__TAs9cOBd13PVhEf42OX9cOdg T20_;
	NIM_BOOL T22_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	n = NIM_NIL;
	eqcopy___ast_3457(&n, orig);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		while (1) {
			switch ((*n).kind) {
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)42):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)45) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)46):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)63) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)64):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)66) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)67):
			{
				eqcopy___ast_3457(&n, (*n)._kind_6.sons.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)58) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)59):
			{
				eqcopy___ast_3457(&n, (*n)._kind_6.sons.p->data[((NI)1)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)65):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)47):
			{
				tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* colontmpD_;
				NIM_BOOL T8_;
				NIM_BOOL T9_;
				colontmpD_ = NIM_NIL;
				eqcopy___ast_3457(&n, (*n)._kind_6.sons.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
				T8_ = (NIM_BOOL)0;
				T9_ = (NIM_BOOL)0;
				T9_ = ((*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3));
				if (!(T9_)) goto LA10_;
				T9_ = ((*(*n)._kind_4.sym).owner == owner);
				LA10_: ;
				T8_ = T9_;
				if (!(T8_)) goto LA11_;
				colontmpD_ = skipTypes__ast_4803((*(*n)._kind_4.sym).typ, TM__gQAHS7kLEHIVXkpTOE5V9cw_2);
				if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
				T8_ = ((*colontmpD_).kind == ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)45));
				LA11_: ;
				result = T8_;
				eqdestroy___ast_3543(&colontmpD_);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				eqdestroy___ast_3454(&n);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				goto BeforeRet_;
				{
					LA7_:;
				}
				{
					oldNimErrFin7_ = *nimErr_; *nimErr_ = NIM_FALSE;
					eqdestroy___ast_3543(&colontmpD_);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					*nimErr_ = oldNimErrFin7_;
				}
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			default:
			{
				goto LA2;
			}
			break;
			}
		}
	} LA2: ;
	T15_ = (NIM_BOOL)0;
	T16_ = (NIM_BOOL)0;
	T17_ = (NIM_BOOL)0;
	T17_ = ((*n).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3));
	if (!(T17_)) goto LA18_;
	T17_ = ((*(*n)._kind_4.sym).owner == owner);
	LA18_: ;
	T16_ = T17_;
	if (!(T16_)) goto LA19_;
	T20_ = 0;
	T16_ = ((IL64(2199090364424) & (*(*n)._kind_4.sym).flags) == T20_);
	LA19_: ;
	T15_ = T16_;
	if (!(T15_)) goto LA21_;
	T22_ = (NIM_BOOL)0;
	T22_ = !(((*(*n)._kind_4.sym).kind == ((tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ)3)));
	if (T22_) goto LA23_;
	T22_ = isSinkParam__ast_6483((*n)._kind_4.sym);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	LA23_: ;
	T15_ = T22_;
	LA21_: ;
	result = T15_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___ast_3454(&n);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, skipConvDfa__aliasanalysis_5)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	eqcopy___ast_3457(&result, n);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		while (1) {
			switch ((*result).kind) {
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)66):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)67):
			{
				eqcopy___ast_3457(&result, (*result)._kind_6.sons.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)58) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)59):
			{
				eqcopy___ast_3457(&result, (*result)._kind_6.sons.p->data[((NI)1)]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q**, X5BX5D___ast_6272)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** s, NI sLen_0, NI i) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** result;
	result = (tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q**)0;
	result = &s[(NI)(sLen_0 - i)];
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_AliasKind__s72DW1Oj62bYXnkonKNptQ, aliases__aliasanalysis_65)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* obj, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* field) {
	tyEnum_AliasKind__s72DW1Oj62bYXnkonKNptQ result;
	tySequence__xxu3GgaFAGO6lOns9aHaeLQ objImportantNodes;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* obj_2;
	tySequence__xxu3GgaFAGO6lOns9aHaeLQ fieldImportantNodes;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* field_2;
NIM_BOOL oldNimErrFin26_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyEnum_AliasKind__s72DW1Oj62bYXnkonKNptQ)0;
	objImportantNodes.len = 0; objImportantNodes.p = NIM_NIL;
	obj_2 = NIM_NIL;
	fieldImportantNodes.len = 0; fieldImportantNodes.p = NIM_NIL;
	field_2 = NIM_NIL;
	eqcopy___ast_3457(&obj_2, obj);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		while (1) {
			switch ((*obj_2).kind) {
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)46):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)63) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)64):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)66) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)67):
			{
				eqcopy___ast_3457(&obj_2, (*obj_2)._kind_6.sons.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)58) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)59):
			{
				eqcopy___ast_3457(&obj_2, (*obj_2)._kind_6.sons.p->data[((NI)1)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)45):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)42):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)47):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)65):
			{
				tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD_;
				colontmpD_ = NIM_NIL;
				colontmpD_ = 0;
				eqcopy___ast_3457(&colontmpD_, obj_2);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				add__ast_4147((&objImportantNodes), colontmpD_);
				eqcopy___ast_3457(&obj_2, (*obj_2)._kind_6.sons.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3):
			{
				tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* blitTmp;
				blitTmp = obj_2;
				obj_2 = 0;
				add__ast_4147((&objImportantNodes), blitTmp);
				goto LA2;
			}
			break;
			default:
			{
				result = ((tyEnum_AliasKind__s72DW1Oj62bYXnkonKNptQ)1);
				eqdestroy___ast_3454(&field_2);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				eqdestroy___ast_3723((&fieldImportantNodes));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				eqdestroy___ast_3454(&obj_2);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				eqdestroy___ast_3723((&objImportantNodes));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				goto BeforeRet_;
			}
			break;
			}
		}
	} LA2: ;
	eqcopy___ast_3457(&field_2, field);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		while (1) {
			switch ((*field_2).kind) {
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)46):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)63) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)64):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)66) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)67):
			{
				eqcopy___ast_3457(&field_2, (*field_2)._kind_6.sons.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)58) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)59):
			{
				eqcopy___ast_3457(&field_2, (*field_2)._kind_6.sons.p->data[((NI)1)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)45):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)42):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)47):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)65):
			{
				tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__2;
				colontmpD__2 = NIM_NIL;
				colontmpD__2 = 0;
				eqcopy___ast_3457(&colontmpD__2, field_2);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				add__ast_4147((&fieldImportantNodes), colontmpD__2);
				eqcopy___ast_3457(&field_2, (*field_2)._kind_6.sons.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3):
			{
				tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* blitTmp_2;
				blitTmp_2 = field_2;
				field_2 = 0;
				add__ast_4147((&fieldImportantNodes), blitTmp_2);
				goto LA9;
			}
			break;
			default:
			{
				result = ((tyEnum_AliasKind__s72DW1Oj62bYXnkonKNptQ)1);
				eqdestroy___ast_3454(&field_2);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				eqdestroy___ast_3723((&fieldImportantNodes));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				eqdestroy___ast_3454(&obj_2);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				eqdestroy___ast_3723((&objImportantNodes));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				goto BeforeRet_;
			}
			break;
			}
		}
	} LA9: ;
	{
		NI T18_;
		NI T19_;
		T18_ = fieldImportantNodes.len;
		T19_ = objImportantNodes.len;
		if (!(T18_ < T19_)) goto LA20_;
		result = ((tyEnum_AliasKind__s72DW1Oj62bYXnkonKNptQ)1);
		eqdestroy___ast_3454(&field_2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3723((&fieldImportantNodes));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&obj_2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3723((&objImportantNodes));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA20_: ;
	result = ((tyEnum_AliasKind__s72DW1Oj62bYXnkonKNptQ)0);
	{
		NI i;
		NI colontmp_;
		NI T23_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T23_ = objImportantNodes.len;
		colontmp_ = T23_;
		res = ((NI)1);
		{
			while (1) {
				tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* currFieldPath;
				tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* currObjPath;
				tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** T27_;
				tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** T28_;
				if (!(res <= colontmp_)) goto LA25				;
				currFieldPath = NIM_NIL;
				currObjPath = NIM_NIL;
				i = res;
				T27_ = (tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q**)0;
				T27_ = X5BX5D___ast_6272(((fieldImportantNodes).p) ? (fieldImportantNodes.p->data) : NIM_NIL, fieldImportantNodes.len, i);
				if (NIM_UNLIKELY(*nimErr_)) goto LA26_;
				eqcopy___ast_3457(&currFieldPath, (*T27_));
				if (NIM_UNLIKELY(*nimErr_)) goto LA26_;
				T28_ = (tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q**)0;
				T28_ = X5BX5D___ast_6272(((objImportantNodes).p) ? (objImportantNodes.p->data) : NIM_NIL, objImportantNodes.len, i);
				if (NIM_UNLIKELY(*nimErr_)) goto LA26_;
				eqcopy___ast_3457(&currObjPath, (*T28_));
				if (NIM_UNLIKELY(*nimErr_)) goto LA26_;
				{
					if (!!(((*currFieldPath).kind == (*currObjPath).kind))) goto LA31_;
					result = ((tyEnum_AliasKind__s72DW1Oj62bYXnkonKNptQ)1);
					eqdestroy___ast_3454(&currObjPath);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					eqdestroy___ast_3454(&currFieldPath);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					eqdestroy___ast_3454(&field_2);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					eqdestroy___ast_3723((&fieldImportantNodes));
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					eqdestroy___ast_3454(&obj_2);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					eqdestroy___ast_3723((&objImportantNodes));
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					goto BeforeRet_;
				}
				LA31_: ;
				switch ((*currFieldPath).kind) {
				case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3):
				{
					{
						if (!!(((*currFieldPath)._kind_4.sym == (*currObjPath)._kind_4.sym))) goto LA36_;
						result = ((tyEnum_AliasKind__s72DW1Oj62bYXnkonKNptQ)1);
						eqdestroy___ast_3454(&currObjPath);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
						eqdestroy___ast_3454(&currFieldPath);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
						eqdestroy___ast_3454(&field_2);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						eqdestroy___ast_3723((&fieldImportantNodes));
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						eqdestroy___ast_3454(&obj_2);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						eqdestroy___ast_3723((&objImportantNodes));
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						goto BeforeRet_;
					}
					LA36_: ;
				}
				break;
				case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)45):
				{
					{
						if (!!(((*(*currFieldPath)._kind_6.sons.p->data[((NI)1)])._kind_4.sym == (*(*currObjPath)._kind_6.sons.p->data[((NI)1)])._kind_4.sym))) goto LA41_;
						result = ((tyEnum_AliasKind__s72DW1Oj62bYXnkonKNptQ)1);
						eqdestroy___ast_3454(&currObjPath);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
						eqdestroy___ast_3454(&currFieldPath);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
						eqdestroy___ast_3454(&field_2);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						eqdestroy___ast_3723((&fieldImportantNodes));
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						eqdestroy___ast_3454(&obj_2);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						eqdestroy___ast_3723((&objImportantNodes));
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						goto BeforeRet_;
					}
					LA41_: ;
				}
				break;
				case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)47):
				case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)65):
				{
				}
				break;
				case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)42):
				{
					{
						NIM_BOOL T47_;
						T47_ = (NIM_BOOL)0;
						T47_ = ((*(*currFieldPath)._kind_6.sons.p->data[((NI)1)]).kind >= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)5) && (*(*currFieldPath)._kind_6.sons.p->data[((NI)1)]).kind <= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)22));
						if (!(T47_)) goto LA48_;
						T47_ = ((*(*currObjPath)._kind_6.sons.p->data[((NI)1)]).kind >= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)5) && (*(*currObjPath)._kind_6.sons.p->data[((NI)1)]).kind <= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)22));
						LA48_: ;
						if (!T47_) goto LA49_;
						{
							if (!!(((*(*currFieldPath)._kind_6.sons.p->data[((NI)1)])._kind_1.intVal == (*(*currObjPath)._kind_6.sons.p->data[((NI)1)])._kind_1.intVal))) goto LA53_;
							result = ((tyEnum_AliasKind__s72DW1Oj62bYXnkonKNptQ)1);
							eqdestroy___ast_3454(&currObjPath);
							if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
							eqdestroy___ast_3454(&currFieldPath);
							if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
							eqdestroy___ast_3454(&field_2);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							eqdestroy___ast_3723((&fieldImportantNodes));
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							eqdestroy___ast_3454(&obj_2);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							eqdestroy___ast_3723((&objImportantNodes));
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							goto BeforeRet_;
						}
						LA53_: ;
					}
					goto LA45_;
					LA49_: ;
					{
						result = ((tyEnum_AliasKind__s72DW1Oj62bYXnkonKNptQ)2);
					}
					LA45_: ;
				}
				break;
				default:
				{
				}
				break;
				}
				res += ((NI)1);
				{
					LA26_:;
				}
				{
					oldNimErrFin26_ = *nimErr_; *nimErr_ = NIM_FALSE;
					eqdestroy___ast_3454(&currObjPath);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					eqdestroy___ast_3454(&currFieldPath);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					*nimErr_ = oldNimErrFin26_;
				}
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			} LA25: ;
		}
	}
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___ast_3454(&field_2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3723((&fieldImportantNodes));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&obj_2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3723((&objImportantNodes));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
