/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 32
#define NIM_EmulateOverflowChecks

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
typedef struct tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg;
typedef struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content;
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
struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA {
  Exception Sup;
};
struct tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg {
  tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA Sup;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  NI len; tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content* p;
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

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NimStringV2, cstrToNimstr)(NCSTRING str);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size, NI alignment);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__system_1719)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___systemZdollars_3)(NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void*, newSeqPayload)(NI cap, NI elemSize, NI elemAlign);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, add__stdZenumutils_69)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x, NimStringV2 value);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest, NimStringV2 src);
extern TNimTypeV2 NTIv2__W7zFbor8bJ1meM16OWPdYg_;
static const struct {
  NI cap; NIM_CHAR data[43+1];
} TM__MZPGKsURfItHSi3RvnOT8Q_2 = { 43 | NIM_STRLIT_FLAG, "index out of bounds, the container is empty" };
static const NimStringV2 TM__MZPGKsURfItHSi3RvnOT8Q_3 = {43, (NimStrPayload*)&TM__MZPGKsURfItHSi3RvnOT8Q_2};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__MZPGKsURfItHSi3RvnOT8Q_4 = { 6 | NIM_STRLIT_FLAG, "index " };
static const NimStringV2 TM__MZPGKsURfItHSi3RvnOT8Q_5 = {6, (NimStrPayload*)&TM__MZPGKsURfItHSi3RvnOT8Q_4};
static const struct {
  NI cap; NIM_CHAR data[13+1];
} TM__MZPGKsURfItHSi3RvnOT8Q_6 = { 13 | NIM_STRLIT_FLAG, " not in 0 .. " };
static const NimStringV2 TM__MZPGKsURfItHSi3RvnOT8Q_7 = {13, (NimStrPayload*)&TM__MZPGKsURfItHSi3RvnOT8Q_6};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__MZPGKsURfItHSi3RvnOT8Q_8 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__MZPGKsURfItHSi3RvnOT8Q_9 = {0, (NimStrPayload*)&TM__MZPGKsURfItHSi3RvnOT8Q_8};
extern int cmdCount;
extern NCSTRING* cmdLine;
extern NIM_BOOL nimInErrorMode__system_3994;
N_LIB_PRIVATE N_NIMCALL(NI, paramCount__stdZcmdline_59)(void) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NI32)(cmdCount - ((NI32)1))));
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
	result = (&nimInErrorMode__system_3994);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, paramStr__stdZcmdline_53)(NI i) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI32) (i)) < cmdCount);
		if (!(T3_)) goto LA4_;
		T3_ = (((NI)0) <= i);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = cstrToNimstr(cmdLine[i]);
	}
	goto LA1_;
	LA5_: ;
	{
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg* T9_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		T9_ = NIM_NIL;
		T9_ = (tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg*) nimNewObj(sizeof(tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg), NIM_ALIGNOF(tyObject_IndexDefect__W7zFbor8bJ1meM16OWPdYg));
		(*T9_).Sup.Sup.Sup.m_type = (&NTIv2__W7zFbor8bJ1meM16OWPdYg_);
		(*T9_).Sup.Sup.name = "IndexDefect";
		{
			NimStringV2 blitTmp;
			if (!((NI32)(cmdCount - ((NI32)1)) < ((NI32)0))) goto LA12_;
			colontmpD_ = TM__MZPGKsURfItHSi3RvnOT8Q_3;
			blitTmp = colontmpD_;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			(*T9_).Sup.Sup.message = blitTmp;
		}
		goto LA10_;
		LA12_: ;
		{
			NimStringV2 colontmpD__3;
			NimStringV2 colontmpD__4;
			NimStringV2 T15_;
			NimStringV2 blitTmp_2;
			colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
			colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
			T15_.len = 0; T15_.p = NIM_NIL;
			colontmpD__3 = dollar___systemZdollars_3(i);
			if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
			colontmpD__4 = dollar___systemZdollars_3(((NI) ((NI32)(cmdCount - ((NI32)1)))));
			if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
			T15_ = rawNewString(colontmpD__3.len + colontmpD__4.len + 19);
appendString((&T15_), TM__MZPGKsURfItHSi3RvnOT8Q_5);
appendString((&T15_), colontmpD__3);
appendString((&T15_), TM__MZPGKsURfItHSi3RvnOT8Q_7);
appendString((&T15_), colontmpD__4);
			colontmpD__2 = T15_;
			eqdestroy___stdZassertions_13((&colontmpD__4));
			eqdestroy___stdZassertions_13((&colontmpD__3));
			blitTmp_2 = colontmpD__2;
			colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
			(*T9_).Sup.Sup.message = blitTmp_2;
		}
		LA10_: ;
		(*T9_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T9_, "IndexDefect", "paramStr", "cmdline.nim", 275);
goto LA8_;
		{
			LA8_:;
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
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI)1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI)1))] = 0;
	(*s).len += ((NI)1);
}
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ, nosparseCmdLine)(NimStringV2 c) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ result;
	NimStringV2 a;
	NI i;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	a.len = 0; a.p = NIM_NIL;
	result.len = 0; result.p = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content*) newSeqPayload(0, sizeof(NimStringV2), NIM_ALIGNOF(NimStringV2));
	i = ((NI)0);
	a = TM__MZPGKsURfItHSi3RvnOT8Q_9;
	{
		while (1) {
			NimStringV2 colontmpD_;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			setLengthStrV2((&a), ((NI)0));
			{
				while (1) {
					NIM_BOOL T6_;
					T6_ = (NIM_BOOL)0;
					T6_ = (i < c.len);
					if (!(T6_)) goto LA7_;
					T6_ = (((NU8)(c.p->data[i])) == ((NU8)(32)) || ((NU8)(c.p->data[i])) == ((NU8)(9)) || ((NU8)(c.p->data[i])) == ((NU8)(10)) || ((NU8)(c.p->data[i])) == ((NU8)(13)));
					LA7_: ;
					if (!T6_) goto LA5					;
					i += ((NI)1);
				} LA5: ;
			}
			{
				if (!(c.len <= i)) goto LA10_;
				goto LA2;
			}
			LA10_: ;
			switch (((NU8)(c.p->data[i]))) {
			case 39:
			case 34:
			{
				NIM_CHAR delim;
				delim = c.p->data[i];
				i += ((NI)1);
				{
					while (1) {
						NIM_BOOL T15_;
						T15_ = (NIM_BOOL)0;
						T15_ = (i < c.len);
						if (!(T15_)) goto LA16_;
						T15_ = !(((NU8)(c.p->data[i]) == (NU8)(delim)));
						LA16_: ;
						if (!T15_) goto LA14						;
						nimAddCharV1((&a), c.p->data[i]);
						i += ((NI)1);
					} LA14: ;
				}
				{
					if (!(i < c.len)) goto LA19_;
					i += ((NI)1);
				}
				LA19_: ;
			}
			break;
			default:
			{
				{
					while (1) {
						NIM_BOOL T24_;
						T24_ = (NIM_BOOL)0;
						T24_ = (i < c.len);
						if (!(T24_)) goto LA25_;
						T24_ = ((NU8)(32) < (NU8)(c.p->data[i]));
						LA25_: ;
						if (!T24_) goto LA23						;
						nimAddCharV1((&a), c.p->data[i]);
						i += ((NI)1);
					} LA23: ;
				}
			}
			break;
			}
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			eqcopy___stdZassertions_16((&colontmpD_), a);
			add__stdZenumutils_69((&result), colontmpD_);
		}
	} LA2: ;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&a));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
