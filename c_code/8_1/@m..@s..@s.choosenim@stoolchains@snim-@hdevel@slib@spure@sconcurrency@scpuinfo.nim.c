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
typedef int tyArray__K3aHFXbhHM4GwklUcGylAw[4];
#include <sys/sysctl.h>
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
extern NIM_BOOL nimInErrorMode__system_3978;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3978);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int)0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result;
	tyArray__K3aHFXbhHM4GwklUcGylAw mib;
	NI numCPU;
	size_t len;
	int T1_;
	result = (NI)0;
	nimZeroMem((void*)mib, sizeof(tyArray__K3aHFXbhHM4GwklUcGylAw));
	numCPU = (NI)0;
	mib[(((NI)0))- 0] = ((int)6);
	mib[(((NI)1))- 0] = ((int)25);
	len = ((size_t)4);
	T1_ = (int)0;
	T1_ = sysctl(mib, ((int)2), ((void*) ((&numCPU))), (&len), NIM_NIL, ((size_t)0));
	(void)(T1_);
	{
		int T6_;
		if (!(numCPU < ((NI)1))) goto LA4_;
		mib[(((NI)1))- 0] = ((int)3);
		T6_ = (int)0;
		T6_ = sysctl(mib, ((int)2), ((void*) ((&numCPU))), (&len), NIM_NIL, ((size_t)0));
		(void)(T6_);
	}
	LA4_: ;
	result = numCPU;
	{
		if (!(result <= ((NI)0))) goto LA9_;
		result = ((NI)0);
	}
	LA9_: ;
	return result;
}
