/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
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
typedef struct tyObject_NdiFile__9agcNDMZLEhF9btXu8YBZkwA tyObject_NdiFile__9agcNDMZLEhF9btXu8YBZkwA;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg;
typedef struct tySequence__UfuHwINLHlFJGRcvFZqKQQ tySequence__UfuHwINLHlFJGRcvFZqKQQ;
typedef struct tySequence__UfuHwINLHlFJGRcvFZqKQQ_Content tySequence__UfuHwINLHlFJGRcvFZqKQQ_Content;
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ tyObject_TIdObj__jPSvrmNCWI4CL3MSWxUHJQ;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw tyObject_ItemId__RG5oiYa2xm9bBBKInuP3ECw;
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA;
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg;
typedef struct tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA tyObject_TLoc__cQfx3WjJDtozqFtY4RdR9cA;
typedef struct tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg tyObject_TLib__tP0u9cd1FuZgfCfM3WIm9cRg;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tySequence__UfuHwINLHlFJGRcvFZqKQQ {
  NI len; tySequence__UfuHwINLHlFJGRcvFZqKQQ_Content* p;
};
struct tyObject_NdiFile__9agcNDMZLEhF9btXu8YBZkwA {
NIM_BOOL enabled;
FILE* f;
NimStringV2 buf;
NimStringV2 filename;
tySequence__UfuHwINLHlFJGRcvFZqKQQ syms;
};
typedef NU8 tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg;
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
struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg {
NU16 line;
NI16 col;
NI32 fileIndex;
};
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
typedef NimStringV2 tyArray__Re75IspeoxXy2oCZHwcRrA[2];
struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA {
NI id;
NimStringV2 s;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* next;
NI h;
};
typedef NimStringV2 tyArray__sMpvt1sOxOJ3LFGulnbeMQ[4];


#ifndef tySequence__UfuHwINLHlFJGRcvFZqKQQ_Content_PP
#define tySequence__UfuHwINLHlFJGRcvFZqKQQ_Content_PP
struct tySequence__UfuHwINLHlFJGRcvFZqKQQ_Content { NI cap; tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(NIM_BOOL, isEmpty__options_5393)(NimStringV2 x);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_NIMCALL(NimStringV2, rawNewString)(NI cap);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(FILE*, open__stdZsyncio_449)(NimStringV2 filename, tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_224)(NimStringV2 msg);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, doWrite__ndi_14)(tyObject_NdiFile__9agcNDMZLEhF9btXu8YBZkwA* f, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* s, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
static N_INLINE(void, addInt__stdZprivateZdigitsutils_198)(NimStringV2* result, NI x);
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_176)(NimStringV2* result, NI64 x);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, write__stdZsyncio_334)(FILE* f, NimStringV2* a, NI aLen_0);
N_LIB_PRIVATE N_NIMCALL(void, writeRope__ropes_23)(FILE* f, NimStringV2 r);
static N_INLINE(void, writeLine__msgs_459)(FILE* f, NimStringV2* x, NI xLen_0);
N_LIB_PRIVATE N_NIMCALL(void, write__stdZsyncio_230)(FILE* f, NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toFullPath__msgs_589)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf, NI32 fileIdx);
N_LIB_PRIVATE N_NIMCALL(void, close__stdZsyncio_243)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(void, reset__ndi_49)(tySequence__UfuHwINLHlFJGRcvFZqKQQ* obj);
N_LIB_PRIVATE N_NIMCALL(void, reset__options_3206)(NimStringV2* obj);
static const struct {
  NI cap; NIM_CHAR data[28+1];
} TM__9bjXlRg9ajY35u7ap75QbU6A_2 = { 28 | NIM_STRLIT_FLAG, "ndi.nim(47, 5) `f.f != nil` " };
static const NimStringV2 TM__9bjXlRg9ajY35u7ap75QbU6A_3 = {28, (NimStrPayload*)&TM__9bjXlRg9ajY35u7ap75QbU6A_2};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__9bjXlRg9ajY35u7ap75QbU6A_4 = { 1 | NIM_STRLIT_FLAG, "\011" };
static const NimStringV2 TM__9bjXlRg9ajY35u7ap75QbU6A_5 = {1, (NimStrPayload*)&TM__9bjXlRg9ajY35u7ap75QbU6A_4};
static const NimStringV2 TM__9bjXlRg9ajY35u7ap75QbU6A_6 = {1, (NimStrPayload*)&TM__9bjXlRg9ajY35u7ap75QbU6A_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__9bjXlRg9ajY35u7ap75QbU6A_7 = { 1 | NIM_STRLIT_FLAG, "\012" };
static const NimStringV2 TM__9bjXlRg9ajY35u7ap75QbU6A_8 = {1, (NimStrPayload*)&TM__9bjXlRg9ajY35u7ap75QbU6A_7};
static const NimStringV2 TM__9bjXlRg9ajY35u7ap75QbU6A_9 = {1, (NimStrPayload*)&TM__9bjXlRg9ajY35u7ap75QbU6A_4};
static const NimStringV2 TM__9bjXlRg9ajY35u7ap75QbU6A_10 = {1, (NimStrPayload*)&TM__9bjXlRg9ajY35u7ap75QbU6A_4};
extern NIM_BOOL nimInErrorMode__system_4004;
static N_INLINE(NIM_BOOL, isEmpty__options_5393)(NimStringV2 x) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (x.len == ((NI)0));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4004);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, open__ndi_26)(tyObject_NdiFile__9agcNDMZLEhF9btXu8YBZkwA* f, NimStringV2 filename, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf) {
	NIM_BOOL T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (NIM_BOOL)0;
	T1_ = isEmpty__options_5393(filename);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*f).enabled = !(T1_);
	{
		NimStringV2 T6_;
		if (!(*f).enabled) goto LA4_;
		eqcopy___stdZassertions_16((&(*f).filename), filename);
		T6_.len = 0; T6_.p = NIM_NIL;
		T6_ = rawNewString(((NI)20));
		eqsink___stdZassertions_19((&(*f).buf), T6_);
	}
	LA4_: ;
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
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src) {
	{
		if (!(((NI)0) < src.len)) goto LA3_;
		copyMem__system_1719(((void*) ((&(*(*dest).p).data[(*dest).len]))), ((void*) ((&(*src.p).data[((NI)0)]))), ((NI) ((NI)(src.len + ((NI)1)))));
		(*dest).len += src.len;
	}
	LA3_: ;
}
static N_INLINE(void, addInt__stdZprivateZdigitsutils_198)(NimStringV2* result, NI x) {
	addInt__stdZprivateZdigitsutils_176(result, ((NI64) (x)));
}
static N_INLINE(void, writeLine__msgs_459)(FILE* f, NimStringV2* x, NI xLen_0) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NimStringV2* i;
		NI i_2;
		i = (NimStringV2*)0;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < xLen_0)) goto LA3				;
				i = (&x[i_2]);
				write__stdZsyncio_230(f, (*i));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i_2 += ((NI)1);
			} LA3: ;
		}
	}
	write__stdZsyncio_230(f, TM__9bjXlRg9ajY35u7ap75QbU6A_8);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, doWrite__ndi_14)(tyObject_NdiFile__9agcNDMZLEhF9btXu8YBZkwA* f, tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* s, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf) {
	NimStringV2 colontmpD_;
	tyArray__Re75IspeoxXy2oCZHwcRrA T2_;
	tyArray__sMpvt1sOxOJ3LFGulnbeMQ T3_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	setLengthStrV2((&(*f).buf), ((NI)0));
	addInt__stdZprivateZdigitsutils_198((&(*f).buf), ((NI) ((*s).info.line)));
	prepareAdd((&(*f).buf), 1);
appendString((&(*f).buf), TM__9bjXlRg9ajY35u7ap75QbU6A_5);
	addInt__stdZprivateZdigitsutils_198((&(*f).buf), ((NI) ((*s).info.col)));
	T2_[0] = (*(*s).name).s;
	T2_[1] = TM__9bjXlRg9ajY35u7ap75QbU6A_6;
	write__stdZsyncio_334((*f).f, T2_, 2);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	writeRope__ropes_23((*f).f, (*s).loc.r);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T3_[0] = TM__9bjXlRg9ajY35u7ap75QbU6A_9;
	colontmpD_ = toFullPath__msgs_589(conf, (*s).info.fileIndex);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T3_[1] = colontmpD_;
	T3_[2] = TM__9bjXlRg9ajY35u7ap75QbU6A_10;
	T3_[3] = (*f).buf;
	writeLine__msgs_459((*f).f, T3_, 4);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&colontmpD_));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, close__ndi_33)(tyObject_NdiFile__9agcNDMZLEhF9btXu8YBZkwA* f, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		FILE* T5_;
		if (!(*f).enabled) goto LA3_;
		T5_ = (FILE*)0;
		T5_ = open__stdZsyncio_449((*f).filename, ((tyEnum_FileMode__4sJyy9aOSN8X63XdWXl5iDg)1), ((NI)8000));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*f).f = T5_;
		{
			NimStringV2 colontmpD_;
			NimStringV2 T10_;
			if (!!(!(((*f).f == ((FILE*) NIM_NIL))))) goto LA8_;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			T10_.len = 0; T10_.p = NIM_NIL;
			T10_ = rawNewString((*f).filename.len + 28);
appendString((&T10_), TM__9bjXlRg9ajY35u7ap75QbU6A_3);
appendString((&T10_), (*f).filename);
			colontmpD_ = T10_;
			failedAssertImpl__stdZassertions_224(colontmpD_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			eqdestroy___stdZassertions_13((&colontmpD_));
		}
		LA8_: ;
		{
			tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA** s;
			NI i;
			NI L;
			NI T12_;
			s = (tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA**)0;
			i = ((NI)0);
			T12_ = (*f).syms.len;
			L = T12_;
			{
				while (1) {
					if (!(i < L)) goto LA14					;
					s = &(*f).syms.p->data[i];
					doWrite__ndi_14(f, (*s), conf);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					i += ((NI)1);
				} LA14: ;
			}
		}
		close__stdZsyncio_243((*f).f);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		reset__ndi_49((&(*f).syms));
		reset__options_3206((&(*f).filename));
	}
	LA3_: ;
	}BeforeRet_: ;
}
