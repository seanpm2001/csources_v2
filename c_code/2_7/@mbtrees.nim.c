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
typedef struct tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ;
typedef struct tyTuple__fEYsTpTmLyu9a9a9aiqr9aMdLQ tyTuple__fEYsTpTmLyu9a9a9aiqr9aMdLQ;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NimStringV2 tyArray__9aijZrM1syqzleJpcL8bUyw[512];
typedef tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* tyArray__E9bSD5rkt5i3dcYty9cq9bNxg[512];
typedef tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* tyArray__O9bOLS2kvNtrvY9bYkzy1irQ[512];
struct tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA {
NI entries;
tyArray__9aijZrM1syqzleJpcL8bUyw keys;
NIM_BOOL isInternal;
union{
struct {tyArray__E9bSD5rkt5i3dcYty9cq9bNxg vals;
} _isInternal_1;
struct {tyArray__O9bOLS2kvNtrvY9bYkzy1irQ links;
} _isInternal_2;
};
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
};
struct tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ {
tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* root;
NI entries;
};
struct tyTuple__fEYsTpTmLyu9a9a9aiqr9aMdLQ {
NimStringV2 Field0;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* Field1;
NI Field2;
};
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3466)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* dest);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___modulegraphs_10228)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___vm_8436)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA** dest, tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* src);
static N_INLINE(void, nimIncRef)(void* p);
N_LIB_PRIVATE N_NIMCALL(NI, cmp__system_1543)(NimStringV2 x, NimStringV2 y);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vm_8433)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA** dest);
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*, insert__vm_10113)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* h, NimStringV2 key, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* val);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___ast_3460)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___vm_8439)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA** dest, tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* src);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*, split__vm_10941)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* h);
N_LIB_PRIVATE N_NIMCALL(void, copyHalf__vm_10958)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* h, tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* result);
N_LIB_PRIVATE N_NIMCALL(NI, countSubTree__vm_12690)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* it);
extern NIM_BOOL nimInErrorMode__system_3980;
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
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___modulegraphs_10228)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* dest) {
	NI colontmp_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmp_ = ((NI)0);
	{
		while (1) {
			if (!(colontmp_ < ((NI)512))) goto LA2			;
			eqdestroy___stdZassertions_13((&(*dest).keys[(colontmp_)- 0]));
			colontmp_ += ((NI)1);
		} LA2: ;
	}
	switch ((*dest).isInternal) {
	case NIM_FALSE:
	{
		NI colontmp__2;
		colontmp__2 = ((NI)0);
		{
			while (1) {
				if (!(colontmp__2 < ((NI)512))) goto LA5				;
				{
					NIM_BOOL T8_;
					T8_ = (NIM_BOOL)0;
					T8_ = nimDecRefIsLast((*dest)._isInternal_1.vals[(colontmp__2)- 0]);
					if (!T8_) goto LA9_;
					eqdestroy___ast_3466((*dest)._isInternal_1.vals[(colontmp__2)- 0]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					nimRawDispose((*dest)._isInternal_1.vals[(colontmp__2)- 0], ((NI)8));
				}
				LA9_: ;
				colontmp__2 += ((NI)1);
			} LA5: ;
		}
	}
	break;
	case NIM_TRUE:
	{
		NI colontmp__3;
		colontmp__3 = ((NI)0);
		{
			while (1) {
				if (!(colontmp__3 < ((NI)512))) goto LA13				;
				{
					NIM_BOOL T16_;
					T16_ = (NIM_BOOL)0;
					T16_ = nimDecRefIsLast((*dest)._isInternal_2.links[(colontmp__3)- 0]);
					if (!T16_) goto LA17_;
					eqdestroy___modulegraphs_10228((*dest)._isInternal_2.links[(colontmp__3)- 0]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					nimRawDispose((*dest)._isInternal_2.links[(colontmp__3)- 0], ((NI)4));
				}
				LA17_: ;
				colontmp__3 += ((NI)1);
			} LA13: ;
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___vm_8455)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ* dest, tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest).root);
		if (!T3_) goto LA4_;
		eqdestroy___modulegraphs_10228((*dest).root);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest).root, ((NI)4));
	}
	LA4_: ;
	(*dest).root = src.root;
	(*dest).entries = src.entries;
	}BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(void, initBTree__vm_8425)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ* Result) {
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* T1_;
	nimZeroMem((void*)Result, sizeof(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ));
	T1_ = NIM_NIL;
	T1_ = (tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) nimNewObj(sizeof(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA), NIM_ALIGNOF(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA));
	(*T1_).entries = ((NI)0);
	(*T1_).isInternal = NIM_FALSE;
	(*Result).root = T1_;
}
static N_INLINE(void, nimIncRef)(void* p) {
	NI T1_;
	T1_ = (NI)0;
	T1_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)8));
	(*((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T1_))).rc += ((NI)16);
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___vm_8436)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA** dest, tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!src) goto LA3_;
		nimIncRef(src);
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLast((*dest));
		if (!T7_) goto LA8_;
		eqdestroy___modulegraphs_10228((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI)4));
	}
	LA8_: ;
	(*dest) = src;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vm_8433)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA** dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___modulegraphs_10228((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI)4));
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__vm_9810)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ b, NimStringV2 key) {
	NIM_BOOL result;
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* x;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	x = NIM_NIL;
	eqcopy___vm_8436(&x, b.root);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		while (1) {
			if (!(*x).isInternal) goto LA3			;
			{
				NI j;
				NI i;
				j = (NI)0;
				i = ((NI)0);
				{
					while (1) {
						if (!(i < (*x).entries)) goto LA6						;
						j = i;
						{
							NIM_BOOL T9_;
							NI T11_;
							T9_ = (NIM_BOOL)0;
							T9_ = ((NI)(j + ((NI)1)) == (*x).entries);
							if (T9_) goto LA10_;
							T11_ = (NI)0;
							T11_ = cmp__system_1543(key, (*x).keys[((NI)(j + ((NI)1)))- 0]);
							T9_ = (T11_ < ((NI)0));
							LA10_: ;
							if (!T9_) goto LA12_;
							eqcopy___vm_8436(&x, (*x)._isInternal_2.links[(j)- 0]);
							if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
							goto LA4;
						}
						LA12_: ;
						i += ((NI)1);
					} LA6: ;
				}
			} LA4: ;
		} LA3: ;
	}
	{
		NI j_2;
		NI i_2;
		j_2 = (NI)0;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < (*x).entries)) goto LA16				;
				j_2 = i_2;
				{
					NI T19_;
					T19_ = (NI)0;
					T19_ = cmp__system_1543(key, (*x).keys[(j_2)- 0]);
					if (!(T19_ == ((NI)0))) goto LA20_;
					result = NIM_TRUE;
					eqdestroy___vm_8433(&x);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					goto BeforeRet_;
				}
				LA20_: ;
				i_2 += ((NI)1);
			} LA16: ;
		}
	}
	result = NIM_FALSE;
	eqdestroy___vm_8433(&x);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	goto BeforeRet_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___vm_8433(&x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___vm_8439)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA** dest, tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* src) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___modulegraphs_10228((*dest));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest), ((NI)4));
	}
	LA4_: ;
	(*dest) = src;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, copyHalf__vm_10958)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* h, tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* result) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NI j;
		NI i;
		j = (NI)0;
		i = ((NI)0);
		{
			while (1) {
				if (!(i < ((NI)256))) goto LA3				;
				j = i;
				eqcopy___stdZassertions_16((&(*result).keys[(j)- 0]), (*h).keys[((NI)(((NI)256) + j))- 0]);
				i += ((NI)1);
			} LA3: ;
		}
	}
	{
		if (!(*h).isInternal) goto LA6_;
		{
			NI j_2;
			NI i_2;
			j_2 = (NI)0;
			i_2 = ((NI)0);
			{
				while (1) {
					if (!(i_2 < ((NI)256))) goto LA10					;
					j_2 = i_2;
					eqcopy___vm_8436(&(*result)._isInternal_2.links[(j_2)- 0], (*h)._isInternal_2.links[((NI)(((NI)256) + j_2))- 0]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					i_2 += ((NI)1);
				} LA10: ;
			}
		}
	}
	goto LA4_;
	LA6_: ;
	{
		{
			NI j_3;
			NI i_3;
			j_3 = (NI)0;
			i_3 = ((NI)0);
			{
				while (1) {
					tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* T15_;
					if (!(i_3 < ((NI)256))) goto LA14					;
					j_3 = i_3;
					T15_ = NIM_NIL;
					T15_ = (*h)._isInternal_1.vals[((NI)(((NI)256) + j_3))- 0];
					(*h)._isInternal_1.vals[((NI)(((NI)256) + j_3))- 0] = 0;
					eqsink___ast_3460(&(*result)._isInternal_1.vals[(j_3)- 0], T15_);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					i_3 += ((NI)1);
				} LA14: ;
			}
		}
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*, split__vm_10941)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* h) {
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* result;
	NIM_BOOL colontmpD_;
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	colontmpD_ = (NIM_BOOL)0;
	T1_ = NIM_NIL;
	T1_ = (tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) nimNewObj(sizeof(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA), NIM_ALIGNOF(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA));
	(*T1_).entries = ((NI)256);
	colontmpD_ = (*h).isInternal;
	(*T1_).isInternal = colontmpD_;
	result = T1_;
	(*h).entries = ((NI)256);
	copyHalf__vm_10958(h, result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*, insert__vm_10113)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* h, NimStringV2 key, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* val) {
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* result;
	NimStringV2 newKey;
	NI j;
NIM_BOOL oldNimErrFin33_;
NIM_BOOL oldNimErrFin23_;
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* T48_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	newKey.len = 0; newKey.p = NIM_NIL;
	eqcopy___stdZassertions_16((&newKey), key);
	j = ((NI)0);
	{
		if (!!((*h).isInternal)) goto LA4_;
		{
			while (1) {
				if (!(j < (*h).entries)) goto LA7				;
				{
					NI T10_;
					T10_ = (NI)0;
					T10_ = cmp__system_1543(key, (*h).keys[(j)- 0]);
					if (!(T10_ == ((NI)0))) goto LA11_;
					eqcopy___ast_3457(&(*h)._isInternal_1.vals[(j)- 0], val);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					eqdestroy___stdZassertions_13((&newKey));
					goto BeforeRet_;
				}
				LA11_: ;
				{
					NI T15_;
					T15_ = (NI)0;
					T15_ = cmp__system_1543(key, (*h).keys[(j)- 0]);
					if (!(T15_ < ((NI)0))) goto LA16_;
					goto LA6;
				}
				LA16_: ;
				j += ((NI)1);
			} LA7: ;
		} LA6: ;
		{
			NI i;
			NI colontmp_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (NI)(j + ((NI)1));
			res = (*h).entries;
			{
				while (1) {
					tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* T21_;
					if (!(colontmp_ <= res)) goto LA20					;
					i = res;
					T21_ = NIM_NIL;
					T21_ = (*h)._isInternal_1.vals[((NI)(i - ((NI)1)))- 0];
					(*h)._isInternal_1.vals[((NI)(i - ((NI)1)))- 0] = 0;
					eqsink___ast_3460(&(*h)._isInternal_1.vals[(i)- 0], T21_);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					res -= ((NI)1);
				} LA20: ;
			}
		}
		eqcopy___ast_3457(&(*h)._isInternal_1.vals[(j)- 0], val);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	goto LA2_;
	LA4_: ;
	{
		tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* newLink;
		newLink = NIM_NIL;
		newLink = ((tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) NIM_NIL);
		{
			while (1) {
				if (!(j < (*h).entries)) goto LA25				;
				{
					NIM_BOOL T28_;
					NI T30_;
					tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* u;
					T28_ = (NIM_BOOL)0;
					T28_ = ((NI)(j + ((NI)1)) == (*h).entries);
					if (T28_) goto LA29_;
					T30_ = (NI)0;
					T30_ = cmp__system_1543(key, (*h).keys[((NI)(j + ((NI)1)))- 0]);
					T28_ = (T30_ < ((NI)0));
					LA29_: ;
					if (!T28_) goto LA31_;
					u = NIM_NIL;
					u = insert__vm_10113((*h)._isInternal_2.links[(j)- 0], key, val);
					if (NIM_UNLIKELY(*nimErr_)) goto LA33_;
					j += ((NI)1);
					{
						if (!(u == ((tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) NIM_NIL))) goto LA36_;
						eqsink___vm_8439(&result, ((tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) NIM_NIL));
						if (NIM_UNLIKELY(*nimErr_)) goto LA33_;
						eqdestroy___vm_8433(&u);
						if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
						eqdestroy___vm_8433(&newLink);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
						eqdestroy___stdZassertions_13((&newKey));
						goto BeforeRet_;
					}
					LA36_: ;
					eqcopy___stdZassertions_16((&newKey), (*u).keys[(((NI)0))- 0]);
					eqsink___vm_8439(&newLink, u);
					if (NIM_UNLIKELY(*nimErr_)) goto LA33_;
					u = 0;
					eqdestroy___vm_8433(&u);
					if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
					goto LA24;
					{
						LA33_:;
					}
					{
						oldNimErrFin33_ = *nimErr_; *nimErr_ = NIM_FALSE;
						eqdestroy___vm_8433(&u);
						if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
						*nimErr_ = oldNimErrFin33_;
					}
					if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
				}
				LA31_: ;
				j += ((NI)1);
			} LA25: ;
		} LA24: ;
		{
			NI i_2;
			NI colontmp__2;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (NI)(j + ((NI)1));
			res_2 = (*h).entries;
			{
				while (1) {
					if (!(colontmp__2 <= res_2)) goto LA42					;
					i_2 = res_2;
					eqcopy___vm_8436(&(*h)._isInternal_2.links[(i_2)- 0], (*h)._isInternal_2.links[((NI)(i_2 - ((NI)1)))- 0]);
					if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
					res_2 -= ((NI)1);
				} LA42: ;
			}
		}
		eqsink___vm_8439(&(*h)._isInternal_2.links[(j)- 0], newLink);
		if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
		newLink = 0;
		{
			LA23_:;
		}
		{
			oldNimErrFin23_ = *nimErr_; *nimErr_ = NIM_FALSE;
			eqdestroy___vm_8433(&newLink);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			*nimErr_ = oldNimErrFin23_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA2_: ;
	{
		NI i_3;
		NI colontmp__3;
		NI res_3;
		i_3 = (NI)0;
		colontmp__3 = (NI)0;
		colontmp__3 = (NI)(j + ((NI)1));
		res_3 = (*h).entries;
		{
			while (1) {
				if (!(colontmp__3 <= res_3)) goto LA47				;
				i_3 = res_3;
				eqcopy___stdZassertions_16((&(*h).keys[(i_3)- 0]), (*h).keys[((NI)(i_3 - ((NI)1)))- 0]);
				res_3 -= ((NI)1);
			} LA47: ;
		}
	}
	eqsink___stdZassertions_19((&(*h).keys[(j)- 0]), newKey);
	newKey.len = 0; newKey.p = NIM_NIL;
	(*h).entries += ((NI)1);
	T48_ = NIM_NIL;
	{
		if (!((*h).entries < ((NI)512))) goto LA51_;
		result = ((tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) NIM_NIL);
	}
	goto LA49_;
	LA51_: ;
	{
		result = split__vm_10941(h);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA49_: ;
	eqdestroy___stdZassertions_13((&newKey));
	goto BeforeRet_;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&newKey));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, add__vm_10097)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ* b, NimStringV2 key, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* val) {
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* u;
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* t;
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* T6_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	u = NIM_NIL;
	t = NIM_NIL;
	u = insert__vm_10113((*b).root, key, val);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	(*b).entries += ((NI)1);
	{
		if (!(u == ((tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) NIM_NIL))) goto LA4_;
		eqdestroy___vm_8433(&t);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___vm_8433(&u);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA4_: ;
	T6_ = NIM_NIL;
	T6_ = (tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) nimNewObj(sizeof(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA), NIM_ALIGNOF(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA));
	(*T6_).entries = ((NI)2);
	(*T6_).isInternal = NIM_TRUE;
	t = T6_;
	eqcopy___stdZassertions_16((&(*t).keys[(((NI)0))- 0]), (*(*b).root).keys[(((NI)0))- 0]);
	eqcopy___vm_8436(&(*t)._isInternal_2.links[(((NI)0))- 0], (*b).root);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	eqcopy___stdZassertions_16((&(*t).keys[(((NI)1))- 0]), (*u).keys[(((NI)0))- 0]);
	eqsink___vm_8439(&(*t)._isInternal_2.links[(((NI)1))- 0], u);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	u = 0;
	eqsink___vm_8439(&(*b).root, t);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	t = 0;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___vm_8433(&t);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___vm_8433(&u);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, getOrDefault__vm_12089)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ b, NimStringV2 key) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* x;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	x = NIM_NIL;
	eqcopy___vm_8436(&x, b.root);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		while (1) {
			if (!(*x).isInternal) goto LA3			;
			{
				NI j;
				NI i;
				j = (NI)0;
				i = ((NI)0);
				{
					while (1) {
						if (!(i < (*x).entries)) goto LA6						;
						j = i;
						{
							NIM_BOOL T9_;
							NI T11_;
							T9_ = (NIM_BOOL)0;
							T9_ = ((NI)(j + ((NI)1)) == (*x).entries);
							if (T9_) goto LA10_;
							T11_ = (NI)0;
							T11_ = cmp__system_1543(key, (*x).keys[((NI)(j + ((NI)1)))- 0]);
							T9_ = (T11_ < ((NI)0));
							LA10_: ;
							if (!T9_) goto LA12_;
							eqcopy___vm_8436(&x, (*x)._isInternal_2.links[(j)- 0]);
							if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
							goto LA4;
						}
						LA12_: ;
						i += ((NI)1);
					} LA6: ;
				}
			} LA4: ;
		} LA3: ;
	}
	{
		NI j_2;
		NI i_2;
		j_2 = (NI)0;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < (*x).entries)) goto LA16				;
				j_2 = i_2;
				{
					NI T19_;
					T19_ = (NI)0;
					T19_ = cmp__system_1543(key, (*x).keys[(j_2)- 0]);
					if (!(T19_ == ((NI)0))) goto LA20_;
					eqcopy___ast_3457(&result, (*x)._isInternal_1.vals[(j_2)- 0]);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					eqdestroy___vm_8433(&x);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					goto BeforeRet_;
				}
				LA20_: ;
				i_2 += ((NI)1);
			} LA16: ;
		}
	}
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___vm_8433(&x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__vm_12462)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ b, NI index) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (index < b.entries);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, countSubTree__vm_12690)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* it) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if (!(*it).isInternal) goto LA3_;
		result = ((NI)0);
		{
			NI k;
			NI i;
			k = (NI)0;
			i = ((NI)0);
			{
				while (1) {
					NI T8_;
					if (!(i < (*it).entries)) goto LA7					;
					k = i;
					T8_ = (NI)0;
					T8_ = countSubTree__vm_12690((*it)._isInternal_2.links[(k)- 0]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					result += T8_;
					i += ((NI)1);
				} LA7: ;
			}
		}
	}
	goto LA1_;
	LA3_: ;
	{
		result = (*it).entries;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, next__vm_12613)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ b, NI index, tyTuple__fEYsTpTmLyu9a9a9aiqr9aMdLQ* Result) {
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* it;
	NimStringV2 colontmp_;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmp__2;
	NI i;
	NI colontmp__3;
	NimStringV2 blitTmp;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* blitTmp_2;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)Result, sizeof(tyTuple__fEYsTpTmLyu9a9a9aiqr9aMdLQ));
	it = NIM_NIL;
	colontmp_.len = 0; colontmp_.p = NIM_NIL;
	colontmp__2 = NIM_NIL;
	eqcopy___vm_8436(&it, b.root);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	i = index;
	{
		while (1) {
			NI sum;
			if (!(*it).isInternal) goto LA3			;
			sum = ((NI)0);
			{
				NI k;
				NI i_2;
				k = (NI)0;
				i_2 = ((NI)0);
				{
					while (1) {
						NI c;
						if (!(i_2 < (*it).entries)) goto LA6						;
						k = i_2;
						c = countSubTree__vm_12690((*it)._isInternal_2.links[(k)- 0]);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
						sum += c;
						{
							if (!(i < sum)) goto LA9_;
							eqcopy___vm_8436(&it, (*it)._isInternal_2.links[(k)- 0]);
							if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
							i -= (NI)(sum - c);
							goto LA4;
						}
						LA9_: ;
						i_2 += ((NI)1);
					} LA6: ;
				}
			} LA4: ;
		} LA3: ;
	}
	eqcopy___stdZassertions_16((&colontmp_), (*it).keys[(i)- 0]);
	eqcopy___ast_3457(&colontmp__2, (*it)._isInternal_1.vals[(i)- 0]);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmp__3 = (NI)(index + ((NI)1));
	blitTmp = colontmp_;
	(*Result).Field0 = blitTmp;
	blitTmp_2 = colontmp__2;
	(*Result).Field1 = blitTmp_2;
	(*Result).Field2 = colontmp__3;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___vm_8433(&it);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
