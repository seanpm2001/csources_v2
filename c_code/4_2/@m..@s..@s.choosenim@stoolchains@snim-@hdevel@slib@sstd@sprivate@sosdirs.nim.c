/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>
#include <dirent.h>
#include <time.h>
#include <unistd.h>
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
typedef struct tyObject_IOError__N09bhl56nRkUaUsonzshECg tyObject_IOError__N09bhl56nRkUaUsonzshECg;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyTuple__MuQpYKhupAt9a7EFKGkr9ayg tyTuple__MuQpYKhupAt9a7EFKGkr9ayg;
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
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
struct tyObject_IOError__N09bhl56nRkUaUsonzshECg {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
typedef NU8 tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ;
typedef NIM_CHAR tyArray__dTlC27m9c9aWd5dvuePYanug[256];
struct tyTuple__MuQpYKhupAt9a7EFKGkr9ayg {
tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ Field0;
NIM_BOOL Field1;
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringV2 Field0;
NimStringV2 Field1;
};
typedef NU8 tySet_tyEnum_CopyFlag__mhWURcDRsh0F1DeHBSFUVg;
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsOrCreateDir)(NimStringV2 dir);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, rawCreateDir__stdZprivateZosdirs_443)(NimStringV2 dir);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_82)(NI32 errorCode, NimStringV2 additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_85)(void);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosdirExists)(NimStringV2 dir);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosisRootDir)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosparentDir)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_7547)(NimStringV2 s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, cstrToNimstr)(NCSTRING str);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringV2 a, NimStringV2 b);
static N_INLINE(NIM_BOOL, equalMem__system_1727)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
static N_INLINE(NimStringV2, slash___stdZprivateZospaths50_91)(NimStringV2 head, NimStringV2 tail);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosjoinPath)(NimStringV2 head, NimStringV2 tail);
N_LIB_PRIVATE N_NIMCALL(tyTuple__MuQpYKhupAt9a7EFKGkr9ayg, getSymlinkFileKind__stdZprivateZoscommon_26)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(void, nosremoveFile)(NimStringV2 file);
N_LIB_PRIVATE N_NIMCALL(void, nosremoveDir)(NimStringV2 dir, NIM_BOOL checkDir);
N_LIB_PRIVATE N_NIMCALL(void, rawRemoveDir__stdZprivateZosdirs_436)(NimStringV2 dir);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tryMoveFSObject__stdZprivateZoscommon_71)(NimStringV2 source, NimStringV2 dest, NIM_BOOL isDir);
N_LIB_PRIVATE N_NIMCALL(void, noscopyDir)(NimStringV2 source, NimStringV2 dest);
N_LIB_PRIVATE N_NIMCALL(void, noscreateDir)(NimStringV2 dir);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZprivateZospaths50_292)(tyTuple__UV3llMMYFckfui8YMBuUZA* dest);
N_LIB_PRIVATE N_NIMCALL(void, nossplitPath)(NimStringV2 path, tyTuple__UV3llMMYFckfui8YMBuUZA* Result);
N_LIB_PRIVATE N_NIMCALL(void, noscopyFile)(NimStringV2 source, NimStringV2 dest, tySet_tyEnum_CopyFlag__mhWURcDRsh0F1DeHBSFUVg options);
extern TNimTypeV2 NTIv2__N09bhl56nRkUaUsonzshECg_;
static const struct {
  NI cap; NIM_CHAR data[18+1];
} TM__UhMx4BhJKblm8VrPrbmAGA_2 = { 18 | NIM_STRLIT_FLAG, "Failed to create \'" };
static const NimStringV2 TM__UhMx4BhJKblm8VrPrbmAGA_3 = {18, (NimStrPayload*)&TM__UhMx4BhJKblm8VrPrbmAGA_2};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__UhMx4BhJKblm8VrPrbmAGA_4 = { 1 | NIM_STRLIT_FLAG, "\'" };
static const NimStringV2 TM__UhMx4BhJKblm8VrPrbmAGA_5 = {1, (NimStrPayload*)&TM__UhMx4BhJKblm8VrPrbmAGA_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__UhMx4BhJKblm8VrPrbmAGA_6 = { 1 | NIM_STRLIT_FLAG, "." };
static const NimStringV2 TM__UhMx4BhJKblm8VrPrbmAGA_7 = {1, (NimStrPayload*)&TM__UhMx4BhJKblm8VrPrbmAGA_6};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__UhMx4BhJKblm8VrPrbmAGA_8 = { 2 | NIM_STRLIT_FLAG, ".." };
static const NimStringV2 TM__UhMx4BhJKblm8VrPrbmAGA_9 = {2, (NimStrPayload*)&TM__UhMx4BhJKblm8VrPrbmAGA_8};
static const NimStringV2 TM__UhMx4BhJKblm8VrPrbmAGA_10 = {1, (NimStrPayload*)&TM__UhMx4BhJKblm8VrPrbmAGA_6};
static const NimStringV2 TM__UhMx4BhJKblm8VrPrbmAGA_11 = {2, (NimStrPayload*)&TM__UhMx4BhJKblm8VrPrbmAGA_8};
extern NIM_BOOL nimInErrorMode__system_4003;
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
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_4003);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, rawCreateDir__stdZprivateZosdirs_443)(NimStringV2 dir) {
	NIM_BOOL result;
	int res;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	res = mkdir(nimToCStringConv(dir), ((mode_t)511));
	{
		if (!(res == ((NI32)0))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(errno == ((NI) (EEXIST)) || errno == ((NI) (ENOSYS)))) goto LA6_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA6_: ;
	{
		NI32 T9_;
		T9_ = (NI32)0;
		T9_ = osLastError__stdZoserrors_85();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseOSError__stdZoserrors_82(T9_, dir);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosexistsOrCreateDir)(NimStringV2 dir) {
	NIM_BOOL result;
	NIM_BOOL T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = rawCreateDir__stdZprivateZosdirs_443(dir);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = !(T1_);
	{
		if (!result) goto LA4_;
		{
			NIM_BOOL T8_;
			tyObject_IOError__N09bhl56nRkUaUsonzshECg* T11_;
			NimStringV2 T12_;
			T8_ = (NIM_BOOL)0;
			T8_ = nosdirExists(dir);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!!(T8_)) goto LA9_;
			T11_ = NIM_NIL;
			T11_ = (tyObject_IOError__N09bhl56nRkUaUsonzshECg*) nimNewObj(sizeof(tyObject_IOError__N09bhl56nRkUaUsonzshECg), NIM_ALIGNOF(tyObject_IOError__N09bhl56nRkUaUsonzshECg));
			(*T11_).Sup.Sup.Sup.m_type = (&NTIv2__N09bhl56nRkUaUsonzshECg_);
			(*T11_).Sup.Sup.name = "IOError";
			T12_.len = 0; T12_.p = NIM_NIL;
			T12_ = rawNewString(dir.len + 19);
appendString((&T12_), TM__UhMx4BhJKblm8VrPrbmAGA_3);
appendString((&T12_), dir);
appendString((&T12_), TM__UhMx4BhJKblm8VrPrbmAGA_5);
			(*T11_).Sup.Sup.message = T12_;
			(*T11_).Sup.Sup.parent = ((Exception*) NIM_NIL);
			raiseExceptionEx((Exception*)T11_, "IOError", "existsOrCreateDir", "osdirs.nim", 426);
goto BeforeRet_;
		}
		LA9_: ;
	}
	LA4_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, noscreateDir)(NimStringV2 dir) {
	NIM_BOOL omitNext;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!(dir.len == 0)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	omitNext = nosisAbsolute(dir);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NimStringV2 p;
		p.len = 0; p.p = NIM_NIL;
		{
			NimStringV2 current;
			if (!NIM_FALSE) goto LA9_;
			current.len = 0; current.p = NIM_NIL;
			eqcopy___stdZassertions_16((&current), dir);
			{
				if (!NIM_TRUE) goto LA14_;
				eqcopy___stdZassertions_16((&p), dir);
				{
					if (!omitNext) goto LA18_;
					omitNext = NIM_FALSE;
				}
				goto LA16_;
				LA18_: ;
				{
					NIM_BOOL T21_;
					T21_ = (NIM_BOOL)0;
					T21_ = nosexistsOrCreateDir(p);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
					(void)(T21_);
				}
				LA16_: ;
			}
			LA14_: ;
			{
				while (1) {
					NimStringV2 T29_;
					{
						NIM_BOOL T26_;
						T26_ = (NIM_BOOL)0;
						T26_ = nosisRootDir(current);
						if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
						if (!T26_) goto LA27_;
						goto LA22;
					}
					LA27_: ;
					T29_.len = 0; T29_.p = NIM_NIL;
					T29_ = nosparentDir(current);
					if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
					eqsink___stdZassertions_19((&current), T29_);
					eqcopy___stdZassertions_16((&p), current);
					{
						if (!omitNext) goto LA32_;
						omitNext = NIM_FALSE;
					}
					goto LA30_;
					LA32_: ;
					{
						NIM_BOOL T35_;
						T35_ = (NIM_BOOL)0;
						T35_ = nosexistsOrCreateDir(p);
						if (NIM_UNLIKELY(*nimErr_)) goto LA11_;
						(void)(T35_);
					}
					LA30_: ;
				}
			} LA22: ;
			{
				LA11_:;
			}
			{
				eqdestroy___stdZassertions_13((&current));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		}
		goto LA7_;
		LA9_: ;
		{
			{
				NI i;
				NI colontmp_;
				NI res;
				i = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = (NI)(dir.len - ((NI)2));
				res = ((NI)0);
				{
					while (1) {
						if (!(res <= colontmp_)) goto LA41						;
						i = res;
						{
							NIM_BOOL T44_;
							NIM_BOOL T46_;
							NimStringV2 T50_;
							T44_ = (NIM_BOOL)0;
							T44_ = (((NU8)(dir.p->data[i])) == ((NU8)(47)) || ((NU8)(dir.p->data[i])) == ((NU8)(47)));
							if (!(T44_)) goto LA45_;
							T46_ = (NIM_BOOL)0;
							T46_ = (i == ((NI)0));
							if (T46_) goto LA47_;
							T46_ = !((((NU8)(dir.p->data[(NI)(i - ((NI)1))])) == ((NU8)(47)) || ((NU8)(dir.p->data[(NI)(i - ((NI)1))])) == ((NU8)(47))));
							LA47_: ;
							T44_ = T46_;
							LA45_: ;
							if (!T44_) goto LA48_;
							T50_.len = 0; T50_.p = NIM_NIL;
							T50_ = substr__system_7547(dir, ((NI)0), i);
							eqsink___stdZassertions_19((&p), T50_);
							{
								if (!omitNext) goto LA53_;
								omitNext = NIM_FALSE;
							}
							goto LA51_;
							LA53_: ;
							{
								NIM_BOOL T56_;
								T56_ = (NIM_BOOL)0;
								T56_ = nosexistsOrCreateDir(p);
								if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
								(void)(T56_);
							}
							LA51_: ;
						}
						LA48_: ;
						res += ((NI)1);
					} LA41: ;
				}
			}
			{
				if (!NIM_TRUE) goto LA59_;
				eqcopy___stdZassertions_16((&p), dir);
				{
					if (!omitNext) goto LA63_;
					omitNext = NIM_FALSE;
				}
				goto LA61_;
				LA63_: ;
				{
					NIM_BOOL T66_;
					T66_ = (NIM_BOOL)0;
					T66_ = nosexistsOrCreateDir(p);
					if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
					(void)(T66_);
				}
				LA61_: ;
			}
			LA59_: ;
		}
		LA7_: ;
		{
			LA6_:;
		}
		{
			eqdestroy___stdZassertions_13((&p));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	}BeforeRet_: ;
}
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}
static N_INLINE(NIM_BOOL, equalMem__system_1727)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32)0));
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringV2 a, NimStringV2 b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = a.len;
	blen = b.len;
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI)0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem__system_1727(((void*) ((&a.p->data[((NI)0)]))), ((void*) ((&b.p->data[((NI)0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
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
N_LIB_PRIVATE N_NIMCALL(void, rawRemoveDir__stdZprivateZosdirs_436)(NimStringV2 dir) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		int T4_;
		NI32 T8_;
		T3_ = (NIM_BOOL)0;
		T4_ = (int)0;
		T4_ = rmdir(nimToCStringConv(dir));
		T3_ = !((T4_ == ((NI32)0)));
		if (!(T3_)) goto LA5_;
		T3_ = !((errno == ENOENT));
		LA5_: ;
		if (!T3_) goto LA6_;
		T8_ = (NI32)0;
		T8_ = osLastError__stdZoserrors_85();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseOSError__stdZoserrors_82(T8_, dir);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA6_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, nosremoveDir)(NimStringV2 dir, NIM_BOOL checkDir) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NimStringV2 path;
		tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ kind;
		DIR* d;
		path.len = 0; path.p = NIM_NIL;
		kind = (tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)0;
		d = opendir(nimToCStringConv(dir));
		{
			if (!(d == ((DIR*) NIM_NIL))) goto LA5_;
			{
				NI32 T11_;
				if (!checkDir) goto LA9_;
				T11_ = (NI32)0;
				T11_ = osLastError__stdZoserrors_85();
				if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
				raiseOSError__stdZoserrors_82(T11_, dir);
				if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
			}
			LA9_: ;
		}
		goto LA3_;
		LA5_: ;
		{
			{
				while (1) {
					{
						NimStringV2 y;
						struct dirent* x;
						y.len = 0; y.p = NIM_NIL;
						x = readdir(d);
						{
							if (!(x == ((struct dirent*) NIM_NIL))) goto LA20_;
							eqdestroy___stdZassertions_13((&y));
							goto LA14;
						}
						LA20_: ;
						y = cstrToNimstr(((NCSTRING) ((*x).d_name)));
						{
							NIM_BOOL T24_;
							NimStringV2 path_2;
							struct stat s;
							tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ k;
							T24_ = (NIM_BOOL)0;
							T24_ = !(eqStrings(y, TM__UhMx4BhJKblm8VrPrbmAGA_7));
							if (!(T24_)) goto LA25_;
							T24_ = !(eqStrings(y, TM__UhMx4BhJKblm8VrPrbmAGA_9));
							LA25_: ;
							if (!T24_) goto LA26_;
							path_2.len = 0; path_2.p = NIM_NIL;
							nimZeroMem((void*)(&s), sizeof(struct stat));
							path_2 = slash___stdZprivateZospaths50_91(dir, y);
							if (NIM_UNLIKELY(*nimErr_)) goto LA28_;
							{
								if (!NIM_TRUE) goto LA31_;
								eqcopy___stdZassertions_16((&y), path_2);
							}
							LA31_: ;
							k = ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)0);
							{
								int T35_;
								T35_ = (int)0;
								T35_ = lstat(nimToCStringConv(path_2), (&s));
								if (!(T35_ < ((NI32)0))) goto LA36_;
								eqdestroy___stdZassertions_13((&path_2));
								eqdestroy___stdZassertions_13((&y));
								goto LA16;
							}
							goto LA33_;
							LA36_: ;
							{
								NIM_BOOL T39_;
								T39_ = (NIM_BOOL)0;
								T39_ = S_ISDIR(s.st_mode);
								if (!T39_) goto LA40_;
								k = ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)2);
							}
							goto LA33_;
							LA40_: ;
							{
								NIM_BOOL T43_;
								NIM_BOOL isSpecialX60gensym20_;
								tyTuple__MuQpYKhupAt9a7EFKGkr9ayg _;
								T43_ = (NIM_BOOL)0;
								T43_ = S_ISLNK(s.st_mode);
								if (!T43_) goto LA44_;
								isSpecialX60gensym20_ = (NIM_BOOL)0;
								_ = getSymlinkFileKind__stdZprivateZoscommon_26(path_2);
								if (NIM_UNLIKELY(*nimErr_)) goto LA28_;
								k = _.Field0;
								isSpecialX60gensym20_ = _.Field1;
								{
									NIM_BOOL T48_;
									T48_ = (NIM_BOOL)0;
									T48_ = NIM_FALSE;
									if (!(T48_)) goto LA49_;
									T48_ = isSpecialX60gensym20_;
									LA49_: ;
									if (!T48_) goto LA50_;
									eqdestroy___stdZassertions_13((&path_2));
									eqdestroy___stdZassertions_13((&y));
									goto LA16;
								}
								LA50_: ;
							}
							goto LA33_;
							LA44_: ;
							{
								NIM_BOOL T53_;
								NIM_BOOL T55_;
								T53_ = (NIM_BOOL)0;
								T53_ = NIM_FALSE;
								if (!(T53_)) goto LA54_;
								T55_ = (NIM_BOOL)0;
								T55_ = S_ISREG(s.st_mode);
								T53_ = !(T55_);
								LA54_: ;
								if (!T53_) goto LA56_;
								eqdestroy___stdZassertions_13((&path_2));
								eqdestroy___stdZassertions_13((&y));
								goto LA16;
							}
							goto LA33_;
							LA56_: ;
							LA33_: ;
							kind = k;
							eqsink___stdZassertions_19((&path), y);
							y.len = 0; y.p = NIM_NIL;
							switch (kind) {
							case ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)0):
							case ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)1):
							case ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)3):
							{
								nosremoveFile(path);
								if (NIM_UNLIKELY(*nimErr_)) goto LA28_;
							}
							break;
							case ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)2):
							{
								nosremoveDir(path, NIM_TRUE);
								if (NIM_UNLIKELY(*nimErr_)) goto LA28_;
							}
							break;
							}
							{
								LA28_:;
							}
							{
								eqdestroy___stdZassertions_13((&path_2));
							}
							if (NIM_UNLIKELY(*nimErr_)) goto LA17_;
						}
						LA26_: ;
						{
							LA17_:;
						}
						{
							eqdestroy___stdZassertions_13((&y));
						}
						if (NIM_UNLIKELY(*nimErr_)) goto LA13_;
					} LA16: ;
				}
			} LA14: ;
			{
				LA13_:;
			}
			{
				int T66_;
				T66_ = (int)0;
				T66_ = closedir(d);
				(void)(T66_);
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
		}
		LA3_: ;
		{
			LA2_:;
		}
		{
			eqdestroy___stdZassertions_13((&path));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	rawRemoveDir__stdZprivateZosdirs_436(dir);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, noscopyDir)(NimStringV2 source, NimStringV2 dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	noscreateDir(dest);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NimStringV2 path;
		tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ kind;
		DIR* d;
		path.len = 0; path.p = NIM_NIL;
		kind = (tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)0;
		d = opendir(nimToCStringConv(source));
		{
			if (!(d == ((DIR*) NIM_NIL))) goto LA5_;
			{
				NI32 T11_;
				if (!NIM_FALSE) goto LA9_;
				T11_ = (NI32)0;
				T11_ = osLastError__stdZoserrors_85();
				if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
				raiseOSError__stdZoserrors_82(T11_, source);
				if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
			}
			LA9_: ;
		}
		goto LA3_;
		LA5_: ;
		{
			{
				while (1) {
					{
						NimStringV2 y;
						struct dirent* x;
						y.len = 0; y.p = NIM_NIL;
						x = readdir(d);
						{
							if (!(x == ((struct dirent*) NIM_NIL))) goto LA20_;
							eqdestroy___stdZassertions_13((&y));
							goto LA14;
						}
						LA20_: ;
						y = cstrToNimstr(((NCSTRING) ((*x).d_name)));
						{
							NIM_BOOL T24_;
							NimStringV2 path_2;
							NimStringV2 noSource;
							tyTuple__UV3llMMYFckfui8YMBuUZA colontmpD_;
							struct stat s;
							tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ k;
							T24_ = (NIM_BOOL)0;
							T24_ = !(eqStrings(y, TM__UhMx4BhJKblm8VrPrbmAGA_10));
							if (!(T24_)) goto LA25_;
							T24_ = !(eqStrings(y, TM__UhMx4BhJKblm8VrPrbmAGA_11));
							LA25_: ;
							if (!T24_) goto LA26_;
							path_2.len = 0; path_2.p = NIM_NIL;
							noSource.len = 0; noSource.p = NIM_NIL;
							nimZeroMem((void*)(&colontmpD_), sizeof(tyTuple__UV3llMMYFckfui8YMBuUZA));
							nimZeroMem((void*)(&s), sizeof(struct stat));
							path_2 = slash___stdZprivateZospaths50_91(source, y);
							if (NIM_UNLIKELY(*nimErr_)) goto LA28_;
							{
								if (!NIM_TRUE) goto LA31_;
								eqcopy___stdZassertions_16((&y), path_2);
							}
							LA31_: ;
							k = ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)0);
							{
								int T35_;
								T35_ = (int)0;
								T35_ = lstat(nimToCStringConv(path_2), (&s));
								if (!(T35_ < ((NI32)0))) goto LA36_;
								eqdestroy___stdZprivateZospaths50_292((&colontmpD_));
								eqdestroy___stdZassertions_13((&noSource));
								eqdestroy___stdZassertions_13((&path_2));
								eqdestroy___stdZassertions_13((&y));
								goto LA16;
							}
							goto LA33_;
							LA36_: ;
							{
								NIM_BOOL T39_;
								T39_ = (NIM_BOOL)0;
								T39_ = S_ISDIR(s.st_mode);
								if (!T39_) goto LA40_;
								k = ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)2);
							}
							goto LA33_;
							LA40_: ;
							{
								NIM_BOOL T43_;
								NIM_BOOL isSpecialX60gensym20_;
								tyTuple__MuQpYKhupAt9a7EFKGkr9ayg _;
								T43_ = (NIM_BOOL)0;
								T43_ = S_ISLNK(s.st_mode);
								if (!T43_) goto LA44_;
								isSpecialX60gensym20_ = (NIM_BOOL)0;
								_ = getSymlinkFileKind__stdZprivateZoscommon_26(path_2);
								if (NIM_UNLIKELY(*nimErr_)) goto LA28_;
								k = _.Field0;
								isSpecialX60gensym20_ = _.Field1;
								{
									NIM_BOOL T48_;
									T48_ = (NIM_BOOL)0;
									T48_ = NIM_FALSE;
									if (!(T48_)) goto LA49_;
									T48_ = isSpecialX60gensym20_;
									LA49_: ;
									if (!T48_) goto LA50_;
									eqdestroy___stdZprivateZospaths50_292((&colontmpD_));
									eqdestroy___stdZassertions_13((&noSource));
									eqdestroy___stdZassertions_13((&path_2));
									eqdestroy___stdZassertions_13((&y));
									goto LA16;
								}
								LA50_: ;
							}
							goto LA33_;
							LA44_: ;
							{
								NIM_BOOL T53_;
								NIM_BOOL T55_;
								T53_ = (NIM_BOOL)0;
								T53_ = NIM_FALSE;
								if (!(T53_)) goto LA54_;
								T55_ = (NIM_BOOL)0;
								T55_ = S_ISREG(s.st_mode);
								T53_ = !(T55_);
								LA54_: ;
								if (!T53_) goto LA56_;
								eqdestroy___stdZprivateZospaths50_292((&colontmpD_));
								eqdestroy___stdZassertions_13((&noSource));
								eqdestroy___stdZassertions_13((&path_2));
								eqdestroy___stdZassertions_13((&y));
								goto LA16;
							}
							goto LA33_;
							LA56_: ;
							LA33_: ;
							kind = k;
							eqsink___stdZassertions_19((&path), y);
							y.len = 0; y.p = NIM_NIL;
							nossplitPath(path, (&colontmpD_));
							if (NIM_UNLIKELY(*nimErr_)) goto LA28_;
							eqcopy___stdZassertions_16((&noSource), colontmpD_.Field1);
							{
								NimStringV2 colontmpD__2;
								if (!(kind == ((tyEnum_PathComponent__x9aIl9aBWoeZzD6AxCnUUcPQ)2))) goto LA60_;
								colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
								colontmpD__2 = slash___stdZprivateZospaths50_91(dest, noSource);
								if (NIM_UNLIKELY(*nimErr_)) goto LA62_;
								noscopyDir(path, colontmpD__2);
								if (NIM_UNLIKELY(*nimErr_)) goto LA62_;
								{
									LA62_:;
								}
								{
									eqdestroy___stdZassertions_13((&colontmpD__2));
								}
								if (NIM_UNLIKELY(*nimErr_)) goto LA28_;
							}
							goto LA58_;
							LA60_: ;
							{
								NimStringV2 colontmpD__3;
								colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
								colontmpD__3 = slash___stdZprivateZospaths50_91(dest, noSource);
								if (NIM_UNLIKELY(*nimErr_)) goto LA66_;
								noscopyFile(path, colontmpD__3, 1);
								if (NIM_UNLIKELY(*nimErr_)) goto LA66_;
								{
									LA66_:;
								}
								{
									eqdestroy___stdZassertions_13((&colontmpD__3));
								}
								if (NIM_UNLIKELY(*nimErr_)) goto LA28_;
							}
							LA58_: ;
							{
								LA28_:;
							}
							{
								eqdestroy___stdZprivateZospaths50_292((&colontmpD_));
								eqdestroy___stdZassertions_13((&noSource));
								eqdestroy___stdZassertions_13((&path_2));
							}
							if (NIM_UNLIKELY(*nimErr_)) goto LA17_;
						}
						LA26_: ;
						{
							LA17_:;
						}
						{
							eqdestroy___stdZassertions_13((&y));
						}
						if (NIM_UNLIKELY(*nimErr_)) goto LA13_;
					} LA16: ;
				}
			} LA14: ;
			{
				LA13_:;
			}
			{
				int T75_;
				T75_ = (int)0;
				T75_ = closedir(d);
				(void)(T75_);
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA2_;
		}
		LA3_: ;
		{
			LA2_:;
		}
		{
			eqdestroy___stdZassertions_13((&path));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, moveDir__stdZprivateZosdirs_494)(NimStringV2 source, NimStringV2 dest) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = tryMoveFSObject__stdZprivateZoscommon_71(source, dest, NIM_TRUE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T3_)) goto LA4_;
		noscopyDir(source, dest);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nosremoveDir(source, NIM_FALSE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
