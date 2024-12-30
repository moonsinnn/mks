


DWORD libanogsBase = 0;
DWORD libUE4Base = 0;
DWORD libanortBase = 0;
DWORD libEGLBase = 0;
DWORD libanogsAlloc = 0;
DWORD libUE4Alloc = 0;
DWORD libEGLAlloc = 0;
unsigned int libanogsSize = 0x33547D;
unsigned int libUE4Size = 0x822A4B0;
char *learn_all_free;
DWORD NewBase = 0;

#define DefineHook(RET, NAME, ARGS) \
  RET(*o##NAME)                 \
  ARGS;                             \
  RET t_##NAME ARGS
////////////////
    
int (*osub_2416A4)(int a1, const char *a2, int a3, int a4);
int sub_2416A4(int a1, const char *a2, int a3, int a4)
{
    if(a2 != nullptr)
    {
       return 0;
    }
 return osub_2416A4(a1,a2,a3,a4);
}    


int (*sub_caller)(int a1, unsigned int a2, int a3);
int __fastcall hook_sub_caller(int a1, unsigned int a2, int a3)
      {
  if ((a2 > 0xC98 || a2 == 0xC96) && a2 != 0xC46 )
    return sub_caller(a1, a2, a3);
  else
    return 0;
}


DefineHook(int, sub_60A34, (int a1, unsigned char *a2, size_t a3))
{
if(a3 == 0x62)
	{
		return 0;
	}
	else{
		return orig_sub_60A34(a1, a2, a3);
	}
}





int *(*sub_28F3D0)(int a1, unsigned int a2);
int *__fastcall hook_sub_28F3D0(int a1, unsigned int a2)
{
  if(a2 == 4)
  {
    a2 = 5;
  } 
  return sub_28F3D0(a1, a2);
}


int (*osub_idkk)(int a1, char *a2);
int __fastcall hsub_idkk(int a1, char *a2)
{
  if ( strstr(a2, "com.tencent.ig")
    || strstr(a2, "com.pubg.krmobile")
    || strstr(a2, "com.rekoo.pubgm")
    || strstr(a2, "com.vng.pubgmobile")
    || strstr(a2, "signingInfo")
    || strstr(a2, "getApkContentsSigners")
    || strstr(a2, "signatures")
    || strstr(a2, "[Landroid/content/pm/Signature;")
    || strstr(a2, ".apk")
    || strstr(a2, "/data/app")
    || strstr(a2, "/lib/arm/")
    || strstr(a2, "/app_tbs/")
    || strstr(a2, "getPackageManager")
    || strstr(a2, "()Landroid/content/pm/PackageManager;")
    || strstr(a2, "()Landroid/")
    || strstr(a2, "android/content/pm/PackageManager")
    || strstr(a2, "android")
    || strstr(a2, "(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;")
    || strstr(a2, "java/lang/Class")
    || strstr(a2, "[Landroid/")
    || strstr(a2, "ro.build.version.sdk")
    || strstr(a2, "egl")
    || strstr(a2, "ro.boot.")
    || strstr(a2, "orange.")
    || strstr(a2, "unlocked.")
    || strstr(a2, "SHA-256")
    || strstr(a2, "/dev/")
    || strstr(a2, "sys.oem_unlock_allowed")
    || strstr(a2, "setAttestationChallenge")
    || strstr(a2, "/sdcard/")
    || strstr(a2, "/sys/")
    || strstr(a2, "/data/") )
  {
    return 0;
  }
  else
  {
    return osub_idkk(a1, a2);
  }
}


int (*osub_2A1AB4)(const char* a1, int a2, int a3);
int hsub_2A1AB4(const char* a1, int a2, int a3)
{
  return osub_2A1AB4("mode77", a2, a3);
}


void* hook_memcpy(char *dest, const char *src, size_t size)
{
    if ((DWORD)src >= libanogsBase && (DWORD)src <= (DWORD)(libanogsBase + libanogsSize))
    {
        learn_all_free = (char *)(src - (char *)libanogsBase);
        NewBase = libanogsAlloc;
        src = &learn_all_free[NewBase];
        return memcpy(dest, src, size);
    }
    if ((DWORD)src >= libUE4Base && (DWORD)src <= (DWORD)(libUE4Base + libUE4Size))
    {
        learn_all_free = (char *)(src - (char *)libUE4Base);
        NewBase = libUE4Alloc;
        src = &learn_all_free[NewBase];
        return memcpy(dest, src, size);
    }
    return memcpy(dest, src, size);
}		
		
int ret_min1()
{
  return -1;
}

