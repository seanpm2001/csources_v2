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
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg tyTuple__7q7q3E6Oj24ZNVJb9aonhAg;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NimStringV2 tyArray__Re75IspeoxXy2oCZHwcRrA[2];
struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg {
NimStringV2 Field0;
NimStringV2 Field1;
NimStringV2 Field2;
};
typedef NimStringV2 tyArray__sMpvt1sOxOJ3LFGulnbeMQ[4];
typedef NimStringV2 tyArray__nHXaesL0DJZHyVS07ARPRA[1];
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuFormatOpenArray)(NimStringV2 formatstr, NimStringV2* a, NI aLen_0);
static N_INLINE(NIM_BOOL, contains__stdZprivateZospaths50_364)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item);
static N_INLINE(NI, find__stdZprivateZospaths50_369)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_224)(NimStringV2 msg);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___nimpaths_31)(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg x);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, interp__nimpaths_27)(NimStringV2 path, NimStringV2 nimr);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosfileExists)(NimStringV2 filename);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nospquoteShell)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(void, echoBinSafe)(NimStringV2* args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(NI, nosexecShellCmd)(NimStringV2 command);
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_2 = { 4 | NIM_STRLIT_FLAG, "nimr" };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_3 = {4, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_2};
static const struct {
  NI cap; NIM_CHAR data[39+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_4 = { 39 | NIM_STRLIT_FLAG, "nimpaths.nim(43, 3) `\'$\' notin result` " };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_5 = {39, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_4};
static const struct {
  NI cap; NIM_CHAR data[30+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_6 = { 30 | NIM_STRLIT_FLAG, "$nimr/tools/dochack/dochack.js" };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_7 = {30, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_6};
static const struct {
  NI cap; NIM_CHAR data[24+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_8 = { 24 | NIM_STRLIT_FLAG, "$nim js -d:release $file" };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_9 = {24, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_8};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_10 = { 3 | NIM_STRLIT_FLAG, "nim" };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_11 = {3, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_10};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_12 = { 4 | NIM_STRLIT_FLAG, "file" };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_13 = {4, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_12};
static const struct {
  NI cap; NIM_CHAR data[31+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_14 = { 31 | NIM_STRLIT_FLAG, "$nimr/tools/dochack/dochack.nim" };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_15 = {31, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_14};
static const struct {
  NI cap; NIM_CHAR data[20+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_16 = { 20 | NIM_STRLIT_FLAG, "getDocHacksJs: cmd: " };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_17 = {20, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_16};
static const struct {
  NI cap; NIM_CHAR data[45+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_18 = { 45 | NIM_STRLIT_FLAG, "nimpaths.nim(52, 5) `execShellCmd(cmd) == 0` " };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_19 = {45, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_18};
static const struct {
  NI cap; NIM_CHAR data[44+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_20 = { 44 | NIM_STRLIT_FLAG, "nimpaths.nim(53, 3) `docHackJs2.fileExists` " };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_21 = {44, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_20};
extern NIM_BOOL nimInErrorMode__system_3980;
static N_INLINE(NI, find__stdZprivateZospaths50_369)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item) {
	NI result;
{	result = (NI)0;
	result = ((NI)0);
	{
		NIM_CHAR i;
		NI i_2;
		i = (NIM_CHAR)0;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < aLen_0)) goto LA3				;
				i = a[i_2];
				{
					if (!((NU8)(i) == (NU8)(item))) goto LA6_;
					goto BeforeRet_;
				}
				LA6_: ;
				result += ((NI)1);
				i_2 += ((NI)1);
			} LA3: ;
		}
	}
	result = ((NI)-1);
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL, contains__stdZprivateZospaths50_364)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item) {
	NIM_BOOL result;
	NI T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = find__stdZprivateZospaths50_369(a, aLen_0, item);
	result = (((NI)0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
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
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, interp__nimpaths_27)(NimStringV2 path, NimStringV2 nimr) {
	NimStringV2 result;
	tyArray__Re75IspeoxXy2oCZHwcRrA T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	T1_[0] = TM__m6t49a5Ns3blAkni6Qq1Nhw_3;
	T1_[1] = nimr;
	result = nsuFormatOpenArray(path, T1_, 2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NIM_BOOL T4_;
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		NimStringV2 T7_;
		tyTuple__7q7q3E6Oj24ZNVJb9aonhAg T8_;
		T4_ = (NIM_BOOL)0;
		T4_ = contains__stdZprivateZospaths50_364(((result).p) ? (result.p->data) : NIM_NIL, result.len, 36);
		if (!!(!(T4_))) goto LA5_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		T7_.len = 0; T7_.p = NIM_NIL;
		T8_.Field0 = path;
		T8_.Field1 = nimr;
		T8_.Field2 = result;
		colontmpD_ = dollar___nimpaths_31(T8_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T7_ = rawNewString(colontmpD_.len + 39);
appendString((&T7_), TM__m6t49a5Ns3blAkni6Qq1Nhw_5);
appendString((&T7_), colontmpD_);
		colontmpD__2 = T7_;
		failedAssertImpl__stdZassertions_224(colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZassertions_13((&colontmpD__2));
		eqdestroy___stdZassertions_13((&colontmpD_));
	}
	LA5_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getDocHacksJs__nimpaths_94)(NimStringV2 nimr, NimStringV2 nim, NIM_BOOL forceRebuild) {
	NimStringV2 result;
	NimStringV2 docHackJs2;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	docHackJs2.len = 0; docHackJs2.p = NIM_NIL;
	docHackJs2 = interp__nimpaths_27(TM__m6t49a5Ns3blAkni6Qq1Nhw_7, nimr);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		NIM_BOOL T4_;
		NIM_BOOL T6_;
		NimStringV2 cmd;
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		NimStringV2 colontmpD__3;
		NimStringV2 colontmpD__4;
		tyArray__sMpvt1sOxOJ3LFGulnbeMQ T10_;
		tyArray__nHXaesL0DJZHyVS07ARPRA T11_;
		NimStringV2 T12_;
		T4_ = (NIM_BOOL)0;
		T4_ = forceRebuild;
		if (T4_) goto LA5_;
		T6_ = (NIM_BOOL)0;
		T6_ = nosfileExists(docHackJs2);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T4_ = !(T6_);
		LA5_: ;
		if (!T4_) goto LA7_;
		cmd.len = 0; cmd.p = NIM_NIL;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
		colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
		T10_[0] = TM__m6t49a5Ns3blAkni6Qq1Nhw_11;
		colontmpD_ = nospquoteShell(nim);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		T10_[1] = colontmpD_;
		T10_[2] = TM__m6t49a5Ns3blAkni6Qq1Nhw_13;
		colontmpD__2 = interp__nimpaths_27(TM__m6t49a5Ns3blAkni6Qq1Nhw_15, nimr);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		colontmpD__3 = nospquoteShell(colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		T10_[3] = colontmpD__3;
		cmd = nsuFormatOpenArray(TM__m6t49a5Ns3blAkni6Qq1Nhw_9, T10_, 4);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		T12_.len = 0; T12_.p = NIM_NIL;
		T12_ = rawNewString(cmd.len + 20);
appendString((&T12_), TM__m6t49a5Ns3blAkni6Qq1Nhw_17);
appendString((&T12_), cmd);
		colontmpD__4 = T12_;
		T11_[0] = colontmpD__4;
		echoBinSafe(T11_, 1);
		{
			NI T15_;
			NimStringV2 colontmpD__5;
			NimStringV2 T18_;
			T15_ = (NI)0;
			T15_ = nosexecShellCmd(cmd);
			if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
			if (!!((T15_ == ((NI)0)))) goto LA16_;
			colontmpD__5.len = 0; colontmpD__5.p = NIM_NIL;
			T18_.len = 0; T18_.p = NIM_NIL;
			T18_ = rawNewString(cmd.len + 45);
appendString((&T18_), TM__m6t49a5Ns3blAkni6Qq1Nhw_19);
appendString((&T18_), cmd);
			colontmpD__5 = T18_;
			failedAssertImpl__stdZassertions_224(colontmpD__5);
			if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
			eqdestroy___stdZassertions_13((&colontmpD__5));
		}
		LA16_: ;
		{
			LA9_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD__4));
			eqdestroy___stdZassertions_13((&colontmpD__3));
			eqdestroy___stdZassertions_13((&colontmpD__2));
			eqdestroy___stdZassertions_13((&colontmpD_));
			eqdestroy___stdZassertions_13((&cmd));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA7_: ;
	{
		NIM_BOOL T23_;
		T23_ = (NIM_BOOL)0;
		T23_ = nosfileExists(docHackJs2);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!!(T23_)) goto LA24_;
		failedAssertImpl__stdZassertions_224(TM__m6t49a5Ns3blAkni6Qq1Nhw_21);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA24_: ;
	result = docHackJs2;
	docHackJs2.len = 0; docHackJs2.p = NIM_NIL;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&docHackJs2));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
