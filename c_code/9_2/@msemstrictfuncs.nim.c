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
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ;
typedef struct tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content tySequence__iPgAQ0li6vRlH9cX9aT6CQgQ_Content;
typedef struct tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA;
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
typedef NU8 tyEnum_ViewTypeKind__ALnennKArpbLOuC2lHSncQ;
typedef NU16 tyEnum_TMagic__mTDI9bmjHUNrwgx3GHm4Krg;
typedef NU8 tyEnum_TSymKind__EmlFK9c4sdJy7UDy5lm8yQQ;
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

      N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(tyEnum_ViewTypeKind__ALnennKArpbLOuC2lHSncQ, classifyViewType__typeallowed_579)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* t);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TMagic__mTDI9bmjHUNrwgx3GHm4Krg, getMagic__trees_144)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* op);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3454)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
extern NIM_BOOL nimInErrorMode__system_3994;
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = (*n)._kind_6.sons.len;
	result = T1_;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3994);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDangerousLocation__semstrictfuncs_6)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* owner) {
	NIM_BOOL result;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n_2;
	NIM_BOOL hasDeref;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	n_2 = NIM_NIL;
	eqcopy___ast_3457(&n_2, n);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	hasDeref = NIM_FALSE;
	{
		while (1) {
			switch ((*n_2).kind) {
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)47):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)65):
			{
				{
					if (!!(((*(*(*n_2)._kind_6.sons.p->data[((NI)0)]).typ).kind == ((tyEnum_TTypeKind__cu4lI59aFp7m9cDkg2Nfr7ZQ)23)))) goto LA7_;
					hasDeref = NIM_TRUE;
				}
				LA7_: ;
				eqcopy___ast_3457(&n_2, (*n_2)._kind_6.sons.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)42):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)45) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)46):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)63) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)64):
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)66) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)67):
			{
				eqcopy___ast_3457(&n_2, (*n_2)._kind_6.sons.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)58) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)59):
			{
				eqcopy___ast_3457(&n_2, (*n_2)._kind_6.sons.p->data[((NI)1)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)26) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)32):
			{
				{
					NI T14_;
					T14_ = (NI)0;
					T14_ = len__ast_3325(n_2);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					if (!(((NI)1) < T14_)) goto LA15_;
					{
						NIM_BOOL T19_;
						NIM_BOOL T20_;
						tyEnum_ViewTypeKind__ALnennKArpbLOuC2lHSncQ T22_;
						tyEnum_TMagic__mTDI9bmjHUNrwgx3GHm4Krg T24_;
						T19_ = (NIM_BOOL)0;
						T20_ = (NIM_BOOL)0;
						T20_ = !(((*n_2).typ == ((tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA*) NIM_NIL)));
						if (!(T20_)) goto LA21_;
						T22_ = (tyEnum_ViewTypeKind__ALnennKArpbLOuC2lHSncQ)0;
						T22_ = classifyViewType__typeallowed_579((*n_2).typ);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
						T20_ = !((T22_ == ((tyEnum_ViewTypeKind__ALnennKArpbLOuC2lHSncQ)0)));
						LA21_: ;
						T19_ = T20_;
						if (T19_) goto LA23_;
						T24_ = (tyEnum_TMagic__mTDI9bmjHUNrwgx3GHm4Krg)0;
						T24_ = getMagic__trees_144(n_2);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
						T19_ = (T24_ == ((tyEnum_TMagic__mTDI9bmjHUNrwgx3GHm4Krg)126));
						LA23_: ;
						if (!T19_) goto LA25_;
						eqcopy___ast_3457(&n_2, (*n_2)._kind_6.sons.p->data[((NI)1)]);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					}
					goto LA17_;
					LA25_: ;
					{
						goto LA2;
					}
					LA17_: ;
				}
				goto LA12_;
				LA15_: ;
				{
					goto LA2;
				}
				LA12_: ;
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
	{
		NIM_BOOL T34_;
		if (!((*n_2).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3))) goto LA32_;
		T34_ = (NIM_BOOL)0;
		T34_ = hasDeref;
		if (T34_) goto LA35_;
		T34_ = !(((*(*n_2)._kind_4.sym).owner == owner));
		LA35_: ;
		result = T34_;
	}
	goto LA30_;
	LA32_: ;
	{
		result = hasDeref;
	}
	LA30_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___ast_3454(&n_2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
