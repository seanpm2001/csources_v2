/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <io.h>
#include <string.h>
#include <stdio.h>
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
typedef struct tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_CONSOLE_SCREEN_BUFFER_INFO__r6d5R6U7A9aP1xHUbo2o04A tyObject_CONSOLE_SCREEN_BUFFER_INFO__r6d5R6U7A9aP1xHUbo2o04A;
typedef struct tyObject_COORD__38Oq1GgFPIYv2ksRi9c0fZA tyObject_COORD__38Oq1GgFPIYv2ksRi9c0fZA;
typedef struct tyObject_SMALL_RECT__GSDbaE1SdabWptSZYJG3XA tyObject_SMALL_RECT__GSDbaE1SdabWptSZYJG3XA;
typedef NU16 tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA;
struct tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og {
NIM_BOOL trueColorIsSupported;
NIM_BOOL trueColorIsEnabled;
NIM_BOOL fgSetColor;
NI hStdout;
NI hStderr;
NI16 oldStdoutAttr;
NI16 oldStderrAttr;
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
typedef N_STDCALL_PTR(NI, tyProc__zP2zGemcuVRvOUE82f9a0Pw) (NI32 nStdHandle);
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef N_STDCALL_PTR(NI32, tyProc__oew1DfaGl5XhHmnBK0HYXQ) (NI hSourceProcessHandle, NI hSourceHandle, NI hTargetProcessHandle, NI* lpTargetHandle, NI32 dwDesiredAccess, NI32 bInheritHandle, NI32 dwOptions);
typedef N_STDCALL_PTR(NI, tyProc__uryidYWkntM7ddjZSyxvyQ) (void);
struct tyObject_COORD__38Oq1GgFPIYv2ksRi9c0fZA {
NI16 x;
NI16 y;
};
struct tyObject_SMALL_RECT__GSDbaE1SdabWptSZYJG3XA {
NI16 left;
NI16 top;
NI16 right;
NI16 bottom;
};
struct tyObject_CONSOLE_SCREEN_BUFFER_INFO__r6d5R6U7A9aP1xHUbo2o04A {
tyObject_COORD__38Oq1GgFPIYv2ksRi9c0fZA dwSize;
tyObject_COORD__38Oq1GgFPIYv2ksRi9c0fZA dwCursorPosition;
NI16 wAttributes;
tyObject_SMALL_RECT__GSDbaE1SdabWptSZYJG3XA srWindow;
tyObject_COORD__38Oq1GgFPIYv2ksRi9c0fZA dwMaximumWindowSize;
};
typedef N_STDCALL_PTR(NI32, tyProc__vjGHiWUJwFzOgSxDffBb6Q) (NI hConsoleOutput, tyObject_CONSOLE_SCREEN_BUFFER_INFO__r6d5R6U7A9aP1xHUbo2o04A* lpConsoleScreenBufferInfo);
typedef NU8 tyEnum_Style__NXKayqTLMsAibFwNceBlpA;
typedef N_STDCALL_PTR(NI32, tyProc__oPCjp4xTgEl9a8fqSzOv8lw) (NI hConsoleOutput, NI16 wAttributes);
typedef NU8 tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg;
typedef NI tyArray__e7dTfxuKO1YfQGLA3anCHg[10];
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__stdZsyncio_276)(FILE* f);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*, getTerminal__pureZterminal_55)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___pureZterminal_26)(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og** dest, tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* src);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicStatic)(void* p, TNimTypeV2* desc);
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_3141)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZterminal_32)(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* dest);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p, NI alignment);
N_LIB_PRIVATE N_NIMCALL(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*, newTerminal__pureZterminal_18)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZterminal_19)(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og** dest);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
N_LIB_PRIVATE N_NIMCALL(void, initTerminal__pureZterminal_223)(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* term);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
N_LIB_PRIVATE N_NIMCALL(NI16, getAttributes__pureZterminal_219)(NI h);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___pureZterminal_22)(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og** dest, tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* src, NIM_BOOL cyclic);
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic);
N_LIB_PRIVATE TNimTypeV2 NTIv2__EcU8GhMNGo9bGDXbfqZ82og_;
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__CN3raB9atujkEiPpxYAdlgQ_5 = { 8 | NIM_STRLIT_FLAG, "kernel32" };
static const NimStringV2 TM__CN3raB9atujkEiPpxYAdlgQ_6 = {8, (NimStrPayload*)&TM__CN3raB9atujkEiPpxYAdlgQ_5};
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__CN3raB9atujkEiPpxYAdlgQ_7 = { 8 | NIM_STRLIT_FLAG, "kernel32" };
static const NimStringV2 TM__CN3raB9atujkEiPpxYAdlgQ_8 = {8, (NimStrPayload*)&TM__CN3raB9atujkEiPpxYAdlgQ_7};
N_LIB_PRIVATE NIM_CONST tyArray__e7dTfxuKO1YfQGLA3anCHg lookup__pureZterminal_569 = {((NI)0),
((NI)4),
((NI)2),
((NI)6),
((NI)1),
((NI)5),
((NI)3),
((NI)7),
((NI)0),
((NI)0)}
;
N_LIB_PRIVATE tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* gTerm__pureZterminal_17;
N_LIB_PRIVATE NI16 defaultForegroundColor__pureZterminal_555 = ((NI16)-1);
N_LIB_PRIVATE NI16 defaultBackgroundColor__pureZterminal_556 = ((NI16)-1);
extern NIM_BOOL nimInErrorMode__system_3980;
static NIM_CONST NU32 TM__CN3raB9atujkEiPpxYAdlgQ_2[1] = {3309050368};
N_LIB_PRIVATE TNimTypeV2 NTIv2__EcU8GhMNGo9bGDXbfqZ82og_ = {.destructor = (void*)NIM_NIL, .size = sizeof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og), .align = (NI16) NIM_ALIGNOF(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og), .depth = 0, .display = TM__CN3raB9atujkEiPpxYAdlgQ_2, .traceImpl = (void*)NIM_NIL, .flags = 0};
extern tyProc__zP2zGemcuVRvOUE82f9a0Pw Dl_1442840741_;
static void* TM__CN3raB9atujkEiPpxYAdlgQ_3;
tyProc__oew1DfaGl5XhHmnBK0HYXQ Dl_1979711584_;
tyProc__uryidYWkntM7ddjZSyxvyQ Dl_1979711592_;
tyProc__vjGHiWUJwFzOgSxDffBb6Q Dl_1979711593_;
tyProc__oPCjp4xTgEl9a8fqSzOv8lw Dl_1979711675_;
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isatty__pureZterminal_710)(FILE* f) {
	NIM_BOOL result;
	int T1_;
	int T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = getFileHandle__stdZsyncio_276(f);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (int)0;
	T2_ = _isatty(T1_);
	result = !((T2_ == ((NI32)0)));
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, minuspercent___system_790)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicStatic)(void* p, TNimTypeV2* desc) {
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
		rememberCycle__system_3141(result, cell, desc);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZterminal_32)(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* dest) {
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___pureZterminal_26)(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og** dest, tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* src) {
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* colontmp_;
	colontmp_ = (*dest);
	(*dest) = src;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicStatic(colontmp_, (&NTIv2__EcU8GhMNGo9bGDXbfqZ82og_));
		if (!T3_) goto LA4_;
		eqdestroy___pureZterminal_32(colontmp_);
		nimRawDispose(colontmp_, ((NI)8));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZterminal_19)(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og** dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicStatic((*dest), (&NTIv2__EcU8GhMNGo9bGDXbfqZ82og_));
		if (!T3_) goto LA4_;
		eqdestroy___pureZterminal_32((*dest));
		nimRawDispose((*dest), ((NI)8));
	}
	LA4_: ;
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
N_LIB_PRIVATE N_NIMCALL(NI16, getAttributes__pureZterminal_219)(NI h) {
	NI16 result;
	tyObject_CONSOLE_SCREEN_BUFFER_INFO__r6d5R6U7A9aP1xHUbo2o04A c;
{	result = (NI16)0;
	nimZeroMem((void*)(&c), sizeof(tyObject_CONSOLE_SCREEN_BUFFER_INFO__r6d5R6U7A9aP1xHUbo2o04A));
	{
		NI32 T3_;
		T3_ = (NI32)0;
		T3_ = Dl_1979711593_(h, (&c));
		if (!!((T3_ == ((NI32)0)))) goto LA4_;
		result = c.wAttributes;
		goto BeforeRet_;
	}
	LA4_: ;
	result = ((NI16)112);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, initTerminal__pureZterminal_223)(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* term) {
	NI hStdoutTemp;
	NI hStderrTemp;
	NI16 T15_;
	NI16 T16_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	hStdoutTemp = Dl_1442840741_(((NI32)-11));
	{
		NI T3_;
		NI T4_;
		NI32 T5_;
		T3_ = (NI)0;
		T3_ = Dl_1979711592_();
		T4_ = (NI)0;
		T4_ = Dl_1979711592_();
		T5_ = (NI32)0;
		T5_ = Dl_1979711584_(T3_, hStdoutTemp, T4_, (&(*term).hStdout), ((NI32)0), ((NI32)1), ((NI32)2));
		if (!(T5_ == ((NI32)0))) goto LA6_;
	}
	LA6_: ;
	hStderrTemp = Dl_1442840741_(((NI32)-12));
	{
		NI T10_;
		NI T11_;
		NI32 T12_;
		T10_ = (NI)0;
		T10_ = Dl_1979711592_();
		T11_ = (NI)0;
		T11_ = Dl_1979711592_();
		T12_ = (NI32)0;
		T12_ = Dl_1979711584_(T10_, hStderrTemp, T11_, (&(*term).hStderr), ((NI32)0), ((NI32)1), ((NI32)2));
		if (!(T12_ == ((NI32)0))) goto LA13_;
	}
	LA13_: ;
	T15_ = (NI16)0;
	T15_ = getAttributes__pureZterminal_219((*term).hStdout);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*term).oldStdoutAttr = T15_;
	T16_ = (NI16)0;
	T16_ = getAttributes__pureZterminal_219((*term).hStderr);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*term).oldStderrAttr = T16_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*, newTerminal__pureZterminal_18)(void) {
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	eqdestroy___pureZterminal_19(&result);
	result = (tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*) nimNewObj(sizeof(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og), NIM_ALIGNOF(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og));
	initTerminal__pureZterminal_223(result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimIncRefCyclic)(void* p, NIM_BOOL cyclic) {
	tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* h;
	NI T1_;
	T1_ = (NI)0;
	T1_ = minuspercent___system_790(((NI) (ptrdiff_t) (p)), ((NI)16));
	h = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T1_));
	(*h).rc += ((NI)16);
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___pureZterminal_22)(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og** dest, tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* src, NIM_BOOL cyclic) {
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* colontmp_;
	colontmp_ = (*dest);
	{
		if (!src) goto LA3_;
		nimIncRefCyclic(src, cyclic);
	}
	LA3_: ;
	(*dest) = src;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLastCyclicStatic(colontmp_, (&NTIv2__EcU8GhMNGo9bGDXbfqZ82og_));
		if (!T7_) goto LA8_;
		eqdestroy___pureZterminal_32(colontmp_);
		nimRawDispose(colontmp_, ((NI)8));
	}
	LA8_: ;
}
static N_INLINE(tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og*, getTerminal__pureZterminal_55)(void) {
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	{
		tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* T5_;
		if (!(gTerm__pureZterminal_17 == 0)) goto LA3_;
		T5_ = NIM_NIL;
		T5_ = newTerminal__pureZterminal_18();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqsink___pureZterminal_26(&gTerm__pureZterminal_17, T5_);
	}
	LA3_: ;
	eqcopy___pureZterminal_22(&result, gTerm__pureZterminal_17, NIM_FALSE);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, setStyle__pureZterminal_493)(FILE* f, tySet_tyEnum_Style__NXKayqTLMsAibFwNceBlpA style) {
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* termX60gensym19_;
	NI colontmpD_;
	NI colontmpD__2;
	NI h;
	NI16 old;
	NI16 T6_;
	NI16 a;
	NI32 T23_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	termX60gensym19_ = NIM_NIL;
	colontmpD_ = (NI)0;
	colontmpD__2 = (NI)0;
	termX60gensym19_ = getTerminal__pureZterminal_55();
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!(f == stderr)) goto LA3_;
		colontmpD_ = (*termX60gensym19_).hStderr;
		h = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = (*termX60gensym19_).hStdout;
		h = colontmpD__2;
	}
	LA1_: ;
	T6_ = (NI16)0;
	T6_ = getAttributes__pureZterminal_219(h);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	old = (NI16)(T6_ & ((NI16)119));
	a = ((NI16)0);
	{
		if (!((style &((NU16)1<<((NU)((((tyEnum_Style__NXKayqTLMsAibFwNceBlpA)1) - 1))&15U)))!=0)) goto LA9_;
		a = (NI16)(a | ((NI16)8));
	}
	LA9_: ;
	{
		if (!((style &((NU16)1<<((NU)((((tyEnum_Style__NXKayqTLMsAibFwNceBlpA)5) - 1))&15U)))!=0)) goto LA13_;
		a = (NI16)(a | ((NI16)128));
	}
	LA13_: ;
	{
		if (!((style &((NU16)1<<((NU)((((tyEnum_Style__NXKayqTLMsAibFwNceBlpA)7) - 1))&15U)))!=0)) goto LA17_;
		a = (NI16)(a | ((NI16)16384));
	}
	LA17_: ;
	{
		if (!((style &((NU16)1<<((NU)((((tyEnum_Style__NXKayqTLMsAibFwNceBlpA)4) - 1))&15U)))!=0)) goto LA21_;
		a = (NI16)(a | ((NI16)-32768));
	}
	LA21_: ;
	T23_ = (NI32)0;
	T23_ = Dl_1979711675_(h, (NI16)(old | a));
	(void)(T23_);
	eqdestroy___pureZterminal_19(&termX60gensym19_);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, resetAttributes__pureZterminal_410)(FILE* f) {
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* term;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	term = NIM_NIL;
	term = getTerminal__pureZterminal_55();
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NI32 T5_;
		if (!(f == stderr)) goto LA3_;
		T5_ = (NI32)0;
		T5_ = Dl_1979711675_((*term).hStderr, (*term).oldStderrAttr);
		(void)(T5_);
	}
	goto LA1_;
	LA3_: ;
	{
		NI32 T7_;
		T7_ = (NI32)0;
		T7_ = Dl_1979711675_((*term).hStdout, (*term).oldStdoutAttr);
		(void)(T7_);
	}
	LA1_: ;
	eqdestroy___pureZterminal_19(&term);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, setForegroundColor__pureZterminal_557)(FILE* f, tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg fg, NIM_BOOL bright) {
	tyObject_PTerminalcolonObjectType___EcU8GhMNGo9bGDXbfqZ82og* termX60gensym24_;
	NI colontmpD_;
	NI colontmpD__2;
	NI16 colontmpD__3;
	NI16 colontmpD__4;
	NI h;
	NI16 old;
	NI16 T6_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	termX60gensym24_ = NIM_NIL;
	colontmpD_ = (NI)0;
	colontmpD__2 = (NI)0;
	colontmpD__3 = (NI16)0;
	colontmpD__4 = (NI16)0;
	termX60gensym24_ = getTerminal__pureZterminal_55();
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!(f == stderr)) goto LA3_;
		colontmpD_ = (*termX60gensym24_).hStderr;
		h = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = (*termX60gensym24_).hStdout;
		h = colontmpD__2;
	}
	LA1_: ;
	T6_ = (NI16)0;
	T6_ = getAttributes__pureZterminal_219(h);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	old = (NI16)(T6_ & ((NI16)-8));
	{
		if (!(defaultForegroundColor__pureZterminal_555 == ((NI16)-1))) goto LA9_;
		defaultForegroundColor__pureZterminal_555 = old;
	}
	LA9_: ;
	{
		if (!bright) goto LA13_;
		colontmpD__3 = (NI16)(old | ((NI16)8));
		old = colontmpD__3;
	}
	goto LA11_;
	LA13_: ;
	{
		colontmpD__4 = (NI16)(old & ((NI16)-9));
		old = colontmpD__4;
	}
	LA11_: ;
	{
		NI32 T20_;
		if (!(fg == ((tyEnum_ForegroundColor__ez9ah4IgQc0AbdW68acioDg)39))) goto LA18_;
		T20_ = (NI32)0;
		T20_ = Dl_1979711675_(h, ((NI16) ((NU16)(((NU16) (old)) | ((NU16) (defaultForegroundColor__pureZterminal_555))))));
		(void)(T20_);
	}
	goto LA16_;
	LA18_: ;
	{
		NI32 T22_;
		T22_ = (NI32)0;
		T22_ = Dl_1979711675_(h, ((NI16) ((NU16)(((NU16) (old)) | ((NU16) (lookup__pureZterminal_569[(fg)- 30]))))));
		(void)(T22_);
	}
	LA16_: ;
	eqdestroy___pureZterminal_19(&termX60gensym24_);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminusathdevelatslibatspureatsterminaldotnim_DatInit000)(void) {
if (!((TM__CN3raB9atujkEiPpxYAdlgQ_3 = nimLoadLibrary(TM__CN3raB9atujkEiPpxYAdlgQ_6))
)) nimLoadLibraryError(TM__CN3raB9atujkEiPpxYAdlgQ_8);
	Dl_1979711584_ = (tyProc__oew1DfaGl5XhHmnBK0HYXQ) nimGetProcAddr(TM__CN3raB9atujkEiPpxYAdlgQ_3, "DuplicateHandle");
	Dl_1979711592_ = (tyProc__uryidYWkntM7ddjZSyxvyQ) nimGetProcAddr(TM__CN3raB9atujkEiPpxYAdlgQ_3, "GetCurrentProcess");
	Dl_1979711593_ = (tyProc__vjGHiWUJwFzOgSxDffBb6Q) nimGetProcAddr(TM__CN3raB9atujkEiPpxYAdlgQ_3, "GetConsoleScreenBufferInfo");
	Dl_1979711675_ = (tyProc__oPCjp4xTgEl9a8fqSzOv8lw) nimGetProcAddr(TM__CN3raB9atujkEiPpxYAdlgQ_3, "SetConsoleTextAttribute");
}

