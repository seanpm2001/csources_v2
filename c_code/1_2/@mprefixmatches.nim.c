/* Generated by Nim Compiler v1.7.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef NU8 tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__xyuxIF9aCxFKzZet1F6nhpA_2 = { 4 | NIM_STRLIT_FLAG, "None" };
static const NimStringV2 TM__xyuxIF9aCxFKzZet1F6nhpA_3 = {4, (NimStrPayload*)&TM__xyuxIF9aCxFKzZet1F6nhpA_2};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__xyuxIF9aCxFKzZet1F6nhpA_4 = { 6 | NIM_STRLIT_FLAG, "Abbrev" };
static const NimStringV2 TM__xyuxIF9aCxFKzZet1F6nhpA_5 = {6, (NimStrPayload*)&TM__xyuxIF9aCxFKzZet1F6nhpA_4};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__xyuxIF9aCxFKzZet1F6nhpA_6 = { 6 | NIM_STRLIT_FLAG, "Substr" };
static const NimStringV2 TM__xyuxIF9aCxFKzZet1F6nhpA_7 = {6, (NimStrPayload*)&TM__xyuxIF9aCxFKzZet1F6nhpA_6};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__xyuxIF9aCxFKzZet1F6nhpA_8 = { 6 | NIM_STRLIT_FLAG, "Prefix" };
static const NimStringV2 TM__xyuxIF9aCxFKzZet1F6nhpA_9 = {6, (NimStrPayload*)&TM__xyuxIF9aCxFKzZet1F6nhpA_8};
extern NIM_BOOL nimInErrorMode__system_3980;
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w, prefixMatch__prefixmatches_10)(NimStringV2 p, NimStringV2 s) {
	tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w result;
	NI i;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w)0;
	{
		if (!(s.len < p.len)) goto LA3_;
		result = ((tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w)0);
		goto BeforeRet_;
	}
	LA3_: ;
	i = ((NI)0);
	{
		while (1) {
			if (!(i < s.len)) goto LA6			;
			{
				if (!((NU8)(s.p->data[i]) == (NU8)(95))) goto LA9_;
				i += ((NI)1);
			}
			LA9_: ;
			{
				NIM_BOOL T13_;
				NIM_CHAR T15_;
				NIM_CHAR T16_;
				NI ii;
				NI jj;
				T13_ = (NIM_BOOL)0;
				T13_ = (i < s.len);
				if (!(T13_)) goto LA14_;
				T15_ = (NIM_CHAR)0;
				T15_ = nsuToLowerAsciiChar(s.p->data[i]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				T16_ = (NIM_CHAR)0;
				T16_ = nsuToLowerAsciiChar(p.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				T13_ = ((NU8)(T15_) == (NU8)(T16_));
				LA14_: ;
				if (!T13_) goto LA17_;
				ii = (NI)(i + ((NI)1));
				jj = ((NI)1);
				{
					while (1) {
						NIM_BOOL T21_;
						T21_ = (NIM_BOOL)0;
						T21_ = (ii < s.len);
						if (!(T21_)) goto LA22_;
						T21_ = (jj < p.len);
						LA22_: ;
						if (!T21_) goto LA20						;
						{
							if (!((NU8)(p.p->data[jj]) == (NU8)(95))) goto LA25_;
							jj += ((NI)1);
						}
						LA25_: ;
						{
							if (!((NU8)(s.p->data[ii]) == (NU8)(95))) goto LA29_;
							ii += ((NI)1);
						}
						LA29_: ;
						{
							NIM_CHAR T33_;
							NIM_CHAR T34_;
							T33_ = (NIM_CHAR)0;
							T33_ = nsuToLowerAsciiChar(s.p->data[ii]);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							T34_ = (NIM_CHAR)0;
							T34_ = nsuToLowerAsciiChar(p.p->data[jj]);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							if (!!(((NU8)(T33_) == (NU8)(T34_)))) goto LA35_;
							goto LA19;
						}
						LA35_: ;
						ii += ((NI)1);
						jj += ((NI)1);
					} LA20: ;
				} LA19: ;
				{
					if (!(p.len <= jj)) goto LA39_;
					{
						if (!(i == ((NI)0))) goto LA43_;
						result = ((tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w)3);
						goto BeforeRet_;
					}
					goto LA41_;
					LA43_: ;
					{
						result = ((tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w)2);
						goto BeforeRet_;
					}
					LA41_: ;
				}
				LA39_: ;
			}
			LA17_: ;
			i += ((NI)1);
		} LA6: ;
	}
	{
		NIM_CHAR T48_;
		NIM_CHAR T49_;
		NI j;
		T48_ = (NIM_CHAR)0;
		T48_ = nsuToLowerAsciiChar(s.p->data[((NI)0)]);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T49_ = (NIM_CHAR)0;
		T49_ = nsuToLowerAsciiChar(p.p->data[((NI)0)]);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!((NU8)(T48_) == (NU8)(T49_))) goto LA50_;
		i = ((NI)1);
		j = ((NI)1);
		{
			while (1) {
				if (!(i < s.len)) goto LA53				;
				{
					NIM_BOOL T56_;
					T56_ = (NIM_BOOL)0;
					T56_ = (i < (NI)(s.len - ((NI)1)));
					if (!(T56_)) goto LA57_;
					T56_ = ((NU8)(s.p->data[i]) == (NU8)(95));
					LA57_: ;
					if (!T56_) goto LA58_;
					{
						NIM_BOOL T62_;
						NIM_CHAR T64_;
						NIM_CHAR T65_;
						T62_ = (NIM_BOOL)0;
						T62_ = (j < p.len);
						if (!(T62_)) goto LA63_;
						T64_ = (NIM_CHAR)0;
						T64_ = nsuToLowerAsciiChar(p.p->data[j]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						T65_ = (NIM_CHAR)0;
						T65_ = nsuToLowerAsciiChar(s.p->data[(NI)(i + ((NI)1))]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						T62_ = ((NU8)(T64_) == (NU8)(T65_));
						LA63_: ;
						if (!T62_) goto LA66_;
						j += ((NI)1);
					}
					goto LA60_;
					LA66_: ;
					{
						result = ((tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w)0);
						goto BeforeRet_;
					}
					LA60_: ;
				}
				LA58_: ;
				{
					NIM_BOOL T71_;
					NIM_BOOL T72_;
					T71_ = (NIM_BOOL)0;
					T72_ = (NIM_BOOL)0;
					T72_ = (i < s.len);
					if (!(T72_)) goto LA73_;
					T72_ = (((NU8)(s.p->data[i])) >= ((NU8)(65)) && ((NU8)(s.p->data[i])) <= ((NU8)(90)));
					LA73_: ;
					T71_ = T72_;
					if (!(T71_)) goto LA74_;
					T71_ = !((((NU8)(s.p->data[(NI)(i - ((NI)1))])) >= ((NU8)(65)) && ((NU8)(s.p->data[(NI)(i - ((NI)1))])) <= ((NU8)(90))));
					LA74_: ;
					if (!T71_) goto LA75_;
					{
						NIM_BOOL T79_;
						NIM_CHAR T81_;
						NIM_CHAR T82_;
						T79_ = (NIM_BOOL)0;
						T79_ = (j < p.len);
						if (!(T79_)) goto LA80_;
						T81_ = (NIM_CHAR)0;
						T81_ = nsuToLowerAsciiChar(p.p->data[j]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						T82_ = (NIM_CHAR)0;
						T82_ = nsuToLowerAsciiChar(s.p->data[i]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						T79_ = ((NU8)(T81_) == (NU8)(T82_));
						LA80_: ;
						if (!T79_) goto LA83_;
						j += ((NI)1);
					}
					goto LA77_;
					LA83_: ;
					{
						result = ((tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w)0);
						goto BeforeRet_;
					}
					LA77_: ;
				}
				LA75_: ;
				i += ((NI)1);
			} LA53: ;
		}
		{
			if (!(p.len <= j)) goto LA88_;
			result = ((tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w)1);
			goto BeforeRet_;
		}
		goto LA86_;
		LA88_: ;
		{
			result = ((tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w)0);
			goto BeforeRet_;
		}
		LA86_: ;
	}
	LA50_: ;
	result = ((tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w)0);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___prefixmatches_7)(tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w e) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	switch (e) {
	case ((tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w)0):
	{
		result = TM__xyuxIF9aCxFKzZet1F6nhpA_3;
	}
	break;
	case ((tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w)1):
	{
		result = TM__xyuxIF9aCxFKzZet1F6nhpA_5;
	}
	break;
	case ((tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w)2):
	{
		result = TM__xyuxIF9aCxFKzZet1F6nhpA_7;
	}
	break;
	case ((tyEnum_PrefixMatch__pLG39bnDOrZac0FzWXgLG0w)3):
	{
		result = TM__xyuxIF9aCxFKzZet1F6nhpA_9;
	}
	break;
	}
	return result;
}
