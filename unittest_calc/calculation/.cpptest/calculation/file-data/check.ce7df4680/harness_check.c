#line 1 "C:\\Users\\keito\\AppData\\Local\\Temp\\ParaSoft.22616.26454\\ParaSoft.22616.2374.c"

#define CPPTEST_INSTRUMENTATION


#include "cpptest_i.h"
#include "C:\unittest_calc\calculation\.cpptest\calculation\unit-data\current_tubf179707\cpptest_stubconfig.h"


struct __CPTR_Dummy_Type {
    char nonEmpty;
};




#include "cpptest_runtime_i.h"

#ifdef __cplusplus
extern "C" void __CPTR_Initialize(void);
extern "C" void __CPTR_Finalize(void);

struct __CPTR_Initializer_3382272765_22616_1485589854 {
    __CPTR_Initializer_3382272765_22616_1485589854()
    {
        CPPTEST_INITIALIZE_RUNTIME();
    }
    ~__CPTR_Initializer_3382272765_22616_1485589854()
    {
        CPPTEST_FINALIZE_RUNTIME();
    }
};

#if CPPTEST_USE_GLOBAL_OBJECTS_TO_INIT_RUNTIME
static struct __CPTR_Initializer_3382272765_22616_1485589854 __CPTR_initializer_3382272765_22616_1485589854;
#endif

#define CPPTEST_ENTER_MAIN_ROUTINE() __CPTR_Initializer_3382272765_22616_1485589854 __CPTR_main_initializer

#define CPPTEST_EXIT_MAIN_ROUTINE()

#else
extern void __CPTR_Initialize(void);
extern void __CPTR_Finalize(void);

#define CPPTEST_ENTER_MAIN_ROUTINE() CPPTEST_INITIALIZE_RUNTIME()

#define CPPTEST_EXIT_MAIN_ROUTINE() CPPTEST_FINALIZE_RUNTIME()

#endif


#define _cpptest_strdata_var(id, bogus) _cpptest_strdata[id]
static 
const char* _cpptest_strdata[] = {
    0,
    0
};

#if defined(CPPTEST_ENABLE_ALL_STUBS)
# define CPPTEST_STUB_Check_number
# define CPPTEST_USER_STUB_Check_number
#endif
#if defined(CPPTEST_STUB_Check_number)
# if defined(CPPTEST_SAFE_STUB_Check_number)
#  define CppTest_Stub__Call_Check_number_Check_number CppTest_Safe_Stub_Check_number_Check_number
#  if defined(CPPTEST_UNDEFINED_Check_number) 
#   define CppTest_Safe_Stub_Check_number_Check_number Check_number
#  endif
# elif defined(CPPTEST_AUTO_STUB_Check_number)
#  define CppTest_Stub__Call_Check_number_Check_number CppTest_Auto_Stub_Check_number_Check_number
#  if defined(CPPTEST_UNDEFINED_Check_number) 
#   define CppTest_Auto_Stub_Check_number_Check_number Check_number
#  endif
# else
#  define CppTest_Stub__Call_Check_number_Check_number CppTest_Stub_Check_number_Check_number
#  if defined(CPPTEST_UNDEFINED_Check_number) 
#   define CppTest_Stub_Check_number_Check_number Check_number
#  endif
# endif
#else
# define CppTest_Stub__Call_Check_number_Check_number Check_number
#endif


extern struct CppTest_StubInfoStruct CppTest_StubInfo_user_Check_number_1;
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
#line 13 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\stdarg.h"
__pragma( pack ( push, 8 )) 
#line 24
__pragma( pack ( pop )) 
#line 73 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_common.h"
typedef 
#line 66
struct { 

char *ptr; 

size_t len; 

size_t size; 
} CppTestExpandableString; 
#line 82
typedef 
#line 75
struct CppTestListElement_s { 

char *data; 

struct CppTestListElement_s *next; 

struct CppTestListElement_s *prev; 
} CppTestListElement; 
#line 89
typedef 
#line 84
struct { 

CppTestListElement *head; 

CppTestListElement *tail; 
} CppTestList; 

typedef CppTestListElement *CppTestListIterator; 
typedef const CppTestListElement *CppTestListConstIterator; 

typedef unsigned long CppTest_ULong; 



typedef wchar_t CppTest_wchar_t; 
#line 102 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_common.h"
__declspec(dllimport) extern void __cdecl cpptestExpandableStringInit(CppTestExpandableString * es, size_t initSize); 



__declspec(dllimport) extern void __cdecl cpptestExpandableStringClear(CppTestExpandableString * es); 



__declspec(dllimport) extern void __cdecl cpptestExpandableStringExpand(CppTestExpandableString * es); 



__declspec(dllimport) extern void __cdecl cpptestExpandableStringAppend(CppTestExpandableString * es, const char * str, size_t len); 



__declspec(dllimport) extern void __cdecl cpptestExpandableStringAppendChar(CppTestExpandableString * es, char c); 



__declspec(dllimport) extern void __cdecl cpptestExpandableStringDispose(CppTestExpandableString * es); 



__declspec(dllimport) extern void __cdecl cpptestListInit(CppTestList * l); 


typedef void (__cdecl *ListElementDestructor)(char * data, void * additionalParameter); 



__declspec(dllimport) extern void __cdecl cpptestListClear(CppTestList * l, ListElementDestructor destructor, void * additionalParameter); 


__declspec(dllimport) extern CppTestListIterator __cdecl cpptestListRemove(CppTestList * l, CppTestListIterator it); 


__declspec(dllimport) extern void __cdecl cpptestListPushFront(CppTestList * l, char * data); 


__declspec(dllimport) extern char *__cdecl cpptestListFrontElement(const CppTestList * l); 


__declspec(dllimport) extern void __cdecl cpptestListPushBack(CppTestList * l, char * data); 


__declspec(dllimport) extern CppTestListIterator __cdecl cpptestListGetIterator(const CppTestList * l); 


__declspec(dllimport) extern char *__cdecl cpptestListIteratorElement(CppTestListConstIterator it); 


__declspec(dllimport) extern CppTestListIterator __cdecl cpptestListIteratorNext(CppTestListConstIterator it); 


__declspec(dllimport) extern int __cdecl cpptestListIteratorEnd(CppTestListConstIterator it); 


__declspec(dllimport) extern char *__cdecl cpptestStrDup(const char * str); 


__declspec(dllimport) extern unsigned __cdecl cpptestStrLen(const char * str); 


__declspec(dllimport) extern int __cdecl cpptestStrCmp(const char * str1, const char * str2); 


__declspec(dllimport) extern int __cdecl cpptestStrNCmp(const char * str1, const char * str2, unsigned n); 


__declspec(dllimport) extern int __cdecl cpptestStrCaseCmp(const char * str1, const char * str2); 


__declspec(dllimport) extern int __cdecl cpptestStrNCaseCmp(const char * str1, const char * str2, unsigned n); 


__declspec(dllimport) extern unsigned __cdecl cpptestCharToDigit(char c); 


__declspec(dllimport) extern const char *__cdecl cpptestStrToInteger(const char * str, __int64 * integer); 


__declspec(dllimport) extern const char *__cdecl cpptestStrToUInteger(const char * str, unsigned __int64 * uinteger); 


__declspec(dllimport) extern const char *__cdecl cpptestStrToBool(const char * str, int * result); 


__declspec(dllimport) extern char *__cdecl cpptestAllocateString(size_t size, unsigned char content); 


__declspec(dllimport) extern void __cdecl cpptestIntToBitStrMask(char * bitString, unsigned value, unsigned mask); 



__declspec(dllimport) extern CppTest_wchar_t *__cdecl cpptestWStrDup(const CppTest_wchar_t * str); 


__declspec(dllimport) extern unsigned __cdecl cpptestWStrLen(const CppTest_wchar_t * str); 


__declspec(dllimport) extern int __cdecl cpptestWStrCmp(const CppTest_wchar_t * str1, const CppTest_wchar_t * str2); 


__declspec(dllimport) extern int __cdecl cpptestWStrNCmp(const CppTest_wchar_t * str1, const CppTest_wchar_t * str2, unsigned n); 


__declspec(dllimport) extern unsigned __cdecl cpptestWCharToDigit(CppTest_wchar_t c); 


__declspec(dllimport) extern const CppTest_wchar_t *__cdecl cpptestWStrToInteger(const CppTest_wchar_t * str, __int64 * integer); 


__declspec(dllimport) extern const CppTest_wchar_t *__cdecl cpptestWStrToUInteger(const CppTest_wchar_t * str, unsigned __int64 * uinteger); 
#line 221 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_common.h"
__declspec(dllimport) extern void *__cdecl cpptestMalloc(size_t size); 


__declspec(dllimport) extern void *__cdecl cpptestAlloc(size_t size); 


__declspec(dllimport) extern void __cdecl cpptestFree(void * str); 


__declspec(dllimport) extern void *__cdecl cpptestMemset(void * ptr, int c, size_t size); 
#line 248 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_common.h"
typedef struct CppTestTreeNode *CppTestTree; 
#line 254
__declspec(dllimport) extern void __cdecl cpptestTreeInit(CppTestTree * tree); 
#line 260
__declspec(dllimport) extern void __cdecl cpptestTreeClear(CppTestTree * tree); 
#line 267
__declspec(dllimport) extern int __cdecl cpptestTreeFind(CppTestTree * tree, const char * key, void ** ret); 
#line 273
__declspec(dllimport) extern void __cdecl cpptestTreeAdd(CppTestTree * tree, const char * key, void * value); 

typedef void __cdecl CppTestTreeCallBackRoutine(const char * key, void * value); 
typedef CppTestTreeCallBackRoutine *CppTestTreeCallBack; 
#line 282
__declspec(dllimport) extern void __cdecl cpptestTreeTraverseInorder(const CppTestTree * tree, const CppTestTreeCallBack callback); 
#line 290
__declspec(dllimport) extern void __cdecl cpptestAddProperty(const char * name, const char * value); 
#line 298
__declspec(dllimport) extern void __cdecl cpptestAddWeakProperty(const char * name, const char * value); 
#line 311
__declspec(dllimport) extern void __cdecl cpptestParseAndAddProperties(char * properties); 
#line 317
__declspec(dllimport) extern int __cdecl cpptestHasProperty(const char * name); 
#line 324
__declspec(dllimport) extern const char *__cdecl cpptestGetProperty(const char * name); 
#line 331
__declspec(dllimport) extern const char *__cdecl cpptestGetPropertyEx(const char * name, const char * defaultValue); 
#line 338
__declspec(dllimport) extern __int64 __cdecl cpptestGetIntProperty(const char * name); 
#line 345
__declspec(dllimport) extern __int64 __cdecl cpptestGetIntPropertyEx(const char * name, __int64 defaultValue); 
#line 352
__declspec(dllimport) extern unsigned __int64 __cdecl cpptestGetUIntProperty(const char * name); 
#line 359
__declspec(dllimport) extern unsigned __int64 __cdecl cpptestGetUIntPropertyEx(const char * name, unsigned __int64 defaultValue); 
#line 366
__declspec(dllimport) extern int __cdecl cpptestGetBoolProperty(const char * name); 
#line 373
__declspec(dllimport) extern int __cdecl cpptestGetBoolPropertyEx(const char * name, int defaultValue); 
#line 379
__declspec(dllimport) extern const char *__cdecl cpptestPathRelativeToAbsolute(const char * relPath, const char * relToFileName); 
#line 21 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_system.h"
typedef 
#line 15
struct { 
void *(__cdecl *mallocFunc)(size_t size); 
void *(__cdecl *callocFunc)(size_t elements, size_t elem_size); 
void *(__cdecl *reallocFunc)(void * ptr, size_t new_size); 
void (__cdecl *freeFunc)(void * ptr); 
void *(__cdecl *memsetFunc)(void * ptr, int value, size_t size); 
} CppTest_System; 
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_stdio_config.h"
__pragma( pack ( push, 8 )) 
#line 84 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\corecrt_stdio_config.h"
__declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_printf_options(void) 
{ 
static unsigned __int64 _OptionsStorage; 
return &_OptionsStorage; 
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
__declspec(dllimport) FILE *__cdecl __acrt_iob_func(unsigned _Ix); 
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
__declspec(dllimport) int __cdecl __stdio_common_vfprintf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
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
{ 
return __stdio_common_vfprintf((*__local_stdio_printf_options()), _Stream, _Format, _Locale, _ArgList); 
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
#line 948 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
__inline int __cdecl printf(const char *const 
_Format, ...) 
#line 954 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17134.0\\ucrt\\stdio.h"
{ 
int _Result; 
va_list _ArgList; 
((void)(_ArgList = (va_list)(&(_Format)) + (((sizeof (_Format) + sizeof(int)) - 1) & ~(sizeof(int) - 1)))); 
_Result = _vfprintf_l((__acrt_iob_func(1)), _Format, 0, _ArgList); 
((void)(_ArgList = (va_list)0)); 
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
#line 21 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\setjmp.h"
__pragma( pack ( push, 8 )) 
#line 44
typedef 
#line 31
struct __JUMP_BUFFER { 

unsigned long Ebp; 
unsigned long Ebx; 
unsigned long Edi; 
unsigned long Esi; 
unsigned long Esp; 
unsigned long Eip; 
unsigned long Registration; 
unsigned long TryLevel; 
unsigned long Cookie; 
unsigned long UnwindFunc; 
unsigned long UnwindData[6]; 
} _JUMP_BUFFER; 
#line 145 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\setjmp.h"
typedef int jmp_buf[16]; 
#line 157 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\setjmp.h"
int __cdecl _setjmp(jmp_buf _Buf); 
#line 167
__declspec(noreturn) void __cdecl longjmp(jmp_buf _Buf, int _Value); 
#line 174 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\Community\\VC\\Tools\\MSVC\\14.15.26726\\include\\setjmp.h"
__pragma( pack ( pop )) 
#line 216 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_runtime_u.h"
typedef unsigned CppTest_ErrorCode; 
#line 240
typedef void (*__CPTR_TestCasePtr)(void); 


typedef void (__cdecl *__CPTR_TestCaseBreakFuncPtr)(void); 

struct _CONTEXT; 
struct _EXCEPTION_RECORD; 

struct CppTest_DataSource; 
struct CppTest_DsCsvData; 

typedef struct CppTestEnumeratorStruct CppTestEnumerator; 
struct CppTestEnumeratorStruct { 

const char *name; 
__int64 value; 
}; 

typedef struct CppTestEnumInfoStruct CppTestEnumInfo; 
struct CppTestEnumInfoStruct { 

const char *name; 
const char *scope; 
int scoped; 
CppTestEnumerator *enumerators; 
}; 

typedef struct CppTestEnumTypeStringStruct CppTestEnumTypeString; 
struct CppTestEnumTypeStringStruct { 

const char *str; 
CppTestEnumInfo *enumInfo; 
}; 

typedef struct CppTest_CheckerStruct CppTest_Checker; 
typedef struct CppTest_StubInfoStruct CppTest_StubInfo; 
typedef struct CppTest_StubCallInfoStruct CppTest_StubCallInfo; 


typedef void (__cdecl *CppTest_Checker_Callback)(CppTest_StubInfo * stubInfo, void * data); 
typedef void (*CppTest_Stub_Callback)(void); 


struct CppTest_CheckerStruct { 

CppTest_Checker *next; 
CppTest_Checker_Callback checker; 
void *data; 
}; 

struct CppTest_StubInfoStruct { 

const char *userId; 
CppTest_Stub_Callback callbackPtr; 
int lastCallNo; 
unsigned flags; 
CppTest_Checker *firstChecker; 
CppTest_Checker *lastChecker; 
}; 

struct CppTest_StubCallInfoStruct { 

CppTest_StubInfo *stubInfo; 
int callNo; 
}; 


extern CppTest_StubCallInfo *stubCallInfo; 
#line 350 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_runtime_u.h"
__declspec(dllimport) extern const char *__cdecl cpptestGetCurrentTestCaseName(void); 
#line 356
__declspec(dllimport) extern const char *__cdecl cpptestGetCurrentTestSuiteName(void); 
#line 362
__declspec(dllimport) extern unsigned __cdecl cpptestGetCurrentTestCaseIteration(void); 
#line 376 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_runtime_u.h"
__declspec(dllimport) extern const char *__cdecl cpptestGetCurrentTestCaseFile(void); 
#line 382
__declspec(dllimport) extern unsigned __cdecl cpptestGetCurrentTestCaseLine(void); 
#line 389
__declspec(dllimport) extern void __cdecl cpptestCommunicationBegin(void); 


__declspec(dllimport) extern void __cdecl cpptestCommunicationEnd(void); 


__declspec(dllimport) extern void __cdecl cpptestTestRunnerBegin(void); 


__declspec(dllimport) extern void __cdecl cpptestTestRunnerEnd(void); 


__declspec(dllimport) extern void __cdecl cpptestTestSuiteBegin(const char * name, const char * file, unsigned line); 



__declspec(dllimport) extern void __cdecl cpptestTestSuiteEnd(void); 


__declspec(dllimport) extern void __cdecl cpptestTestCaseBegin(const char * name, CppTest_ErrorCode expectedErrorCode, unsigned expectedErrorCodeMask, int isCpp, const char * file, unsigned line); 




__declspec(dllimport) extern void __cdecl cpptestTestCaseEnd(void); 


__declspec(dllimport) extern void __cdecl cpptestDsForCurrentTestCaseInitialized(struct CppTest_DataSource * dataSource); 


__declspec(dllimport) extern void __cdecl cpptestDsTestCaseBegin(const char * name, CppTest_ErrorCode expectedErrorCode, unsigned expectedErrorCodeMask, int isCpp, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestDsTestCaseEnd(void); 


__declspec(dllimport) extern void __cdecl cpptestDsTestCaseIterationBegin(unsigned iteration, const char * signature); 


__declspec(dllimport) extern void __cdecl cpptestDsTestCaseIterationEnd(void); 
#line 445
__declspec(dllimport) extern const char *__cdecl cpptestFormatBuffer(char * buffer, const char * format, ...); 
#line 454
__declspec(dllimport) extern int __cdecl cpptestCharPtrsEqual(const char * expected, const char * actual); 
#line 465
__declspec(dllimport) extern int cpptestWCharPtrsEqual(const void * expected, const void * actual); 



__declspec(dllimport) extern int cpptestWCharPtrsNEqual(const void * expected, const void * actual, unsigned maxSize); 
#line 474 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_runtime_u.h"
__declspec(dllimport) extern void __cdecl cpptestUnhandledStructuredExceptionInThread(unsigned code); 

__declspec(dllimport) extern int __cdecl cpptestUnhandledStructuredExceptionInTestCase(unsigned code); 

__declspec(dllimport) extern void __cdecl cpptestUnhandledCppExceptionInThread(void); 

__declspec(dllimport) extern void __cdecl cpptestNoExpectedCppExceptionInTestCase(const char * e); 

__declspec(dllimport) extern void __cdecl cpptestUnhandledStdExceptionInTestCase(const char * what); 

__declspec(dllimport) extern void __cdecl cpptestUnhandledCppExceptionInTestCase(void); 
#line 492
__declspec(dllimport) extern void __cdecl cpptestSignalFound(int sigNo); 


__declspec(dllimport) extern __CPTR_TestCaseBreakFuncPtr __cdecl cpptestGetTestCaseBreakFuncPtr(void); 


__declspec(dllimport) extern __CPTR_TestCaseBreakFuncPtr __cdecl cpptestSetTestCaseBreakFuncPtr(__CPTR_TestCaseBreakFuncPtr funcpPtr); 
#line 515
__declspec(dllimport) extern char __cdecl cpptestLimitsGetMaxChar(void); 
#line 521
__declspec(dllimport) extern char __cdecl cpptestLimitsGetMinChar(void); 
#line 527
__declspec(dllimport) extern signed char __cdecl cpptestLimitsGetMaxSignedChar(void); 
#line 533
__declspec(dllimport) extern signed char __cdecl cpptestLimitsGetMinSignedChar(void); 
#line 539
__declspec(dllimport) extern unsigned char __cdecl cpptestLimitsGetMaxUnsignedChar(void); 
#line 546
__declspec(dllimport) extern short __cdecl cpptestLimitsGetMaxShort(void); 
#line 552
__declspec(dllimport) extern short __cdecl cpptestLimitsGetMinShort(void); 
#line 558
__declspec(dllimport) extern unsigned short __cdecl cpptestLimitsGetMaxUnsignedShort(void); 
#line 564
__declspec(dllimport) extern int __cdecl cpptestLimitsGetMaxInt(void); 
#line 570
__declspec(dllimport) extern int __cdecl cpptestLimitsGetMinInt(void); 
#line 576
__declspec(dllimport) extern unsigned __cdecl cpptestLimitsGetMaxUnsignedInt(void); 
#line 583
__declspec(dllimport) extern long __cdecl cpptestLimitsGetMaxLong(void); 
#line 589
__declspec(dllimport) extern long __cdecl cpptestLimitsGetMinLong(void); 
#line 595
__declspec(dllimport) extern unsigned long __cdecl cpptestLimitsGetMaxUnsignedLong(void); 
#line 602
__declspec(dllimport) extern float __cdecl cpptestLimitsGetMaxPosFloat(void); 
#line 608
__declspec(dllimport) extern float __cdecl cpptestLimitsGetMinNegFloat(void); 
#line 614
__declspec(dllimport) extern float __cdecl cpptestLimitsGetMaxNegFloat(void); 
#line 620
__declspec(dllimport) extern float __cdecl cpptestLimitsGetMinPosFloat(void); 
#line 627
__declspec(dllimport) extern double __cdecl cpptestLimitsGetMaxPosDouble(void); 
#line 633
__declspec(dllimport) extern double __cdecl cpptestLimitsGetMinNegDouble(void); 
#line 639
__declspec(dllimport) extern double __cdecl cpptestLimitsGetMaxNegDouble(void); 
#line 645
__declspec(dllimport) extern double __cdecl cpptestLimitsGetMinPosDouble(void); 
#line 652
__declspec(dllimport) extern long double __cdecl cpptestLimitsGetMaxPosLongDouble(void); 
#line 658
__declspec(dllimport) extern long double __cdecl cpptestLimitsGetMinNegLongDouble(void); 
#line 664
__declspec(dllimport) extern long double __cdecl cpptestLimitsGetMaxNegLongDouble(void); 
#line 670
__declspec(dllimport) extern long double __cdecl cpptestLimitsGetMinPosLongDouble(void); 
#line 687
__declspec(dllimport) extern int __cdecl CppTest_IsCurrentTestCase(const char * id); 
#line 693
__declspec(dllimport) extern const char *__cdecl CppTest_GetCurrentTestCaseName(void); 
#line 699
__declspec(dllimport) extern const char *__cdecl CppTest_GetCurrentTestSuiteName(void); 
#line 707
__declspec(dllimport) extern const char *__cdecl CppTest_Format(const char * format, ...); 
#line 713
typedef struct CppTest_StreamRedirectStruct CppTest_StreamRedirect; 
typedef void (__cdecl *CppTest_ClearFlush)(void); 
typedef int (__cdecl *CppTest_StreamDup)(long, int); 
#line 722
void __cdecl CppTest_flushStdOutput(void); 
#line 730
void __cdecl CppTest_flushStdError(void); 
#line 737
void __cdecl CppTest_clearStdInput(void); 

int __cdecl CppTest_streamDup(long, int); 
#line 806 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_runtime_u.h"
__declspec(dllimport) extern CppTest_StreamRedirect *__cdecl CppTest_StreamRedirectInput(int fd, const char * value, CppTest_ClearFlush ptr, CppTest_StreamDup ptr1); 
#line 821
__declspec(dllimport) extern CppTest_StreamRedirect *__cdecl CppTest_StreamRedirectNInput(int fd, const char * value, unsigned size, CppTest_ClearFlush ptr, CppTest_StreamDup ptr1); 
#line 833
__declspec(dllimport) extern CppTest_StreamRedirect *__cdecl CppTest_StreamRedirectOutput(int fd, CppTest_ClearFlush ptr); 
#line 848
__declspec(dllimport) extern int __cdecl CppTest_StreamCompare(CppTest_StreamRedirect * redirect, const char * value); 
#line 866
__declspec(dllimport) extern int __cdecl CppTest_StreamNCompare(CppTest_StreamRedirect * redirect, const char * value, unsigned size); 
#line 879
__declspec(dllimport) extern int __cdecl CppTest_StreamSearch(CppTest_StreamRedirect * redirect, const char * pattern); 
#line 892
__declspec(dllimport) extern int __cdecl CppTest_StreamNSearch(CppTest_StreamRedirect * redirect, const char * pattern, unsigned size); 
#line 906
__declspec(dllimport) extern char *__cdecl CppTest_StreamReadData(CppTest_StreamRedirect * redirect, unsigned * len); 
#line 916
__declspec(dllimport) extern void __cdecl CppTest_StreamReset(CppTest_StreamRedirect * redirect); 
#line 924
__declspec(dllimport) extern void __cdecl CppTest_ClearRedirects(void); 
#line 933
__declspec(dllimport) extern struct CppTest_DataSource *__cdecl cpptestGetCurrentDataSource(void); 
#line 939
__declspec(dllimport) extern void __cdecl cpptestIgnoreCurrStackElement(void); 


typedef void (__cdecl *CppTestThreadInitCallback)(void); 




__declspec(dllimport) extern void __cdecl cpptestSetThreadInitCallback(CppTestThreadInitCallback callback); 


typedef void (__cdecl *CppTestPropertiesInitCallback)(void); 




__declspec(dllimport) extern void __cdecl cpptestSetPropertiesInitCallback(CppTestPropertiesInitCallback callback); 
#line 961
__declspec(dllimport) extern void __cdecl cpptestInitializeRuntime(CppTestPropertiesInitCallback propInitCallback, CppTestThreadInitCallback threadInitCallback, CppTestEnumTypeString * enumTypeStrings, CppTest_StubInfo ** stubInfos, CppTest_System * system); 
#line 972
__declspec(dllimport) extern void __cdecl cpptestFinalizeRuntime(void); 
#line 978
__declspec(dllimport) extern void __cdecl cpptestCheckMemoryLeaks(const char * file, unsigned line, int isAssert); 




typedef 
#line 980
struct { 
__int64 seconds; 
__int64 nanoseconds; 
} CppTest_Time; 
#line 990
__declspec(dllimport) extern void __cdecl cpptestCheckTimeout(void); 
#line 996
__declspec(dllimport) extern CppTest_Time __cdecl CppTest_TimeInit(__int64 seconds, __int64 nanoseconds); 
#line 1003
__declspec(dllimport) extern CppTest_Time __cdecl CppTest_TimeCurrent(void); 




__declspec(dllimport) extern CppTest_Time __cdecl CppTest_TimeDiff(CppTest_Time t1, CppTest_Time t2); 
#line 1017
__declspec(dllimport) extern int __cdecl CppTest_TimeCompare(CppTest_Time t1, CppTest_Time t2); 
#line 1023
const char *__cdecl CppTestCallProgramWrapper(const char * program, int * pResult, const char * param1, const char * param2, const char * param3); 
#line 1030
__declspec(dllimport) extern void __cdecl cpptestUnhandledExceptionTerminate(void); 
#line 1037
__declspec(dllimport) extern void __cdecl cpptestAssertException(const char * file, unsigned line, const char * message, const char * arg1, const char * arg2, const char * arg3, const char * arg4, int kind); 


void CppTest_InitializeRuntime(void); 

void CppTest_FinalizeRuntime(void); 

__declspec(dllimport) extern char **__cdecl CppTest_CmdLineToArgv(const char * cmdLine, int * argc); 

__declspec(dllimport) extern void __cdecl CppTest_FreeArgv(int argc, char * argv[]); 



__declspec(dllimport) extern CppTest_wchar_t **__cdecl CppTest_CmdLineToArgvW(const CppTest_wchar_t * cmdLine, int * argc); 

__declspec(dllimport) extern void __cdecl CppTest_FreeArgvW(int argc, CppTest_wchar_t * argv[]); 
#line 1056 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_runtime_u.h"
int CppTest_Main(int argc, char * argv[]); 



int CppTest_MainW(int argc, CppTest_wchar_t * argv[]); 
#line 1064 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_runtime_u.h"
void CppTest_ModuleMain(int startAfter); 

__declspec(dllimport) extern const char *__cdecl cpptestStringPool(int id, const char * str); 

__declspec(dllimport) extern void __cdecl cpptestCallStubCallback(const char * userId, ...); 

__declspec(dllimport) extern void __cdecl cpptestCallTriggerCallback(const char * userId); 

__declspec(dllimport) extern void __cdecl cpptestValidateTriggerName(const char * triggerName, const char * file, unsigned line); 

__declspec(dllimport) extern CppTest_StubInfo *__cdecl cpptestGetStubInfo(const char * userId, unsigned context, const char * file, unsigned line); 

__declspec(dllimport) extern void __cdecl cpptestRegisterStubCallback(const char * userId, CppTest_Stub_Callback callbackPtr, const char * file, unsigned line); 

__declspec(dllimport) extern void __cdecl cpptestUnregisterStubCallback(const char * userId, const char * file, unsigned line); 

__declspec(dllimport) extern void __cdecl cpptestUnregisterAllStubCallbacks(void); 

int __cdecl CppTest_IsCurrentContext(const char * context); 
#line 1094 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_runtime_u.h"
__declspec(dllimport) extern void *__cdecl cpptestDsMalloc(size_t size); 


__declspec(dllimport) extern void __cdecl cpptestDsFree(void * str); 


__declspec(dllimport) extern void __cdecl cpptestDsCsvError(CppTest_ErrorCode errorCode, const char * err, const char * file, unsigned line, unsigned column); 



__declspec(dllimport) extern void __cdecl cpptestDsCsvErrorOpeningFile(const char * err, const char * file); 


__declspec(dllimport) extern void __cdecl cpptestNoDsError(const char * dataSourceName); 


__declspec(dllimport) extern void __cdecl cpptestDsErrorInValue(const char * value); 


__declspec(dllimport) extern void __cdecl cpptestDsUnknownValue(const char * name); 


__declspec(dllimport) extern int __cdecl cpptestDsNotInitialized(void); 


__declspec(dllimport) extern int __cdecl cpptestDsMethodNotInitialized(const char * method); 


__declspec(dllimport) extern void __cdecl cpptestAssertCall(const char * message, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestExitCall(int exitCode); 


__declspec(dllimport) extern void __cdecl cpptestAbortCall(void); 


__declspec(dllimport) extern void __cdecl cpptestRiseCall(int exitCode); 



__declspec(dllimport) extern void __cdecl cpptestInvalidParamCalled(const CppTest_wchar_t * expression, const CppTest_wchar_t * function, const CppTest_wchar_t * file, unsigned line); 
#line 1140 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_runtime_u.h"
__declspec(dllimport) extern void __cdecl cpptestTooLargeStackTrace(unsigned maxAllowedStackTraceDepth); 



__declspec(dllimport) extern void __cdecl cpptestTestCaseNotValidated(const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestTriggerError(const char * triggerName, unsigned errorCode, const void * details, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestReport(const char * txt, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line, int reportStackTrace); 


__declspec(dllimport) extern void __cdecl cpptestReportBool(const char * txt, int value, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestReportInteger(const char * txt, __int64 value, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestReportUInteger(const char * txt, unsigned __int64 value, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestReportFloat(const char * txt, double value, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestReportCStr(const char * txt, const char * value, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestReportCStrN(const char * txt, const char * value, unsigned maxSize, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestReportMemBuffer(const char * txt, const void * value, unsigned size, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestReportPtr(const char * txt, int isNull, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestReportEnum(const char * txt, CppTestEnumInfo * enumInfo, __int64 value, CppTest_StubCallInfo * stubCallInfo, int isCpp, const char * file, unsigned line); 



__declspec(dllimport) extern void __cdecl cpptestTriggerReport(const char * triggerName, const char * txt, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestPostConditionBool(const char * valueString, int value, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestPostConditionInteger(const char * valueString, __int64 value, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestPostConditionUInteger(const char * valueString, unsigned __int64 value, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestPostConditionFloat(const char * valueString, double value, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestPostConditionCStr(const char * valueString, const char * value, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestPostConditionCStrN(const char * valueString, const char * value, unsigned maxSize, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestPostConditionMemBuffer(const char * valueString, const void * value, unsigned size, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestPostConditionPtr(const char * valueString, int isNull, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestPostConditionExternal(const char * userMessage, const char * ret, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestPostConditionEnum(CppTestEnumInfo * enumInfo, const char * valueString, __int64 value, int isCpp, const char * file, unsigned line); 



__declspec(dllimport) extern void __cdecl cpptestExternalProcessError(CppTest_ErrorCode errorCode, const char * err); 


__declspec(dllimport) extern void __cdecl cpptestExternalProcessErrorFull(CppTest_ErrorCode errorCode, const char * err, const char * program, const char * param1, const char * param2, const char * param3); 
#line 1224
__declspec(dllimport) extern int __cdecl cpptestAssertion(int value, const char * userMessage, const char * conditionStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 



__declspec(dllimport) extern int __cdecl cpptestBitAssertion(int value, unsigned mask, unsigned expected, unsigned actual, const char * userMessage, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 



__declspec(dllimport) extern int __cdecl cpptestEqualAssertion(int value, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 



__declspec(dllimport) extern int __cdecl cpptestBoolEqualAssertion(int value, int expected, int actual, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 



__declspec(dllimport) extern int __cdecl cpptestIntegerEqualAssertion(int value, __int64 expected, __int64 actual, int hasDelta, __int64 delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 
#line 1246
__declspec(dllimport) extern int __cdecl cpptestUIntegerEqualAssertion(int value, unsigned __int64 expected, unsigned __int64 actual, int hasDelta, unsigned __int64 delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 
#line 1252
__declspec(dllimport) extern int __cdecl cpptestFloatEqualAssertion(int value, double expected, double actual, int hasDelta, double delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 
#line 1258
__declspec(dllimport) extern int __cdecl cpptestFloatFmtEqualAssertion(int value, double actual, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 




__declspec(dllimport) extern int __cdecl cpptestCstrEqualAssertion(int value, const char * expected, const char * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 




__declspec(dllimport) extern int __cdecl cpptestCstrNEqualAssertion(int value, const char * expected, const char * actual, unsigned maxSize, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 




__declspec(dllimport) extern int __cdecl cpptestMemBufferEqualAssertion(int value, const void * expected, const void * actual, unsigned size, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 
#line 1279
__declspec(dllimport) extern int __cdecl cpptestPtrEqualAssertion(int value, const void * expected, const void * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 
#line 1286
__declspec(dllimport) extern int __cdecl cpptestWCstrEqualAssertion(int value, const CppTest_wchar_t * expected, const CppTest_wchar_t * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 
#line 1293 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_runtime_u.h"
__declspec(dllimport) extern int __cdecl cpptestEnumEqualAssertion(int value, CppTestEnumInfo * enumInfo, __int64 expected, __int64 actual, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, int isCpp, const char * file, unsigned line); 




__declspec(dllimport) extern int __cdecl cpptestEqualAssertionFmt(int value, int hasDelta, unsigned * arrayIndex, const char * expectedStr, const char * actualStr, char * expectedFmt, char * actualFmt, char * deltaFmt, int size, int * snprintfResults, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 
#line 1305
__declspec(dllimport) extern void __cdecl cpptestThrowAssertion(int value, const char * userMessage, const char * exceptionTypeStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 



__declspec(dllimport) extern void __cdecl cpptestNoThrowAssertion(int value, const char * userMessage, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 



__declspec(dllimport) extern void __cdecl cpptestTriggerAssertion(const char * triggerName, const char * userMessage, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestNoExpectedExceptionInTestCase(const char * e); 


__declspec(dllimport) extern void __cdecl cpptestStdExceptionInTestCase(const char * what); 


__declspec(dllimport) extern void __cdecl cpptestExceptionInTestCase(void); 


__declspec(dllimport) extern void __cdecl cpptestTestCaseDisabled(const char * name, const char * file, unsigned line); 



__declspec(dllimport) extern int __cdecl cpptestCharPtrsNEqual(const char * expected, const char * actual, unsigned maxSize); 


__declspec(dllimport) extern int __cdecl cpptestMemBuffersEqual(const void * expected, const void * actual, unsigned size); 


__declspec(dllimport) extern int __cdecl cpptestFloatsFmtEqual(const char * expected, double actual); 


__declspec(dllimport) extern void __cdecl cpptestTimeout(unsigned __int64 timeout); 


__declspec(dllimport) extern void __cdecl cpptestUserBreak(const char * file, unsigned line); 




__declspec(dllimport) extern jmp_buf *__cdecl cpptestGetJmpBuf(void); 


__declspec(dllimport) extern void __cdecl cpptestSetJmpCalled(int jmpCalled); 


__declspec(dllimport) extern int __cdecl cpptestGetJmpCalled(void); 


__declspec(dllimport) extern int __cdecl cpptestSetJmpReturn(int jmpReturn); 


__declspec(dllimport) extern int __cdecl cpptestGetJmpReturn(void); 
#line 1362 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_runtime_u.h"
typedef struct CppTestRuntimeCommandHandlerNodeStruct CppTestRuntimeCommandHandlerNode; 

struct CppTestRuntimeCommandHandlerNodeStruct { 

CppTestRuntimeCommandHandlerNode *prev; 

void (__cdecl *handler)(unsigned commandId); 
}; 


__declspec(dllimport) extern void __cdecl cpptestAddRuntimeCommandHandler(CppTestRuntimeCommandHandlerNode * handler); 


__declspec(dllimport) extern void __cdecl cpptestExecuteRuntimeCommand(unsigned commandId); 


void __cdecl cpptestTestCaseSlave(__CPTR_TestCasePtr tc); 


typedef struct CppTestExpectationStruct CppTestExpectation; 
typedef struct CppTestCallSequenceNodeStruct CppTestCallSequenceNode; 

struct CppTestCallSequenceNodeStruct { 

CppTest_StubInfo *stubInfo; 
int times; 
unsigned calls; 
CppTestCallSequenceNode *prev; 
CppTestCallSequenceNode *next; 
CppTestExpectation *expectation; 
}; 


struct CppTestExpectationStruct { 

CppTestExpectation *next; 
const char *file; 
unsigned line; 
unsigned reported; 
unsigned passed; 

void (__cdecl *endOfCheckExpectation)(CppTestExpectation * expectation); 

union { 
struct { 
int min; 
int max; 
CppTest_StubInfo *stubInfo; 
int calls; 
} expectedCalls; 

struct { 
CppTestCallSequenceNode *first; 
CppTestCallSequenceNode *last; 
CppTestCallSequenceNode *it; 
int isLoop; 
int repeat; 
int inside; 
} sequence; 

} variant; 
}; 


void __cdecl cpptestCreateCallExpectation(const char * funcId, int min, int max, const char * file, unsigned line); 


typedef struct CppTestCallSequenceExpectationStruct CppTestCallSequenceExpectation; 
struct CppTestCallSequenceExpectationStruct { 

CppTestCallSequenceExpectation *(__cdecl *Add)(const char * funcId); 
CppTestCallSequenceExpectation *(__cdecl *AddNTimes)(const char * funcId, int times); 
CppTestCallSequenceExpectation *(__cdecl *AddAnyTimes)(const char * funcId); 
}; 

CppTestCallSequenceExpectation *__cdecl cpptestCreateCallSequenceExpectation(int isLoop, const char * file, unsigned line); 


__declspec(dllimport) extern void __cdecl cpptestCallExpectationAssertion(CppTestExpectation * expectation); 


__declspec(dllimport) extern void __cdecl cpptestNullCallSequenceExpectationAssertion(CppTestExpectation * expectation, const char * funcId); 


__declspec(dllimport) extern void __cdecl cpptestWrongCallSequenceExpectationAssertion(CppTestExpectation * expectation, const char * funcId, const char * expectedFuncId); 


__declspec(dllimport) extern void __cdecl cpptestIncompleteCallSequenceExpectationAssertion(CppTestExpectation * expectation); 


__declspec(dllimport) extern void __cdecl cpptestCallSequenceExpectationPassed(CppTestExpectation * expectation); 


__declspec(dllimport) extern void __cdecl cpptestAddChecker(CppTest_StubInfo * stubInfo, CppTest_Checker * checker); 


__declspec(dllimport) extern void __cdecl cpptestRemoveAllCheckers(void); 


__declspec(dllimport) extern void __cdecl cpptestCallCheckers(CppTest_StubInfo * stubInfo); 


__declspec(dllimport) extern int __cdecl CppTest_AtomicIncrement(int * value); 


__declspec(dllimport) extern CppTestEnumInfo *__cdecl cpptestGetEnumInfo(int dummy, const char * enumTypeStr, const char * file, unsigned line); 


__declspec(dllimport) extern __int64 __cdecl cpptestGetEnumeratorValueFromTable(CppTestEnumInfo * enumInfo, const char * enumeratorStr, int isCpp, const char * file, unsigned line); 



__declspec(dllimport) extern const char *__cdecl cpptestGetEnumeratorStrFromTable(CppTestEnumInfo * enumInfo, __int64 value, int isCpp, const char * file, unsigned line); 



__declspec(dllimport) extern __int64 __cdecl cpptestGetEnumeratorValue(int dummy, const char * enumTypeStr, const char * enumeratorNameStr, int isCpp, const char * file, unsigned line); 



__declspec(dllimport) extern const char *__cdecl cpptestGetEnumeratorStr(int dummy, const char * enumTypeStr, __int64 value, int isCpp, const char * file, unsigned line); 
#line 41 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_data_source.h"
typedef 
#line 16 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_data_source.h"
struct CppTest_DataSource { 

const char *(__cdecl *getMemBuffer)(struct CppTest_DataSource *, const char * name, unsigned * size); 
const char *(__cdecl *getCStr)(struct CppTest_DataSource *, const char * name); 

const CppTest_wchar_t *(__cdecl *getWCStr)(struct CppTest_DataSource *, const char * name); 
#line 23 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_data_source.h"
__int64 (__cdecl *getInteger)(struct CppTest_DataSource *, const char * name); 
unsigned __int64 (__cdecl *getUInteger)(struct CppTest_DataSource *, const char * name); 
double (__cdecl *getFloat)(struct CppTest_DataSource *, const char * name); 
int (__cdecl *getBool)(struct CppTest_DataSource *, const char * name); 
char (__cdecl *getChar)(struct CppTest_DataSource *, const char * name); 

int (__cdecl *hasColumn)(struct CppTest_DataSource *, const char * name); 

int (__cdecl *loadNextData)(struct CppTest_DataSource *); 
int (__cdecl *hasMoreData)(struct CppTest_DataSource *); 
unsigned (__cdecl *getIteration)(struct CppTest_DataSource *); 
#line 38 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_data_source.h"
void (__cdecl *finalize)(struct CppTest_DataSource *); 

void *data; 
} CppTest_DataSource; 

typedef CppTest_DataSource *(__cdecl *CppTest_GetDataSourceFPtr)(const char * dataSource, const char * testSuite); 
#line 52
extern CppTest_DataSource *__cdecl CppTest_DsArray(const char ** data, int rows, int columns); 
extern CppTest_DataSource *__cdecl CppTest_DsRepeat(int count); 
extern CppTest_DataSource *__cdecl CppTest_Ds(const char * dataSourceName); 


extern CppTest_DataSource *__cdecl CppTest_DsCsv(const char * fileName, char separator, int useCollumns, int trimValues); 
#line 60 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_data_source.h"
extern void __cdecl CppTest_DsFinalize(struct CppTest_DataSource * ds); 

extern void __cdecl CppTest_DsDumpInt(CppTestExpandableString * es, int i); 

extern const char *__cdecl CppTest_DsGetMemBuffer(struct CppTest_DataSource * ds, const char * name, unsigned * size); 

extern __int64 __cdecl CppTest_DsGetInteger(struct CppTest_DataSource * ds, const char * name); 

extern unsigned __int64 __cdecl CppTest_DsGetUInteger(struct CppTest_DataSource * ds, const char * name); 

extern double __cdecl CppTest_DsGetFloat(struct CppTest_DataSource * ds, const char * name); 

extern int __cdecl CppTest_DsGetBool(struct CppTest_DataSource * ds, const char * name); 

extern char __cdecl CppTest_DsGetChar(struct CppTest_DataSource * ds, const char * name); 

extern int __cdecl CppTest_DsErrorHasMoreData(struct CppTest_DataSource * ds); 

extern const char *__cdecl CppTest_DsErrorGetDataSignature(struct CppTest_DataSource * ds); 

extern unsigned __cdecl CppTest_DsErrorGetIteration(struct CppTest_DataSource * ds); 

extern int __cdecl CppTest_DsRepeatLoadNextData(struct CppTest_DataSource * ds); 

extern unsigned __cdecl CppTest_DsRepeatGetIteration(struct CppTest_DataSource * ds); 

extern int __cdecl CppTest_DsRepeatHasMoreData(struct CppTest_DataSource * ds); 
#line 94 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_data_source.h"
extern void __cdecl CppTest_DsRepeatFinalize(struct CppTest_DataSource * ds); 

extern struct CppTest_DataSource *__cdecl CppTest_DsRepeat(int count); 

extern int __cdecl CppTest_DsArrayLoadNextData(struct CppTest_DataSource * ds); 

extern unsigned __cdecl CppTest_DsArrayGetIteration(struct CppTest_DataSource * ds); 

extern int __cdecl CppTest_DsArrayHasMoreData(struct CppTest_DataSource * ds); 

extern int __cdecl CppTest_DsArrayGetColumn(struct CppTest_DataSource * ds, const char * name); 

extern int __cdecl CppTest_DsArrayHasColumn(struct CppTest_DataSource * ds, const char * name); 

extern const char *__cdecl CppTest_DsArrayGetCStr(struct CppTest_DataSource * ds, const char * name); 


extern const CppTest_wchar_t *__cdecl CppTest_DsArrayGetWCStr(struct CppTest_DataSource * ds, const char * name); 
#line 118 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_data_source.h"
extern void __cdecl CppTest_DsArrayFinalize(struct CppTest_DataSource * ds); 

extern struct CppTest_DataSource *__cdecl CppTest_DsArray(const char ** data, int rows, int columns); 



extern int __cdecl CppTest_DsCsvPeekChar(struct CppTest_DsCsvData * dsCsv); 

extern int __cdecl CppTest_DsCsvReadChar(struct CppTest_DsCsvData * dsCsv); 

extern void __cdecl CppTest_DsCsvGetSkipWS(struct CppTest_DsCsvData * dsCsv); 

extern int __cdecl CppTest_DsCsvIsEndOfField(struct CppTest_DsCsvData * dsCsv, int * pC); 

extern int __cdecl CppTest_DsCsvLoadQuotedField(struct CppTest_DsCsvData * dsCsv, CppTestExpandableString * pEs, int * pC); 

extern int __cdecl CppTest_DsCsvLoadField(struct CppTest_DsCsvData * dsCsv, CppTestExpandableString * pEs, int * pC); 
#line 140 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_data_source.h"
extern int __cdecl CppTest_DsCsvLoadNextData(struct CppTest_DataSource * ds); 

extern unsigned __cdecl CppTest_DsCsvGetIteration(struct CppTest_DataSource * ds); 

extern int __cdecl CppTest_DsCsvHasMoreData(struct CppTest_DataSource * ds); 

extern CppTestListIterator __cdecl CppTest_DsCsvGetColumn(struct CppTest_DataSource * ds, const char * name); 

extern int __cdecl CppTest_DsCsvHasColumn(struct CppTest_DataSource * ds, const char * name); 

extern const char *__cdecl CppTest_DsCsvGetCStr(struct CppTest_DataSource * ds, const char * name); 


extern const CppTest_wchar_t *__cdecl CppTest_DsCsvGetWCStr(struct CppTest_DataSource * ds, const char * name); 
#line 156 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_data_source.h"
extern const char *__cdecl CppTest_DsCsvGetMemBuffer(struct CppTest_DataSource * ds, const char * name, unsigned * size); 
#line 162 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_data_source.h"
extern void __cdecl CppTest_DsCsvFinalize(struct CppTest_DataSource * ds); 

extern struct CppTest_DataSource *__cdecl CppTest_DsCsv(const char * fileName, char separator, int useCollumns, int trimValues); 
#line 169 "c:\\program files (x86)\\parasoft\\c++test for visual studio\\10.4\\engine\\runtime\\include\\cpptest_data_source.h"
extern struct CppTest_DataSource *__cdecl CppTest_Ds(const char * dataSourceName); 
#line 22 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/common.h"
typedef void (*tgr_func_ptr)(); 

typedef struct tgr_value_s tgr_value; 

typedef struct tgr_type_vtbl *tgr_type_vtbl_ptr; 
typedef struct tgr_type *tgr_type_ptr; 
typedef struct tgr_value_s *tgr_value_ptr; 
typedef struct tgr_code *tgr_code_ptr; 
typedef struct tgr_code_helper *tgr_code_helper_ptr; 
typedef struct tgr_trigger_list *tgr_trigger_list_ptr; 
typedef struct tgr_arg *tgr_arg_ptr; 
typedef struct tgr_args *tgr_args_ptr; 
typedef struct tgr_runner *tgr_runner_ptr; 
typedef struct tgr_running_data *tgr_running_data_ptr; 
typedef struct tgr_runner_helper *tgr_runner_helper_ptr; 
typedef struct tgr_trigger *tgr_trigger_ptr; 
typedef struct tgr_class_definition *tgr_class_definition_ptr; 

typedef unsigned tgr_time; 


void *__cdecl tgr_malloc(unsigned size); 


void __cdecl tgr_free(void * ptr); 


unsigned __cdecl tgr_strlen(const char * str); 


int __cdecl tgr_strcmp(const char * str1, const char * str2); 


char *__cdecl tgr_strdup(const char * str); 


tgr_time __cdecl tgr_get_curr_time(void); 
#line 15 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/type.h"
struct tgr_type_vtbl { 

int (__cdecl *is_integer)(tgr_value_ptr value); 

int (__cdecl *is_floating)(tgr_value_ptr value); 

int (__cdecl *is_pointer)(tgr_value_ptr value); 

int (__cdecl *is_func_pointer)(tgr_value_ptr value); 

int (__cdecl *is_object)(tgr_value_ptr value); 

int (__cdecl *is_void)(tgr_value_ptr value); 

int (__cdecl *is_error)(tgr_value_ptr value); 

__int64 (__cdecl *get_integer)(tgr_value_ptr value); 

int (__cdecl *get_bool)(tgr_value_ptr value); 

long double (__cdecl *get_floating)(tgr_value_ptr value); 

void *(__cdecl *get_pointer)(tgr_value_ptr value); 

tgr_func_ptr (__cdecl *get_func_pointer)(tgr_value_ptr value); 

const char *(__cdecl *get_string)(tgr_value_ptr value); 

tgr_value (__cdecl *get_bool_value)(tgr_value_ptr value); 

tgr_value (__cdecl *is_equal)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (__cdecl *is_greater)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (__cdecl *is_greater_or_equal)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (__cdecl *multiply)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (__cdecl *divide)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (__cdecl *plus)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (__cdecl *minus)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (__cdecl *do_assign)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (__cdecl *do_ref_assign)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (__cdecl *do_not)(tgr_value_ptr operand); 

tgr_value (__cdecl *do_inc)(tgr_value_ptr operand); 

tgr_value (__cdecl *do_dec)(tgr_value_ptr operand); 

tgr_value (__cdecl *get_field)(tgr_value_ptr obj, tgr_value_ptr field_name); 

tgr_value (__cdecl *do_at)(tgr_value_ptr arr, tgr_value_ptr idx); 

tgr_value (__cdecl *to_rvalue)(tgr_value_ptr ref); 
}; 

struct tgr_type { 

tgr_type_vtbl_ptr vtbl; 
tgr_type_ptr sub_type; 
tgr_type_ptr ref_type; 
tgr_type_ptr ptr_type; 
tgr_type_ptr array_type; 
tgr_type_ptr next_type; 
unsigned size; 
}; 


tgr_type_ptr __cdecl tgr_type_create(tgr_type_vtbl_ptr vtbl); 


int __cdecl tgr_type_is_integer(tgr_value_ptr value); 


int __cdecl tgr_type_is_floating(tgr_value_ptr value); 


int __cdecl tgr_type_is_pointer(tgr_value_ptr value); 


int __cdecl tgr_type_is_func_pointer(tgr_value_ptr value); 


int __cdecl tgr_type_is_object(tgr_value_ptr value); 


int __cdecl tgr_type_is_void(tgr_value_ptr value); 


int __cdecl tgr_type_is_error(tgr_value_ptr value); 


__int64 __cdecl tgr_type_get_integer(tgr_value_ptr value); 


int __cdecl tgr_type_get_bool(tgr_value_ptr value); 


long double __cdecl tgr_type_get_floating(tgr_value_ptr value); 


void *__cdecl tgr_type_get_pointer(tgr_value_ptr value); 


tgr_func_ptr __cdecl tgr_type_get_func_pointer(tgr_value_ptr value); 
#line 15 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/value.h"
struct tgr_error_wrapper { 

int kind; 
int reported; 
}; 

struct tgr_position_wrapper { 

const char *file; 
unsigned line; 
}; 

struct tgr_value_s { 

union { 
int b; 
char c; 
unsigned char uc; 
signed char sc; 
wchar_t w; 
short s; 
unsigned short us; 
int i; 
unsigned ui; 
long l; 
unsigned long ul; 
__int64 ll; 
unsigned __int64 ull; 
float f; 
double d; 
long double ld; 
const volatile void *ptr; 
tgr_func_ptr func; 
struct tgr_error_wrapper err; 
struct tgr_position_wrapper pos; 
} value; 

tgr_type_ptr type; 
}; 



int __cdecl tgr_value_is_integer(tgr_value_ptr value); 


int __cdecl tgr_value_is_floating(tgr_value_ptr value); 


int __cdecl tgr_value_is_pointer(tgr_value_ptr value); 


int __cdecl tgr_value_is_func_pointer(tgr_value_ptr value); 


int __cdecl tgr_value_is_object(tgr_value_ptr value); 


int __cdecl tgr_value_is_void(tgr_value_ptr value); 


int __cdecl tgr_value_is_error(tgr_value_ptr value); 


__int64 __cdecl tgr_value_get_integer(tgr_value_ptr value); 


int __cdecl tgr_value_get_bool(tgr_value_ptr value); 


long double __cdecl tgr_value_get_floating(tgr_value_ptr value); 


void *__cdecl tgr_value_get_pointer(tgr_value_ptr value); 


tgr_func_ptr __cdecl tgr_value_get_func_pointer(tgr_value_ptr value); 


const char *__cdecl tgr_value_get_string(tgr_value_ptr value); 


tgr_value __cdecl tgr_value_get_bool_value(tgr_value_ptr value); 


tgr_value __cdecl tgr_value_do_not(tgr_value_ptr value); 


tgr_value __cdecl tgr_value_do_inc(tgr_value_ptr value); 


tgr_value __cdecl tgr_value_do_dec(tgr_value_ptr value); 


tgr_value __cdecl tgr_value_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_value_is_not_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_value_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_value_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_value_is_less(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_value_is_less_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_value_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_value_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_value_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_value_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_value_do_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_value_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_value_get_field(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value __cdecl tgr_value_do_at(tgr_value_ptr arr, tgr_value_ptr index); 
#line 40 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/error_type.h"
typedef 
#line 16
enum tgr_error_kind { 

c_tgr_error_unknown, 
c_tgr_error_missing_right_paren, 
c_tgr_error_expected_bool_expression, 
c_tgr_error_wrong_equal_arguments, 
c_tgr_error_wrong_relational_arguments, 
c_tgr_error_wrong_multiply_arguments, 
c_tgr_error_wrong_divide_arguments, 
c_tgr_error_wrong_plus_arguments, 
c_tgr_error_wrong_minus_arguments, 
c_tgr_error_assign_to_rvalue, 
c_tgr_error_wrong_get_field_argument, 
c_tgr_error_wrong_at_argument, 
c_tgr_error_wrong_at_index_type, 
c_tgr_error_assign_incompatible_types, 
c_tgr_error_wrong_not_argument, 
c_tgr_error_wrong_inc_argument, 
c_tgr_error_wrong_dec_argument, 
c_tgr_error_unexpected_end_of_tokens, 
c_tgr_error_expected_an_expression, 
c_tgr_error_wrong_arg_name, 
c_tgr_error_null_func_ptr, 
c_tgr_error_deprecated_assert
} tgr_error_kind; 



int __cdecl tgr_error_type_is_error(tgr_value_ptr value); 


const char *__cdecl tgr_error_type_get_string(tgr_value_ptr value); 


tgr_value __cdecl tgr_error_type_get_bool_value(tgr_value_ptr value); 


tgr_value __cdecl tgr_error_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_error_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_error_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_error_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_error_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_error_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_error_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_error_type_do_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_error_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_error_type_do_not(tgr_value_ptr operand); 


tgr_value __cdecl tgr_error_type_do_inc(tgr_value_ptr operand); 


tgr_value __cdecl tgr_error_type_do_dec(tgr_value_ptr operand); 


tgr_value __cdecl tgr_error_type_get_field(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value __cdecl tgr_error_type_do_at(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value __cdecl tgr_error_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_error_type(void); 


tgr_value __cdecl tgr_error(tgr_error_kind kind); 




tgr_value __cdecl tgr_get_bool_value_error(tgr_value_ptr value); 


tgr_value __cdecl tgr_is_equal_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_is_greater_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_is_greater_or_equal_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_do_multiply_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_do_divide_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_do_plus_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_do_minus_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_do_assign_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_do_ref_assign_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_do_not_error(tgr_value_ptr operand); 


tgr_value __cdecl tgr_do_inc_error(tgr_value_ptr operand); 


tgr_value __cdecl tgr_do_dec_error(tgr_value_ptr operand); 


tgr_value __cdecl tgr_get_field_error(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value __cdecl tgr_do_at_error(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value __cdecl tgr_to_rvalue_error(tgr_value_ptr ref); 
#line 16 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/void_type.h"
int __cdecl tgr_void_type_is_void(tgr_value_ptr value); 


const char *__cdecl tgr_void_type_get_string(tgr_value_ptr value); 


tgr_type_ptr __cdecl tgr_void_type(void); 


tgr_value __cdecl tgr_void(void); 
#line 52 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/instruction.h"
typedef 
#line 16
enum tgr_instruction_kind { 

c_tgr_instruction_assert, 
c_tgr_instruction_fail, 
c_tgr_instruction_report, 
c_tgr_instruction_arg, 
c_tgr_instruction_field, 
c_tgr_instruction_if, 
c_tgr_instruction_else, 
c_tgr_instruction_assign, 
c_tgr_instruction_or, 
c_tgr_instruction_and, 
c_tgr_instruction_equal, 
c_tgr_instruction_not_equal, 
c_tgr_instruction_greater, 
c_tgr_instruction_greater_or_equal, 
c_tgr_instruction_less, 
c_tgr_instruction_less_or_equal, 
c_tgr_instruction_multiply, 
c_tgr_instruction_divide, 
c_tgr_instruction_plus, 
c_tgr_instruction_minus, 
c_tgr_instruction_not, 
c_tgr_instruction_at, 
c_tgr_instruction_inc, 
c_tgr_instruction_dec, 
c_tgr_instruction_value, 
c_tgr_instruction_left_paren, 
c_tgr_instruction_right_paren, 
c_tgr_instruction_run_id, 
c_tgr_instruction_execute, 
c_tgr_instruction_with_arg, 
c_tgr_instruction_return, 
c_tgr_instruction_left_brace, 
c_tgr_instruction_right_brace, 
c_tgr_instruction_line_directive
} tgr_instruction_kind; 

typedef struct tgr_instruction *tgr_instruction_ptr; 

struct tgr_instruction { 


tgr_instruction_kind kind; 
tgr_value arg; 
tgr_instruction_ptr next; 
}; 


typedef struct tgr_instruction_list *tgr_instruction_list_ptr; 

struct tgr_instruction_list { 

tgr_instruction_ptr first; 
tgr_instruction_ptr last; 
}; 


tgr_instruction_ptr __cdecl tgr_create_instruction(tgr_instruction_kind kind); 


tgr_instruction_ptr __cdecl tgr_create_instruction_with_arg(tgr_instruction_kind kind, tgr_value arg); 



int __cdecl tgr_instruction_has_arg(tgr_instruction_ptr instruction); 


void __cdecl tgr_instruction_list_initialize(tgr_instruction_list_ptr list); 


void __cdecl tgr_instruction_list_add(tgr_instruction_list_ptr list, tgr_instruction_ptr instruction); 



void __cdecl tgr_instruction_list_clear(tgr_instruction_list_ptr list); 


void __cdecl tgr_instruction_list_destroy(tgr_instruction_list_ptr list); 
#line 16 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/pos_type.h"
const char *__cdecl tgr_pos_type_get_string(tgr_value_ptr value); 


tgr_type_ptr __cdecl tgr_pos_type(void); 


tgr_value __cdecl tgr_pos(const char * file, unsigned line); 
#line 17 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/boolean_type.h"
int __cdecl tgr_boolean_type_is_integer(tgr_value_ptr value); 


__int64 __cdecl tgr_boolean_type_get_integer(tgr_value_ptr value); 


int __cdecl tgr_boolean_type_get_bool(tgr_value_ptr value); 


long double __cdecl tgr_boolean_type_get_floating(tgr_value_ptr value); 


const char *__cdecl tgr_boolean_type_get_string(tgr_value_ptr value); 


tgr_value __cdecl tgr_boolean_type_get_bool_value(tgr_value_ptr value); 


tgr_value __cdecl tgr_boolean_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_boolean_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_boolean_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 



tgr_value __cdecl tgr_boolean_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_boolean_type_do_not(tgr_value_ptr operand); 


tgr_value __cdecl tgr_boolean_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_boolean_type(void); 


tgr_value __cdecl tgr_boolean(int v); 
#line 17 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/integer_type.h"
int __cdecl tgr_integer_type_is_integer(tgr_value_ptr value); 


int __cdecl tgr_integer_type_get_bool(tgr_value_ptr value); 


long double __cdecl tgr_integer_type_get_floating(tgr_value_ptr value); 


void *__cdecl tgr_integer_type_get_pointer(tgr_value_ptr value); 


const char *__cdecl tgr_integer_type_get_string(tgr_value_ptr value); 


tgr_value __cdecl tgr_integer_type_get_bool_value(tgr_value_ptr value); 


tgr_value __cdecl tgr_integer_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_integer_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_integer_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 




tgr_value __cdecl tgr_integer_type_do_not(tgr_value_ptr operand); 


__int64 __cdecl tgr_char_type_get_integer(tgr_value_ptr value); 


tgr_value __cdecl tgr_char_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_char_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_char_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_char_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_char_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_char_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_char_type(void); 


tgr_value __cdecl tgr_char(char c); 


__int64 __cdecl tgr_schar_type_get_integer(tgr_value_ptr value); 


tgr_value __cdecl tgr_schar_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_schar_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_schar_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_schar_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_schar_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_schar_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_schar_type(void); 


tgr_value __cdecl tgr_schar(signed char sc); 


__int64 __cdecl tgr_uchar_type_get_integer(tgr_value_ptr value); 


tgr_value __cdecl tgr_uchar_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_uchar_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_uchar_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_uchar_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_uchar_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_uchar_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_uchar_type(void); 


tgr_value __cdecl tgr_uchar(unsigned char uc); 



__int64 __cdecl tgr_wchar_t_type_get_integer(tgr_value_ptr value); 


tgr_value __cdecl tgr_wchar_t_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_wchar_t_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_wchar_t_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_wchar_t_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_wchar_t_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_wchar_t_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_wchar_t_type(void); 


tgr_value __cdecl tgr_wchar_t(wchar_t c); 


__int64 __cdecl tgr_short_type_get_integer(tgr_value_ptr value); 


tgr_value __cdecl tgr_short_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_short_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_short_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_short_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_short_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_short_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_short_type(void); 


tgr_value __cdecl tgr_short(short s); 


__int64 __cdecl tgr_ushort_type_get_integer(tgr_value_ptr value); 


tgr_value __cdecl tgr_ushort_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ushort_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ushort_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ushort_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ushort_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ushort_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_ushort_type(void); 


tgr_value __cdecl tgr_ushort(unsigned short us); 


__int64 __cdecl tgr_int_type_get_integer(tgr_value_ptr value); 


tgr_value __cdecl tgr_int_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_int_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_int_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_int_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_int_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_int_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_int_type(void); 


tgr_value __cdecl tgr_int(int i); 


__int64 __cdecl tgr_uint_type_get_integer(tgr_value_ptr value); 


tgr_value __cdecl tgr_uint_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_uint_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_uint_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_uint_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_uint_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_uint_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_uint_type(void); 


tgr_value __cdecl tgr_uint(unsigned ui); 


__int64 __cdecl tgr_long_type_get_integer(tgr_value_ptr value); 


tgr_value __cdecl tgr_long_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_long_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_long_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_long_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_long_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_long_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_long_type(void); 


tgr_value __cdecl tgr_long(long l); 


__int64 __cdecl tgr_ulong_type_get_integer(tgr_value_ptr value); 


tgr_value __cdecl tgr_ulong_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ulong_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ulong_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ulong_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ulong_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ulong_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_ulong_type(void); 


tgr_value __cdecl tgr_ulong(unsigned long ul); 


__int64 __cdecl tgr_llong_type_get_integer(tgr_value_ptr value); 


tgr_value __cdecl tgr_llong_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_llong_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_llong_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_llong_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_llong_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_llong_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_llong_type(void); 


tgr_value __cdecl tgr_llong(__int64 ll); 


__int64 __cdecl tgr_ullong_type_get_integer(tgr_value_ptr value); 


tgr_value __cdecl tgr_ullong_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ullong_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ullong_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ullong_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ullong_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ullong_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_ullong_type(void); 


tgr_value __cdecl tgr_ullong(unsigned __int64 ull); 


tgr_type_ptr __cdecl tgr_integer_type(unsigned size, int sign); 
#line 19 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/ref_type.h"
tgr_value __cdecl tgr_get_referenced_value(tgr_value_ptr value); 


int __cdecl tgr_ref_type_is_integer(tgr_value_ptr value); 


int __cdecl tgr_ref_type_is_floating(tgr_value_ptr value); 


int __cdecl tgr_ref_type_is_pointer(tgr_value_ptr value); 


int __cdecl tgr_ref_type_is_func_pointer(tgr_value_ptr value); 


__int64 __cdecl tgr_ref_type_get_integer(tgr_value_ptr value); 


int __cdecl tgr_ref_type_get_bool(tgr_value_ptr value); 


long double __cdecl tgr_ref_type_get_floating(tgr_value_ptr value); 


void *__cdecl tgr_ref_type_get_pointer(tgr_value_ptr value); 


tgr_func_ptr __cdecl tgr_ref_type_get_func_pointer(tgr_value_ptr value); 


const char *__cdecl tgr_ref_type_get_string(tgr_value_ptr value); 


tgr_value __cdecl tgr_ref_type_get_bool_value(tgr_value_ptr value); 


tgr_value __cdecl tgr_ref_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ref_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ref_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ref_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ref_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ref_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ref_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ref_type_do_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ref_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ref_type_do_not(tgr_value_ptr operand); 


tgr_value __cdecl tgr_ref_type_do_inc(tgr_value_ptr operand); 


tgr_value __cdecl tgr_ref_type_do_dec(tgr_value_ptr operand); 


tgr_value __cdecl tgr_ref_type_get_field(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value __cdecl tgr_ref_type_do_at(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value __cdecl tgr_ref_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_ref_type(tgr_type_ptr sub_type); 
#line 17 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/floating_type.h"
int __cdecl tgr_floating_type_is_floating(tgr_value_ptr value); 


const char *__cdecl tgr_floating_type_get_string(tgr_value_ptr value); 


tgr_value __cdecl tgr_floating_type_get_bool_value(tgr_value_ptr value); 


tgr_value __cdecl tgr_floating_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_floating_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_floating_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 



tgr_value __cdecl tgr_floating_type_do_not(tgr_value_ptr operand); 


__int64 __cdecl tgr_float_type_get_integer(tgr_value_ptr value); 


int __cdecl tgr_float_type_get_bool(tgr_value_ptr value); 


long double __cdecl tgr_float_type_get_floating(tgr_value_ptr value); 


tgr_value __cdecl tgr_float_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_float_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_float_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_float_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_float_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_float_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_float_type(void); 


tgr_value __cdecl tgr_float(float f); 


__int64 __cdecl tgr_double_type_get_integer(tgr_value_ptr value); 


int __cdecl tgr_double_type_get_bool(tgr_value_ptr value); 


long double __cdecl tgr_double_type_get_floating(tgr_value_ptr value); 


tgr_value __cdecl tgr_double_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_double_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_double_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_double_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_double_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_double_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_double_type(void); 


tgr_value __cdecl tgr_double(double d); 


__int64 __cdecl tgr_ldouble_type_get_integer(tgr_value_ptr value); 


int __cdecl tgr_ldouble_type_get_bool(tgr_value_ptr value); 


long double __cdecl tgr_ldouble_type_get_floating(tgr_value_ptr value); 


tgr_value __cdecl tgr_ldouble_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ldouble_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ldouble_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ldouble_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ldouble_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ldouble_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_ldouble_type(void); 


tgr_value __cdecl tgr_ldouble(long double ld); 
#line 19 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/func_ptr_type.h"
int __cdecl tgr_func_ptr_type_is_func_pointer(tgr_value_ptr value); 


int __cdecl tgr_func_ptr_type_get_bool(tgr_value_ptr value); 


tgr_func_ptr __cdecl tgr_func_ptr_type_get_func_pointer(tgr_value_ptr value); 


const char *__cdecl tgr_func_ptr_type_get_string(tgr_value_ptr value); 


tgr_value __cdecl tgr_func_ptr_type_get_bool_value(tgr_value_ptr value); 


tgr_value __cdecl tgr_func_ptr_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_func_ptr_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_func_ptr_type_do_not(tgr_value_ptr operand); 


tgr_value __cdecl tgr_func_ptr_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_func_ptr_type(void); 


tgr_value __cdecl tgr_func(tgr_func_ptr func); 
#line 17 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/class_type.h"
int __cdecl tgr_class_type_is_object(tgr_value_ptr value); 


const char *__cdecl tgr_class_type_get_string(tgr_value_ptr value); 


tgr_value __cdecl tgr_class_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_vtbl_ptr __cdecl tgr_class_type_default_vtbl(void); 


tgr_value __cdecl tgr_object(const volatile void * obj_ptr, tgr_type_ptr class_type); 

struct tgr_class_definition { 

int initialized; 
struct tgr_type_vtbl vtbl; 
struct tgr_type type; 
}; 



void __cdecl tgr_initialize_class_definition(tgr_class_definition_ptr class_definition, unsigned class_size); 
#line 23 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/ptr_type.h"
int __cdecl tgr_ptr_type_is_pointer(tgr_value_ptr value); 


int __cdecl tgr_ptr_type_get_bool(tgr_value_ptr value); 


void *__cdecl tgr_ptr_type_get_pointer(tgr_value_ptr value); 


const char *__cdecl tgr_ptr_type_get_string(tgr_value_ptr value); 


tgr_value __cdecl tgr_ptr_type_get_bool_value(tgr_value_ptr value); 


tgr_value __cdecl tgr_ptr_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ptr_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ptr_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ptr_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value __cdecl tgr_ptr_type_do_not(tgr_value_ptr operand); 


tgr_value __cdecl tgr_ptr_type_get_field(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value __cdecl tgr_ptr_type_do_at(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value __cdecl tgr_ptr_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_ptr_type(tgr_type_ptr sub_type); 


tgr_value __cdecl tgr_void_ptr(const volatile void * ptr); 


tgr_value __cdecl tgr_char_ptr(const volatile char * ptr); 


tgr_value __cdecl tgr_schar_ptr(const volatile signed char * ptr); 


tgr_value __cdecl tgr_uchar_ptr(const volatile unsigned char * ptr); 


tgr_value __cdecl tgr_wchar_t_ptr(const volatile wchar_t * ptr); 


tgr_value __cdecl tgr_short_ptr(const volatile short * ptr); 


tgr_value __cdecl tgr_ushort_ptr(const volatile unsigned short * ptr); 


tgr_value __cdecl tgr_int_ptr(const volatile int * ptr); 


tgr_value __cdecl tgr_uint_ptr(const volatile unsigned * ptr); 


tgr_value __cdecl tgr_long_ptr(const volatile long * ptr); 


tgr_value __cdecl tgr_ulong_ptr(const volatile unsigned long * ptr); 


tgr_value __cdecl tgr_llong_ptr(const volatile __int64 * ptr); 


tgr_value __cdecl tgr_ullong_ptr(const volatile unsigned __int64 * ptr); 


tgr_value __cdecl tgr_float_ptr(const volatile float * ptr); 


tgr_value __cdecl tgr_double_ptr(const volatile double * ptr); 


tgr_value __cdecl tgr_ldouble_ptr(const volatile long double * ptr); 


tgr_value __cdecl tgr_function_ptr(const volatile tgr_func_ptr * ptr); 


tgr_value __cdecl tgr_char_ref(const volatile char * ptr); 


tgr_value __cdecl tgr_schar_ref(const volatile signed char * ptr); 


tgr_value __cdecl tgr_uchar_ref(const volatile unsigned char * ptr); 


tgr_value __cdecl tgr_wchar_t_ref(const volatile wchar_t * ptr); 


tgr_value __cdecl tgr_short_ref(const volatile short * ptr); 


tgr_value __cdecl tgr_ushort_ref(const volatile unsigned short * ptr); 


tgr_value __cdecl tgr_int_ref(const volatile int * ptr); 


tgr_value __cdecl tgr_uint_ref(const volatile unsigned * ptr); 


tgr_value __cdecl tgr_long_ref(const volatile long * ptr); 


tgr_value __cdecl tgr_ulong_ref(const volatile unsigned long * ptr); 


tgr_value __cdecl tgr_llong_ref(const volatile __int64 * ptr); 


tgr_value __cdecl tgr_ullong_ref(const volatile unsigned __int64 * ptr); 


tgr_value __cdecl tgr_float_ref(const volatile float * ptr); 


tgr_value __cdecl tgr_double_ref(const volatile double * ptr); 


tgr_value __cdecl tgr_ldouble_ref(const volatile long double * ptr); 


tgr_value __cdecl tgr_void_ptr_ref(const volatile void * ptr); 


tgr_value __cdecl tgr_func_ptr_ref(const volatile void * ptr); 


tgr_value __cdecl tgr_ptr_ref(const volatile void * ptr, tgr_type_ptr pointed_type); 
#line 23 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/array_type.h"
const char *__cdecl tgr_array_type_get_string(tgr_value_ptr value); 


tgr_value __cdecl tgr_array_type_do_at(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value __cdecl tgr_array_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr __cdecl tgr_array_type(tgr_type_ptr sub_type, unsigned size); 
#line 17 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/code.h"
typedef tgr_value (__cdecl *tgr_external_func_ptr)(tgr_running_data_ptr running_data, tgr_args_ptr args); 


struct tgr_code { 

struct tgr_instruction_list instructions; 
}; 


void __cdecl tgr_code_initialize(tgr_code_ptr code); 


void __cdecl tgr_code_clear(tgr_code_ptr code); 


void __cdecl tgr_code_add_instruction(tgr_code_ptr code, tgr_instruction_kind kind); 


void __cdecl tgr_code_add_instruction_with_arg(tgr_code_ptr code, tgr_instruction_kind kind, tgr_value arg); 
#line 21 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/trigger.h"
typedef 
#line 16
enum tgr_run_mode { 

c_tgr_run_before, 
c_tgr_run_instead_of, 
c_tgr_run_after
} tgr_run_mode; 

struct tgr_trigger { 

char *name; 
tgr_run_mode run_mode; 
unsigned number_of_runs; 
tgr_time creation_time; 
tgr_trigger_ptr next; 
struct tgr_code code; 
}; 

struct tgr_trigger_list { 

tgr_trigger_ptr first; 
tgr_trigger_ptr last; 
}; 



tgr_trigger_ptr __cdecl tgr_trigger_construct(const char * name, tgr_run_mode run_mode); 


void __cdecl tgr_trigger_clear(tgr_trigger_ptr trigger); 


void __cdecl tgr_trigger_destroy(tgr_trigger_ptr trigger); 


void __cdecl tgr_trigger_list_initialize(tgr_trigger_list_ptr list); 


void __cdecl tgr_trigger_list_add(tgr_trigger_list_ptr list, tgr_trigger_ptr trigger); 


void __cdecl tgr_trigger_list_remove(tgr_trigger_list_ptr list, tgr_trigger_ptr to_remove); 


void __cdecl tgr_trigger_list_clear(tgr_trigger_list_ptr list); 
#line 17 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/manager.h"
tgr_trigger_list_ptr __cdecl tgr_get_triggers(void); 


tgr_trigger_ptr __cdecl tgr_add(const char * name, tgr_run_mode run_mode); 


void __cdecl tgr_remove(const char * name); 


void __cdecl tgr_remove_all_with_creation_time(tgr_time start, tgr_time stop); 


void __cdecl tgr_remove_all(void); 
#line 16 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/code_helper.h"
struct tgr_code_helper { 

tgr_code_helper_ptr (__cdecl *Assert)(const char * message); 

tgr_code_helper_ptr (__cdecl *Fail)(const char * message); 

tgr_code_helper_ptr (__cdecl *Report)(const char * message); 

tgr_code_helper_ptr (__cdecl *Arg)(const char * argName); 

tgr_code_helper_ptr (__cdecl *ArgByExpr)(void); 

tgr_code_helper_ptr (__cdecl *Field)(const char * field_name); 

tgr_code_helper_ptr (__cdecl *FieldByExpr)(void); 

tgr_code_helper_ptr (__cdecl *If)(void); 

tgr_code_helper_ptr (__cdecl *Else)(void); 

tgr_code_helper_ptr (__cdecl *Assign)(void); 

tgr_code_helper_ptr (__cdecl *Or)(void); 

tgr_code_helper_ptr (__cdecl *And)(void); 

tgr_code_helper_ptr (__cdecl *Equal)(void); 

tgr_code_helper_ptr (__cdecl *NotEqual)(void); 

tgr_code_helper_ptr (__cdecl *Greater)(void); 

tgr_code_helper_ptr (__cdecl *GreaterOrEqual)(void); 

tgr_code_helper_ptr (__cdecl *Less)(void); 

tgr_code_helper_ptr (__cdecl *LessOrEqual)(void); 

tgr_code_helper_ptr (__cdecl *Multiply)(void); 

tgr_code_helper_ptr (__cdecl *Divide)(void); 

tgr_code_helper_ptr (__cdecl *Plus)(void); 

tgr_code_helper_ptr (__cdecl *Minus)(void); 

tgr_code_helper_ptr (__cdecl *Not)(void); 

tgr_code_helper_ptr (__cdecl *At)(void); 

tgr_code_helper_ptr (__cdecl *Inc)(void); 

tgr_code_helper_ptr (__cdecl *Dec)(void); 

tgr_code_helper_ptr (__cdecl *LP)(void); 

tgr_code_helper_ptr (__cdecl *RP)(void); 

tgr_code_helper_ptr (__cdecl *RunId)(void); 

tgr_code_helper_ptr (__cdecl *Execute)(tgr_external_func_ptr function); 

tgr_code_helper_ptr (__cdecl *WithArg)(const char * name); 

tgr_code_helper_ptr (__cdecl *Return)(void); 

tgr_code_helper_ptr (__cdecl *LB)(void); 

tgr_code_helper_ptr (__cdecl *RB)(void); 

tgr_code_helper_ptr (__cdecl *FileLine)(const char * file, unsigned line); 

tgr_code_helper_ptr (__cdecl *Line)(unsigned line); 

tgr_code_helper_ptr (__cdecl *Value)(tgr_value value); 

tgr_code_helper_ptr (__cdecl *Char)(char c); 

tgr_code_helper_ptr (__cdecl *SChar)(signed char sc); 

tgr_code_helper_ptr (__cdecl *UChar)(unsigned char uc); 

tgr_code_helper_ptr (__cdecl *WChar)(wchar_t w); 

tgr_code_helper_ptr (__cdecl *Short)(short s); 

tgr_code_helper_ptr (__cdecl *UShort)(unsigned short us); 

tgr_code_helper_ptr (__cdecl *Int)(int i); 

tgr_code_helper_ptr (__cdecl *UInt)(unsigned ui); 

tgr_code_helper_ptr (__cdecl *Long)(long l); 

tgr_code_helper_ptr (__cdecl *ULong)(unsigned long ul); 

tgr_code_helper_ptr (__cdecl *LLong)(__int64 ll); 

tgr_code_helper_ptr (__cdecl *ULLong)(unsigned __int64 ull); 

tgr_code_helper_ptr (__cdecl *Float)(float f); 

tgr_code_helper_ptr (__cdecl *Double)(double d); 

tgr_code_helper_ptr (__cdecl *LDouble)(long double ld); 

tgr_code_helper_ptr (__cdecl *Func)(tgr_func_ptr func); 

tgr_code_helper_ptr (__cdecl *VoidPtr)(const volatile void * ptr); 

tgr_code_helper_ptr (__cdecl *CharPtr)(const volatile char * ptr); 

tgr_code_helper_ptr (__cdecl *SCharPtr)(const volatile signed char * ptr); 

tgr_code_helper_ptr (__cdecl *UCharPtr)(const volatile unsigned char * ptr); 

tgr_code_helper_ptr (__cdecl *WCharPtr)(const volatile wchar_t * ptr); 

tgr_code_helper_ptr (__cdecl *ShortPtr)(const volatile short * ptr); 

tgr_code_helper_ptr (__cdecl *UShortPtr)(const volatile unsigned short * ptr); 

tgr_code_helper_ptr (__cdecl *IntPtr)(const volatile int * ptr); 

tgr_code_helper_ptr (__cdecl *UIntPtr)(const volatile unsigned * ptr); 

tgr_code_helper_ptr (__cdecl *LongPtr)(const volatile long * ptr); 

tgr_code_helper_ptr (__cdecl *ULongPtr)(const volatile unsigned long * ptr); 

tgr_code_helper_ptr (__cdecl *LLongPtr)(const volatile __int64 * ptr); 

tgr_code_helper_ptr (__cdecl *ULLongPtr)(const volatile unsigned __int64 * ptr); 

tgr_code_helper_ptr (__cdecl *FloatPtr)(const volatile float * ptr); 

tgr_code_helper_ptr (__cdecl *DoublePtr)(const volatile double * ptr); 

tgr_code_helper_ptr (__cdecl *LDoublePtr)(const volatile long double * ptr); 

tgr_code_helper_ptr (__cdecl *CharRef)(const volatile char * ref); 

tgr_code_helper_ptr (__cdecl *SCharRef)(const volatile signed char * ref); 

tgr_code_helper_ptr (__cdecl *UCharRef)(const volatile unsigned char * ref); 

tgr_code_helper_ptr (__cdecl *WCharRef)(const volatile wchar_t * ref); 

tgr_code_helper_ptr (__cdecl *ShortRef)(const volatile short * ref); 

tgr_code_helper_ptr (__cdecl *UShortRef)(const volatile unsigned short * ref); 

tgr_code_helper_ptr (__cdecl *IntRef)(const volatile int * ref); 

tgr_code_helper_ptr (__cdecl *UIntRef)(const volatile unsigned * ref); 

tgr_code_helper_ptr (__cdecl *LongRef)(const volatile long * ref); 

tgr_code_helper_ptr (__cdecl *ULongRef)(const volatile unsigned long * ref); 

tgr_code_helper_ptr (__cdecl *LLongRef)(const volatile __int64 * ref); 

tgr_code_helper_ptr (__cdecl *ULLongRef)(const volatile unsigned __int64 * ref); 

tgr_code_helper_ptr (__cdecl *FloatRef)(const volatile float * ref); 

tgr_code_helper_ptr (__cdecl *DoubleRef)(const volatile double * ref); 

tgr_code_helper_ptr (__cdecl *LDoubleRef)(const volatile long double * ref); 

tgr_code_helper_ptr (__cdecl *VoidPtrRef)(const volatile void * ref); 

tgr_code_helper_ptr (__cdecl *Object)(const volatile void * obj, tgr_type_ptr class_type); 

tgr_code_helper_ptr (__cdecl *Ptr)(const volatile void * value, tgr_type_ptr element_type); 

tgr_code_helper_ptr (__cdecl *Ref)(const volatile void * value, tgr_type_ptr element_type); 

}; 


tgr_code_ptr *__cdecl tgr_get_curr_code(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_assert(const char * message); 


tgr_code_helper_ptr __cdecl tgr_code_helper_fail(const char * message); 


tgr_code_helper_ptr __cdecl tgr_code_helper_report(const char * message); 


tgr_code_helper_ptr __cdecl tgr_code_helper_arg(const char * argName); 


tgr_code_helper_ptr __cdecl tgr_code_helper_arg_by_expr(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_field(const char * field_name); 


tgr_code_helper_ptr __cdecl tgr_code_helper_field_by_expr(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_if(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_else(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_assign(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_or(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_and(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_equal(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_not_equal(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_greater(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_greater_or_equal(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_less(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_less_or_equal(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_multiply(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_divide(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_plus(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_minus(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_not(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_at(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_inc(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_dec(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_lp(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_rp(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_run_id(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_execute(tgr_external_func_ptr function); 


tgr_code_helper_ptr __cdecl tgr_code_helper_with_arg(const char * name); 


tgr_code_helper_ptr __cdecl tgr_code_helper_return(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_lb(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_rb(void); 


tgr_code_helper_ptr __cdecl tgr_code_helper_file_line(const char * file, unsigned line); 


tgr_code_helper_ptr __cdecl tgr_code_helper_line(unsigned line); 


tgr_code_helper_ptr __cdecl tgr_code_helper_value(tgr_value value); 


tgr_code_helper_ptr __cdecl tgr_code_helper_char(char c); 


tgr_code_helper_ptr __cdecl tgr_code_helper_schar(signed char sc); 


tgr_code_helper_ptr __cdecl tgr_code_helper_uchar(unsigned char uc); 


tgr_code_helper_ptr __cdecl tgr_code_helper_wchar_t(wchar_t w); 


tgr_code_helper_ptr __cdecl tgr_code_helper_short(short s); 


tgr_code_helper_ptr __cdecl tgr_code_helper_ushort(unsigned short us); 


tgr_code_helper_ptr __cdecl tgr_code_helper_int(int i); 


tgr_code_helper_ptr __cdecl tgr_code_helper_uint(unsigned ui); 


tgr_code_helper_ptr __cdecl tgr_code_helper_long(long l); 


tgr_code_helper_ptr __cdecl tgr_code_helper_ulong(unsigned long ul); 


tgr_code_helper_ptr __cdecl tgr_code_helper_llong(__int64 ll); 


tgr_code_helper_ptr __cdecl tgr_code_helper_ullong(unsigned __int64 ull); 


tgr_code_helper_ptr __cdecl tgr_code_helper_float(float f); 


tgr_code_helper_ptr __cdecl tgr_code_helper_double(double d); 


tgr_code_helper_ptr __cdecl tgr_code_helper_ldouble(long double ld); 


tgr_code_helper_ptr __cdecl tgr_code_helper_func(tgr_func_ptr func); 


tgr_code_helper_ptr __cdecl tgr_code_helper_void_ptr(const volatile void * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_char_ptr(const volatile char * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_schar_ptr(const volatile signed char * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_uchar_ptr(const volatile unsigned char * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_wchar_t_ptr(const volatile wchar_t * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_short_ptr(const volatile short * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_ushort_ptr(const volatile unsigned short * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_int_ptr(const volatile int * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_uint_ptr(const volatile unsigned * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_long_ptr(const volatile long * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_ulong_ptr(const volatile unsigned long * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_llong_ptr(const volatile __int64 * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_ullong_ptr(const volatile unsigned __int64 * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_float_ptr(const volatile float * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_double_ptr(const volatile double * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_ldouble_ptr(const volatile long double * ptr); 


tgr_code_helper_ptr __cdecl tgr_code_helper_char_ref(const volatile char * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_schar_ref(const volatile signed char * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_uchar_ref(const volatile unsigned char * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_wchar_t_ref(const volatile wchar_t * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_short_ref(const volatile short * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_ushort_ref(const volatile unsigned short * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_int_ref(const volatile int * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_uint_ref(const volatile unsigned * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_long_ref(const volatile long * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_ulong_ref(const volatile unsigned long * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_llong_ref(const volatile __int64 * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_ullong_ref(const volatile unsigned __int64 * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_float_ref(const volatile float * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_double_ref(const volatile double * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_ldouble_ref(const volatile long double * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_void_ptr_ref(const volatile void * ref); 


tgr_code_helper_ptr __cdecl tgr_code_helper_object(const volatile void * obj, tgr_type_ptr class_type); 



tgr_code_helper_ptr __cdecl tgr_code_helper_pointer(const volatile void * value, tgr_type_ptr element_type); 



tgr_code_helper_ptr __cdecl tgr_code_helper_reference(const volatile void * value, tgr_type_ptr element_type); 



tgr_code_helper_ptr __cdecl tgr_code_helper_instance(void); 


tgr_code_helper_ptr __cdecl tgr_create_full(const char * name, tgr_run_mode run_mode, const char * file, unsigned line); 
#line 476
tgr_code_helper_ptr __cdecl tgr_create(const char * name, tgr_run_mode run_mode); 
#line 39 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/handlers.h"
typedef void (__cdecl *tgr_error_handler_func_ptr)(const char * trigger_name, unsigned error_kind, const void * details, const char * def_file, unsigned def_line); 
#line 45
typedef void (__cdecl *tgr_fail_handler_func_ptr)(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 




typedef void (__cdecl *tgr_report_handler_func_ptr)(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 
#line 86
tgr_error_handler_func_ptr *__cdecl tgr_get_error_handler(void); 


tgr_fail_handler_func_ptr *__cdecl tgr_get_fail_handler(void); 


tgr_report_handler_func_ptr *__cdecl tgr_get_report_handler(void); 


void __cdecl tgr_handle_error(const char * trigger_name, unsigned error_kind, const void * details, const char * def_file, unsigned def_line); 
#line 102
void __cdecl tgr_handle_fail(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 
#line 108
void __cdecl tgr_handle_report(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 
#line 17 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/runner.h"
struct tgr_arg { 

char *name; 
tgr_value value; 
tgr_arg_ptr next; 
}; 

struct tgr_args { 

tgr_arg_ptr first_arg; 
tgr_arg_ptr last_arg; 
unsigned number_of_args; 
}; 

struct tgr_running_data { 

tgr_trigger_ptr trigger; 
unsigned run_id; 
struct tgr_args args; 
}; 


struct tgr_runner { 

struct tgr_running_data running_data; 
char *triggerable_name; 
tgr_run_mode run_mode; 
tgr_instruction_ptr prev_instruction; 
tgr_instruction_ptr curr_instruction; 
int in_false_block; 
tgr_value return_value; 
tgr_runner_ptr prev_runner; 
}; 



tgr_arg_ptr __cdecl tgr_arg_alloc(const char * name, tgr_value value); 


void __cdecl tgr_arg_destroy(tgr_arg_ptr arg); 


void __cdecl tgr_args_initialize(tgr_args_ptr args); 


tgr_value __cdecl tgr_args_get_arg(tgr_args_ptr args, const char * name); 


void __cdecl tgr_args_clear(tgr_args_ptr args); 


void __cdecl tgr_args_add(tgr_args_ptr args, const char * name, const tgr_value value); 


tgr_runner_ptr tgr_runner_alloc(const char * triggerable_name, tgr_run_mode run_mode, tgr_runner_ptr prev_runner); 




void __cdecl tgr_runner_destroy(tgr_runner_ptr runner); 


void __cdecl tgr_runner_skip_directives(tgr_runner_ptr runner); 


void __cdecl tgr_runner_go_to_next_instruction(tgr_runner_ptr runner); 


void __cdecl tgr_runner_get_position_for(tgr_runner_ptr runner, tgr_instruction_ptr instruction, const char ** file, unsigned * line); 
#line 91
int __cdecl tgr_runner_check_for_error_full(tgr_runner_ptr runner, tgr_value_ptr value, const void * details); 




int __cdecl tgr_runner_check_for_error(tgr_runner_ptr runner, tgr_value_ptr value); 



tgr_value __cdecl tgr_runner_make_error_full(tgr_runner_ptr runner, tgr_error_kind kind, const void * details); 




tgr_value __cdecl tgr_runner_make_error(tgr_runner_ptr runner, tgr_error_kind kind); 


int __cdecl tgr_runner_execute_binary_expression(tgr_runner_ptr runner, tgr_value_ptr left, tgr_value_ptr right, tgr_instruction_ptr instruction); 
#line 114
int __cdecl tgr_runner_execute_unary_expression(tgr_runner_ptr runner, tgr_value_ptr operand, tgr_instruction_ptr instruction); 




int __cdecl tgr_runner_execute_built_in_function(tgr_runner_ptr runner, tgr_value_ptr arg, tgr_instruction_ptr instruction); 




int __cdecl tgr_runner_execute_bool_cast(tgr_runner_ptr runner, tgr_value_ptr value); 



int __cdecl tgr_runner_parse_args(tgr_runner_ptr runner, tgr_args_ptr args); 


tgr_value __cdecl tgr_runner_parse_primary_expression(tgr_runner_ptr runner); 


tgr_value __cdecl tgr_runner_parse_postfix_expression(tgr_runner_ptr runner); 


tgr_value __cdecl tgr_runner_parse_unary_expression(tgr_runner_ptr runner); 


tgr_value __cdecl tgr_runner_parse_multiplicative_expression(tgr_runner_ptr runner); 


tgr_value __cdecl tgr_runner_parse_additive_expression(tgr_runner_ptr runner); 


tgr_value __cdecl tgr_runner_parse_relational_expression(tgr_runner_ptr runner); 


tgr_value __cdecl tgr_runner_parse_equality_expression(tgr_runner_ptr runner); 


tgr_value __cdecl tgr_runner_parse_logical_and_expression(tgr_runner_ptr runner); 


tgr_value __cdecl tgr_runner_parse_logical_or_expression(tgr_runner_ptr runner); 


tgr_value __cdecl tgr_runner_parse_assignment_expression(tgr_runner_ptr runner); 


void __cdecl tgr_runner_parse_statement(tgr_runner_ptr runner); 


tgr_value __cdecl tgr_runner_run(tgr_runner_ptr runner); 


void __cdecl tgr_runner_add_arg(tgr_runner_ptr runner, const char * name, const tgr_value arg); 
#line 16 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\trigger/c/runner_helper.h"
struct tgr_runner_helper { 

tgr_runner_helper_ptr (__cdecl *WithValueArg)(const char * name, tgr_value value); 

tgr_runner_helper_ptr (__cdecl *WithCharArg)(const char * name, char c); 

tgr_runner_helper_ptr (__cdecl *WithSCharArg)(const char * name, signed char sc); 

tgr_runner_helper_ptr (__cdecl *WithUCharArg)(const char * name, unsigned char uc); 

tgr_runner_helper_ptr (__cdecl *WithWCharArg)(const char * name, wchar_t w); 

tgr_runner_helper_ptr (__cdecl *WithShortArg)(const char * name, short s); 

tgr_runner_helper_ptr (__cdecl *WithUShortArg)(const char * name, unsigned short us); 

tgr_runner_helper_ptr (__cdecl *WithIntArg)(const char * name, int i); 

tgr_runner_helper_ptr (__cdecl *WithUIntArg)(const char * name, unsigned ui); 

tgr_runner_helper_ptr (__cdecl *WithLongArg)(const char * name, long l); 

tgr_runner_helper_ptr (__cdecl *WithULongArg)(const char * name, unsigned long ul); 

tgr_runner_helper_ptr (__cdecl *WithLLongArg)(const char * name, __int64 ll); 

tgr_runner_helper_ptr (__cdecl *WithULLongArg)(const char * name, unsigned __int64 ull); 

tgr_runner_helper_ptr (__cdecl *WithFloatArg)(const char * name, float f); 

tgr_runner_helper_ptr (__cdecl *WithDoubleArg)(const char * name, double d); 

tgr_runner_helper_ptr (__cdecl *WithLDoubleArg)(const char * name, long double ld); 

tgr_runner_helper_ptr (__cdecl *WithFuncArg)(const char * name, tgr_func_ptr func); 

tgr_runner_helper_ptr (__cdecl *WithObjectArg)(const char * name, const volatile void * obj, tgr_type_ptr type); 



tgr_runner_helper_ptr (__cdecl *WithVoidPtrArg)(const char * name, const volatile void * ptr); 

tgr_runner_helper_ptr (__cdecl *WithCharPtrArg)(const char * name, const volatile char * ptr); 

tgr_runner_helper_ptr (__cdecl *WithSCharPtrArg)(const char * name, const volatile signed char * ptr); 


tgr_runner_helper_ptr (__cdecl *WithUCharPtrArg)(const char * name, const volatile unsigned char * ptr); 


tgr_runner_helper_ptr (__cdecl *WithWCharPtrArg)(const char * name, const volatile wchar_t * ptr); 


tgr_runner_helper_ptr (__cdecl *WithShortPtrArg)(const char * name, const volatile short * ptr); 


tgr_runner_helper_ptr (__cdecl *WithUShortPtrArg)(const char * name, const volatile unsigned short * ptr); 


tgr_runner_helper_ptr (__cdecl *WithIntPtrArg)(const char * name, const volatile int * ptr); 

tgr_runner_helper_ptr (__cdecl *WithUIntPtrArg)(const char * name, const volatile unsigned * ptr); 


tgr_runner_helper_ptr (__cdecl *WithLongPtrArg)(const char * name, const volatile long * ptr); 

tgr_runner_helper_ptr (__cdecl *WithULongPtrArg)(const char * name, const volatile unsigned long * ptr); 


tgr_runner_helper_ptr (__cdecl *WithLLongPtrArg)(const char * name, const volatile __int64 * ptr); 


tgr_runner_helper_ptr (__cdecl *WithULLongPtrArg)(const char * name, const volatile unsigned __int64 * ptr); 


tgr_runner_helper_ptr (__cdecl *WithFloatPtrArg)(const char * name, const volatile float * ptr); 


tgr_runner_helper_ptr (__cdecl *WithDoublePtrArg)(const char * name, const volatile double * ptr); 


tgr_runner_helper_ptr (__cdecl *WithLDoublePtrArg)(const char * name, const volatile long double * ptr); 


tgr_runner_helper_ptr (__cdecl *WithPtrArg)(const char * name, const volatile void * ptr, tgr_type_ptr element_type); 



tgr_runner_helper_ptr (__cdecl *WithCharRefArg)(const char * name, const volatile char * ref); 

tgr_runner_helper_ptr (__cdecl *WithSCharRefArg)(const char * name, const volatile signed char * ref); 


tgr_runner_helper_ptr (__cdecl *WithUCharRefArg)(const char * name, const volatile unsigned char * ref); 


tgr_runner_helper_ptr (__cdecl *WithWCharRefArg)(const char * name, const volatile wchar_t * ref); 


tgr_runner_helper_ptr (__cdecl *WithShortRefArg)(const char * name, const volatile short * ref); 


tgr_runner_helper_ptr (__cdecl *WithUShortRefArg)(const char * name, const volatile unsigned short * ref); 


tgr_runner_helper_ptr (__cdecl *WithIntRefArg)(const char * name, const volatile int * ref); 

tgr_runner_helper_ptr (__cdecl *WithUIntRefArg)(const char * name, const volatile unsigned * ref); 


tgr_runner_helper_ptr (__cdecl *WithLongRefArg)(const char * name, const volatile long * ref); 

tgr_runner_helper_ptr (__cdecl *WithULongRefArg)(const char * name, const volatile unsigned long * ref); 


tgr_runner_helper_ptr (__cdecl *WithLLongRefArg)(const char * name, const volatile __int64 * ref); 


tgr_runner_helper_ptr (__cdecl *WithULLongRefArg)(const char * name, const volatile unsigned __int64 * ref); 


tgr_runner_helper_ptr (__cdecl *WithFloatRefArg)(const char * name, const volatile float * ref); 


tgr_runner_helper_ptr (__cdecl *WithDoubleRefArg)(const char * name, const volatile double * ref); 


tgr_runner_helper_ptr (__cdecl *WithLDoubleRefArg)(const char * name, const volatile long double * ref); 


tgr_runner_helper_ptr (__cdecl *WithVoidPtrRefArg)(const char * name, const volatile void * ref); 


tgr_runner_helper_ptr (__cdecl *WithPtrRefArg)(const char * name, const volatile void * ptr, tgr_type_ptr element_type); 



tgr_runner_helper_ptr (__cdecl *WithRefArg)(const char * name, const volatile void * ptr, tgr_type_ptr element_type); 



tgr_value (__cdecl *End)(); 
}; 


tgr_runner_ptr *__cdecl tgr_get_curr_runner(void); 


tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_value_arg(const char * name, tgr_value arg); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_char_arg(const char * name, char c); 


tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_schar_arg(const char * name, signed char sc); 


tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_uchar_arg(const char * name, unsigned char uc); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_wchar_t_arg(const char * name, wchar_t w); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_short_arg(const char * name, short s); 


tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ushort_arg(const char * name, unsigned short us); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_int_arg(const char * name, int i); 


tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_uint_arg(const char * name, unsigned ui); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_long_arg(const char * name, long l); 


tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ulong_arg(const char * name, unsigned long ul); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_llong_arg(const char * name, __int64 ll); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ullong_arg(const char * name, unsigned __int64 ull); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_float_arg(const char * name, float f); 


tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_double_arg(const char * name, double d); 


tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ldouble_arg(const char * name, long double ld); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_func_arg(const char * name, tgr_func_ptr func); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_object_arg(const char * name, const volatile void * obj, tgr_type_ptr class_type); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_void_ptr_arg(const char * name, const volatile void * ptr); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_char_ptr_arg(const char * name, const volatile char * ptr); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_schar_ptr_arg(const char * name, const volatile signed char * ptr); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_uchar_ptr_arg(const char * name, const volatile unsigned char * ptr); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_wchar_t_ptr_arg(const char * name, const volatile wchar_t * ptr); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_short_ptr_arg(const char * name, const volatile short * ptr); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ushort_ptr_arg(const char * name, const volatile unsigned short * ptr); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_int_ptr_arg(const char * name, const volatile int * ptr); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_uint_ptr_arg(const char * name, const volatile unsigned * ptr); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_long_ptr_arg(const char * name, const volatile long * ptr); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ulong_ptr_arg(const char * name, const volatile unsigned long * ptr); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_llong_ptr_arg(const char * name, const volatile __int64 * ptr); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ullong_ptr_arg(const char * name, const volatile unsigned __int64 * ptr); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_float_ptr_arg(const char * name, const volatile float * ptr); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_double_ptr_arg(const char * name, const volatile double * ptr); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ldouble_ptr_arg(const char * name, const volatile long double * ptr); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ptr_arg(const char * name, const volatile void * ptr, tgr_type_ptr element_type); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_char_ref_arg(const char * name, const volatile char * ref); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_schar_ref_arg(const char * name, const volatile signed char * ref); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_uchar_ref_arg(const char * name, const volatile unsigned char * ref); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_wchar_t_ref_arg(const char * name, const volatile wchar_t * ref); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_short_ref_arg(const char * name, const volatile short * ref); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ushort_ref_arg(const char * name, const volatile unsigned short * ref); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_int_ref_arg(const char * name, const volatile int * ref); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_uint_ref_arg(const char * name, const volatile unsigned * ref); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_long_ref_arg(const char * name, const volatile long * ref); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ulong_ref_arg(const char * name, const volatile unsigned long * ref); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_llong_ref_arg(const char * name, const volatile __int64 * ref); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ullong_ref_arg(const char * name, const volatile unsigned __int64 * ref); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_float_ref_arg(const char * name, const volatile float * ref); 



tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_double_ref_arg(const char * name, const volatile double * ref); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ldouble_ref_arg(const char * name, const volatile long double * ref); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_void_ptr_ref_arg(const char * name, const volatile void * ref); 




tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ptr_ref_arg(const char * name, const volatile void * ref, tgr_type_ptr element_type); 
#line 389
tgr_runner_helper_ptr __cdecl tgr_runner_helper_with_ref_arg(const char * name, const volatile void * ref, tgr_type_ptr element_type); 




tgr_value __cdecl tgr_runner_helper_end(void); 


tgr_runner_helper_ptr __cdecl tgr_runner_helper_instance(void); 


tgr_runner_helper_ptr __cdecl tgr_run(const char * name, tgr_run_mode run_mode); 
#line 721 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\cpptest.h"
static const char *CPPTEST_DS_GET_CSTR(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getCStr || cpptestDsMethodNotInitialized("getCStr"))), (cpptestGetCurrentDataSource()->getCStr))(cpptestGetCurrentDataSource(), name); 
} 

static const CppTest_wchar_t *CPPTEST_DS_GET_WCSTR(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getWCStr || cpptestDsMethodNotInitialized("getWCStr"))), (cpptestGetCurrentDataSource()->getWCStr))(cpptestGetCurrentDataSource(), name); 
} 
#line 731 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\cpptest.h"
static const char *CPPTEST_DS_GET_MEM_BUFFER(const char *name, unsigned *sizePtr) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getMemBuffer || cpptestDsMethodNotInitialized("getMemBuffer"))), (cpptestGetCurrentDataSource()->getMemBuffer))(cpptestGetCurrentDataSource(), name, sizePtr); 
} 
static __int64 CPPTEST_DS_GET_INTEGER(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getInteger || cpptestDsMethodNotInitialized("getInteger"))), (cpptestGetCurrentDataSource()->getInteger))(cpptestGetCurrentDataSource(), name); 
} 
static unsigned __int64 CPPTEST_DS_GET_UINTEGER(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getUInteger || cpptestDsMethodNotInitialized("getUInteger"))), (cpptestGetCurrentDataSource()->getUInteger))(cpptestGetCurrentDataSource(), name); 
} 
static double CPPTEST_DS_GET_FLOAT(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getFloat || cpptestDsMethodNotInitialized("getFloat"))), (cpptestGetCurrentDataSource()->getFloat))(cpptestGetCurrentDataSource(), name); 
} 
static int CPPTEST_DS_GET_BOOL(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getBool || cpptestDsMethodNotInitialized("getBool"))), (cpptestGetCurrentDataSource()->getBool))(cpptestGetCurrentDataSource(), name); 
} 
static char CPPTEST_DS_GET_CHAR(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getChar || cpptestDsMethodNotInitialized("getChar"))), (cpptestGetCurrentDataSource()->getChar))(cpptestGetCurrentDataSource(), name); 
} 




static unsigned CPPTEST_DS_GET_ITERATION(void) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getIteration || cpptestDsMethodNotInitialized("getIteration"))), (cpptestGetCurrentDataSource()->getIteration))(cpptestGetCurrentDataSource()); 
} 
static int CPPTEST_DS_HAS_COLUMN(const char *name) 
{ 
if (cpptestGetCurrentDataSource() && ((((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->hasColumn || cpptestDsMethodNotInitialized("hasColumn"))), (cpptestGetCurrentDataSource()->hasColumn)))) { 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->hasColumn || cpptestDsMethodNotInitialized("hasColumn"))), (cpptestGetCurrentDataSource()->hasColumn))(cpptestGetCurrentDataSource(), name); 
}  
return 0; 
} 
#line 998 "C:\\Program Files (x86)\\Parasoft\\C++test for Visual Studio\\10.4\\engine\\runtime\\include\\cpptest.h"
typedef int CPPTEST_CALL_ROUTINE(const char *); 
#line 36 "C:\\unittest_calc\\calculation\\calculation\\stubs\\check.c"
int Check_number(char * calc); 
#if defined(CPPTEST_USER_STUB_Check_number)
#line 37
int CppTest_Stub_Check_number_Check_number(char *calc) 
{ 
int __return = 0; 
#line 56
if (CppTest_StubInfo_user_Check_number_1.callbackPtr) {
    typedef void (*__signature)(CppTest_StubCallInfo*, int*, char *);
    CppTest_StubCallInfo __CPTR_sci;
    __CPTR_sci.stubInfo = &CppTest_StubInfo_user_Check_number_1;
    __CPTR_sci.callNo = CppTest_AtomicIncrement(&CppTest_StubInfo_user_Check_number_1.lastCallNo);
    ((__signature)CppTest_StubInfo_user_Check_number_1.callbackPtr)(&__CPTR_sci, &__return, calc);
}
if (CppTest_StubInfo_user_Check_number_1.firstChecker) {
    cpptestCallCheckers(&CppTest_StubInfo_user_Check_number_1);
}
; 
#line 58
return __return; 
} 
#endif

#line 1 "__TEST_HARNESS__"
;

