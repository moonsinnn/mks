//第1部分定义
#define _DWORD uint32_t
#define _QWORD uint64_t


unsigned int libanogsSize = 0x33547D;
unsigned int libUE4Size = 0x822A4B0;
bool EnableLog = true;
DWORD libanogsBase = 0;
DWORD libUE4Base = 0;
DWORD libanortBase = 0;
DWORD libEGLBase = 0;
DWORD libhdmpveBase = 0;
DWORD libanogsAlloc = 0;
DWORD libUE4Alloc = 0;
DWORD libEGLAlloc = 0; 
DWORD libhdmpveAlloc = 0; 

DWORD NewBase = 0;
char *Offset;

DWORD LibcAlloc = 0;
//DWORD Ue4Alloc = 0;
DWORD EglAlloc = 0;
DWORD libcBase = 0;
DWORD libue4_base = 0;
DWORD libEgl_base = 0;

//////////



//////


/////

unsigned int libcSize = 0xC3000;
unsigned int libEglSize = 0x2000;


#define _BYTE  uint8_t
#define _WORD  uint16_t
#define _DWORD uint32_t
#define _QWORD uint64_t





//第2部分 ida模板
void* hook_memcpyUE4(void *dest, const void *src, size_t size)
{
    if ((DWORD)src >= libanogsBase && (DWORD)src <= (DWORD)(libanogsBase + libanogsSize))
    {
       return 0;
    }    
    return memcpy(dest, src, size);
}


void* hook_memcpy(char* dest, const char* src, unsigned int size)
{
    char* destination = dest;
    DWORD SubBase = 0;
    if ((char*)libcBase <= src && (char*)(libcBase + libcSize) > src)
    {
        dest = (char*)(src - (char*)libcBase);
        SubBase = LibcAlloc;
    Change_Src:
        src = &dest[SubBase];
        goto Return_Code;
    }
    if ((char*)libEgl_base <= src && (char*)(libEglSize + libEgl_base) > src)
    {
        dest = (char*)(src - (char*)libEgl_base);
        SubBase = EglAlloc;
        goto Change_Src;
    }
    if (size > 0x10000 && (char*)libUE4Base <= src && DWORD(libUE4Base + libUE4Size) > (DWORD)src)
    {
        dest = (char*)(src - (char*)libUE4Base);
        SubBase = libUE4Alloc;
        goto Change_Src;
    }
    if (size > 0x10000 && (char*)libanogsBase <= src && (char*)libanogsBase + libanogsSize > src)
    {
        dest = (char*)(src - (char*)libanogsBase);
        SubBase = libanogsAlloc;
        goto Change_Src;
    }
Return_Code:
    return memcpy(destination, src, size);
}

int (*old_IsEnable)(int a1, char* a2, int a3);
int IsEnable(int a1, char* a2, int a3)
{
	
    if (
	//strstr(a2, "up") ||
//	strstr(a2, "ace_worker") ||
	//strstr(a2, "rpdata2") ||
strstr(a2, "scan_x86") ||
strstr(a2, "scan_x86_by_mem") ||
//strstr(a2, "scan1") ||


        strstr(a2, "9003_cert_md5") ||
        strstr(a2, "blur_exit") ||
        strstr(a2, "crash_various_opcode") ||
    strstr(a2,"opcode_crash") || 
    strstr(a2,"crash")
   
   
   
     
        ) {
      //  LOGI(OBFUSCATE("BLOCKED|%s"), a2);
	  
        return 0;
    }
    else {
     //  LOGI(OBFUSCATE("ALLOWED|%s"), a2);
        return old_IsEnable(a1, a2, a3);
    }
}



int (*osub_60A34)(int a1, unsigned char *a2, size_t a3);
int sub_60A34(int a1, unsigned char *a2, size_t a3)
{
	
if (a3 == 0x1a) { return 0; }
if (a3 == 0x2e) { return 0; }
if (a3 == 0x3a) { return 0; }
if (a3 == 0x52) { return 0; }
if (a3 == 0x62) { return 0; }
if (a3 == 0x50) { return 0; }
if (a3 == 0x3e) { return 0; }
if (a3 == 0x33) { return 0; }
if (a3 == 0x32) { return 0; }
if (a3 == 0x4e) { return 0; }

    return osub_60A34(a1,a2,a3);

     
}

int (*osub_EE4C0) (int a1, unsigned int a2, int a3);
int sub_EE4C0 (int a1, unsigned int a2, int a3) {
    
if(a2 == 0xc94) { return 0; }

if(a2 == 0xc95) { return 0; }
if(a2 == 0xc97) { return 0; }
if(a2 == 0xc98) { return 0; }
if(a2 == 0xc46) { return 0; }




return osub_EE4C0(a1,a2,a3);

}




int* __fastcall (*osub_28CC60)(int a1, unsigned int a2); // remove sdk report data :)
int* __fastcall hsub_28CC60(int a1, unsigned int a2)
{
    auto ret = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    if (a2 == 4) {
        return osub_28CC60(a1, 5u);
    }
    //LOGI("hsub_28CC60 : %d" , a2);
    return osub_28CC60(a1, a2);
}



////////////////////////////////----ANORT FIX CRASH -----/////////////////////////


int (*osub_27D814)(_BYTE *a1, int a2, const char *a3, ...);
int sub_27D814(_BYTE *a1, int a2, const char *a3, ...)
{

  
        return 0;



}


int __fastcall (*osub_1B45CC)(int a1, const char *a2);
int __fastcall sub_1B45CC(int a1, const char *a2)
{
 
    if (
	
	
 strstr(a2, "com.tencent.ig") || //
 strstr(a2, "com.pubg.krmobile") || //
 strstr(a2, "com.rekoo.pubgm") || //
 strstr(a2, "com.vng.pubgmobile") || //
 strstr(a2, "signingInfo") || //
 strstr(a2, "getApkContentsSigners") || //
 strstr(a2, "signatures") || //
 strstr(a2, "[Landroid/content/pm/Signature;") || //
 strstr(a2, ".apk") || 
 strstr(a2, "/data/app") || 
 strstr(a2, "/lib/arm/") || 
 strstr(a2, "/app_tbs/") || 
 strstr(a2, "getPackageManager") || 
 strstr(a2, "()Landroid/content/pm/PackageManager;") || 
 strstr(a2, "()Landroid/") || 
 strstr(a2, "android/content/pm/PackageManager") || 
 strstr(a2, "android") || 
 strstr(a2, "(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;") || 
 strstr(a2, "java/lang/Class") || 
 strstr(a2, "[Landroid/") || 
 strstr(a2, "ro.build.version.sdk") || //
 strstr(a2, "egl") || //eglswapbuffer detection
     strstr(a2, "ro.boot.") || //block threads like vbmeta img detection , bootloader state etc.
     strstr(a2, "orange.") || //orange fox recovery detection
     strstr(a2, "unlocked.") || //bootloader status
     strstr(a2, "SHA-256") || //module detection
     strstr(a2, "/dev/") || //root directory 
     strstr(a2, "sys.oem_unlock_allowed") || //oem unlock detect
     strstr(a2, "setAttestationChallenge") || //safety net  test
     strstr(a2, "/sdcard/") || //root directory check
     strstr(a2, "/sys/") || //root directory check
     strstr(a2, "/data/")) //root directory check
 
 
 
    {
        return 0LL;
    }

    return osub_1B45CC(a1, a2);
}

int (*osub_ReportData)();
int hsub_ReportData()
{
	
    return 0;
}
int (*osub_ReportData2)();
int hsub_ReportData2()
{
	
    return 0;
}

int (*osub_141EA8)(int a1, int a2, unsigned __int16 a3, int a4);
int sub_141EA8(int a1, int a2, unsigned __int16 a3, int a4)
{
  int ret = 0;
  if(a3 == 24 || a3 == 94 || a3 == 34)
  {
    ret = osub_141EA8(a1, a2, a3, a4);
  }else{
    ret = osub_141EA8(a1, 0, a3, a4);
  }
  return ret;
}







int (*osub_31880) (int a1, const char *a2, int a3);
int sub_31880 (int a1, const char *a2, int a3)
{
	
    return 0;
}












int (*osub_318800) (int a1, int a2, DWORD *a3, char *a4, char *a5);
int sub_318800 (int a1, int a2, DWORD *a3, char *a4, char *a5)
{
    return osub_318800(a1, a2, a3, a4, a5);
}

int (*osub_EBB60)(int a1, int a2);
int sub_EBB60(int a1, int a2)
{
    return osub_EBB60(a1, a2);
}

int (*osub_EB804)(int a1);
int sub_EB804(int a1)
{
    return osub_EB804(a1);
}	

int *__fastcall (*osub_10F06C)(int *a1);
int *__fastcall sub_10F06C(int *a1)
{

    return osub_10F06C(a1);
}
int __fastcall (*Osub_749A97C)(int a1);
int __fastcall sub_749A97C(int a1)
{

return Osub_749A97C(a1);
}
int (*osub_2A2D6E8) (int result);

int sub_2A2D6E8 (int result) {
    


return 0;

}



int (*osub_3DFF4)();
int sub_3DFF4()
{
    return osub_3DFF4();
}

int __fastcall (*osub_1A9974)(int a1, FILE *a2, int a3, int a4);
int __fastcall sub_1A9974(int a1, FILE *a2, int a3, int a4)
{

    return  osub_1A9974(a1,a2,a3,a4);

}

int __fastcall (*osub_FC330)(int a1);
int __fastcall sub_FC330(int a1)
{
    return osub_FC330(a1);
}

int __fastcall (*osub_1108D0)(int a1, int a2);
int __fastcall sub_1108D0(int a1, int a2)
{

    return osub_1108D0(a1,a2);

}

int __fastcall (*osub_110A34)(int a1);
int __fastcall sub_110A34(int a1)
{
    return osub_110A34(a1);
}

int __fastcall (*osub_110A08)(int *a1);
int __fastcall sub_110A08(int *a1)
{
    return osub_110A08(a1);
}

int  (*osub_E0CF0) (int a1, const void *a2, int a3, void **a4);
int  sub_E0CF0 (int a1, const void *a2, int a3, void **a4)
{
    return osub_E0CF0(a1,a2,a3,a4);
}

int __fastcall (*osub_EF154)(int a1, int a2, char *a3, int a4);
int __fastcall sub_EF154(int a1, int a2, char *a3, int a4)
{
    return osub_EF154(a1,a2,a3,a4);
}

int (*osub_F7F38)();
int sub_F7F38()
{

    return osub_F7F38();

}


int (*osub_hunt)(int a1);
int sub_hunt(int a1)
{

  
return osub_hunt(a1);

}

int (*osub_hunt1)(int a1);
int sub_hunt1(int a1)
{

  
return osub_hunt1(a1);

}



int (*osub_hunt2)(int a1, int a2);
int sub_hunt2(int a1, int a2)
{


return 0;

}


int (*osub_hunt3)(_DWORD *a1);
int sub_hunt3(_DWORD *a1)
{

  
return 0;

}


int (*osub_hunt4)(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
int sub_hunt4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  
return 0;

}


int (*osub_hunt5)(int a1);
int sub_hunt5(int a1)
{

  
return 0;

}
int (*osub_hunt6)();
int sub_hunt6()
{

  
return 0;

}
int (*osub_hunt7)();
int sub_hunt7()
{

  
return 0;

}




_DWORD *__fastcall(*osub_hunt9)(unsigned __int8 **a1);
_DWORD *__fastcall sub_hunt9(unsigned __int8 **a1)
{

  
return 0;

}
int __fastcall (*osub_hunt10)(unsigned __int8 *a1);
int __fastcall sub_hunt10(unsigned __int8 *a1)
{

  
return 0;

}



int __fastcall (*osub_hunt99)(int a1, int a2);
int __fastcall sub_hunt99(int a1, int a2)
{

  
return 0;

}





int __fastcall (*osub_MemoryFuck5)(int a1, int a2);
int __fastcall sub_MemoryFuck5(int a1, int a2)
{

  
return 0;

}

int __fastcall (*osub_MemoryFuck6)(int a1);
int __fastcall sub_MemoryFuck6(int a1)
{

  
return 0;

}

int __fastcall (*osub_MemoryFuck7)(int a1, int a2);
int __fastcall sub_MemoryFuck7(int a1, int a2)
{

  
return 0;

}

int __fastcall (*osub_MemoryFuck8)(int a1);
int __fastcall sub_MemoryFuck8(int a1)
{

  
return 0;

}
int __fastcall (*osub_hunt66)(int a1, int a2, unsigned __int16 a3, int a4);
int __fastcall sub_hunt66(int a1, int a2, unsigned __int16 a3, int a4)
{
	
if (a3 == 0x3a) { return 0; }
if (a3 == 0x1e) { return 0; }
if (a3 == 0x2e) { return 0; }
if (a3 == 0x5e) { return 0; }
if (a3 == 0x4e) { return 0; }
if (a3 == 0x62) { return 0; }
if (a3 == 0x56) { return 0; }
if (a3 == 0x32) { return 0; }
if (a3 == 0x1a) { return 0; }
if (a3 == 0x22) { return 0; }
if (a3 == 0x72) { return 0; }
if (a3 == 0x3a) { return 0; }
if (a3 == 0x2a) { return 0; }
if (a3 == 0x52) { return 0; }
if (a3 == 0x16) { return 0; }
if (a3 == 0x3e) { return 0; }

  
  
  
return osub_hunt66(a1,a2,a3,a4);

}
int __fastcall (*osub_hunt55)(int a1);
int __fastcall sub_hunt55(int a1)
{

  
return 0;


}

int __fastcall (*osub_MemoryFuck)(int a1);
int __fastcall sub_MemoryFuck(int a1)
{

  
return 0;

}
unsigned int __fastcall (*osub_MemoryFuck1)(int a1, int a2);
unsigned int __fastcall sub_MemoryFuck1(int a1, int a2)
{

  
return 0;

}
int __fastcall (*osub_MemoryFuck2)(int a1, int a2);
int __fastcall sub_MemoryFuck2(int a1, int a2)
{

  
return 0;

}

int __fastcall (*osub_MemoryFuck3)(int a1, int a2);
int __fastcall sub_MemoryFuck3(int a1, int a2)
{

  
return 0;

}

int __fastcall (*osub_MemoryFuck4)();
int __fastcall sub_MemoryFuck4()
{

  
return 0;

}


int __fastcall (*osub_hunt88)(int a1, const char *a2, int a3, int a4);
int __fastcall sub_hunt88(int a1, const char *a2, int a3, int a4)
{

  
return 0;

}


int __fastcall (*osub_hunt77)(int a1, unsigned __int16 a2);
int __fastcall sub_hunt77(int a1, unsigned __int16 a2)
{

  
return 0;

}




int *__fastcall (*osub_Fucksystem)(int);
int __fastcall sub_Fucksystem(int a1)
{

  
return 0;

}



int __fastcall (*osub_Fucksystemm)(int a1);
int __fastcall sub_Fucksystemm(int a1)
{

  
return 0;

}

int (*osub_E2172)(const char* a1, unsigned int a2);
int hsub_E2172(const char* a1, unsigned int a2)
{
    while (true)
    {
        sleep(100000000000);//166/24
    }
    return osub_E2172(a1, a2);
}



int __fastcall (*osub_case37)(int a1,
        int a2,        int a3,
        int a4,        int a5,
        double a6,        double a7,
        double a8,        double a9,
        int a10,        int a11,
        int a12,        int a13,
        int a14,        int a15,
        int a16,        int a17,
        int a18);
int __fastcall sub_case37(int a1,
        int a2,        int a3,
        int a4,        int a5,
        double a6,        double a7,
        double a8,        double a9,
        int a10,        int a11,
        int a12,        int a13,
        int a14,        int a15,
        int a16,        int a17,
        int a18)
{

return 0;

}



int __fastcall (*osub_memory)(int a1);
int __fastcall sub_memory(int a1)
{

  
return 0;

}

int __fastcall (*osub_memory1)(int a1, int a2, int a3);
int __fastcall sub_memory1(int a1, int a2, int a3)
{

  
return 0;

}
int __fastcall (*osub_memory2)();
int __fastcall sub_memory2()
{

  
return 0;

}




int __fastcall (*osub_memory3)(int a1, void **a2, _DWORD *a3);
int __fastcall sub_memory3(int a1, void **a2, _DWORD *a3)
{

  
return 0;

}



int __fastcall (*osub_memory4)(int a1);
int __fastcall sub_memory4(int a1)
{

  
return 0;

}


int __fastcall (*osub_memory5)(int a1);
int __fastcall sub_memory5(int a1)
{

  
return 0;

}

  


_BYTE* (*GameProtector3)(int a1, _BYTE* a2, int a3);
_BYTE* GameProtector3Hook(int a1, _BYTE* a2, int a3)
{
  return GameProtector3((int)"mode77", a2, a3);
}
/*int (*osub_26BFD0)(const char *a1, unsigned int a2);
int hsub_26BFD0(const char *a1, unsigned int a2)
{
  *(_DWORD *)(a1 - 106);
  *(_QWORD *)(a1 + 1068);
  *(_QWORD *)(a1 + 1072);
  return hsub_26BFD0(a1,a2);
}*/

int (*osub_2416A4)(int a1, const char *a2, int a3, int a4);
int sub_2416A4(int a1, const char *a2, int a3, int a4)
{
    if(a2 != nullptr)
    {
       return 0;
    }
 return osub_2416A4(a1,a2,a3,a4);
}

int __fastcall (*osub_143480)(int a1, int a2);
int __fastcall sub_143480(int a1, int a2) {

//LOGI("sub_143480 : a1 : %x , a2 : %x",a1,a2);
return 0;

}



//下面的防抠出来放在你的那个即可





void* MOFG(void*)
{
	
	LOGI("ANOGS DONE");
	
while (!isLibraryLoaded("libanogs.so")) sleep(1);

return NULL;
}




int (*osub_3FA5A4C)(int result, int a2);
int hsub_3FA5A4C(int result, int a2)
{
    //if (EnableLog) LOGI("Game is Checking Cheats");
    return -1;
}


  




        void* UNITY(void*)
{

LOGI("UE4 DONE");
do {
        sleep(1);
    } while (!isLibraryLoaded(OBFUSCATE("libUE4.so")));
 
    libUE4Base = findLibrary(OBFUSCATE("libUE4.so"));
    libUE4Alloc = (DWORD)malloc(libUE4Size);
    memcpy((void *)libUE4Alloc, (void *)libUE4Base, libUE4Size);
		
	













	return NULL;
}
