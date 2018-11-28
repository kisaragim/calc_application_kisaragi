#line 1 "C:\\Users\\keito\\AppData\\Local\\Temp\\ParaSoft.21740.5273\\ParaSoft.21740.16989.c"

#define CPPTEST_INSTRUMENTATION


#include "cpptest_coverage.h"
#include "cpptest_runtime_i.h"
#include "cpptest_i.h"
#include "C:\unittest_calc\calculation\.cpptest\calculation\unit-data\current_tubf179707\cpptest_stubconfig.h"
#include "C:\unittest_calc\calculation\.cpptest\calculation\unit-data\current_tubf179707\cpptest_stubconfig.h"


struct __CPTR_Dummy_Type {
    char nonEmpty;
};

CppTestTranslationUnitInfo __CPTR_tui_2159051767_21740_1495930320 = 
{
    0U, 
    "C:\\unittest_calc\\calculation\\.cpptest\\calculation\\file-data\\main.c9bc7492b\\adds\\harness_ildb.xml"
};

#define __CPTR_tui &__CPTR_tui_2159051767_21740_1495930320




#include "cpptest_runtime_i.h"

#ifdef __cplusplus
extern "C" void __CPTR_Initialize(void);
extern "C" void __CPTR_Finalize(void);

struct __CPTR_Initializer_2159051767_21740_1495930320 {
    __CPTR_Initializer_2159051767_21740_1495930320()
    {
        CPPTEST_INITIALIZE_RUNTIME();
    }
    ~__CPTR_Initializer_2159051767_21740_1495930320()
    {
        CPPTEST_FINALIZE_RUNTIME();
    }
};

#if CPPTEST_USE_GLOBAL_OBJECTS_TO_INIT_RUNTIME
static struct __CPTR_Initializer_2159051767_21740_1495930320 __CPTR_initializer_2159051767_21740_1495930320;
#endif

#define CPPTEST_ENTER_MAIN_ROUTINE() __CPTR_Initializer_2159051767_21740_1495930320 __CPTR_main_initializer

#define CPPTEST_EXIT_MAIN_ROUTINE()

#else
extern void __CPTR_Initialize(void);
extern void __CPTR_Finalize(void);

#define CPPTEST_ENTER_MAIN_ROUTINE() CPPTEST_INITIALIZE_RUNTIME()

#define CPPTEST_EXIT_MAIN_ROUTINE() CPPTEST_FINALIZE_RUNTIME()

#endif



#define _coverage_data_unit_size 0
    


#define _coverage_code_size (1 + (11) / (sizeof(unsigned char) * 8))
#define _coverage_func_data_offset 9

static unsigned char _coverage_code[_coverage_code_size];

EXTERN_C_LINKAGE_START
CppTestCoverageInfo __CPTR_cui_2159051767_21740_1495930320 = 
{
    /*id=*/0U,
    /*externalId=*/{247, 131, 236, 84, 89, 0, 0, 0}, 
    /*idAssociationWasSent=*/0,
    /*prev=*/0, 
    /*covDataUnitSize=*/_coverage_data_unit_size,
    /*data=*/(unsigned char*)_coverage_code,
    /*size=*/_coverage_code_size * sizeof(char), 
    /*funcDataOffset=*/_coverage_func_data_offset,
    /*flags=*/0
    | CPPTEST_COVERAGE_INITIALIZE_BUFFERS_FLAG
};
EXTERN_C_LINKAGE_END

#define __CPTR_cui &__CPTR_cui_2159051767_21740_1495930320


#define _cpptest_strdata_var(id, bogus) _cpptest_strdata[id]
static 
const char* _cpptest_strdata[] = {
    0,
    "",
    0
};

#if defined(CPPTEST_ENABLE_ALL_STUBS)
# define CPPTEST_STUB_printf
# define CPPTEST_USER_STUB_printf
#endif
#if defined(CPPTEST_STUB_printf)
# if defined(CPPTEST_SAFE_STUB_printf)
#  define CppTest_Stub__Call_printf_printf CppTest_Safe_Stub_printf_printf
#  if defined(CPPTEST_UNDEFINED_printf) 
#   define CppTest_Safe_Stub_printf_printf printf
#  endif
# elif defined(CPPTEST_AUTO_STUB_printf)
#  define CppTest_Stub__Call_printf_printf CppTest_Auto_Stub_printf_printf
#  if defined(CPPTEST_UNDEFINED_printf) 
#   define CppTest_Auto_Stub_printf_printf printf
#  endif
# else
#  define CppTest_Stub__Call_printf_printf CppTest_Stub_printf_printf
#  if defined(CPPTEST_UNDEFINED_printf) 
#   define CppTest_Stub_printf_printf printf
#  endif
# endif
#else
# define CppTest_Stub__Call_printf_printf printf
#endif

#if defined(CPPTEST_ENABLE_ALL_STUBS)
# define CPPTEST_STUB_strlen
# define CPPTEST_USER_STUB_strlen
#endif
#if defined(CPPTEST_STUB_strlen)
# if defined(CPPTEST_SAFE_STUB_strlen)
#  define CppTest_Stub__Call_strlen_strlen CppTest_Safe_Stub_strlen_strlen
#  if defined(CPPTEST_UNDEFINED_strlen) 
#   define CppTest_Safe_Stub_strlen_strlen strlen
#  endif
# elif defined(CPPTEST_AUTO_STUB_strlen)
#  define CppTest_Stub__Call_strlen_strlen CppTest_Auto_Stub_strlen_strlen
#  if defined(CPPTEST_UNDEFINED_strlen) 
#   define CppTest_Auto_Stub_strlen_strlen strlen
#  endif
# else
#  define CppTest_Stub__Call_strlen_strlen CppTest_Stub_strlen_strlen
#  if defined(CPPTEST_UNDEFINED_strlen) 
#   define CppTest_Stub_strlen_strlen strlen
#  endif
# endif
#else
# define CppTest_Stub__Call_strlen_strlen strlen
#endif

#if defined(CPPTEST_ENABLE_ALL_STUBS)
# define CPPTEST_STUB_Input_number
# define CPPTEST_USER_STUB_Input_number
#endif
#if defined(CPPTEST_STUB_Input_number)
# if defined(CPPTEST_SAFE_STUB_Input_number)
#  define CppTest_Stub__Call_Input_number_Input_number CppTest_Safe_Stub_Input_number_Input_number
#  if defined(CPPTEST_UNDEFINED_Input_number) 
#   define CppTest_Safe_Stub_Input_number_Input_number Input_number
#  endif
# elif defined(CPPTEST_AUTO_STUB_Input_number)
#  define CppTest_Stub__Call_Input_number_Input_number CppTest_Auto_Stub_Input_number_Input_number
#  if defined(CPPTEST_UNDEFINED_Input_number) 
#   define CppTest_Auto_Stub_Input_number_Input_number Input_number
#  endif
# else
#  define CppTest_Stub__Call_Input_number_Input_number CppTest_Stub_Input_number_Input_number
#  if defined(CPPTEST_UNDEFINED_Input_number) 
#   define CppTest_Stub_Input_number_Input_number Input_number
#  endif
# endif
#else
# define CppTest_Stub__Call_Input_number_Input_number Input_number
#endif


#ifndef CPPTEST_IMP___acrt_iob_func
#if defined(CPPTEST_UNDEFINED___acrt_iob_func)
# define CPPTEST_IMP___acrt_iob_func
#else
# define CPPTEST_IMP___acrt_iob_func __declspec(dllimport)
#endif
#endif

#ifndef CPPTEST_IMP___stdio_common_vfprintf
#if defined(CPPTEST_UNDEFINED___stdio_common_vfprintf)
# define CPPTEST_IMP___stdio_common_vfprintf
#else
# define CPPTEST_IMP___stdio_common_vfprintf __declspec(dllimport)
#endif
#endif

#line 11 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\cpptest_pre.h"
struct CppTest_Dummy_Type { 
char nonEmpty; 
}; 

struct CppTest_Safe_Dummy_Type { 
char nonEmpty; 
}; 

struct CppTest_Auto_Dummy_Type { 
char nonEmpty; 
}; 
#line 39
typedef struct CppTest_Dummy_Type CppTest_Dummy; 
typedef struct CppTest_Safe_Dummy_Type CppTest_Safe_Dummy; 
typedef struct CppTest_Auto_Dummy_Type CppTest_Auto_Dummy; 
#line 708 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\sal.h"
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 30 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vadefs.h"
typedef unsigned uintptr_t; 
#line 39 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vadefs.h"
typedef char *va_list; 
#line 164 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vadefs.h"
#pragma pack ( pop )
#line 83 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vcruntime.h"
__pragma( pack ( push, 8 )) 
#line 184 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vcruntime.h"
typedef unsigned size_t; 
typedef int ptrdiff_t; 
typedef int intptr_t; 
#line 196 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vcruntime.h"
typedef _Bool __vcrt_bool; 
#line 215 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vcruntime.h"
typedef unsigned short wchar_t; 
#line 277 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vcruntime.h"
void __cdecl __security_init_cookie(void); 


void __fastcall __security_check_cookie(uintptr_t _StackCookie); 
__declspec(noreturn) void __cdecl __report_gsfailure(void); 
#line 288 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vcruntime.h"
extern uintptr_t __security_cookie; 
#line 296 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vcruntime.h"
__pragma( pack ( pop )) 
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt.h"
__pragma( pack ( push, 8 )) 
#line 145 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt.h"
typedef _Bool __crt_bool; 
#line 244 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt.h"
__declspec(dllimport) void __cdecl _invalid_parameter(const wchar_t *, const wchar_t *, const wchar_t *, unsigned, uintptr_t); 
#line 253 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt.h"
__declspec(dllimport) void __cdecl _invalid_parameter_noinfo(void); 
__declspec(dllimport) __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void); 


__declspec(noreturn) __declspec(dllimport) void __cdecl _invoke_watson(const wchar_t * _Expression, const wchar_t * _FunctionName, const wchar_t * _FileName, unsigned _LineNo, uintptr_t _Reserved); 
#line 482 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt.h"
typedef int errno_t; 
typedef unsigned short wint_t; 
typedef unsigned short wctype_t; 
typedef long __time32_t; 
typedef __int64 __time64_t; 
#line 493
typedef 
#line 488
struct __crt_locale_data_public { 

const unsigned short *_locale_pctype; 
int _locale_mb_cur_max; 
unsigned _locale_lc_codepage; 
} __crt_locale_data_public; 
#line 499
typedef 
#line 495
struct __crt_locale_pointers { 

struct __crt_locale_data *locinfo; 
struct __crt_multibyte_data *mbcinfo; 
} __crt_locale_pointers; 

typedef __crt_locale_pointers *_locale_t; 
#line 507
typedef 
#line 503
struct _Mbstatet { 

unsigned long _Wchar; 
unsigned short _Byte, _State; 
} _Mbstatet; 

typedef _Mbstatet mbstate_t; 
#line 523 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt.h"
typedef __time64_t time_t; 
#line 533 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt.h"
typedef size_t rsize_t; 
#line 1982 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt.h"
__pragma( pack ( pop )) 
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_stdio_config.h"
__pragma( pack ( push, 8 )) 
#line 84 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_stdio_config.h"
__declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_printf_options(void) 
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() 
static unsigned __int64 _OptionsStorage; CPPTEST_STACK_TRACE_STMT_INFO(1) 
{unsigned __int64 *__T113198920 =  (&_OptionsStorage);CPPTEST_STACK_TRACE_EXIT_ROUTINE() return __T113198920;}
} 




__declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_scanf_options(void) 
{ 
static unsigned __int64 _OptionsStorage; 
return &_OptionsStorage; 
} 
#line 122 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_stdio_config.h"
__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__pragma( pack ( push, 8 )) 
#line 28
typedef 
#line 25
struct _iobuf { 

void *_Placeholder; 
} FILE; 
#line 31 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
CPPTEST_IMP___acrt_iob_func FILE *__cdecl __acrt_iob_func(unsigned _Ix); 
#line 48
__declspec(dllimport) wint_t __cdecl fgetwc(FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl _fgetwchar(void); 


__declspec(dllimport) wint_t __cdecl fputwc(wchar_t _Character, FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl _fputwchar(wchar_t _Character); 




__declspec(dllimport) wint_t __cdecl getwc(FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl getwchar(void); 




__declspec(dllimport) wchar_t *__cdecl fgetws(wchar_t * _Buffer, int _BufferCount, FILE * _Stream); 
#line 83
__declspec(dllimport) int __cdecl fputws(const wchar_t * _Buffer, FILE * _Stream); 
#line 90
__declspec(dllimport) wchar_t *__cdecl _getws_s(wchar_t * _Buffer, size_t _BufferCount); 
#line 102 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) wint_t __cdecl putwc(wchar_t _Character, FILE * _Stream); 
#line 108
__declspec(dllimport) wint_t __cdecl putwchar(wchar_t _Character); 




__declspec(dllimport) int __cdecl _putws(const wchar_t * _Buffer); 




__declspec(dllimport) wint_t __cdecl ungetwc(wint_t _Character, FILE * _Stream); 
#line 124
__declspec(dllimport) FILE *__cdecl _wfdopen(int _FileHandle, const wchar_t * _Mode); 
#line 130
__declspec(deprecated("This function or variable may be unsafe. Consider using _wfopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) FILE *__cdecl _wfopen(const wchar_t * _FileName, const wchar_t * _Mode); 
#line 136
__declspec(dllimport) errno_t __cdecl _wfopen_s(FILE ** _Stream, const wchar_t * _FileName, const wchar_t * _Mode); 
#line 144
__declspec(deprecated("This function or variable may be unsafe. Consider using _wfreopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) FILE *__cdecl _wfreopen(const wchar_t * _FileName, const wchar_t * _Mode, FILE * _OldStream); 
#line 151
__declspec(dllimport) errno_t __cdecl _wfreopen_s(FILE ** _Stream, const wchar_t * _FileName, const wchar_t * _Mode, FILE * _OldStream); 
#line 159
__declspec(dllimport) FILE *__cdecl _wfsopen(const wchar_t * _FileName, const wchar_t * _Mode, int _ShFlag); 
#line 165
__declspec(dllimport) void __cdecl _wperror(const wchar_t * _ErrorMessage); 
#line 172
__declspec(dllimport) FILE *__cdecl _wpopen(const wchar_t * _Command, const wchar_t * _Mode); 
#line 179 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) int __cdecl _wremove(const wchar_t * _FileName); 
#line 187
__declspec(dllimport) __declspec(allocator) wchar_t *__cdecl _wtempnam(const wchar_t * _Directory, const wchar_t * _FilePrefix); 
#line 196
__declspec(dllimport) errno_t __cdecl _wtmpnam_s(wchar_t * _Buffer, size_t _BufferCount); 
#line 207 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _wtmpnam_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) wchar_t *__cdecl _wtmpnam(wchar_t * _Buffer); 
#line 221 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) wint_t __cdecl _fgetwc_nolock(FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl _fputwc_nolock(wchar_t _Character, FILE * _Stream); 
#line 232
__declspec(dllimport) wint_t __cdecl _getwc_nolock(FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl _putwc_nolock(wchar_t _Character, FILE * _Stream); 
#line 243
__declspec(dllimport) wint_t __cdecl _ungetwc_nolock(wint_t _Character, FILE * _Stream); 
#line 269 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vfwprintf(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 278
__declspec(dllimport) int __cdecl __stdio_common_vfwprintf_s(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 287
__declspec(dllimport) int __cdecl __stdio_common_vfwprintf_p(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 296
__inline int __cdecl _vfwprintf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 305 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return __stdio_common_vfwprintf((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList); 
} 
#line 311 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vfwprintf(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 319 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
} 
#line 325 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vfwprintf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 334 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return __stdio_common_vfwprintf_s((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList); 
} 
#line 342 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vfwprintf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 350 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
} 
#line 358 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vfwprintf_p_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 367 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return __stdio_common_vfwprintf_p((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList); 
} 
#line 373 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vfwprintf_p(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 381 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
} 
#line 387 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 395 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList); 
} 
#line 401 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vwprintf(const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 408 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwprintf_l((__acrt_iob_func(1)), _Format, 0, _ArgList); 
} 
#line 414 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwprintf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 422 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList); 
} 
#line 430 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vwprintf_s(const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 437 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwprintf_s_l((__acrt_iob_func(1)), _Format, 0, _ArgList); 
} 
#line 445 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 453 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList); 
} 
#line 459 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwprintf_p(const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 466 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwprintf_p_l((__acrt_iob_func(1)), _Format, 0, _ArgList); 
} 
#line 472 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwprintf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 480 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwprintf_l(_Stream, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 491 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl fwprintf(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 
#line 498 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 509 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwprintf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 517 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 530 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl fwprintf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 
#line 537 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 550 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwprintf_p_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 558 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 569 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwprintf_p(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 
#line 576 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 587 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 594 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 605 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl wprintf(const wchar_t *const 
_Format, ...) 
#line 611 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwprintf_l((__acrt_iob_func(1)), _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 622 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wprintf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 629 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 642 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl wprintf_s(const wchar_t *const 
_Format, ...) 
#line 648 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwprintf_s_l((__acrt_iob_func(1)), _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 661 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 668 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 679 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wprintf_p(const wchar_t *const 
_Format, ...) 
#line 685 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwprintf_p_l((__acrt_iob_func(1)), _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 702 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vfwscanf(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 711
__inline int __cdecl _vfwscanf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 720 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return __stdio_common_vfwscanf((*__local_stdio_scanf_options()), _Stream, _Format, _Locale, _ArgList); 


} 
#line 728 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vfwscanf(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 736 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
} 
#line 742 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vfwscanf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 751 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return __stdio_common_vfwscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 


} 
#line 761 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vfwscanf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 769 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
} 
#line 776 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwscanf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 784 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList); 
} 
#line 790 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vwscanf(const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 797 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwscanf_l((__acrt_iob_func(0)), _Format, 0, _ArgList); 
} 
#line 803 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwscanf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 811 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList); 
} 
#line 819 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vwscanf_s(const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 826 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vfwscanf_s_l((__acrt_iob_func(0)), _Format, 0, _ArgList); 
} 
#line 834 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _fwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __inline int __cdecl _fwscanf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 842 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwscanf_l(_Stream, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 853 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using fwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline int __cdecl fwscanf(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 
#line 860 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 871 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwscanf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 879 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 892 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl fwscanf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 
#line 899 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 912 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _wscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __inline int __cdecl _wscanf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 919 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 930 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using wscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __inline int __cdecl wscanf(const wchar_t *const 
_Format, ...) 
#line 936 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwscanf_l((__acrt_iob_func(0)), _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 947 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wscanf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 954 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 967 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl wscanf_s(const wchar_t *const 
_Format, ...) 
#line 973 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfwscanf_s_l((__acrt_iob_func(0)), _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1003 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vswprintf(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1014
__declspec(dllimport) int __cdecl __stdio_common_vswprintf_s(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1025
__declspec(dllimport) int __cdecl __stdio_common_vsnwprintf_s(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, size_t _MaxCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1037
__declspec(dllimport) int __cdecl __stdio_common_vswprintf_p(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1048
__declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARN" "INGS. See online help for details.")) __inline int __cdecl _vsnwprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1058 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1067 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4793) /* Removed pragma: #pragma warning(disable: 4793)*/



__inline int __cdecl _vsnwprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1083 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
const int _Result = __stdio_common_vsnwprintf_s((*__local_stdio_printf_options()), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1094 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vsnwprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 1104 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} 
#line 1109 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _snwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __inline int __cdecl _snwprintf(wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __inline int __cdecl _vsnwprintf(wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, va_list _Args); 
#line 1118 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
/* Removed pragma: #pragma warning(pop)*/



__declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __inline int __cdecl _vsnwprintf(wchar_t *
_Buffer, size_t 
_BufferCount, const wchar_t *
_Format, va_list 
_ArgList) 
#line 1131 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
return _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
/* Removed pragma: #pragma warning(pop)*/
} 
#line 1150 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_c_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1160 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1171 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_c(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 1180 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1187 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1197 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
/* Removed pragma: #pragma warning(pop)*/
} 
#line 1207 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl __vswprintf_l(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1216 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
} 
#line 1223 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 1231 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
} 
#line 1238 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vswprintf(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 1247 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1254 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1264 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
const int _Result = __stdio_common_vswprintf_s((*__local_stdio_printf_options()), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1276 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vswprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 1285 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1302 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_p_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1312 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
const int _Result = __stdio_common_vswprintf_p((*__local_stdio_printf_options()), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1323 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_p(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 1332 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1339 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vscwprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1347 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1358 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vscwprintf(const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 1365 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vscwprintf_l(_Format, 0, _ArgList); 
} 
#line 1372 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vscwprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1380 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
const int _Result = __stdio_common_vswprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1391 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vscwprintf_p(const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 1398 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vscwprintf_p_l(_Format, 0, _ArgList); 
} 
#line 1405 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl __swprintf_l(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1413 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1425 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1434 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1446 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, ...) 
#line 1453 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = __vswprintf_l(_Buffer, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1465 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl swprintf(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 
#line 1473 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1483 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
/* Removed pragma: #pragma warning(push)*/


#pragma warning(disable: 4793 4996) /* Removed pragma: #pragma warning(disable:4793 4996)*/

__declspec(deprecated("This function or variable may be unsafe. Consider using __swprintf_l_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __inline int __cdecl __swprintf_l(wchar_t * _Buffer, const wchar_t * _Format, _locale_t _Locale, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using _vswprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __inline int __cdecl __vswprintf_l(wchar_t * _Buffer, const wchar_t * _Format, _locale_t _Locale, va_list _Args); 
#line 1497 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using swprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __inline int __cdecl _swprintf(wchar_t * _Buffer, const wchar_t * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using vswprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __inline int __cdecl _vswprintf(wchar_t * _Buffer, const wchar_t * _Format, va_list _Args); 
#line 1504 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
/* Removed pragma: #pragma warning(pop)*/



__inline int __cdecl _swprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1517 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1530 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl swprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 
#line 1538 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1559 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_p_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1568 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1580 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_p(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 
#line 1588 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1600 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_c_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1609 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1621 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_c(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 
#line 1629 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1641 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _snwprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __inline int __cdecl _snwprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1650 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 

/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
/* Removed pragma: #pragma warning(pop)*/

((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1667 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwprintf(wchar_t *
_Buffer, size_t 
_BufferCount, const wchar_t *
_Format, ...) 
#line 1675 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 

/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
/* Removed pragma: #pragma warning(pop)*/

((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1692 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1702 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1714 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, ...) 
#line 1723 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1742 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _scwprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1749 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vscwprintf_l(_Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1761 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _scwprintf(const wchar_t *const 
_Format, ...) 
#line 1767 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vscwprintf_l(_Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1779 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _scwprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1786 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vscwprintf_p_l(_Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1798 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _scwprintf_p(const wchar_t *const 
_Format, ...) 
#line 1804 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vscwprintf_p_l(_Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1816 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4141 4412 4793 4996 6054) /* Removed pragma: #pragma warning(disable: 4141 4412 4793 4996 6054)*/
#line 1875
/* Removed pragma: #pragma warning(pop)*/
#line 1892 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vswscanf(unsigned __int64 _Options, const wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1903
__inline int __cdecl _vswscanf_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1912 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 
#line 1921 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vswscanf(const wchar_t *
_Buffer, const wchar_t *
_Format, va_list 
_ArgList) 
#line 1929 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
} 
#line 1936 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswscanf_s_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1945 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 
#line 1956 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vswscanf_s(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, va_list 
_ArgList) 
#line 1964 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
} 
#line 1981 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __inline int __cdecl _vsnwscanf_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1991 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 


} 
#line 2000 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vsnwscanf_s_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 2010 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 


} 
#line 2019 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _swscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __inline int __cdecl _swscanf_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, _locale_t 
_Locale, ...) 
#line 2027 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2039 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using swscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline int __cdecl swscanf(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, ...) 
#line 2046 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2058 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swscanf_s_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 2066 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2080 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl swscanf_s(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, ...) 
#line 2087 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2101 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _snwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __inline int __cdecl _snwscanf_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 2110 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 

/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
/* Removed pragma: #pragma warning(pop)*/

((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2127 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _snwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __inline int __cdecl _snwscanf(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 
#line 2135 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 

/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
/* Removed pragma: #pragma warning(pop)*/

((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2152 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwscanf_s_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 
#line 2161 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2173 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwscanf_s(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 
#line 2181 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2198 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdio.h"
__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__pragma( pack ( push, 8 )) 
#line 69 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
typedef __int64 fpos_t; 
#line 76
__declspec(dllimport) errno_t __cdecl _get_stream_buffer_pointers(FILE * _Stream, char *** _Base, char *** _Pointer, int ** _Count); 
#line 92
__declspec(dllimport) errno_t __cdecl clearerr_s(FILE * _Stream); 




__declspec(dllimport) errno_t __cdecl fopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode); 
#line 105
__declspec(dllimport) size_t __cdecl fread_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 114
__declspec(dllimport) errno_t __cdecl freopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode, FILE * _OldStream); 
#line 122
__declspec(dllimport) char *__cdecl gets_s(char * _Buffer, rsize_t _Size); 
#line 128
__declspec(dllimport) errno_t __cdecl tmpfile_s(FILE ** _Stream); 
#line 134
__declspec(dllimport) errno_t __cdecl tmpnam_s(char * _Buffer, rsize_t _Size); 
#line 141 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(dllimport) void __cdecl clearerr(FILE * _Stream); 
#line 147
__declspec(dllimport) int __cdecl fclose(FILE * _Stream); 




__declspec(dllimport) int __cdecl _fcloseall(void); 


__declspec(dllimport) FILE *__cdecl _fdopen(int _FileHandle, const char * _Mode); 
#line 161
__declspec(dllimport) int __cdecl feof(FILE * _Stream); 




__declspec(dllimport) int __cdecl ferror(FILE * _Stream); 




__declspec(dllimport) int __cdecl fflush(FILE * _Stream); 
#line 177
__declspec(dllimport) int __cdecl fgetc(FILE * _Stream); 




__declspec(dllimport) int __cdecl _fgetchar(void); 



__declspec(dllimport) int __cdecl fgetpos(FILE * _Stream, fpos_t * _Position); 
#line 193
__declspec(dllimport) char *__cdecl fgets(char * _Buffer, int _MaxCount, FILE * _Stream); 
#line 200
__declspec(dllimport) int __cdecl _fileno(FILE * _Stream); 




__declspec(dllimport) int __cdecl _flushall(void); 


__declspec(deprecated("This function or variable may be unsafe. Consider using fopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) FILE *__cdecl fopen(const char * _FileName, const char * _Mode); 
#line 216
__declspec(dllimport) int __cdecl fputc(int _Character, FILE * _Stream); 
#line 222
__declspec(dllimport) int __cdecl _fputchar(int _Character); 
#line 228
__declspec(dllimport) int __cdecl fputs(const char * _Buffer, FILE * _Stream); 
#line 234
__declspec(dllimport) size_t __cdecl fread(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 243
__declspec(deprecated("This function or variable may be unsafe. Consider using freopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) FILE *__cdecl freopen(const char * _FileName, const char * _Mode, FILE * _Stream); 
#line 250
__declspec(dllimport) FILE *__cdecl _fsopen(const char * _FileName, const char * _Mode, int _ShFlag); 
#line 258
__declspec(dllimport) int __cdecl fsetpos(FILE * _Stream, const fpos_t * _Position); 
#line 265
__declspec(dllimport) int __cdecl fseek(FILE * _Stream, long _Offset, int _Origin); 
#line 273
__declspec(dllimport) int __cdecl _fseeki64(FILE * _Stream, __int64 _Offset, int _Origin); 
#line 281
__declspec(dllimport) long __cdecl ftell(FILE * _Stream); 
#line 287
__declspec(dllimport) __int64 __cdecl _ftelli64(FILE * _Stream); 




__declspec(dllimport) size_t __cdecl fwrite(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 301
__declspec(dllimport) int __cdecl getc(FILE * _Stream); 




__declspec(dllimport) int __cdecl getchar(void); 


__declspec(dllimport) int __cdecl _getmaxstdio(void); 
#line 316 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl _getw(FILE * _Stream); 



__declspec(dllimport) void __cdecl perror(const char * _ErrorMessage); 
#line 328
__declspec(dllimport) int __cdecl _pclose(FILE * _Stream); 




__declspec(dllimport) FILE *__cdecl _popen(const char * _Command, const char * _Mode); 
#line 342 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl putc(int _Character, FILE * _Stream); 
#line 348
__declspec(dllimport) int __cdecl putchar(int _Character); 




__declspec(dllimport) int __cdecl puts(const char * _Buffer); 
#line 359
__declspec(dllimport) int __cdecl _putw(int _Word, FILE * _Stream); 




__declspec(dllimport) int __cdecl remove(const char * _FileName); 




__declspec(dllimport) int __cdecl rename(const char * _OldFileName, const char * _NewFileName); 




__declspec(dllimport) int __cdecl _unlink(const char * _FileName); 
#line 381
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _unlink. See online help for details" ".")) __declspec(dllimport) int __cdecl unlink(const char * _FileName); 
#line 387 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(dllimport) void __cdecl rewind(FILE * _Stream); 




__declspec(dllimport) int __cdecl _rmtmp(void); 


__declspec(deprecated("This function or variable may be unsafe. Consider using setvbuf instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) void __cdecl setbuf(FILE * _Stream, char * _Buffer); 
#line 401
__declspec(dllimport) int __cdecl _setmaxstdio(int _Maximum); 
#line 407
__declspec(dllimport) int __cdecl setvbuf(FILE * _Stream, char * _Buffer, int _Mode, size_t _Size); 
#line 420 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(dllimport) __declspec(allocator) char *__cdecl _tempnam(const char * _DirectoryName, const char * _FilePrefix); 
#line 430 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using tmpfile_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) FILE *__cdecl tmpfile(void); 
#line 438 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 28726) /* Removed pragma: #pragma warning(disable: 28726)*/
__declspec(deprecated("This function or variable may be unsafe. Consider using tmpnam_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) char *__cdecl tmpnam(char * _Buffer); 
#line 445 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
/* Removed pragma: #pragma warning(pop)*/



__declspec(dllimport) int __cdecl ungetc(int _Character, FILE * _Stream); 
#line 461
__declspec(dllimport) void __cdecl _lock_file(FILE * _Stream); 



__declspec(dllimport) void __cdecl _unlock_file(FILE * _Stream); 
#line 471
__declspec(dllimport) int __cdecl _fclose_nolock(FILE * _Stream); 
#line 477
__declspec(dllimport) int __cdecl _fflush_nolock(FILE * _Stream); 
#line 483
__declspec(dllimport) int __cdecl _fgetc_nolock(FILE * _Stream); 
#line 489
__declspec(dllimport) int __cdecl _fputc_nolock(int _Character, FILE * _Stream); 
#line 495
__declspec(dllimport) size_t __cdecl _fread_nolock(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 504
__declspec(dllimport) size_t __cdecl _fread_nolock_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 513
__declspec(dllimport) int __cdecl _fseek_nolock(FILE * _Stream, long _Offset, int _Origin); 
#line 520
__declspec(dllimport) int __cdecl _fseeki64_nolock(FILE * _Stream, __int64 _Offset, int _Origin); 
#line 527
__declspec(dllimport) long __cdecl _ftell_nolock(FILE * _Stream); 




__declspec(dllimport) __int64 __cdecl _ftelli64_nolock(FILE * _Stream); 




__declspec(dllimport) size_t __cdecl _fwrite_nolock(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 545
__declspec(dllimport) int __cdecl _getc_nolock(FILE * _Stream); 




__declspec(dllimport) int __cdecl _putc_nolock(int _Character, FILE * _Stream); 
#line 556
__declspec(dllimport) int __cdecl _ungetc_nolock(int _Character, FILE * _Stream); 
#line 587 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(dllimport) int *__cdecl __p__commode(void); 
#line 607 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
CPPTEST_IMP___stdio_common_vfprintf int __cdecl __stdio_common_vfprintf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 615
__declspec(dllimport) int __cdecl __stdio_common_vfprintf_s(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 624
__declspec(dllimport) int __cdecl __stdio_common_vfprintf_p(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 633
__inline int __cdecl _vfprintf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 642 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() CPPTEST_STACK_TRACE_STMT_INFO(2) 
{int __T114708744 =  __stdio_common_vfprintf((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList);CPPTEST_STACK_TRACE_EXIT_ROUTINE() return __T114708744;}
} 
#line 648 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl vfprintf(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 
#line 656 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfprintf_l(_Stream, _Format, 0, _ArgList); 
} 
#line 662 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vfprintf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 671 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return __stdio_common_vfprintf_s((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList); 
} 
#line 679 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl vfprintf_s(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 
#line 687 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
} 
#line 695 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vfprintf_p_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 704 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return __stdio_common_vfprintf_p((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList); 
} 
#line 710 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vfprintf_p(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 
#line 718 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
} 
#line 724 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vprintf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 732 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList); 
} 
#line 738 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl vprintf(const char *const 
_Format, va_list 
_ArgList) 
#line 745 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfprintf_l((__acrt_iob_func(1)), _Format, 0, _ArgList); 
} 
#line 751 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vprintf_s_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 759 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList); 
} 
#line 767 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl vprintf_s(const char *const 
_Format, va_list 
_ArgList) 
#line 774 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfprintf_s_l((__acrt_iob_func(1)), _Format, 0, _ArgList); 
} 
#line 782 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 790 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList); 
} 
#line 796 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vprintf_p(const char *const 
_Format, va_list 
_ArgList) 
#line 803 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfprintf_p_l((__acrt_iob_func(1)), _Format, 0, _ArgList); 
} 
#line 809 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _fprintf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 817 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfprintf_l(_Stream, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 828 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl fprintf(FILE *const 
_Stream, const char *const 
_Format, ...) 
#line 835 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfprintf_l(_Stream, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 845 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl _set_printf_count_output(int _Value); 



__declspec(dllimport) int __cdecl _get_printf_count_output(void); 


__inline int __cdecl _fprintf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 860 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 873 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl fprintf_s(FILE *const 
_Stream, const char *const 
_Format, ...) 
#line 880 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 893 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _fprintf_p_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 901 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 912 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _fprintf_p(FILE *const 
_Stream, const char *const 
_Format, ...) 
#line 919 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 930 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _printf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 937 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfprintf_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#if !defined(CppTest_Stub_printf_printf) && defined(CPPTEST_USER_STUB_printf)
int __cdecl CppTest_Stub_printf_printf(const char *const _Format, ...); 
#endif

#if !defined(CppTest_Safe_Stub_printf_printf) && defined(CPPTEST_SAFE_STUB_printf)
int __cdecl CppTest_Safe_Stub_printf_printf(const char *const _Format, ...); 
#endif

#if !defined(CppTest_Auto_Stub_printf_printf) && defined(CPPTEST_AUTO_STUB_printf)
int __cdecl CppTest_Auto_Stub_printf_printf(const char *const _Format, ...); 
#endif
#line 948 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl printf(const char *const 
_Format, ...) 
#line 954 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ CPPTEST_STACK_TRACE_FUNC_START_INFO() 
int _Result; 
va_list _ArgList; CPPTEST_STACK_TRACE_STMT_INFO(3) 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); CPPTEST_STACK_TRACE_STMT_INFO(4) 
_Result = _vfprintf_l((__acrt_iob_func(1)), _Format, 0, _ArgList); CPPTEST_STACK_TRACE_STMT_INFO(5) 
((void)(_ArgList = (va_list)0)); CPPTEST_STACK_TRACE_EXIT_ROUTINE() 
return _Result; 
} 
#line 965 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _printf_s_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 972 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfprintf_s_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 985 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl printf_s(const char *const 
_Format, ...) 
#line 991 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfprintf_s_l((__acrt_iob_func(1)), _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1004 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _printf_p_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1011 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfprintf_p_l((__acrt_iob_func(1)), _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1022 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _printf_p(const char *const 
_Format, ...) 
#line 1028 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfprintf_p_l((__acrt_iob_func(1)), _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1044 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vfscanf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _Arglist); 
#line 1053
__inline int __cdecl _vfscanf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1062 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return __stdio_common_vfscanf((*__local_stdio_scanf_options()), _Stream, _Format, _Locale, _ArgList); 


} 
#line 1070 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl vfscanf(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 
#line 1078 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfscanf_l(_Stream, _Format, 0, _ArgList); 
} 
#line 1084 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vfscanf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1093 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return __stdio_common_vfscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 


} 
#line 1104 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl vfscanf_s(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 
#line 1112 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
} 
#line 1120 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vscanf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1128 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList); 
} 
#line 1134 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl vscanf(const char *const 
_Format, va_list 
_ArgList) 
#line 1141 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfscanf_l((__acrt_iob_func(0)), _Format, 0, _ArgList); 
} 
#line 1147 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vscanf_s_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1155 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList); 
} 
#line 1163 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl vscanf_s(const char *const 
_Format, va_list 
_ArgList) 
#line 1170 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vfscanf_s_l((__acrt_iob_func(0)), _Format, 0, _ArgList); 
} 
#line 1178 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _fscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __inline int __cdecl _fscanf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1186 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfscanf_l(_Stream, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1197 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __inline int __cdecl fscanf(FILE *const 
_Stream, const char *const 
_Format, ...) 
#line 1204 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfscanf_l(_Stream, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1215 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _fscanf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1223 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1236 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl fscanf_s(FILE *const 
_Stream, const char *const 
_Format, ...) 
#line 1243 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1256 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _scanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __inline int __cdecl _scanf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1263 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfscanf_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1274 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __inline int __cdecl scanf(const char *const 
_Format, ...) 
#line 1280 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfscanf_l((__acrt_iob_func(0)), _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1291 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _scanf_s_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1298 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfscanf_s_l((__acrt_iob_func(0)), _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1311 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl scanf_s(const char *const 
_Format, ...) 
#line 1317 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfscanf_s_l((__acrt_iob_func(0)), _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1337 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vsprintf(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1347
__declspec(dllimport) int __cdecl __stdio_common_vsprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1357
__declspec(dllimport) int __cdecl __stdio_common_vsnprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, size_t _MaxCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1368
__declspec(dllimport) int __cdecl __stdio_common_vsprintf_p(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1379
__declspec(deprecated("This function or variable may be unsafe. Consider using _vsnprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __inline int __cdecl _vsnprintf_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1389 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1400 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 
#line 1409 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
return _vsnprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
/* Removed pragma: #pragma warning(pop)*/
} 
#line 1430 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl vsnprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 
#line 1439 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), _Buffer, _BufferCount, _Format, 0, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1450 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _vsprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __inline int __cdecl _vsprintf_l(char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1459 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
/* Removed pragma: #pragma warning(pop)*/
} 
#line 1469 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using vsprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __inline int __cdecl vsprintf(char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 
#line 1477 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
/* Removed pragma: #pragma warning(pop)*/
} 
#line 1487 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vsprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1497 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
const int _Result = __stdio_common_vsprintf_s((*__local_stdio_printf_options()), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1510 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl vsprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 
#line 1519 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1536 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vsprintf_p_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1546 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
const int _Result = __stdio_common_vsprintf_p((*__local_stdio_printf_options()), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1557 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vsprintf_p(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 
#line 1566 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1573 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1584 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
const int _Result = __stdio_common_vsnprintf_s((*__local_stdio_printf_options()), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1595 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, va_list 
_ArgList) 
#line 1605 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} 
#line 1623 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl vsnprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, va_list 
_ArgList) 
#line 1633 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} 
#line 1650 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vscprintf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1658 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1668 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vscprintf(const char *const 
_Format, va_list 
_ArgList) 
#line 1675 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vscprintf_l(_Format, 0, _ArgList); 
} 
#line 1681 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vscprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1689 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
const int _Result = __stdio_common_vsprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1699 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vscprintf_p(const char *const 
_Format, va_list 
_ArgList) 
#line 1706 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vscprintf_p_l(_Format, 0, _ArgList); 
} 
#line 1712 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf_c_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 1722 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? -1 : _Result; 
} 
#line 1733 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf_c(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 
#line 1742 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1749 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _sprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __inline int __cdecl _sprintf_l(char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1757 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 

/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
_Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList); 
/* Removed pragma: #pragma warning(pop)*/

((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1774 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl sprintf(char *const 
_Buffer, const char *const 
_Format, ...) 
#line 1781 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 

/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
_Result = _vsprintf_l(_Buffer, _Format, 0, _ArgList); 
/* Removed pragma: #pragma warning(pop)*/

((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1796 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
#pragma warning(disable: 28719) /* Removed pragma: #pragma warning(disable: 28719)*/
#pragma warning(disable: 28726) /* Removed pragma: #pragma warning(disable: 28726)*/
__declspec(deprecated("This function or variable may be unsafe. Consider using sprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __inline int __cdecl sprintf(char * _Buffer, const char * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using vsprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __inline int __cdecl vsprintf(char * _Buffer, const char * _Format, va_list _Args); 
#line 1806 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
/* Removed pragma: #pragma warning(pop)*/



__inline int __cdecl _sprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1819 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1833 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl sprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 
#line 1841 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1862 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _sprintf_p_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1871 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1883 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _sprintf_p(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 
#line 1891 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1903 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _snprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __inline int __cdecl _snprintf_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 1912 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 

/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
_Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
/* Removed pragma: #pragma warning(pop)*/

((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1940 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl snprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 
#line 1948 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
/* Removed pragma: #pragma warning(suppress:28719)*/
_Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1961 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 
#line 1969 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
/* Removed pragma: #pragma warning(suppress:28719)*/
_Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 1980 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _snprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __inline int __cdecl _snprintf(char * _Buffer, size_t _BufferCount, const char * _Format, ...); __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __inline int __cdecl _vsnprintf(char * _Buffer, size_t _BufferCount, const char * _Format, va_list _Args); 
#line 1991 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_c_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 2000 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2012 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_c(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 
#line 2020 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2032 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 2042 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2054 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, ...) 
#line 2063 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2082 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _scprintf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 2089 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vscprintf_l(_Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2100 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _scprintf(const char *const 
_Format, ...) 
#line 2106 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vscprintf_l(_Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2117 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _scprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 2124 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vscprintf_p_l(_Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2135 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _scprintf_p(const char *const 
_Format, ...) 
#line 2141 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vscprintf_p(_Format, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2156 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(dllimport) int __cdecl __stdio_common_vsscanf(unsigned __int64 _Options, const char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 2166
__inline int __cdecl _vsscanf_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 2175 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return __stdio_common_vsscanf((*__local_stdio_scanf_options()), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 
#line 2183 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl vsscanf(const char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 
#line 2191 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
} 
#line 2197 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _vsscanf_s_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 
#line 2206 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 
#line 2215 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 6530) /* Removed pragma: #pragma warning(disable:6530)*/


__inline int __cdecl vsscanf_s(const char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 
#line 2227 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
return _vsscanf_s_l(_Buffer, _Format, 0, _ArgList); 
} 
#line 2239 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
/* Removed pragma: #pragma warning(pop)*/
#line 2244 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _sscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __inline int __cdecl _sscanf_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 2252 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2263 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __inline int __cdecl sscanf(const char *const 
_Buffer, const char *const 
_Format, ...) 
#line 2270 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2281 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _sscanf_s_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 2289 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2302 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl sscanf_s(const char *const 
_Buffer, const char *const 
_Format, ...) 
#line 2309 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 

/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4996) /* Removed pragma: #pragma warning(disable: 4996)*/
_Result = vsscanf_s(_Buffer, _Format, _ArgList); 
/* Removed pragma: #pragma warning(pop)*/

((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2326 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 6530) /* Removed pragma: #pragma warning(disable:6530)*/


__declspec(deprecated("This function or variable may be unsafe. Consider using _snscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __inline int __cdecl _snscanf_l(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 2339 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2354 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _snscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __inline int __cdecl _snscanf(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 
#line 2362 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()), _Buffer, _BufferCount, _Format, 0, _ArgList); 



((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2378 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _snscanf_s_l(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 
#line 2387 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Locale)) + (((sizeof (_Locale) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2402 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl _snscanf_s(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 
#line 2410 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, 0, _ArgList); 



((void)(_ArgList = (va_list)0)); 
return _Result; 
} 
#line 2424 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
/* Removed pragma: #pragma warning(pop)*/
#line 2447 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _tempnam. See online help for detail" "s.")) __declspec(dllimport) char *__cdecl tempnam(const char * _Directory, const char * _FilePrefix); 
#line 2456 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcloseall. See online help for deta" "ils.")) __declspec(dllimport) int __cdecl fcloseall(void); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fdopen. See online help for details" ".")) __declspec(dllimport) FILE *__cdecl fdopen(int _FileHandle, const char * _Format); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fgetchar. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl fgetchar(void); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fileno. See online help for details" ".")) __declspec(dllimport) int __cdecl fileno(FILE * _Stream); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _flushall. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl flushall(void); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fputchar. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl fputchar(int _Ch); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _getw. See online help for details.")) __declspec(dllimport) int __cdecl getw(FILE * _Stream); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putw. See online help for details.")) __declspec(dllimport) int __cdecl putw(int _Ch, FILE * _Stream); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _rmtmp. See online help for details." "")) __declspec(dllimport) int __cdecl rmtmp(void); 
#line 2471 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
__pragma( pack ( push, 8 )) 

/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4738) /* Removed pragma: #pragma warning(disable:4738)*/
#pragma warning(disable: 4820) /* Removed pragma: #pragma warning(disable:4820)*/
#line 25
struct _exception { 

int type; 
char *name; 
double arg1; 
double arg2; 
double retval; 
}; 
#line 39
struct _complex { 

double x, y; 
}; 
#line 61 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
typedef float float_t; 
typedef double double_t; 
#line 80 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
extern const double _HUGE; 
#line 171 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
void __cdecl _fperrraise(int _Except); 

__declspec(dllimport) short __cdecl _dclass(double _X); 
__declspec(dllimport) short __cdecl _ldclass(long double _X); 
__declspec(dllimport) short __cdecl _fdclass(float _X); 

__declspec(dllimport) int __cdecl _dsign(double _X); 
__declspec(dllimport) int __cdecl _ldsign(long double _X); 
__declspec(dllimport) int __cdecl _fdsign(float _X); 

__declspec(dllimport) int __cdecl _dpcomp(double _X, double _Y); 
__declspec(dllimport) int __cdecl _ldpcomp(long double _X, long double _Y); 
__declspec(dllimport) int __cdecl _fdpcomp(float _X, float _Y); 

__declspec(dllimport) short __cdecl _dtest(double * _Px); 
__declspec(dllimport) short __cdecl _ldtest(long double * _Px); 
__declspec(dllimport) short __cdecl _fdtest(float * _Px); 

__declspec(dllimport) short __cdecl _d_int(double * _Px, short _Xexp); 
__declspec(dllimport) short __cdecl _ld_int(long double * _Px, short _Xexp); 
__declspec(dllimport) short __cdecl _fd_int(float * _Px, short _Xexp); 

__declspec(dllimport) short __cdecl _dscale(double * _Px, long _Lexp); 
__declspec(dllimport) short __cdecl _ldscale(long double * _Px, long _Lexp); 
__declspec(dllimport) short __cdecl _fdscale(float * _Px, long _Lexp); 

__declspec(dllimport) short __cdecl _dunscale(short * _Pex, double * _Px); 
__declspec(dllimport) short __cdecl _ldunscale(short * _Pex, long double * _Px); 
__declspec(dllimport) short __cdecl _fdunscale(short * _Pex, float * _Px); 

__declspec(dllimport) short __cdecl _dexp(double * _Px, double _Y, long _Eoff); 
__declspec(dllimport) short __cdecl _ldexp(long double * _Px, long double _Y, long _Eoff); 
__declspec(dllimport) short __cdecl _fdexp(float * _Px, float _Y, long _Eoff); 

__declspec(dllimport) short __cdecl _dnorm(unsigned short * _Ps); 
__declspec(dllimport) short __cdecl _fdnorm(unsigned short * _Ps); 

__declspec(dllimport) double __cdecl _dpoly(double _X, const double * _Tab, int _N); 
__declspec(dllimport) long double __cdecl _ldpoly(long double _X, const long double * _Tab, int _N); 
__declspec(dllimport) float __cdecl _fdpoly(float _X, const float * _Tab, int _N); 

__declspec(dllimport) double __cdecl _dlog(double _X, int _Baseflag); 
__declspec(dllimport) long double __cdecl _ldlog(long double _X, int _Baseflag); 
__declspec(dllimport) float __cdecl _fdlog(float _X, int _Baseflag); 

__declspec(dllimport) double __cdecl _dsin(double _X, unsigned _Qoff); 
__declspec(dllimport) long double __cdecl _ldsin(long double _X, unsigned _Qoff); 
__declspec(dllimport) float __cdecl _fdsin(float _X, unsigned _Qoff); 
#line 225
typedef 
#line 222
union { 
unsigned short _Sh[4]; 
double _Val; 
} _double_val; 
#line 232
typedef 
#line 229
union { 
unsigned short _Sh[2]; 
float _Val; 
} _float_val; 
#line 239
typedef 
#line 236
union { 
unsigned short _Sh[4]; 
long double _Val; 
} _ldouble_val; 
#line 247
typedef 
#line 242
union { 
unsigned short _Word[4]; 
float _Float; 
double _Double; 
long double _Long_double; 
} _float_const; 

extern const _float_const _Denorm_C, _Inf_C, _Nan_C, _Snan_C, _Hugeval_C; 
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C; 
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C; 

extern const _float_const _Eps_C, _Rteps_C; 
extern const _float_const _FEps_C, _FRteps_C; 
extern const _float_const _LEps_C, _LRteps_C; 

extern const double _Zero_C, _Xbig_C; 
extern const float _FZero_C, _FXbig_C; 
extern const long double _LZero_C, _LXbig_C; 
#line 466 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
int __cdecl abs(int _X); 
long __cdecl labs(long _X); 
__int64 __cdecl llabs(__int64 _X); 

double __cdecl acos(double _X); 
double __cdecl asin(double _X); 
double __cdecl atan(double _X); 
double __cdecl atan2(double _Y, double _X); 

double __cdecl cos(double _X); 
double __cdecl cosh(double _X); 
double __cdecl exp(double _X); 
double __cdecl fabs(double _X); 
double __cdecl fmod(double _X, double _Y); 
double __cdecl log(double _X); 
double __cdecl log10(double _X); 
double __cdecl pow(double _X, double _Y); 
double __cdecl sin(double _X); 
double __cdecl sinh(double _X); 
double __cdecl sqrt(double _X); 
double __cdecl tan(double _X); 
double __cdecl tanh(double _X); 

__declspec(dllimport) double __cdecl acosh(double _X); 
__declspec(dllimport) double __cdecl asinh(double _X); 
__declspec(dllimport) double __cdecl atanh(double _X); 
__declspec(dllimport) double __cdecl atof(const char * _String); 
__declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) double __cdecl _cabs(struct _complex _Complex_value); 
__declspec(dllimport) double __cdecl cbrt(double _X); 
__declspec(dllimport) double __cdecl ceil(double _X); 
__declspec(dllimport) double __cdecl _chgsign(double _X); 
__declspec(dllimport) double __cdecl copysign(double _Number, double _Sign); 
__declspec(dllimport) double __cdecl _copysign(double _Number, double _Sign); 
__declspec(dllimport) double __cdecl erf(double _X); 
__declspec(dllimport) double __cdecl erfc(double _X); 
__declspec(dllimport) double __cdecl exp2(double _X); 
__declspec(dllimport) double __cdecl expm1(double _X); 
__declspec(dllimport) double __cdecl fdim(double _X, double _Y); 
__declspec(dllimport) double __cdecl floor(double _X); 
__declspec(dllimport) double __cdecl fma(double _X, double _Y, double _Z); 
__declspec(dllimport) double __cdecl fmax(double _X, double _Y); 
__declspec(dllimport) double __cdecl fmin(double _X, double _Y); 
__declspec(dllimport) double __cdecl frexp(double _X, int * _Y); 
__declspec(dllimport) double __cdecl hypot(double _X, double _Y); 
__declspec(dllimport) double __cdecl _hypot(double _X, double _Y); 
__declspec(dllimport) int __cdecl ilogb(double _X); 
__declspec(dllimport) double __cdecl ldexp(double _X, int _Y); 
__declspec(dllimport) double __cdecl lgamma(double _X); 
__declspec(dllimport) __int64 __cdecl llrint(double _X); 
__declspec(dllimport) __int64 __cdecl llround(double _X); 
__declspec(dllimport) double __cdecl log1p(double _X); 
__declspec(dllimport) double __cdecl log2(double _X); 
__declspec(dllimport) double __cdecl logb(double _X); 
__declspec(dllimport) long __cdecl lrint(double _X); 
__declspec(dllimport) long __cdecl lround(double _X); 

int __cdecl _matherr(struct _exception * _Except); 

__declspec(dllimport) double __cdecl modf(double _X, double * _Y); 
__declspec(dllimport) double __cdecl nan(const char * _X); 
__declspec(dllimport) double __cdecl nearbyint(double _X); 
__declspec(dllimport) double __cdecl nextafter(double _X, double _Y); 
__declspec(dllimport) double __cdecl nexttoward(double _X, long double _Y); 
__declspec(dllimport) double __cdecl remainder(double _X, double _Y); 
__declspec(dllimport) double __cdecl remquo(double _X, double _Y, int * _Z); 
__declspec(dllimport) double __cdecl rint(double _X); 
__declspec(dllimport) double __cdecl round(double _X); 
__declspec(dllimport) double __cdecl scalbln(double _X, long _Y); 
__declspec(dllimport) double __cdecl scalbn(double _X, int _Y); 
__declspec(dllimport) double __cdecl tgamma(double _X); 
__declspec(dllimport) double __cdecl trunc(double _X); 
__declspec(dllimport) double __cdecl _j0(double _X); 
__declspec(dllimport) double __cdecl _j1(double _X); 
__declspec(dllimport) double __cdecl _jn(int _X, double _Y); 
__declspec(dllimport) double __cdecl _y0(double _X); 
__declspec(dllimport) double __cdecl _y1(double _X); 
__declspec(dllimport) double __cdecl _yn(int _X, double _Y); 

__declspec(dllimport) float __cdecl acoshf(float _X); 
__declspec(dllimport) float __cdecl asinhf(float _X); 
__declspec(dllimport) float __cdecl atanhf(float _X); 
__declspec(dllimport) float __cdecl cbrtf(float _X); 
__declspec(dllimport) float __cdecl _chgsignf(float _X); 
__declspec(dllimport) float __cdecl copysignf(float _Number, float _Sign); 
__declspec(dllimport) float __cdecl _copysignf(float _Number, float _Sign); 
__declspec(dllimport) float __cdecl erff(float _X); 
__declspec(dllimport) float __cdecl erfcf(float _X); 
__declspec(dllimport) float __cdecl expm1f(float _X); 
__declspec(dllimport) float __cdecl exp2f(float _X); 
__declspec(dllimport) float __cdecl fdimf(float _X, float _Y); 
__declspec(dllimport) float __cdecl fmaf(float _X, float _Y, float _Z); 
__declspec(dllimport) float __cdecl fmaxf(float _X, float _Y); 
__declspec(dllimport) float __cdecl fminf(float _X, float _Y); 
__declspec(dllimport) float __cdecl _hypotf(float _X, float _Y); 
__declspec(dllimport) int __cdecl ilogbf(float _X); 
__declspec(dllimport) float __cdecl lgammaf(float _X); 
__declspec(dllimport) __int64 __cdecl llrintf(float _X); 
__declspec(dllimport) __int64 __cdecl llroundf(float _X); 
__declspec(dllimport) float __cdecl log1pf(float _X); 
__declspec(dllimport) float __cdecl log2f(float _X); 
__declspec(dllimport) float __cdecl logbf(float _X); 
__declspec(dllimport) long __cdecl lrintf(float _X); 
__declspec(dllimport) long __cdecl lroundf(float _X); 
__declspec(dllimport) float __cdecl nanf(const char * _X); 
__declspec(dllimport) float __cdecl nearbyintf(float _X); 
__declspec(dllimport) float __cdecl nextafterf(float _X, float _Y); 
__declspec(dllimport) float __cdecl nexttowardf(float _X, long double _Y); 
__declspec(dllimport) float __cdecl remainderf(float _X, float _Y); 
__declspec(dllimport) float __cdecl remquof(float _X, float _Y, int * _Z); 
__declspec(dllimport) float __cdecl rintf(float _X); 
__declspec(dllimport) float __cdecl roundf(float _X); 
__declspec(dllimport) float __cdecl scalblnf(float _X, long _Y); 
__declspec(dllimport) float __cdecl scalbnf(float _X, int _Y); 
__declspec(dllimport) float __cdecl tgammaf(float _X); 
__declspec(dllimport) float __cdecl truncf(float _X); 



__declspec(dllimport) int __cdecl _set_SSE2_enable(int _Flag); 
#line 622 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
__inline float __cdecl acosf(float _X) 
{ 
return (float)acos(_X); 
} 

__inline float __cdecl asinf(float _X) 
{ 
return (float)asin(_X); 
} 

__inline float __cdecl atan2f(float _Y, float _X) 
{ 
return (float)atan2(_Y, _X); 
} 

__inline float __cdecl atanf(float _X) 
{ 
return (float)atan(_X); 
} 

__inline float __cdecl ceilf(float _X) 
{ 
return (float)ceil(_X); 
} 

__inline float __cdecl cosf(float _X) 
{ 
return (float)cos(_X); 
} 

__inline float __cdecl coshf(float _X) 
{ 
return (float)cosh(_X); 
} 

__inline float __cdecl expf(float _X) 
{ 
return (float)exp(_X); 
} 
#line 670 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
__inline float __cdecl fabsf(float _X) 
{ 
return (float)fabs(_X); 
} 
#line 684 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
__inline float __cdecl floorf(float _X) 
{ 
return (float)floor(_X); 
} 

__inline float __cdecl fmodf(float _X, float _Y) 
{ 
return (float)fmod(_X, _Y); 
} 
#line 696 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
__inline float __cdecl frexpf(float _X, int *_Y) 
{ 
return (float)frexp(_X, _Y); 
} 

__inline float __cdecl hypotf(float _X, float _Y) 
{ 
return _hypotf(_X, _Y); 
} 

__inline float __cdecl ldexpf(float _X, int _Y) 
{ 
return (float)ldexp(_X, _Y); 
} 
#line 725 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
__inline float __cdecl log10f(float _X) 
{ 
return (float)log10(_X); 
} 

__inline float __cdecl logf(float _X) 
{ 
return (float)log(_X); 
} 

__inline float __cdecl modff(float _X, float *_Y) 
{ 
double _F, _I; 
_F = modf(_X, &_I); 
*_Y = (float)_I; 
return (float)_F; 
} 

__inline float __cdecl powf(float _X, float _Y) 
{ 
return (float)pow(_X, _Y); 
} 

__inline float __cdecl sinf(float _X) 
{ 
return (float)sin(_X); 
} 

__inline float __cdecl sinhf(float _X) 
{ 
return (float)sinh(_X); 
} 

__inline float __cdecl sqrtf(float _X) 
{ 
return (float)sqrt(_X); 
} 

__inline float __cdecl tanf(float _X) 
{ 
return (float)tan(_X); 
} 

__inline float __cdecl tanhf(float _X) 
{ 
return (float)tanh(_X); 
} 
#line 775 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
__declspec(dllimport) long double __cdecl acoshl(long double _X); 

__inline long double __cdecl acosl(long double _X) 
{ 
return acos((double)_X); 
} 

__declspec(dllimport) long double __cdecl asinhl(long double _X); 

__inline long double __cdecl asinl(long double _X) 
{ 
return asin((double)_X); 
} 

__inline long double __cdecl atan2l(long double _Y, long double _X) 
{ 
return atan2((double)_Y, (double)_X); 
} 

__declspec(dllimport) long double __cdecl atanhl(long double _X); 

__inline long double __cdecl atanl(long double _X) 
{ 
return atan((double)_X); 
} 

__declspec(dllimport) long double __cdecl cbrtl(long double _X); 

__inline long double __cdecl ceill(long double _X) 
{ 
return ceil((double)_X); 
} 

__inline long double __cdecl _chgsignl(long double _X) 
{ 
return _chgsign((double)_X); 
} 

__declspec(dllimport) long double __cdecl copysignl(long double _Number, long double _Sign); 

__inline long double __cdecl _copysignl(long double _Number, long double _Sign) 
{ 
return _copysign((double)_Number, (double)_Sign); 
} 

__inline long double __cdecl coshl(long double _X) 
{ 
return cosh((double)_X); 
} 

__inline long double __cdecl cosl(long double _X) 
{ 
return cos((double)_X); 
} 

__declspec(dllimport) long double __cdecl erfl(long double _X); 
__declspec(dllimport) long double __cdecl erfcl(long double _X); 

__inline long double __cdecl expl(long double _X) 
{ 
return exp((double)_X); 
} 

__declspec(dllimport) long double __cdecl exp2l(long double _X); 
__declspec(dllimport) long double __cdecl expm1l(long double _X); 

__inline long double __cdecl fabsl(long double _X) 
{ 
return fabs((double)_X); 
} 

__declspec(dllimport) long double __cdecl fdiml(long double _X, long double _Y); 

__inline long double __cdecl floorl(long double _X) 
{ 
return floor((double)_X); 
} 

__declspec(dllimport) long double __cdecl fmal(long double _X, long double _Y, long double _Z); 
__declspec(dllimport) long double __cdecl fmaxl(long double _X, long double _Y); 
__declspec(dllimport) long double __cdecl fminl(long double _X, long double _Y); 

__inline long double __cdecl fmodl(long double _X, long double _Y) 
{ 
return fmod((double)_X, (double)_Y); 
} 

__inline long double __cdecl frexpl(long double _X, int *_Y) 
{ 
return frexp((double)_X, _Y); 
} 

__declspec(dllimport) int __cdecl ilogbl(long double _X); 

__inline long double __cdecl _hypotl(long double _X, long double _Y) 
{ 
return _hypot((double)_X, (double)_Y); 
} 

__inline long double __cdecl hypotl(long double _X, long double _Y) 
{ 
return _hypot((double)_X, (double)_Y); 
} 

__inline long double __cdecl ldexpl(long double _X, int _Y) 
{ 
return ldexp((double)_X, _Y); 
} 

__declspec(dllimport) long double __cdecl lgammal(long double _X); 
__declspec(dllimport) __int64 __cdecl llrintl(long double _X); 
__declspec(dllimport) __int64 __cdecl llroundl(long double _X); 

__inline long double __cdecl logl(long double _X) 
{ 
return log((double)_X); 
} 

__inline long double __cdecl log10l(long double _X) 
{ 
return log10((double)_X); 
} 

__declspec(dllimport) long double __cdecl log1pl(long double _X); 
__declspec(dllimport) long double __cdecl log2l(long double _X); 
__declspec(dllimport) long double __cdecl logbl(long double _X); 
__declspec(dllimport) long __cdecl lrintl(long double _X); 
__declspec(dllimport) long __cdecl lroundl(long double _X); 

__inline long double __cdecl modfl(long double _X, long double *_Y) 
{ 
double _F, _I; 
_F = modf((double)_X, &_I); 
*_Y = _I; 
return _F; 
} 

__declspec(dllimport) long double __cdecl nanl(const char * _X); 
__declspec(dllimport) long double __cdecl nearbyintl(long double _X); 
__declspec(dllimport) long double __cdecl nextafterl(long double _X, long double _Y); 
__declspec(dllimport) long double __cdecl nexttowardl(long double _X, long double _Y); 

__inline long double __cdecl powl(long double _X, long double _Y) 
{ 
return pow((double)_X, (double)_Y); 
} 

__declspec(dllimport) long double __cdecl remainderl(long double _X, long double _Y); 
__declspec(dllimport) long double __cdecl remquol(long double _X, long double _Y, int * _Z); 
__declspec(dllimport) long double __cdecl rintl(long double _X); 
__declspec(dllimport) long double __cdecl roundl(long double _X); 
__declspec(dllimport) long double __cdecl scalblnl(long double _X, long _Y); 
__declspec(dllimport) long double __cdecl scalbnl(long double _X, int _Y); 

__inline long double __cdecl sinhl(long double _X) 
{ 
return sinh((double)_X); 
} 

__inline long double __cdecl sinl(long double _X) 
{ 
return sin((double)_X); 
} 

__inline long double __cdecl sqrtl(long double _X) 
{ 
return sqrt((double)_X); 
} 

__inline long double __cdecl tanhl(long double _X) 
{ 
return tanh((double)_X); 
} 

__inline long double __cdecl tanl(long double _X) 
{ 
return tan((double)_X); 
} 

__declspec(dllimport) long double __cdecl tgammal(long double _X); 
__declspec(dllimport) long double __cdecl truncl(long double _X); 
#line 976 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
extern double HUGE; 
#line 981 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j0. See online help for details.")) __declspec(dllimport) double __cdecl j0(double _X); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j1. See online help for details.")) __declspec(dllimport) double __cdecl j1(double _X); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _jn. See online help for details.")) __declspec(dllimport) double __cdecl jn(int _X, double _Y); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y0. See online help for details.")) __declspec(dllimport) double __cdecl y0(double _X); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y1. See online help for details.")) __declspec(dllimport) double __cdecl y1(double _X); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _yn. See online help for details.")) __declspec(dllimport) double __cdecl yn(int _X, double _Y); 
#line 992 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_math.h"
/* Removed pragma: #pragma warning(pop)*/

__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_malloc.h"
__pragma( pack ( push, 8 )) 
#line 55 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_malloc.h"
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl _calloc_base(size_t _Count, size_t _Size); 
#line 62
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl calloc(size_t _Count, size_t _Size); 
#line 68
__declspec(dllimport) int __cdecl _callnewh(size_t _Size); 
#line 74
__declspec(dllimport) __declspec(allocator) void *__cdecl _expand(void * _Block, size_t _Size); 
#line 80
__declspec(dllimport) void __cdecl _free_base(void * _Block); 




__declspec(dllimport) void __cdecl free(void * _Block); 
#line 91
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl _malloc_base(size_t _Size); 
#line 97
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl malloc(size_t _Size); 
#line 103
__declspec(dllimport) size_t __cdecl _msize_base(void * _Block); 
#line 109
__declspec(dllimport) size_t __cdecl _msize(void * _Block); 
#line 115
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl _realloc_base(void * _Block, size_t _Size); 
#line 122
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl realloc(void * _Block, size_t _Size); 
#line 129
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl _recalloc_base(void * _Block, size_t _Count, size_t _Size); 
#line 137
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl _recalloc(void * _Block, size_t _Count, size_t _Size); 
#line 144
__declspec(dllimport) void __cdecl _aligned_free(void * _Block); 
#line 150
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl _aligned_malloc(size_t _Size, size_t _Alignment); 
#line 157
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl _aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset); 
#line 165
__declspec(dllimport) size_t __cdecl _aligned_msize(void * _Block, size_t _Alignment, size_t _Offset); 
#line 173
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl _aligned_offset_realloc(void * _Block, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 182
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl _aligned_offset_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 192
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl _aligned_realloc(void * _Block, size_t _Size, size_t _Alignment); 
#line 200
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl _aligned_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment); 
#line 228 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_malloc.h"
__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stddef.h"
__pragma( pack ( push, 8 )) 
#line 31
__declspec(dllimport) int *__cdecl _errno(void); 


__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 
#line 51 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stddef.h"
__declspec(dllimport) extern unsigned long __cdecl __threadid(void); 

__declspec(dllimport) extern uintptr_t __cdecl __threadhandle(void); 



__pragma( pack ( pop )) 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_search.h"
__pragma( pack ( push, 8 )) 


typedef int (__cdecl *_CoreCrtSecureSearchSortCompareFunction)(void *, const void *, const void *); 
typedef int (__cdecl *_CoreCrtNonSecureSearchSortCompareFunction)(const void *, const void *); 
#line 26
__declspec(dllimport) void *__cdecl bsearch_s(const void * _Key, const void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 35
__declspec(dllimport) void __cdecl qsort_s(void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 48 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_search.h"
__declspec(dllimport) void *__cdecl bsearch(const void * _Key, const void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 56
__declspec(dllimport) void __cdecl qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 64
__declspec(dllimport) void *__cdecl _lfind_s(const void * _Key, const void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 74
__declspec(dllimport) void *__cdecl _lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 83
__declspec(dllimport) void *__cdecl _lsearch_s(const void * _Key, void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 93
__declspec(dllimport) void *__cdecl _lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 191 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_search.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lfind. See online help for details." "")) __declspec(dllimport) void *__cdecl lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 200
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lsearch. See online help for detail" "s.")) __declspec(dllimport) void *__cdecl lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 212 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_search.h"
__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
__pragma( pack ( push, 8 )) 
#line 50
__declspec(dllimport) errno_t __cdecl _itow_s(int _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 64 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _itow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) wchar_t *__cdecl _itow(int _Value, wchar_t * _Buffer, int _Radix); 
#line 73 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) errno_t __cdecl _ltow_s(long _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 87 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _ltow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) wchar_t *__cdecl _ltow(long _Value, wchar_t * _Buffer, int _Radix); 
#line 95 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) errno_t __cdecl _ultow_s(unsigned long _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 109 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _ultow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) wchar_t *__cdecl _ultow(unsigned long _Value, wchar_t * _Buffer, int _Radix); 
#line 117 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) double __cdecl wcstod(const wchar_t * _String, wchar_t ** _EndPtr); 
#line 123
__declspec(dllimport) double __cdecl _wcstod_l(const wchar_t * _String, wchar_t ** _EndPtr, _locale_t _Locale); 
#line 130
__declspec(dllimport) long __cdecl wcstol(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 137
__declspec(dllimport) long __cdecl _wcstol_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 145
__declspec(dllimport) __int64 __cdecl wcstoll(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 152
__declspec(dllimport) __int64 __cdecl _wcstoll_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 160
__declspec(dllimport) unsigned long __cdecl wcstoul(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 167
__declspec(dllimport) unsigned long __cdecl _wcstoul_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 175
__declspec(dllimport) unsigned __int64 __cdecl wcstoull(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 182
__declspec(dllimport) unsigned __int64 __cdecl _wcstoull_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 190
__declspec(dllimport) long double __cdecl wcstold(const wchar_t * _String, wchar_t ** _EndPtr); 
#line 196
__declspec(dllimport) long double __cdecl _wcstold_l(const wchar_t * _String, wchar_t ** _EndPtr, _locale_t _Locale); 
#line 203
__declspec(dllimport) float __cdecl wcstof(const wchar_t * _String, wchar_t ** _EndPtr); 
#line 209
__declspec(dllimport) float __cdecl _wcstof_l(const wchar_t * _String, wchar_t ** _EndPtr, _locale_t _Locale); 
#line 216
__declspec(dllimport) double __cdecl _wtof(const wchar_t * _String); 




__declspec(dllimport) double __cdecl _wtof_l(const wchar_t * _String, _locale_t _Locale); 
#line 227
__declspec(dllimport) int __cdecl _wtoi(const wchar_t * _String); 




__declspec(dllimport) int __cdecl _wtoi_l(const wchar_t * _String, _locale_t _Locale); 
#line 238
__declspec(dllimport) long __cdecl _wtol(const wchar_t * _String); 




__declspec(dllimport) long __cdecl _wtol_l(const wchar_t * _String, _locale_t _Locale); 
#line 249
__declspec(dllimport) __int64 __cdecl _wtoll(const wchar_t * _String); 




__declspec(dllimport) __int64 __cdecl _wtoll_l(const wchar_t * _String, _locale_t _Locale); 
#line 260
__declspec(dllimport) errno_t __cdecl _i64tow_s(__int64 _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 268
__declspec(deprecated("This function or variable may be unsafe. Consider using _i64tow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t *__cdecl _i64tow(__int64 _Value, wchar_t * _Buffer, int _Radix); 
#line 275
__declspec(dllimport) errno_t __cdecl _ui64tow_s(unsigned __int64 _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 283
__declspec(deprecated("This function or variable may be unsafe. Consider using _ui64tow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) wchar_t *__cdecl _ui64tow(unsigned __int64 _Value, wchar_t * _Buffer, int _Radix); 
#line 290
__declspec(dllimport) __int64 __cdecl _wtoi64(const wchar_t * _String); 




__declspec(dllimport) __int64 __cdecl _wtoi64_l(const wchar_t * _String, _locale_t _Locale); 
#line 301
__declspec(dllimport) __int64 __cdecl _wcstoi64(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 308
__declspec(dllimport) __int64 __cdecl _wcstoi64_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 316
__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 323
__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 335
__declspec(dllimport) __declspec(allocator) wchar_t *__cdecl _wfullpath(wchar_t * _Buffer, const wchar_t * _Path, size_t _BufferCount); 
#line 344
__declspec(dllimport) errno_t __cdecl _wmakepath_s(wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Drive, const wchar_t * _Dir, const wchar_t * _Filename, const wchar_t * _Ext); 
#line 362 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 28719) /* Removed pragma: #pragma warning(disable: 28719)*/
#pragma warning(disable: 28726) /* Removed pragma: #pragma warning(disable: 28726)*/
__declspec(deprecated("This function or variable may be unsafe. Consider using _wmakepath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) void __cdecl _wmakepath(wchar_t * _Buffer, const wchar_t * _Drive, const wchar_t * _Dir, const wchar_t * _Filename, const wchar_t * _Ext); 
#line 373 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
/* Removed pragma: #pragma warning(pop)*/

__declspec(dllimport) void __cdecl _wperror(const wchar_t * _ErrorMessage); 




__declspec(deprecated("This function or variable may be unsafe. Consider using _wsplitpath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) void __cdecl _wsplitpath(const wchar_t * _FullPath, wchar_t * _Drive, wchar_t * _Dir, wchar_t * _Filename, wchar_t * _Ext); 
#line 388
__declspec(dllimport) errno_t __cdecl _wsplitpath_s(const wchar_t * _FullPath, wchar_t * _Drive, size_t _DriveCount, wchar_t * _Dir, size_t _DirCount, wchar_t * _Filename, size_t _FilenameCount, wchar_t * _Ext, size_t _ExtCount); 
#line 409 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) errno_t __cdecl _wdupenv_s(wchar_t ** _Buffer, size_t * _BufferCount, const wchar_t * _VarName); 
#line 418
__declspec(deprecated("This function or variable may be unsafe. Consider using _wdupenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) wchar_t *__cdecl _wgetenv(const wchar_t * _VarName); 
#line 424
__declspec(dllimport) errno_t __cdecl _wgetenv_s(size_t * _RequiredCount, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _VarName); 
#line 440 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) int __cdecl _wputenv(const wchar_t * _EnvString); 




__declspec(dllimport) errno_t __cdecl _wputenv_s(const wchar_t * _Name, const wchar_t * _Value); 




__declspec(dllimport) errno_t __cdecl _wsearchenv_s(const wchar_t * _Filename, const wchar_t * _VarName, wchar_t * _Buffer, size_t _BufferCount); 
#line 464 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _wsearchenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) void __cdecl _wsearchenv(const wchar_t * _Filename, const wchar_t * _VarName, wchar_t * _ResultPath); 
#line 471 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
__declspec(dllimport) int __cdecl _wsystem(const wchar_t * _Command); 
#line 479 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstdlib.h"
__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\limits.h"
__pragma( pack ( push, 8 )) 
#line 88 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\limits.h"
__pragma( pack ( pop )) 
#line 18 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__pragma( pack ( push, 8 )) 
#line 34 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) void __cdecl _swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 52
__declspec(dllimport) __declspec(noreturn) void __cdecl exit(int _Code); 
__declspec(dllimport) __declspec(noreturn) void __cdecl _exit(int _Code); 
__declspec(dllimport) __declspec(noreturn) void __cdecl _Exit(int _Code); 
__declspec(dllimport) __declspec(noreturn) void __cdecl quick_exit(int _Code); 
__declspec(dllimport) __declspec(noreturn) void __cdecl abort(void); 
#line 63 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) unsigned __cdecl _set_abort_behavior(unsigned _Flags, unsigned _Mask); 
#line 73
typedef int (__cdecl *_onexit_t)(void); 
#line 140 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
int __cdecl atexit(void (__cdecl *)(void)); 
_onexit_t __cdecl _onexit(_onexit_t _Func); 
#line 144 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
int __cdecl at_quick_exit(void (__cdecl *)(void)); 
#line 155
typedef void (__cdecl *_purecall_handler)(void); 


typedef void (__cdecl *_invalid_parameter_handler)(const wchar_t *, const wchar_t *, const wchar_t *, unsigned, uintptr_t); 
#line 167
_purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler); 



_purecall_handler __cdecl _get_purecall_handler(void); 


__declspec(dllimport) _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler); 



__declspec(dllimport) _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void); 

__declspec(dllimport) _invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(_invalid_parameter_handler _Handler); 



__declspec(dllimport) _invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(void); 
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl _set_error_mode(int _Mode); 




__declspec(dllimport) int *__cdecl _errno(void); 


__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 

__declspec(dllimport) unsigned long *__cdecl __doserrno(void); 


__declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); 
__declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); 


__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using strerror instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) char **__cdecl __sys_errlist(void); 


__declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using strerror instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) int *__cdecl __sys_nerr(void); 


__declspec(dllimport) void __cdecl perror(const char * _ErrMsg); 
#line 238 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _get_pgmptr instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) char **__cdecl __p__pgmptr(void); 
__declspec(deprecated("This function or variable may be unsafe. Consider using _get_wpgmptr instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) wchar_t **__cdecl __p__wpgmptr(void); 
__declspec(deprecated("This function or variable may be unsafe. Consider using _get_fmode instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) int *__cdecl __p__fmode(void); 
#line 255 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _get_pgmptr(char ** _Value); 


__declspec(dllimport) errno_t __cdecl _get_wpgmptr(wchar_t ** _Value); 

__declspec(dllimport) errno_t __cdecl _set_fmode(int _Mode); 

__declspec(dllimport) errno_t __cdecl _get_fmode(int * _PMode); 
#line 275
typedef 
#line 271
struct _div_t { 

int quot; 
int rem; 
} div_t; 
#line 281
typedef 
#line 277
struct _ldiv_t { 

long quot; 
long rem; 
} ldiv_t; 
#line 287
typedef 
#line 283
struct _lldiv_t { 

__int64 quot; 
__int64 rem; 
} lldiv_t; 

int __cdecl abs(int _Number); 
long __cdecl labs(long _Number); 
__int64 __cdecl llabs(__int64 _Number); 
__int64 __cdecl _abs64(__int64 _Number); 

unsigned short __cdecl _byteswap_ushort(unsigned short _Number); 
unsigned long __cdecl _byteswap_ulong(unsigned long _Number); 
unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Number); 

__declspec(dllimport) div_t __cdecl div(int _Numerator, int _Denominator); 
__declspec(dllimport) ldiv_t __cdecl ldiv(long _Numerator, long _Denominator); 
__declspec(dllimport) lldiv_t __cdecl lldiv(__int64 _Numerator, __int64 _Denominator); 



/* Removed pragma: #pragma warning (push)*/
#pragma warning(disable: 6540) /* Removed pragma: #pragma warning (disable:6540)*/

unsigned __cdecl _rotl(unsigned _Value, int _Shift); 
#line 313
unsigned long __cdecl _lrotl(unsigned long _Value, int _Shift); 




unsigned __int64 __cdecl _rotl64(unsigned __int64 _Value, int _Shift); 




unsigned __cdecl _rotr(unsigned _Value, int _Shift); 
#line 329
unsigned long __cdecl _lrotr(unsigned long _Value, int _Shift); 




unsigned __int64 __cdecl _rotr64(unsigned __int64 _Value, int _Shift); 




/* Removed pragma: #pragma warning (pop)*/
#line 346
__declspec(dllimport) void __cdecl srand(unsigned _Seed); 

__declspec(dllimport) int __cdecl rand(void); 
#line 390 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
#pragma pack ( push, 4 )



typedef 
#line 392
struct { 
unsigned char ld[10]; 
} _LDOUBLE; 
#pragma pack ( pop )
#line 414 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
typedef 
#line 412
struct { 
double x; 
} _CRT_DOUBLE; 




typedef 
#line 417
struct { 
float f; 
} _CRT_FLOAT; 
#line 428
typedef 
#line 426
struct { 
long double x; 
} _LONGDOUBLE; 



#pragma pack ( push, 4 )



typedef 
#line 434
struct { 
unsigned char ld12[12]; 
} _LDBL12; 
#pragma pack ( pop )
#line 446
__declspec(dllimport) double __cdecl atof(const char * _String); 
__declspec(dllimport) int __cdecl atoi(const char * _String); 
__declspec(dllimport) long __cdecl atol(const char * _String); 
__declspec(dllimport) __int64 __cdecl atoll(const char * _String); 
__declspec(dllimport) __int64 __cdecl _atoi64(const char * _String); 

__declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) int __cdecl _atoi_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) long __cdecl _atol_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) __int64 __cdecl _atoll_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) __int64 __cdecl _atoi64_l(const char * _String, _locale_t _Locale); 

__declspec(dllimport) int __cdecl _atoflt(_CRT_FLOAT * _Result, const char * _String); 
__declspec(dllimport) int __cdecl _atodbl(_CRT_DOUBLE * _Result, char * _String); 
__declspec(dllimport) int __cdecl _atoldbl(_LDOUBLE * _Result, char * _String); 


__declspec(dllimport) int __cdecl _atoflt_l(_CRT_FLOAT * _Result, const char * _String, _locale_t _Locale); 
#line 470
__declspec(dllimport) int __cdecl _atodbl_l(_CRT_DOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 478
__declspec(dllimport) int __cdecl _atoldbl_l(_LDOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 485
__declspec(dllimport) float __cdecl strtof(const char * _String, char ** _EndPtr); 
#line 491
__declspec(dllimport) float __cdecl _strtof_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 498
__declspec(dllimport) double __cdecl strtod(const char * _String, char ** _EndPtr); 
#line 504
__declspec(dllimport) double __cdecl _strtod_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 511
__declspec(dllimport) long double __cdecl strtold(const char * _String, char ** _EndPtr); 
#line 517
__declspec(dllimport) long double __cdecl _strtold_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 524
__declspec(dllimport) long __cdecl strtol(const char * _String, char ** _EndPtr, int _Radix); 
#line 531
__declspec(dllimport) long __cdecl _strtol_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 539
__declspec(dllimport) __int64 __cdecl strtoll(const char * _String, char ** _EndPtr, int _Radix); 
#line 546
__declspec(dllimport) __int64 __cdecl _strtoll_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 554
__declspec(dllimport) unsigned long __cdecl strtoul(const char * _String, char ** _EndPtr, int _Radix); 
#line 561
__declspec(dllimport) unsigned long __cdecl _strtoul_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 569
__declspec(dllimport) unsigned __int64 __cdecl strtoull(const char * _String, char ** _EndPtr, int _Radix); 
#line 576
__declspec(dllimport) unsigned __int64 __cdecl _strtoull_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 584
__declspec(dllimport) __int64 __cdecl _strtoi64(const char * _String, char ** _EndPtr, int _Radix); 
#line 591
__declspec(dllimport) __int64 __cdecl _strtoi64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 599
__declspec(dllimport) unsigned __int64 __cdecl _strtoui64(const char * _String, char ** _EndPtr, int _Radix); 
#line 606
__declspec(dllimport) unsigned __int64 __cdecl _strtoui64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 622
__declspec(dllimport) errno_t __cdecl _itoa_s(int _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 637 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 28719) /* Removed pragma: #pragma warning(disable: 28719)*/
#pragma warning(disable: 28726) /* Removed pragma: #pragma warning(disable: 28726)*/
__declspec(deprecated("This function or variable may be unsafe. Consider using _itoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl _itoa(int _Value, char * _Buffer, int _Radix); 
#line 646 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
/* Removed pragma: #pragma warning(pop)*/



__declspec(dllimport) errno_t __cdecl _ltoa_s(long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 664 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _ltoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl _ltoa(long _Value, char * _Buffer, int _Radix); 
#line 673 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _ultoa_s(unsigned long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 687 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 28726) /* Removed pragma: #pragma warning(disable: 28726)*/
__declspec(deprecated("This function or variable may be unsafe. Consider using _ultoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) char *__cdecl _ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 695 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
/* Removed pragma: #pragma warning(pop)*/



__declspec(dllimport) errno_t __cdecl _i64toa_s(__int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 708
__declspec(deprecated("This function or variable may be unsafe. Consider using _i64toa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char *__cdecl _i64toa(__int64 _Value, char * _Buffer, int _Radix); 
#line 716
__declspec(dllimport) errno_t __cdecl _ui64toa_s(unsigned __int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 724
__declspec(deprecated("This function or variable may be unsafe. Consider using _ui64toa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) char *__cdecl _ui64toa(unsigned __int64 _Value, char * _Buffer, int _Radix); 
#line 744
__declspec(dllimport) errno_t __cdecl _ecvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 763 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _ecvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl _ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 772
__declspec(dllimport) errno_t __cdecl _fcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 793 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _fcvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl _fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 801
__declspec(dllimport) errno_t __cdecl _gcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount); 
#line 817 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _gcvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl _gcvt(double _Value, int _DigitCount, char * _Buffer); 
#line 846 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl ___mb_cur_max_func(void); 


__declspec(dllimport) int __cdecl ___mb_cur_max_l_func(_locale_t _Locale); 
#line 855 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl mblen(const char * _Ch, size_t _MaxCount); 
#line 861
__declspec(dllimport) int __cdecl _mblen_l(const char * _Ch, size_t _MaxCount, _locale_t _Locale); 
#line 869
__declspec(dllimport) size_t __cdecl _mbstrlen(const char * _String); 
#line 875
__declspec(dllimport) size_t __cdecl _mbstrlen_l(const char * _String, _locale_t _Locale); 
#line 882
__declspec(dllimport) size_t __cdecl _mbstrnlen(const char * _String, size_t _MaxCount); 
#line 889
__declspec(dllimport) size_t __cdecl _mbstrnlen_l(const char * _String, size_t _MaxCount, _locale_t _Locale); 
#line 896
__declspec(dllimport) int __cdecl mbtowc(wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes); 
#line 903
__declspec(dllimport) int __cdecl _mbtowc_l(wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale); 
#line 911
__declspec(dllimport) errno_t __cdecl mbstowcs_s(size_t * _PtNumOfCharConverted, wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount); 
#line 927 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using mbstowcs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) size_t __cdecl mbstowcs(wchar_t * _Dest, const char * _Source, size_t _MaxCount); 
#line 935 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _mbstowcs_s_l(size_t * _PtNumOfCharConverted, wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount, _locale_t _Locale); 
#line 953 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _mbstowcs_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) size_t __cdecl _mbstowcs_l(wchar_t * _Dest, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 966 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using wctomb_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) int __cdecl wctomb(char * _MbCh, wchar_t _WCh); 
#line 972
__declspec(deprecated("This function or variable may be unsafe. Consider using _wctomb_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) int __cdecl _wctomb_l(char * _MbCh, wchar_t _WCh, _locale_t _Locale); 
#line 981
__declspec(dllimport) errno_t __cdecl wctomb_s(int * _SizeConverted, char * _MbCh, rsize_t _SizeInBytes, wchar_t _WCh); 
#line 991 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _wctomb_s_l(int * _SizeConverted, char * _MbCh, size_t _SizeInBytes, wchar_t _WCh, _locale_t _Locale); 
#line 999
__declspec(dllimport) errno_t __cdecl wcstombs_s(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const wchar_t * _Src, size_t _MaxCountInBytes); 
#line 1015 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using wcstombs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) size_t __cdecl wcstombs(char * _Dest, const wchar_t * _Source, size_t _MaxCount); 
#line 1023 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _wcstombs_s_l(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const wchar_t * _Src, size_t _MaxCountInBytes, _locale_t _Locale); 
#line 1041 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _wcstombs_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) size_t __cdecl _wcstombs_l(char * _Dest, const wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 1071 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) __declspec(allocator) char *__cdecl _fullpath(char * _Buffer, const char * _Path, size_t _BufferCount); 
#line 1080
__declspec(dllimport) errno_t __cdecl _makepath_s(char * _Buffer, size_t _BufferCount, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1098 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 28719) /* Removed pragma: #pragma warning(disable: 28719)*/
#pragma warning(disable: 28726) /* Removed pragma: #pragma warning(disable: 28726)*/
__declspec(deprecated("This function or variable may be unsafe. Consider using _makepath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) void __cdecl _makepath(char * _Buffer, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1109 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
/* Removed pragma: #pragma warning(pop)*/


__declspec(deprecated("This function or variable may be unsafe. Consider using _splitpath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) void __cdecl _splitpath(const char * _FullPath, char * _Drive, char * _Dir, char * _Filename, char * _Ext); 
#line 1121
__declspec(dllimport) errno_t __cdecl _splitpath_s(const char * _FullPath, char * _Drive, size_t _DriveCount, char * _Dir, size_t _DirCount, char * _Filename, size_t _FilenameCount, char * _Ext, size_t _ExtCount); 
#line 1139
__declspec(dllimport) errno_t __cdecl getenv_s(size_t * _RequiredCount, char * _Buffer, rsize_t _BufferCount, const char * _VarName); 
#line 1151 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) int *__cdecl __p___argc(void); 
__declspec(dllimport) char ***__cdecl __p___argv(void); 
__declspec(dllimport) wchar_t ***__cdecl __p___wargv(void); 
#line 1165 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) char ***__cdecl __p__environ(void); 
__declspec(dllimport) wchar_t ***__cdecl __p__wenviron(void); 
#line 1191 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _dupenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char *__cdecl getenv(const char * _VarName); 
#line 1208 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) errno_t __cdecl _dupenv_s(char ** _Buffer, size_t * _BufferCount, const char * _VarName); 
#line 1218 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(dllimport) int __cdecl system(const char * _Command); 





/* Removed pragma: #pragma warning (push)*/
#pragma warning(disable: 6540) /* Removed pragma: #pragma warning (disable:6540)*/


__declspec(dllimport) int __cdecl _putenv(const char * _EnvString); 




__declspec(dllimport) errno_t __cdecl _putenv_s(const char * _Name, const char * _Value); 




/* Removed pragma: #pragma warning (pop)*/

__declspec(dllimport) errno_t __cdecl _searchenv_s(const char * _Filename, const char * _VarName, char * _Buffer, size_t _BufferCount); 
#line 1254 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _searchenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) void __cdecl _searchenv(const char * _Filename, const char * _VarName, char * _Buffer); 
#line 1263 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode in" "stead. See online help for details.")) __declspec(dllimport) void __cdecl _seterrormode(int _Mode); 




__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. S" "ee online help for details.")) __declspec(dllimport) void __cdecl _beep(unsigned _Frequency, unsigned _Duration); 
#line 1274
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. " "See online help for details.")) __declspec(dllimport) void __cdecl _sleep(unsigned long _Duration); 
#line 1296 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4141) /* Removed pragma: #pragma warning(disable: 4141)*/


__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ecvt. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _ecvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 1308
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcvt. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _fcvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 1316
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _gcvt. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _fcvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl gcvt(double _Value, int _DigitCount, char * _DstBuf); 
#line 1323
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _itoa. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _itoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl itoa(int _Value, char * _Buffer, int _Radix); 
#line 1330
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ltoa. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _ltoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl ltoa(long _Value, char * _Buffer, int _Radix); 
#line 1338
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _swab. See online help for details.")) __declspec(dllimport) void __cdecl swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 1345
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ultoa. See online help for details." "")) __declspec(deprecated("This function or variable may be unsafe. Consider using _ultoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) char *__cdecl ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 1354
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putenv. See online help for details" ".")) __declspec(dllimport) int __cdecl putenv(const char * _EnvString); 



/* Removed pragma: #pragma warning(pop)*/

_onexit_t __cdecl onexit(_onexit_t _Func); 
#line 1366 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdlib.h"
__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\errno.h"
__pragma( pack ( push, 8 )) 




__declspec(dllimport) int *__cdecl _errno(void); 


__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 

__declspec(dllimport) unsigned long *__cdecl __doserrno(void); 


__declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); 
__declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 130 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\errno.h"
__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vcruntime_string.h"
__pragma( pack ( push, 8 )) 




void *__cdecl memchr(const void * _Buf, int _Val, size_t _MaxCount); 
#line 26
int __cdecl memcmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 40 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vcruntime_string.h"
void *__cdecl memcpy(void * _Dst, const void * _Src, size_t _Size); 
#line 47
void *__cdecl memmove(void * _Dst, const void * _Src, size_t _Size); 
#line 60 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\vcruntime_string.h"
void *__cdecl memset(void * _Dst, int _Val, size_t _Size); 
#line 67
char *__cdecl strchr(const char * _Str, int _Val); 
#line 73
char *__cdecl strrchr(const char * _Str, int _Ch); 
#line 79
char *__cdecl strstr(const char * _Str, const char * _SubStr); 
#line 86
wchar_t *__cdecl wcschr(const wchar_t * _Str, wchar_t _Ch); 
#line 92
wchar_t *__cdecl wcsrchr(const wchar_t * _Str, wchar_t _Ch); 
#line 99
wchar_t *__cdecl wcsstr(const wchar_t * _Str, const wchar_t * _SubStr); 
#line 106
__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_memcpy_s.h"
__pragma( pack ( push, 8 )) 
#line 35 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_memcpy_s.h"
static __inline errno_t __cdecl memcpy_s(void *const 
_Destination, const rsize_t 
_DestinationSize, const void *const 
_Source, const rsize_t 
_SourceSize) 

{ 
if (_SourceSize == 0) 
{ 
return 0; 
}  

{ int _Expr_val = !(!(_Destination != ((void *)0))); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
if (_Source == ((void *)0) || _DestinationSize < _SourceSize) 
{ 
memset(_Destination, 0, _DestinationSize); 

{ int _Expr_val = !(!(_Source != ((void *)0))); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!(_Expr_val)) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 


return 22; 
}  

memcpy(_Destination, _Source, _SourceSize); 
return 0; 
} 


static __inline errno_t __cdecl memmove_s(void *const 
_Destination, const rsize_t 
_DestinationSize, const void *const 
_Source, const rsize_t 
_SourceSize) 

{ 
if (_SourceSize == 0) 
{ 
return 0; 
}  

{ int _Expr_val = !(!(_Destination != ((void *)0))); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
{ int _Expr_val = !(!(_Source != ((void *)0))); if (!(_Expr_val)) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!(_Expr_val)) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 

memmove(_Destination, _Source, _SourceSize); 
return 0; 
} 
#line 88 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_memcpy_s.h"
__pragma( pack ( pop )) 
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_memory.h"
__pragma( pack ( push, 8 )) 




__declspec(dllimport) int __cdecl _memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 31
__declspec(dllimport) int __cdecl _memicmp_l(const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale); 
#line 79 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_memory.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memccpy. See online help for detail" "s.")) __declspec(dllimport) void *__cdecl memccpy(void * _Dst, const void * _Src, int _Val, size_t _Size); 
#line 87
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memicmp. See online help for detail" "s.")) __declspec(dllimport) int __cdecl memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 114 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_memory.h"
__pragma( pack ( pop )) 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__pragma( pack ( push, 8 )) 
#line 28
__declspec(dllimport) errno_t __cdecl wcscat_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source); 
#line 35
__declspec(dllimport) errno_t __cdecl wcscpy_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source); 
#line 42
__declspec(dllimport) errno_t __cdecl wcsncat_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source, rsize_t _MaxCount); 
#line 50
__declspec(dllimport) errno_t __cdecl wcsncpy_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source, rsize_t _MaxCount); 
#line 58
__declspec(dllimport) wchar_t *__cdecl wcstok_s(wchar_t * _String, const wchar_t * _Delimiter, wchar_t ** _Context); 
#line 79 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) __declspec(allocator) wchar_t *__cdecl _wcsdup(const wchar_t * _String); 
#line 97 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 28719) /* Removed pragma: #pragma warning(disable: 28719)*/
#pragma warning(disable: 28726) /* Removed pragma: #pragma warning(disable: 28726)*/
__declspec(deprecated("This function or variable may be unsafe. Consider using wcscat_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) wchar_t *__cdecl wcscat(wchar_t * _Destination, const wchar_t * _Source); 
#line 105 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
/* Removed pragma: #pragma warning(pop)*/
#line 109 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) int __cdecl wcscmp(const wchar_t * _String1, const wchar_t * _String2); 
#line 120 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 28719) /* Removed pragma: #pragma warning(disable: 28719)*/
#pragma warning(disable: 28726) /* Removed pragma: #pragma warning(disable: 28726)*/
__declspec(deprecated("This function or variable may be unsafe. Consider using wcscpy_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) wchar_t *__cdecl wcscpy(wchar_t * _Destination, const wchar_t * _Source); 
#line 128 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
/* Removed pragma: #pragma warning(pop)*/


__declspec(dllimport) size_t __cdecl wcscspn(const wchar_t * _String, const wchar_t * _Control); 
#line 137
__declspec(dllimport) size_t __cdecl wcslen(const wchar_t * _String); 
#line 150 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) size_t __cdecl wcsnlen(const wchar_t * _Source, size_t _MaxCount); 
#line 166 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
static __inline size_t __cdecl wcsnlen_s(const wchar_t *
_Source, size_t 
_MaxCount) 

{ 
return (_Source == 0) ? 0 : (wcsnlen(_Source, _MaxCount)); 
} 
#line 183 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using wcsncat_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t *__cdecl wcsncat(wchar_t * _Destination, const wchar_t * _Source, size_t _Count); 
#line 192 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) int __cdecl wcsncmp(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 205 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using wcsncpy_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t *__cdecl wcsncpy(wchar_t * _Destination, const wchar_t * _Source, size_t _Count); 
#line 214 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) wchar_t *__cdecl wcspbrk(const wchar_t * _String, const wchar_t * _Control); 
#line 220
__declspec(dllimport) size_t __cdecl wcsspn(const wchar_t * _String, const wchar_t * _Control); 
#line 226
__declspec(deprecated("This function or variable may be unsafe. Consider using wcstok_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) wchar_t *__cdecl wcstok(wchar_t * _String, const wchar_t * _Delimiter, wchar_t ** _Context); 
#line 243 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 4141 4996) /* Removed pragma: #pragma warning(disable: 4141 4996)*/
#pragma warning(disable: 28719 28726 28727) /* Removed pragma: #pragma warning(disable: 28719 28726 28727)*/

__declspec(deprecated("This function or variable may be unsafe. Consider using wcstok_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) static __inline wchar_t *__cdecl _wcstok(wchar_t *const 
_String, const wchar_t *const 
_Delimiter) 

{ 
return wcstok(_String, _Delimiter, 0); 
} 
#line 270 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
/* Removed pragma: #pragma warning(pop)*/
#line 278 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _wcserror_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) wchar_t *__cdecl _wcserror(int _ErrorNumber); 




__declspec(dllimport) errno_t __cdecl _wcserror_s(wchar_t * _Buffer, size_t _SizeInWords, int _ErrorNumber); 
#line 298 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using __wcserror_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) wchar_t *__cdecl __wcserror(const wchar_t * _String); 



__declspec(dllimport) errno_t __cdecl __wcserror_s(wchar_t * _Buffer, size_t _SizeInWords, const wchar_t * _ErrorMessage); 
#line 314 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) int __cdecl _wcsicmp(const wchar_t * _String1, const wchar_t * _String2); 




__declspec(dllimport) int __cdecl _wcsicmp_l(const wchar_t * _String1, const wchar_t * _String2, _locale_t _Locale); 
#line 325
__declspec(dllimport) int __cdecl _wcsnicmp(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 331
__declspec(dllimport) int __cdecl _wcsnicmp_l(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 338
__declspec(dllimport) errno_t __cdecl _wcsnset_s(wchar_t * _Destination, size_t _SizeInWords, wchar_t _Value, size_t _MaxCount); 
#line 352 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _wcsnset_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) wchar_t *__cdecl _wcsnset(wchar_t * _String, wchar_t _Value, size_t _MaxCount); 
#line 360 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) wchar_t *__cdecl _wcsrev(wchar_t * _String); 



__declspec(dllimport) errno_t __cdecl _wcsset_s(wchar_t * _Destination, size_t _SizeInWords, wchar_t _Value); 
#line 376 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _wcsset_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t *__cdecl _wcsset(wchar_t * _String, wchar_t _Value); 
#line 383 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) errno_t __cdecl _wcslwr_s(wchar_t * _String, size_t _SizeInWords); 
#line 393 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _wcslwr_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t *__cdecl _wcslwr(wchar_t * _String); 
#line 399 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) errno_t __cdecl _wcslwr_s_l(wchar_t * _String, size_t _SizeInWords, _locale_t _Locale); 
#line 411 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _wcslwr_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) wchar_t *__cdecl _wcslwr_l(wchar_t * _String, _locale_t _Locale); 
#line 419 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) errno_t __cdecl _wcsupr_s(wchar_t * _String, size_t _Size); 
#line 429 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _wcsupr_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) wchar_t *__cdecl _wcsupr(wchar_t * _String); 
#line 435 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) errno_t __cdecl _wcsupr_s_l(wchar_t * _String, size_t _Size, _locale_t _Locale); 
#line 447 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _wcsupr_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) wchar_t *__cdecl _wcsupr_l(wchar_t * _String, _locale_t _Locale); 
#line 456 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(dllimport) size_t __cdecl wcsxfrm(wchar_t * _Destination, const wchar_t * _Source, size_t _MaxCount); 
#line 464
__declspec(dllimport) size_t __cdecl _wcsxfrm_l(wchar_t * _Destination, const wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 472
__declspec(dllimport) int __cdecl wcscoll(const wchar_t * _String1, const wchar_t * _String2); 
#line 478
__declspec(dllimport) int __cdecl _wcscoll_l(const wchar_t * _String1, const wchar_t * _String2, _locale_t _Locale); 
#line 485
__declspec(dllimport) int __cdecl _wcsicoll(const wchar_t * _String1, const wchar_t * _String2); 
#line 491
__declspec(dllimport) int __cdecl _wcsicoll_l(const wchar_t * _String1, const wchar_t * _String2, _locale_t _Locale); 
#line 498
__declspec(dllimport) int __cdecl _wcsncoll(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 505
__declspec(dllimport) int __cdecl _wcsncoll_l(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 513
__declspec(dllimport) int __cdecl _wcsnicoll(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 520
__declspec(dllimport) int __cdecl _wcsnicoll_l(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 580 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsdup. See online help for details" ".")) __declspec(dllimport) wchar_t *__cdecl wcsdup(const wchar_t * _String); 
#line 592 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicmp. See online help for detail" "s.")) __declspec(dllimport) int __cdecl wcsicmp(const wchar_t * _String1, const wchar_t * _String2); 
#line 598
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnicmp. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl wcsnicmp(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 606
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnset. See online help for detail" "s.")) __declspec(dllimport) wchar_t *__cdecl wcsnset(wchar_t * _String, wchar_t _Value, size_t _MaxCount); 
#line 614
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsrev. See online help for details" ".")) __declspec(dllimport) wchar_t *__cdecl wcsrev(wchar_t * _String); 
#line 620
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsset. See online help for details" ".")) __declspec(dllimport) wchar_t *__cdecl wcsset(wchar_t * _String, wchar_t _Value); 
#line 627
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcslwr. See online help for details" ".")) __declspec(dllimport) wchar_t *__cdecl wcslwr(wchar_t * _String); 
#line 633
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsupr. See online help for details" ".")) __declspec(dllimport) wchar_t *__cdecl wcsupr(wchar_t * _String); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicoll. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl wcsicoll(const wchar_t * _String1, const wchar_t * _String2); 
#line 647 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_wstring.h"
__pragma( pack ( pop )) 
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__pragma( pack ( push, 8 )) 
#line 28
__declspec(dllimport) errno_t __cdecl strcpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 35
__declspec(dllimport) errno_t __cdecl strcat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 42
__declspec(dllimport) errno_t __cdecl strerror_s(char * _Buffer, size_t _SizeInBytes, int _ErrorNumber); 
#line 48
__declspec(dllimport) errno_t __cdecl strncat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 56
__declspec(dllimport) errno_t __cdecl strncpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 64
__declspec(dllimport) char *__cdecl strtok_s(char * _String, const char * _Delimiter, char ** _Context); 
#line 72 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(dllimport) void *__cdecl _memccpy(void * _Dst, const void * _Src, int _Val, size_t _MaxCount); 
#line 87 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 28719) /* Removed pragma: #pragma warning(disable: 28719)*/
#pragma warning(disable: 28726) /* Removed pragma: #pragma warning(disable: 28726)*/
__declspec(deprecated("This function or variable may be unsafe. Consider using strcat_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) char *__cdecl strcat(char * _Destination, const char * _Source); 
#line 95 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
/* Removed pragma: #pragma warning(pop)*/
#line 100 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
int __cdecl strcmp(const char * _Str1, const char * _Str2); 
#line 106
__declspec(dllimport) int __cdecl _strcmpi(const char * _String1, const char * _String2); 
#line 112
__declspec(dllimport) int __cdecl strcoll(const char * _String1, const char * _String2); 
#line 118
__declspec(dllimport) int __cdecl _strcoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 130 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
/* Removed pragma: #pragma warning(push)*/
#pragma warning(disable: 28719) /* Removed pragma: #pragma warning(disable: 28719)*/
#pragma warning(disable: 28726) /* Removed pragma: #pragma warning(disable: 28726)*/
__declspec(deprecated("This function or variable may be unsafe. Consider using strcpy_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) char *__cdecl strcpy(char * _Destination, const char * _Source); 
#line 138 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
/* Removed pragma: #pragma warning(pop)*/


__declspec(dllimport) size_t __cdecl strcspn(const char * _Str, const char * _Control); 
#line 152 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(dllimport) __declspec(allocator) char *__cdecl _strdup(const char * _Source); 
#line 163 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _strerror_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) char *__cdecl _strerror(const char * _ErrorMessage); 




__declspec(dllimport) errno_t __cdecl _strerror_s(char * _Buffer, size_t _SizeInBytes, const char * _ErrorMessage); 
#line 182 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using strerror_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) char *__cdecl strerror(int _ErrorMessage); 
#line 193 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(dllimport) int __cdecl _stricmp(const char * _String1, const char * _String2); 
#line 199
__declspec(dllimport) int __cdecl _stricoll(const char * _String1, const char * _String2); 
#line 205
__declspec(dllimport) int __cdecl _stricoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 212
__declspec(dllimport) int __cdecl _stricmp_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#if !defined(CppTest_Stub_strlen_strlen) && defined(CPPTEST_USER_STUB_strlen)
size_t __cdecl CppTest_Stub_strlen_strlen(const char * _Str); 
#endif

#if !defined(CppTest_Safe_Stub_strlen_strlen) && defined(CPPTEST_SAFE_STUB_strlen)
size_t __cdecl CppTest_Safe_Stub_strlen_strlen(const char * _Str); 
#endif

#if !defined(CppTest_Auto_Stub_strlen_strlen) && defined(CPPTEST_AUTO_STUB_strlen)
size_t __cdecl CppTest_Auto_Stub_strlen_strlen(const char * _Str); 
#endif
#line 219
size_t __cdecl strlen(const char * _Str); 




__declspec(dllimport) errno_t __cdecl _strlwr_s(char * _String, size_t _Size); 
#line 234 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _strlwr_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char *__cdecl _strlwr(char * _String); 
#line 240 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(dllimport) errno_t __cdecl _strlwr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 252 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _strlwr_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) char *__cdecl _strlwr_l(char * _String, _locale_t _Locale); 
#line 266 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using strncat_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char *__cdecl strncat(char * _Destination, const char * _Source, size_t _Count); 
#line 275 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(dllimport) int __cdecl strncmp(const char * _Str1, const char * _Str2, size_t _MaxCount); 
#line 282
__declspec(dllimport) int __cdecl _strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 289
__declspec(dllimport) int __cdecl _strnicmp_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 297
__declspec(dllimport) int __cdecl _strnicoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 304
__declspec(dllimport) int __cdecl _strnicoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 312
__declspec(dllimport) int __cdecl _strncoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 319
__declspec(dllimport) int __cdecl _strncoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 326
__declspec(dllimport) size_t __cdecl __strncnt(const char * _String, size_t _Count); 
#line 338 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using strncpy_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char *__cdecl strncpy(char * _Destination, const char * _Source, size_t _Count); 
#line 355 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(dllimport) size_t __cdecl strnlen(const char * _String, size_t _MaxCount); 
#line 371 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
static __inline size_t __cdecl strnlen_s(const char *
_String, size_t 
_MaxCount) 

{ 
return (_String == 0) ? 0 : (strnlen(_String, _MaxCount)); 
} 
#line 382 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(dllimport) errno_t __cdecl _strnset_s(char * _String, size_t _SizeInBytes, int _Value, size_t _MaxCount); 
#line 396 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _strnset_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) char *__cdecl _strnset(char * _Destination, int _Value, size_t _Count); 
#line 405 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(dllimport) char *__cdecl strpbrk(const char * _Str, const char * _Control); 




__declspec(dllimport) char *__cdecl _strrev(char * _Str); 




__declspec(dllimport) errno_t __cdecl _strset_s(char * _Destination, size_t _DestinationSize, int _Value); 
#line 427 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _strset_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char *__cdecl _strset(char * _Destination, int _Value); 
#line 434 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(dllimport) size_t __cdecl strspn(const char * _Str, const char * _Control); 
#line 440
__declspec(deprecated("This function or variable may be unsafe. Consider using strtok_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) char *__cdecl strtok(char * _String, const char * _Delimiter); 
#line 446
__declspec(dllimport) errno_t __cdecl _strupr_s(char * _String, size_t _Size); 
#line 456 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _strupr_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) char *__cdecl _strupr(char * _String); 
#line 462 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(dllimport) errno_t __cdecl _strupr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 474 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(deprecated("This function or variable may be unsafe. Consider using _strupr_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) char *__cdecl _strupr_l(char * _String, _locale_t _Locale); 
#line 483 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__declspec(dllimport) size_t __cdecl strxfrm(char * _Destination, const char * _Source, size_t _MaxCount); 
#line 491
__declspec(dllimport) size_t __cdecl _strxfrm_l(char * _Destination, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 536
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strdup. See online help for details" ".")) __declspec(dllimport) char *__cdecl strdup(const char * _String); 
#line 543
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strcmpi. See online help for detail" "s.")) __declspec(dllimport) int __cdecl strcmpi(const char * _String1, const char * _String2); 
#line 549
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for detail" "s.")) __declspec(dllimport) int __cdecl stricmp(const char * _String1, const char * _String2); 
#line 555
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strlwr. See online help for details" ".")) __declspec(dllimport) char *__cdecl strlwr(char * _String); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnicmp. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 567
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnset. See online help for detail" "s.")) __declspec(dllimport) char *__cdecl strnset(char * _String, int _Value, size_t _MaxCount); 
#line 574
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strrev. See online help for details" ".")) __declspec(dllimport) char *__cdecl strrev(char * _String); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strset. See online help for details" ".")) char *__cdecl strset(char * _String, int _Value); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strupr. See online help for details" ".")) __declspec(dllimport) char *__cdecl strupr(char * _String); 
#line 592 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\string.h"
__pragma( pack ( pop )) 
#if !defined(CppTest_Stub_Input_number_Input_number) && defined(CPPTEST_USER_STUB_Input_number)
void CppTest_Stub_Input_number_Input_number(); 
#endif

#if !defined(CppTest_Safe_Stub_Input_number_Input_number) && defined(CPPTEST_SAFE_STUB_Input_number)
void CppTest_Safe_Stub_Input_number_Input_number(); 
#endif

#if !defined(CppTest_Auto_Stub_Input_number_Input_number) && defined(CPPTEST_AUTO_STUB_Input_number)
void CppTest_Auto_Stub_Input_number_Input_number(); 
#endif
#line 9 "c:\\unittest_calc\\calculation\\calculation\\calculation.h"
void Input_number(); 
void calculation(char * calc); 
void output(double * sum); 
#line 3 "C:\\unittest_calc\\calculation\\calculation\\main.c"
void output(); 

void newMain() { CPPTEST_STACK_TRACE_FUNC_START_INFO() const unsigned int _CppTest_funcId = cpptestCoverageFunction(__CPTR_cui, 1);cpptestCoverageStmt(1U, -1, __CPTR_cui, 1);CPPTEST_STACK_TRACE_STMT_INFO(6) 

((void)cpptestCoverageCall(1U, 1 + 0, __CPTR_cui, 1), CppTest_Stub__Call_Input_number_Input_number()); cpptestCoverageStmt(2U, -1, __CPTR_cui, 1);CPPTEST_STACK_TRACE_EXIT_ROUTINE() 

} 


void output(double *sum) { CPPTEST_STACK_TRACE_FUNC_START_INFO() const unsigned int _CppTest_funcId = cpptestCoverageFunctionCall(__CPTR_cui, 2);int _coverage_decl_var_1 = cpptestCoverageStmt(1U, -1, __CPTR_cui, 2);
int len; cpptestCoverageStmt(2U, -1, __CPTR_cui, 2);CPPTEST_STACK_TRACE_STMT_INFO(7) 
len = ((void)cpptestCoverageCall(1U, 2 + 4, __CPTR_cui, 2), CppTest_Stub__Call_strlen_strlen(sum)); 

if (((void)CPPTEST_STACK_TRACE_IF_COND_INFO(8) , ((void)cpptestCoverageStmt(3U, -1, __CPTR_cui, 2), cpptestCoverageCond((255 < len), 1, 2 + 0, 2 + 1, __CPTR_cui, _CppTest_funcId, 2)))) 
{ cpptestCoverageBlock(2, -1, __CPTR_cui, _CppTest_funcId, 2);cpptestCoverageStmt(4U, -1, __CPTR_cui, 2);CPPTEST_STACK_TRACE_STMT_INFO(9) 
((void)cpptestCoverageCall(2U, 2 + 4, __CPTR_cui, 2), CppTest_Stub__Call_printf_printf("\n\203G\203\211\201[\201F\214\205\220\224\202\252\221\345\202\253\202\267\202\254\202\334\202\267")); CPPTEST_STACK_TRACE_BLOCK_END_INFO(10) 
} else 

{ cpptestCoverageBlock(3, -1, __CPTR_cui, _CppTest_funcId, 2);cpptestCoverageStmt(5U, -1, __CPTR_cui, 2);CPPTEST_STACK_TRACE_STMT_INFO(11) 
((void)cpptestCoverageCall(3U, 2 + 4, __CPTR_cui, 2), CppTest_Stub__Call_printf_printf("= %.0lf", *sum)); CPPTEST_STACK_TRACE_BLOCK_END_INFO(12) 
}  CPPTEST_STACK_TRACE_EXIT_ROUTINE() cpptestCoverageBlock(4, -1, __CPTR_cui, _CppTest_funcId, 2);


} 
#line 1 "__TEST_HARNESS__"
;


