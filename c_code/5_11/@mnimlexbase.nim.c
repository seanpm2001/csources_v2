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
typedef struct tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw;
typedef struct tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
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
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw {
  RootObj Sup;
NI bufpos;
NCSTRING buf;
NimStringV2 bufStorage;
NI bufLen;
tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* stream;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
};
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest, NimStringV2 src);
N_NIMCALL(NimStringV2, mnewString)(NI len);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___llstream_71)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw** dest, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* src, NIM_BOOL cyclic);
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__nimlexbase_46)(tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw* L);
static N_INLINE(void, moveMem__system_1723)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, llStreamRead__llstream_238)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s, void* buf, NI bufLen);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, skipUTF8BOM__nimlexbase_113)(tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw* L);
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__nimlexbase_78)(tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose__llstream_164)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s);
extern NIM_BOOL nimInErrorMode__system_3994;
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
static N_INLINE(void, moveMem__system_1723)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memmove(dest, source, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3994);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__nimlexbase_46)(tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw* L) {
	NI charsRead;
	NI toCopy;
	NI s;
	NI oldBufLen;
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* T6_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	charsRead = (NI)0;
	toCopy = (NI)0;
	s = (NI)0;
	oldBufLen = (NI)0;
	toCopy = (NI)((NI)((*L).bufLen - (*L).sentinel) - ((NI)1));
	{
		void* T5_;
		if (!(((NI)0) < toCopy)) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*L).buf[((NI)0)])));
		moveMem__system_1723(T5_, ((void*) ((&(*L).buf[(NI)((*L).sentinel + ((NI)1))]))), ((NI) (toCopy)));
	}
	LA3_: ;
	T6_ = NIM_NIL;
	T6_ = (*L).stream;
	charsRead = llStreamRead__llstream_238(T6_, ((void*) ((&(*L).buf[toCopy]))), (NI)((*L).sentinel + ((NI)1)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	s = (NI)(toCopy + charsRead);
	{
		if (!(charsRead < (NI)((*L).sentinel + ((NI)1)))) goto LA9_;
		(*L).buf[s] = 0;
		(*L).sentinel = s;
	}
	goto LA7_;
	LA9_: ;
	{
		s -= ((NI)1);
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL T16_;
						T16_ = (NIM_BOOL)0;
						T16_ = (((NI)0) <= s);
						if (!(T16_)) goto LA17_;
						T16_ = !((((NU8)((*L).buf[s])) == ((NU8)(13)) || ((NU8)((*L).buf[s])) == ((NU8)(10))));
						LA17_: ;
						if (!T16_) goto LA15						;
						s -= ((NI)1);
					} LA15: ;
				}
				{
					if (!(((NI)0) <= s)) goto LA20_;
					(*L).sentinel = s;
					goto LA12;
				}
				goto LA18_;
				LA20_: ;
				{
					tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* T23_;
					oldBufLen = (*L).bufLen;
					(*L).bufLen = (NI)((*L).bufLen * ((NI)2));
					setLengthStrV2((&(*L).bufStorage), ((NI) ((*L).bufLen)));
					(*L).buf = nimToCStringConv((*L).bufStorage);
					T23_ = NIM_NIL;
					T23_ = (*L).stream;
					charsRead = llStreamRead__llstream_238(T23_, ((void*) ((&(*L).buf[oldBufLen]))), oldBufLen);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					{
						if (!(charsRead < oldBufLen)) goto LA26_;
						(*L).buf[(NI)(oldBufLen + charsRead)] = 0;
						(*L).sentinel = (NI)(oldBufLen + charsRead);
						goto LA12;
					}
					LA26_: ;
					s = (NI)((*L).bufLen - ((NI)1));
				}
				LA18_: ;
			}
		} LA12: ;
	}
	LA7_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, skipUTF8BOM__nimlexbase_113)(tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw* L) {
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = ((NU8)((*L).buf[((NI)0)]) == (NU8)(239));
		if (!(T4_)) goto LA5_;
		T4_ = ((NU8)((*L).buf[((NI)1)]) == (NU8)(187));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		T3_ = ((NU8)((*L).buf[((NI)2)]) == (NU8)(191));
		LA6_: ;
		if (!T3_) goto LA7_;
		(*L).bufpos += ((NI)3);
		(*L).lineStart += ((NI)3);
	}
	LA7_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, openBaseLexer__nimlexbase_26)(tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw* L, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* inputstream, NI bufLen) {
	NimStringV2 T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	(*L).bufpos = ((NI)0);
	(*L).offsetBase = ((NI)0);
	T1_.len = 0; T1_.p = NIM_NIL;
	T1_ = mnewString(((NI) (bufLen)));
	eqsink___stdZassertions_19((&(*L).bufStorage), T1_);
	(*L).buf = nimToCStringConv((*L).bufStorage);
	(*L).bufLen = bufLen;
	(*L).sentinel = (NI)(bufLen - ((NI)1));
	(*L).lineStart = ((NI)0);
	(*L).lineNumber = ((NI)1);
	eqcopy___llstream_71(&(*L).stream, inputstream, NIM_TRUE);
	fillBuffer__nimlexbase_46(L);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	skipUTF8BOM__nimlexbase_113(L);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, getColNumber__nimlexbase_35)(tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw* L, NI pos) {
	NI result;
	result = (NI)0;
	result = ((NI)(pos - (*L).lineStart) > 0? ((NI)(pos - (*L).lineStart)) : -((NI)(pos - (*L).lineStart)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__nimlexbase_78)(tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw* L, NI pos) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if (!(pos < (*L).sentinel)) goto LA3_;
		result = (NI)(pos + ((NI)1));
	}
	goto LA1_;
	LA3_: ;
	{
		fillBuffer__nimlexbase_46(L);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*L).offsetBase += (NI)(pos + ((NI)1));
		(*L).bufpos = ((NI)0);
		result = ((NI)0);
	}
	LA1_: ;
	(*L).lineStart = result;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleCR__nimlexbase_38)(tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw* L, NI pos) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	(*L).lineNumber += ((NI)1);
	result = fillBaseLexer__nimlexbase_78(L, pos);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!((NU8)((*L).buf[result]) == (NU8)(10))) goto LA3_;
		result = fillBaseLexer__nimlexbase_78(L, result);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleLF__nimlexbase_41)(tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw* L, NI pos) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	(*L).lineNumber += ((NI)1);
	result = fillBaseLexer__nimlexbase_78(L, pos);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, closeBaseLexer__nimlexbase_30)(tyObject_TBaseLexer__mLz9bnmJDkH9bqmvnqNS49apw* L) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	llStreamClose__llstream_164((*L).stream);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
