/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <sys/types.h>
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
typedef struct tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ;
typedef struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct Exception Exception;
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
typedef NU8 tySet_tyEnum_ProcessOption__bnU6W8LhTMnT4JaSWtGlSA;
struct tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg {
  RootObj Sup;
int inHandle;
int outHandle;
int errHandle;
pid_t id;
tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* inStream;
tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* outStream;
tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* errStream;
int exitStatus;
NIM_BOOL exitFlag;
tySet_tyEnum_ProcessOption__bnU6W8LhTMnT4JaSWtGlSA options;
};
typedef NimStringV2 tyArray__nHXaesL0DJZHyVS07ARPRA[1];
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
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_224)(NimStringV2 msg);
N_LIB_PRIVATE N_NIMCALL(void, openDefaultBrowserImpl__pureZbrowsers_10)(NimStringV2 url);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nospquoteShell)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, prepare__pureZbrowsers_7)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__pureZstrutils_1816)(NimStringV2 s, NimStringV2 sub);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, absolutePath__stdZprivateZospaths50_343)(NimStringV2 path, NimStringV2 root);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosgetCurrentDir)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NI, nosexecShellCmd)(NimStringV2 command);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getEnv__stdZenvvars_15)(NimStringV2 key, NimStringV2 default_0);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7550)(NimStringV2 s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg*, nospstartProcess)(NimStringV2 command, NimStringV2 workingDir, NimStringV2* args, NI argsLen_0, tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* env, tySet_tyEnum_ProcessOption__bnU6W8LhTMnT4JaSWtGlSA options);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZosproc_203)(tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg** dest);
static N_INLINE(NIM_BOOL, isObjDisplayCheck)(TNimTypeV2* source, NI16 targetDepth, NU32 token);
static N_INLINE(Exception*, nimBorrowCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_33)(Exception** dest, Exception* src, NIM_BOOL cyclic);
static const struct {
  NI cap; NIM_CHAR data[62+1];
} TM__CZNeKGdQ8AWxD1HSDIq5DQ_2 = { 62 | NIM_STRLIT_FLAG, "browsers.nim(75, 3) `url.len > 0` URL must not be empty string" };
static const NimStringV2 TM__CZNeKGdQ8AWxD1HSDIq5DQ_3 = {62, (NimStrPayload*)&TM__CZNeKGdQ8AWxD1HSDIq5DQ_2};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__CZNeKGdQ8AWxD1HSDIq5DQ_4 = { 3 | NIM_STRLIT_FLAG, "://" };
static const NimStringV2 TM__CZNeKGdQ8AWxD1HSDIq5DQ_5 = {3, (NimStrPayload*)&TM__CZNeKGdQ8AWxD1HSDIq5DQ_4};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__CZNeKGdQ8AWxD1HSDIq5DQ_6 = { 7 | NIM_STRLIT_FLAG, "file://" };
static const NimStringV2 TM__CZNeKGdQ8AWxD1HSDIq5DQ_7 = {7, (NimStrPayload*)&TM__CZNeKGdQ8AWxD1HSDIq5DQ_6};
static const struct {
  NI cap; NIM_CHAR data[9+1];
} TM__CZNeKGdQ8AWxD1HSDIq5DQ_8 = { 9 | NIM_STRLIT_FLAG, "xdg-open " };
static const NimStringV2 TM__CZNeKGdQ8AWxD1HSDIq5DQ_9 = {9, (NimStrPayload*)&TM__CZNeKGdQ8AWxD1HSDIq5DQ_8};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__CZNeKGdQ8AWxD1HSDIq5DQ_10 = { 7 | NIM_STRLIT_FLAG, "BROWSER" };
static const NimStringV2 TM__CZNeKGdQ8AWxD1HSDIq5DQ_11 = {7, (NimStrPayload*)&TM__CZNeKGdQ8AWxD1HSDIq5DQ_10};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__CZNeKGdQ8AWxD1HSDIq5DQ_12 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__CZNeKGdQ8AWxD1HSDIq5DQ_13 = {0, (NimStrPayload*)&TM__CZNeKGdQ8AWxD1HSDIq5DQ_12};
static const NimStringV2 TM__CZNeKGdQ8AWxD1HSDIq5DQ_14 = {0, (NimStrPayload*)&TM__CZNeKGdQ8AWxD1HSDIq5DQ_12};
extern NIM_BOOL nimInErrorMode__system_3994;
extern Exception* currException__system_3668;
extern Exception* currException__system_3668;
extern Exception* currException__system_3668;
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, prepare__pureZbrowsers_7)(NimStringV2 s) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = contains__pureZstrutils_1816(s, TM__CZNeKGdQ8AWxD1HSDIq5DQ_5);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		eqcopy___stdZassertions_16((&result), s);
	}
	goto LA1_;
	LA4_: ;
	{
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		NimStringV2 T8_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		T8_.len = 0; T8_.p = NIM_NIL;
		colontmpD_ = nosgetCurrentDir();
		if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		colontmpD__2 = absolutePath__stdZprivateZospaths50_343(s, colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		T8_ = rawNewString(colontmpD__2.len + 7);
appendString((&T8_), TM__CZNeKGdQ8AWxD1HSDIq5DQ_7);
appendString((&T8_), colontmpD__2);
		result = T8_;
		{
			LA7_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmpD__2));
			eqdestroy___stdZassertions_13((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL, isObjDisplayCheck)(TNimTypeV2* source, NI16 targetDepth, NU32 token) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (targetDepth <= (*source).depth);
	if (!(T1_)) goto LA2_;
	T1_ = ((*source).display[targetDepth] == token);
	LA2_: ;
	result = T1_;
	return result;
}
static N_INLINE(Exception*, nimBorrowCurrentException)(void) {
	Exception* result;
	result = NIM_NIL;
	result = currException__system_3668;
	return result;
}
static N_INLINE(void, popCurrentException)(void) {
	eqcopy___stdZassertions_33(&currException__system_3668, (*currException__system_3668).up, NIM_FALSE);
}
N_LIB_PRIVATE N_NIMCALL(void, openDefaultBrowserImpl__pureZbrowsers_10)(NimStringV2 url) {
	NimStringV2 u;
	NimStringV2 colontmpD_;
	NimStringV2 colontmpD__2;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	u.len = 0; u.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	colontmpD_ = prepare__pureZbrowsers_7(url);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	u = nospquoteShell(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		NimStringV2 T4_;
		NI T5_;
		T4_.len = 0; T4_.p = NIM_NIL;
		T4_ = rawNewString(u.len + 9);
appendString((&T4_), TM__CZNeKGdQ8AWxD1HSDIq5DQ_9);
appendString((&T4_), u);
		colontmpD__2 = T4_;
		T5_ = (NI)0;
		T5_ = nosexecShellCmd(colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!(T5_ == ((NI)0))) goto LA6_;
		eqdestroy___stdZassertions_13((&colontmpD__2));
		eqdestroy___stdZassertions_13((&colontmpD_));
		eqdestroy___stdZassertions_13((&u));
		goto BeforeRet_;
	}
	LA6_: ;
	{
		NimStringV2 b;
		NimStringV2 colontmp_;
		NI lastX60gensym33_;
		NI splitsX60gensym33_;
		b.len = 0; b.p = NIM_NIL;
		colontmp_.len = 0; colontmp_.p = NIM_NIL;
		colontmp_ = getEnv__stdZenvvars_15(TM__CZNeKGdQ8AWxD1HSDIq5DQ_11, TM__CZNeKGdQ8AWxD1HSDIq5DQ_13);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		lastX60gensym33_ = ((NI)0);
		splitsX60gensym33_ = ((NI)-1);
		{
			while (1) {
				NI firstX60gensym33_;
				NimStringV2 T20_;
				tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg* colontmpD__3;
				tyArray__nHXaesL0DJZHyVS07ARPRA T23_;
				tyObject_ProcessObj__2rGNQnv9bU4hanI2g3svReg* T24_;
				if (!(lastX60gensym33_ <= colontmp_.len)) goto LA11				;
				firstX60gensym33_ = lastX60gensym33_;
				{
					while (1) {
						NIM_BOOL T14_;
						T14_ = (NIM_BOOL)0;
						T14_ = (lastX60gensym33_ < colontmp_.len);
						if (!(T14_)) goto LA15_;
						T14_ = !(((NU8)(colontmp_.p->data[lastX60gensym33_]) == (NU8)(58)));
						LA15_: ;
						if (!T14_) goto LA13						;
						lastX60gensym33_ += ((NI)1);
					} LA13: ;
				}
				{
					if (!(splitsX60gensym33_ == ((NI)0))) goto LA18_;
					lastX60gensym33_ = colontmp_.len;
				}
				LA18_: ;
				T20_.len = 0; T20_.p = NIM_NIL;
				T20_ = substr__system_7550(colontmp_, firstX60gensym33_, (NI)(lastX60gensym33_ - ((NI)1)));
				eqsink___stdZassertions_19((&b), T20_);
				colontmpD__3 = NIM_NIL;
				T23_[0] = url;
				T24_ = NIM_NIL;
				T24_ = nospstartProcess(b, TM__CZNeKGdQ8AWxD1HSDIq5DQ_14, T23_, 1, ((tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*) NIM_NIL), 2);
				if (NIM_UNLIKELY(*nimErr_)) goto LA22_;
				colontmpD__3 = T24_;
				(void)(colontmpD__3);
				eqdestroy___pureZosproc_203(&colontmpD__3);
				eqdestroy___stdZassertions_13((&colontmp_));
				eqdestroy___stdZassertions_13((&b));
				eqdestroy___stdZassertions_13((&colontmpD__2));
				eqdestroy___stdZassertions_13((&colontmpD_));
				eqdestroy___stdZassertions_13((&u));
				goto BeforeRet_;
				{
					LA22_:;
				}
				{
					eqdestroy___pureZosproc_203(&colontmpD__3);
				}
				if (NIM_UNLIKELY(*nimErr_)) goto LA21_;
				if (NIM_UNLIKELY(*nimErr_)) {
					LA21_:;
					if (isObjDisplayCheck(nimBorrowCurrentException()->Sup.m_type, 3, 3829286656)) {
						*nimErr_ = NIM_FALSE;
						popCurrentException();
						LA28_:;
					}
				}
				if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
				{
					if (!(splitsX60gensym33_ == ((NI)0))) goto LA32_;
					goto LA10;
				}
				LA32_: ;
				splitsX60gensym33_ -= ((NI)1);
				lastX60gensym33_ += ((NI)1);
			} LA11: ;
		} LA10: ;
		{
			LA9_:;
		}
		{
			eqdestroy___stdZassertions_13((&colontmp_));
			eqdestroy___stdZassertions_13((&b));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&colontmpD__2));
		eqdestroy___stdZassertions_13((&colontmpD_));
		eqdestroy___stdZassertions_13((&u));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, openDefaultBrowser__pureZbrowsers_14)(NimStringV2 url) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!!((((NI)0) < url.len))) goto LA3_;
		failedAssertImpl__stdZassertions_224(TM__CZNeKGdQ8AWxD1HSDIq5DQ_3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	openDefaultBrowserImpl__pureZbrowsers_10(url);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
