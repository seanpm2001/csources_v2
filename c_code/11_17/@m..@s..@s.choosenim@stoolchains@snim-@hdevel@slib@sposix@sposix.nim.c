/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <unistd.h>
#include <sys/syscall.h>
#include <signal.h>
#include <sys/types.h>
#include <time.h>
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
N_LIB_PRIVATE N_NIMCALL(int, sigtimedwait__posixZposix_2143)(sigset_t* a1, siginfo_t* a2, struct timespec* a3) {
	int result;
	long T1_;
	result = (int)0;
	T1_ = (long)0;
	T1_ = syscall(__NR_rt_sigtimedwait, a1, a2, a3, (NI)(NSIG / ((NI)8)));
	result = ((int) (T1_));
	return result;
}
