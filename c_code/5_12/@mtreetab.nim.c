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
typedef struct tyObject_TNodeTable__pxPrWTy08K9c0WMqPV1dXSA tyObject_TNodeTable__pxPrWTy08K9c0WMqPV1dXSA;
typedef struct tySequence__MoXuTbVW9cpbdFcU68jxs9bA tySequence__MoXuTbVW9cpbdFcU68jxs9bA;
typedef struct tySequence__MoXuTbVW9cpbdFcU68jxs9bA_Content tySequence__MoXuTbVW9cpbdFcU68jxs9bA_Content;
typedef struct tyObject_TNodePair__KkkY9cy4jIr854wWYspKAbw tyObject_TNodePair__KkkY9cy4jIr854wWYspKAbw;
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
struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA {
NI id;
NimStringV2 s;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* next;
NI h;
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
struct tySequence__MoXuTbVW9cpbdFcU68jxs9bA {
  NI len; tySequence__MoXuTbVW9cpbdFcU68jxs9bA_Content* p;
};
struct tyObject_TNodeTable__pxPrWTy08K9c0WMqPV1dXSA {
NI counter;
tySequence__MoXuTbVW9cpbdFcU68jxs9bA data;
};
struct tyObject_TNodePair__KkkY9cy4jIr854wWYspKAbw {
NI h;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* key;
NI val;
};
typedef NU8 tySet_tyEnum_TTypeCmpFlag__taKmDpZ7mWMrTpIE9cV59a7w;


#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__MoXuTbVW9cpbdFcU68jxs9bA_Content_PP
#define tySequence__MoXuTbVW9cpbdFcU68jxs9bA_Content_PP
struct tySequence__MoXuTbVW9cpbdFcU68jxs9bA_Content { NI cap; tyObject_TNodePair__KkkY9cy4jIr854wWYspKAbw data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(NI, emarkamp___pureZhashes_4)(NI h, NI val);
N_LIB_PRIVATE N_NIMCALL(NI, toInt__system_1678)(NF f);
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_284)(NimStringV2 x);
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
N_LIB_PRIVATE N_NIMCALL(NI, hashTree__treetab_6)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n);
static N_INLINE(NI, emarkdollar___pureZhashes_19)(NI h);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NI, nodeTableRawGet__treetab_86)(tyObject_TNodeTable__pxPrWTy08K9c0WMqPV1dXSA t, NI k, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* key);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, treesEquivalent__treetab_38)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringV2 a, NimStringV2 b);
static N_INLINE(NIM_BOOL, equalMem__system_1727)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, sameTypeOrNil__types_2022)(tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* a, tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* b, tySet_tyEnum_TTypeCmpFlag__taKmDpZ7mWMrTpIE9cV59a7w flags);
static N_INLINE(NI, nextTry__astalgo_91)(NI h, NI maxHash);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, mustRehash__astalgo_88)(NI length, NI counter);
N_LIB_PRIVATE N_NIMCALL(tySequence__MoXuTbVW9cpbdFcU68jxs9bA, newSeq__treetab_170)(NI len);
N_LIB_PRIVATE N_NIMCALL(void, nodeTableRawInsert__treetab_127)(tySequence__MoXuTbVW9cpbdFcU68jxs9bA* data, NI k, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* key, NI val);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___ast_5524)(tySequence__MoXuTbVW9cpbdFcU68jxs9bA* dest, tySequence__MoXuTbVW9cpbdFcU68jxs9bA src);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_5518)(tySequence__MoXuTbVW9cpbdFcU68jxs9bA* dest);
extern NIM_BOOL nimInErrorMode__system_3994;
static N_INLINE(NI, emarkamp___pureZhashes_4)(NI h, NI val) {
	NI result;
	NU h_2;
	NU val_2;
	NU res;
	result = (NI)0;
	h_2 = ((NU) (h));
	val_2 = ((NU) (val));
	res = (NU)((NU32)(h_2) + (NU32)(val_2));
	res = (NU)((NU32)(res) + (NU32)((NU)((NU32)(res) << (NU32)(((NI)10)))));
	res = (NU)(res ^ (NU)((NU32)(res) >> (NU32)(((NI)6))));
	result = ((NI) (res));
	return result;
}
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = (*n)._kind_6.sons.len;
	result = T1_;
	return result;
}
static N_INLINE(NI, emarkdollar___pureZhashes_19)(NI h) {
	NI result;
	NU h_2;
	NU res;
	result = (NI)0;
	h_2 = ((NU) (h));
	res = (NU)((NU32)(h_2) + (NU32)((NU)((NU32)(h_2) << (NU32)(((NI)3)))));
	res = (NU)(res ^ (NU)((NU32)(res) >> (NU32)(((NI)11))));
	res = (NU)((NU32)(res) + (NU32)((NU)((NU32)(res) << (NU32)(((NI)15)))));
	result = ((NI) (res));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3994);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hashTree__treetab_6)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if (!(n == 0)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	result = (*n).kind;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)1):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)23):
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)4):
	{
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)2):
	{
		result = emarkamp___pureZhashes_4(result, (*(*n)._kind_5.ident).h);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3):
	{
		tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* xX60gensym0_;
		xX60gensym0_ = NIM_NIL;
		xX60gensym0_ = (*n)._kind_4.sym;
		result = emarkamp___pureZhashes_4(result, (NI)((NI)((NU32)(((NI) ((*xX60gensym0_).Sup.itemId.module))) << (NU32)(((NI)20))) + ((NI) ((*xX60gensym0_).Sup.itemId.item))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)5) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)15):
	{
		{
			NIM_BOOL T11_;
			T11_ = (NIM_BOOL)0;
			T11_ = (IL64(-2147483648) <= (*n)._kind_1.intVal);
			if (!(T11_)) goto LA12_;
			T11_ = ((*n)._kind_1.intVal <= IL64(2147483647));
			LA12_: ;
			if (!T11_) goto LA13_;
			result = emarkamp___pureZhashes_4(result, ((NI) ((*n)._kind_1.intVal)));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA13_: ;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)16) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)18):
	{
		{
			NIM_BOOL T18_;
			NI T22_;
			T18_ = (NIM_BOOL)0;
			T18_ = (-1000000.0 <= (*n)._kind_2.floatVal);
			if (!(T18_)) goto LA19_;
			T18_ = ((*n)._kind_2.floatVal <= 1000000.0);
			LA19_: ;
			if (!T18_) goto LA20_;
			T22_ = (NI)0;
			T22_ = toInt__system_1678((*n)._kind_2.floatVal);
			result = emarkamp___pureZhashes_4(result, T22_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA20_: ;
	}
	break;
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)20) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)22):
	{
		NI T24_;
		T24_ = (NI)0;
		T24_ = hash__pureZhashes_284((*n)._kind_3.strVal);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result = emarkamp___pureZhashes_4(result, T24_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	break;
	default:
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
					NI T29_;
					if (!(i_2 < colontmp_)) goto LA28					;
					i = i_2;
					T29_ = (NI)0;
					T29_ = hashTree__treetab_6((*n)._kind_6.sons.p->data[i]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					result = emarkamp___pureZhashes_4(result, T29_);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					i_2 += ((NI)1);
				} LA28: ;
			}
		}
	}
	break;
	}
	result = emarkdollar___pureZhashes_19(result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}
static N_INLINE(NIM_BOOL, equalMem__system_1727)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32)0));
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringV2 a, NimStringV2 b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = a.len;
	blen = b.len;
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI)0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem__system_1727(((void*) ((&a.p->data[((NI)0)]))), ((void*) ((&b.p->data[((NI)0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, treesEquivalent__treetab_38)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* a, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* b) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	{
		if (!(a == b)) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		NIM_BOOL T7_;
		T6_ = (NIM_BOOL)0;
		T7_ = (NIM_BOOL)0;
		T7_ = !((a == ((tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*) NIM_NIL)));
		if (!(T7_)) goto LA8_;
		T7_ = !((b == ((tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*) NIM_NIL)));
		LA8_: ;
		T6_ = T7_;
		if (!(T6_)) goto LA9_;
		T6_ = ((*a).kind == (*b).kind);
		LA9_: ;
		if (!T6_) goto LA10_;
		switch ((*a).kind) {
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)1):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)23):
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)4):
		{
			result = NIM_TRUE;
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)3):
		{
			tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* xX60gensym6_;
			tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* xX60gensym7_;
			xX60gensym6_ = NIM_NIL;
			xX60gensym7_ = NIM_NIL;
			xX60gensym6_ = (*a)._kind_4.sym;
			xX60gensym7_ = (*b)._kind_4.sym;
			result = ((NI)((NI)((NU32)(((NI) ((*xX60gensym6_).Sup.itemId.module))) << (NU32)(((NI)20))) + ((NI) ((*xX60gensym6_).Sup.itemId.item))) == (NI)((NI)((NU32)(((NI) ((*xX60gensym7_).Sup.itemId.module))) << (NU32)(((NI)20))) + ((NI) ((*xX60gensym7_).Sup.itemId.item))));
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)2):
		{
			result = ((*(*a)._kind_5.ident).id == (*(*b)._kind_5.ident).id);
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)5) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)15):
		{
			result = ((*a)._kind_1.intVal == (*b)._kind_1.intVal);
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)16) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)18):
		{
			result = ((*a)._kind_2.floatVal == (*b)._kind_2.floatVal);
		}
		break;
		case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)20) ... ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)22):
		{
			result = eqStrings((*a)._kind_3.strVal, (*b)._kind_3.strVal);
		}
		break;
		default:
		{
			{
				NI T21_;
				NI T22_;
				T21_ = (NI)0;
				T21_ = len__ast_3325(a);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				T22_ = (NI)0;
				T22_ = len__ast_3325(b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!(T21_ == T22_)) goto LA23_;
				{
					NI i;
					NI colontmp_;
					NI i_2;
					i = (NI)0;
					colontmp_ = (NI)0;
					colontmp_ = len__ast_3325(a);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					i_2 = ((NI)0);
					{
						while (1) {
							if (!(i_2 < colontmp_)) goto LA27							;
							i = i_2;
							{
								NIM_BOOL T30_;
								T30_ = (NIM_BOOL)0;
								T30_ = treesEquivalent__treetab_38((*a)._kind_6.sons.p->data[i], (*b)._kind_6.sons.p->data[i]);
								if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
								if (!!(T30_)) goto LA31_;
								goto BeforeRet_;
							}
							LA31_: ;
							i_2 += ((NI)1);
						} LA27: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23_: ;
		}
		break;
		}
		{
			tySet_tyEnum_TTypeCmpFlag__taKmDpZ7mWMrTpIE9cV59a7w T37_;
			if (!result) goto LA35_;
			T37_ = 0;
			result = sameTypeOrNil__types_2022((*a).typ, (*b).typ, T37_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA35_: ;
	}
	goto LA1_;
	LA10_: ;
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, nextTry__astalgo_91)(NI h, NI maxHash) {
	NI result;
	result = (NI)0;
	result = (NI)((NI)((NI)(((NI)5) * h) + ((NI)1)) & maxHash);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nodeTableRawGet__treetab_86)(tyObject_TNodeTable__pxPrWTy08K9c0WMqPV1dXSA t, NI k, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* key) {
	NI result;
	NI h;
	NI T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (t.data.len-1);
	h = (NI)(k & T1_);
	{
		while (1) {
			NI T10_;
			if (!!((t.data.p->data[h].key == ((tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*) NIM_NIL)))) goto LA3			;
			{
				NIM_BOOL T6_;
				T6_ = (NIM_BOOL)0;
				T6_ = (t.data.p->data[h].h == k);
				if (!(T6_)) goto LA7_;
				T6_ = treesEquivalent__treetab_38(t.data.p->data[h].key, key);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				LA7_: ;
				if (!T6_) goto LA8_;
				result = h;
				goto BeforeRet_;
			}
			LA8_: ;
			T10_ = (t.data.len-1);
			h = nextTry__astalgo_91(h, T10_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		} LA3: ;
	}
	result = ((NI)-1);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, nodeTableRawInsert__treetab_127)(tySequence__MoXuTbVW9cpbdFcU68jxs9bA* data, NI k, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* key, NI val) {
	NI h;
	NI T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = ((*data).len-1);
	h = (NI)(k & T1_);
	{
		while (1) {
			NI T4_;
			if (!!(((*data).p->data[h].key == ((tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*) NIM_NIL)))) goto LA3			;
			T4_ = ((*data).len-1);
			h = nextTry__astalgo_91(h, T4_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		} LA3: ;
	}
	(*data).p->data[h].h = k;
	eqcopy___ast_3457(&(*data).p->data[h].key, key);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*data).p->data[h].val = val;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, nodeTableTestOrSet__treetab_206)(tyObject_TNodeTable__pxPrWTy08K9c0WMqPV1dXSA* t, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* key, NI val) {
	NI result;
	NI k;
	NI index;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	k = hashTree__treetab_6(key);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	index = nodeTableRawGet__treetab_86((*t), k, key);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!(((NI)0) <= index)) goto LA3_;
		result = (*t).data.p->data[index].val;
	}
	goto LA1_;
	LA3_: ;
	{
		{
			NI T8_;
			NIM_BOOL T9_;
			tySequence__MoXuTbVW9cpbdFcU68jxs9bA n;
			NI T12_;
			tySequence__MoXuTbVW9cpbdFcU68jxs9bA T21_;
			T8_ = (*t).data.len;
			T9_ = (NIM_BOOL)0;
			T9_ = mustRehash__astalgo_88(T8_, (*t).counter);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T9_) goto LA10_;
			n.len = 0; n.p = NIM_NIL;
			T12_ = (*t).data.len;
			n = newSeq__treetab_170(((NI) ((NI)(T12_ * ((NI)2)))));
			{
				NI i;
				NI colontmp_;
				NI T14_;
				NI res;
				i = (NI)0;
				colontmp_ = (NI)0;
				T14_ = ((*t).data.len-1);
				colontmp_ = T14_;
				res = ((NI)0);
				{
					while (1) {
						if (!(res <= colontmp_)) goto LA16						;
						i = res;
						{
							if (!!(((*t).data.p->data[i].key == ((tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*) NIM_NIL)))) goto LA19_;
							nodeTableRawInsert__treetab_127((&n), (*t).data.p->data[i].h, (*t).data.p->data[i].key, (*t).data.p->data[i].val);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						}
						LA19_: ;
						res += ((NI)1);
					} LA16: ;
				}
			}
			T21_.len = 0; T21_.p = NIM_NIL;
			T21_ = n;
			n.len = 0; n.p = NIM_NIL;
			eqsink___ast_5524((&(*t).data), T21_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			eqdestroy___ast_5518((&n));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA10_: ;
		nodeTableRawInsert__treetab_127((&(*t).data), k, key, val);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result = val;
		(*t).counter += ((NI)1);
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
