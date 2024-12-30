#include "Includes.h"
#include "Tools.h"
#include "fake_dlfcn.h"
#include "imgui/imgui.h"
#include "imgui/stb_image.h"  
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include "StrEnc.h"
#include "Spoof.h"
#include "plthook.h"
#include "Items.h"
#include "NIKECheat/ImguiPP.h"
#include "json.hpp"
using json = nlohmann::json;
#include "SDK.hpp"
using namespace SDK;
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include "base64/base64.h"
#include <jni.h>
#include <string>
#include <list>
#include <vector>
#include <string.h>
#include <pthread.h>
#include <cstring>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <Includes/Utils.h>

#include "Vector3.hpp"

/*
#include "bypass.h"
#include "bypass.cpp"*/

#include "Menu.h"

#include "小鱼字体.h"

#include "logo.h"

#include "数组图片/定义文件.h"

//#include "xhook/xhook.h"

#include "Dobby/dobby.h"
#include "KittyMemory/MemoryPatch.h"
#include "KittyMemory/MemoryBackup.h"
#include "KittyMemory/MemoryBackup.cpp"
#include "KittyMemory/MemoryPatch.cpp"
#include "KittyMemory/KittyMemory.h"
#include "KittyMemory/KittyUtils.h"
#include "KittyMemory/KittyMemory.cpp"
#include "KittyMemory/KittyUtils.cpp"
#include "Includes/Logger.h"
#include "Includes/Utils.h"
#include "Includes/obfuscate.h"
#include "Includes/Macros.h"

#define targetLibName OBFUSCATE("libanort.so")
#define targetLibName OBFUSCATE("libanogs.so")
#define targetLibName OBFUSCATE("libUE4.so")
#define targetLibName OBFUSCATE("libTDataMaster.so")

bool WriteAddr(void *addr, void *buffer, size_t length) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}
template<typename T>
void Write(uintptr_t addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}
void Dtype(uintptr_t addr,int var){
WriteAddr(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var),4);
}

//音量键
bool IsKeyDown(int user_key_index)
{
    if (user_key_index < 0)
        return false;
    ImGuiContext& g = *GImGui;
    IM_ASSERT(user_key_index >= 0 && user_key_index < IM_ARRAYSIZE(g.IO.KeysDown));
    return g.IO.KeysDown[user_key_index];
}

char extra[32];
char extras[32];
char extraa[32];

/*
#define GNames_Offset 0x6db6908
#define GUObject_Offset 0xc0fd220
#define GNativeAndroidApp_Offset 0xbe7faa0
*/
//#define GEngine_Offset 0xc9f28b0
#define GNames_Offset 0x47e6fac
#define GUObject_Offset 0x9113670
//#define GetActorArray 0x8b8d4c8
//#define Canvas_Map_Offsets 0x8d81a80
#define GNativeAndroidApp_Offset 0x8d6c104
#define Actors_Offset 0x70
//#define Process_Event_Offset 0x6f01dc0

static bool 悬浮窗 = true;

template<typename T>
void 写入F类(uintptr_t addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}
void 写入D类(uintptr_t addr,int var){
WriteAddr(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var),4);
}
void 写入Q类(uintptr_t addr,int var){
WriteAddr(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var),32);
}

int style_idx = 0;
int style_zt = 0;
int style_cd = 0;
int style_zx = 0;
int style_bw = 0;

bool 剩下人数;

bool 瞄准线;
bool 动态;

static char BQAQSQEQ[128] = {"1cz8/NnUdh4bRFBJHVeDCiIAsL9Q7x53kaXZPvgjl+WTuEr0qfoGOyY6tMKS2mpw"};
#include "T3/T3验证.h"
static char s[64];
static bool isLogin = true;

#define DefineHook(RET, NAME, ARGS) \
	RET(*Orig_##NAME)               \
	ARGS;                           \
	RET Hook_##NAME ARGS
//————————————————————
static int xsuit = 0;
static int skinm4 = 0;
static int skinakm = 0;
static int skinscar = 0;
static int skinm7 = 0;
static int skinuzi = 0;
static int skinump45 = 0;
static int skinvector = 0;
static int skinbizon = 0;
static int skingroza = 0;
static int skinkar = 0;
static int skinm24 = 0;
static int skinawm = 0;
static int skindp28 = 0;
static int skinqbz = 0;
static int skinm16a4 = 0;
static int skinm249 = 0;
static int skinmini14 = 0;
static int skinslr = 0;
static int skinsks = 0;
static int skinpan = 0;
static int skins1897 = 0;
static int skinvss = 0;
static int skins12k = 0;
static int skinaug = 0;
static int skinmk14 = 0;
static float openx = 0.0f;
static float openy = 0.0f;
static float animal = 0.0f;
static float pageal = 0.0f;
static float bgalpha = 0.f;

bool 动画;
bool 广角;

bool showBone = false, showBox = false, showRay = false, showInfo = false, showRadar = false;
bool showItem = true, show556 = true, show762 = true, showRifle = true, showMirror = true, showExpansion = true, showDrug = true, showArmor = true, showSubmachine = false, showSniper = false, showOtherParts = false;
bool showVehicle = false, showGrenade = false;
bool aimbot = false, dieNoAim = false, showtouch = false;
bool showChest = false, showDrop = false;
bool aimShortDis = false;
bool showRange = false;
bool showImg = false, showText = false, stroke = false;
bool showWarning = false, showTarget = false;
float aimRange = 400.f, radarLocation = 800.f, radarLocation2 = 1650.f;
int espWidth = 1, boneWidth = 3;
int boxType = 1, aimType = 0, aimLocation = 0;
bool aimFire = false, aimOpen = false;

void 绘制加粗文本(float size, float x, float y, ImColor color, ImColor color1, const char* str)
{
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x-0.8, y-0.8}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x+0.8, y+0.8}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x, y}, color, str);
}
void 绘制加粗文本2(float size, float x, float y, ImColor color, ImColor color1, const char* str)
{
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x-0.2, y-0.2}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x+0.2, y+0.2}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x, y}, color, str);
}
void 绘制字体描边(float size,int x, int y, ImVec4 color, const char* str)
{
    ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x + 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x - 0.1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(color), str);
}
ImColor 紫色2 = ImColor(46,46,177);
ImColor 浅蓝 = ImColor(ImVec4(36/255.f, 249/255.f, 217/255.f, 255/255.f));
ImColor 蓝色 = ImColor(ImVec4(170/255.f, 203/255.f, 244/255.f, 0.95f));
ImColor 白色 = ImColor(ImVec4(255/255.f, 255/255.f, 258/255.f, 0.95f));
ImColor 浅粉 = ImColor(ImVec4(255/255.f, 200/255.f, 250/255.f, 0.95f));
ImColor 黑色 = ImColor(ImVec4(0/255.f, 0/255.f, 0/255.f, 0.7f));
ImColor 半黑 = ImColor(ImVec4(0/255.f, 0/255.f, 0/255.f, 0.18f));
ImColor 血色 = ImColor(ImVec4(0/255.f, 249/255.f, 0/255.f, 0.35f));
ImColor 红色 = ImColor(ImVec4(233/255.f, 55/255.f, 51/255.f, 0.95f));
ImColor 绿色 = ImColor(ImVec4(50/255.f, 222/215.f, 50/255.f, 0.95f));
ImColor 黄色 = ImColor(ImVec4(255/255.f, 255/255.f, 0/255.f, 0.95f));
ImColor 橘黄 = ImColor(ImVec4(255/255.f, 150/255.f, 30/255.f, 0.95f));
ImColor 粉红 = ImColor(ImVec4(220/255.f, 108/255.f, 1202/255.f, 0.95f));
ImColor 紫色 = ImColor(ImVec4(169/255.f, 120/255.f, 223/255.f, 0.95f));
ImFont* roboto_black;
ImFont* noto_medium;

bool 初始化;

float 追踪距离 = 200;
float ScreenX = 3;
float ScreenY = 4;
float Anticipation = 0.170;//预判
//概率子追
//定义区
static int TestDe = 0;
static int ZdMax; //弹匣子弹最大数
static int ZdDq;//弹匣当前子弹剩余数量
static int ASD;
static bool IsLaunch = false;
static float 命中率 = 1.0f;
struct MemTrap_t {
    uintptr_t baseAddr;
    uintptr_t endAddr;
};
std::vector<MemTrap_t> MemTraps;
json items_data;
std::map<int, bool> Items;
std::string g_Token, g_Auth;
//===ID定义
static bool is头,is脖子,is盆骨,is左上臂,is左小臂,is左手,is左大腿,is左小腿,is左脚,is右上臂,is右小臂,is右手,is右大腿,is右小腿,is右脚;
//==定义
static int 算法 = 0;
bool 自动瞄准 = false;
bool 九十;
bool 头部;
bool 全局离线;
bool 物资;
bool 防封;
bool 预警;
bool 身体;
bool 开火 = true;
float Fov = 160;
bool 同时;
bool 子追;
bool 漏打自瞄;
bool 自动开火;
bool 开镜;
bool 开火开镜;
bool 枪械减后;
bool 忽略倒地;
bool 忽略人机;
bool 枪械一套;
bool 头部骨骼;
bool 血量;
bool 方框;
bool 射线;
bool 骨骼;
bool 队伍ID;
bool 狗子;
bool 名字;
bool 信息;
bool 隐藏人机;
bool 背敌;
bool 雷达;
bool 骨灰盒;
bool 观战人数;
bool 投掷物;
bool 载具;
bool 距离;
bool 美国人;
bool 手持;
bool 判断对局;

bool 大厅;

bool Fov判断 = true;

float 雷达Y = 5;
float 雷达X = 60;

bool bValid = false;
uintptr_t UE4;
uintptr_t libanort;
uintptr_t libgcloud;
uintptr_t libanogs;
uintptr_t libTDataMaster;
android_app *g_App = 0;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
bool initImGui = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;
static UEngine *GEngine = 0;
UWorld *GetWorld() {
    while (!GEngine) {
        GEngine = UObject::FindObject<UEngine>("UAEGameEngine Transient.UAEGameEngine_1"); 
        sleep(1);
    }
    if (GEngine) {
        auto ViewPort = GEngine->GameViewport;
        if (ViewPort) {
            return ViewPort->World;
        }
    }
    return 0;
}



TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) (UE4 + GNames_Offset))();
}

std::vector<AActor *> getActors() {
    auto World = GetWorld();
    if (!World)
        return std::vector<AActor *>();

    auto PersistentLevel = World->PersistentLevel;
    if (!PersistentLevel)
        return std::vector<AActor *>();

    auto Actors = *(TArray<AActor *> *)((uintptr_t) PersistentLevel + Actors_Offset);

    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.Num(); i++) {
        auto Actor = Actors[i];
        if (Actor) {
            actors.push_back(Actor);
        }
    }
    return actors;
}

/*
#include "zygisk.hpp"

using zygisk::Api;
using zygisk::AppSpecializeArgs;
using zygisk::ServerSpecializeArgs;


void hack();

class MyModule : public zygisk::ModuleBase {
 public:
  void onLoad(Api *api, JNIEnv *env) override {
    this->api_ = api;
    this->env_ = env;
  }

  void preAppSpecialize(AppSpecializeArgs *args) override {
    static constexpr const char *packages[] = {
        "com.tencent.ig", "com.vng.pubgmobile", "com.rekoo.pubgm", "com.pubg.krmobile"
    };
    const char *process = env_->GetStringUTFChars(args->nice_name, nullptr);
    for (const auto *package: packages) {
      is_game_ = (strcmp(process, package) == 0);
      if (is_game_) {
        break;
      }
    }
    env_->ReleaseStringUTFChars(args->nice_name, process);
  }

  void postAppSpecialize(const AppSpecializeArgs *args) override {
    if (is_game_) {
      std::thread{hack}.detach();
    }
    }

 private:
  Api *api_ = nullptr;
  JNIEnv *env_ = nullptr;
  bool is_game_ = false;
};*/

#define _DWORD uint32_t
#define _QWORD uint64_t

#define IM_PI                   3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))

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

int (*oEgl_Check)(int a1, const char *a2);
int Egl_Check(int a1, const char *a2) {   
      if ( strstr((const char *) a2,"egl") ||
      strstr((const char *) a2,"ro.") ||
      strstr((const char *) a2,"unlocked") ||
      strstr((const char *) a2,"sys.oem_unlock_allowed"))
      
{
        LOGI(OBFUSCATE("Blocked EGL Thread | %p"), a2);
//pthread_exit(nullptr);线程爆浆
        return 0;
    }
    else
    {
        LOGI(OBFUSCATE("Allowed Strlen | %p"), a2);
        return oEgl_Check(a1,a2);
    }
}

int (*osub_2416A4)(int a1, const char *a2, int a3, int a4);
int sub_2416A4(int a1, const char* a2, int a3, int a4) {
    if (strstr((const char *) a2,"lib") != nullptr) {
        return 0;
    }
    return osub_2416A4(a1, a2, a3, a4);
}



int (*osub_3FA5A4C)(int result, int a2);
int hsub_3FA5A4C(int result, int a2)
{
    //if (EnableLog) LOGI("Game is Checking egl nikemod");
    return -1;
}

int (*osub_2A2D6E8) (int result);
int sub_2A2D6E8 (int result) {
return 0;
}


void* hack_thread(void*)
{
	
	LOGI("ANOGS DONE");
	
while (!isLibraryLoaded("libanogs.so")) sleep(10);
    libanogsBase = findLibrary(OBFUSCATE("libanogs.so"));
    libanogsAlloc = (DWORD)malloc(libanogsSize);
    memcpy((void *)libanogsAlloc, (void *)libanogsBase, libanogsSize);

HOOK_LIB("libanogs.so", "0x2416A4", sub_2416A4, osub_2416A4);//偏移量防闪(Offsets-32Arm-3.0.0)
//过渲染校验
HOOK_LIB("libanogs.so", "0x1356DC", Egl_Check, oEgl_Check);
HOOK_LIB("libanogs.so", "0x1062B8", Egl_Check, oEgl_Check);

HOOK_LIB_NO_ORIG("libanogs.so", "0x47844",hook_memcpy);//Memcpy

PATCH_LIB("libanogs.so", "0x477E4","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x477F0","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47814","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x4773C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47748","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47754","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x4761C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47628","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47634","00 00 A0 E3 1E FF 2F E1");

PATCH_LIB("libanogs.so", "0x4764C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47658","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47664","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x479F4","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A00","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A0C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A18","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A24","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A30","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A3C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A48","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A54","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A60","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A6C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A78","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A84","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A90","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47A9C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47AA8","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47AB4","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47490","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x4749C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x474A8","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x474B4","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x4755C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47568","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47574","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47580","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x4758C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47598","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x475A4","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x475B0","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x475BC","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x475C8","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x475D4","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x475E0","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x475EC","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47604","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47610","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47AC0","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47ACC","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47AD8","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47AE4","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47AF0","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47AFC","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47B08","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47B14","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47B20","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47B2C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47B38","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47B44","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47B50","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47B5C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47B68","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47B80","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47B8C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47B98","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47BA4","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47BB0","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47BBC","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47BC8","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47BD4","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47BE0","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47BEC","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47BF8","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47C04","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47C10","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47C1C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47C28","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47C34","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47C40","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47C4C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47C58","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47C64","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47C70","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47C7C","00 00 A0 E3 1E FF 2F E1");
PATCH_LIB("libanogs.so", "0x47C88","00 00 A0 E3 1E FF 2F E1");

return NULL;
}

        void* UNITY(void*)
{

LOGI("UE4 DONE");
do {
        sleep(10);
    } while (!isLibraryLoaded(OBFUSCATE("libUE4.so")));
    libUE4Base = findLibrary(OBFUSCATE("libUE4.so"));
    libUE4Alloc = (DWORD)malloc(libUE4Size);
    memcpy((void *)libUE4Alloc, (void *)libUE4Base, libUE4Size);
    
PATCH_LIB("libUE4.so", "0x3f7b220","00 00 A0 E3 1E FF 2F E1");//GetAndroidSysInfo(追封校验)
PATCH_LIB("libUE4.so", "0x2630550","00 F0 20 E3");//禁网校验
HOOK_LIB("libUE4.so", "0x2A2D6E8" ,sub_2A2D6E8, osub_2A2D6E8);//校验
HOOK_LIB("libUE4.so", "0x43AFA20" ,hsub_3FA5A4C, osub_3FA5A4C);//egl渲染检测 Corona
PATCH_LIB("libUE4.so", "0x3E24E60","00 00 A0 E3 1E FF 2F E1");//校验

	return NULL;
}

struct TextureInfo {
    ImTextureID textureId;
    int x;
    int y;
    int w;
    int h;
};

static struct Hand {
    TextureInfo K98;
    TextureInfo yaser;
    TextureInfo M416;
    TextureInfo M416A4;
    TextureInfo MK14;
    TextureInfo Grozy;
    TextureInfo Scar;
    TextureInfo M24;
    TextureInfo QBZ;
    TextureInfo DP28;
    TextureInfo MK47;
    TextureInfo S12K;
    TextureInfo S1897;
    TextureInfo SKS;
    TextureInfo SLR;
    TextureInfo M762;
    TextureInfo S686;
    TextureInfo VSS;
    TextureInfo UMP9;
    TextureInfo 拳头;
    TextureInfo AWM;
    TextureInfo AKM;
    TextureInfo M249;
    TextureInfo QBU;
    TextureInfo Mini14;
    TextureInfo AUG;
    TextureInfo G36C;
    TextureInfo PP19;
    TextureInfo UZI;
    TextureInfo P18C;
    TextureInfo WIN94;
    TextureInfo 汤姆逊;
    TextureInfo Vector;
    TextureInfo 短管散弹;
    TextureInfo 十字弩;
    TextureInfo 图标;    
    TextureInfo 电报;
    TextureInfo 盒子;
    TextureInfo 悬浮窗;
    TextureInfo 烟雾弹;
    TextureInfo 手雷;
    TextureInfo 燃烧瓶;
    TextureInfo 震爆弹;    
    TextureInfo 自瞄开;
    TextureInfo 自瞄关;
    TextureInfo 子追开;
    TextureInfo 子追关;    
    TextureInfo Logo;
} hand;
extern TextureInfo logo;

/*死人调用*/
struct sConfig {
    struct sColorsESP {
        float *Line;
        float *Box;
        float *Name;
        float *Distance;
        float *Skeleton;
        float *Vehicle;
        float *Fov颜色;
    };
    sColorsESP ColorsESP{0};
};
sConfig Config{0};

int code_sock = -1;

#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};

ImVec4 esp_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255 / 255.f);
ImVec4 bot_color = ImVec4(1.f, 1.f, 1.f, 1.f);
ImVec4 ray_color = ImVec4(1.f, 1.f, 1.f, 1.f);
ImVec4 bone_color = ImVec4(0 / 255.f, 255 / 255.f, 0 / 255.f, 255 / 255.f);
ImVec4 vehicle_color = ImVec4(0 / 255.f, 255 / 255.f, 255 / 255.f, 255 / 255.f);
ImVec4 rifle_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 submachine_color = ImVec4(255 / 255.f, 110 / 255.f, 180 / 255.f, 255.f / 255.f);
ImVec4 snipe_color = ImVec4(144 / 255.f, 238 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 box_color = ImVec4(255 / 255.f, 192 / 255.f, 203 / 255.f, 255.f / 255.f);
ImVec4 drop_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 drug_color = ImVec4(255 / 255.f, 105 / 255.f, 180 / 255.f, 255.f / 255.f);
ImVec4 armor_color = ImVec4(255 / 255.f, 215 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 color_556 = ImVec4(0 / 255.f, 255 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 color_762 = ImVec4(255 / 255.f, 255 / 255.f, 0 / 255.f, 255.f / 255.f);
ImVec4 mirror_color = ImVec4{255.f / 255.f, 144.f / 255.f, 0.f / 255.f, 255.f / 255.f};
ImVec4 otherparts_color = ImVec4{245.f / 255.f, 245.f / 255.f, 245.f / 255.f, 255.f / 255.f};
ImVec4 expansion_color = ImVec4{208.f / 255.f, 128.f / 255.f, 114.f / 255.f, 255.f / 255.f};
ImVec4 aim_color = ImVec4(255 / 255.f, 0 / 255.f, 0 / 255.f, 255 / 255.f);


static TextureInfo textureInfo;
TextureInfo CreateTexture(const unsigned char* buf, int len)
{
    TextureInfo image;
    //从文件加载
    unsigned char* image_data = stbi_load_from_memory(buf, len, &image.w, &image.h, NULL, 0);
    if (image_data == NULL)
        perror("文件不存在");
    //创建 OpenGL 纹理标识符
    GLuint image_texture;
    glGenTextures(1, &image_texture);
    glBindTexture(GL_TEXTURE_2D, image_texture);

    //设置显示过滤参数
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE); //对于非二次方纹理，这在 WebGL 上是必需的
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE); //相同的

    //将像素上传到纹理
    #if defined(GL_UNPACK_ROW_LENGTH) && !defined(__EMSCRIPTEN__)
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    #endif    
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image.w, image.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, image_data);
    stbi_image_free(image_data);
    image.textureId = image_texture;

    return image;
}
/*
TextureInfo createTexture(const string &ImagePath) {
    int w, h, n;
    stbi_uc *data = stbi_load(ImagePath.c_str(), &w, &h, &n, 0);
    GLuint texture;
    glGenTextures(1, &texture);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
    
    stbi_image_free(data);
	
    textureInfo.textureId = texture;
    textureInfo.width = w;
    textureInfo.height = h;
    return textureInfo;
}

ImTextureID createTexturePNGFro(const unsigned char *buf,int len) {
    int w, h, n;
    stbi_uc *data = stbi_png_load_from_memory(buf, len, &w, &h, &n, 0);
    GLuint texture;
    glGenTextures(1, &texture);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    if (n == 3) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
    } else {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
    }
    stbi_image_free(data);
    ImTextureID textureId = texture;
    return textureId;
}*/

extern TextureInfo logo;
TextureInfo Logo;

uint32_t Colors[] = {0x53BB0C, 0x530826, 0x0FC3F4, 0xDC2855, 0x0A31DE, 0xBAA7FD, 0xCEDB3F, 0x286A45, 0x58F014, 0x45CAE6, 0x773702, 0xB0CEF0, 0x3C5F51, 0x453CD7, 0x364024, 0x439997, 0x4CB612, 0xC6B564, 0x17F250, 0xE41BC0, 0xAF8E27, 0x8E382E, 0x47A101, 0x9DAC33, 0x66F4CF, 0x59A9F0, 0x798D1A, 0x2EBB59, 0xBF66C3, 0x4BD8FB, 0xBBFA54, 0x6B9881, 0x144967, 0xBAA3AE, 0xE80B9D, 0x7BA552, 0x96A456, 0x17D7B4, 0x130C39, 0x3C06A8, 0x62737E, 0xA87E89, 0xB6D3E4, 0x66B77D, 0x66E304, 0x1B80E1, 0x7A06BC, 0xBFFB1B, 0x618506, 0x7E4D34};

long GetRandomColorByIndex(int index) {
    srand(index);

    int a = 255;
    int r = ((Colors[rand() % sizeof(Colors)] & 0xFF0000) >> 16);
    int g = ((Colors[rand() % sizeof(Colors)] & 0x00FF00) >> 8);
    int b = (Colors[rand() % sizeof(Colors)] & 0x0000FF);

    return IM_COL32(r, g, b, a);
}


struct sRegion {
    uintptr_t start, end;
};

std::vector<sRegion> trapRegions;

bool isObjectInvalid(UObject *obj) {
    if (!Tools::IsPtrValid(obj)) {
        return true;
    }

    if (!Tools::IsPtrValid(obj->ClassPrivate)) {
        return true;
    }

    if (obj->InternalIndex <= 0) {
        return true;
    }

    if (obj->NamePrivate.ComparisonIndex <= 0) {
        return true;
    }

    if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
        return true;
    }

    if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
        std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
        return true;
    }

    return false;
}


std::string getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->NamePrivate.GetName();
    }
    return s;
}


int32_t ToColor(float *col) {
    return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));
}





FRotator ToRotator(FVector local, FVector target) {
    FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);

    float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

    FRotator newViewAngle = {0};
    newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Roll = (float) 0.f;

    if (rotation.X >= 0.f)
        newViewAngle.Yaw += 180.0f;

    return newViewAngle;
}
void AimAngle(FRotator &angles) {
if (angles.Pitch > 180)
angles.Pitch -= 360;
if (angles.Pitch < -180)
angles.Pitch += 360;

if (angles.Pitch < -75.f)
angles.Pitch = -75.f;
else if (angles.Pitch > 75.f)
angles.Pitch = 75.f;

while (angles.Yaw < -180.0f)
angles.Yaw += 360.0f;
while (angles.Yaw > 180.0f)
angles.Yaw -= 360.0f;
}

FRotator ClampAngles(FRotator inRot) {
    FRotator outRot = inRot;
    if (outRot.Pitch > 180)
        outRot.Pitch -= 360;
    if (outRot.Pitch < -180)
        outRot.Pitch += 360;

    if (outRot.Pitch < -75.f)
        outRot.Pitch = -75.f;
    else if (outRot.Pitch > 75.f)
        outRot.Pitch = 75.f;

    while (outRot.Yaw < -180.0f)
        outRot.Yaw += 360.0f;
    while (outRot.Yaw > 180.0f)
        outRot.Yaw -= 360.0f;
    return outRot;
}

#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)
auto GetTargetForAimBot() {
ASTExtraPlayerCharacter *result = 0;
float max = std::numeric_limits<float>::infinity();
float max2 = Fov;
auto Actors = getActors();
auto localPlayer = g_LocalPlayer;
auto localController = g_LocalController;

if (localPlayer) {
for (auto Actor : Actors) {
if (isObjectInvalid(Actor))
continue;


if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
auto Player = (ASTExtraPlayerCharacter *) Actor;
auto Target = (ASTExtraPlayerCharacter *) Actor;
auto HeadPos = Player->GetBonePos("Head", {});
ImVec2 HeadPosSC;;										
auto RootPos = Player->GetBonePos("Root", {});
ImVec2 RootPosSC;
auto upper_r = Player->GetBonePos("upperarm_r", {});
ImVec2 upper_rPoSC;
auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
ImVec2 lowerarm_rPoSC;
auto hand_r = Player->GetBonePos("hand_r", {});
ImVec2 hand_rPoSC;
auto upper_l = Player->GetBonePos("upperarm_l", {});
ImVec2 upper_lPoSC;
auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
ImVec2 lowerarm_lSC;
auto hand_l = Player->GetBonePos("hand_l", {});
ImVec2 hand_lPoSC;
auto thigh_l = Player->GetBonePos("thigh_l", {});
ImVec2 thigh_lPoSC;
auto calf_l = Player->GetBonePos("calf_l", {});
ImVec2 calf_lPoSC;
auto foot_l = Player->GetBonePos("foot_l", {});
ImVec2 foot_lPoSC;
auto thigh_r = Player->GetBonePos("thigh_r", {});
ImVec2 thigh_rPoSC;
auto calf_r = Player->GetBonePos("calf_r", {});
ImVec2 calf_rPoSC;
auto foot_r = Player->GetBonePos("foot_r", {});
ImVec2 foot_rPoSC;
auto neck_01 = Player->GetBonePos("neck_01", {});
ImVec2 neck_01PoSC;
auto Pelvis = Player->GetBonePos("Pelvis", {});
ImVec2 PelvisPoSC;
float dist = localPlayer->GetDistanceTo(Target) / 100.0f;       
if (dist > 追踪距离)
continue;

if (Player->PlayerKey == localPlayer->PlayerKey)
continue;

if (Player->TeamID == localPlayer->TeamID)
continue;

if (Player->bDead)
continue;

if (忽略倒地) {
if (Player->Health == 0.0f)
continue;
}

if (漏打自瞄) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, HeadPos, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, neck_01, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, upper_r, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, upper_l, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_l, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_r, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_l, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, Pelvis, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, thigh_l, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, thigh_r, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_l, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_r, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_l, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_r, true)) {
continue;
}}}}}}}}}}}}}}}}


if (忽略人机) {
if (Player->bEnsure)
continue;
}

auto Root = Player->GetBonePos("Root", {});
auto Head = Player->GetBonePos("Head", {});
FVector2D RootSc, HeadSc;
if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
float height = abs(HeadSc.Y - RootSc.Y);
float width = height * 0.65f;

FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) &&
(middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
FVector2D v2Middle = FVector2D((float) (glWidth / 2),
                       (float) (glHeight / 2));
FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

float dist = FVector2D::Distance(v2Middle, v2Loc);
if(max2 > dist){

if (dist < max) {
max = dist;
result = Player;
}

}
}
}  

}
}
}

return result;
}

//子追
auto GetTargetByCrossDist() {
ASTExtraPlayerCharacter *result = 0;
float max = std::numeric_limits<float>::infinity();
float max2 = Fov;
auto Actors = getActors();
auto localPlayer = g_LocalPlayer;
auto localController = g_LocalController;

if (localPlayer) {
for (auto Actor : Actors) {
if (isObjectInvalid(Actor))
continue;

if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
auto Player = (ASTExtraPlayerCharacter *) Actor;
auto Target = (ASTExtraPlayerCharacter *) Actor;
auto HeadPos = Player->GetBonePos("Head", {});
ImVec2 HeadPosSC;;										
auto RootPos = Player->GetBonePos("Root", {});
ImVec2 RootPosSC;
auto upper_r = Player->GetBonePos("upperarm_r", {});
ImVec2 upper_rPoSC;
auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
ImVec2 lowerarm_rPoSC;
auto hand_r = Player->GetBonePos("hand_r", {});
ImVec2 hand_rPoSC;
auto upper_l = Player->GetBonePos("upperarm_l", {});
ImVec2 upper_lPoSC;
auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
ImVec2 lowerarm_lSC;
auto hand_l = Player->GetBonePos("hand_l", {});
ImVec2 hand_lPoSC;
auto thigh_l = Player->GetBonePos("thigh_l", {});
ImVec2 thigh_lPoSC;
auto calf_l = Player->GetBonePos("calf_l", {});
ImVec2 calf_lPoSC;
auto foot_l = Player->GetBonePos("foot_l", {});
ImVec2 foot_lPoSC;
auto thigh_r = Player->GetBonePos("thigh_r", {});
ImVec2 thigh_rPoSC;
auto calf_r = Player->GetBonePos("calf_r", {});
ImVec2 calf_rPoSC;
auto foot_r = Player->GetBonePos("foot_r", {});
ImVec2 foot_rPoSC;
auto neck_01 = Player->GetBonePos("neck_01", {});
ImVec2 neck_01PoSC;
auto Pelvis = Player->GetBonePos("Pelvis", {});
ImVec2 PelvisPoSC;


float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
if (dist > 追踪距离)
continue; 

if (Player->PlayerKey == localPlayer->PlayerKey)
continue;

if (Player->TeamID == localPlayer->TeamID)
continue;

if (Player->bDead)
continue;


if (忽略倒地) {
if (Player->Health == 0.0f)
continue;
}

if (子追) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, HeadPos, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, neck_01, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, upper_r, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, upper_l, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_l, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_r, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_l, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, Pelvis, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, thigh_l, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, thigh_r, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_l, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_r, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_l, true)) {
if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_r, true)) {
continue;
}}}}}}}}}}}}}}}}

if (忽略人机) {
if (Player->bEnsure)
continue;
}

auto Root = Player->GetBonePos("Root", {});
auto Head = Player->GetBonePos("Head", {});

FVector2D RootSc, HeadSc;
if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
float height = abs(HeadSc.Y - RootSc.Y);
float width = height * 0.65f;

FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) &&
(middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
FVector2D v2Middle = FVector2D((float) (glWidth / 2),
                       (float) (glHeight / 2));
FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

float dist = FVector2D::Distance(v2Middle, v2Loc);
if(max2 > dist){

if (dist < max) {
max = dist;
result = Player;
}
}
}
}
}
}
}
return result;
}

const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
       return "双人摩托车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
       return "三人摩托车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
       return "轿车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
       return "巴士";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
       return "皮卡车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
       return "越野车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
       return "吉普车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
       return "快艇";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
       return "摩托艇";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
       return "肌肉跑车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
       return "罗尼皮卡";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
       return "踏板摩托";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
       return "雪地车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
       return "三轮车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
       return "轻型雪地摩托";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
       return "重型雪地摩托";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UH60:
       return "直升机";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
       return "水陆两栖装甲车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
       return "雪地越野车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
       return "武装轿车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
       return "武装皮卡";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
       return "武装蹦蹦";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
       return "武装吉普车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
       return "武装直升机";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorglider:
       return "滑翔机";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UTV:
       return "沙滩车";
       break;
   case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
       return "大脚车";
       break;
   default:
       return "载具";
       break;
    }
    return "Vehicle";
}


void (*orig_shoot_event)(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, void *unk1, int unk2) = 0;

void shoot_event(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, ASTExtraShootWeapon *weapon, int unk1) {
if (子追) {
ASTExtraPlayerCharacter *Target = GetTargetByCrossDist();
if (Target) {

						bool triggerOk = false;						
									                if (开火) {

								triggerOk = g_LocalPlayer->bIsWeaponFiring;
							}else
											                if (开镜) {

								triggerOk = g_LocalPlayer->bIsGunADS;
							}else
														                if (同时) {

								triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
							}else
														                if (开火开镜) {

								triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
							}
						
						else
							triggerOk = true;
if (triggerOk) {
auto Actors = getActors();
auto localPlayer = g_LocalPlayer;
auto localController = g_LocalController;
FVector targetAimPos;
for (int i = 0; i < Actors.size(); i++){
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;
if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {

auto Player = (ASTExtraPlayerCharacter *) Actor;
auto HeadPos = Player->GetBonePos("Head", {});
ImVec2 HeadPosSC;;										
auto RootPos = Player->GetBonePos("Root", {});
ImVec2 RootPosSC;
auto upper_r = Player->GetBonePos("upperarm_r", {});
ImVec2 upper_rPoSC;
auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
ImVec2 lowerarm_rPoSC;
auto hand_r = Player->GetBonePos("hand_r", {});
ImVec2 hand_rPoSC;
auto upper_l = Player->GetBonePos("upperarm_l", {});
ImVec2 upper_lPoSC;
auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
ImVec2 lowerarm_lSC;
auto hand_l = Player->GetBonePos("hand_l", {});
ImVec2 hand_lPoSC;
auto thigh_l = Player->GetBonePos("thigh_l", {});
ImVec2 thigh_lPoSC;
auto calf_l = Player->GetBonePos("calf_l", {});
ImVec2 calf_lPoSC;
auto foot_l = Player->GetBonePos("foot_l", {});
ImVec2 foot_lPoSC;
auto thigh_r = Player->GetBonePos("thigh_r", {});
ImVec2 thigh_rPoSC;
auto calf_r = Player->GetBonePos("calf_r", {});
ImVec2 calf_rPoSC;
auto foot_r = Player->GetBonePos("foot_r", {});
ImVec2 foot_rPoSC;
auto neck_01 = Player->GetBonePos("neck_01", {});
ImVec2 neck_01PoSC;
auto Pelvis = Player->GetBonePos("Pelvis", {});
ImVec2 PelvisPoSC;

if(localController->LineOfSightTo(localController->PlayerCameraManager, HeadPos, true)) {
targetAimPos = Target->GetBonePos("Head", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, neck_01, true)) {
targetAimPos = Target->GetBonePos("neck_01", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, upper_r, true)) {
targetAimPos = Target->GetBonePos("upperarm_r", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, upper_l, true)) {
targetAimPos = Target->GetBonePos("upperarm_l", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_l, true)) {
targetAimPos = Target->GetBonePos("lowerarm_l", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, true)) {
targetAimPos = Target->GetBonePos("lowerarm_r", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, hand_r, true)) {
targetAimPos = Target->GetBonePos("hand_r", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, hand_l, true)) {
targetAimPos = Target->GetBonePos("hand_l", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, Pelvis, true)) {
targetAimPos = Target->GetBonePos("Pelvis", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, thigh_l, true)) {
targetAimPos = Target->GetBonePos("thigh_l", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, thigh_r, true)) {
targetAimPos = Target->GetBonePos("thigh_r", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, calf_l, true)) {
targetAimPos = Target->GetBonePos("calf_l", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, calf_r, true)) {
targetAimPos = Target->GetBonePos("calf_r", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, foot_l, true)) {
targetAimPos = Target->GetBonePos("foot_l", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, foot_r, true)) {
targetAimPos = Target->GetBonePos("foot_r", {});
}else{
continue;

}}}
UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;
if (ShootWeaponEntityComponent) {
ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
if (CurrentVehicle) {
FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

float dist = g_LocalPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;

targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
} else {
FVector Velocity = Target->GetVelocity();

float dist = g_LocalPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;

targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
}
FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location);
rot = UKismetMathLibrary::Conv_VectorToRotator(fDir);
}
}
}
}
return orig_shoot_event(thiz, start, rot, weapon, unk1);
}

std::string playerstatus(int GetEnemyState)
{    
     switch (GetEnemyState)
     {
        case 0:
            return "发呆";
            break;
        case 1032:
            return "TILT HEAD";
            break;
        case 268435464:
            return "PLAY EMOTION";
            break;
        case 1552:
            return "在喵什么";
            break;
        case 8388616:
            return "PARACHUTE";
            break;
        case 131072:
            return "被打倒了";
            break;
        case 33554440:
            return "PLANE";
            break;
        case 8205:
            return "在射精";
            break;
        case 32:
            return "坐下来了";
            break;
        case 4194303:
            return "正在游泳";
            break;
        case 72:
            return "在蹦迪";
            break;
        case 8388608:
            return "PARACHUTE";
            break;
        case 16392:
            return "在丢什么";
            break;
        case 262:
            return "RELOADING";
            break;
        case 1048584:
            return "RIDE";
            break;
        case 8200:
            return "FIST";
            break;
        case 2056:
            return "切枪";
            break;
        case 4194302:
            return "正在游泳";
            break;
        case 269:
            return "RELOADING";
            break;
        case 16777224:
            return "正在爬";
            break;
        case 10:
            return "在跑步";
            break;
        case 263:
            return "RELOADING";
            break;
        case 65568 || 65544:
            return "在打药呢";
            break;
        case 4194308:
            return "正在游泳";
            break;
        case 268:
            return "RELOADING";
            break;
        case 35:
            return "GET 坐下来了";
            break;
        case 8388617:
            return "PARACHUTE";
            break;
        case 33:
            return "在喵什么";
            break;
        case 75:
            return "在蹦迪";
            break;
        case 8201:
            return "FIST";
            break;
        case 266:
            return "RELOADING";
            break;
        case 32776:
            return "被打倒了";
            break;
        case 270:
            return "RELOADING";
            break;
        case 4194301:
            return "正在游泳";
            break;
        case 1033:
            return "在跑步";
            break;
        case 131073:
            return "被打倒了";
            break;
        case 524296:
            return "在开车车";
            break;
        case 1114120:
            return "在打药呢";
            break;
        case 265:
            return "RELOADING";
            break;
        case 9:
            return "在跑步";
            break;
        case 262144:
            return "在抽烟";
            break;
        case 8203:
            return "FIST";
            break;
        case 8202:
            return "在射精";
            break;
        case 262152:
            return "嗝屁了";
            break;
        case 17416:
            return "在扔什么";
            break;
        case 17:
            return "坐下来了";
            break;
        case 11:
            return "在跑步";
            break;
        case 65545:
            return "在打药呢";
            break;
        case 33554432:
            return "PLANE";
            break;
        case 19:
            return "SQUAT";
            break;
        case 8208:
            return "在射精";
            break;
        case 520:
            return "在喵什么";
            break;
        case 8206:
            return "在射精";
            break;
        case 8:
            return "立起来了";
            break;
        case 16:
            return "坐下来了";
            break;
        case 13180:
            return "被打倒了";
            break;
        case 4194310:
            return "正在游泳";
            break;
        case 16393:
            return "在丢什么";
            break;
        case 4194309:
            return "正在游泳";
            break;
        case 264:
            return "RELOADING";
            break;
        case 4194305:
            return "正在游泳";
            break;
        case 8207:
            return "在射精";
            break;
        case 4194307:
            return "正在游泳";
            break;
        return "";
    }
}

void InitTexture() {
    Logo = CreateTexture(Logo_data, sizeof(Logo_data));
    hand.K98 = CreateTexture(武器1, sizeof(武器1));
    hand.M416 = CreateTexture(武器2, sizeof(武器2));
    hand.M416A4 = CreateTexture(武器3, sizeof(武器3));
    hand.MK14 = CreateTexture(武器4, sizeof(武器4));
    hand.Grozy = CreateTexture(武器5, sizeof(武器5));
    hand.Scar = CreateTexture(武器6, sizeof(武器6));
    hand.M24 = CreateTexture(武器7, sizeof(武器7));
    hand.QBZ = CreateTexture(武器8, sizeof(武器8));
    hand.DP28 = CreateTexture(武器9, sizeof(武器9));
    hand.MK47 = CreateTexture(武器10, sizeof(武器10));
    hand.S12K = CreateTexture(武器11, sizeof(武器11));
    hand.S1897 = CreateTexture(武器12, sizeof(武器12));
    hand.SKS = CreateTexture(武器13, sizeof(武器13));
    hand.SLR = CreateTexture(武器14, sizeof(武器14));
    hand.M762 = CreateTexture(武器15, sizeof(武器15));
    hand.S686 = CreateTexture(武器16, sizeof(武器16));
    hand.VSS = CreateTexture(武器17, sizeof(武器17));
    hand.UMP9 = CreateTexture(武器18, sizeof(武器18));
    hand.拳头 = CreateTexture(武器22, sizeof(武器22));
    hand.AWM = CreateTexture(武器23, sizeof(武器23));
    hand.AKM = CreateTexture(武器24, sizeof(武器24));
    hand.M249 = CreateTexture(武器25, sizeof(武器25));
    hand.QBU = CreateTexture(武器26, sizeof(武器26));
    hand.Mini14 = CreateTexture(武器27, sizeof(武器27));
    hand.AUG = CreateTexture(武器28, sizeof(武器28));
    hand.G36C = CreateTexture(武器29, sizeof(武器29));
    hand.PP19 = CreateTexture(武器30, sizeof(武器30));
    hand.UZI = CreateTexture(武器31, sizeof(武器31));
    hand.P18C = CreateTexture(武器32, sizeof(武器32));
    hand.WIN94 = CreateTexture(武器33, sizeof(武器33));
    hand.汤姆逊 = CreateTexture(武器34, sizeof(武器34));
  }
bool GetHandInfo(char *resa, char **name, TextureInfo *textureInfo) {
    if (strstr(resa, "Hand") != nullptr) {
        *textureInfo = hand.十字弩;
        *name = "Hand";
        return true;
    }
    if (strstr(resa, "Groza") != nullptr) {
        *textureInfo = hand.Grozy;
        *name = "Groza";
        return true;
    }
    if (strstr(resa, "SKS") != nullptr) {
        *textureInfo = hand.SKS;
        *name = "SKS";
        return true;
    }
    if (strstr(resa, "M249") != nullptr) {
        *textureInfo = hand.M249;
        *name = "M249";
        return true;
    }
    if (strstr(resa, "DP28") != nullptr) {
        *textureInfo = hand.DP28;
        *name = "DP28";
        return true;
    }
    if (strstr(resa, "Kar98k") != nullptr) {
        *textureInfo = hand.K98;
        *name = "Kar98k";
        return true;
    }
    if (strstr(resa, "R1895") != nullptr) {
        *textureInfo = hand.P18C;
        *name = "R1895";
        return true;
    }
    if (strstr(resa, "R45") != nullptr) {
        *textureInfo = hand.P18C;
        *name = "R45";
        return true;
    }
    if (strstr(resa, "AKM") != nullptr) {
        *textureInfo = hand.AKM;
        *name = "AKM";
        return true;
    }
    if (strstr(resa, "AUG") != nullptr) {
        *textureInfo = hand.AUG;
        *name = "AUG";
        return true;
    }
    if (strstr(resa, "Mini14") != nullptr) {
        *textureInfo = hand.Mini14;
        *name = "Mini14";
        return true;
    }
    if (strstr(resa, "M16A4") != nullptr) {
        *textureInfo = hand.M416A4;
        *name = "M16A4";
        return true;
    }
    if (strstr(resa, "SCAR") != nullptr) {
        *textureInfo = hand.Scar;
        *name = "SCAR";
        return true;
    }
    if (strstr(resa, "Win94") != nullptr) {
        *textureInfo = hand.WIN94;
        *name = "WIN94";
        return true;
    }
    if (strstr(resa, "Uzi") != nullptr) {
        *textureInfo = hand.UZI;
        *name = "UZI";
        return true;
    }
    if (strstr(resa, "TommyGun") != nullptr) {
        *textureInfo = hand.汤姆逊;
        *name = "TommyGun";
        return true;
    }
    if (strstr(resa, "Vector") != nullptr) {
        *textureInfo = hand.Vector;
        *name = "Vector";
        return true;
    }
    if (strstr(resa, "UMP9") != nullptr) {
        *textureInfo = hand.UMP9;
        *name = "UMP9";
        return true;
    }
    if (strstr(resa, "VSS") != nullptr) {
        *textureInfo = hand.VSS;
        *name = "VSS";
        return true;
    }
    if (strstr(resa, "M416") != nullptr) {
        *textureInfo = hand.M416;
        *name = "M416";
        return true;
    }
    if (strstr(resa, "MK14") != nullptr) {
        *textureInfo = hand.MK14;
        *name = "MK14";
        return true;
    }
    if (strstr(resa, "SLR") != nullptr) {
        *textureInfo = hand.SLR;
        *name = "SLR";
        return true;
    }
    if (strstr(resa, "Mk47") != nullptr) {
        *textureInfo = hand.MK47;
        *name = "Mk47";
        return true;
    }
    if (strstr(resa, "M762") != nullptr) {
        *textureInfo = hand.M762;
        *name = "M762";
        return true;
    }
    if (strstr(resa, "QBZ") != nullptr) {
        *textureInfo = hand.QBZ;
        *name = "QBZ";
        return true;
    }
    if (strstr(resa, "QBU") != nullptr) {
        *textureInfo = hand.QBU;
        *name = "QBU";
        return true;
    }
    if (strstr(resa, "S1897") != nullptr) {
        *textureInfo = hand.S1897;
        *name = "S1897";
        return true;
    }
    if (strstr(resa, "S12K") != nullptr) {
        *textureInfo = hand.S12K;
        *name = "S12K";
        return true;
    }
    if (strstr(resa, "S686") != nullptr) {
        *textureInfo = hand.S686;
        *name = "S686";
        return true;
    }
    if (strstr(resa, "FlareGun") != nullptr) {
        *textureInfo = hand.短管散弹;
        *name = "FlareGun";
        return true;
    }
    if (strstr(resa, "Shoulei") != nullptr) {
        *textureInfo = hand.手雷;
        *name = "Shoulei";
        return true;
    }
    if (strstr(resa, "Burn") != nullptr) {
        *textureInfo = hand.烟雾弹;
        *name = "Burn";
        return true;
    }
    if (strstr(resa, "WEP_Pan_C") != nullptr) {
        *textureInfo = hand.拳头;
        *name = "Pan";
        return true;
    }
    if (strstr(resa, "AWM") != nullptr) {
        *textureInfo = hand.AWM;
        *name = "AWM";
        return true;
    }
    if (strstr(resa, "M24") != nullptr) {
        *textureInfo = hand.M24;
        *name = "M24";
        return true;
    }
    if (strstr(resa, "UMP9") != nullptr) {
        *textureInfo = hand.UMP9;
        *name = "UMP9";
        return true;
    }
    textureInfo->w = hand.拳头.w;
    textureInfo->h = hand.拳头.h;
    textureInfo->y = 10;
    textureInfo->textureId = hand.拳头.textureId;
    *name = "NULL";
    return true;
}     

int 跳转浏览器(const char* url)
{
    JavaVM* java_vm = g_App->activity->vm;
    JNIEnv* java_env = NULL;
    jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
    if (jni_return == JNI_ERR)
        return -1;
    jni_return = java_vm->AttachCurrentThread(&java_env, NULL);
    if (jni_return != JNI_OK)
        return -2;
    jclass native_activity_clazz = java_env->GetObjectClass(g_App->activity->clazz);
    if (native_activity_clazz == NULL)
        return -3;
    jmethodID method_id = java_env->GetMethodID(native_activity_clazz, "AndroidThunkJava_LaunchURL", "(Ljava/lang/String;)V");
    if (method_id == NULL)
        return -4;        
    jstring retStr = java_env->NewStringUTF(url);
    java_env->CallVoidMethod(g_App->activity->clazz, method_id, retStr);
    jni_return = java_vm->DetachCurrentThread();
    if (jni_return != JNI_OK)
        return -5;
    return 0;
}
FVector2D pushToScreenBorder(FVector2D Pos, FVector2D screen, int borders, int offset) {
int x = (int)Pos.X;
int y = (int)Pos.Y;
if ((borders & 1) == 1) {
y = 0 - offset;
}
if ((borders & 2) == 2) {
x = (int)screen.X + offset;
}
if ((borders & 4) == 4) {
y = (int)screen.Y + offset;
}
if ((borders & 8) == 8) {
x = 0 - offset;
}
return FVector2D(x, y);
}
int isOutsideSafezone(FVector2D pos, FVector2D screen) {
FVector2D mSafezoneTopLeft(screen.X * 0.04f, screen.Y * 0.04f);
FVector2D mSafezoneBottomRight(screen.X * 0.96f, screen.Y * 0.96f);
int result = 0;
if (pos.Y < mSafezoneTopLeft.Y) {
result |= 1;
}
if (pos.X > mSafezoneBottomRight.X) {
result |= 2;
}
if (pos.Y > mSafezoneBottomRight.Y) {
result |= 4;
}
if (pos.X < mSafezoneTopLeft.X) {
result |= 8;
}
return result;
}

void Box4Line(ImDrawList *draw, float thicc, int x, int y, int w, int h, int color) {
    int iw = w / 4;
    int ih = h / 4;
 
    draw->AddRect(ImVec2(x, y),ImVec2(x + iw, y), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y),ImVec2(x + w, y), color, thicc);
    draw->AddRect(ImVec2(x, y),ImVec2(x, y + ih), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y),ImVec2(x + w - 1, y + ih), color, thicc);;
   
    draw->AddRect(ImVec2(x, y + h),ImVec2(x + iw, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y + h),ImVec2(x + w, y + h), color, thicc);
    draw->AddRect(ImVec2(x, y + h - ih), ImVec2(x, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y + h - ih), ImVec2(x + w - 1, y + h), color, thicc);
}

DefineHook(int, sub_288C090, (int a1, int a2))
{
   auto GWorld = GetWorld();
    if (GWorld){
        if (GWorld->NetDriver->ServerConnection)
            if(GWorld->NetDriver->ServerConnection->PlayerController){
                ASTExtraPlayerController *localController = (ASTExtraPlayerController *)GWorld->NetDriver->ServerConnection->PlayerController;
                uint32_t key =  *(int*)(a2 + 0x70);
                if(key == localController->PlayerKey){
                    ASTExtraPlayerCharacter *localPlayer = (ASTExtraPlayerCharacter *)localController->AcknowledgedPawn;
                    if (xsuit == 1)
					*(int*)(a2 + 0x94) = 1405909; //blood raven x suit
                    if (xsuit == 2)
                    *(int*)(a2 + 0x94) = 1405628; //Golden Pharaoh X-Suit
                    if (xsuit == 3)
                    *(int*)(a2 + 0x94) = 1406152; //Avalanche
                    if (xsuit == 4)
                    *(int*)(a2 + 0x94) = 1406475; //Irresidence
                    if (xsuit == 5)
                    *(int*)(a2 + 0x94) = 1405983; //Poseidon
                    if (xsuit == 6)
                    *(int*)(a2 + 0x94) = 1406638; //Arcane Jester X-suit
                    if (xsuit == 7)
                    *(int*)(a2 + 0x94) = 1406311; //Silvanus X-Sui
                    if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AKM")){
						if (skinakm == 1)
                        *(int*)(a2 + 0x90) = 1101001042; //Sculpture - AKM
                        if (skinakm == 2)
                        *(int*)(a2 + 0x90) = 1101001063; //The Seven Seas - AKM
                        if (skinakm == 3)
                        *(int*)(a2 + 0x90) = 1101001068; //Roaring Tiger - AKM
                        if (skinakm == 4)
                        *(int*)(a2 + 0x90) = 1101001089; //Glacier - AKM
                        if (skinakm == 5)
                        *(int*)(a2 + 0x90) = 1101001101; //Desert Fossil - AKM
                        if (skinakm == 6)
                        *(int*)(a2 + 0x90) = 1101001116; //Jack-o'-lantern - AKM
                        if (skinakm == 7)
                        *(int*)(a2 + 0x90) = 1101001128; //Ghillie Dragon - AKM          
                        else if (skinakm == 8)
					    *(int*)(a2 + 0x90) = 1101001143; //Gold Pirate - AKM        		
					    else if (skinakm == 9)
					    *(int*)(a2 + 0x90) = 1101001174;
					   else if (skinakm == 10)
					    *(int*)(a2 + 0x90) = 1101001213;
					    else if (skinakm == 11)
					    *(int*)(a2 + 0x90) = 1101001023;
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M416")){                  
                        if (skinm4 == 1) 
                            *(int*)(a2 + 0x90) = 1101004044; //Glacier - M416 
                        else if (skinm4 == 2) 
                            *(int*)(a2 + 0x90) = 1101004062; //The Fool - M416
                        else if (skinm4 == 3) 
                            *(int*)(a2 + 0x90) = 1101004086; //Lizard Roar - M416
						  else if (skinm4 == 4) 
                            *(int*)(a2 + 0x90) = 1101004078; //Wanderer - M416
                       else if (skinm4 == 5) 
                            *(int*)(a2 + 0x90) = 1101004098; //Call of the Wild - M416
                            else if (skinm4 == 6) 
                            *(int*)(a2 + 0x90) = 1101004163; //Imperial Splendor - M416
                            else if (skinm4 == 7) 
                            *(int*)(a2 + 0x90) = 1101004201; //Silver Guru - M416
                            else if (skinm4 == 8) 
                            *(int*)(a2 + 0x90) = 1101004138; //TechnoCore - M416
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SCAR-L")){
                           if (skinscar == 1) 
                        *(int*)(a2 + 0x90) = 1101003057; //Water Blaster - SCAR-L
                       else if (skinscar == 2) 
						    *(int*)(a2 + 0x90) = 1101003070; //Enchanted Pumpkin - SCAR-L
						 else if (skinscar == 3) 
						    *(int*)(a2 + 0x90) = 1101003079; //Operation Tomorrow - SCAR-L
						 else if (skinscar == 4) 
						    *(int*)(a2 + 0x90) = 1101003099; //Drop the Bass - SCAR-L @kero_200
						    else if (skinscar == 5) 
						    *(int*)(a2 + 0x90) = 1101003119;
						    else if (skinscar == 6) 
						    *(int*)(a2 + 0x90) = 1101003146;
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M762")){                  
                      if (skinm7 == 1) 
                        *(int*)(a2 + 0x90) = 1101003057; //8-bit Unicorn - M762
                       else if (skinm7 == 2) 
						    *(int*)(a2 + 0x90) = 1101008116; //Messi Football Icon M762
						 else if (skinm7 == 3) 
						    *(int*)(a2 + 0x90) = 1101008070; //GACKT MOONSAGA-M762
						 else if (skinm7 == 4) 
						    *(int*)(a2 + 0x90) = 1101008036; //Lotus Fury - M762
						    else if (skinm7 == 5)
						    *(int*)(a2 + 0x90) = 1101008051; //Concerto of Love - M762
						    else if (skinm7 == 6)
						    *(int*)(a2 + 0x90) = 1101008104; //StarCore-M762
						    else if (skinm7 == 7)
						    *(int*)(a2 + 0x90) = 1101008081; //Stray Rebellion - M762
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "GROZA")){
                    if (skingroza == 1) 
                        *(int*)(a2 + 0x90) = 1101005019;
                        if (skingroza == 2) 
                        *(int*)(a2 + 0x90) = 1101005052;
                        if (skingroza == 3) 
                        *(int*)(a2 + 0x90) = 1101005025; 
                        if (skingroza == 4) 
                        *(int*)(a2 + 0x90) = 1101005038; 
                        }
                    
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UZI")){

if (skinuzi == 1) 
                        *(int*)(a2 + 0x90) = 1102001024; //Savagery - UZI
                        if (skinuzi == 2) 
                        *(int*)(a2 + 0x90) = 1102001036; //Ethereal Emblem - UZI
                        if (skinuzi == 3) 
                        *(int*)(a2 + 0x90) = 1102001058; //Romantic Moments - UZI
                        if (skinuzi == 4) 
                        *(int*)(a2 + 0x90) = 1102001069; //Shimmer Power - UZI
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UMP45")){

                      if (skinump45 == 1) 
                        *(int*)(a2 + 0x90) = 1102002043;
                        if (skinump45 == 2) 
                        *(int*)(a2 + 0x90) = 1102002053;
                        if (skinump45 == 3) 
                        *(int*)(a2 + 0x90) = 1102002061; 
                        if (skinump45 == 4) 
                        *(int*)(a2 + 0x90) = 1102002070; 
                        if (skinump45 == 5) 
                        *(int*)(a2 + 0x90) = 1102002030; 
                        if (skinump45 == 6) 
                        *(int*)(a2 + 0x90) = 1102002090; 
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Vector")){

                        if (skinvector == 1) 
                        *(int*)(a2 + 0x90) = 1102003020;
                        if (skinvector == 2) 
                        *(int*)(a2 + 0x90) = 1102003031;
                        if (skinvector == 3) 
                        *(int*)(a2 + 0x90) = 1102003039; 
                        if (skinvector == 4) 
                        *(int*)(a2 + 0x90) = 1102003072; 
                        if (skinvector == 5) 
                        *(int*)(a2 + 0x90) = 1102003060; 
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Thompson")){

                        *(int*)(a2 + 0x90) = 1102004018; //candy cane
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "PP-19 Bizon")){

if (skinbizon == 1) 
                        *(int*)(a2 + 0x90) = 1102005007;
                        if (skinbizon == 2) 
                        *(int*)(a2 + 0x90) = 1102005020;
                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Kar98K")){

                        if (skinkar == 1) 
                        *(int*)(a2 + 0x90) = 1103001060;
                        if (skinkar == 2) 
                        *(int*)(a2 + 0x90) = 1103001079;
                        if (skinkar == 3) 
                        *(int*)(a2 + 0x90) = 1103001085; 
                        if (skinkar == 4) 
                        *(int*)(a2 + 0x90) = 1103001101;                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M24")){

                        if (skinm24 == 1) 
                        *(int*)(a2 + 0x90) = 1103002018;
                        if (skinm24 == 2) 
                        *(int*)(a2 + 0x90) = 1103002030;
                        if (skinm24 == 3) 
                        *(int*)(a2 + 0x90) = 1103002049; 
                        if (skinm24 == 4) 
                        *(int*)(a2 + 0x90) = 1103002047; 
                        if (skinm24 == 5) 
                        *(int*)(a2 + 0x90) = 1103002059; 
                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){

                        if (skinawm == 1) 
                        *(int*)(a2 + 0x90) = 1103003022;
                        if (skinawm == 2) 
                        *(int*)(a2 + 0x90) = 1103003030;
                        if (skinawm == 3) 
                        *(int*)(a2 + 0x90) = 1103003042; 
                        if (skinawm == 4) 
                        *(int*)(a2 + 0x90) = 1103003062; 
                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "DP28")){

                        if (skindp28 == 1) 
                        *(int*)(a2 + 0x90) = 1105002018;
                        if (skindp28 == 2) 
                        *(int*)(a2 + 0x90) = 1105002035;
                        
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M16A4")){
                    if (skinm16a4 == 1) 
                        *(int*)(a2 + 0x90) = 1101002029;
                        if (skinm16a4 == 2) 
                        *(int*)(a2 + 0x90) = 1101002056;
                        if (skinm16a4 == 3) 
                        *(int*)(a2 + 0x90) = 1101002068; 
                        if (skinm16a4 == 4) 
                        *(int*)(a2 + 0x90) = 1101002081; 
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "QBZ")){
                        if (skinqbz == 1) 
                        *(int*)(a2 + 0x90) = 1101007025;
                        if (skinqbz == 2) 
                        *(int*)(a2 + 0x90) = 1101007036;
                        if (skinqbz == 3) 
                        *(int*)(a2 + 0x90) = 1101007046;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M249")){
                                                if (skinm249== 1) 
                        *(int*)(a2 + 0x90) = 1105001034;
                        if (skinm249== 2) 
                        *(int*)(a2 + 0x90) = 1105001020;
                        if (skinm249== 3) 
                        *(int*)(a2 + 0x90) = 1105001048;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Mini 14")){
                        if (skinm16a4 == 1) 
                        *(int*)(a2 + 0x90) = 1101007025;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SLR")){
                        if (skinslr == 1) 
                        *(int*)(a2 + 0x90) = 1103009022;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SKS")){
                        if (skinsks == 1) 
                        *(int*)(a2 + 0x90) = 1103004037;
                        if (skinsks == 2) 
                        *(int*)(a2 + 0x90) = 1103004046;
                        if (skinsks == 3) 
                        *(int*)(a2 + 0x90) = 1103004058; 
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Pan")){

                        if (skinpan == 1) 
                        *(int*)(a2 + 0x90) = 1108004125;
                        if (skinpan == 2) 
                        *(int*)(a2 + 0x90) = 1108004145;
                        if (skinpan == 3) 
                        *(int*)(a2 + 0x90) = 1108004160; 
                         if (skinpan == 4) 
                        *(int*)(a2 + 0x90) = 1108004337; 
                        if (skinpan == 5) 
                        *(int*)(a2 + 0x90) = 1108004283; 
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Vss")){
                    if (skinvss == 1) 
                        *(int*)(a2 + 0x90) = 1103005024;
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "MK14")){
                    if (skinmk14 == 1) 
                        *(int*)(a2 + 0x90) = 1103007020;
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S1897")){
                        if (skins1897 == 1) 
                        *(int*)(a2 + 0x90) = 1104002022;
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AUG")){
                    if (skinaug == 1) 
                        *(int*)(a2 + 0x90) = 1101006033;
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S12K")){
                        if (skins12k == 1) 
                        *(int*)(a2 + 0x90) = 1104003026;
                    }
                }
            }
    }
    return Orig_sub_288C090(a1, a2);
}
void InitTexture();
bool GetHandInfo(char* resa,char** name,TextureInfo* textureInfo);
//#include "手持路径2.cpp"
void DrawLine(int x1, int y1, int x2, int y2, ImVec4 color, int size);
void DrawRect(int x, int y, int w, int h, ImVec4 color, int size);
void DrawRectFilled(int x, int y, int w, int h, ImVec4 color);
void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, ImVec4 Color, int T);
void DrawCircle(int x, int y, float radius, ImVec4 color, int segments, int thickness);
void DrawStrokeText(int x, int y, ImVec4 color, const char* str);
void DrawImage(int x, int y, int w, int h, ImTextureID Texture);
void DrawCircleFilled(int x, int y, int radius, ImVec4 color, int segments);
float MouseToObjectDistance(float ObjectSrceenX,float ObjectSrceenY);
float GetD2DPosDistance(float ObjectX,float ObjectY);

void DrawImage(int x, int y, int w, int h, ImTextureID Texture) {
    ImGui::GetForegroundDrawList()->AddImage(Texture, ImVec2(x, y), ImVec2(x + w, y + h));
    }
    
    int 随机颜色(){
	 int 红;
	 int 绿;
	 int 蓝;
	 int 颜色=70;
	 红=(0+255*rand());
	 绿=(0+255*rand());
	 蓝=(0+255*rand());
	 if(sizeof(红)==1) 红=红+红;
	 if(sizeof(绿)==1) 绿=绿+绿;
	 if(sizeof(蓝)==1) 蓝=蓝+蓝;
	 return 颜色+红+绿+蓝;
}
int 颜色数组[100];   // 必须分配空间
void 颜色初始化(){
    srand((unsigned)time(NULL));
	for(int 数量=0;数量<100;数量++){
		颜色数组[数量]=随机颜色();
	}
}

int 获取颜色(int 预号){
	if(颜色数组[预号-1]==NULL)
		return 88303030;
	else
	    return 颜色数组[预号-1];
}

int 队伍颜色(int 队伍){
	if(队伍<=100 && 队伍>0)
		return 获取颜色(队伍);
	else
		return 3411641396;
}

void RotateTriangle(std::array<Vector3, 3> & points, float rotation) {
 const auto points_center = (points.at(0) + points.at(1) + points.at(2)) / 3;
 for (auto & point : points) {
  point = point - points_center;
  const auto temp_x = point.X;
  const auto temp_y = point.Y;
  const auto theta = DEG2RAD(rotation);
  const auto c = cosf(theta);
  const auto s = sinf(theta);
  point.X = temp_x * c - temp_y * s;
  point.Y = temp_x * s + temp_y * c;
  point = point + points_center;
 }
}
FVector WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY, Vector3 Size, bool &outbuff) {
 bool flag = false;
 double num = (double)Yaw;
 double num2 = num * 0.017453292519943295;
 float num3 = (float)std::cos(num2);
 float num4 = (float)std::sin(num2);
 float num5 = Origin.X - LocalOrigin.X;
 float num6 = Origin.Y - LocalOrigin.Y;
 struct FVector Xector;
 Xector.X = (num6 * num3 - num5 * num4) / 150.f;
 Xector.Y = (num5 * num3 + num6 * num4) / 150.f;
 struct FVector Xector2;
 Xector2.X = Xector.X + PosX + Size.X / 2.f;
 Xector2.Y = -Xector.Y + PosY + Size.Y / 2.f;
 bool flag2 = Xector2.X > PosX + Size.X;
 if (flag2) {
  Xector2.X = PosX + Size.X;
 }else{
  bool flag3 = Xector2.X < PosX;
  if (flag3) {
   Xector2.X = PosX;
  }
 }
 bool flag4 = Xector2.Y > PosY + Size.Y;
 if (flag4) {
  Xector2.Y = PosY + Size.Y;
 }else{
  bool flag5 = Xector2.Y < PosY;
  if (flag5){
   Xector2.Y = PosY;
  }
 }
 bool flag6 = Xector2.Y == PosY || Xector2.X == PosX;
 if (flag6){
  flag = true;
 }
 outbuff = flag;
 return Xector2;
}

void VectorAnglesRadar(Vector3 & forward, FVector & angles) {
 if (forward.X == 0.f && forward.Y == 0.f) {
  angles.X = forward.Z > 0.f ? -90.f : 90.f;
  angles.Y = 0.f;
 } else {
  angles.X = RAD2DEG(atan2(-forward.Z, forward.Magnitude(forward)));
  angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
 }
 angles.Z = 0.f;
}

void DrawESP(ImDrawList*draw,int screenWidth, int screenHeight) {

if (大厅) {
PATCH_LIB("libUE4.so","0x145C88C","00 00 A0 E3 1E FF 2F E1");//[1]
PATCH_LIB("libUE4.so","0x137C870","00 00 A0 E3 1E FF 2F E1");//[2]
PATCH_LIB("libUE4.so","0x135557C","00 00 A0 E3 1E FF 2F E1");//[3]
PATCH_LIB("libUE4.so","0x1343FBC","00 00 A0 E3 1E FF 2F E1");//[4]
PATCH_LIB("libUE4.so","0x1343838","00 00 A0 E3 1E FF 2F E1");//[5]
PATCH_LIB("libUE4.so","0x1328324","00 00 A0 E3 1E FF 2F E1");//[6]
PATCH_LIB("libUE4.so","0x12B6904","00 00 A0 E3 1E FF 2F E1");//[7]
PATCH_LIB("libUE4.so","0x12B662C","00 00 A0 E3 1E FF 2F E1");//[8]
PATCH_LIB("libUE4.so","0x12835B0","00 00 A0 E3 1E FF 2F E1");//[9]
PATCH_LIB("libUE4.so","0x1192D98","00 00 A0 E3 1E FF 2F E1");//[10]
PATCH_LIB("libUE4.so","0x10D75AC","00 00 A0 E3 1E FF 2F E1");//[11]
PATCH_LIB("libUE4.so","0x10D5620","00 00 A0 E3 1E FF 2F E1");//[12]
PATCH_LIB("libUE4.so","0x10633B4","00 00 A0 E3 1E FF 2F E1");//[13]
PATCH_LIB("libUE4.so","0x1063380","00 00 A0 E3 1E FF 2F E1");//[14]
PATCH_LIB("libUE4.so","0x10632E4","00 00 A0 E3 1E FF 2F E1");//[15]
PATCH_LIB("libUE4.so","0x10632B0","00 00 A0 E3 1E FF 2F E1");//[16]
PATCH_LIB("libUE4.so","0x106327C","00 00 A0 E3 1E FF 2F E1");//[17]
PATCH_LIB("libUE4.so","0xFDE784","00 00 A0 E3 1E FF 2F E1");//[18]
PATCH_LIB("libUE4.so","0xF31454","00 00 A0 E3 1E FF 2F E1");//[19]
PATCH_LIB("libUE4.so","0xF2A764","00 00 A0 E3 1E FF 2F E1");//[20]
PATCH_LIB("libUE4.so","0xEFDD54","00 00 A0 E3 1E FF 2F E1");//[21]
PATCH_LIB("libUE4.so","0xEC6210","00 00 A0 E3 1E FF 2F E1");//[22]
PATCH_LIB("libUE4.so","0xEB7A34","00 00 A0 E3 1E FF 2F E1");//[23]
PATCH_LIB("libUE4.so","0xE982B8","00 00 A0 E3 1E FF 2F E1");//[24]
PATCH_LIB("libUE4.so","0xE8B8A0","00 00 A0 E3 1E FF 2F E1");//[25]
PATCH_LIB("libUE4.so","0xE89BA8","00 00 A0 E3 1E FF 2F E1");//[26]
PATCH_LIB("libUE4.so","0xE89A78","00 00 A0 E3 1E FF 2F E1");//[27]
PATCH_LIB("libUE4.so","0xE89A44","00 00 A0 E3 1E FF 2F E1");//[28]
PATCH_LIB("libUE4.so","0xE89A10","00 00 A0 E3 1E FF 2F E1");//[29]
PATCH_LIB("libUE4.so","0xE7AD98","00 00 A0 E3 1E FF 2F E1");//[30]
PATCH_LIB("libUE4.so","0xE6D84C","00 00 A0 E3 1E FF 2F E1");//[31]
PATCH_LIB("libUE4.so","0xD75548","00 00 A0 E3 1E FF 2F E1");//[32]
PATCH_LIB("libUE4.so","0xCE749C","00 00 A0 E3 1E FF 2F E1");//[33]
PATCH_LIB("libUE4.so","0xCE72FC","00 00 A0 E3 1E FF 2F E1");//[34]
PATCH_LIB("libUE4.so","0xCC60B8","00 00 A0 E3 1E FF 2F E1");//[35]
PATCH_LIB("libUE4.so","0xBBCDB0","00 00 A0 E3 1E FF 2F E1");//[36]
PATCH_LIB("libUE4.so","0xA9E030","00 00 A0 E3 1E FF 2F E1");//[37]
PATCH_LIB("libUE4.so","0x9A4DB0","00 00 A0 E3 1E FF 2F E1");//[38]
PATCH_LIB("libUE4.so","0x6E59A0","00 00 A0 E3 1E FF 2F E1");//[39]
PATCH_LIB("libUE4.so","0x6E589C","00 00 A0 E3 1E FF 2F E1");//[40]
PATCH_LIB("libUE4.so","0x6E5844","00 00 A0 E3 1E FF 2F E1");//[41]
PATCH_LIB("libUE4.so","0x6E57E4","00 00 A0 E3 1E FF 2F E1");//[42]
PATCH_LIB("libUE4.so","0x6E57B4","00 00 A0 E3 1E FF 2F E1");//[43]
PATCH_LIB("libUE4.so","0x6DC874","00 00 A0 E3 1E FF 2F E1");//[44]
} 

        auto Actors = getActors();
        int totalEnemies = 0, totalBots = 0;
        ASTExtraPlayerCharacter *localPlayer = 0;
        ASTExtraPlayerController *localController = 0;
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
                localController = (ASTExtraPlayerController *) Actor;
                break;
            }
        }
/*        
if (localController) {
判断对局=true;
Fov判断 = true;
MemoryPatch::createWithHex("libgcloud.so", 0x13638c, "C0 03 5F D6").Modify();
} else {
MemoryPatch::createWithHex("libgcloud.so", 0x13638c, "FF 43 04 D1").Modify();
判断对局=false;
Fov判断 = false;
} 
*/
if (localController) {
            for (int i = 0; i < Actors.size(); i++) {
                auto Actor = Actors[i];
                if (isObjectInvalid(Actor))
                    continue;

                if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                    if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey ==
                        localController->PlayerKey) {
                        localPlayer = (ASTExtraPlayerCharacter *) Actor;
                        break;
                    }
                }
            }


if (localPlayer) {
                if (localPlayer->PartHitComponent) {
                    auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
                    for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {
                        ConfigCollisionDistSqAngles[j].Angle = 90;
                    }
                    localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;
                }

if (雷达) {                                 
                     struct Vector3 坐标;
                     坐标.X = 雷达X*10;
                     坐标.Y = 雷达Y*10;
                     struct Vector3 Size;
                     Size.X = 200; //Width of Radar Box.
                     Size.Y = 210; //Height of Radar Box.
                     float 雷达X轴 = 坐标.X + (Size.X / 2);
                     float 雷达Y轴 = 坐标.Y + (Size.Y / 2);
    draw->AddLine({雷达X轴,雷达Y轴},{雷达X轴+200,雷达Y轴}, IM_COL32(255, 255, 0, 255),2.0f);
    draw->AddLine({雷达X轴,雷达Y轴}, {雷达X轴,雷达Y轴 + 200}, IM_COL32(255, 255, 0, 255),2.0f);
    draw->AddLine({雷达X轴 + 200,雷达Y轴}, {雷达X轴 + 200,雷达Y轴 + 200}, IM_COL32(177, 134, 0, 255),2.0f);
    draw->AddLine({雷达X轴,雷达Y轴 + 200},{雷达X轴 + 200,雷达Y轴 + 200}, IM_COL32(177, 134, 0, 255),2.0f);
    draw->AddLine({雷达X轴 + 100,雷达Y轴},{雷达X轴+100,雷达Y轴 + 200}, IM_COL32(255, 255, 255, 255),2.0f);
    draw->AddLine({雷达X轴,雷达Y轴 + 100},{雷达X轴+200,雷达Y轴 + 100}, IM_COL32(255, 255, 255, 255),2.0f);
    draw->AddLine({雷达X轴 + 50,雷达Y轴 + 50},{雷达X轴+150,雷达Y轴 + 50},绿色,2.0f);
    draw->AddLine({雷达X轴 + 50,雷达Y轴 + 50},{雷达X轴+50,雷达Y轴 + 100},绿色,2.0f);
draw->AddLine({雷达X轴 + 150,雷达Y轴 + 50},{雷达X轴+150,雷达Y轴 + 100},绿色,2.0f);


                 }

//坐标自瞄
if (漏打自瞄){

ASTExtraPlayerCharacter *Target = GetTargetForAimBot();

if (Target) {

						bool triggerOk = false;						
									                if (开火) {

								triggerOk = g_LocalPlayer->bIsWeaponFiring;
							}else
											                if (开镜) {

								triggerOk = g_LocalPlayer->bIsGunADS;
							}else
														                if (同时) {

								triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
							}else
														                if (开火开镜) {

								triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
							}
						
						else
							triggerOk = true;
if (triggerOk)
{
FVector targetAimPos;
for (int i = 0; i < Actors.size(); i++)
{
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;
if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
auto Player = (ASTExtraPlayerCharacter *) Actor;
auto HeadPos = Player->GetBonePos("Head", {});
ImVec2 HeadPosSC;;										
auto RootPos = Player->GetBonePos("Root", {});
ImVec2 RootPosSC;
auto upper_r = Player->GetBonePos("upperarm_r", {});
ImVec2 upper_rPoSC;
auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
ImVec2 lowerarm_rPoSC;
auto hand_r = Player->GetBonePos("hand_r", {});
ImVec2 hand_rPoSC;
auto upper_l = Player->GetBonePos("upperarm_l", {});
ImVec2 upper_lPoSC;
auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
ImVec2 lowerarm_lSC;
auto hand_l = Player->GetBonePos("hand_l", {});
ImVec2 hand_lPoSC;
auto thigh_l = Player->GetBonePos("thigh_l", {});
ImVec2 thigh_lPoSC;
auto calf_l = Player->GetBonePos("calf_l", {});
ImVec2 calf_lPoSC;
auto foot_l = Player->GetBonePos("foot_l", {});
ImVec2 foot_lPoSC;
auto thigh_r = Player->GetBonePos("thigh_r", {});
ImVec2 thigh_rPoSC;
auto calf_r = Player->GetBonePos("calf_r", {});
ImVec2 calf_rPoSC;
auto foot_r = Player->GetBonePos("foot_r", {});
ImVec2 foot_rPoSC;
auto neck_01 = Player->GetBonePos("neck_01", {});
ImVec2 neck_01PoSC;
auto Pelvis = Player->GetBonePos("Pelvis", {});
ImVec2 PelvisPoSC;
if(localController->LineOfSightTo(localController->PlayerCameraManager, HeadPos, true)) {
targetAimPos = Target->GetBonePos("Head", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, neck_01, true)) {
targetAimPos = Target->GetBonePos("neck_01", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, upper_r, true)) {
targetAimPos = Target->GetBonePos("upperarm_r", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, upper_l, true)) {
targetAimPos = Target->GetBonePos("upperarm_l", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_l, true)) {
targetAimPos = Target->GetBonePos("lowerarm_l", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, true)) {
targetAimPos = Target->GetBonePos("lowerarm_r", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, hand_r, true)) {
targetAimPos = Target->GetBonePos("hand_r", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, hand_l, true)) {
targetAimPos = Target->GetBonePos("hand_l", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, Pelvis, true)) {
targetAimPos = Target->GetBonePos("Pelvis", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, thigh_l, true)) {
targetAimPos = Target->GetBonePos("thigh_l", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, thigh_r, true)) {
targetAimPos = Target->GetBonePos("thigh_r", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, calf_l, true)) {
targetAimPos = Target->GetBonePos("calf_l", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, calf_r, true)) {
targetAimPos = Target->GetBonePos("calf_r", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, foot_l, true)) {
targetAimPos = Target->GetBonePos("foot_l", {});
}else
if(localController->LineOfSightTo(localController->PlayerCameraManager, foot_r, true)) {
targetAimPos = Target->GetBonePos("foot_r", {});
}else{
continue;
}}}

if (身体)
{
targetAimPos.Z -= 25.0;
}

auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
if (WeaponManagerComponent)
{
auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
if ((int)propSlot.GetValue() >= 1 && (int)propSlot.GetValue() <= 3)
{
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
if (CurrentWeaponReplicated)
{
auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
if (ShootWeaponComponent)
{
UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
if (ShootWeaponEntityComponent)
{
ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
if (CurrentVehicle)
{
FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
float dist = localPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
}
else
{
FVector Velocity = Target->GetVelocity();
float dist = localPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));

/*targetAimPos.Z += Velocity.Z * timeToTravel + 0.5 * Config.Line * timeToTravel * timeToTravel;    */
}

if (漏打自瞄) {
if (g_LocalPlayer->bIsGunADS) {
if (g_LocalPlayer->bIsWeaponFiring) {
float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
targetAimPos.Z -= dist * 1.25f;        


}  
}
}  

g_LocalController->ControlRotation =ToRotator(g_LocalController->PlayerCameraManager->CameraCache.POV.Location,                                                     targetAimPos);//修复自瞄卡屏代码

}
}
}
}
}
}
}
}


if (子追) {


auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
         if (WeaponManagerComponent) {
  auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
  if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
   auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
              if (CurrentWeaponReplicated) {
   auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
               if (ShootWeaponComponent) {
              int shoot_event_idx = 168;
        auto f_mprotect = [](uintptr_t addr, size_t len, int32_t prot) -> int32_t {
             static_assert(PAGE_SIZE == 4096);
     constexpr size_t page_size = static_cast<size_t>(PAGE_SIZE);
           void* start = reinterpret_cast<void*>(addr & -page_size);
        uintptr_t end = (addr + len + page_size - 1) & -page_size;
        return mprotect(start, end - reinterpret_cast<uintptr_t>(start), prot);
                                    };
              auto VTable = (void **) ShootWeaponComponent->VTable;
               if (VTable && (VTable[shoot_event_idx] != shoot_event)) {
               orig_shoot_event = decltype(orig_shoot_event)(
                         VTable[shoot_event_idx]);
          f_mprotect((uintptr_t)(&VTable[shoot_event_idx]), sizeof(uintptr_t), PROT_READ | PROT_WRITE);
             VTable[shoot_event_idx] = (void *) shoot_event;
}
}
}
}
}
}

                for (int i = 0; i < Actors.size(); i++) {
                    auto Actor = Actors[i];
                    if (isObjectInvalid(Actor))
                        continue;
                        
  if (剩下人数) {
                if (Actor->IsA(ASTExtraGameStateBase::StaticClass())) {
                auto InGame = (ASTExtraGameStateBase *) Actor;
                std::string s;               
                s += "本局剩余玩家:" ;
                s += std::to_string((int) InGame->AlivePlayerNum);                                
   auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 37);
绘制字体描边(37, (glWidth/2) - (textSize.x / 2), 450, ImColor(248,248,255), s.c_str());     
        }
}
                        
                    if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                            long PlayerBoxClrCf = IM_COL32(0, 255, 0, 255);
                            long PlayerBoxClrCf2 = IM_COL32(0, 255, 0, 25);
                            auto Player = (ASTExtraPlayerCharacter *) Actor;
                            ImColor 颜色 = ImColor(队伍颜色(Player->TeamID));
                            if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
                                PlayerBoxClrCf = IM_COL32(255, 0, 0, 255);
                                PlayerBoxClrCf2 = IM_COL32(255, 0, 0, 25);
                            }        
                        float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;

                        if (Distance > 500.0f)
                            continue;

                        if (Player->PlayerKey == localController->PlayerKey)
                            continue;

                        if (Player->TeamID == localController->TeamID)
                            continue;

                        if (Player->bDead)
                            continue;
                            

                         
                         
                if (Player->bEnsure)
                    totalBots++;
                else totalEnemies++;

                        if (隐藏人机)
                            if (Player->bEnsure)
                                continue;
                                
                     if (雷达) 
					 {
                     std::string s;
                     s += std::to_string((int) Distance);
                     s += "m";
                     FVector MyPosition;
                     ASTExtraVehicleBase *CurrentVehiclea = Player->CurrentVehicle;
                     if (CurrentVehiclea) {
                      MyPosition = CurrentVehiclea->RootComponent->RelativeLocation;
                       } else {
                      MyPosition = Player->RootComponent->RelativeLocation;
                       }                                     
                      FVector EnemyPosition;
                      ASTExtraVehicleBase *CurrentVehicle = localPlayer->CurrentVehicle;
                      if (CurrentVehicle) {
                      EnemyPosition = CurrentVehicle->RootComponent->RelativeLocation;
                       }  else {
                      EnemyPosition = localPlayer->RootComponent->RelativeLocation;
                      }
                      bool out = false;                              
                      struct Vector3 坐标;
                      坐标.X = 雷达X*10;
                      坐标.Y = 雷达Y*10;
                      struct Vector3 Size;
                      Size.X = 200; //Width of Radar Box.
                      Size.Y = 210; //Height of Radar Box.
                      float 雷达X轴 = 坐标.X + (Size.X / 2);
                      float 雷达Y轴 = 坐标.Y + (Size.Y / 2);                                                                               
               
                      FVector EntityPos = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, NULL, NULL, Vector3(glWidth, glHeight, 0), out);
                      FVector RadarSketch = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, 雷达X轴,雷达Y轴, Vector3(Size.X, Size.Y, 0), out);
                      if (Distance >= 0.f) {

                      draw->AddCircleFilled(ImVec2(RadarSketch.X, RadarSketch.Y), 5, PlayerBoxClrCf, 0.0f);    
                      绘制加粗文本2(14,RadarSketch.X + 1, RadarSketch.Y+1,绿色,白色,s.c_str());
                      FVector angle = FVector();
                      Vector3 forward = Vector3((float)(glWidth / 2) - EntityPos.X, (float)(glHeight / 2) - EntityPos.Y, 0.0f);
                      VectorAnglesRadar(forward, angle);
                      const auto angle_yaw_rad = DEG2RAD(angle.Y + 180.f);
                      const auto new_point_x = (glWidth / 2) + (55/*alert dist from me*/) / 2 * 8 * cosf(angle_yaw_rad);
                      const auto new_point_y = (glHeight / 2) + (55/*alert dist from me*/) / 2 * 8 * sinf(angle_yaw_rad);
                      std::array<Vector3, 3> points { Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y - ((55) / 4 + 3.5f) / 2, 0.f), Vector3(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y, 0.f), Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y + ((55) / 4 + 3.5f) / 2, 0.f)};
                      RotateTriangle(points, angle.Y + 180.f);
                      draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y),颜色, 1.5f);                   
            }
		}	        
                                
                               
auto HeadPos = Player->GetBonePos("Head", {});
HeadPos.Z = HeadPos.Z + 1.0f;
ImVec2 HeadPosSC;
auto RootPos = Player->GetBonePos("Root", {});
ImVec2 RootPosSC;
FVector Root = Player->GetBonePos("Root", {});
FVector Spin = Player->GetBonePos("Pelvis", {});
FVector Spin2 = Player->GetBonePos("spine_03", {});
auto Pelvis = Player->GetBonePos("Pelvis", {});
ImVec2 pelvisPoSC;
auto upper_r = Player->GetBonePos("upperarm_r", {});
ImVec2 upper_rPoSC;
auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
ImVec2 lowerarm_rPoSC;
auto hand_r = Player->GetBonePos("hand_r", {});
ImVec2 hand_rPoSC;
auto upper_l = Player->GetBonePos("upperarm_l", {});
ImVec2 upper_lPoSC;
auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
ImVec2 lowerarm_lSC;
auto hand_l = Player->GetBonePos("hand_l", {});
ImVec2 hand_lPoSC;
auto thigh_l = Player->GetBonePos("thigh_l", {});
ImVec2 thigh_lPoSC;
auto calf_l = Player->GetBonePos("calf_l", {});
ImVec2 calf_lPoSC;
auto foot_l = Player->GetBonePos("foot_l", {});
ImVec2 foot_lPoSC;
auto thigh_r = Player->GetBonePos("thigh_r", {});
ImVec2 thigh_rPoSC;
auto calf_r = Player->GetBonePos("calf_r", {});
ImVec2 calf_rPoSC;
auto foot_r = Player->GetBonePos("foot_r", {});
ImVec2 foot_rPoSC;
auto neck_01 = Player->GetBonePos("neck_01", {});
ImVec2 neck_01PoSC;
auto spine_01 = Player->GetBonePos("spine_01", {});
ImVec2 spine_01PoSC;
auto spine_02 = Player->GetBonePos("spine_02", {});
ImVec2 spine_02PoSC;
auto spine_03 = Player->GetBonePos("spine_03", {});
ImVec2 spine_03PoSC;
if (W2S(HeadPos, (FVector2D *) & HeadPosSC) && W2S(upper_r, (FVector2D *) & upper_rPoSC) && W2S(upper_l, (FVector2D *) & upper_lPoSC) && W2S(lowerarm_r, (FVector2D *) & lowerarm_rPoSC) && W2S(hand_r, (FVector2D *) & hand_rPoSC) && W2S(lowerarm_l, (FVector2D *) & lowerarm_lSC) && W2S(hand_l, (FVector2D *) & hand_lPoSC) && W2S(thigh_l, (FVector2D *) & thigh_lPoSC) && W2S(calf_l, (FVector2D *) & calf_lPoSC) && W2S(foot_l, (FVector2D *) & foot_lPoSC) && W2S(thigh_r, (FVector2D *) & thigh_rPoSC) && W2S(calf_r, (FVector2D *) & calf_rPoSC) && W2S(foot_r, (FVector2D *) & foot_rPoSC) && W2S(neck_01, (FVector2D *) & neck_01PoSC) && W2S(Pelvis, (FVector2D *) & pelvisPoSC) && W2S(RootPos, (FVector2D *) & RootPosSC) && W2S(spine_01, (FVector2D *) & spine_01PoSC)&& W2S(spine_02, (FVector2D *) & spine_02PoSC)&& W2S(spine_03, (FVector2D *) & spine_03PoSC)) {

					if (瞄准线) {

					ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
                    
                  
                    long PlayerAimLineColor = IM_COL32(0, 255, 0, 255);
                    
                    
                    

                    if (Target) {
                    FVector HEAD = Target->GetBonePos("Head", {});
                        
                    ImVec2 HeadPosSC;
                        if (W2S(HEAD, (FVector2D *)&HeadPosSC)) {
                    
                           
                          draw->AddLine({(float) glWidth / 2,  (float) (glHeight / 2)}, HeadPosSC,
                                              PlayerAimLineColor, 1.0f);
                        }    
                        
						}
						}										

if (射线){
if (Player->bEnsure)  {
draw->AddLine({(float) glWidth / 2,75}, HeadPosSC,IM_COL32(255,255,255,255),0.0f);
}else{
draw->AddLine({(float) glWidth / 2,75}, HeadPosSC,GetRandomColorByIndex(Player->TeamID),0.0f);
}
}
					//背敌
FVector2D screen(glWidth, glHeight);
FVector2D location(RootPosSC.x, HeadPosSC.y);
int borders = isOutsideSafezone(location, screen);
if (背敌 && borders != 0) {
float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
std::string s;
s += std::to_string((int)Distance);
s += "M";
float mScale = glHeight / (float) 1080;
auto hintDotRenderPos = pushToScreenBorder(location, screen, borders, (int)((mScale * 100) / 3));
auto hintTextRenderPos = pushToScreenBorder(location, screen, borders, -(int)((mScale * 36)));
draw->AddCircleFilled(ImVec2(hintDotRenderPos.X, hintDotRenderPos.Y), mScale * 100, IM_COL32(255, 0, 0, 128), 0);
draw->AddText(NULL, ((float)density / 20.0f), ImVec2(hintTextRenderPos.X, hintTextRenderPos.Y), IM_COL32(255, 255, 255, 255), s.c_str());
}

if (方框) {
float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
float boxWidth = boxHeight * 0.65f;
Box4Line(draw, 0.5f, HeadPosSC.x - (boxWidth / 2), HeadPosSC.y, boxWidth, boxHeight,  PlayerBoxClrCf);
}

if (骨骼) {
long Chead,Cuparmr,Cuparml,Clowarmr,Clowarml,Cthighl,Cthighr,Ccalfl,Ccalfr,Cneck,Cpelvis,Cspine1,Cspine2,Cspine3;//颜色初始化
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("Head", {}), true))//头
{
Chead = IM_COL32(255, 0, 0, 255);
}
else
{
Chead = IM_COL32(0, 255, 0, 255); //看不见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("neck_01", {}), true))//脖子
{
Cneck = IM_COL32(255, 0, 0, 255); //看不见
}
else
{
Cneck = IM_COL32(0, 255, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("upperarm_r", {}), true))//上面的肩膀右
{
Cuparmr = IM_COL32(255, 0, 0, 255); //看不见
}
else
{
Cuparmr = IM_COL32(0, 255, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("upperarm_l", {}), true))//上面的肩膀左
{
Cuparml = IM_COL32(255, 0, 0, 255); //看不见
}
else
{
Cuparml = IM_COL32(0, 255, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("lowerarm_r", {}), true))//上面的手臂右
{
Clowarmr = IM_COL32(255, 0, 0, 255); //看不见
}
else
{
Clowarmr = IM_COL32(0, 255, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("lowerarm_l", {}), true))//上面的手臂左
{
Clowarml = IM_COL32(255, 0, 0, 255); //看不见
}
else
{
Clowarml = IM_COL32(0, 255, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_03", {}), true))//脊柱3
{
Cspine3 = IM_COL32(255, 0, 0, 255); //看不见
}
else
{
Cspine3 = IM_COL32(0, 255, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_02", {}), true))//脊柱2
{
Cspine2 = IM_COL32(255, 0, 0, 255); //看不见
}
else
{
Cspine2 = IM_COL32(0, 255, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_01", {}), true))//脊柱2
{
Cspine1 = IM_COL32(255, 0, 0, 255); //看不见
}
else
{
Cspine1 = IM_COL32(0, 255, 0, 255); //看的见
}



if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("pelvis", {}), true))//骨盆
{
Cpelvis = IM_COL32(255, 0, 0, 255); //看不见
}
else
{
Cpelvis = IM_COL32(0, 255, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("thigh_l", {}), true))//大腿左
{
Cthighl = IM_COL32(255, 0, 0, 255); //看不见
}
else
{
Cthighl = IM_COL32(0, 255, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("thigh_r", {}), true))//大腿右
{
Cthighr = IM_COL32(255, 0, 0, 255); //看不见
}
else
{
Cthighr = IM_COL32(0, 255, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("calf_l", {}), true))//小腿左
{
Ccalfl = IM_COL32(255, 0, 0, 255); //看不见
}
else
{
Ccalfl = IM_COL32(0, 255, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("calf_r", {}), true))//小腿右
{
Ccalfr = IM_COL32(255, 0, 0, 255); //看不见
}
else
{
Ccalfr = IM_COL32(0, 255, 0, 255); //看的见
}

float boxWidth = 7.f - Distance * 0.03;
draw->AddCircle({HeadPosSC.x, HeadPosSC.y}, boxWidth, Chead, 0, 1.0f);
draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, neck_01PoSC, Cneck, 1.0f);
draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, neck_01PoSC, Cneck, 1.0f);
draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, lowerarm_rPoSC, Cuparmr, 1.0f);
draw->AddLine({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, hand_rPoSC, Clowarmr, 1.0f);
draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, lowerarm_lSC, Cuparml, 1.0f);
draw->AddLine({lowerarm_lSC.x, lowerarm_lSC.y}, hand_lPoSC, Clowarml, 1.0f);
draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, thigh_lPoSC, Cthighl, 1.0f);
draw->AddLine({thigh_lPoSC.x, thigh_lPoSC.y}, calf_lPoSC, Cthighl, 1.0f);
draw->AddLine({calf_lPoSC.x, calf_lPoSC.y}, foot_lPoSC, Ccalfl, 1.0f);
draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, calf_rPoSC, Cthighr, 1.0f);
draw->AddLine({calf_rPoSC.x, calf_rPoSC.y}, foot_rPoSC, Ccalfr, 1.0f);
draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, spine_03PoSC, Cspine3, 1.0f);
draw->AddLine({spine_03PoSC.x, spine_03PoSC.y}, spine_02PoSC, Cspine2, 1.0f);
draw->AddLine({spine_02PoSC.x, spine_02PoSC.y}, spine_01PoSC, Cspine1, 1.0f);
draw->AddLine({spine_01PoSC.x, spine_01PoSC.y}, pelvisPoSC, Cpelvis, 1.0f);
draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, HeadPosSC, Cneck, 1.0f);
}

if(手持){
auto rrrr = Player->GetBonePos("Head", {});
auto WeaponManagerComponent = Player->WeaponManagerComponent;
                                
   if (WeaponManagerComponent) {
        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
        if (CurrentWeaponReplicated) {
            auto WeaponId = (int)CurrentWeaponReplicated->GetWeaponID();
            auto wppp = CurrentWeaponReplicated->GetWeaponID();
            if (WeaponId) {
                auto Weapon_Name= CurrentWeaponReplicated->GetWeaponName().ToString();
                TextureInfo textureInfo{};
                switch (wppp) {
                
                //十字弩
                case 107001:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070011:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070012:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070013:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070014:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070015:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070016:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                case 1070017:
                if(Weapon_Name = "CrossBow"){
                textureInfo = hand.十字弩;
                //*name = "CrossBow";
                }
                break;
                
                //狗杂
                case 101005:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010051:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010052:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010053:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010054:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010055:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010056:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;
                case 1010057:
                if(Weapon_Name = "Groza"){
                textureInfo = hand.Grozy;
                //*name = "Groza";
                }
                break;

                //SKS
                case 103004:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030041:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030042:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030043:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030044:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030045:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030046:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                case 1030047:
                if(Weapon_Name = "SKS"){
                textureInfo = hand.SKS;
                //*name = "SKS";
                }
                break;
                
                //M249                               
                case 105001:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050011:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050012:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050013:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050014:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050015:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050016:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                case 1050017:
                if(Weapon_Name = "M249"){
                textureInfo = hand.M249;
                //*name = "M249";
                }
                break;
                
                //DP28
                case 105002:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050021:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050022:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050023:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050024:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050025:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050026:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                case 1050027:
                if(Weapon_Name = "DP28"){
                textureInfo = hand.DP28;
                //*name = "DP28";
                }
                break;
                
                //Kar98k
                case 103001:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030011:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030012:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030013:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030014:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030015:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030016:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                case 1030017:
                if(Weapon_Name = "Kar98k"){
                textureInfo = hand.K98;
                //*name = "Kar98k";
                }
                break;
                
                //R1895
                case 106003:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060031:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060032:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060033:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060034:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060035:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060036:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                case 1060037:
                if(Weapon_Name = "R1895"){
                textureInfo = hand.P18C;
                //*name = "R1895";
                }
                break;
                
                //P18C
                case 106005:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060051:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060052:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060053:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060054:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060055:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060056:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                case 1060057:
                if(Weapon_Name = "R45"){
                textureInfo = hand.P18C;
                //*name = "R45";
                }
                break;
                
                //AKM
                case 101001:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010011:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010012:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010013:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010014:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010015:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010016:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                case 1010017:
                if(Weapon_Name = "AKM"){
                textureInfo = hand.AKM;
                //*name = "AKM";
                }
                break;
                
                //G36C
                case 101010:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010101:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010102:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010103:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010104:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010105:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010106:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                case 1010107:
                if(Weapon_Name = "G36C"){
                textureInfo = hand.G36C;
                //*name = "G36C";
                }
                break;
                
                //FAMAS                
                case 101100:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011001:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011002:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011003:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011004:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011005:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011006:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
               case 1011007:
                if(Weapon_Name = "FAMAS"){
                //*name = "FAMAS";
                }
                break;
                
                //AUG
                case 101006:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010061:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010062:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010063:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010064:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010065:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010066:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                case 1010067:
                if(Weapon_Name = "AUG"){
                textureInfo = hand.AUG;
                //*name = "AUG";
                }
                break;
                
                //Mini14
                case 103006:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030061:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030062:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030063:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030064:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030065:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030066:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                case 1030067:
                if(Weapon_Name = "Mini14"){
                textureInfo = hand.Mini14;
                //*name = "Mini14";
                }
                break;
                
                //PP19
                case 102005:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020051:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020052:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020053:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020054:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020055:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020056:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                case 1020057:
                if(Weapon_Name = "PP19"){
                textureInfo = hand.PP19;
                //*name = "PP19";
                }
                break;
                
                //M16A4
                case 101002:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010021:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010022:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010023:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010024:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010025:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010026:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                case 1010027:
                if(Weapon_Name = "M16A4"){
                textureInfo = hand.M416A4;
                //*name = "M16A4";
                }
                break;
                
                //死嘎
                case 101003:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010031:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010032:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010033:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010034:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010035:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010036:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                case 1010037:
                if(Weapon_Name = "SCAR"){
                textureInfo = hand.Scar;
                //*name = "SCAR";
                }
                break;
                
                //Win94
                case 103008:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030081:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030082:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030083:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030084:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030085:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030086:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                case 1030087:
                if(Weapon_Name = "Win94"){
                textureInfo = hand.WIN94;
                //*name = "WIN94";
                }
                break;
                
                //UZI
                case 102001:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020011:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020012:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020013:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020014:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020015:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020016:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                case 1020017:
                if(Weapon_Name = "Uzi"){
                textureInfo = hand.UZI;
                //*name = "UZI";
                }
                break;
                
                //汤姆逊
                case 102004:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020041:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020042:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020043:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020044:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020045:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020046:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                case 1020074:
                if(Weapon_Name = "TommyGun"){
                textureInfo = hand.汤姆逊;
                //*name = "TommyGun";
                }
                break;
                
                //Vector
                case 102003:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020031:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020032:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020033:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020034:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020035:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020036:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                case 1020037:
                if(Weapon_Name = "Vector"){
                textureInfo = hand.Vector;
                //*name = "Vector";
                }
                break;
                
                //UMP9
                case 102002:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020021:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020022:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020023:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020024:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020025:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020026:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                case 1020027:
                if(Weapon_Name = "UMP9"){
                textureInfo = hand.UMP9;
                //*name = "UMP9";
                }
                break;
                
                //VSS
                case 103005:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030051:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030052:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030053:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030054:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030055:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030056:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                case 1030057:
                if(Weapon_Name = "VSS"){
                textureInfo = hand.VSS;
                //*name = "VSS";
                }
                break;
                
                //M416
                case 101004:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010041:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010042:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010043:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010044:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010045:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010046:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                case 1010047:
                if(Weapon_Name = "M416"){
                textureInfo = hand.M416;
                //*name = "M416";
                }
                break;
                
                //MK14
                case 103007:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030071:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030072:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030073:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030074:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030075:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030076:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                case 1030077:
                if(Weapon_Name = "MK14"){
                textureInfo = hand.MK14;
                //*name = "MK14";
                }
                break;
                
                //SLR
                case 103009:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030091:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030092:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030093:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030094:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030095:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030096:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                case 1030097:
                if(Weapon_Name = "SLR"){
                textureInfo = hand.SLR;
                //*name = "SLR";
                }
                break;
                
                //MK47
                case 101009:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010091:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010092:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010093:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010094:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010095:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010096:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                case 1010097:
                if(Weapon_Name = "Mk47"){
                textureInfo = hand.MK47;
                //*name = "Mk47";
                }
                break;
                
                //M762
                case 101008:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010081:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010082:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010083:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010084:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010085:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010086:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                case 1010087:
                if(Weapon_Name = "M762"){
                textureInfo = hand.M762;
                //*name = "M762";
                }
                break;
                
                //QBZ
                case 101007:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010071:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010072:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010073:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010074:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010075:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010076:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                case 1010077:
                if(Weapon_Name = "QBZ"){
                textureInfo = hand.QBZ;
                //*name = "QBZ";
                }
                break;
                
                //QBU
                case 103010:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030101:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030102:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030103:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030104:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030105:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030106:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                case 1030107:
                if(Weapon_Name = "QBU"){
                textureInfo = hand.QBU;
                //*name = "QBU";
                }
                break;
                
                //S1897
                case 104002:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040021:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040022:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040023:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040024:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040025:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040026:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                case 1040027:
                if(Weapon_Name = "S1897"){
                textureInfo = hand.S1897;
                //*name = "S1897";
                }
                break;
                
                //S12K
                case 104003:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040031:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040032:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040033:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040034:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040035:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040036:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                case 1040037:
                if(Weapon_Name = "S12K"){
                textureInfo = hand.S12K;
                //*name = "S12K";
                }
                break;
                
                //S686
                case 104001:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040011:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040012:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040013:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040014:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040015:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040016:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                case 1040017:
                if(Weapon_Name = "S686"){
                textureInfo = hand.S686;
                //*name = "S686";
                }
                break;
                
                //拳头👊
                case 108004:
                if(Weapon_Name = "Pan"){
                textureInfo = hand.拳头;
                //*name = "Pan";
                }
                break;
                
                //AWM
                case 103003:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030031:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030032:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030033:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030034:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030035:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030036:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                case 1030037:
                if(Weapon_Name = "AWM"){
                textureInfo = hand.AWM;
                //*name = "AWM";
                }
                break;
                
                //M24
                case 103002:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030021:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030022:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030023:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030024:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030025:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030026:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                case 1030027:
                if(Weapon_Name = "M24"){
                textureInfo = hand.M24;
                //*name = "M24";
                }
                break;
                }
            DrawImage((int) (HeadPosSC.x - 1 - (float) textureInfo.w / 2), (int) (HeadPosSC.y - 50 - (float) textureInfo.y / 2.5f), textureInfo.w, textureInfo.h, textureInfo.textureId);
                }
            } 
                        else {
            
            
            textureInfo = hand.拳头;
            
            DrawImage((int) (HeadPosSC.x - 1 - (float) textureInfo.w / 2), (int) (HeadPosSC.y - 50 - (float) textureInfo.y / 2.5f), textureInfo.w, textureInfo.h, textureInfo.textureId);
            }
        }
   }

/*

                                if (血量) {
                                    int CurHP = (int) std::max(0, std::min((int) Player->Health,
                                                                           (int) Player->HealthMax));
                                    int MaxHP = (int) Player->HealthMax;

                                    long HPColor = IM_COL32(
                                            std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255),
                                            std::min((510 * CurHP) / MaxHP, 255), 0, 155);

                                    if (Player->Health == 0.0f && !Player->bDead) {
                                        HPColor = IM_COL32(255, 0, 0, 155);

                                        CurHP = Player->NearDeathBreath;
                                        if (Player->NearDeatchComponent) {
                                            MaxHP = Player->NearDeatchComponent->BreathMax;
                                        }
                                    }

                                    float boxWidth = density / 5.0f;
                                    boxWidth -= std::min(((boxWidth / 2) / 500.0f) * Distance,
                                                         boxWidth / 2);
                                    float boxHeight = boxWidth * 0.15f;

                                    ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2),
                                                     HeadPosSC.y - (boxHeight * 1.5f)};

                                    ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP),
                                                         vStart.y + boxHeight};
                                    ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};

                                    draw->AddRectFilled(vStart, vEndFilled, HPColor);
                                    draw->AddRect(vStart, vEndRect, IM_COL32(0, 0, 0, 155));
                                }



	 if (信息 || 信息 || 信息) {
        float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
        float boxWidth = boxHeight * 0.65f;
        std::string s;
        
        

        if (信息) {
            s += "(";
            s += std::to_string(Player->TeamID);
            s += ")";
        }

      if (信息) {
          if (Player->bEnsure) {
        s += " bot ";
    } else {
        s +=Player->PlayerName.ToString();
    }              
            s += std::to_string((int)Distance);
            s += " m";
        }
        
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 45.0f));
draw->AddText(NULL, ((float) density / 25.0f), {RootPosSC.x - (textSize.x / 2), RootPosSC.y}, IM_COL32(255, 255, 255, 255), s.c_str());
}
}
}*/
/*
            if (血量) {
                std::string s = "HP:";
                s += std::to_string((int)(100 * Player->Health / Player->HealthMax));
                auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 23.0f));
                draw->AddText(NULL, ((float) density / 23.0f), {RootPosSC.x - (textSize.x / 2), RootPosSC.y + 10}, IM_COL32(255, 255, 255, 255), s.c_str());
            }
            
            if (信息 || 信息) {
                std::string s;
                if (信息) {
                    s += std::to_string(Player->TeamID);
                    s += "．";
                }
                if (信息) {
                    if (Player->bEnsure) {
                        s += "Bot";
                        } else {
                        if (Player->PlayerName.IsValid()) {
                            s += Player->PlayerName.ToString();
                        }
                auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 23.0f));
                draw->AddText(NULL, ((float) density / 23.0f),{HeadPosSC.x - (textSize.x / 2), HeadPosSC.y - 30},IM_COL32(255, 255, 255, 255), s.c_str());
            }
            }
            }
                if (信息) {
                    std::string s;
                    s += std::to_string((int) Distance);
                    s += "M";
                    auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 23.0f));
                    draw->AddText(NULL, ((float) density / 23.0f), {RootPosSC.x - (textSize.x / 2), RootPosSC.y - (textSize.y / 2)}, IM_COL32(255, 255, 255, 255), s.c_str());
                    }
                }
            }*/
            
				                if (血量) {
                  
                                auto pelvis = Player->GetBonePos("Pelvis", {});
                                ImVec2 pelvisPoSC;
                                int CurHP = (int)std::max(0, std::min((int)Player->Health,
                                                                      (int)Player->HealthMax));
                                int MaxHP = (int)Player->HealthMax;

                                long HPColor = IM_COL32(
                                    std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255),
                                    std::min((510 * CurHP) / MaxHP, 255), 0, 155);

                                if (Player->Health == 0.0f && !Player->bDead)
                                {
                                    HPColor = IM_COL32(255, 0, 0, 155);

                                    CurHP = Player->NearDeathBreath;
                                    if (Player->NearDeatchComponent)
                                    {
                                        MaxHP = Player->NearDeatchComponent->BreathMax;
                                    }
                                }

                                float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
                                float boxWidth = 5.0f;
                                ImVec2 vStart = {HeadPosSC.x + 15.0f + (boxWidth / 2), HeadPosSC.y};
                                ImVec2 vEnd = {vStart.x + boxWidth, vStart.y + boxHeight};

                                ImVec2 VStart = {pelvisPoSC.x - (boxWidth / 2),
                                                 pelvisPoSC.y - (boxHeight * 2.1f)};

                                ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP),
                                                     vStart.y + boxHeight};
                                ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};

                                draw->AddRectFilled(vStart, vEndFilled, HPColor);
                                draw->AddRect(vStart, vEndRect, IM_COL32(0, 0, 0, 155));
                                draw->AddRect(vStart, vEndRect, IM_COL32(0, 0, 0, 155));
                            }
                            
	 if (信息 || 信息 || 信息) {
        float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
        float boxWidth = boxHeight * 0.65f;
        std::string s;
        
        

        if (信息) {
            s += "[";
            s += std::to_string(Player->TeamID);
            s += "]";
        }

      if (信息) {
          if (Player->bEnsure) {
        s += "BOT ";
    } else {
        s +=Player->PlayerName.ToString();
    }              
            s += std::to_string((int)Distance);
            s += " M";
        }
        
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 45.0f));
draw->AddText(NULL, ((float) density / 25.0f), {RootPosSC.x - (textSize.x / 2), RootPosSC.y}, IM_COL32(255, 255, 255, 255), s.c_str());
}
}
}
if (骨灰盒) {
if (Actors[i]->IsA(APickUpListWrapperActor::StaticClass())) {
auto Pick = (APickUpListWrapperActor *) Actors[i];
if (!Pick->RootComponent)
continue;
auto PickUpDataList = (TArray<FPickUpItemData>)Pick->GetDataList();
float Distance = Pick->GetDistanceTo(localPlayer) / 100.0f;
if (Distance >500.0f)//骨灰盒显示最大距离
continue;
FVector2D PickUpListsPos;
FVector origin, extends;
if (W2S(Pick->K2_GetActorLocation(), & PickUpListsPos)) {

std::string s = "盒子";
s += " - ";
s += std::to_string((int) Distance);
s += " 米";
draw->AddText(NULL,((float) density / 29.0f),
{PickUpListsPos.X, PickUpListsPos.Y},
IM_COL32(0,0,0,255), s.c_str());
draw->AddText(NULL,((float) density / 30.0f),
{PickUpListsPos.X, PickUpListsPos.Y},
IM_COL32(205,255,255,255), s.c_str());
}
}
}


if (投掷物) {
                              if (Actor->IsA(ASTExtraGrenadeBase::StaticClass())) {
                                auto Grenade = (ASTExtraGrenadeBase *) Actor;
                                auto RootComponent = Actor->RootComponent;
                                if (!RootComponent)
                                continue;
                                float Distance = Grenade->GetDistanceTo(localPlayer) / 100.f;
               if (Distance > 50.0f)//投掷物显示最大距离
               continue;
                                FVector2D grenadePos;
                                if (W2S(Grenade->K2_GetActorLocation(), &grenadePos)) {
               std::string classname = Grenade->GetName();
               if (classname.find("BP_Grenade_Shoulei_C") != std::string::npos) {
                                    std::string s =  "碎片手雷";
                                    s += "(";
                                    s += std::to_string((int) Distance);
                                    s += ")";
                                   draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255,000,000, 255), s.c_str());
                 }
               if (classname.find("BP_Grenade_Smoke_C") != std::string::npos) {
                                    std::string s =  "烟雾弹";
                                    s += "(";
                                    s += std::to_string((int) Distance);
                                    s += ")";
                                   draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255, 255, 255, 255), s.c_str());
                 }
               if (classname.find("BP_Grenade_Burn_C") != std::string::npos) {
                                    std::string s =  "燃烧瓶";
                                    s += "(";
                                    s += std::to_string((int) Distance);
                                    s += ")";
                                   draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255,000,000, 255), s.c_str());
                }
               if (classname.find("BP_Grenade_Stun_C") != std::string::npos) {
                                    std::string s =  "震爆弹";
                                    s += "(";
                                    s += std::to_string((int) Distance);
                                    s += ")";
                                    draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255, 255, 255, 255), s.c_str());
     }
                                }
                            }
            }

if (载具) {
if (Actors[i]->IsA(ASTExtraVehicleBase::StaticClass())) {
auto Vehicle = (ASTExtraVehicleBase *) Actors[i];
if (!Vehicle->Mesh)
continue;
float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
FVector2D vehiclePos;
if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos)) {
std::string s = GetVehicleName(Vehicle);
s += " - ";
s += std::to_string((int) Distance);
s += " 米";
draw->AddText(NULL,((float) density / 29.0f),
{vehiclePos.X, vehiclePos.Y},
IM_COL32(0, 0, 0, 255), s.c_str());
draw->AddText(NULL,((float) density / 30.0f),
{vehiclePos.X, vehiclePos.Y},
IM_COL32(255, 255, 000, 255), s.c_str());
}
}
}
}
}
}
       
std::string credit = "  \n\n青龙Qing-AimBot";
auto textSize = ImGui::CalcTextSize2(credit.c_str(), 0, 41);
绘制字体描边(41, (glWidth/3.5) - (textSize.x / 2), 100, ImColor(255, 255, 255), credit.c_str());

            if(漏打自瞄 || 子追){
            if(Fov判断){
            draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), Fov, ToColor(Config.ColorsESP.Fov颜色), 90, 0.f);
            }}

std::string 字幕 = "@Qing0129\n@BXcheat";
auto 位置 = ImGui::CalcTextSize2(字幕.c_str(), 0, ((float) density / 15.5f));
draw->AddText(NULL, ((float) density / 10.0f), {((float) glWidth / 2.05) - (位置.x / 2), 550}, 红色, 字幕.c_str());

	    g_LocalController = localController;
        g_LocalPlayer = localPlayer;

         if (totalEnemies > 0) {
   
            std::string s;
          if (totalEnemies < 10)
       
          sprintf(extra, "附近500米内有 %d 名玩家", totalEnemies);
           ImGui::GetForegroundDrawList()->AddText(NULL, ((float) density / 13.0f), {((float)glWidth / 2) - (glWidth / 10), 50}, IM_COL32(255, 0, 0, 255), extra);
           } else{
            std::string s;
            s += "";//安全
            draw->AddText(nullptr, ((float) density / 8.5f), ImVec2(glWidth / 2 - 13.f, 50), IM_COL32(255, 0, 0, 255), s.c_str());
             

			
			}}
			
int 重启游戏()
{
    JavaVM* java_vm = g_App->activity->vm;
    JNIEnv* java_env = NULL;
    jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
    if (jni_return == JNI_ERR)
        return -1;
    jni_return = java_vm->AttachCurrentThread(&java_env, NULL);
    if (jni_return != JNI_OK)
        return -2;
    jclass native_activity_clazz = java_env->GetObjectClass(g_App->activity->clazz);
    if (native_activity_clazz == NULL)
        return -3;
    jmethodID method_id = java_env->GetMethodID(native_activity_clazz, "AndroidThunkJava_RestartGame", "()V");
    if (method_id == NULL)
        return -4;
    java_env->CallVoidMethod(g_App->activity->clazz, method_id);
    jni_return = java_vm->DetachCurrentThread();
    if (jni_return != JNI_OK)
        return -5;
    return 0;
}	

std::string getClipboardText()
{
	if (!g_App)
		return "";
	auto activity = g_App->activity;
	if (!activity)
		return "";
	auto vm = activity->vm;
	if (!vm)
		return "";
	auto object = activity->clazz;
	if (!object)
		return "";
	std::string result;
	JNIEnv *env;
	vm->AttachCurrentThread(&env, 0);
	{
		auto ContextClass = env->FindClass("android/content/Context");
		auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");
		auto str = env->NewStringUTF("clipboard");
		auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
		env->DeleteLocalRef(str);
		auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
		auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");
		auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
		auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");
		auto text = env->CallObjectMethod(clipboardManager, getText);
		if (text)
		{
			str = (jstring)env->CallObjectMethod(text, toStringMethod);
			result = env->GetStringUTFChars(str, 0);
			env->DeleteLocalRef(str);
			env->DeleteLocalRef(text);
		}
		env->DeleteLocalRef(CharSequenceClass);
		env->DeleteLocalRef(ClipboardManagerClass);
		env->DeleteLocalRef(clipboardManager);
		env->DeleteLocalRef(ContextClass);
	}
	vm->DetachCurrentThread();
	return result;
}

// ======================================================================== //
const char *GetAndroidID(JNIEnv *env, jobject context)
{
	jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
	jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
	jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
	jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());
	auto obj = env->CallObjectMethod(context, getContentResolverMethod);
	auto str = (jstring)env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
	return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceModel(JNIEnv *env)
{
	jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
	jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());
	auto str = (jstring)env->GetStaticObjectField(buildClass, modelId);
	return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceBrand(JNIEnv *env)
{
	jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
	jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());
	auto str = (jstring)env->GetStaticObjectField(buildClass, modelId);
	return env->GetStringUTFChars(str, 0);
}

const char *GetPackageName(JNIEnv *env, jobject context)
{
	jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
	jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());
	auto str = (jstring)env->CallObjectMethod(context, getPackageNameId);
	return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid)
{
	jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());
	auto len = strlen(uuid);
	jbyteArray myJByteArray = env->NewByteArray(len);
	env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *)uuid);
	jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
	jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());
	auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
	auto str = (jstring)env->CallObjectMethod(obj, toStringMethod);
	return env->GetStringUTFChars(str, 0);
}

struct MemoryStruct
{
	char *memory;
	size_t size;
};

static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
	size_t realsize = size * nmemb;
	struct MemoryStruct *mem = (struct MemoryStruct *)userp;

	mem->memory = (char *)realloc(mem->memory, mem->size + realsize + 1);
	if (mem->memory == NULL)
	{
		return 0;
	}

	memcpy(&(mem->memory[mem->size]), contents, realsize);
	mem->size += realsize;
	mem->memory[mem->size] = 0;

	return realsize;
}
static bool 菜单 = true;  
static bool 菜单1 = false;
static bool 菜单2 = false;
static bool 菜单3 = false;
/*static bool 菜单4 = false;
static bool 菜单5 = false;*/

char *appkey = OBFUSCATE("f2bae0e5a43f819bb2cad9e0aa901680");
//char *appkey = "f2bae0e5a43f819bb2cad9e0aa901680";
char *登录调用码 = OBFUSCATE("F1AE043CB268608F");
char *公告调用码 = OBFUSCATE("D4E4E86003FCAD25");
char *解绑调用码 = OBFUSCATE("5DBF464BC208454A");
char *心跳验证调用码 = OBFUSCATE("F0DEC5E21334CB0C");
//char *登录状态码 = "A685F531FA528373";

char *提示;
char *登录状态码;
static bool 错误提示 = false;
char *公告 = httppost("w.t3data.net",公告调用码, "");

void *心跳验证(void *asrg)
{
    while(true)
    {
        char 心跳数据[512];
        sprintf(心跳数据, "kami=%s&statecode=%s", asrg, 登录状态码);
        char *心跳回调 = httppost("w.t3data.net", 心跳验证调用码, 心跳数据);
        if (strncmp(心跳回调, "心跳验证成功", 12) == 0)//这里自己填自己设置的
        {
        } else {
            //这里填自己想填的
            isLogin = false;
        }
        sleep(300);//验证延迟
    }
}
std::string Login(const char *user_key) {
    if (!g_App)
        return "内部错误";
    auto activity = g_App->activity;
    if (!activity)
        return "内部错误";

    auto vm = activity->vm;
    if (!vm)
        return "内部错误"; 

    auto object = activity->clazz;
    if (!object)
        return "内部错误";

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    std::string hwid = user_key;
    
    hwid += GetAndroidID(env, object);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);
    std::string UUID = getHEX(加64(GetAndroidID(env, object)));
    vm->DetachCurrentThread();
    std::string errMsg;
    
    //时间戳效验
    time_t ti = time(NULL);
    static char sj[13];
    获取时间戳(sj);
    std::string sjc = getHEX(加64(sj));
    
    //单码签名校验
    char sign2[256];
    sprintf(sign2, "kami=%s&imei=%s&t=%s&%s", getHEX(加64(user_key)), UUID.c_str(), sjc.c_str(), appkey);
    char sign2md5[32] = { 0 };
    获取MD5(sign2, sign2md5);
    std::string sign22 = getHEX(加64(sign2md5));
    
    char 整[4096];
    sprintf(整,"kami=%s&imei=%s&t=%s&s=%s", getHEX(加64(user_key)), UUID.c_str(), sjc.c_str(), sign22.c_str());
    char *内容 = NULL;
    char *数据 = httppost("w.t3data.net",登录调用码, 整);
    内容 = 解64(数据);
    if (strncmp(内容, "登录成功:200;", 12) == 0)
	{
		char *卡密ID = strstrstr(内容, "卡密ID:", ";");
		到期时间 = strstrstr(内容, "到期时间:", ";");
		char *到期时间 = strstrstr(内容, "当前时间戳:", ";");
		char *当前时间 = strstrstr(内容, "当前时间:", ";");
		char *效验密钥 = strstrstr(内容, "效验密钥", ";");
        //获取时间戳(sj);
        long vs1 = (long)atoll(sj);
        long vs2 = (long)atoll(当前时间);
        if ((vs1 - vs2) < 18)
        {
     	    isLogin = true;
        }
        else
        {
            错误提示 = true;
            提示 = "时间戳效验失败";
        }
    }
    else
    {   
    错误提示 = true;
    提示 = 内容;
    }
    return "OK";
}
std::string Unbind(const char *user_key) {
    char 解绑整[256];
    sprintf(解绑整,"kami=%s", user_key);
    char *解绑数据 = httppost("w.t3data.net",解绑调用码, 解绑整);
    错误提示 = true;
    提示 = 解绑数据;
    return "OK";
}


void anim(){
  
if(openx<650 * 1.0f)
openx += 8.5f;
else if(openx==650 * 1.0f)
openx = 650 * 1.0f;
/*
if(openy<530 * 0.8f)
openy += 3.f;
else if(openy==530 * 0.8f)
openy = 530 * 0.8f;
*/
if(animal<1.f)
animal += 0.01f;
else if(animal==1.f)
animal = 1.f;
}
 
void pageanim(){
if(pageal<1.f)
pageal+= 0.01f;
else if(pageal==1.f)
pageal=1.f;
 //@Author @MyLibName
//Channel @RelaxSquadhack
}
 
void disanim()
{
openx = 0.f;
//@Author @MyLibName
//Channel @RelaxSquadhack
openy = 0.f;
bgalpha = 0.f;
animal = 0.f;
if(openx>650 * 1.0f)
openx -= 8.5f;
else if(openx==650 * 1.0f)
openx = 0 * 0.0f;
/*
if(openy>650 * 0.8f)
openy -= 8.5;
else if(openy==650 * 0.8f)
openy = 0 * 0.0f;
*/
if(animal<1.f)
animal += 0.01f;
else if(animal==1.f)
animal = 1.f;
}

EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface)
{
	eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
	eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
	if (glWidth <= 0 || glHeight <= 0)
return orig_eglSwapBuffers(dpy, surface);

	if (!g_App)
return orig_eglSwapBuffers(dpy, surface);

	screenWidth = ANativeWindow_getWidth(g_App->window);
	screenHeight = ANativeWindow_getHeight(g_App->window);
	density = AConfiguration_getDensity(g_App->config);
 /*  if (!initImGui)
    {
        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImGuiIO &io = ImGui::GetIO();
        io.IniFilename = NULL;
ImGui::StyleColorsLight();
//ImGui::StyleColorsDark();
//ImGui::StyleColorsClassic();
        ImGui_ImplOpenGL3_Init("#version 300 es");
        ImFontConfig font_cfg;
		std::string FontName;
		//FontName += "/data/data/";
		//FontName += GetPackageName().c_str();
		//FontName += "/files/fonts/NIKE.ttf";
FontName="/storage/emulated/0/Android/data/com.tencent.ig/NIKE.ttf";
dl_curl_get_req("https://fs-im-kefu.7moor-fs1.com/29397395/4d2c3f00-7d4c-11e5-af15-41bf63ae4ea0/1691534706856/NIKE.ttf",FontName);
io.Fonts->AddFontFromFileTTF(FontName.c_str(),20,&font_cfg, io.Fonts->GetGlyphRangesChineseFull());
        io.Fonts->AddFontDefault(&font_cfg);
        ImGui::GetStyle().ScaleAllSizes(3.0f);*/
        
        if (!initImGui) {

        ImGui::CreateContext();       
        
    ImGuiStyle *style = &ImGui::GetStyle();       
    style->Colors[ImGuiCol_Text] = ImColor(0, 0, 0, 255);//文本颜色
    style->Colors[ImGuiCol_WindowBg] = ImColor(255, 255, 255, 255);//窗口背景颜色
    style->Colors[ImGuiCol_PopupBg] = ImVec4(118, 238, 198,255);//弹出窗口背景颜色
    style->Colors[ImGuiCol_Border] = ImColor(127, 255, 212,255); // 整体边框颜色
    //style->Colors[ImGuiCol_BorderShadow] = ImColor(118, 238, 198,255);//边框阴影颜色(内部控件边框颜色)
    style->Colors[ImGuiCol_FrameBg] = ImColor(255, 255, 255, 255);//框架背景颜色(按钮没动的颜色)
     style->Colors[ImGuiCol_FrameBgActive] = ImColor(255, 255, 255, 255);//激活的框架背景颜色
     style->Colors[ImGuiCol_FrameBgHovered] = ImColor(255, 255, 255, 255);//鼠标悬停的框架背景颜色
     style->Colors[ImGuiCol_ScrollbarBg] = ImColor(255, 255, 255, 255);//滚动区域背景颜色
     style->Colors[ImGuiCol_ScrollbarGrab] = ImColor(118, 238, 198,255);//滚动条抓取颜色
     style->Colors[ImGuiCol_ScrollbarGrabHovered] = ImColor(118, 238, 198,255);//鼠标悬停时的滚动条抓取颜色
     style->Colors[ImGuiCol_ScrollbarGrabActive] = ImColor(118, 238, 198,255);//激活时的滚动条抓取颜色
     style->Colors[ImGuiCol_CheckMark] = ImColor(118, 238, 198,255);//选中标记颜色
     style->Colors[ImGuiCol_SliderGrab] = ImColor(16, 255, 225,255);//滑块抓取颜色
     style->Colors[ImGuiCol_SliderGrabActive] = ImColor(118, 238, 198,255);//激活时的滑块抓取颜色
     style->Colors[ImGuiCol_Separator] = ImColor(118, 238, 198,255);//分隔线颜色
     style->Colors[ImGuiCol_SeparatorActive] = ImColor(118, 238, 198,255);//激活时的分隔线颜色//深灰色
     style->Colors[ImGuiCol_SeparatorHovered] = ImColor(118, 238, 198,255);//鼠标悬停时的分隔线颜色
     style->Colors[ImGuiCol_Button] = ImColor(118, 238, 198,255);//正常按钮颜色//酷安绿
     style->Colors[ImGuiCol_ButtonActive] = ImColor(118, 238, 198,255);//激活的按钮颜色//微信绿
     style->Colors[ImGuiCol_ButtonHovered] = ImColor(118, 238, 198,255);//鼠标悬停时的按钮颜色
     style->Colors[ImGuiCol_HeaderActive] = ImColor(118, 238, 198,255);//激活的标题颜色
     style->Colors[ImGuiCol_HeaderHovered] = ImColor(118, 238, 198,255);//鼠标悬停时的标题颜色
	 style->Colors[ImGuiCol_TextSelectedBg] = ImColor(87, 59, 128,255);//选中文本背景颜色
	 style->Colors[ImGuiCol_Header] = ImColor(118, 238, 198,255);//设置下展标题颜色
		
	ImGui::GetStyle().ScaleAllSizes(2.0f);
    //透明度
    ImGui::SetNextWindowBgAlpha(1.0f);
    //设置标题栏居中
    //style.WindowTitleAlign = ImVec2(0.5, 0.5);
    style->FramePadding = ImVec2(12, 12); // 设置标题栏宽度
    // 内距 就是控件距离
    style->ScaleAllSizes(1.0f);
    // 窗口菜单按钮位置(就是窗口标题的那个三角形)(-1无 0左 1右)
    style->WindowMenuButtonPosition = 0;
    // 窗体边框圆角
    //style.WindowRounding = 150.0f;
    //控件圆角
    style->FrameRounding = 8.0f;
    // 框架描边宽度(按钮)
    style->FrameBorderSize = 3.5f;
    //框架描边宽度
    style->WindowBorderSize = 6.5f;
    // 滚动条圆角
    style->ScrollbarRounding = 7.0f;
    // 滚动条宽度
   	style->ScrollbarSize = 50.0f;
    // 滑块圆角
    style->GrabRounding = 7.0f;
    // 滑块宽度
    style->GrabMinSize = 30.0f;
		
        ImGui_ImplAndroid_Init();
        
        ImGui_ImplOpenGL3_Init("#version 300 es");
		
		ImGuiIO &io = ImGui::GetIO();
        
        io.Fonts->AddFontFromMemoryTTF((void *)小鱼字体_data, 小鱼字体_size, 26.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
        //io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 30.0f, &icons_config, icons_ranges);            
        //小鱼字体 = io.Fonts->AddFontFromMemoryTTF((void *) 小鱼字体_data, 小鱼字体_size, 18.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());                        
        memset(&Config, 0, sizeof(sConfig));
        
        Config.ColorsESP.Line = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Box = CREATE_COLOR(255, 0, 255, 255);
        Config.ColorsESP.Fov颜色 = CREATE_COLOR(255,000,000,255);
        InitTexture();//add
        initImGui = true;
    }
    ImGuiIO &io = ImGui::GetIO();
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(glWidth,glHeight);
    ImGui::NewFrame();
//UI
DrawESP(ImGui::GetBackgroundDrawList(),glWidth, glHeight);



for (int i = 0; i < IM_ARRAYSIZE(io.KeysDown); i++) {
    if (ImGui::IsKeyDown(i)) {
动画 = true;
悬浮窗 = !悬浮窗;
    }
    }

if (isLogin){
if (悬浮窗){

openx += 8.5f;
if (openx >= 650.0f) { //如果达,固定
openx = 650.0f;
}
}else {
openx -=8.5f;
if (openx <= 5) { //如果达,固定
动画 = false;
openx = 0;
}
}
if(animal<1.f)
animal += 0.01f;
else if(animal==1.f)
animal = 1.f;
}
//ImGui::SetNextWindowSize(ImVec2((float) glWidth*0.30,(float) glHeight*0.65), ImGuiCond_Once);

              
if (!悬浮窗)
{
disanim();
}
if (悬浮窗)
{
anim();
//disanim();
//ImGui::SetNextWindowSize(ImVec2(650, 460));
ImGui::SetNextWindowSize(ImVec2(openx, 460));

if (ImGui::Begin(" Qing ", 0, ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar )) {
			    
static std::string err;
if (!isLogin) {
ImGui::PushItemWidth(-1);
ImGui::InputText("##key", s, sizeof s);
// auto +
auto key = getClipboardText();
strncpy(s, key.c_str(), sizeof s);
// auto login
   
ImGui::PushItemWidth(-1);               
if (ImGui::Button("登陆", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) { Login(s); }
ImGui::PopItemWidth();
if (ImGui::Button("解绑", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) { Unbind(s); }
   if (错误提示) {
   ImGui::Text("提示:%s", 提示);
   }
   /*
   if (心跳验证失败) {
   ImGui::Text("提示:%s", 心跳验证提示);
   }*/
   ImGui::Text("公告:%s", 公告);
   ImGui::PopItemWidth();
} else {

ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, {10 , 10});
if (ImGui::BeginChild("左侧主菜单", ImVec2(150, 0), true,ImGuiWindowFlags_None));    
{
ImGui::Image(Logo.textureId, {130, 140});
if (ImGui::Button("主页区域",ImVec2(130, 60)))//200
{
菜单 = true;
菜单1 = false;
菜单2 = false;
菜单3 = false;
				//菜单4 = false;
}
			
if (ImGui::Button("绘制区域",ImVec2(130, 60)))//260
{
菜单 = false;
菜单1 = true;
菜单2 = false;
菜单3 = false;
				//菜单4 = false;
}
if (ImGui::Button("自瞄区域",ImVec2(130, 60)))//320
{
菜单 = false;
菜单1 = false;
菜单2 = true;
菜单3 = false;
				//菜单4 = false;
}
			
if (ImGui::Button("缩小",ImVec2(130, 60)))//380
{
悬浮窗 = false;
}
ImGui::EndChild();

}

ImGui::SameLine();
if(菜单){
						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{
ImGui::TextColored(ImColor(255,0,0,225), "(CN) 很高兴认识你  (EN) Nice to meet you");
ImGui::Spacing();                                      
ImGui::Text("欢迎使用青龙Qing 愿你人生永远开开心心\n耗时 %.3fms   当前帧率 %.1fFPS", 1000.0f / io.Framerate, io.Framerate);
ImGui::Spacing();      
ImGui::TextColored(ImColor(0,225,0,225),"当前版本为青龙Qing 1.0重置版 <漩涡飞段>");
ImGui::Spacing();
if (ImGui::Button("退出程序",{-1,75})){
重启游戏();
}
ImGui::SliderFloat("雷达X轴坐标", &雷达X, 0.0f, 500.0f);
ImGui::SliderFloat("雷达Y轴坐标", &雷达Y, 0.0f, 300.0f);      
//ImGui::TextColored(ImGui::GetStyle().Colors[ImGuiCol_Text], "前设备分辨率为: %dx%d", screen_x, screen_y);
ImGui::Checkbox("90帧(90FPS)", &九十);
ImGui::SameLine();
ImGui::Checkbox("大厅过检（Bypass）", &大厅);
ImGui::EndTabItem();   
} 
}  
if(菜单1){
						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{
ImGui::TextColored(ImColor(255,0,0,225), "(CN) 你好，朋友  (EN) Hello, friend");
ImGui::Spacing();
if (ImGui::Button("显示主要",{-1,75}))   
{
射线 = true;
骨骼 = true;
血量 = true;
信息 = true;
方框 = true;
投掷物 = true;
载具 = true;
骨灰盒 = true;
手持 = true;
}	
ImGui::Spacing();
ImGui::TextColored(ImColor(蓝色), "(CN) 绘制菜单  (EN) ESP Menu");
ImGui::Checkbox("人物方框", &方框);
ImGui::SameLine();
ImGui::Checkbox("人物射线", &射线);
ImGui::SameLine();
ImGui::Checkbox("人物骨骼", &骨骼);
                    
ImGui::Checkbox("背敌预警", &背敌);
ImGui::SameLine();
ImGui::Checkbox("人物信息", &信息);
ImGui::SameLine();
ImGui::Checkbox("绘制血量", &血量);

ImGui::Checkbox("忽略人机", &隐藏人机);
ImGui::SameLine();
ImGui::Checkbox("绘制雷达", &雷达);
ImGui::SameLine();
ImGui::Checkbox("绘制手持", &手持);

ImGui::Checkbox("绘制载具", &载具);
ImGui::SameLine();
ImGui::Checkbox("绘制盒子", &骨灰盒);
ImGui::SameLine();
ImGui::Checkbox("投掷预警", &投掷物);

ImGui::EndTabItem();   
} 
}  

if(菜单2){
						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{
ImGui::TextColored(ImColor(255,0,0,225), "(CN) 好久不见  (EN) Long time no see");
ImGui::Checkbox("激活漏打自瞄（Aimbot）- 200M", &漏打自瞄);      

ImGui::Checkbox("瞄准线(Line)", &瞄准线);
ImGui::SameLine();
ImGui::Checkbox("剩余人数", &剩下人数);

ImGui::Checkbox("人机不瞄", &忽略人机);
ImGui::SameLine();
ImGui::Checkbox("倒地不瞄", &忽略倒地);
ImGui::Separator();
ImGui::TableNextColumn();			
ImGui::Text("自瞄配置调整 - (Aimbot set)");
if (ImGui::Combo("触发条件", &style_bw, "开火（Shooting）\0开镜（Scoping）\0开火或开镜\0")) {
switch (style_bw) 
{
case 0:
开火 = true; 
开镜 = false;
开火开镜 = false;
break;
case 1:
开火 = false;
开镜 = true;
开火开镜 = false;
break;
case 2:
开火 = false;
开镜 = false;
开火开镜 = true;
break;                          
}          
}

if (ImGui::Combo("自瞄部位", &style_idx, "头部（Head）\0胸部 (Body)\0")) {
switch (style_idx) 
{
case 0:
头部 = true;
身体 = false;
break;
case 1:
头部 = false;
身体 = true;
break;
}          
}
ImGui::Separator();
ImGui::TableNextColumn();
ImGui::SliderFloat("范围Fov",&Fov, 0.0f, 160.0f);
ImGui::EndTabItem();   
} 
}
}
}  
}
    ImGui::End();
    ImGui::Render();

    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

    return orig_eglSwapBuffers(dpy, surface);
}

int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);

int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
    if (initImGui) {
        ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});
    }
    return orig_onInputEvent(app, inputEvent);
}




#define PI   3.14159265358979323846f
#define SLEEP_TIME 1000LL / 120LL
#define MEMTRAPS_DELAY 1000LL

void *UpdateMemTraps(void *) {
    while (true) {
        auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();	
		sleep(10);
        std::vector<MemTrap_t> tmp;
        FILE *f = fopen("/proc/self/maps", "r");
        if (f) {
            char line[512];
            while (fgets(line, sizeof line, f)) {
                uintptr_t tmpBase, tmpEnd;
                char tmpProt[8];
                if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %s %*s %*s %*s %*s", &tmpBase, &tmpEnd, tmpProt) > 0) {
                    if (tmpProt[0] != 'r') {
                        MemTrap_t mt = MemTrap_t();
                        mt.baseAddr = tmpBase;
                        mt.endAddr = tmpEnd;
                        tmp.push_back(mt);
                    }
                }
            }
            fclose(f);
        }
        
if (九十) {
auto objs = UObject::GetGlobalObjects();
for (int i = 0; i < objs.Num(); i++) {
auto Object = objs.GetByIndex(i);
if (isObjectInvalid(Object))
continue;
if (Object->IsA(USTExtraGameInstance::StaticClass())) {
                auto playerChar = (USTExtraGameInstance *) Object;      
                playerChar->UserDetailSetting.PUBGDeviceFPSDef = 90;   
                playerChar->UserDetailSetting.PUBGDeviceFPSLow = 90;
                playerChar->UserDetailSetting.PUBGDeviceFPSMid = 90;
                playerChar->UserDetailSetting.PUBGDeviceFPSHigh = 90;
                playerChar->UserDetailSetting.PUBGDeviceFPSHDR = 90;
                playerChar->UserDetailSetting.PUBGDeviceFPSUltralHigh = 90;
}
}
}
        
        MemTraps = tmp;   
        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
        std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, MEMTRAPS_DELAY - td), MEMTRAPS_DELAY)));
    }
    return 0;
}



void *NIKEHome_thread(void *) {
    while (!UE4) {
        UE4 = Tools::GetBaseAddress("libUE4.so");
        sleep(1);
    }
while (!libTDataMaster) {
libTDataMaster = Tools::GetBaseAddress("libTDataMaster.so");
sleep(1);
}
while (!libanort) {
libanort = Tools::GetBaseAddress("libanort.so");
sleep(1);
}
while (!libanogs) {
libanogs = Tools::GetBaseAddress("libanogs.so");
sleep(1);
}
while (!libgcloud) {
libgcloud = Tools::GetBaseAddress("libgcloud.so");
sleep(1);
}
while (!g_App) {
        g_App = *(android_app **) (UE4 + GNativeAndroidApp_Offset);
        sleep(1);
    }
    FName::GNames = GetGNames();
    while (!FName::GNames) {
        FName::GNames = GetGNames();
        sleep(1);
    }
/*    
    while (!g_App->onInputEvent)
sleep(1);
orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
g_App->onInputEvent = onInputEvent;
FName::GNames = GetGNames();
while (!FName::GNames)
{
FName::GNames = GetGNames();
sleep(1);
}*/
    
    UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);  
    
    orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
    g_App->onInputEvent = onInputEvent;
    plthook_t *plthook;
    if (plthook_open(&plthook, "libUE4.so") == 0) {
        plthook_replace(plthook, "eglSwapBuffers", (void *) _eglSwapBuffers, (void **) &orig_eglSwapBuffers);
        plthook_close(plthook);
    }   
Tools::Hook((void *) DobbySymbolResolver(OBFUSCATE("/system/lib/libEGL.so"), OBFUSCATE("eglSwapBuffers")), (void *) _eglSwapBuffers, (void **) &orig_eglSwapBuffers);
    pthread_t t;
    pthread_create(&t, 0, UpdateMemTraps, 0);
    items_data = json::parse(JSON_ITEMS);
    return 0;
}
/*
xhook_register("libUE4.so", "eglSwapBuffers", (void *) _eglSwapBuffers, (void **) &orig_eglSwapBuffers);//基于libUE4.so eglSwapBuffers内部渲染
xhook_refresh(0);

pthread_t t;
pthread_create(&t, 0, UpdateMemTraps, 0);

items_data = json::parse(JSON_ITEMS);

    return 0;
}*/

__attribute__((constructor))
void lib_main()
{
	pthread_t ptid;
	pthread_t ptid2;
	pthread_t ptid3;
	pthread_create(&ptid, NULL, NIKEHome_thread, NULL);
	pthread_create(&ptid2, NULL, hack_thread, NULL);
	pthread_create(&ptid3, NULL, UNITY, NULL);
}

/*
void hack() {
    pthread_t ptid;
	pthread_t ptid2;
	pthread_t ptid3;
	pthread_create(&ptid, NULL, NIKEHome_thread, NULL);
	pthread_create(&ptid2, NULL, hack_thread, NULL);
	pthread_create(&ptid3, NULL, UNITY, NULL);
    }
    REGISTER_ZYGISK_MODULE(MyModule)
  //  pthread_create(&t, 0, 修复追封_thread, 0);*/
