/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64

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
typedef struct tyObject_Single__d6NidTbsj2ZAh9ao1GJW9aXQ tyObject_Single__d6NidTbsj2ZAh9ao1GJW9aXQ;
struct tyObject_Single__d6NidTbsj2ZAh9ao1GJW9aXQ {
NU32 bits;
};
typedef NU64 tyArray__ocdlWeLAycDNOOtB9cadACA[77];
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE NIM_CONST tyArray__ocdlWeLAycDNOOtB9cadACA g__stdZprivateZschubfach_79 = {9353610478917778677ULL,
11692013098647223346ULL,
14615016373309029183ULL,
18268770466636286478ULL,
11417981541647679049ULL,
14272476927059598811ULL,
17840596158824498514ULL,
11150372599265311571ULL,
13937965749081639464ULL,
17422457186352049330ULL,
10889035741470030831ULL,
13611294676837538539ULL,
17014118346046923174ULL,
10633823966279326984ULL,
13292279957849158730ULL,
16615349947311448412ULL,
10384593717069655258ULL,
12980742146337069072ULL,
16225927682921336340ULL,
10141204801825835212ULL,
12676506002282294015ULL,
15845632502852867519ULL,
9903520314283042200ULL,
12379400392853802749ULL,
15474250491067253437ULL,
9671406556917033398ULL,
12089258196146291748ULL,
15111572745182864684ULL,
9444732965739290428ULL,
11805916207174113035ULL,
14757395258967641293ULL,
9223372036854775808ULL,
11529215046068469760ULL,
14411518807585587200ULL,
18014398509481984000ULL,
11258999068426240000ULL,
14073748835532800000ULL,
17592186044416000000ULL,
10995116277760000000ULL,
13743895347200000000ULL,
17179869184000000000ULL,
10737418240000000000ULL,
13421772800000000000ULL,
16777216000000000000ULL,
10485760000000000000ULL,
13107200000000000000ULL,
16384000000000000000ULL,
10240000000000000000ULL,
12800000000000000000ULL,
16000000000000000000ULL,
10000000000000000000ULL,
12500000000000000000ULL,
15625000000000000000ULL,
9765625000000000000ULL,
12207031250000000000ULL,
15258789062500000000ULL,
9536743164062500000ULL,
11920928955078125000ULL,
14901161193847656250ULL,
9313225746154785157ULL,
11641532182693481446ULL,
14551915228366851807ULL,
18189894035458564759ULL,
11368683772161602974ULL,
14210854715202003718ULL,
17763568394002504647ULL,
11102230246251565405ULL,
13877787807814456756ULL,
17347234759768070945ULL,
10842021724855044341ULL,
13552527156068805426ULL,
16940658945086006782ULL,
10587911840678754239ULL,
13234889800848442798ULL,
16543612251060553498ULL,
10339757656912845936ULL,
12924697071141057420ULL}
;
extern NIM_BOOL nimInErrorMode__system_4003;
N_LIB_PRIVATE N_NIMCALL(NU32, physicalSignificand__stdZprivateZschubfach_35)(tyObject_Single__d6NidTbsj2ZAh9ao1GJW9aXQ this_0) {
	NU32 result;
{	result = (NU32)0;
	result = (NU32)(this_0.bits & ((NU32)8388607));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4003);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p, ((int)0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Single__d6NidTbsj2ZAh9ao1GJW9aXQ, constructSingle__stdZprivateZschubfach_32)(NF32 value) {
	tyObject_Single__d6NidTbsj2ZAh9ao1GJW9aXQ result;
	union { NF32 source; NU32 dest; } LOC1;
	nimZeroMem((void*)(&result), sizeof(tyObject_Single__d6NidTbsj2ZAh9ao1GJW9aXQ));
	LOC1.source = value;
	result.bits = LOC1.dest;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NU32, physicalExponent__stdZprivateZschubfach_38)(tyObject_Single__d6NidTbsj2ZAh9ao1GJW9aXQ this_0) {
	NU32 result;
{	result = (NU32)0;
	result = (NU32)((NU32)((NU32)(this_0.bits & ((NU32)2139095040))) >> (NU32)(((NI32)23)));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, signBit__stdZprivateZschubfach_57)(tyObject_Single__d6NidTbsj2ZAh9ao1GJW9aXQ this_0) {
	NI result;
{	result = (NI)0;
	result = ((NI) (!(((NU32)(this_0.bits & ((NU32)IL64(2147483648))) == ((NU32)0)))));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
