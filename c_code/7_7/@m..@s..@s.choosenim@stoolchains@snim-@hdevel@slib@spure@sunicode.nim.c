/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 32
#define NIM_EmulateOverflowChecks

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
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct TNimTypeV2 TNimTypeV2;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef struct {
N_NIMCALL_PTR(NimStringV2, ClP_0) (NimStringV2 key, void* ClE_0);
void* ClE_0;
} tyProc__oFHfEKFsiYTMAy9a42cSiKw;
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
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
N_LIB_PRIVATE N_NIMCALL(NI, runeLenAt__pureZunicode_94)(NIM_CHAR* s, NI sLen_0, NI i);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NIM_BOOL, lteqpercent___system_1059)(NI32 x, NI32 y);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_3141)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__e1RUVS0Bw7xmj9cnDPXLJMQ_2 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__e1RUVS0Bw7xmj9cnDPXLJMQ_3 = {0, (NimStrPayload*)&TM__e1RUVS0Bw7xmj9cnDPXLJMQ_2};
extern NIM_BOOL nimInErrorMode__system_3978;
N_LIB_PRIVATE N_NIMCALL(NI, nucruneLen)(NIM_CHAR* s, NI sLen_0) {
	NI result;
	NI i;
	result = (NI)0;
	result = ((NI)0);
	i = ((NI)0);
	{
		while (1) {
			if (!(i < sLen_0)) goto LA2			;
			{
				if (!((NU32)(((NU) (((NU8)(s[i]))))) <= (NU32)(((NU)127)))) goto LA5_;
				i += ((NI)1);
			}
			goto LA3_;
			LA5_: ;
			{
				if (!((NU)((NU32)(((NU) (((NU8)(s[i]))))) >> (NU32)(((NI)5))) == ((NU)6))) goto LA8_;
				i += ((NI)2);
			}
			goto LA3_;
			LA8_: ;
			{
				if (!((NU)((NU32)(((NU) (((NU8)(s[i]))))) >> (NU32)(((NI)4))) == ((NU)14))) goto LA11_;
				i += ((NI)3);
			}
			goto LA3_;
			LA11_: ;
			{
				if (!((NU)((NU32)(((NU) (((NU8)(s[i]))))) >> (NU32)(((NI)3))) == ((NU)30))) goto LA14_;
				i += ((NI)4);
			}
			goto LA3_;
			LA14_: ;
			{
				if (!((NU)((NU32)(((NU) (((NU8)(s[i]))))) >> (NU32)(((NI)2))) == ((NU)62))) goto LA17_;
				i += ((NI)5);
			}
			goto LA3_;
			LA17_: ;
			{
				if (!((NU)((NU32)(((NU) (((NU8)(s[i]))))) >> (NU32)(((NI)1))) == ((NU)126))) goto LA20_;
				i += ((NI)6);
			}
			goto LA3_;
			LA20_: ;
			{
				i += ((NI)1);
			}
			LA3_: ;
			result += ((NI)1);
		} LA2: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, runeLenAt__pureZunicode_94)(NIM_CHAR* s, NI sLen_0, NI i) {
	NI result;
	result = (NI)0;
	{
		if (!((NU32)(((NU) (((NU8)(s[i]))))) <= (NU32)(((NU)127)))) goto LA3_;
		result = ((NI)1);
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((NU)((NU32)(((NU) (((NU8)(s[i]))))) >> (NU32)(((NI)5))) == ((NU)6))) goto LA6_;
		result = ((NI)2);
	}
	goto LA1_;
	LA6_: ;
	{
		if (!((NU)((NU32)(((NU) (((NU8)(s[i]))))) >> (NU32)(((NI)4))) == ((NU)14))) goto LA9_;
		result = ((NI)3);
	}
	goto LA1_;
	LA9_: ;
	{
		if (!((NU)((NU32)(((NU) (((NU8)(s[i]))))) >> (NU32)(((NI)3))) == ((NU)30))) goto LA12_;
		result = ((NI)4);
	}
	goto LA1_;
	LA12_: ;
	{
		if (!((NU)((NU32)(((NU) (((NU8)(s[i]))))) >> (NU32)(((NI)2))) == ((NU)62))) goto LA15_;
		result = ((NI)5);
	}
	goto LA1_;
	LA15_: ;
	{
		if (!((NU)((NU32)(((NU) (((NU8)(s[i]))))) >> (NU32)(((NI)1))) == ((NU)126))) goto LA18_;
		result = ((NI)6);
	}
	goto LA1_;
	LA18_: ;
	{
		result = ((NI)1);
	}
	LA1_: ;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3978);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, runeOffset__pureZunicode_794)(NIM_CHAR* s, NI sLen_0, NI pos, NI start) {
	NI result;
	NI i;
	NI o;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	i = ((NI)0);
	o = start;
	{
		while (1) {
			NI T3_;
			if (!(i < ((NI) (pos)))) goto LA2			;
			T3_ = (NI)0;
			T3_ = runeLenAt__pureZunicode_94(s, sLen_0, o);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			o += ((NI) (T3_));
			{
				if (!(sLen_0 <= ((NI) (o)))) goto LA6_;
				result = ((NI)-1);
				goto BeforeRet_;
			}
			LA6_: ;
			i += ((NI)1);
		} LA2: ;
	}
	result = ((NI) (o));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, validateUtf8__pureZunicode_329)(NIM_CHAR* s, NI sLen_0) {
	NI result;
	NI i;
	NI L;
{	result = (NI)0;
	i = ((NI)0);
	L = sLen_0;
	{
		while (1) {
			if (!(i < L)) goto LA2			;
			{
				if (!((NU32)(((NU) (((NU8)(s[i]))))) <= (NU32)(((NU)127)))) goto LA5_;
				i += ((NI)1);
			}
			goto LA3_;
			LA5_: ;
			{
				if (!((NU)((NU32)(((NU) (((NU8)(s[i]))))) >> (NU32)(((NI)5))) == ((NU)6))) goto LA8_;
				{
					if (!((NU32)(((NU) (((NU8)(s[i]))))) < (NU32)(((NU)194)))) goto LA12_;
					result = i;
					goto BeforeRet_;
				}
				LA12_: ;
				{
					NIM_BOOL T16_;
					T16_ = (NIM_BOOL)0;
					T16_ = ((NI)(i + ((NI)1)) < L);
					if (!(T16_)) goto LA17_;
					T16_ = ((NU)((NU32)(((NU) (((NU8)(s[(NI)(i + ((NI)1))]))))) >> (NU32)(((NI)6))) == ((NU)2));
					LA17_: ;
					if (!T16_) goto LA18_;
					i += ((NI)2);
				}
				goto LA14_;
				LA18_: ;
				{
					result = i;
					goto BeforeRet_;
				}
				LA14_: ;
			}
			goto LA3_;
			LA8_: ;
			{
				if (!((NU)((NU32)(((NU) (((NU8)(s[i]))))) >> (NU32)(((NI)4))) == ((NU)14))) goto LA22_;
				{
					NIM_BOOL T26_;
					NIM_BOOL T27_;
					T26_ = (NIM_BOOL)0;
					T27_ = (NIM_BOOL)0;
					T27_ = ((NI)(i + ((NI)2)) < L);
					if (!(T27_)) goto LA28_;
					T27_ = ((NU)((NU32)(((NU) (((NU8)(s[(NI)(i + ((NI)1))]))))) >> (NU32)(((NI)6))) == ((NU)2));
					LA28_: ;
					T26_ = T27_;
					if (!(T26_)) goto LA29_;
					T26_ = ((NU)((NU32)(((NU) (((NU8)(s[(NI)(i + ((NI)2))]))))) >> (NU32)(((NI)6))) == ((NU)2));
					LA29_: ;
					if (!T26_) goto LA30_;
					i += ((NI)3);
				}
				goto LA24_;
				LA30_: ;
				{
					result = i;
					goto BeforeRet_;
				}
				LA24_: ;
			}
			goto LA3_;
			LA22_: ;
			{
				if (!((NU)((NU32)(((NU) (((NU8)(s[i]))))) >> (NU32)(((NI)3))) == ((NU)30))) goto LA34_;
				{
					NIM_BOOL T38_;
					NIM_BOOL T39_;
					NIM_BOOL T40_;
					T38_ = (NIM_BOOL)0;
					T39_ = (NIM_BOOL)0;
					T40_ = (NIM_BOOL)0;
					T40_ = ((NI)(i + ((NI)3)) < L);
					if (!(T40_)) goto LA41_;
					T40_ = ((NU)((NU32)(((NU) (((NU8)(s[(NI)(i + ((NI)1))]))))) >> (NU32)(((NI)6))) == ((NU)2));
					LA41_: ;
					T39_ = T40_;
					if (!(T39_)) goto LA42_;
					T39_ = ((NU)((NU32)(((NU) (((NU8)(s[(NI)(i + ((NI)2))]))))) >> (NU32)(((NI)6))) == ((NU)2));
					LA42_: ;
					T38_ = T39_;
					if (!(T38_)) goto LA43_;
					T38_ = ((NU)((NU32)(((NU) (((NU8)(s[(NI)(i + ((NI)3))]))))) >> (NU32)(((NI)6))) == ((NU)2));
					LA43_: ;
					if (!T38_) goto LA44_;
					i += ((NI)4);
				}
				goto LA36_;
				LA44_: ;
				{
					result = i;
					goto BeforeRet_;
				}
				LA36_: ;
			}
			goto LA3_;
			LA34_: ;
			{
				result = i;
				goto BeforeRet_;
			}
			LA3_: ;
		} LA2: ;
	}
	result = ((NI)-1);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___pureZunicode_1065)(NI32 a, NI32 b) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	result = (((NI) (a)) == ((NI) (b)));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, size__pureZunicode_5855)(NI32 r) {
	NI result;
	NU32 v;
	result = (NI)0;
	v = ((NU32) (r));
	{
		if (!((NU32)(v) <= (NU32)(((NU32)127)))) goto LA3_;
		result = ((NI)1);
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((NU32)(v) <= (NU32)(((NU32)2047)))) goto LA6_;
		result = ((NI)2);
	}
	goto LA1_;
	LA6_: ;
	{
		if (!((NU32)(v) <= (NU32)(((NU32)65535)))) goto LA9_;
		result = ((NI)3);
	}
	goto LA1_;
	LA9_: ;
	{
		if (!((NU32)(v) <= (NU32)(((NU32)2097151)))) goto LA12_;
		result = ((NI)4);
	}
	goto LA1_;
	LA12_: ;
	{
		if (!((NU32)(v) <= (NU32)(((NU32)67108863)))) goto LA15_;
		result = ((NI)5);
	}
	goto LA1_;
	LA15_: ;
	{
		if (!((NU32)(v) <= (NU32)(((NU32)2147483647)))) goto LA18_;
		result = ((NI)6);
	}
	goto LA1_;
	LA18_: ;
	{
		result = ((NI)1);
	}
	LA1_: ;
	return result;
}
static N_INLINE(NIM_BOOL, lteqpercent___system_1059)(NI32 x, NI32 y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((NU32)(((NU32) (x))) <= (NU32)(((NU32) (y))));
	return result;
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nuctoUTF8)(NI32 c) {
	NimStringV2 result;
	NI32 iX60gensym21_;
	result.len = 0; result.p = NIM_NIL;
	result = TM__e1RUVS0Bw7xmj9cnDPXLJMQ_3;
	iX60gensym21_ = c;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = lteqpercent___system_1059(iX60gensym21_, ((NI32)127));
		if (!T3_) goto LA4_;
		setLengthStrV2((&result), ((NI)1));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)0)] = ((NIM_CHAR) (((NI) (iX60gensym21_))));
	}
	goto LA1_;
	LA4_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = lteqpercent___system_1059(iX60gensym21_, ((NI32)2047));
		if (!T7_) goto LA8_;
		setLengthStrV2((&result), ((NI)2));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)6))) | ((NI32)192))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))))));
	}
	goto LA1_;
	LA8_: ;
	{
		NIM_BOOL T11_;
		T11_ = (NIM_BOOL)0;
		T11_ = lteqpercent___system_1059(iX60gensym21_, ((NI32)65535));
		if (!T11_) goto LA12_;
		setLengthStrV2((&result), ((NI)3));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)12))) | ((NI32)224))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)6))) & ((NI32)63)) | ((NI32)128))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))))));
	}
	goto LA1_;
	LA12_: ;
	{
		NIM_BOOL T15_;
		T15_ = (NIM_BOOL)0;
		T15_ = lteqpercent___system_1059(iX60gensym21_, ((NI32)2097151));
		if (!T15_) goto LA16_;
		setLengthStrV2((&result), ((NI)4));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)18))) | ((NI32)240))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)12))) & ((NI32)63)) | ((NI32)128))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)6))) & ((NI32)63)) | ((NI32)128))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)3)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))))));
	}
	goto LA1_;
	LA16_: ;
	{
		NIM_BOOL T19_;
		T19_ = (NIM_BOOL)0;
		T19_ = lteqpercent___system_1059(iX60gensym21_, ((NI32)67108863));
		if (!T19_) goto LA20_;
		setLengthStrV2((&result), ((NI)5));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)24))) | ((NI32)248))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)18))) & ((NI32)63)) | ((NI32)128))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)12))) & ((NI32)63)) | ((NI32)128))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)3)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)6))) & ((NI32)63)) | ((NI32)128))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)4)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))))));
	}
	goto LA1_;
	LA20_: ;
	{
		NIM_BOOL T23_;
		T23_ = (NIM_BOOL)0;
		T23_ = lteqpercent___system_1059(iX60gensym21_, ((NI32)2147483647));
		if (!T23_) goto LA24_;
		setLengthStrV2((&result), ((NI)6));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)30))) | ((NI32)252))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)24))) & ((NI32)63)) | ((NI32)128))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)18))) & ((NI32)63)) | ((NI32)128))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)3)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)12))) & ((NI32)63)) | ((NI32)128))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)4)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI32)(iX60gensym21_) >> (NU32)(((NI)6))) & ((NI32)63)) | ((NI32)128))))));
		nimPrepareStrMutationV2((&result));
		result.p->data[((NI)5)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))))));
	}
	goto LA1_;
	LA24_: ;
	{
	}
	LA1_: ;
	return result;
}
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	return result;
}
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic) {
	tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* h;
	NI T1_;
	T1_ = (NI)0;
	T1_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)8));
	h = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T1_));
	(*h).rc += ((NI)16);
}
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
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
		rememberCycle__system_3141(result, cell, (*((TNimTypeV2**) (p))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___pureZunicode_3668)(tyProc__oFHfEKFsiYTMAy9a42cSiKw* dest, tyProc__oFHfEKFsiYTMAy9a42cSiKw src, NIM_BOOL cyclic) {
	void* colontmp_;
	colontmp_ = (*dest).ClE_0;
	{
		if (!src.ClE_0) goto LA3_;
		nimIncRefCyclic(src.ClE_0, cyclic);
	}
	LA3_: ;
	(*dest).ClE_0 = src.ClE_0;
	(*dest).ClP_0 = src.ClP_0;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLastCyclicDyn(colontmp_);
		if (!T7_) goto LA8_;
		nimDestroyAndDispose(colontmp_);
	}
	LA8_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZunicode_3665)(tyProc__oFHfEKFsiYTMAy9a42cSiKw* dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest).ClE_0);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).ClE_0);
	}
	LA4_: ;
}
