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
typedef struct tyObject_GUID__J2WQBMgezjwf6Trblkflgg tyObject_GUID__J2WQBMgezjwf6Trblkflgg;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA;
typedef struct tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw;
typedef struct tyObject_STARTUPINFO__WGlpKvY9cdd69bAwMQMNLYoQ tyObject_STARTUPINFO__WGlpKvY9cdd69bAwMQMNLYoQ;
typedef struct tyObject_PROCESS_INFORMATION__rpgAdaffN9b79bo2kEQiFsMg tyObject_PROCESS_INFORMATION__rpgAdaffN9b79bo2kEQiFsMg;
typedef struct tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw;
typedef NI8 tyArray__9cWG514ToTTjfTPLhXXV0IQ[8];
struct tyObject_GUID__J2WQBMgezjwf6Trblkflgg {
NI32 D1;
NI16 D2;
NI16 D3;
tyArray__9cWG514ToTTjfTPLhXXV0IQ D4;
};
typedef N_STDCALL_PTR(NCSTRING, tyProc__7LMcD5Rujqk7H2JqdJtoyA) (int family, void* paddr, NCSTRING pStringBuffer, NI32 stringBufSize);
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef N_STDCALL_PTR(NI16*, tyProc__9bXHKfH08cKXphxNi5GYejg) (void);
typedef N_STDCALL_PTR(NI32, tyProc__aMOow6Lp4fo8dW2ko9aU3pg) (NI32 nBufferLength, NI16* lpBuffer);
typedef N_STDCALL_PTR(NI32, tyProc__aO673xGTLLxou7P7GxoCXA) (NI32 dwFlags, void* lpSource, NI32 dwMessageId, NI32 dwLanguageId, void* lpBuffer, NI32 nSize, void* arguments);
typedef N_STDCALL_PTR(void, tyProc__im9buRnIvptJfzdASYMEbBA) (void* p);
typedef N_STDCALL_PTR(NI32, tyProc__9bXer9a4ps9aSGctILcxWReVw) (void);
typedef N_STDCALL_PTR(NI, tyProc__3DGKXZ0P9ck0FlUFCwnVxaQ) (NI16* lpFileName, tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* lpFindFileData);
typedef N_STDCALL_PTR(void, tyProc__ofoySXaAAlxxs9bQS9a1etlg) (NI hFindFile);
typedef N_STDCALL_PTR(NI32, tyProc__jwEWAkul5J6p6K0UfXa1tw) (NI hFindFile, tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* lpFindFileData);
typedef N_STDCALL_PTR(NI, tyProc__zP2zGemcuVRvOUE82f9a0Pw) (NI32 nStdHandle);
typedef N_STDCALL_PTR(NI32, tyProc__G0MNqLrkAnRVz4cDlgVcRg) (NI handle, NI16* buf, NI32 size);
typedef N_STDCALL_PTR(NI32, tyProc__5sqIMptsyAfPn3c9cPj4DOA) (NI16* lpFileName);
typedef N_STDCALL_PTR(NI32, tyProc__Rzv0SS9bu3vYSxhvPQEKMBQ) (NI16* lpFileName, NI32 nBufferLength, NI16* lpBuffer, NI16** lpFilePart);
typedef N_STDCALL_PTR(NI32, tyProc__uBkkHOkdpyfFusi9cbg9cHww) (NI16* pathName, void* security);
typedef N_STDCALL_PTR(NI32, tyProc__aOhJuXP2rSFzW5eC9bSzvwg) (NI16* lpFileName, NI32 dwFileAttributes);
typedef N_STDCALL_PTR(NI32, tyProc__C5kM33gEhlSKPXwfDNHofQ) (NI* hReadPipe, NI* hWritePipe, tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw* lpPipeAttributes, NI32 nSize);
typedef N_STDCALL_PTR(NI32, tyProc__mBVOPXmpGfUrrbA9a5K9cMbQ) (NI hObject, NI32 dwMask, NI32 dwFlags);
typedef N_STDCALL_PTR(NI, tyProc__IDUPJnDaqrBXTB4aj79bKLg) (NI16* lpName, NI32 dwOpenMode, NI32 dwPipeMode, NI32 nMaxInstances, NI32 nOutBufferSize, NI32 nInBufferSize, NI32 nDefaultTimeOut, tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw* lpSecurityAttributes);
typedef N_STDCALL_PTR(NI, tyProc__Q9box9as0S1hHKH9cSO3MGDDA) (NI16* lpFileName, NI32 dwDesiredAccess, NI32 dwShareMode, void* lpSecurityAttributes, NI32 dwCreationDisposition, NI32 dwFlagsAndAttributes, NI hTemplateFile);
typedef N_STDCALL_PTR(NI, tyProc__uryidYWkntM7ddjZSyxvyQ) (void);
typedef N_STDCALL_PTR(NI32, tyProc__oew1DfaGl5XhHmnBK0HYXQ) (NI hSourceProcessHandle, NI hSourceHandle, NI hTargetProcessHandle, NI* lpTargetHandle, NI32 dwDesiredAccess, NI32 bInheritHandle, NI32 dwOptions);
typedef N_STDCALL_PTR(NI32, tyProc__P13srMBg9b3d3yEV9aW4NCoA) (NI hObject);
typedef N_STDCALL_PTR(NI32, tyProc__Ij9aBl82y9bf8kihDdsUvIEg) (NI16* lpApplicationName, NI16* lpCommandLine, tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw* lpProcessAttributes, tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw* lpThreadAttributes, NI32 bInheritHandles, NI32 dwCreationFlags, NI16* lpEnvironment, NI16* lpCurrentDirectory, tyObject_STARTUPINFO__WGlpKvY9cdd69bAwMQMNLYoQ* lpStartupInfo, tyObject_PROCESS_INFORMATION__rpgAdaffN9b79bo2kEQiFsMg* lpProcessInformation);
typedef N_STDCALL_PTR(NI32, tyProc__9ajZYMGL5GqiRFqiCC367oA) (NI hFile, void* buffer, NI32 nNumberOfBytesToRead, NI32* lpNumberOfBytesRead, void* lpOverlapped);
typedef N_STDCALL_PTR(NI32, tyProc__FprzxJFfqQdWyyGxiUsmeQ) (NI hHandle, NI32 dwMilliseconds);
typedef N_STDCALL_PTR(NI32, tyProc__7S2vVNF4dlY59blFohNWnHg) (NI hProcess, NI uExitCode);
typedef N_STDCALL_PTR(NI32, tyProc__KxeGXN001TReCr89ca9c5bng) (NI hProcess, NI32* lpExitCode);
typedef N_STDCALL_PTR(void, tyProc__9bc9cLDdaqTE6n5J78feKRYg) (tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw* lpSystemTimeAsFileTime);
struct tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw {
NI32 dwLowDateTime;
NI32 dwHighDateTime;
};
typedef N_STDCALL_PTR(NI32, tyProc__29cQilB9cqahn5yPQZH66TkA) (NI16* lpExistingFileName, NI16* lpNewFileName, NI32 flags);
typedef N_STDCALL_PTR(NI32, tyProc__Dx0emMHXXGxkRnYGUaFLbg) (NI32 nCount, NI* lpHandles, NI32 bWaitAll, NI32 dwMilliseconds);
typedef N_STDCALL_PTR(NI, tyProc__UI8KCxlXQHWT6J0VRUWTmA) (NI hwnd, NI16* lpOperation, NI16* lpFile, NI16* lpParameters, NI16* lpDirectory, NI32 nShowCmd);
N_LIB_PRIVATE N_NIMCALL(void*, loadLib__pureZdynlib_3)(NimStringV2 path, NIM_BOOL globalSymbols);
N_LIB_PRIVATE N_NIMCALL(void*, symAddr__pureZdynlib_49)(void* lib, NCSTRING name);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringV2 path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__k6kyf4Co79a84IkK9blFuQVA_2 = { 10 | NIM_STRLIT_FLAG, "Ws2_32.dll" };
static const NimStringV2 TM__k6kyf4Co79a84IkK9blFuQVA_3 = {10, (NimStrPayload*)&TM__k6kyf4Co79a84IkK9blFuQVA_2};
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__k6kyf4Co79a84IkK9blFuQVA_6 = { 8 | NIM_STRLIT_FLAG, "kernel32" };
static const NimStringV2 TM__k6kyf4Co79a84IkK9blFuQVA_7 = {8, (NimStrPayload*)&TM__k6kyf4Co79a84IkK9blFuQVA_6};
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__k6kyf4Co79a84IkK9blFuQVA_8 = { 8 | NIM_STRLIT_FLAG, "kernel32" };
static const NimStringV2 TM__k6kyf4Co79a84IkK9blFuQVA_9 = {8, (NimStrPayload*)&TM__k6kyf4Co79a84IkK9blFuQVA_8};
static const struct {
  NI cap; NIM_CHAR data[11+1];
} TM__k6kyf4Co79a84IkK9blFuQVA_84 = { 11 | NIM_STRLIT_FLAG, "shell32.dll" };
static const NimStringV2 TM__k6kyf4Co79a84IkK9blFuQVA_85 = {11, (NimStrPayload*)&TM__k6kyf4Co79a84IkK9blFuQVA_84};
static const struct {
  NI cap; NIM_CHAR data[11+1];
} TM__k6kyf4Co79a84IkK9blFuQVA_86 = { 11 | NIM_STRLIT_FLAG, "shell32.dll" };
static const NimStringV2 TM__k6kyf4Co79a84IkK9blFuQVA_87 = {11, (NimStrPayload*)&TM__k6kyf4Co79a84IkK9blFuQVA_86};
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_CONNECTEX__windowsZwinlean_718 = {((NI32)631375801), ((NI16)-8717), ((NI16)18016), {((NI8)-114),
((NI8)-23),
((NI8)118),
((NI8)-27),
((NI8)-116),
((NI8)116),
((NI8)6),
((NI8)62)}
}
;
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_ACCEPTEX__windowsZwinlean_719 = {((NI32)-1254720015), ((NI16)-13396), ((NI16)4559), {((NI8)-107),
((NI8)-54),
((NI8)0),
((NI8)-128),
((NI8)95),
((NI8)72),
((NI8)-95),
((NI8)-110)}
}
;
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_GETACCEPTEXSOCKADDRS__windowsZwinlean_720 = {((NI32)-1254720014), ((NI16)-13396), ((NI16)4559), {((NI8)-107),
((NI8)-54),
((NI8)0),
((NI8)-128),
((NI8)95),
((NI8)72),
((NI8)-95),
((NI8)-110)}
}
;
N_LIB_PRIVATE tyProc__7LMcD5Rujqk7H2JqdJtoyA inet_ntop_real__windowsZwinlean_815 = NIM_NIL;
N_LIB_PRIVATE void* ws2__windowsZwinlean_816;
extern NIM_BOOL nimInErrorMode__system_3980;
static void* TM__k6kyf4Co79a84IkK9blFuQVA_4;
tyProc__9bXHKfH08cKXphxNi5GYejg Dl_1442840860_;
tyProc__aMOow6Lp4fo8dW2ko9aU3pg Dl_1442840761_;
tyProc__aO673xGTLLxou7P7GxoCXA Dl_1442840751_;
tyProc__im9buRnIvptJfzdASYMEbBA Dl_1442840759_;
tyProc__9bXer9a4ps9aSGctILcxWReVw Dl_1442840748_;
tyProc__3DGKXZ0P9ck0FlUFCwnVxaQ Dl_1442840828_;
tyProc__ofoySXaAAlxxs9bQS9a1etlg Dl_1442840834_;
tyProc__jwEWAkul5J6p6K0UfXa1tw Dl_1442840831_;
tyProc__zP2zGemcuVRvOUE82f9a0Pw Dl_1442840741_;
tyProc__G0MNqLrkAnRVz4cDlgVcRg Dl_1442840774_;
tyProc__5sqIMptsyAfPn3c9cPj4DOA Dl_1442840841_;
tyProc__Rzv0SS9bu3vYSxhvPQEKMBQ Dl_1442840836_;
tyProc__uBkkHOkdpyfFusi9cbg9cHww Dl_1442840766_;
tyProc__5sqIMptsyAfPn3c9cPj4DOA Dl_1442841188_;
tyProc__aOhJuXP2rSFzW5eC9bSzvwg Dl_1442840843_;
tyProc__C5kM33gEhlSKPXwfDNHofQ Dl_1442840696_;
tyProc__mBVOPXmpGfUrrbA9a5K9cMbQ Dl_1442841175_;
tyProc__IDUPJnDaqrBXTB4aj79bKLg Dl_1442840701_;
tyProc__Q9box9as0S1hHKH9cSO3MGDDA Dl_1442841180_;
tyProc__uryidYWkntM7ddjZSyxvyQ Dl_1442841179_;
tyProc__oew1DfaGl5XhHmnBK0HYXQ Dl_1442841164_;
tyProc__P13srMBg9b3d3yEV9aW4NCoA Dl_1442840682_;
tyProc__Ij9aBl82y9bf8kihDdsUvIEg Dl_1442840717_;
tyProc__9ajZYMGL5GqiRFqiCC367oA Dl_1442840684_;
tyProc__9ajZYMGL5GqiRFqiCC367oA Dl_1442840690_;
tyProc__FprzxJFfqQdWyyGxiUsmeQ Dl_1442840732_;
tyProc__7S2vVNF4dlY59blFohNWnHg Dl_1442840735_;
tyProc__KxeGXN001TReCr89ca9c5bng Dl_1442840738_;
tyProc__9bc9cLDdaqTE6n5J78feKRYg Dl_1442840875_;
tyProc__9bXHKfH08cKXphxNi5GYejg Dl_1442840857_;
tyProc__5sqIMptsyAfPn3c9cPj4DOA Dl_1442840858_;
tyProc__5sqIMptsyAfPn3c9cPj4DOA Dl_1442840769_;
tyProc__5sqIMptsyAfPn3c9cPj4DOA Dl_1442840764_;
tyProc__29cQilB9cqahn5yPQZH66TkA Dl_1442840853_;
tyProc__29cQilB9cqahn5yPQZH66TkA Dl_1442840846_;
tyProc__Dx0emMHXXGxkRnYGUaFLbg Dl_1442841126_;
static void* TM__k6kyf4Co79a84IkK9blFuQVA_82;
tyProc__UI8KCxlXQHWT6J0VRUWTmA Dl_1442840879_;
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, rdFileTime__windowsZwinlean_285)(tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw f) {
	NI64 result;
	result = (NI64)0;
	result = (NI64)(((NI64) (((NU32) (f.dwLowDateTime)))) | (NI64)((NU64)(((NI64) (((NU32) (f.dwHighDateTime))))) << (NU64)(((NI)32))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminusathdevelatslibatswindowsatswinleandotnim_Init000)(void) {
{
	void* T1_;
NIM_BOOL* nimErr_;
nimErr_ = nimErrorFlag();
	T1_ = (void*)0;
	T1_ = loadLib__pureZdynlib_3(TM__k6kyf4Co79a84IkK9blFuQVA_3, NIM_FALSE);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	ws2__windowsZwinlean_816 = T1_;
	{
		void* T6_;
		if (!!((ws2__windowsZwinlean_816 == NIM_NIL))) goto LA4_;
		T6_ = (void*)0;
		T6_ = symAddr__pureZdynlib_49(ws2__windowsZwinlean_816, "inet_ntop");
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		inet_ntop_real__windowsZwinlean_815 = ((tyProc__7LMcD5Rujqk7H2JqdJtoyA) (T6_));
	}
	LA4_: ;
	BeforeRet_: ;
}
}

N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsdotchoosenimatstoolchainsatsnimminusathdevelatslibatswindowsatswinleandotnim_DatInit000)(void) {
if (!((TM__k6kyf4Co79a84IkK9blFuQVA_4 = nimLoadLibrary(TM__k6kyf4Co79a84IkK9blFuQVA_7))
)) nimLoadLibraryError(TM__k6kyf4Co79a84IkK9blFuQVA_9);
	Dl_1442840860_ = (tyProc__9bXHKfH08cKXphxNi5GYejg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "GetCommandLineW");
	Dl_1442840761_ = (tyProc__aMOow6Lp4fo8dW2ko9aU3pg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "GetCurrentDirectoryW");
	Dl_1442840751_ = (tyProc__aO673xGTLLxou7P7GxoCXA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "FormatMessageW");
	Dl_1442840759_ = (tyProc__im9buRnIvptJfzdASYMEbBA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "LocalFree");
	Dl_1442840748_ = (tyProc__9bXer9a4ps9aSGctILcxWReVw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "GetLastError");
	Dl_1442840828_ = (tyProc__3DGKXZ0P9ck0FlUFCwnVxaQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "FindFirstFileW");
	Dl_1442840834_ = (tyProc__ofoySXaAAlxxs9bQS9a1etlg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "FindClose");
	Dl_1442840831_ = (tyProc__jwEWAkul5J6p6K0UfXa1tw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "FindNextFileW");
	Dl_1442840741_ = (tyProc__zP2zGemcuVRvOUE82f9a0Pw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "GetStdHandle");
	Dl_1442840774_ = (tyProc__G0MNqLrkAnRVz4cDlgVcRg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "GetModuleFileNameW");
	Dl_1442840841_ = (tyProc__5sqIMptsyAfPn3c9cPj4DOA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "GetFileAttributesW");
	Dl_1442840836_ = (tyProc__Rzv0SS9bu3vYSxhvPQEKMBQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "GetFullPathNameW");
	Dl_1442840766_ = (tyProc__uBkkHOkdpyfFusi9cbg9cHww) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "CreateDirectoryW");
	Dl_1442841188_ = (tyProc__5sqIMptsyAfPn3c9cPj4DOA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "DeleteFileW");
	Dl_1442840843_ = (tyProc__aOhJuXP2rSFzW5eC9bSzvwg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "SetFileAttributesW");
	Dl_1442840696_ = (tyProc__C5kM33gEhlSKPXwfDNHofQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "CreatePipe");
	Dl_1442841175_ = (tyProc__mBVOPXmpGfUrrbA9a5K9cMbQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "SetHandleInformation");
	Dl_1442840701_ = (tyProc__IDUPJnDaqrBXTB4aj79bKLg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "CreateNamedPipeW");
	Dl_1442841180_ = (tyProc__Q9box9as0S1hHKH9cSO3MGDDA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "CreateFileW");
	Dl_1442841179_ = (tyProc__uryidYWkntM7ddjZSyxvyQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "GetCurrentProcess");
	Dl_1442841164_ = (tyProc__oew1DfaGl5XhHmnBK0HYXQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "DuplicateHandle");
	Dl_1442840682_ = (tyProc__P13srMBg9b3d3yEV9aW4NCoA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "CloseHandle");
	Dl_1442840717_ = (tyProc__Ij9aBl82y9bf8kihDdsUvIEg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "CreateProcessW");
	Dl_1442840684_ = (tyProc__9ajZYMGL5GqiRFqiCC367oA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "ReadFile");
	Dl_1442840690_ = (tyProc__9ajZYMGL5GqiRFqiCC367oA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "WriteFile");
	Dl_1442840732_ = (tyProc__FprzxJFfqQdWyyGxiUsmeQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "WaitForSingleObject");
	Dl_1442840735_ = (tyProc__7S2vVNF4dlY59blFohNWnHg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "TerminateProcess");
	Dl_1442840738_ = (tyProc__KxeGXN001TReCr89ca9c5bng) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "GetExitCodeProcess");
	Dl_1442840875_ = (tyProc__9bc9cLDdaqTE6n5J78feKRYg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "GetSystemTimeAsFileTime");
	Dl_1442840857_ = (tyProc__9bXHKfH08cKXphxNi5GYejg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "GetEnvironmentStringsW");
	Dl_1442840858_ = (tyProc__5sqIMptsyAfPn3c9cPj4DOA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "FreeEnvironmentStringsW");
	Dl_1442840769_ = (tyProc__5sqIMptsyAfPn3c9cPj4DOA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "RemoveDirectoryW");
	Dl_1442840764_ = (tyProc__5sqIMptsyAfPn3c9cPj4DOA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "SetCurrentDirectoryW");
	Dl_1442840853_ = (tyProc__29cQilB9cqahn5yPQZH66TkA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "MoveFileExW");
	Dl_1442840846_ = (tyProc__29cQilB9cqahn5yPQZH66TkA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "CopyFileW");
	Dl_1442841126_ = (tyProc__Dx0emMHXXGxkRnYGUaFLbg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_4, "WaitForMultipleObjects");
if (!((TM__k6kyf4Co79a84IkK9blFuQVA_82 = nimLoadLibrary(TM__k6kyf4Co79a84IkK9blFuQVA_85))
)) nimLoadLibraryError(TM__k6kyf4Co79a84IkK9blFuQVA_87);
	Dl_1442840879_ = (tyProc__UI8KCxlXQHWT6J0VRUWTmA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_82, "ShellExecuteW");
}

