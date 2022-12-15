/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <errno.h>
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
typedef struct tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
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
struct RootObj {
TNimTypeV2* m_type;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
NI32 errorCode;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw*, newOSError__stdZoserrors_37)(NI32 errorCode, NimStringV2 additionalInfo);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZoserrors_45)(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw** dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_3157)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, osErrorMsg__stdZoserrors_10)(NI32 errorCode);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_CHAR*, X5BX5D___system_7078)(NimStringV2* s, NI i);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
extern TNimTypeV2 NTIv2__PeQ9bR8XhClb9cp9cbW28aSyw_;
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__1nRK0qvLEFLABF9aZnNtAXQ_2 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__1nRK0qvLEFLABF9aZnNtAXQ_3 = {0, (NimStrPayload*)&TM__1nRK0qvLEFLABF9aZnNtAXQ_2};
static const struct {
  NI cap; NIM_CHAR data[17+1];
} TM__1nRK0qvLEFLABF9aZnNtAXQ_4 = { 17 | NIM_STRLIT_FLAG, "Additional info: " };
static const NimStringV2 TM__1nRK0qvLEFLABF9aZnNtAXQ_5 = {17, (NimStrPayload*)&TM__1nRK0qvLEFLABF9aZnNtAXQ_4};
static const struct {
  NI cap; NIM_CHAR data[16+1];
} TM__1nRK0qvLEFLABF9aZnNtAXQ_6 = { 16 | NIM_STRLIT_FLAG, "unknown OS error" };
static const NimStringV2 TM__1nRK0qvLEFLABF9aZnNtAXQ_7 = {16, (NimStrPayload*)&TM__1nRK0qvLEFLABF9aZnNtAXQ_6};
extern NIM_BOOL nimInErrorMode__system_3994;
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_85)(void) {
	NI32 result;
	result = (NI32)0;
	result = errno;
	return result;
}
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3994);
	return result;
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
		T5_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)16));
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
		rememberCycle__system_3157(result, cell, (*((TNimTypeV2**) (p))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZoserrors_45)(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw** dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest));
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, osErrorMsg__stdZoserrors_10)(NI32 errorCode) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	result = TM__1nRK0qvLEFLABF9aZnNtAXQ_3;
	{
		NCSTRING T5_;
		NimStringV2 T6_;
		if (!!((errorCode == ((NI32)0)))) goto LA3_;
		T5_ = (NCSTRING)0;
		T5_ = strerror(errorCode);
		T6_.len = 0; T6_.p = NIM_NIL;
		T6_ = cstrToNimstr(T5_);
		eqsink___stdZassertions_19((&result), T6_);
	}
	LA3_: ;
	return result;
}
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !(((*s).p == ((NimStrPayload*) NIM_NIL)));
		if (!(T3_)) goto LA4_;
		T3_ = ((NI)((*(*s).p).cap & ((NI)IL64(4611686018427387904))) == ((NI)IL64(4611686018427387904)));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimPrepareStrMutationImpl__system_2301(s);
	}
	LA5_: ;
}
static N_INLINE(NIM_CHAR*, X5BX5D___system_7078)(NimStringV2* s, NI i) {
	NIM_CHAR* result;
	result = (NIM_CHAR*)0;
	nimPrepareStrMutationV2((&(*s)));
	result = (&(*s).p->data[(NI)((*s).len - i)]);
	return result;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI)1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI)1))] = 0;
	(*s).len += ((NI)1);
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
N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw*, newOSError__stdZoserrors_37)(NI32 errorCode, NimStringV2 additionalInfo) {
	tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw* result;
	tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw* e;
	NimStringV2 T2_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	e = NIM_NIL;
	eqdestroy___stdZoserrors_45(&e);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	e = (tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw*) nimNewObj(sizeof(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw), NIM_ALIGNOF(tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw));
	(*e).Sup.Sup.Sup.m_type = (&NTIv2__PeQ9bR8XhClb9cp9cbW28aSyw_);
	(*e).Sup.Sup.name = "OSError";
	(*e).errorCode = errorCode;
	T2_.len = 0; T2_.p = NIM_NIL;
	T2_ = osErrorMsg__stdZoserrors_10(errorCode);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	eqsink___stdZassertions_19((&(*e).Sup.Sup.message), T2_);
	{
		if (!(((NI)0) < additionalInfo.len)) goto LA5_;
		{
			NIM_BOOL T9_;
			NIM_CHAR* T11_;
			T9_ = (NIM_BOOL)0;
			T9_ = (((NI)0) < (*e).Sup.Sup.message.len);
			if (!(T9_)) goto LA10_;
			T11_ = (NIM_CHAR*)0;
			T11_ = X5BX5D___system_7078((&(*e).Sup.Sup.message), ((NI)1));
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			T9_ = !(((NU8)((*T11_)) == (NU8)(10)));
			LA10_: ;
			if (!T9_) goto LA12_;
			nimAddCharV1((&(*e).Sup.Sup.message), 10);
		}
		LA12_: ;
		prepareAdd((&(*e).Sup.Sup.message), 17);
appendString((&(*e).Sup.Sup.message), TM__1nRK0qvLEFLABF9aZnNtAXQ_5);
		prepareAdd((&(*e).Sup.Sup.message), additionalInfo.len + 0);
appendString((&(*e).Sup.Sup.message), additionalInfo);
	}
	LA5_: ;
	{
		if (!((*e).Sup.Sup.message.len == 0)) goto LA16_;
		eqsink___stdZassertions_19((&(*e).Sup.Sup.message), TM__1nRK0qvLEFLABF9aZnNtAXQ_7);
	}
	LA16_: ;
	result = e;
	e = 0;
	eqdestroy___stdZoserrors_45(&e);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	goto BeforeRet_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___stdZoserrors_45(&e);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_82)(NI32 errorCode, NimStringV2 additionalInfo) {
	tyObject_OSError__PeQ9bR8XhClb9cp9cbW28aSyw* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = NIM_NIL;
	T1_ = newOSError__stdZoserrors_37(errorCode, additionalInfo);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	raiseExceptionEx((Exception*)T1_, "OSError", "raiseOSError", "oserrors.nim", 95);
goto BeforeRet_;
	}BeforeRet_: ;
}
