/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <sys/types.h>
                                      #include <sys/sysctl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
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
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg tyTuple__7q7q3E6Oj24ZNVJb9aonhAg;
typedef struct tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg {
NimStringV2 Field0;
NimStringV2 Field1;
NimStringV2 Field2;
};
typedef int tyArray__K3aHFXbhHM4GwklUcGylAw[4];
typedef NimStringV2 tyArray__nHXaesL0DJZHyVS07ARPRA[1];
struct tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q {
NI64 seconds;
NI nanosecond;
};
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nospquoteShellPosix)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, allCharsInSet__pureZstrutils_1495)(NimStringV2 s, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw theSet);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuReplaceStr)(NimStringV2 s, NimStringV2 sub, NimStringV2 by);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nospquoteShell)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosgetHomeDir)(void);
static N_INLINE(NimStringV2, slash___stdZprivateZospaths50_91)(NimStringV2 head, NimStringV2 tail);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosjoinPath)(NimStringV2 head, NimStringV2 tail);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7550)(NimStringV2 s, NI first);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg, nossplitFile)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosgetAppFilename)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getApplFreebsd__pureZos_189)(void);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
static N_INLINE(NI, nimCStrLen)(NCSTRING a);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getApplHeuristic__pureZos_223)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, paramStr__stdZcmdline_53)(NI i);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getEnv__stdZenvvars_15)(NimStringV2 key, NimStringV2 default_0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7538)(NimStringV2 s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosfileExists)(NimStringV2 filename);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZos_231)(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg* dest);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_82)(NI32 errorCode, NimStringV2 additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_85)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL, contains__stdZprivateZospaths50_364)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item);
static N_INLINE(NI, find__stdZprivateZospaths50_369)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosaddFileExt)(NimStringV2 filename, NimStringV2 ext);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, expandTilde__pureZos_59)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nossymlinkExists)(NimStringV2 link);
N_NIMCALL(NimStringV2, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosparentDir)(NimStringV2 path);
static N_INLINE(tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q, toTime__pureZos_27)(struct timespec ts);
N_LIB_PRIVATE N_NIMCALL(tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q, initTime__pureZtimes_1013)(NI64 unix_0, NI nanosecond);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, ntLtTime)(tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q a, tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q b);
N_LIB_PRIVATE N_NIMCALL(tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q, nosgetLastModificationTime)(NimStringV2 file);
N_LIB_PRIVATE N_NIMCALL(int, exitStatusLikeShell__pureZos_144)(int status);
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__yu6cxgKBBXbNsTkT9cyMd4g_2 = { 2 | NIM_STRLIT_FLAG, "\'\'" };
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_3 = {2, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_2};
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__yu6cxgKBBXbNsTkT9cyMd4g_4 = {
0x00, 0x00, 0x00, 0x00, 0x20, 0xe8, 0xff, 0x27,
0xff, 0xff, 0xff, 0x87, 0xfe, 0xff, 0xff, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__yu6cxgKBBXbNsTkT9cyMd4g_5 = { 1 | NIM_STRLIT_FLAG, "\'" };
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_6 = {1, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_5};
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_7 = {1, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_5};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__yu6cxgKBBXbNsTkT9cyMd4g_8 = { 5 | NIM_STRLIT_FLAG, "\'\"\'\"\'" };
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_9 = {5, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_8};
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_10 = {1, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_5};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__yu6cxgKBBXbNsTkT9cyMd4g_11 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_12 = {0, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_11};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__yu6cxgKBBXbNsTkT9cyMd4g_13 = { 1 | NIM_STRLIT_FLAG, " " };
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_14 = {1, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_13};
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_16 = {0, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_11};
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_17 = {0, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_11};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__yu6cxgKBBXbNsTkT9cyMd4g_18 = { 4 | NIM_STRLIT_FLAG, "PATH" };
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_19 = {4, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_18};
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_20 = {0, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_11};
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_21 = {4, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_18};
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_22 = {0, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_11};
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_23 = {0, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_11};
static NIM_CONST tyArray__K3aHFXbhHM4GwklUcGylAw TM__yu6cxgKBBXbNsTkT9cyMd4g_15 = {((int)1),
((int)14),
((int)12),
((int)-1)}
;
N_LIB_PRIVATE NIM_CONST tyArray__nHXaesL0DJZHyVS07ARPRA ExeExts__pureZos_99 = {{0, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_11}}
;
extern NIM_BOOL nimInErrorMode__system_3994;
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
	result = (&nimInErrorMode__system_3994);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nospquoteShellPosix)(NimStringV2 s) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	{
		if (!(s.len == ((NI)0))) goto LA3_;
		result = TM__yu6cxgKBBXbNsTkT9cyMd4g_3;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = allCharsInSet__pureZstrutils_1495(s, TM__yu6cxgKBBXbNsTkT9cyMd4g_4);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T6_) goto LA7_;
		eqcopy___stdZassertions_16((&result), s);
	}
	goto LA1_;
	LA7_: ;
	{
		NimStringV2 colontmpD_;
		NimStringV2 T10_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		T10_.len = 0; T10_.p = NIM_NIL;
		colontmpD_ = nsuReplaceStr(s, TM__yu6cxgKBBXbNsTkT9cyMd4g_7, TM__yu6cxgKBBXbNsTkT9cyMd4g_9);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T10_ = rawNewString(colontmpD_.len + 2);
appendString((&T10_), TM__yu6cxgKBBXbNsTkT9cyMd4g_6);
appendString((&T10_), colontmpD_);
appendString((&T10_), TM__yu6cxgKBBXbNsTkT9cyMd4g_10);
		result = T10_;
		eqdestroy___stdZassertions_13((&colontmpD_));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nospquoteShell)(NimStringV2 s) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = nospquoteShellPosix(s);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, quoteShellCommand__pureZos_84)(NimStringV2* args, NI argsLen_0) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = TM__yu6cxgKBBXbNsTkT9cyMd4g_12;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = argsLen_0;
		i_2 = ((NI)0);
		{
			while (1) {
				NimStringV2 colontmpD_;
				if (!(i_2 < colontmp_)) goto LA3				;
				colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
				i = i_2;
				{
					if (!(((NI)0) < i)) goto LA6_;
					prepareAdd((&result), 1);
appendString((&result), TM__yu6cxgKBBXbNsTkT9cyMd4g_14);
				}
				LA6_: ;
				colontmpD_ = nospquoteShell(args[i]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				prepareAdd((&result), colontmpD_.len + 0);
appendString((&result), colontmpD_);
				i_2 += ((NI)1);
				eqdestroy___stdZassertions_13((&colontmpD_));
			} LA3: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NimStringV2, slash___stdZprivateZospaths50_91)(NimStringV2 head, NimStringV2 tail) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = nosjoinPath(head, tail);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, expandTilde__pureZos_59)(NimStringV2 path) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (path.len == ((NI)0));
		if (T3_) goto LA4_;
		T3_ = !(((NU8)(path.p->data[((NI)0)]) == (NU8)(126)));
		LA4_: ;
		if (!T3_) goto LA5_;
		eqcopy___stdZassertions_16((&result), path);
	}
	goto LA1_;
	LA5_: ;
	{
		if (!(path.len == ((NI)1))) goto LA8_;
		result = nosgetHomeDir();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA8_: ;
	{
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		if (!(((NU8)(path.p->data[((NI)1)])) == ((NU8)(47)) || ((NU8)(path.p->data[((NI)1)])) == ((NU8)(47)))) goto LA11_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		colontmpD_ = nosgetHomeDir();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		colontmpD__2 = substr__system_7550(path, ((NI)2));
		result = slash___stdZprivateZospaths50_91(colontmpD_, colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZassertions_13((&colontmpD__2));
		eqdestroy___stdZassertions_13((&colontmpD_));
	}
	goto LA1_;
	LA11_: ;
	{
		eqcopy___stdZassertions_16((&result), path);
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
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
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		if (!(s.len == ((NI)0))) goto LA3_;
		result = "";
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NCSTRING) ((*s.p).data));
	}
	LA1_: ;
	return result;
}
static N_INLINE(NI, nimCStrLen)(NCSTRING a) {
	NI result;
	size_t T1_;
	result = (NI)0;
	T1_ = (size_t)0;
	T1_ = strlen(a);
	result = ((NI) (T1_));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getApplFreebsd__pureZos_189)(void) {
	NimStringV2 result;
	size_t pathLength;
	tyArray__K3aHFXbhHM4GwklUcGylAw req;
	int res;
	NI realLen;
{	result.len = 0; result.p = NIM_NIL;
	pathLength = ((size_t)0);
	nimZeroMem((void*)req, sizeof(tyArray__K3aHFXbhHM4GwklUcGylAw));
	nimCopyMem((void*)req, (NIM_CONST void*)TM__yu6cxgKBBXbNsTkT9cyMd4g_15, sizeof(tyArray__K3aHFXbhHM4GwklUcGylAw));
	res = sysctl((&req[(((NI)0))- 0]), ((unsigned int)4), NIM_NIL, (&pathLength), NIM_NIL, ((size_t)0));
	{
		if (!(res < ((NI32)0))) goto LA3_;
		result = TM__yu6cxgKBBXbNsTkT9cyMd4g_16;
		goto BeforeRet_;
	}
	LA3_: ;
	setLengthStrV2((&result), ((NI) (pathLength)));
	res = sysctl((&req[(((NI)0))- 0]), ((unsigned int)4), ((void*) ((&result.p->data[((NI)0)]))), (&pathLength), NIM_NIL, ((size_t)0));
	{
		if (!(res < ((NI32)0))) goto LA7_;
		eqsink___stdZassertions_19((&result), TM__yu6cxgKBBXbNsTkT9cyMd4g_17);
		goto BeforeRet_;
	}
	LA7_: ;
	realLen = (nimToCStringConv(result) ? nimCStrLen(nimToCStringConv(result)) : 0);
	setLengthStrV2((&result), ((NI) (realLen)));
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getApplHeuristic__pureZos_223)(void) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = paramStr__stdZcmdline_53(((NI)0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI)0) < result.len);
		if (!(T3_)) goto LA4_;
		T3_ = !(((NU8)(result.p->data[((NI)0)]) == (NU8)(47)));
		LA4_: ;
		if (!T3_) goto LA5_;
		{
			NimStringV2 p;
			NimStringV2 colontmp_;
			NI lastX60gensym36_;
			NI splitsX60gensym36_;
			p.len = 0; p.p = NIM_NIL;
			colontmp_.len = 0; colontmp_.p = NIM_NIL;
			colontmp_ = getEnv__stdZenvvars_15(TM__yu6cxgKBBXbNsTkT9cyMd4g_19, TM__yu6cxgKBBXbNsTkT9cyMd4g_20);
			if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
			lastX60gensym36_ = ((NI)0);
			splitsX60gensym36_ = ((NI)-1);
			{
				while (1) {
					NimStringV2 x;
					NI firstX60gensym36_;
					NimStringV2 T20_;
					if (!(lastX60gensym36_ <= colontmp_.len)) goto LA10					;
					x.len = 0; x.p = NIM_NIL;
					firstX60gensym36_ = lastX60gensym36_;
					{
						while (1) {
							NIM_BOOL T14_;
							T14_ = (NIM_BOOL)0;
							T14_ = (lastX60gensym36_ < colontmp_.len);
							if (!(T14_)) goto LA15_;
							T14_ = !((((NU8)(colontmp_.p->data[lastX60gensym36_])) == ((NU8)(58))));
							LA15_: ;
							if (!T14_) goto LA13							;
							lastX60gensym36_ += ((NI)1);
						} LA13: ;
					}
					{
						if (!(splitsX60gensym36_ == ((NI)0))) goto LA18_;
						lastX60gensym36_ = colontmp_.len;
					}
					LA18_: ;
					T20_.len = 0; T20_.p = NIM_NIL;
					T20_ = substr__system_7538(colontmp_, firstX60gensym36_, (NI)(lastX60gensym36_ - ((NI)1)));
					eqsink___stdZassertions_19((&p), T20_);
					x = nosjoinPath(p, result);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
					{
						NIM_BOOL T23_;
						T23_ = (NIM_BOOL)0;
						T23_ = nosfileExists(x);
						if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
						if (!T23_) goto LA24_;
						eqsink___stdZassertions_19((&result), x);
						x.len = 0; x.p = NIM_NIL;
						eqdestroy___stdZassertions_13((&x));
						eqdestroy___stdZassertions_13((&colontmp_));
						eqdestroy___stdZassertions_13((&p));
						goto BeforeRet_;
					}
					LA24_: ;
					{
						if (!(splitsX60gensym36_ == ((NI)0))) goto LA28_;
						eqdestroy___stdZassertions_13((&x));
						goto LA9;
					}
					LA28_: ;
					splitsX60gensym36_ -= ((NI)1);
					lastX60gensym36_ += ((NI)1);
					{
						LA11_:;
					}
					{
						eqdestroy___stdZassertions_13((&x));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
				} LA10: ;
			} LA9: ;
			{
				LA8_:;
			}
			{
				eqdestroy___stdZassertions_13((&colontmp_));
				eqdestroy___stdZassertions_13((&p));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
	}
	LA5_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosgetAppFilename)(void) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = getApplFreebsd__pureZos_189();
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NimStringV2 T5_;
		if (!(result.len == ((NI)0))) goto LA3_;
		T5_.len = 0; T5_.p = NIM_NIL;
		T5_ = getApplHeuristic__pureZos_223();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqsink___stdZassertions_19((&result), T5_);
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosgetAppDir)(void) {
	NimStringV2 result;
	NimStringV2 colontmpD_;
	tyTuple__7q7q3E6Oj24ZNVJb9aonhAg colontmpD__2;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	nimZeroMem((void*)(&colontmpD__2), sizeof(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg));
	colontmpD_ = nosgetAppFilename();
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	colontmpD__2 = nossplitFile(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqcopy___stdZassertions_16((&result), colontmpD__2.Field0);
	eqdestroy___pureZos_231((&colontmpD__2));
	eqdestroy___stdZassertions_13((&colontmpD_));
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosexpandFilename)(NimStringV2 filename) {
	NimStringV2 result;
	NCSTRING r;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	r = realpath(nimToCStringConv(filename), ((NCSTRING) NIM_NIL));
	{
		NI32 T5_;
		if (!(r == 0)) goto LA3_;
		T5_ = (NI32)0;
		T5_ = osLastError__stdZoserrors_85();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseOSError__stdZoserrors_82(T5_, filename);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		result = cstrToNimstr(r);
		free(((void*) (r)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, findExe__pureZos_100)(NimStringV2 exe, NIM_BOOL followSymlinks, NimStringV2* extensions, NI extensionsLen_0) {
	NimStringV2 result;
	NimStringV2 path;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	path.len = 0; path.p = NIM_NIL;
	{
		if (!(exe.len == ((NI)0))) goto LA4_;
		eqdestroy___stdZassertions_13((&path));
		goto BeforeRet_;
	}
	LA4_: ;
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = contains__stdZprivateZospaths50_364(((exe).p) ? (exe.p->data) : NIM_NIL, exe.len, 47);
		if (!T8_) goto LA9_;
		{
			NimStringV2* extX60gensym9_;
			NI i;
			extX60gensym9_ = (NimStringV2*)0;
			i = ((NI)0);
			{
				while (1) {
					NimStringV2 T14_;
					if (!(i < extensionsLen_0)) goto LA13					;
					extX60gensym9_ = (&extensions[i]);
					T14_.len = 0; T14_.p = NIM_NIL;
					T14_ = nosaddFileExt(exe, (*extX60gensym9_));
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					eqsink___stdZassertions_19((&result), T14_);
					{
						NIM_BOOL T17_;
						T17_ = (NIM_BOOL)0;
						T17_ = nosfileExists(result);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
						if (!T17_) goto LA18_;
						eqdestroy___stdZassertions_13((&path));
						goto BeforeRet_;
					}
					LA18_: ;
					i += ((NI)1);
				} LA13: ;
			}
		}
	}
	LA9_: ;
	path = getEnv__stdZenvvars_15(TM__yu6cxgKBBXbNsTkT9cyMd4g_21, TM__yu6cxgKBBXbNsTkT9cyMd4g_22);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		NimStringV2 candidate;
		NI lastX60gensym33_;
		NI splitsX60gensym33_;
		candidate.len = 0; candidate.p = NIM_NIL;
		lastX60gensym33_ = ((NI)0);
		splitsX60gensym33_ = ((NI)-1);
		{
			while (1) {
				NI firstX60gensym33_;
				NimStringV2 T32_;
				if (!(lastX60gensym33_ <= path.len)) goto LA23				;
				firstX60gensym33_ = lastX60gensym33_;
				{
					while (1) {
						NIM_BOOL T26_;
						T26_ = (NIM_BOOL)0;
						T26_ = (lastX60gensym33_ < path.len);
						if (!(T26_)) goto LA27_;
						T26_ = !(((NU8)(path.p->data[lastX60gensym33_]) == (NU8)(58)));
						LA27_: ;
						if (!T26_) goto LA25						;
						lastX60gensym33_ += ((NI)1);
					} LA25: ;
				}
				{
					if (!(splitsX60gensym33_ == ((NI)0))) goto LA30_;
					lastX60gensym33_ = path.len;
				}
				LA30_: ;
				T32_.len = 0; T32_.p = NIM_NIL;
				T32_ = substr__system_7538(path, firstX60gensym33_, (NI)(lastX60gensym33_ - ((NI)1)));
				eqsink___stdZassertions_19((&candidate), T32_);
				{
					NimStringV2 x;
					NimStringV2 colontmpD_;
					x.len = 0; x.p = NIM_NIL;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					{
						if (!(candidate.len == ((NI)0))) goto LA37_;
						eqdestroy___stdZassertions_13((&colontmpD_));
						eqdestroy___stdZassertions_13((&x));
						goto LA33;
					}
					LA37_: ;
					colontmpD_ = expandTilde__pureZos_59(candidate);
					if (NIM_UNLIKELY(*nimErr_)) goto LA34_;
					x = slash___stdZprivateZospaths50_91(colontmpD_, exe);
					if (NIM_UNLIKELY(*nimErr_)) goto LA34_;
					{
						NimStringV2* ext;
						NI i_2;
						ext = (NimStringV2*)0;
						i_2 = ((NI)0);
						{
							while (1) {
								NimStringV2 x_2;
								if (!(i_2 < extensionsLen_0)) goto LA41								;
								x_2.len = 0; x_2.p = NIM_NIL;
								ext = (&extensions[i_2]);
								x_2 = nosaddFileExt(x, (*ext));
								if (NIM_UNLIKELY(*nimErr_)) goto LA42_;
								{
									NIM_BOOL T45_;
									T45_ = (NIM_BOOL)0;
									T45_ = nosfileExists(x_2);
									if (NIM_UNLIKELY(*nimErr_)) goto LA42_;
									if (!T45_) goto LA46_;
									{
										while (1) {
											if (!followSymlinks) goto LA49											;
											{
												NIM_BOOL T52_;
												NimStringV2 r;
												NI len;
												T52_ = (NIM_BOOL)0;
												T52_ = nossymlinkExists(x_2);
												if (NIM_UNLIKELY(*nimErr_)) goto LA42_;
												if (!T52_) goto LA53_;
												r.len = 0; r.p = NIM_NIL;
												r = mnewString(((NI)1024));
												len = readlink(nimToCStringConv(x_2), nimToCStringConv(r), ((NI)1024));
												{
													NI32 T60_;
													if (!(len < ((NI)0))) goto LA58_;
													T60_ = (NI32)0;
													T60_ = osLastError__stdZoserrors_85();
													if (NIM_UNLIKELY(*nimErr_)) goto LA55_;
													raiseOSError__stdZoserrors_82(T60_, exe);
													if (NIM_UNLIKELY(*nimErr_)) goto LA55_;
												}
												LA58_: ;
												{
													NimStringV2 T65_;
													if (!(((NI)1024) < len)) goto LA63_;
													T65_.len = 0; T65_.p = NIM_NIL;
													T65_ = mnewString(((NI) ((NI)(len + ((NI)1)))));
													eqsink___stdZassertions_19((&r), T65_);
													len = readlink(nimToCStringConv(x_2), nimToCStringConv(r), len);
												}
												LA63_: ;
												setLengthStrV2((&r), ((NI) (len)));
												{
													NIM_BOOL T68_;
													T68_ = (NIM_BOOL)0;
													T68_ = nosisAbsolute(r);
													if (NIM_UNLIKELY(*nimErr_)) goto LA55_;
													if (!T68_) goto LA69_;
													eqsink___stdZassertions_19((&x_2), r);
													r.len = 0; r.p = NIM_NIL;
												}
												goto LA66_;
												LA69_: ;
												{
													NimStringV2 colontmpD__2;
													NimStringV2 T72_;
													colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
													colontmpD__2 = nosparentDir(x_2);
													if (NIM_UNLIKELY(*nimErr_)) goto LA55_;
													T72_.len = 0; T72_.p = NIM_NIL;
													T72_ = slash___stdZprivateZospaths50_91(colontmpD__2, r);
													if (NIM_UNLIKELY(*nimErr_)) goto LA55_;
													eqsink___stdZassertions_19((&x_2), T72_);
													eqdestroy___stdZassertions_13((&colontmpD__2));
												}
												LA66_: ;
												{
													LA55_:;
												}
												{
													eqdestroy___stdZassertions_13((&r));
												}
												if (NIM_UNLIKELY(*nimErr_)) goto LA42_;
											}
											goto LA50_;
											LA53_: ;
											{
												goto LA48;
											}
											LA50_: ;
										} LA49: ;
									} LA48: ;
									eqsink___stdZassertions_19((&result), x_2);
									x_2.len = 0; x_2.p = NIM_NIL;
									eqdestroy___stdZassertions_13((&x_2));
									eqdestroy___stdZassertions_13((&colontmpD_));
									eqdestroy___stdZassertions_13((&x));
									eqdestroy___stdZassertions_13((&candidate));
									eqdestroy___stdZassertions_13((&path));
									goto BeforeRet_;
								}
								LA46_: ;
								i_2 += ((NI)1);
								{
									LA42_:;
								}
								{
									eqdestroy___stdZassertions_13((&x_2));
								}
								if (NIM_UNLIKELY(*nimErr_)) goto LA34_;
							} LA41: ;
						}
					}
					{
						LA34_:;
					}
					{
						eqdestroy___stdZassertions_13((&colontmpD_));
						eqdestroy___stdZassertions_13((&x));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
				} LA33: ;
				{
					if (!(splitsX60gensym33_ == ((NI)0))) goto LA82_;
					goto LA22;
				}
				LA82_: ;
				splitsX60gensym33_ -= ((NI)1);
				lastX60gensym33_ += ((NI)1);
			} LA23: ;
		} LA22: ;
		{
			LA21_:;
		}
		{
			eqdestroy___stdZassertions_13((&candidate));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	result = TM__yu6cxgKBBXbNsTkT9cyMd4g_23;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&path));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, exitStatusLikeShell__pureZos_144)(int status) {
	int result;
	NI32 colontmpD_;
	int colontmpD__2;
	result = (int)0;
	colontmpD_ = (NI32)0;
	colontmpD__2 = (int)0;
	{
		NIM_BOOL T3_;
		int T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = WIFSIGNALED(status);
		if (!T3_) goto LA4_;
		T6_ = (int)0;
		T6_ = WTERMSIG(status);
		colontmpD_ = (NI32)(((NI32)128) + T6_);
		result = colontmpD_;
	}
	goto LA1_;
	LA4_: ;
	{
		colontmpD__2 = WEXITSTATUS(status);
		result = colontmpD__2;
	}
	LA1_: ;
	return result;
}
static N_INLINE(tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q, toTime__pureZos_27)(struct timespec ts) {
	tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q));
	result = initTime__pureZtimes_1013(((NI64) (ts.tv_sec)), ((NI) (ts.tv_nsec)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q, nosgetLastModificationTime)(NimStringV2 file) {
	tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q result;
	struct stat res;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q));
	nimZeroMem((void*)(&res), sizeof(struct stat));
	{
		int T3_;
		NI32 T6_;
		T3_ = (int)0;
		T3_ = stat(nimToCStringConv(file), (&res));
		if (!(T3_ < ((NI32)0))) goto LA4_;
		T6_ = (NI32)0;
		T6_ = osLastError__stdZoserrors_85();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseOSError__stdZoserrors_82(T6_, file);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	result = toTime__pureZos_27(res.st_mtim);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosfileNewer)(NimStringV2 a, NimStringV2 b) {
	NIM_BOOL result;
	tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q T1_;
	tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = nosgetLastModificationTime(b);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = nosgetLastModificationTime(a);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = ntLtTime(T1_, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nosexecShellCmd)(NimStringV2 command) {
	NI result;
	int T1_;
	int T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (int)0;
	T1_ = system(nimToCStringConv(command));
	T2_ = (int)0;
	T2_ = exitStatusLikeShell__pureZos_144(T1_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = ((NI) (T2_));
	}BeforeRet_: ;
	return result;
}
