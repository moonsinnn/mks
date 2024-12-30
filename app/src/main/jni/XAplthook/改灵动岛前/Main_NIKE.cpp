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
#include <random>
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
#include "美化.h"
#include "Vector3.hpp"

#include "Menu.h"
#include "小鱼字体.h"

#include "logo.h"
#include "图片位置/Logo15.h"
#include "图片位置/Logo14.h"
#include "图片位置/Logo13.h"
#include "图片位置/Logo12.h"
#include "图片位置/Logo11.h"
#include "图片位置/tupianaz.h"
#include "图片位置/tupianan.h"
#include "图片位置/tupianav.h"
#include "图片位置/tupianam.h"
#include "图片位置/tupianac.h"
#include "图片位置/tupianab.h"
#include "图片位置/tupianax.h"
#include "图片位置/tupianas.h"
#include "图片位置/tupianaf.h"
#include "图片位置/tupianai.h"
#include "图片位置/纹理.h"
#include "数组图片/定义文件.h"

#include "UI/UI配色.cpp"



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
#define targetLibName OBFUSCATE("libINTLFoundation.so")
#define targetLibName OBFUSCATE("libijkffmpeg.so")
#define targetLibName OBFUSCATE("libCrashSight.so")
#define targetLibName OBFUSCATE("libGCloudVoice.so")
#define targetLibName OBFUSCATE("libmarsxlog.so")
#define targetLibName OBFUSCATE("libgcloud.so")
#define targetLibName OBFUSCATE("libtgpa.so")
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



float 初始宽度=600;//初始宽度
float 初始高度=400;//初始长度
bool 我;

char extra[32];
char extras[32];
char extraa[32];
#define PATCH_LIB
#define HOOK_LIB
/*#define GNames_Offset 0x6ee4458
#define GEngine_Offset 0xcb0a7a0 //UEngine
#define GUObject_Offset 0xc8d61f0
#define GetActorArray_Offset 0x8b367fc
#define CanvasMap_Offset 0xc8defb8
#define ProcessEvent_Offset 0x7143130
#define GNativeAndroidApp_Offset 0xc439988
#define Actors_Offset 0xa0*/
#define GEngine_Offset 0xcb15820 //UEngine
#define GEngine_Offset 0xcb15820 //UlocalPlayer
#define GNames_Offset 0x6f0bcb4
#define GUObject_Offset 0xc8e1270
#define GNativeAndroidApp_Offset 0xc443a08
#define CanvasMap_Offsets 0xc2e63ee
#define Process_Event_Offset 0x716be7c
#define GetActorArray 0x8b36158
#define ShortEvent_Offset 168 //Not Sure
#define Actors_Offset 0xA0

float WeaponScaleChanger = 2;
float CurrentWeaponReplicated;
static bool 悬浮窗 = true;
bool 开 = true;
 bool HZT;
 int 播报数值=1101003119;
 int 枪械值=1101004046;
int 衣服数值=1406971;
bool 播报美化;
 bool qq;
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
enum 漏打 {
DHead = 0,//头部
Pelvis = 1,
Lhand = 2,//左手
Rhand = 3,//右手
Lfoot = 4,//左脚
Rfoot = 5//右脚
};
//2
bool 头部优先;
bool 盆骨优先;
bool 左手优先;
bool 右手优先;
bool 左脚优先;
bool 右脚优先;
bool 局内检测;
//3
static bool is头,is脖子,is盆骨,is左上臂,is左小臂,is左手,is左大腿,is左小腿,is左脚,is右上臂,is右小臂,is右手,is右大腿,is右小腿,is右脚;
//5
static int 算法 = 1;
float 自瞄距离 = 150;
float 追踪距离 = 500;
float Aim_Anticipation = 1.950;
float Speed_X = 3;
float Speed_Y = 4;
float Aim_PosZ = 0.012;
float Aim_Vehicle = 1.820;
float 预判距离 = 120;//预判
int style_idx = 0;
int style_zt = 0;
int style_cd = 0;
int style_zx = 0;
bool 函数1;
bool 函数2;
bool 函数追踪;
bool 初始化;
bool 下雨;
bool 下雪;
bool 控制循环;
int style_bw = 0;
float DanceValue;
float DancerValue;
bool 距 = true;
 int style_sn = 0;
int style_fox=0;
bool 自选美化;
bool 剩下人数;
bool 瞄准线;
bool 总验证 = false;
bool 语言;
bool 文字 = false;
bool 登录界面 = false;
bool 登录验证 = false;
bool 验证 = false;
bool 检测局内;
bool 清理残留;
bool 动态;
float 追踪 = 100;
bool 开镜或开火;
static bool 子追ShowAimFov = true;
bool Freedom6 = false;
bool 子追360;
bool 音乐菜单;
bool 开镜和开火;
float 预判;
bool 老鼠人;
float 就;
bool 脖子;
bool 你 = true;
bool 国家;
bool 人物;
bool 人物圈;
bool 菜单5;
bool 屏幕圈;
bool 屏幕;
bool 头;
bool 无;
bool 上帝视角;
float 视角;
bool 概率;
bool 解锁90帧;
bool 漏打;
bool 无概率;
bool 概率追踪;
bool 掩体判断;
bool 悬浮准星;
bool 悬浮准星紫;
bool 悬浮准星粉;
bool 悬浮准星蓝;
bool 悬浮准星绿;
bool 悬浮准星黑;
bool 悬浮准星白;
bool 悬浮准星鸡腿;
bool 屏幕粉;
bool 屏幕紫;
bool 屏幕蓝;
bool 屏幕青;
bool 屏幕青绿;
bool 屏幕深绿;
bool 屏幕白;
bool 屏幕灰;
bool 屏幕科技;
bool 屏幕红;
bool 自瞄1;
bool 绘制黑;
bool 绘制白;
bool 绘制鸡腿;

bool 防封2;
static bool 调用 = true;
static bool 调用1 = true;
static bool 调用2 = true;
static bool 调用3 = true;
static bool 调用4 = true;
static bool 调用5 = true;
static bool 调用6 = true;
float 命中率 = 0.6f;
static char BQAQSQEQ[128] = {"ZsIaHJCP8vhG4kU16YdWzK7M9tn523ijcQrxmBAwXog0OlNyEFDSpbTLV/q+fReu"};
/*#include "T3/T3验证.h"
static char s[64];
static bool isLogin = true;*/
static bool isLogin = false;

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
bool 除雾;
bool 黑天;
bool 翻墙;
bool 六道;
bool 显伤;
bool 变色;
bool 动画;
bool 广角;
bool 平板视角;
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
ImColor 步枪颜色 = 浅粉;
ImColor 冲锋颜色 = 浅粉;
ImColor 狙击颜色 = 浅粉;
ImColor 散弹颜色 = 浅粉;
ImColor 手枪颜色 = 浅粉;
ImColor 近战颜色 = 浅粉;
ImColor 其他颜色 = 浅粉;
ImColor 子弹颜色 = 黄色;
ImColor 倍镜颜色 = 橘黄;
ImColor 配件颜色 = 橘黄;
ImColor 药品颜色 = 绿色;
ImColor 投掷颜色 = 紫色;
ImColor 特殊颜色 = 红色;

//概率子追
//定义区
int 狗子计数 = 0;
int 物资箱计数 = 0;
static int TestDe = 0;
static int ZdMax; //弹匣子弹最大数
static int ZdDq;//弹匣当前子弹剩余数量
static int ASD;
static bool IsLaunch = false;
struct MemTrap_t {
    uintptr_t baseAddr;
    uintptr_t endAddr;
};


std::vector<MemTrap_t> MemTraps;
json items_data;
std::map<int, bool> Items;
std::string g_Token, g_Auth;
//===ID定义

//==定义
bool 马可;
bool 变大;
bool 自动瞄准;
bool 九十;
bool 一百四十四;
bool 一百二十;
static float 持续时间 = 30.00f;
static float 自瞄速度 = 100.00f;
static float 平滑力度 = 7.00f;
static float 压枪强度 = 25.00f;
static float 子弹下坠 = 0.50f;
static float Z轴下坠 = 1.50f;
static float 预判系数 = 400.00f;
bool 头部;
bool localController;
bool 分辨;
bool 绘制蓝;
bool 绘制绿;
bool 绘制紫;
bool 绘制粉;
bool 绘制;
bool 判断 = true;
bool 蓝木乃伊;
bool 曙光芙洛拉;
bool 果冻;
bool 胖达;
bool 明日香;
bool 丧尸;
bool 龙吟妹控;
bool 齐天大圣;
bool 全枪美化;
bool 三鹿奶粉;
bool 冰霜核心;
bool 物资;
bool 近战武器;
bool 步枪;
bool 冲锋枪;
bool 散弹枪;
bool 手枪;
bool 狙击枪;
bool 其他;
bool 特殊;
bool 变卖物;
bool 倍镜;
bool 配件;
bool 头盔;
int CrossLen = 20; // 或者其他合适的初始化值
float 小晨宝嘻嘻=200.0f;//初始宽度
float 最小长度3=90.0f;//最小宽度
float 最大长度3=250.0f;//最大宽度
float 动画速度3=5.0f;//动画速度
bool 宽度增加3;//宽度增加状态
float 初始长度3=25.0f;//初始长度


bool 药品;
bool Bypass;
bool LOGO防 =true;
bool 子弹;
//bool 防封 = true;
bool 全局离线;
//bool 半杀67 = true;
//bool 全杀67;
bool 预警;
bool 身体;
bool 开火 = true;
float FOV = 100;
float FOV1;
float FOV2;

float 速度 = 9.5f;
bool 同时;
bool 子追;
bool 广角1;
bool 基址聚点;
bool 基址除雾;
bool 基址上色;
bool 漏打自瞄;
bool 自动开火;
bool 开镜;
bool 开火开镜;
bool 枪械减后;
bool 忽略倒地;
bool 掩体分辨;
bool 忽略人机;
bool 枪械一套;
bool 头部骨骼;
bool 血量;
bool 方框;
bool 射线;
bool 骨骼;
bool 队伍ID;
bool 聚点1;
bool 无后1;
bool 除雾1;
bool 防抖1;
bool 狗子;
bool 箱子;
bool 名字;
bool 信息;
bool 隐藏人机;
bool 背敌;
bool 雷达;
bool 骨灰盒;
bool 观战人数;
bool 投掷物;
bool 载具;
float 距离 = 150.0f;
float 位置;
float 压枪 = 1.10f;
bool 美国人;
bool 手持;
bool 晕筋大厅;
bool 晕筋离线;
bool 判断对局;
bool 配件美化;
//bool 大厅 = true;




bool Fov判断 = true;

float 雷达Y = 5;
float 雷达X = 60;

bool bValid = false;


uintptr_t UE4;
uintptr_t marsxlog;
uintptr_t g_UE4;
uintptr_t anogs;
uintptr_t GCloud悬浮窗;
uintptr_t gcloud;
uintptr_t g_anogs;
uintptr_t g_TDataMaster;
uintptr_t CrashSight;
uintptr_t gcloudcore;
uintptr_t cubehawk;
uintptr_t gnustl_shared;
uintptr_t swappy;
uintptr_t INTLFoundation;
uintptr_t INTLCompliance;
uintptr_t GCloudVoice;
uintptr_t ITOP;
uintptr_t TDataMaster;
uintptr_t g_Gcloud;
uintptr_t tgpa;
uintptr_t anort;
uintptr_t libanort;
uintptr_t libgcloud;
uintptr_t libanogs;
uintptr_t PandoraVideo;
uintptr_t openplatform;
uintptr_t libTDataMaster;
uintptr_t hook_sstrlen;
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
/*
#define _DWORD uint32_t
#define _QWORD uint64_t
*/
#define IM_PI                   3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))

const void* subbase = 0;
int subxbase = 0;
int destination = 0;


#define libc "system/lib/libc.so"
#define libEGL "system/lib/libEGL.so"
ImFont* china;

/*class _BYTE;

class _BOOL4;

class _BOOL8;

class _DWORD;


class _QWORD;
*/
#define _BYTE  uint8_t
#define _WORD  uint16_t
#define _DWORD uint32_t
#define _QWORD uint64_t

bool qword_5EFAF8;

class __timezone_ptr_t;

unsigned int libanogsSize = 0x3856E5;
unsigned int libUE4Size = 0x81D3100;
//unsigned int libUE4Size = 0x94BD5B0;


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



unsigned int libcSize = 0xC3000;
unsigned int libEglSize = 0x2000;






int (*osub_2416A4)(int a1, const char *a2, int a3, int a4);
int sub_2416A4(int a1, const char *a2, int a3, int a4)
{
    if(a2 != nullptr)
    {
       return 0;
    }
 return osub_2416A4(a1,a2,a3,a4);
}    

int  (*osub_EE4C0) (int a1, unsigned int a2, int a3);
int  sub_EE4C0 (int a1, unsigned int a2, int a3)
{
    if(a2 == 0xc20) { return 0; }
    if(a2 == 0xc07) { return 0; }
    if(a2 == 0xc06) { return 0; }
    if(a2 == 0xc19) { return 0; }
    if(a2 == 0xc12) { return 0; }
    if(a2 == 0xc14) { return 0; }
    if(a2 == 0xc99) { return 0; }
    if(a2 == 0xc83) { return 0; }
    //2
    if(a2 == 0xc92) { return 0; }
    if(a2 == 0xc97) { return 0; }
    if(a2 == 0xc85) { return 0; }
    if(a2 == 0xc94) { return 0; }
    if(a2 == 0xc95) { return 0; }
    if(a2 == 0xc98) { return 0; }
    if(a2 == 0xc18) { return 0; }
    if(a2 == 0xc88) { return 0; }
    if(a2 == 0x1141) { return 0; }
    if(a2 == 0x2212) { return 0; }
    if(a2 == 0x3008) { return 0; }
 
    return osub_EE4C0(a1,a2,a3);
}

int (*osub_60A34)(int a1, unsigned char *a2, size_t a3);
int sub_60A34(int a1, unsigned char *a2, size_t a3)
{
	
/*if (a3 == 0x1a) { return 0; }
if (a3 == 0x2e) { return 0; }*/
//if (a3 == 0x3a) { return 0; }
//if (a3 == 0x52) { return 0; }
if (a3 == 0x62) { return 0; }
//if (a3 == 0x50) { return 0; }
//if (a3 == 0x3e) { return 0; }
if (a3 == 0x33) { return 0; }
//if (a3 == 0x32) { return 0; }
if (a3 == 0x4e) { return 0; }

    return osub_60A34(a1,a2,a3);

     
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

int (*osub_11EF4C)(int a1, char *a2);
int sub_11EF4C(int a1, char *a2)
{
if (
strstr(a2, "egl")) // EGL FIX
{
return 0;
}
return osub_11EF4C(a1, a2);
}


int (*osub_1062B8)(int64_t a1, const char *a2);
int __fastcall hsub_1062B8(int64_t a1, const char *a2) {
if (strstr(a2, "egl")) {return 0;} return osub_1062B8(a1, a2);
}
int (*FfixCheckBullet)(const char *a1);
int fixCheckBullet(const char *a1)
{
    while(true)
    {
        return 0;
    }
  
}

int (*osub_2A1AB4)(const char* a1, int a2, int a3);
int hsub_2A1AB4(const char* a1, int a2, int a3)
{
  return osub_2A1AB4("mode77", a2, a3);
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
		
int ret_min1()
{
  return -1;
}

int __fastcall (*osub_143480)(int a1, int a2);
int __fastcall sub_143480(int a1, int a2) {

//LOGI("sub_143480 : a1 : %x , a2 : %x",a1,a2);
return 0;

}

int __fastcall (*osub_Floshy3) (int a1, int a2, int a3);

int __fastcall sub_Floshy3 (int a1, int a2, int a3) {
  
 
 

   return 0;

}

int __fastcall (*Osub_GuestLink)(int a1);
int __fastcall sub_GuestLink(int a1) {
    if (a1) {
        const char * Search = (const char *)(*(int (__fastcall *)(int, int, _DWORD))(UE4 + "0x69EF7B8"))(a1, 1, 0);
        if (strstr(Search,OBFUSCATE("ADD THE TEXT HERE"))) {
            return false;
        }
    }
    return Osub_GuestLink(a1);
}

int __fastcall (*osub_Floshy4) (int a1, _DWORD *a2);

int __fastcall sub_Floshy4 (int a1, _DWORD *a2) {
  
 
 

   return 0;

}


int (*osub_E2172)(const char *a1, unsigned int a2);
int hsub_E2172(const char *a1, unsigned int a2) {
    pthread_exit(NULL);
}
int (*osub_ReportData)();
int hsub_ReportData()
{
	//LOGI("Read => Hook 1");
    return 0;
}

int (*osub_ReportData2)();
int hsub_ReportData2()
{
	//LOGI("Read => Hook 2");
    return 0;
}





int (*ret_Zero)();
int Hooked_Ret_Zero() {
    return 0;
}

void* hack_thread(void*)
{
	
	LOGI("ANOGS DONE");
	
while (!isLibraryLoaded("libanogs.so")) sleep(1);

    libanogsBase = findLibrary(OBFUSCATE("libanogs.so"));
    libanogsAlloc = (DWORD)malloc(libanogsSize);
    memcpy((void *)libanogsAlloc, (void *)libanogsBase, libanogsSize);
/*  HOOK_LIB("libanogs.so","0x1062B8",hsub_1062B8,osub_1062B8);   // 32 bit
HOOK_LIB("libanogs.so", "0xAA045", fixCheckBullet, FfixCheckBullet);
    //memcpy    
	HOOK_LIB_NO_ORIG("libanogs.so", "0x4E80C",hook_memcpy);//Memcpy
    HOOK_LIB_NO_ORIG("libanogs.so", "0x4E290",hook_memcpy);//__aeabi_memcpy4
	HOOK_LIB_NO_ORIG("libanogs.so", "0x4E50C",hook_memcpy);//__aeabi_memcpy8
    HOOK_LIB_NO_ORIG("libanogs.so", "0x4E29C",hook_memcpy);//__aeabi_memcpy    	
   
     //Crash fix
	  PATCH_LIB("libanogs.so", "0x4E35C","00 00 A0 E3 1E FF 2F E1"); //LOBBY CRASH FIX
	// PATCH_LIB("libanogs.so", "0xA9E9C","00 00 A0 E3 1E FF 2F E1"); //LOBBY CRASH FIX
     //HOOK_LIB_THUMB("libanogs.so", "0x9F35C", IsEnable, old_IsEnable);//case 16
     //HOOK_LIB("libanogs.so", "0x2416A5", sub_2416A4, osub_2416A4);
        
    //C35
    HOOK_LIB("libanogs.so", "0x15B9E4" ,sub_EE4C0, osub_EE4C0);//case 35 Caller
    
    //Ano SDK	
	//HOOK_LIB_THUMB("libanogs.so", "0x2C7F50", hsub_28CC60, osub_28CC60); //sdk report data Fix 1 Day strings
    
   //Memory
    PATCH_LIB("libanogs.so","0x113D1C","00 00 A0 E3 1E FF 2F E1");
    PATCH_LIB("libanogs.so","0x113D48","00 00 A0 E3 1E FF 2F E1");
    PATCH_LIB("libanogs.so","0x113D74","00 00 A0 E3 1E FF 2F E1");
    PATCH_LIB("libanogs.so","0x113E28","00 00 A0 E3 1E FF 2F E1");
    PATCH_LIB("libanogs.so","0x113F54","00 00 A0 E3 1E FF 2F E1");


return NULL;
}

int FPSHook(int a1, int a2, _BYTE *a3)
{
  if(*(_DWORD *)(a2 + 16) > 0) *(_DWORD *)(a2 + 16) += 1;
  *a3 = 0x5A; 
  return 0x5A;
}



void *__fastcall (*osub_3386348)(int a1);
void *__fastcall sub_3386348(int a1)
{
    if(*(_BYTE *)(a1 + 268))
    {
      return 0; 
    }   
    return osub_3386348(a1);
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
 
//Memcpy	
HOOK_LIB_NO_ORIG("libUE4.so", "0x81D0980", hook_memcpy);//memcpy
HOOK_LIB_NO_ORIG("libUE4.so", "0x81D0110", hook_memcpy);//aeabi_memcpy
HOOK_LIB_NO_ORIG("libUE4.so", "0x81D0700", hook_memcpy);//aeabi_memcpy-4
HOOK_LIB_NO_ORIG("libUE4.so", "0x81D0810", hook_memcpy);//aeabi_memcpy-8  


HOOK_LIB("libUE4.so", "0x3386348" ,sub_3386348, osub_3386348);*/

	return NULL;
}
struct TextureInfo {
    ImTextureID textureId;
    int x;
    int y;
    int w;
    int h;
};

ImTextureID FloatBallwd;//头像
ImTextureID FloatBallwx;//背
ImTextureID FloatBallwc;//主页
ImTextureID FloatBallwv;//绘制
ImTextureID FloatBallwb;//自瞄
ImTextureID FloatBallwt;//设置
ImTextureID FloatBallwm;//隐藏
ImTextureID FloatBallwa;//国际服
ImTextureID FloatBallws;//台湾
ImTextureID FloatBallwf;//日韩服
ImTextureID FloatBallwi;//用户
ImVec2 ImagePos = {0, 0};
ImGuiWindow *Window = nullptr;

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
    TextureInfo Logo15;
    TextureInfo Logo14;
    TextureInfo Logo13;
    TextureInfo Logo12;
    TextureInfo Logo11;
} hand;
extern TextureInfo logo;
enum qq {
qq1 = 0,
qq2 = 1,
qq3 = 2,
qq4 = 3,
qq5 = 4,
qq6 = 5,
qq7 = 6,
qq8 = 7,
qq9 = 8,
qq10 = 9,
qq11 = 10,
qq12 = 11,
qq13 = 12,
qq14 = 13
};

enum HZT {
HZ1 = 0,
HZ2 = 1,
HZ3 = 2,
HZ4 = 3,
HZ5 = 4,
HZ6 = 5,
HZ7 = 6,
HZ8 = 7,
HZ9 = 8,
HZ10 = 9,
HZ11 = 10,
HZ12 = 11,
HZ13 = 12,
HZ14 = 13
};
enum EAim {
Distance = 0,
Croshhair = 1
};
enum EAimTarget {
Head = 0,
Chest = 1
};
enum EAimTrigger {
none = 0,
Shooting = 1,
Scoping = 2,
Both = 3,
Any = 4
};
/*死人调用*/
struct sConfig {
bool Hit;
bool IpadS;
struct sAimMenu {
bool Enable;
bool RecoilControl;
bool AimBot;
float RecoilControlBar;
float Cross;
bool FOV;
bool Fov;
bool IgnoreKnocked;
bool IgnoreBot;
bool VisCheck;
bool IgnoreBots;
bool AutoFire;
bool 子追2;
bool A1;
bool Enable1;
bool Enable360;
bool LongJump;
bool Fovb;
bool FovbJ;
float FovEdit;
bool RecoilComparison;
float Recc;
bool Prediction;
float Line;
bool IgnoreKnocked1;
bool IgnoreBot1;
bool VisCheck1;
bool IgnoreBots1;
bool 圈圈;
EAimTarget Target;
EAimTrigger Trigger;
};
sAimMenu BulletTracking{0};
sAimMenu AimBot{0};
sAimMenu Bullet360{0};
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
        struct sHighRisk {
        bool Swim;
        bool Switch;
        bool Scope;
        bool FastMove;
        bool SuperAim;
        bool Unlock = true;
        bool NoFog;
        bool Shoot;
        bool Fly;
        bool Reload;
        bool HitRGB;
        bool Ipad;
        bool Ipad2;
        bool 上帝;
        bool 黑化90帧;
        bool 全图除雾;
        bool Prone;
        bool Ljump;
        bool Blockspect;
        bool Cross;
        bool 尼玛;
        bool Shake;
        bool Recoil;
        bool Instant;
		bool HitEffect;};
    sHighRisk HighRisk{0};
    
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

extern TextureInfo logo15;
TextureInfo Logo15;

extern TextureInfo logo14;
TextureInfo Logo14;

extern TextureInfo logo13;
TextureInfo Logo13;

extern TextureInfo logo12;
TextureInfo Logo12;

extern TextureInfo logo11;
TextureInfo Logo11;



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

std::string 获取动作s(int 动作id)
{
    std::string  动作名字 = "未知";
    if (动作id == 0)
    {
        动作名字 = "静止";
    }
    if (动作id == 1)
    {
        动作名字 = "移动";
    }
    if (动作id == 8)
    {
        动作名字 = "站立";
    }
    if (动作id == 9)
    {
        动作名字 = "行走";
    }
    if (动作id == 11 || 动作id == 10)
    {
        动作名字 = "奔跑";
    }
    if (动作id == 16)
    {
        动作名字 = "蹲下";
    }
    if (动作id >= 17 && 动作id <= 19)
    {
        动作名字 = "蹲走";
    }
    if (动作id >= 33 && 动作id <= 35)
    {
        动作名字 = "爬动";
    }
    if (动作id == 32)
    {
        动作名字 = "趴下";
    }
    if (动作id >= 60 && 动作id <= 100)
    {
        动作名字 = "跳跃";
    }
    if (动作id >= 260 && 动作id <= 290)
    {
        动作名字 = "换弹";
    }
    if (动作id >= 120 && 动作id <= 170 || 动作id >= 630 && 动作id <= 680)
    {
        动作名字 = "射击";
    }
    if (动作id >= 500 && 动作id <= 550 || 动作id >= 1500 && 动作id <= 1550)
    {
        动作名字 = "瞄人";
    }
    if (动作id >= 1150 && 动作id <= 1170 || 动作id >= 1670 && 动作id <= 1700)
    {
        动作名字 = "射击";
    }
    if (动作id >= 1020 && 动作id <= 1060 || 动作id >= 1530 && 动作id <= 1560)
    {
        动作名字 = "探头";
    }
    if (动作id >= 2040 && 动作id <= 2090 || 动作id >= 3080 && 动作id <= 3090)
    {
        动作名字 = "切枪";
    }
    if (动作id >= 8200 && 动作id <= 8270)
    {
        动作名字 = "挥拳";
    }
    if (动作id == 131072)
    {
        动作名字 = "倒地";
    }
    if (动作id == 131073)
    {
        动作名字 = "倒地";
    }
    if (动作id == 262144)
    {
        动作名字 = "死亡";
    }
    if (动作id == 524296)
    {
        动作名字 = "射击";
    }
    if (动作id >= 65540 && 动作id <= 65580)
    {
        动作名字 = "打药";
    }
    if (动作id >= 16390 && 动作id <= 16420 || 动作id >= 17410 && 动作id <= 17430)
    {
        动作名字 = "投掷";
    }
    if (动作id >= 3140000 && 动作id <= 3170000)
    {
        动作名字 = "探头";
    }
    if (动作id >= 3146240 && 动作id <= 3146250)
    {
        动作名字 = "瞄人";
    }
    if (动作id >= 4194300 && 动作id <= 4194310)
    {
        动作名字 = "游泳";
    }
    if (动作id == 524288)
    {
        动作名字 = "开船";
    }
    if (动作id == 524296)
    {
        动作名字 = "开车";
    }
    if (动作id == 1048584)
    {
        动作名字 = "坐车";
    }
    if (动作id == 1050632)
    {
        动作名字 = "收枪";
    }
    if (动作id == 1048576 || 动作id == 1050624)
    {
        动作名字 = "坐船";
    }
    if (动作id >= 16000000 && 动作id <= 17000000)
    {
        动作名字 = "攀爬";
    }
    if (动作id == 268435464)
    {
        动作名字 = "鼓掌";
    }
    if (动作id >= -2147483640 && 动作id <= -2000000000)
    {
        动作名字 = "拍打";
    }
    return 动作名字;
}//优米电报@YMGF6666



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
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_real_distribution<> dis(0, 1);

// 自定义击中概率函数
bool shouldHit(float hitProbability) {
return dis(gen) <= hitProbability;
}

#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)
bool Fov(int x, int y) {
if (!自动瞄准)
if (!函数追踪)
        return true;
    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int rad =FOV;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
/*auto NIKE_Aimbot_Thread() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

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

                float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
                if (dist > 距离)
                    continue;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;
/*                    
 if (动态) { //这里就是加的动态自瞄FOV代码
if (g_LocalPlayer->bIsWeaponFiring) { 
Fov -= 10.0f;
if (Fov < 50.0f){
Fov = 50.0f;}
}else{
Fov += 5.0f;  
if (Fov > 200.0f){
Fov = 200.0f; }}}
              */  
                


             /*   if (忽略倒地) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (掩体分辨) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }

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
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

if (Fov((int) middlePoint.X, (int) middlePoint.Y)) {

                        float dist = FVector2D::Distance(v2Middle, v2Loc);

                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
                
                
                
                /*
bool isInsideFoV(int x, int y) {
    if (!Config.AimBot.FOv)
        return true;

    int circle_x = screenWidth / 3.0f;
    int circle_y = screenHeight / 3.0f;
    int rad = Config.AimBot.Cross;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
                
  */              
                
                
auto NIKE_Aimbot_Thread() {
        ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();
		auto GWorld = GetWorld();
		if (GWorld)	{
        auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;
        auto Actors = getActors();   
    if (localPlayer) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;
            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
auto Player = (ASTExtraPlayerCharacter *) Actors[i];
                    if (Player->PlayerKey == localPlayer->PlayerKey)
                        continue;

                    if (Player->TeamID == localPlayer->TeamID)
                        continue;

                    if (Player->bDead)
                        continue;

                    
                   
			if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;


               if (忽略倒地) {
                    if (Player->Health == 0.0f)
                        continue;
                }
                
                
                
  if (忽略人机) {
 if (Player->bEnsure)
                        continue;
                }


if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("Head", {0, 0, 0}), false))//头
if(!localController->LineOfSightTo(localController->/*落*/PlayerCameraManager,Player->GetBonePos("neck_01", {0, 0, 0}), false))//脖子
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("upperarm_r", {0, 0, 0}), false))//上面的肩膀右
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("upperarm_l", {0, 0, 0}), false))//上面的肩膀左
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("lowerarm_r", {0, 0, 0}), false))//上面的手臂右
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("lowerarm_l", {0, 0, 0}), false))//上面的手臂左
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_03", {0, 0, 0}), false))//脊柱3
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_02", {0, 0, 0}), false))//脊柱2
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_01", {0, 0, 0}), false))//脊柱2
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("Pelvis", {0, 0, 0}), false))//骨盆
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("thigh_l", {0, 0, 0}), false))//大腿左
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("thigh_r", {0, 0, 0}), false))//大腿右
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("calf_l", {0, 0, 0}), false))//小腿左
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("calf_r", {0, 0, 0}), false))//小腿右
continue;



auto HeadPos = Player->GetBonePos("Head", {0, 0, 0});
auto RootPos = Player->GetBonePos("Root", {0, 0, 0});
FVector2D RootPosSC, HeadPosSC;
if (W2S(HeadPos,&HeadPosSC)&&W2S(RootPos,&RootPosSC)) {
float height = abs(HeadPosSC.Y - RootPosSC.Y);
float width = height;
FVector middlePoint = {HeadPosSC.X + (width / 2), HeadPosSC.Y + (height / 2), 0};
if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) &&
(middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
FVector2D v2Middle = FVector2D((float) (glWidth / 2),(float) (glHeight / 2));
FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
if (Fov((int) middlePoint.X, (int) middlePoint.Y)) {
float dist = localPlayer->GetDistanceTo(Player) / 100.0f;                
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
}
return result;
}

auto NIKE_Track_Thread() {
        ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();
		auto GWorld = GetWorld();
		if (GWorld)	{
        auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;
        auto Actors = getActors();   
    if (localPlayer) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;
            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
auto Player = (ASTExtraPlayerCharacter *) Actors[i];
auto Target = (ASTExtraPlayerCharacter *) Actor;
       float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
          if (dist > 追踪距离)//追踪距离
             continue;
                    if (Player->PlayerKey == localPlayer->PlayerKey)
                        continue;

                    if (Player->TeamID == localPlayer->TeamID)
                        continue;

                    if (Player->bDead)
                        continue;

                    
                   
			if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;


               if (忽略倒地) {
                    if (Player->Health == 0.0f)
                        continue;
                }
                
               
             
                
  if (忽略人机) {
 if (Player->bEnsure)
                        continue;
                }
                
                //掩体判断
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("Head", {0, 0, 0}), false))//头
if(!localController->LineOfSightTo(localController->/*落*/PlayerCameraManager,Player->GetBonePos("neck_01", {0, 0, 0}), false))//脖子
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("upperarm_r", {0, 0, 0}), false))//上面的肩膀右
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("upperarm_l", {0, 0, 0}), false))//上面的肩膀左
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("lowerarm_r", {0, 0, 0}), false))//上面的手臂右
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("lowerarm_l", {0, 0, 0}), false))//上面的手臂左
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_03", {0, 0, 0}), false))//脊柱3
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_02", {0, 0, 0}), false))//脊柱2
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_01", {0, 0, 0}), false))//脊柱2
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("pelvis", {0, 0, 0}), false))//骨盆
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("thigh_l", {0, 0, 0}), false))//大腿左
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("thigh_r", {0, 0, 0}), false))//大腿右
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("calf_l", {0, 0, 0}), false))//小腿左
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("calf_r", {0, 0, 0}), false))//小腿右
continue;

static bool 已选择 = false;
算法 = 0;
已选择 = false;
if(!localController->LineOfSightTo(localController->PlayerCameraManager, Player->GetBonePos("Head", {0, 0, 0}),  false)) {//头
is头 = false;
}else{
is头 = true;
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager, Player->GetBonePos("pelvis", {0, 0, 0}),  false))
{//骨盆
is盆骨 = false;
}else{
is盆骨 = true;
}


if(!localController->LineOfSightTo(localController->PlayerCameraManager, Player->GetBonePos("neck_01", {0, 0, 0}),  false))
{//脖子
is脖子 = false;
}else{
is脖子 = true;
}


if(!localController->LineOfSightTo(localController->PlayerCameraManager, Player->GetBonePos("hand_l", {0, 0, 0}),  false))
{//左手
is左手 = false;
}else{
is左手 = true;
}


if(!localController->LineOfSightTo(localController->PlayerCameraManager, Player->GetBonePos("hand_r", {0, 0, 0}),  false))
{//右手
is右手 = false;
}else{
is右手 = true;
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager, Player->GetBonePos("foot_l", {0, 0, 0}),  false))
{//左脚
is左脚 = false;
}else{
is左脚 = true;
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager, Player->GetBonePos("foot_r", {0, 0, 0}),  false))
{//右脚
is右脚 = false;
}else{
is右脚 = true;
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager, Player->GetBonePos("calf_l", {0, 0, 0}),  false))
{//左小腿
is左小腿 = false;
}else{
is左小腿 = true;
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager, Player->GetBonePos("calf_r", {0, 0, 0}),  false))
{//右小腿
is右小腿 = false;
}else{
is右小腿 = true;
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager, Player->GetBonePos("lowerarm_l", {0, 0, 0}),  false))
{//左小臂
is左小臂 = false;
}else{
is左小臂 = true;
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager, Player->GetBonePos("lowerarm_r", {0, 0, 0}),  false))
{//右小臂
is右小臂 = false;
}else{
is右小臂 = true;
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager, Player->GetBonePos("thigh_l", {0, 0, 0}),  false))
{//左上臂
is左大腿 = false;
}else{
is左大腿 = true;
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager, Player->GetBonePos("thigh_r", {0, 0, 0}),  false))
{//左上臂
is右大腿 = false;
}else{
is右大腿 = true;
}
if (!已选择)
if(is头) {
算法 = 1;
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is盆骨)
{
算法 = 2;
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is左小腿)
{
算法 = 3;
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is右小腿)
{
算法 = 4;   
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is左小臂)
{
算法 = 5;
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is右小臂)
{
算法 = 6;
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is左上臂)
{
算法 = 7;
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is右上臂)
{
算法 = 8;
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is左大腿)
{
算法 = 9;
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is右大腿)
{
算法 = 10;
已选择 = true;
}else{//Config
已选择 = false;
}
if (!已选择)
if(is左脚)
{
算法 = 11;
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is右脚)
{
算法 = 12;
已选择 = true;
}else{
已选择 = false;
}

			
			
                auto Root = Player->GetBonePos("Root", {0, 0, 0});
                auto Head = Player->GetBonePos("Head", {0, 0, 0});

                FVector2D RootSc, HeadSc;
                if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
float width = height * 0.65;//0.65f//1.0//0.9

                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
if(Fov((int)middlePoint.X,(int)middlePoint.Y)) {
                        float dist = localPlayer->GetDistanceTo(Player) / 100.0f;
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
    }

    return result;
}

   bool isInsideFOV4s(int x, int y) {
if (!子追)
return true;
int circle_x = glWidth / 2;
int circle_y = glHeight / 2;
int rad = 追踪;
return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
auto GetTargetByRuiRui() {
ASTExtraPlayerCharacter *result = 0;
float max = std::numeric_limits<float>::infinity();
auto GWorld = GetWorld();
if (GWorld) {
ULevel *PersistentLevel = GWorld->PersistentLevel;
if (PersistentLevel) {
TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
Actors_Offset);
auto localPlayer = g_LocalPlayer;
auto localController = g_LocalController;
if (localPlayer) {
for (int i = 0; i < Actors.Num(); i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;
if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
auto Player = (ASTExtraPlayerCharacter *) Actor;
if (Player->PlayerKey == localPlayer->PlayerKey)
continue;
if (Player->TeamID == localPlayer->TeamID)
continue;
if (Player->bDead)
continue;
if (忽略倒地 && Player->Health == 0.0f) continue;
if (掩体判断 && !localController->LineOfSightTo(Player, {0, 0, 0}, true)) continue;
if (忽略人机 && Player->bEnsure) continue;
if (Config.BulletTracking.VisCheck) {
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
continue;
}
FVector Head = Player->GetBonePos("Head", {0, 0, 0});
FVector Root = Player->GetBonePos("Root", {});
FVector Spin = Player->GetBonePos("pelvis", {});
FVector Spin2 = Player->GetBonePos("spine_03", {});
FVector upper_r = Player->GetBonePos("upperarm_r", {});
FVector lowerarm_r = Player->GetBonePos("lowerarm_r", {});
FVector hand_r = Player->GetBonePos("hand_r", {});
FVector upper_l = Player->GetBonePos("upperarm_l", {});
FVector lowerarm_l = Player->GetBonePos("lowerarm_l", {});
FVector hand_l = Player->GetBonePos("hand_l", {});
FVector thigh_l = Player->GetBonePos("thigh_l", {});
FVector calf_l = Player->GetBonePos("calf_l", {});
FVector foot_l = Player->GetBonePos("foot_l", {});
FVector thigh_r = Player->GetBonePos("thigh_r", {});
FVector calf_r = Player->GetBonePos("calf_r", {});
FVector foot_r = Player->GetBonePos("foot_r", {});
FVector neck_01 = Player->GetBonePos("neck_01", {});
FVector spine_01 = Player->GetBonePos("spine_01", {});
FVector spine_02 = Player->GetBonePos("spine_02", {});
FVector spine_03 = Player->GetBonePos("spine_03", {});
FVector pelvis = Player->GetBonePos("pelvis", {});
FVector2D RootSc, HeadSc;
if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
float height = abs(HeadSc.Y - RootSc.Y);
float width = height * 0.65f;
FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
if(isInsideFOV4s((int)middlePoint.X, (int)middlePoint.Y)) {
float dist = FVector2D::Distance(v2Middle, v2Loc);
if (dist < max) {
max = dist;
result = Player;
}
if (dist < max) {
max = dist;
if (isInsideFOV4s((int) middlePoint.X, (int) middlePoint.Y)) {
追踪 = dist;
}}
if (dist <= 追踪)
result = Player;
}}}}}}}}
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
    if (函数1) {
 ASTExtraPlayerCharacter *Target = NIKE_Track_Thread();
        if (Target) {
FVector targetAimPos;
            bool triggerOk = false;
                if (开火) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring;
                } else if (开镜) {
                    triggerOk = g_LocalPlayer->bIsGunADS;
                } else if (开火开镜) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;                
            } else triggerOk = true;
if (triggerOk) {
if(算法 == 0) {
targetAimPos=Target->GetBonePos("Head", {});
} else if(算法 == 1) {
targetAimPos = Target->GetBonePos("Head", {});
}else if(算法 == 2){
targetAimPos = Target->GetBonePos("pelvis", {});//锁骨
}else if(算法 == 3){
targetAimPos = Target->GetBonePos("calf_l", {});//左小腿
}else if(算法 == 4){
targetAimPos = Target->GetBonePos("calf_r", {});//右小腿
}else if(算法 == 5){
targetAimPos = Target->GetBonePos("lowerarm_l", {});//左小臂
}else if(算法 == 6){
targetAimPos = Target->GetBonePos("lowerarm_r", {});//右小臂
}else if(算法 == 7){
targetAimPos = Target->GetBonePos("upperarm_l", {});//左上臂
}else if(算法 == 8){
targetAimPos = Target->GetBonePos("upperarm_r", {});//右上臂
}else if(算法 == 9) {
targetAimPos = Target->GetBonePos("thigh_l", {});//左大腿
}else if(算法 == 10) {
targetAimPos = Target->GetBonePos("thigh_r", {});//右大腿
}else if(算法 == 11) {
targetAimPos = Target->GetBonePos("foot_l", {});//左脚
}else if(算法 == 12){
targetAimPos = Target->GetBonePos("foot_r", {});//右脚
}
if (身体) {
targetAimPos.Z -= 25.0f;
}
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
FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, start);
FRotator sex = UKismetMathLibrary::Conv_VectorToRotator(fDir);
rot = sex;
                }
            }
        }
     }    
    
    if (函数2) {
        ASTExtraPlayerCharacter *Target = NIKE_Track_Thread();
        if (Target) {
FVector targetAimPos;
            bool triggerOk = false;
                if (开火) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring;
                } else if (开镜) {
                    triggerOk = g_LocalPlayer->bIsGunADS;
                } else if (开火开镜) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;                
            } else triggerOk = true;
if (triggerOk) {
if(算法 == 0) {
targetAimPos=Target->GetBonePos("Head", {});
} else if(算法 == 1) {
targetAimPos = Target->GetBonePos("Head", {});
}else if(算法 == 2){
targetAimPos = Target->GetBonePos("pelvis", {});//锁骨
}else if(算法 == 3){
targetAimPos = Target->GetBonePos("calf_l", {});//左小腿
}else if(算法 == 4){
targetAimPos = Target->GetBonePos("calf_r", {});//右小腿
}else if(算法 == 5){
targetAimPos = Target->GetBonePos("lowerarm_l", {});//左小臂
}else if(算法 == 6){
targetAimPos = Target->GetBonePos("lowerarm_r", {});//右小臂
}else if(算法 == 7){
targetAimPos = Target->GetBonePos("upperarm_l", {});//左上臂
}else if(算法 == 8){
targetAimPos = Target->GetBonePos("upperarm_r", {});//右上臂
}else if(算法 == 9) {
targetAimPos = Target->GetBonePos("thigh_l", {});//左大腿
}else if(算法 == 10) {
targetAimPos = Target->GetBonePos("thigh_r", {});//右大腿
}else if(算法 == 11) {
targetAimPos = Target->GetBonePos("foot_l", {});//左脚
}else if(算法 == 12){
targetAimPos = Target->GetBonePos("foot_r", {});//右脚
}
if (身体) {
targetAimPos.Z -= 25.0f;
}
FRotator sex = ToRotator(start, targetAimPos);
targetAimPos.Z -= g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager, targetAimPos, true);
return orig_shoot_event(thiz, targetAimPos, sex, weapon, unk1);
}}}
return orig_shoot_event(thiz, start, rot, weapon, unk1);
}


void InitTexture() {
    Logo = CreateTexture(Logo_data, sizeof(Logo_data));
    Logo15 = CreateTexture(Logo15_data, sizeof(Logo15_data));
    Logo14 = CreateTexture(Logo14_data, sizeof(Logo14_data));
    Logo13 = CreateTexture(Logo13_data, sizeof(Logo13_data));
    Logo12 = CreateTexture(Logo12_data, sizeof(Logo12_data));
    Logo11 = CreateTexture(Logo11_data, sizeof(Logo11_data));
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
    
	FloatBallwc = ImAgeHeadFile(主页, sizeof(主页));
	FloatBallwv = ImAgeHeadFile(透视, sizeof(透视));
	FloatBallwb = ImAgeHeadFile(自瞄, sizeof(自瞄));
	FloatBallwt = ImAgeHeadFile(设置, sizeof(设置));
	FloatBallwm = ImAgeHeadFile(隐藏, sizeof(隐藏));
	FloatBallwa = ImAgeHeadFile(国际服, sizeof(国际服));
	FloatBallws = ImAgeHeadFile(台湾, sizeof(台湾));
	FloatBallwf = ImAgeHeadFile(韩服, sizeof(韩服));
	FloatBallwi = ImAgeHeadFile(用户, sizeof(用户));
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
//半杀67
if (晕筋离线){
MemoryPatch::createWithHex(OBFUSCATE("libgcloud.so"), 0x423620, OBFUSCATE("FF FF FF FF")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libgcloud.so"), 0x496680, OBFUSCATE("FF FF FF FF")).Modify();
}else{
MemoryPatch::createWithHex(OBFUSCATE("libgcloud.so"), 0x423620, OBFUSCATE("34 9D 53 2E")).Modify();
MemoryPatch::createWithHex(OBFUSCATE("libgcloud.so"), 0x496680, OBFUSCATE("34 9D 53 2E")).Modify();
//写入D类(gcloud + 0x423620, 777231668);
//绘制字体描边(25.0f, glWidth / 2 - 500, glHeight / 2 - 270, ImVec4(255, 255, 0, 255), "禁止倒卖|记得反馈");
//[2].地址:9AD03D90    数值:-1619335891
//写入D类(gcloud + 0x334D90, -1619335891);
}





if (LOGO防) {
PATCH_LIB("libGCloudVoice.so","0x39B518","h 01 00 00 00");//[1] | 
PATCH_LIB("libgcloudcore.so","0x152D0","h 01 00 00 00");//[2] | 
PATCH_LIB("libanogs.so","0xDF6D0","00 00 80 D2 C0 03 5F D6");//防闪
PATCH_LIB("libanogs.so","0x3BB5FC","00 00 80 D2 C0 03 5F D6");//防闪
PATCH_LIB("libanogs.so","0x26AF70","00 00 80 D2 C0 03 5F D6");//防闪
PATCH_LIB("libanogs.so","0x3DE7FC","00 00 80 D2 C0 03 5F D6");//防闪
PATCH_LIB("libUE4.so","0x137274C","h 00 40 00 00 00 00 00 00");//[1] @DKMRFZ @FKNB2 极品防
PATCH_LIB("libUE4.so","0x35518B4","h 00 40 00 00 00 00 00 00");//[1] @DKMRFZ @FKNB2 极品防
PATCH_LIB("libUE4.so","0x136130C","h 00 40 00 00 00 00 00 00");//[2] @DKMRFZ @FKNB2 极品防
PATCH_LIB("libUE4.so","0x3562CF4","h 00 40 00 00 00 00 00 00");//[2] @DKMRFZ @FKNB2 极品防

//方块
PATCH_LIB("libUE4.so","0x9bbb4b4b","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xa132d7cf","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x68fa43b1","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x1963000c","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xf42fd1a8","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xd815ee98","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xed50e4d5","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xf10cc518","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xfd011520","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xa22b6641","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x39279d14","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xd63059f3","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xe6a8d605","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xe75bae3a","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xc0ea98a6","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xfb5f020a","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xe0e4e038","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xe6dcae3d","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xa34225e5","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x3f13b81c","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xb16a4b1c","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xda3779df","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xe58c54b4","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xf0c731e1","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x9d6b14b7","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x9a68b062","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xdee05fc1","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x3681fa8b","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xa9f7cee0","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x41fb0000","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xfa19bb82","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xc90b87db","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x8f5ccb9c","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xec9b6d84","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x454ce3ea","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x62b984ea","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x1a2cd5f3","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x2aca3680","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x69e4f725","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x86f96c4f","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x97e77767","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xf6efbd4d","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x4f63e366","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x7c0a31ee","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x98e980fd","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x541be1b5","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x47b55ba2","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x914ac4f8","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x6307535c","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x054da096","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xc0b1f458","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xed2a2a10","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x69129ebd","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xf14e5c55","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x66da4e9e","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x8c6fd9ce","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x203413d7","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x73fed491","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x80577306","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x0575971a","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x427d5a67","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xfd84eb21","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xcf0f4542","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x1f813744","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x62d580a8","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xf0d8f96f","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x515b513e","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x8a2b254f","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xf87dc013","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xe7351e2b","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x57a46835","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x34d91c48","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xc5ae3339","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x7fdf27da","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x4d0d4811","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x46e5ace1","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xfe0aaf64","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x5e778601","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xdd6f1e3e","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xd1b05320","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x14e63511","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xd0c95d9d","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x56ff4023","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x5eada010","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0x3577a3f6","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libUE4.so","0xa6d56fb7","h 00 00 00 00 00 00");//方块防本地检测 @FKNB2 config bypass
PATCH_LIB("libijkffmpeg.so","0xC070","h 80 42 00 00");//[1] | 
PATCH_LIB("libUE4.so","0x3460790","h 80 42 00 00");//[2] | 
PATCH_LIB("libUE4.so","0x3A5B814","h 80 42 00 00");//[3] | 
PATCH_LIB("libUE4.so","0x451A644","h 80 42 00 00");//[4] | 
PATCH_LIB("libgcloud.so","0x4CA3C8","h 80 42 00 00");//[5] | 
PATCH_LIB("base.vdex","0x732744","h 00 02 00 00");//[6] | 
PATCH_LIB("libyuri.so","0xC568","h 00 02 00 00");//[7] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x3BC1A4","h 00 04 03 00");//[1] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x483184","h 00 04 03 00");//[2] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x4831FC","h 00 04 03 00");//[3] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x16FCEE8","h 00 04 03 00");//[4] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x16FCF60","h 00 04 03 00");//[5] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x16FE558","h 00 04 03 00");//[6] | 
PATCH_LIB("[anon:dalvik-free list large object space]","0x392458","h 00 04 03 00");//[7] | 
写入D类(anogs+0x1A08,67109633);
写入D类(anogs+0x388,67109633);
写入D类(anogs+0x3B8,67109633);
写入D类(anogs+0x19E0,67109633);
写入D类(anogs+0x464,67109633);
写入D类(anogs+0xC524,67109633);
写入D类(anogs+0x3EB5C,67109633);
写入D类(UE4+0x48A8258,256);
写入D类(UE4+0x48A8290,256);
写入D类(UE4+0x48A82D8,256);
写入D类(UE4+0x48A82F8,256);
写入D类(UE4+0x48A8328,256);
写入D类(UE4+0x48A8350,256);
写入D类(UE4+0x48A8370,256);
写入D类(UE4+0x48A8400,256);
写入D类(UE4+0x48A8438,256);
写入D类(UE4+0x48A8470,256);
写入D类(UE4+0x48A8498,256);
写入D类(UE4+0x48A8508,256);
写入D类(UE4+0x48A8538,256);
写入D类(UE4+0x48A8550,256);
写入D类(UE4+0x48A8AA0,256);
写入D类(anogs+0xA288,17500);
写入D类(anogs+0xB23C,17500);
写入D类(anogs+0x510,17500);
写入D类(anogs+0x1400,17500);
写入D类(anogs+0xE8860,-1440807959);
写入D类(anogs+0x1348A8,1242104170);
写入D类(anogs+0x3DA560,335544345);
写入D类(anogs+0x3F9A60,335544345);
写入D类(anogs+0x3FC628,335544345);
写入D类(anogs+0x3FC634,335544345);
写入D类(anogs+0x423DA8,335544345);
写入D类(anogs+0x423DB0,335544345);
写入D类(anogs+0x167504,-698416192);
写入D类(anogs + 0x7B5F777028, -721215457);
写入D类(anogs + 0x7B62A38A60, 1923723406);
写入D类(anogs + 0x7B5F7FDA50, -721215457);
写入D类(anogs + 0x7B5F777028, -721215457);
} 


if (Bypass) {
MemoryPatch::createWithHex("libanogs.so",0x10BE0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x10D18,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x11248,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x113C0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x11D7C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x11DFC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x33EA4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x492CC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x4950C,"00 00 80 D2 C0 03 5F D6").Modify();

 
 
 
 
 //小羊制作
MemoryPatch::createWithHex("libUE4.so",0x1CAA164,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CB0084,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CB008C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CB00B0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CB00B8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CB00DC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CB00E4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CB0108,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CB0110,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CB01BC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CB01C4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CC2A08,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CC3184,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CC31E8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1CD663C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1D00DFC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1D2C6F4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1D5F294,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1D62808,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1D7E13C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1D83C80,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1DD6840,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1DD6878,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1DD6DE8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1DDA2A4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1DDA310,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1DDED6C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1DE0ED8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E17A80,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E1E7F8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E2A580,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E41410,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E5F1C4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E6AB78,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E6D208,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E71088,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E71C28,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E72964,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E736A4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E73E78,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E75C2C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E7CAE0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E9FFA8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1E9FFE4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1EA002C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1EA0144,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1ECB900,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1F13E14,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1F13EC8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1F13FA8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1F6EAAC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1F6EB68,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1F6EBD8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1F6EBFC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1FDE1E0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x202F680,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x204FA04,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2051380,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x20513CC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x205147C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2063514,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2063638,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x20636B4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x206F410,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x206F5C8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x20745A8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2074618,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2091DA8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2092AB0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2092B34,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x209F45C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x20B8870,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x20B88FC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x20B8BA0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x20CFA48,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x20CFB94,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x20D3C20,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x20EB574,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x20EEF84,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x20F0CB8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x210C8E0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2113098,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2113100,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2113168,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2114ED8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2119A48,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2170F8C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2171014,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2171208,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2183A60,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2183A90,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2183B50,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2183B80,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x218AC6C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x218ACDC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x218AF18,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2191418,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2191514,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21915D4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2191838,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x219D044,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x219D0E4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x219EBE0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x219F3D8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x219F464,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x219F4BC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x219F608,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x219F634,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21A3840,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21A38AC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21A60B4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21A60DC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21A6104,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21A612C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21AC8B8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21B9098,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21B999C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21B9FCC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21C2440,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21C2FB4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21E2EA0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21E6A1C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21F0948,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21F09B4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x221BA90,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x221BBE4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x22304E4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2230550,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x22317FC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x223238C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x22387F4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2268DD4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x227898C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x227962C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x227D0BC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x228F43C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x228F8FC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2291680,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x22A533C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x3084CF0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x3084D30,"00 00 80 D2 C0 03 5F D6").Modify();
 
MemoryPatch::createWithHex("libUE4.so",0x223B1D4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x223B21C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2C4C68C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x2C4C6D4,"00 00 80 D2 C0 03 5F D6").Modify();
 
MemoryPatch::createWithHex("libanogs.so",0x10BE0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x10D18,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x11248,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x113C0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x11D7C,"00 00 80 D2 C0 03 5F D6").Modify();
 

 //小扬自抓以上
 
 //小羊抓二次
 
 
MemoryPatch::createWithHex("libUE4.so",0x3A24,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x3BA8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4988,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x49A4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x49C8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x49E4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4A08,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4A24,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4A48,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4A88,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4AA4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4B6C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4B88,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x47BC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x47E8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x489C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4918,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4994,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x33100,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x331B0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4EB88,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4ECD8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4ED70,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4EE1C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x215C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x21BC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x221C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x151C,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x1574,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0xD3E4,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0xD680,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x73520,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x735F8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x330,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x370,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x3B0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x3F0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x430,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x470,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4B0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x4F0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x530,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x5908,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libUE4.so",0x59C4,"00 00 80 D2 C0 03 5F D6").Modify();

//二次结束
 
 
 
MemoryPatch::createWithHex("libTDataMaster.so",0x87348,"00 02 00 01").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87300,"00 02 00 00").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x872C8,"00 02 00 00").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87290,"00 02 00 00").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x871B0,"80 00 00 00").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87198,"80 00 02 00").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87190,"80 00 82 00").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87188,"80 00 02 20").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87180,"80 00 00 20").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87160,"80 00 80 00").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87148,"80 00 00 20").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87118,"80 00 80 20").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x870F8,"80 00 00 00").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x870E0,"80 00 00 20").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x870B0,"80 00 80 20").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87098,"80 00 80 00").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87088,"80 00 00 00").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87080,"80 00 80 00").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87058,"80 00 00 20").Modify();
MemoryPatch::createWithHex("libTDataMaster.so",0x87030,"80 00 00 00").Modify();
//
PATCH_LIB("libanogs.so","0x3BE6C8","h A8 02 40 39");//[1] | 
PATCH_LIB("libanogs.so","0x3BEB14","h 68 02 40 39");//[2] | 
PATCH_LIB("libanogs.so","0x3BF9E0","h 08 00 40 39");//[3] | 
PATCH_LIB("libanogs.so","0x3BFC14","h 08 00 40 39");//[4] | 
PATCH_LIB("libanogs.so","0x3BFC40","h 09 00 40 39 28 00 40 39");//[5] | 
PATCH_LIB("libanogs.so","0x3BFC44","h 28 00 40 39");//[6] | 
PATCH_LIB("libanogs.so","0x3BFC8C","h 28 00 40 39");//[7] | 
PATCH_LIB("libanogs.so","0x3BFC90","h 08 00 00 39");//[8] | 
PATCH_LIB("libanogs.so","0x3BFCB8","h 29 05 40 39");//[9] | 
PATCH_LIB("libanogs.so","0x3BFCFC","h 28 00 40 39");//[10] | 
PATCH_LIB("libanogs.so","0x3BFD00","h 08 00 00 39");//[11] | 
PATCH_LIB("libanogs.so","0x3BFE68","h 2C 00 40 39");//[12] | 

MemoryPatch::createWithHex("libanogs.so",0x10B84,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x10BE0,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x10F84,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x10FBC,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x10FE8,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x11028,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x11080,"00 00 80 D2 C0 03 5F D6").Modify();
MemoryPatch::createWithHex("libanogs.so",0x11B1C,"00 00 80 D2 C0 03 5F D6").Modify();

PATCH_LIB("libgcloud.so", "0x363224", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0xF51B0", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0xF52D8", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x101DF4", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x101F1C", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x13B5C0", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x13B6E8", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x16684C", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x16F5D4", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x174828", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x17482C", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x1B4550", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x1BC1AC", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x3DE104", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x3DE110", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x3DE5A0", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x3DE5BC", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x3DE6AC", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x3DEEF0", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x3DF018", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x3DF354", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x3DF358", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x3DF454", "00 00 00 00 70 00 00 00");
PATCH_LIB("libanogs.so", "0x3DFCD4", "00 00 00 00 70 00 00 00");






//橘右抓防

//


    

PATCH_LIB("libanogs.so", "0x3dcfe4", "00 00 80 D2 C0 03 5F D6");
//1 天修复禁令


//方块自抓
//纯正ida抓防，不是在ida里找的我死全家





//方块结束







//挽



}

if (检测局内) {
       
      
      std::this_thread::sleep_for(std::chrono::seconds(10));
      自动瞄准 = true;

}



if (晕筋大厅) {

}

if(聚点1){
Write<float>(UE4+0X5608300,8.47963525E-21);
} 
 if (除雾1) {                
                
Write<float>(UE4+0X7D1DFC0,8.95671814e-21);
                }
if(防抖1) {
Write<float>(UE4+0x58DCEB8,2.19933704e12);
Write<float>(UE4+0x8B9E88C,8.8411673e-21);
}
if(无后1){
Write<float>(UE4+0x560CE08,8.8411673e-21);
Write<float>(UE4+0x560CE78,8.8411673e-21);
}
if(下雪){
g_LocalPlayer->STPlayerController->SetIsSnowy(true);
}                       
                        

if(下雨){
g_LocalPlayer->STPlayerController->SetIsRainy(true);
}


if (广角1) {
Write<float>(readValueL(readValueL(readValueL(readValueL(UE4+0X2bd8898)+0x0)+0x2F0)+0x180)+0x33C,120);
}

if (基址上色) {
Write<float>(UE4+0X8FFC77C,8.47963525e-21);
//Write<float>(UE4+0X7D1DFC0,706675684);
//Write<float>(UE4+0X7D1DFC0,706675684);
}

if (基址除雾) {
Write<float>(UE4+0X7D1DFC0,706675684);
}

if (基址聚点) {
Write<float>(UE4 + 0x5608300, 8.47963525E-21);
}

if (曙光芙洛拉) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0x7513B0)+0x78)+0x60)+0x30)+0x358)+0x118,1407103);
}
if (果冻) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0x7513B0)+0x78)+0x60)+0x30)+0x358)+0x118,1406970);
}

if (胖达) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0x7513B0)+0x78)+0x60)+0x30)+0x358)+0x118,1405039);
}

if (明日香) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0x7513B0)+0x78)+0x60)+0x30)+0x358)+0x118,1406387);

}
if (老鼠人) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x1A0)+0x0)+0x9E0)+0x11C, 1103007020);//枪械
}
if (蓝木乃伊) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0x7513B0)+0x78)+0x60)+0x30)+0x358)+0x118,1406894);
}
if (全枪美化) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4700)+0x18, 1101004046);//枪械m4
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x46B8)+0x18, 1101001213);//ak<
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4760)+0x18, 1101008081);//m762
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x46E8)+0x18, 1101003146);//SCAR
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4748)+0x18, 1101007046);//QBZ
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4730)+0x18, 1101006033);//AUG
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x46D0)+0x18, 1101002081);//m4a16
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4718)+0x18, 1101005052);//狗砸
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4808)+0x18, 1101102017);//ace32
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x47C0)+0x18, 1101012009);//蜜罐
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4778)+0x18, 1101009001);//妹控
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4790)+0x18, 1101010019);//g36c
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x47D8)+0x18, 1101100012);//famgs
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4940)+0x18, 1102001102);//uzi
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4958)+0x18, 1102002136);//ump45
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x49D0)+0x18, 1102105002);//p90
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x49B8)+0x18, 1107001019);//mp5k
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x49A0)+0x18, 1102005041);//野牛
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4970)+0x18, 1102003080);//维克托
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4988)+0x18, 1102004048);//汤姆逊
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4C28)+0x18, 1104003026);//s12k
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4C40)+0x18, 1104004024);//dbs
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4C88)+0x18, 1104102001);//ns2000
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4C70)+0x18, 1104101001);//
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4C10)+0x18, 1104002022);//
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4BF8)+0x18, 1104001022);//s686
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4A90)+0x18, 1103006030);//mini
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4B38)+0x18, 1103100007);//
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4AF0)+0x18, 1103010006);//
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4CA0)+0x18, 1105001048);//m249
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4AD8)+0x18, 1103009022);//slr
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4A60)+0x18, 1103004037);//sks
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4AA8)+0x18, 1103007028);//
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4D78)+0x18, 1105010008);//mg3
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4CB8)+0x18, 1105002018);//db28
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4A18)+0x18, 1103001179);//98k
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4B08)+0x18, 1103011009);//
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4A30)+0x18, 1103002087);//m24
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5108)+0x18, 1103007028);//战速弩
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5078)+0x18, 1103012010);//十字弩
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4B20)+0x18, 1103012010);//AMR
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4A48)+0x18, 1103003087);//awm
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4A78)+0x18, 1103005024);//
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x4AC0)+0x18, 1103008020);//
}
if (配件美化) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5960)+0x18, 1010040462);//机瞄
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x58B8)+0x18, 1010040470);//红点
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x58E8)+0x18, 1010040468);//2倍
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5B40)+0x18, 1010040469);//全息
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x59F0)+0x18, 1010040467);//3倍
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5900)+0x18, 1010040466);//四倍
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5A08)+0x18, 1010040481);//6倍
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5708)+0x18, 1010040475);//补偿
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5738)+0x18, 1010040476);//消音
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5720)+0x18, 1010040474);//消炎
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x57E0)+0x18, 1010040477);//直角握把
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x57F8)+0x18, 1010040479);//垂直握把
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5870)+0x18, 1010040462);//激光握把
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5828)+0x18, 1010040478);//拇指握把
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5960)+0x18, 1010040483);//半截握把
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5840)+0x18, 1010040482);//轻型握把
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5D80)+0x18, 1010040462);//扩容
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5D98)+0x18, 1010040472);//快速弹夹
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5DB0)+0x18, 1010040473);//快扩
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x6F98)+0x18, 1010040473);//默认弹夹
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5EB8)+0x18, 1010040463);//不带枪托
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x558)+0x30)+0x30)+0x38)+0x5E70)+0x18, 1010040463);//带枪托
}
if (齐天大圣) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x340)+0x30)+0x388)+0x118,1406327);
}
if (三鹿奶粉) {
写入D类(readValueL(readValueL(readValueL(readValueL(UE4+0xC71F178)+0x370)+0x258)+0xB8)+0xB0, 1073741824);//枪械
写入D类(readValueL(readValueL(readValueL(readValueL(UE4+0xC71F178)+0x370)+0x258)+0xB8)+0xB4, 1073741824);//枪械
写入D类(readValueL(readValueL(readValueL(readValueL(UE4+0xC71F178)+0x370)+0x258)+0xB8)+0xB8, 1073741824);//枪械
}
if (播报美化)
   {写入D类(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x78)+0x90)+0x1618, 播报数值);}
if (自选美化) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x340)+0x30)+0x388)+0x118, 衣服数值);
}
if (冰霜核心) {

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x1A0)+0x0)+0x9E0)+0x11C, 枪械值);//枪械

}
if (龙吟妹控) {

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x1A0)+0x0)+0x9E0)+0x11C, 1103007028);//枪械

}

if (丧尸) {

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x340)+0x30)+0x388)+0x118,1407193);

}

if (清理残留){
system((char*)("rm -rf /data/media/0/.zzz"));
system((char*)("rm -rf /data/media/0/Android/.system_android_l2"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/.system_android_l2"));
system((char*)("rm -rf /data/media/0/.backup"));
system((char*)("rm -rf /data/media/0/backups"));
system((char*)("rm -rf /data/media/0/.backups"));
system((char*)("rm -rf /data/media/0/centauri"));
system((char*)("rm -rf /data/media/0/CentauriOversea"));
system((char*)("rm -rf /data/media/0/SysQS"));
system((char*)("rm -rf /data/media/0/BGMI"));
system((char*)("rm -rf /data/media/0/mfcache"));
system((char*)("rm -rf /data/media/0/tencent"));
system((char*)("rm -rf /data/share1/hardware_info.txt"));
system((char*)("rm -rf /data/share1/inter"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ams"));
system((char*)("rm -rf /data/data/com.pubg.krmobile/app_crashSight"));
system((char*)("rm -rf /data/data/com.pubg.krmobile/app_crashrecord"));
system((char*)("rm -rf /data/data/com.pubg.krmobile/app_flutter"));
system((char*)("rm -rf /data/data/com.pubg.krmobile/app_webview"));
system((char*)("rm -rf /data/data/com.pubg.krmobile/cache"));
system((char*)("rm -rf /data/data/com.pubg.krmobile/code_cache"));
system((char*)("rm -rf /data/data/com.pubg.krmobile/no_backup"));
system((char*)("rm -rf /data/data/com.pubg.krmobile/databases/crashSight_db_"));
system((char*)("rm -rf /data/data/com.pubg.krmobile/databases/crashSight_db_-journal"));
system((char*)("rm -rf /data/data/com.pubg.krmobile/databases/__hs_log_store-journal"));
system((char*)("rm -rf /data/data/com.pubg.krmobile/databases/__hs_log_store"));
system((char*)("rm -rf /data/data/com.pubg.krmobile/files"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Pandora"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/ImageDownload"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/MMKV"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/rawdata"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/RoleInfo"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/TableDatas"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/GameErrorNoRecords"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/StatEventReportedFlag"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/SyncLoadInfo.txt"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/UpdateInfo"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Intermediate"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/TGPA"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/log"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/AsyncCompile"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/iMSDK"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/ProgramBinaryCache"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/ca-bundle.pem"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/hawk_data"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/login-identifier.txt"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/cache"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/Epic Games"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/UE4Game/ShadowTrackerExtra/Engine"));
system((char*)("rm -rf /data/media/0/Android/data/com.pubg.krmobile/files/.fff"));

}


/*
if (北辰.内存.马可波罗) {
USceneComponent* 骨骼组件 = 自身->MeshContainer;
骨骼组件->RelativeRotation = {0,角度,0};
角度 += 北辰.内存.旋转速度;
if (角度 >= 360.0f)
角度 = 0.0f;
}
*/
if(马可){
     USceneComponent* MeshContainer = g_LocalPlayer->MeshContainer;
     MeshContainer->RelativeRotation = { 0,DanceValue ,0 };
     DanceValue += DancerValue;
     if (DanceValue >= 360.0f)
         DanceValue = 0.0f;
     DanceValue += 20;

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
        }}
        //===================
        if (localController) {
        for (int i = 0; i < Actors.size(); i++) {
        auto Actor = Actors[i];
        if (isObjectInvalid(Actor))
        continue;
        if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
        if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey == localController->PlayerKey) {
        localPlayer = (ASTExtraPlayerCharacter *) Actor;
        break;
        }}}
        //=================
        if (localPlayer) {
        if (localPlayer->PartHitComponent) {
        auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
        for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {
        ConfigCollisionDistSqAngles[j].Angle = 90.0f;}
        localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;}
        //=================
        if (Config.HighRisk.Recoil || Config.HighRisk.Shake || Config.HighRisk.尼玛 || Config.HighRisk.HitEffect || Config.HighRisk.Cross || Config.HighRisk.Instant) {
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                            if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
                                if (Config.HighRisk.Recoil) {
                                    memset(&ShootWeaponEntityComp->RecoilInfo, 0,
                                           sizeof(FSRecoilInfo));
                                    ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesRecoveryFactor = 0.0f;
                                    memset(&ShootWeaponEntityComp->DeviationInfo, 0,
                                           sizeof(FSDeviation));
                                    ShootWeaponEntityComp->ShotGunCenterPerc = 0.0f;
                                    ShootWeaponEntityComp->ShotGunVerticalSpread = 0.0f;
                                    ShootWeaponEntityComp->ShotGunHorizontalSpread = 0.0f;
                                    ShootWeaponEntityComp->GameDeviationAccuracy = 0.0f;
                                    ShootWeaponEntityComp->CrossHairInitialSize = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstSpeed = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstIncreaseSpeed = 0.0f;
                                    ShootWeaponEntityComp->VehicleWeaponDeviationAngle = 0.0f;
                                    ShootWeaponEntityComp->RecoilKickADS = 0.0f;
                                }
                                if (Config.HighRisk.Shake) {
                                    ShootWeaponEffectComp->CameraShakeInnerRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakeOuterRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakFalloff = 0.0f;
                                }
                                if (Config.HighRisk.尼玛) {
                                    ShootWeaponEntityComp->BulletFireSpeed = 100000.0f;
                                    ShootWeaponEntityComp->BaseImpactDamage = 100000.0f;
                                    ShootWeaponEntityComp->WeaponAimFOV = 100000.0f;
                                    ShootWeaponEntityComp->MaxDamageRate = 100000.0f;
                                    ShootWeaponEntityComp->MaxVelocityOffsetAddRate = 100000.0f;
                                    ShootWeaponEntityComp->BulletRange = 100000.0f;
                                    ShootWeaponEntityComp->BurstShootInterval = 0;
                                    ShootWeaponEntityComp->BurstShootCD = 100000.0f;
                                    ShootWeaponEntityComp->WeaponBodyLength = 100000.0f;
                                    ShootWeaponEntityComp->MaxBulletImpactFXClampDistance = 100000.0f;
                                }
                                
    if (Config.HighRisk.Cross) {
                                                          ShootWeaponEntityComp->GameDeviationFactor = 0.0f;
                                    }
                                if (Config.HighRisk.Switch) {
                                ShootWeaponEntityComp->SwitchFromBackpackToIdleTime = 0.0f;
                                ShootWeaponEntityComp->SwitchFromIdleToBackpackTime = 0.0f;
                                }
                                if (Config.HighRisk.SuperAim) {
                                ShootWeaponEntityComp->IsSupportAutoAim = true;   
                                ShootWeaponEntityComp->BulletFireSpeed = 100000.0f;
                                }
                                if(Config.HighRisk.Scope){
                                ShootWeaponEntityComp->WeaponAimFOV = 10000000.0f;
                                ShootWeaponEntityComp->WeaponAimInTime = 10000000.0f;
                                }
                                if (Config.HighRisk.HitEffect) {
                                    ShootWeaponEntityComp->DamageImpulse = Config.Hit;
                                    ShootWeaponEntityComp->ExtraHitPerformScale = Config.Hit;
                                }
                                if (Config.HighRisk.Ipad){
                                localPlayer->ThirdPersonCameraComponent->SetFieldOfView(Config.IpadS);
                                }
                          
                                 if (Config.HighRisk.Reload) {
                                    ShootWeaponEntityComp->ReloadRate = 0.0f;                        
                                }
                                if (Config.HighRisk.Instant) {
                                    ShootWeaponEntityComp->BulletFireSpeed = 100000.0f;
                                }
                                if (Config.HighRisk.Swim){
                                UCharacterMovementComponent *CharacterMovement = localPlayer->CharacterMovement;
                                if (CharacterMovement){
                                CharacterMovement->MaxSwimSpeed = 999.9f;
                                }}
                                if (Config.HighRisk.FastMove){
                                UCharacterMovementComponent *CharacterMovement = localPlayer->CharacterMovement;
                                if (CharacterMovement){
                                CharacterMovement->MaxWalkSpeed = 999.9f;
                                }}
                                if (Config.HighRisk.Ljump) {
                               UCharacterMovementComponent *CharacterMovement = g_LocalPlayer->CharacterMovement;
                               if (CharacterMovement) {                      
                               CharacterMovement->JumpZVelocity = 3500.0f;
                               CharacterMovement->GravityScale = 1.5f;
                               }}
                                AGameSession *GameSession = 0;
                                if (Config.HighRisk.Blockspect) {
                                auto FK = GameSession->MaxSplitscreensPerConnection;    
                                FK = 0;
                                }}}}}}}
for (int i = 0; i < Actors.size(); i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;
if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
localController = (ASTExtraPlayerController *) Actor;
break;}}
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

if (上帝视角){
localPlayer->ThirdPersonCameraComponent->SetFieldOfView(视角);
}					
//坐标自瞄
                   if (自动瞄准) {
long PlayerAimLineColor = IM_COL32(255,0,0,255);
ASTExtraPlayerCharacter *Target = NIKE_Aimbot_Thread();
if (Target){
FVector targetAimPos=Target->GetBonePos("Head", {0, 0, 0});
ImVec2 HeadPosSC;
if (W2S(targetAimPos, (FVector2D *)&HeadPosSC)) {
draw->AddLine({(float) glWidth / 2,  (float) (glHeight / 2)}, HeadPosSC,PlayerAimLineColor,0.0f);
}
bool triggerOk = false;
if (开火) {
triggerOk = g_LocalPlayer->bIsWeaponFiring;
} else if (开镜) {
triggerOk = g_LocalPlayer->bIsGunADS;
} else if (开火开镜) {
triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
} else triggerOk = true;
if (triggerOk) {
if(算法 == 0) {
targetAimPos=Target->GetBonePos("Head", {0, 0, 0});
} else if(算法 == 1) {
targetAimPos = Target->GetBonePos("Head", {0, 0, 0});
}else if(算法 == 2){
targetAimPos = Target->GetBonePos("Pelvis", {0, 0, 0});//锁骨
}else if(算法 == 3){//Config
targetAimPos = Target->GetBonePos("calf_l", {0, 0, 0});//左小腿
}else if(算法 == 4){
targetAimPos = Target->GetBonePos("calf_r", {0, 0, 0});//右小腿
}else if(算法 == 5){
targetAimPos = Target->GetBonePos("lowerarm_l", {0, 0, 0});//左小臂
}else if(算法 == 6){
targetAimPos = Target->GetBonePos("lowerarm_r", {0, 0, 0});//右小臂
}else if(算法 == 7){
targetAimPos = Target->GetBonePos("upperarm_l", {0, 0, 0});//左上臂
}else if(算法 == 8){
targetAimPos = Target->GetBonePos("upperarm_r", {0, 0, 0});//右上臂
}else if(算法 == 9) {
targetAimPos = Target->GetBonePos("thigh_l", {0, 0, 0});//左大腿
}else if(算法 == 10) {
targetAimPos = Target->GetBonePos("thigh_r", {0, 0, 0});//右大腿
}else if(算法 == 11) {
targetAimPos = Target->GetBonePos("foot_l", {0, 0, 0});//左脚
}else if(算法 == 12){
targetAimPos = Target->GetBonePos("foot_r", {0, 0, 0});//右脚
}
auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
if (WeaponManagerComponent) {
	auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
	if ((int)propSlot.GetValue() >= 1 && (int)propSlot.GetValue() <= 3) {
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
if (CurrentWeaponReplicated){
auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
if (ShootWeaponComponent){
UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
if (ShootWeaponEntityComponent){
ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
if (CurrentVehicle){
	float dist = g_LocalPlayer->GetDistanceTo(Target);
FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel*Aim_Vehicle));
} else {
float dist = g_LocalPlayer->GetDistanceTo(Target);
	
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;

FVector Velocity = Target->GetVelocity();
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity,timeToTravel*Aim_Anticipation));
}}
float dist = g_LocalPlayer->GetDistanceTo(Target);
if (g_LocalPlayer->bIsWeaponFiring) {
targetAimPos.Z -= dist*Aim_PosZ;
}
if (localController) {
auto ControlRotator =  localController->ControlRotation;//内存接口
auto PlayerCameraManage = localController->PlayerCameraManager; 
if (PlayerCameraManage) {
auto aimRotation = ToRotator(g_LocalController->PlayerCameraManager->CameraCache.POV.Location,targetAimPos);
if (自动瞄准) {
aimRotation.Yaw -= ControlRotator.Yaw;
aimRotation.Pitch -= ControlRotator.Pitch;
AimAngle(aimRotation);           
ControlRotator.Pitch += aimRotation.Pitch / Speed_X;//X轴
ControlRotator.Yaw += aimRotation.Yaw / Speed_Y;//Y轴
}else{
ControlRotator.Yaw = aimRotation.Yaw;
ControlRotator.Pitch = aimRotation.Pitch;
}
g_LocalController->ControlRotation = ControlRotator;
}
}}}}}}}}
if (函数追踪) {
auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
 if (WeaponManagerComponent) {
  auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
  if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
   auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
   if (CurrentWeaponReplicated) {
    auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
    if (ShootWeaponComponent) {
     int shoot_event_idx = 164;
     auto f_mprotect = [](uintptr_t addr, size_t len, int32_t prot) -> int32_t {
      static_assert(PAGE_SIZE == 4096);
      constexpr size_t page_size = static_cast<size_t>(PAGE_SIZE);
      void* start = reinterpret_cast<void*>(addr & -page_size);
      uintptr_t end = (addr + len + page_size - 1) & -page_size;
      return mprotect(start, end - reinterpret_cast<uintptr_t>(start), prot);
     };
     auto VTable = (void **) ShootWeaponComponent->VTable;
     if (VTable && (VTable[shoot_event_idx] != shoot_event)) {
      orig_shoot_event = decltype(orig_shoot_event)(VTable[shoot_event_idx]);
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
  draw->AddText(NULL, ((float) density / 13.f), ImVec2(glWidth / 2.1 - 110.0f, 10.0f), IM_COL32(255,000,000,250),OBFUSCATE("             "));  
                if (Actor->IsA(ASTExtraGameStateBase::StaticClass())) {
                auto InGame = (ASTExtraGameStateBase *) Actor;
                std::string s;               
                s += "本局剩余玩家:" ;
                s += std::to_string((int) InGame->AlivePlayerNum);                                
   auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 37);
绘制字体描边(39, (glWidth/4) - (textSize.x / 4), 450, ImColor(248,248,255), s.c_str());     
        }
}


/*
if (动态) {
if (g_LocalPlayer->bIsWeaponFiring) { 
FOV -= 20.0f;  
if (FOV < 100.0f)  
    {
    FOV = 100.0f; 
    }

}else{
    FOV += 10.0f;  
    if (FOV > 200.0f)  
    {
    FOV = 200.0f; 
    }
}
}*/

if (动态) { //这里就是加的动态自瞄FOV代码
if (g_LocalPlayer->bIsWeaponFiring) { 
FOV -= 10.0f;
if (FOV < 50.0f){
FOV = 50.0f;}
}else{
FOV += 5.0f;  
if (FOV > 200.0f){
FOV = 200.0f; 
    }
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
FVector Spin = Player->GetBonePos("pelvis", {});
FVector Spin2 = Player->GetBonePos("spine_03", {});
auto pelvis = Player->GetBonePos("pelvis", {});
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
if (W2S(HeadPos, (FVector2D *) & HeadPosSC) && W2S(upper_r, (FVector2D *) & upper_rPoSC) && W2S(upper_l, (FVector2D *) & upper_lPoSC) && W2S(lowerarm_r, (FVector2D *) & lowerarm_rPoSC) && W2S(hand_r, (FVector2D *) & hand_rPoSC) && W2S(lowerarm_l, (FVector2D *) & lowerarm_lSC) && W2S(hand_l, (FVector2D *) & hand_lPoSC) && W2S(thigh_l, (FVector2D *) & thigh_lPoSC) && W2S(calf_l, (FVector2D *) & calf_lPoSC) && W2S(foot_l, (FVector2D *) & foot_lPoSC) && W2S(thigh_r, (FVector2D *) & thigh_rPoSC) && W2S(calf_r, (FVector2D *) & calf_rPoSC) && W2S(foot_r, (FVector2D *) & foot_rPoSC) && W2S(neck_01, (FVector2D *) & neck_01PoSC) && W2S(pelvis, (FVector2D *) & pelvisPoSC) && W2S(RootPos, (FVector2D *) & RootPosSC) && W2S(spine_01, (FVector2D *) & spine_01PoSC)&& W2S(spine_02, (FVector2D *) & spine_02PoSC)&& W2S(spine_03, (FVector2D *) & spine_03PoSC)) {


						
if (射线){
if (Player->bEnsure)  {
draw->AddLine({(float) glWidth / 2,75}, HeadPosSC,IM_COL32(255,255,255,255),0.0f);
}else{
draw->AddLine({(float) glWidth / 2,75}, HeadPosSC,GetRandomColorByIndex(Player->TeamID),0.0f);
}
}
bool IsVisible = localController->LineOfSightTo(Player, {0, 0, 0}, true);
long 人机 = IM_COL32(255, 255, 255, 255);//看不到
long 真人 = IM_COL32(255, 0, 0, 255);//看不见
if (IsVisible) {
人机 = IM_COL32(0, 255, 0, 255);//看见
真人 = IM_COL32(0, 255, 0, 255);//看见
}
if (背敌){
bool shit = false;
                            FVector MyPosition, EnemyPosition;
                            ASTExtraVehicleBase * CurrentVehiclea = Player->CurrentVehicle;
                            if (CurrentVehiclea) {
                                MyPosition = CurrentVehiclea->RootComponent->RelativeLocation;
                            } else {
                                MyPosition = Player->RootComponent->RelativeLocation;
                            }
                            ASTExtraVehicleBase * CurrentVehicle = localPlayer->CurrentVehicle;
                            if (CurrentVehicle) {
                                EnemyPosition = CurrentVehicle->RootComponent->RelativeLocation;
                            } else {
                                EnemyPosition = localPlayer->RootComponent->RelativeLocation;
                            }
                            FVector EntityPos = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, NULL, NULL, Vector3(glWidth, glHeight, 0), shit);
                            FVector angle = FVector();
                            Vector3 forward = Vector3((float)(glWidth / 2) - EntityPos.X, (float)(glHeight / 2) - EntityPos.Y, 0.0f);
                            VectorAnglesRadar(forward, angle);
                            const auto angle_yaw_rad = DEG2RAD(angle.Y + 180.f);
                            const auto new_point_x = (glWidth / 2) + (55) / 2 * 8 * cosf(angle_yaw_rad);
                            const auto new_point_y = (glHeight / 2) + (55) / 2 * 8 * sinf(angle_yaw_rad);
                            std::array<Vector3, 3> points { Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y - ((55) / 4 + 3.5f) / 2, 0.f), Vector3(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y, 0.f), Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y + ((55) / 4 + 3.5f) / 2, 0.f)};
                            RotateTriangle(points, angle.Y + 180.f);
                            if (Player->bEnsure) {
                            draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), 人机, 1.5f);
                            draw->AddTriangleFilled(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), IM_COL32(0, 255, 0, 100));
                            } else {
                            draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), 真人, 1.5f);
                            draw->AddTriangleFilled(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), IM_COL32(255, 0, 0, 100));                            
						}}

if (方框) {
float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
float boxWidth = boxHeight * 0.65f;
Box4Line(draw, 0.5f, HeadPosSC.x - (boxWidth / 2), HeadPosSC.y, boxWidth, boxHeight,  PlayerBoxClrCf);
}
  
  
  
  
  
  
   if (骨骼) {


 long Chead,Cuparmr,Cuparml,Clowarmr,Clowarml,Cthighl,Cthighr,Ccalfl,Ccalfr,Cneck,Cpelvis,Cspine1,Cspine2,Cspine3;//颜色初始化
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("Head", {}), true))//头
{
Chead = IM_COL32(255, 255, 255, 255);
}
else
{
Chead = IM_COL32(255, 0, 0, 255); //看不见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("neck_01", {}), true))//脖子
{
Cneck = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cneck = IM_COL32(255, 0, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("upperarm_r", {}), true))//上面的肩膀右
{
Cuparmr = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cuparmr = IM_COL32(255, 0, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("upperarm_l", {}), true))//上面的肩膀左
{
Cuparml = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cuparml = IM_COL32(255, 0, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("lowerarm_r", {}), true))//上面的手臂右
{
Clowarmr = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Clowarmr = IM_COL32(255, 0, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("lowerarm_l", {}), true))//上面的手臂左
{
Clowarml = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Clowarml = IM_COL32(255, 0, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_03", {}), true))//脊柱3
{
Cspine3 = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cspine3 = IM_COL32(255, 0, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_02", {}), true))//脊柱2
{
Cspine2 = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cspine2 = IM_COL32(255, 0, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("spine_01", {}), true))//脊柱2
{
Cspine1 = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cspine1 = IM_COL32(255, 0, 0, 255); //看的见
}



if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("pelvis", {}), true))//骨盆
{
Cpelvis = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cpelvis = IM_COL32(255, 0, 0, 255); //看的见
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("thigh_l", {}), true))//大腿左
{
Cthighl = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cthighl = IM_COL32(255, 0, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("thigh_r", {}), true))//大腿右
{
Cthighr = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Cthighr = IM_COL32(255, 0, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("calf_l", {}), true))//小腿左
{
Ccalfl = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Ccalfl = IM_COL32(255, 0, 0, 255); //看的见
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager,Player->GetBonePos("calf_r", {}), true))//小腿右
{
Ccalfr = IM_COL32(255, 255, 255, 255); //看不见
}
else
{
Ccalfr = IM_COL32(255, 0, 0, 255); //看的见
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
                      if (Distance > 200) {
                        draw->AddCircleFilled({neck_01PoSC.x, neck_01PoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//脖子
                        draw->AddCircleFilled({upper_rPoSC.x, upper_rPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//右上臂
                        draw->AddCircleFilled({upper_lPoSC.x, upper_lPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//左上臂
                        draw->AddCircleFilled({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//右下臂
                        draw->AddCircleFilled({lowerarm_lSC.x, lowerarm_lSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//左下臂
                        draw->AddCircleFilled({thigh_rPoSC.x, thigh_rPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//右大腿
                        draw->AddCircleFilled({thigh_lPoSC.x, thigh_lPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//左大腿
                        draw->AddCircleFilled({calf_lPoSC.x, calf_lPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//左小腿
                        draw->AddCircleFilled({calf_rPoSC.x, calf_rPoSC.y}, 1.4, IM_COL32(255, 255, 255, 255));//右小腿
                        }
                        if (Distance < 20) {
                        draw->AddCircleFilled({neck_01PoSC.x, neck_01PoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//脖子
                        draw->AddCircleFilled({upper_rPoSC.x, upper_rPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//右上臂
                        draw->AddCircleFilled({upper_lPoSC.x, upper_lPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//左上臂
                        draw->AddCircleFilled({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//右下臂
                        draw->AddCircleFilled({lowerarm_lSC.x, lowerarm_lSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//左下臂
                        draw->AddCircleFilled({thigh_rPoSC.x, thigh_rPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//右大腿
                        draw->AddCircleFilled({thigh_lPoSC.x, thigh_lPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//左大腿
                        draw->AddCircleFilled({calf_lPoSC.x, calf_lPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//左小腿
                        draw->AddCircleFilled({calf_rPoSC.x, calf_rPoSC.y}, 1.4, IM_COL32(255, 0, 0, 255));//右小腿
                        }
                      if (Distance < 10) {
                        draw->AddCircleFilled({neck_01PoSC.x, neck_01PoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//脖子
                        draw->AddCircleFilled({upper_rPoSC.x, upper_rPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//右上臂
                        draw->AddCircleFilled({upper_lPoSC.x, upper_lPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//左上臂
                        draw->AddCircleFilled({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//右下臂
                        draw->AddCircleFilled({lowerarm_lSC.x, lowerarm_lSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//左下臂
                        draw->AddCircleFilled({thigh_rPoSC.x, thigh_rPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//右大腿
                        draw->AddCircleFilled({thigh_lPoSC.x, thigh_lPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//左大腿
                        draw->AddCircleFilled({calf_lPoSC.x, calf_lPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//左小腿
                        draw->AddCircleFilled({calf_rPoSC.x, calf_rPoSC.y}, 2.6, IM_COL32(255, 0, 0, 128));//右小腿
                        }
                        
    }
    
    
if(手持){
float boxWidth = density / 1.8f;
boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance,
boxWidth / 2);
float boxHeight = boxWidth * 0.19f;
auto  获取动作 = 获取动作s(Player->CurrentStates);
std::string s = "状态:[";
s +=  获取动作;
      s += "]";
if (获取动作 != "") {
绘制加粗文本2(14,HeadPosSC.x - (boxWidth / 3)  - 20,
HeadPosSC.y - 45,
白色,黑色,s.c_str());
}}

if (距) {
float boxWidth = density / 1.8f;
float boxHeight = boxWidth * 0.19f;
std::string s;
s += std::to_string((int)Distance);
s += "米";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 32.0f));
draw->AddText(NULL, ((float) density / 30.0f), {RootPosSC.x - (textSize.x / 2), RootPosSC.y}, IM_COL32(255, 255, 255, 255), s.c_str());
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
if (手持) {
auto rrrr = Player->GetBonePos("pelvis", {});
FVector2D we;
std::string wep;
if (W2S(rrrr, &we)) {
auto WeaponManagerComponent = Player->WeaponManagerComponent;
if (WeaponManagerComponent) {
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
if (CurrentWeaponReplicated) {
auto wppp = CurrentWeaponReplicated->GetWeaponID();
 auto 手持武器 = CurrentWeaponReplicated->GetWeaponID();

//auto 当前子弹= CurrentWeaponReplicated->CurBulletNumInClip;

//auto  最大子弹 = CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
if(wppp == 108004 || wppp == 108003 || wppp == 108002  ||wppp == 108001 || wppp == 108000 || wppp == 108005 || wppp == 108006 || wppp == 108007)
continue;
//   bool hqtt(int wppp,ImTextureID * textureId){
switch (wppp) {
case NULL:
wep +="空手";

break;

case 101001:
wep += "武器:[AKM]";
break;
case 101002:
wep +=  "武器:[M16A4]";
break;
case 101003:
wep +=  "武器:[SCAR]";
break;
case 101004:
wep +=  "武器:[M416]";
break;
case 101005:
wep +=  "武器:[狗砸]";
break;
case 101006:
wep +=  "武器:[AUG]";
break;
case 101007:
wep +=  "武器:[QBZ]";
break;
case 101008:
wep +=  "武器:[M762]";
break;
case 101009:
wep +=  "武器:[Mk47]";
break;
case 101010:
wep +=  "武器:[G36C]";
break;
case 101100:
wep +=  "武器:[FAMA]";
break;
//LIGHT MACHINEGUN
case 105001:
wep +=  "武器:[M249]";
break;
case 105002:
wep +=  "武器:[DP-28]";
break;
//SMG
case 102001:
wep +=  "武器:[UZI]";
break;
case 102002:
wep +=  "武器:[UMP]";
break;
case 102003:
wep +=  "武器:[Vector]";
break;
case 102004:
wep +=  "武器:[Tomm]";
break;

case 102005:
wep +=  "武器:[PP-19]";
break;
case 102007:
wep +=  "武器:[Skorpi]";
break;
//SNIPER
case 103001:
wep +=  "武器:[Kar98]";
break;
case 103002:
wep +=  "武器:[M24]";
break;
case 103003:
wep +=  "武器:[AWM]";
break;
case 103004:
wep +=  "武器:[SKS]";
break;
case 103005:
wep +=  "武器:[VSS]";
break;
case 103006:
wep +=  "武器:[Mini14]";
break;
case 103007:
wep +=  "武器:[Mk14]";
break;
case 103008:
wep +=  "武器:[Win94]";
break;
case 103009:
wep +=  "武器:[SLR]";
break;
case 103010:
wep +=  "武器:[QBU]";
break;
case 103011:
wep +=  "武器:[Mosin]";
break;
//SHOTGUN
case 103100:
wep +=  "武器:[Mk12]";
break;
case 104001:
wep +=  "武器:[S686]";
break;

case 104002:
wep +=  "武器:[S1897]";
break;
case 104003:
wep +=  "武器:[S12K]";
break;
case 104004:
wep +=  "武器:[M1014]";
break;
case 106006:
wep +=  "武器:[Sawed]";
break;
//POSTIL
case 106001:
wep +=  "武器:[P1911]";
break;
case 106003:
wep +=  "武器:[R1895]";
break;
case 106004:
wep +=  "武器:[P18C]";
break;
case 106005:
wep +=  "武器:[R45]";
break;
case 106008:
wep +=  "武器:[Vz61]";
break;
case 106010:
wep +=  "武器:[Deser]";
break;
//OTHER
case 107001:
wep +=  "武器:[Cross]";
break;
case 108001:
wep +=  "武器:[vcMa]";
break;
case 108002:
wep +=  "武器:[Crow]";
break;
case 108003:
wep +=  "武器:[Sickle]";
break;
case 108004:
wep +=  "武器:[Pan]";
break;
case 201001:
wep +=  "武器:[Chok]";
break;
case 103012:
wep += "武器:[AMR]";
case 1030071:
wep +="妹控-[破损]";

break;
case 1030072:
wep +="妹控-[修复]";
break;
case 1030073:
wep +="妹控-[完好]";
break;
case 1030074:
wep +="妹控-[改进]";
break;
case 1030075:
wep +="妹控-[精致]";
break;
case 1030076:
wep +="妹控-[独眼]";
break;
case 1030077:
wep +="妹控-[钢铁]";
break;


case 1010041:
wep +="M416-[破损]";
break;
case 1010042:
wep +="M416-[修复]";
break;
case 1010043:
wep +="M416-[完好]";
break;
case 1010044:
wep +="M416-[改进]";
break;
case 1010045:
wep +="M416-[精致]";
break;
case 1010046:
wep +="M416-[独眼]";
break;
case 1010047:
wep +="M416-[钢铁]";
break;

case 1050011:
wep +="M249-[破损]";
break;
case 1050012:
wep +="M249-[修复]";
break;
case 1050013:
wep +="M249-[完好]";
break;
case 1050014:
wep +="M249-[改进]";
break;
case 1050015:
wep +="M249-[精致]";
break;
case 1050016:
wep +="M249-[独眼]";
break;
case 1050017:
wep +="M249-[钢铁]";
break;

case 1010051:
wep +="狗砸-[破损]";
break;
case 1010052:
wep +="狗砸-[修复]";
break;
case 1010053:
wep +="狗砸-[完好]";
break;
case 1010054:
wep +="狗砸-[改进]";
break;
case 1010055:
wep +="狗砸-[精致]";
break;
case 1010056:
wep +="狗砸-[独眼]";
break;
case 1010057:
wep +="狗砸-[钢铁]";

case 1010061:
wep +="AUG-[破损]";

break;
case 1010062:
wep +="AUG-[修复]";
break;
case 1010063:
wep +="AUG-[完好]";
break;
case 1010064:
wep +="AUG-[改进]";
break;
case 1010065:
wep +="AUG-[精致]";
break;
case 1010066:
wep +="AUG-[独眼]";
break;
case 1010067:
wep +="AUG-[钢铁]";
break;

case 1010071:
wep +="QBZ-[破损]";
break;
case 1010072:
wep +="QBZ-[修复]";
break;
case 1010073:
wep +="QBZ-[完好]";
break;
case 1010074:
wep +="QBZ-[改进]";
break;
case 1010075:
wep +="QBZ-[精致]";
break;
case 1010076:
wep +="QBZ-[独眼]";
break;
case 1010077:
wep +="QBZ-[钢铁]";
break;


case 1010081:
wep +="猛男762-[破损]";
break;
case 1010082:
wep +="猛男762-[修复]";
break;
case 1010083:
wep +="猛男762-[完好]";
break;
case 1010084:
wep +="猛男762-[改进]";
break;
case 1010085:
wep +="猛男762-[精致]";
break;
case 1010086:
wep +="猛男762-[独眼]";
break;
case 1010087:
wep +="猛男762-[钢铁]";
break;



case 1010091:
wep +="榴弹底座-[破损]";
break;
case 1010092:
wep +="榴弹底座-[修复]";
break;
case 1010093:
wep +="榴弹底座-[完好]";
break;
case 1010094:
wep +="榴弹底座-[改进]";
break;


case 1010101:
wep +="G36C-[破损]";
break;
case 1010102:
wep +="G36C-[修复]";
break;
case 1010103:
wep +="G36C-[完好]";
break;
case 1010104:
wep +="G36C-[改进]";
break;
case 1010105:
wep +="G36C-[精致]";
break;
case 1010106:
wep +="G36C-[独眼]";
break;
case 1010107:
wep +="G36C-[钢铁]";
break;



case 1030021:
wep +="M24-[破损]";
break;
case 1030022:
wep +="M24-[修复]";
break;
case 1030023:
wep +="M24-[完好]";
break;
case 1030024:
wep +="M24-[改进]";
break;
case 1030025:
wep +="M24-[精致]";
break;
case 1030026:
wep +="M24-[独眼]";
break;
case 1030027:
wep +="M24-[钢铁]";
break;

case 1030031:
wep +="AWM-[破损]";
break;
case 1030032:
wep +="AWM-[修复]";
break;
case 1030033:
wep +="AWM-[完好]";
break;
case 1030034:
wep +="AWM-[改进]";
break;
case 1030035:
wep +="AWM-[精致]";
break;
case 1030036:
wep +="AWM-[独眼]";
break;
case 1030037:
wep +="AWM-[钢铁]";
break;


case 1030041:
wep +="SKS-[破损]";
break;
case 1030042:
wep +="SKS-[修复]";
break;
case 1030043:
wep +="SKS-[完好]";
break;
case 1030044:
wep +="SKS-[改进]";
break;
case 1030045:
wep +="SKS-[精致]";
break;
case 1030046:
wep +="SKS-[独眼]";
break;
case 1030047:
wep +="SKS-[钢铁]";
break;


default:
wep +="未收录 ID: [";
wep += wppp;
wep +="]";
break;
}


/*wep += "[";

wep += std::to_string((int)当前子弹);
wep += "/";
wep += std::to_string((int)最大子弹);
wep += "]";*/

float boxWidth = density / 1.8f;
boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance,
boxWidth / 2);
float boxHeight = boxWidth * 0.19f;

auto textSize = ImGui::CalcTextSize2(wep.c_str(), 0, ((float) density / 28.0f));
//     auto ret = ImGui::ImageButton(icon.texture, {70, 70});
绘制加粗文本2(14,HeadPosSC.x - (boxWidth / 3)  -20,HeadPosSC.y - 13,白色,红色,wep.c_str());
}}}}
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
          



if (屏幕){
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV, IM_COL32(255, 255, 255, 255), 100, 0.f);//圈圈
}

            if (HZT == HZT::HZ1) {

      if (血量) {
                                    int CurHP = (int) std::max(0, std::min((int) Player->Health, (int) Player->HealthMax));
                                    int MaxHP = (int) Player->HealthMax;
                                    
                                    long HPColor = IM_COL32(0, 0, 255, 255);
                                    
                                    if (Player->Health == 0.0f && !Player->bDead) {
                                        HPColor = IM_COL32(255, 255, 0, 255);

                                        CurHP = Player->NearDeathBreath;
                                        if (Player->NearDeatchComponent) {
                                            MaxHP = Player->NearDeatchComponent->BreathMax;
                                    }
                                }

                                    float boxWidth = density / 6.0f;
                                    boxWidth -= std::min(((boxWidth / 2) / 500.0f) * Distance, boxWidth / 2);
                                    float boxHeight = boxWidth * 0.15f;
                                    ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y - (boxHeight * 2.6f)};
                                    ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP), vStart.y + boxHeight};
                                    ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};
                                    draw->AddRectFilled(vStart, vEndRect, IM_COL32(0,0,0,100));
                                    draw->AddRectFilled(vStart, vEndFilled, HPColor);

                                    draw->AddRect(vStart, vEndRect, IM_COL32(0, 0, 0, 255));
                                }
                                }       
/*
if(小风车){
if(悬浮窗 == true){
std::string sFPS = "\n\n\n悬浮窗已开启";
绘制字体描边(20.0f, glWidth / 2 - 600, glHeight / 2 - 300, ImVec4(1.0f, 1.0f, 1.0f, 1.0f), sFPS.c_str());
}
}*/
/*
std::string Distance=std::to_string((int)Distance);
auto textSize=ImGui::CalcTextSize2(Distance.c_str(),0,20);
draw->AddText(NULL, ((float) density / 17.0f), {HeadPosSC.x-(textSize.x/2)-5, HeadPosSC.y-(textSize.y/2)-75}, IM_COL32(255, 255, 255, 255), Distance.c_str());
——————————————
搭配血量距离绘制
@yinjienb
*/
if (HZT == HZT::HZ2) {

if (血量) {
int CurHP = (int) std::max(0, std::min((int) Player->Health,110));
int MaxHP = 110;  
long HPColor;
long HPBordersColor;
if (Player->bEnsure) {
HPColor = IM_COL32(255,255,235,180);
HPBordersColor = IM_COL32(56,56,0,255);
} else {
HPColor = IM_COL32(255,255,235,180);
HPBordersColor = IM_COL32(56,56,0,255);
}

if (Player->Health == 0.0f && !Player->bDead) 
{
HPColor = IM_COL32(0, 0, 0, 0);
HPBordersColor = IM_COL32(255, 255, 255, 255);

if(Player->NearDeatchComponent){
MaxHP=Player->NearDeatchComponent->BreathMax;
}}
//нижний слева
draw->PathLineTo(ImVec2(HeadPosSC.x - 55, HeadPosSC.y - 10));
//нижний с права
draw->PathLineTo(ImVec2(HeadPosSC.x - 55 + CurHP, HeadPosSC.y - 10));
//середина с права
draw->PathLineTo(ImVec2(HeadPosSC.x - 55 + CurHP + 9, HeadPosSC.y - 20));
//верхний с права
draw->PathLineTo(ImVec2(HeadPosSC.x - 55 + CurHP, HeadPosSC.y - 30));
//верхний слева
draw->PathLineTo(ImVec2(HeadPosSC.x - 55, HeadPosSC.y - 30));
//середина слева
draw->PathLineTo(ImVec2(HeadPosSC.x - 55 - 9, HeadPosSC.y - 20));


draw->PathFillConvex(HPColor);


//нижний слева
draw->PathLineTo(ImVec2(HeadPosSC.x - 55, HeadPosSC.y - 10));
//нижний с права
draw->PathLineTo(ImVec2(HeadPosSC.x - 55 + CurHP, HeadPosSC.y - 10));
//середина с права
draw->PathLineTo(ImVec2(HeadPosSC.x - 55 + CurHP + 9, HeadPosSC.y - 20));
//верхний с права
draw->PathLineTo(ImVec2(HeadPosSC.x - 55 + CurHP, HeadPosSC.y - 30));
//верхний слева
draw->PathLineTo(ImVec2(HeadPosSC.x - 55, HeadPosSC.y - 30));
//середина слева
draw->PathLineTo(ImVec2(HeadPosSC.x - 55 - 9, HeadPosSC.y - 20));
draw->PathStroke(HPBordersColor, 5);
}}
                            
	  if (信息 || 信息) {
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
        s += " 人机";
    } else {
        s +=Player->PlayerName.ToString();
    }              
}
        
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 45.0f));
draw->AddText(nullptr, 15.0f, ImVec2(HeadPosSC.x - 55.0f, HeadPosSC.y - 28.0f), IM_COL32(255, 255, 255, 255), s.c_str());     
}
}}
if (骨灰盒) {
if (Actors[i]->IsA(APickUpListWrapperActor::StaticClass())) {
auto Pick = (APickUpListWrapperActor *) Actors[i];
if (!Pick->RootComponent)
continue;
auto PickUpDataList = (TArray<FPickUpItemData>)Pick->GetDataList();
float Distance = Pick->GetDistanceTo(localPlayer) / 100.0f;
if (Distance >200.0f)//骨灰盒显示最大距离
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
IM_COL32(0,0,0,200), s.c_str());
draw->AddText(NULL,((float) density / 30.0f),
{PickUpListsPos.X, PickUpListsPos.Y},
IM_COL32(205,255,255,200), s.c_str());
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
                                   draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255,000,000, 200), s.c_str());
                 }
               if (classname.find("BP_Grenade_Smoke_C") != std::string::npos) {
                                    std::string s =  "烟雾弹";
                                    s += "(";
                                    s += std::to_string((int) Distance);
                                    s += ")";
                                   draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255, 255, 255, 200), s.c_str());
                 }
               if (classname.find("BP_Grenade_Burn_C") != std::string::npos) {
                                    std::string s =  "燃烧瓶";
                                    s += "(";
                                    s += std::to_string((int) Distance);
                                    s += ")";
                                   draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255,000,000, 200), s.c_str());
                }
               if (classname.find("BP_Grenade_Stun_C") != std::string::npos) {
                                    std::string s =  "震爆弹";
                                    s += "(";
                                    s += std::to_string((int) Distance);
                                    s += ")";
                                    draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255, 255, 255, 200), s.c_str());
     }
                                }
                            }
            }
            /*                                    	    	   FVector2D 物资坐标;
                   auto RootComponent = Actor->RootComponent;
    	    	   if (!RootComponent)
    	    	   continue;
    	    	   float Distance = Actor->GetDistanceTo(localPlayer) / 100.f;
    	    	   if (Distance > 500)
    	    	   continue;
                   if (W2S(Actor->K2_GetActorLocation(), &物资坐标)) {
                   std::string classname = Actor->GetName();
                   if (classname.find("ItemBox_Lua_Lv1_C") != std::string::npos) {
    	    	   std::string s =  "物资箱(1级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("ItemBox_Lua_Lv2_C") != std::string::npos) {
    	    	   std::string s =  "物资箱(2级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("ItemBox_Lua_Lv3_C") != std::string::npos) {
    	    	   std::string s =  "物资箱(3级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("ItemBox_Lua_Lv4_C") != std::string::npos) {
    	    	   std::string s =  "物资箱(4级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("ItemBox_Lua_Lv5_C") != std::string::npos) {
    	    	   std::string s =  "物资箱(5级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   
                   if (classname.find("WeaponBox_Lua_Lv1_C") != std::string::npos) {
    	    	   std::string s =  "武器箱(1级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("WeaponBox_Lua_Lv2_C") != std::string::npos) {
    	    	   std::string s =  "武器箱(2级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("WeaponBox_Lua_Lv3_C") != std::string::npos) {
    	    	   std::string s =  "武器箱(3级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("WeaponBox_Lua_Lv4_C") != std::string::npos) {
    	    	   std::string s =  "武器箱(4级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("WeaponBox_Lua_Lv5_C") != std::string::npos) {
    	    	   std::string s =  "武器箱(5级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                                      if (classname.find("BP_DC_P_FilingCabinet_Lua_Lv1_C") != std::string::npos) {
    	    	   std::string s =  "文件柜(1级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                                      if (classname.find("BP_DC_P_FilingCabinet_Lua_Lv2_C") != std::string::npos) {
    	    	   std::string s =  "文件柜(2级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                                      if (classname.find("BP_DC_P_FilingCabinet_Lua_Lv3_C") != std::string::npos) {
    	    	   std::string s =  "文件柜(3级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                                      if (classname.find("BP_DC_P_FilingCabinet_Lua_Lv4_C") != std::string::npos) {
    	    	   std::string s =  "文件柜(4级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                                      if (classname.find("BP_DC_P_FilingCabinet_Lua_Lv5_C") != std::string::npos) {
    	    	   std::string s =  "文件柜(5级)";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   }
                   }*/



            
      if (箱子) {
    	    	   FVector2D 物资坐标;
                   auto RootComponent = Actor->RootComponent;
    	    	   if (!RootComponent)
    	    	   continue;
    	    	   float Distance = Actor->GetDistanceTo(localPlayer) / 100.f;
    	    	   if (Distance > 500)
    	    	   continue;
                   if (W2S(Actor->K2_GetActorLocation(), &物资坐标)) {
                   std::string classname = Actor->GetName();
                   if (classname.find("ItemBox_Lua_Lv1_C") != std::string::npos) {
std::string s =  "物资箱(1级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("ItemBox_Lua_Lv2_C") != std::string::npos) {
std::string s =  "物资箱(2级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("ItemBox_Lua_Lv3_C") != std::string::npos) {
std::string s =  "物资箱(3级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("ItemBox_Lua_Lv4_C") != std::string::npos) {
std::string s =  "物资箱(4级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("ItemBox_Lua_Lv5_C") != std::string::npos) {
std::string s =  "物资箱(5级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("WeaponBox_Lua_Lv1_C") != std::string::npos) {
std::string s =  "武器箱(1级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("WeaponBox_Lua_Lv2_C") != std::string::npos) {
std::string s =  "武器箱(2级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("WeaponBox_Lua_Lv3_C") != std::string::npos) {
std::string s =  "武器箱(3级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("WeaponBox_Lua_Lv4_C") != std::string::npos) {
std::string s =  "武器箱(4级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("WeaponBox_Lua_Lv5_C") != std::string::npos) {
std::string s =  "武器箱(5级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBox_Lua_Lv1_C") != std::string::npos) {
std::string s =  "信函箱(1级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBox_Lua_Lv2_C") != std::string::npos) {
std::string s =  "信函箱(2级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBox_Lua_Lv3_C") != std::string::npos) {
std::string s =  "信函箱(3级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBox_Lua_Lv4_C") != std::string::npos) {
std::string s =  "信函箱(4级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBox_Lua_Lv5_C") != std::string::npos) {
std::string s =  "信函箱(5级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBag_Lua_Lv1_C") != std::string::npos) {
std::string s =  "手提包(1级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBag_Lua_Lv2_C") != std::string::npos) {
std::string s =  "手提包(2级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBag_Lua_Lv3_C") != std::string::npos) {
std::string s =  "手提包(3级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBag_Lua_Lv4_C") != std::string::npos) {
std::string s =  "手提包(4级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("FileBag_Lua_Lv5_C") != std::string::npos) {
std::string s =  "手提包(5级)";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());} else {
if (classname.find("PlayerDeadInventoryBox") != std::string::npos) {
std::string s =  "箱子状态:已开启";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}}
if (classname.find("EggBox_Lua_Lv1_C") != std::string::npos) {
std::string s =  "隐匿点";
s += "[";
s += std::to_string((int) Distance);
s += "米]";
绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());}

                   if (classname.find("BP_BladeBall_C") != std::string::npos) {
    	    	   std::string s =  "刀球";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   if (classname.find("ReviveTower_C") != std::string::npos) {
    	    	   std::string s =  "呼救塔";
    	    	   s += "[";
    	    	   s += std::to_string((int) Distance);
    	    	   s += "米]";
    	    	   绘制加粗文本2(density / 30.0f,物资坐标.X, 物资坐标.Y, 黄色,黑色,s.c_str());
                   }
                   }
                   }
  if (狗子) {

    FVector2D 狗子坐标;
auto RootComponent = Actor->RootComponent;
if (!RootComponent)
continue;
float Distance = Actor->GetDistanceTo(localPlayer) / 100.f;
int CurHP = (int) std::max(0, std::min((int) localPlayer->Health, (int) localPlayer->HealthMax));//数量
int MaxHP = (int) localPlayer->HealthMax;
if (localPlayer->bDead)
continue;
if (Distance > 500)
continue;
if (W2S(Actor->K2_GetActorLocation(), &狗子坐标)) {
if (localPlayer->Health == 0.0f && !localPlayer->bDead) {
float boxWidth = density / 1.8f;
float boxHeight = boxWidth * 0.19f;
CurHP = localPlayer->NearDeathBreath;
if (localPlayer->NearDeatchComponent) {
MaxHP = localPlayer->NearDeatchComponent->BreathMax;}}
std::string classname = Actor->GetName();
if (classname.find("AIMob_PatrolDog_C") != std::string::npos) {
std::string s =  "机械狗";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());}
if (classname.find("BPPawn_Library_C") != std::string::npos) {
std::string s =  "大马猴";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());}
if (classname.find("BPPAWn_HungerH_C") != std::string::npos) {
std::string s =  "辐射狗";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());}
if (classname.find("BPPawn_HungerB_C") != std::string::npos) {
std::string s =  "辐射狗(大)";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());}
if (classname.find("BPPawn_Watcher_C") != std::string::npos) {
std::string s =  "观察者";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());}
if (classname.find("BPPawn_VenomVariant_C") != std::string::npos) {
std::string s =  "恶魔变异体";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());}
if (classname.find("BPPawn_BurningVariant_C") != std::string::npos) {
std::string s =  "燃烧变异体";
s += "[";
s += std::to_string((int) Distance);
s += "米]\n";
s += "血量:";
s += std::to_string((int)CurHP);
绘制加粗文本2(density / 25.0f,狗子坐标.X, 狗子坐标.Y, 黄色,黑色,s.c_str());
                   }
                   }
                   }

if (Actor->IsA(APickUpWrapperActor::StaticClass())) {
auto drug = (APickUpWrapperActor *) Actor;
auto RootComponent = Actor->RootComponent;
if (!RootComponent)
continue;
float Distance = drug->GetDistanceTo(localPlayer) / 100.f;
FVector2D drugPos;
if (W2S(drug->K2_GetActorLocation(), &drugPos)) {
std::string gname = drug->GetName();
 if (步枪) {
if (gname.find("BP_Rifle_AKM_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]AKM";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_M416_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]M416";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_M16A4_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]M16A4";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_SCAR_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]SCAR";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_QBZ_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]QBZ";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_G36_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]G36C";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_M762_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]M762";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_Groza_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]Groza";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_AUG_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]AUG";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_rifle_Mk47_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]Mk47";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_FAMAS_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]FAMAS";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_HoneyBadger_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]蜜獾";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
if (gname.find("BP_Rifle_ACE32_Wrapper_C") != std::string::npos) {
std::string s ="[步枪]ACE32";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,步枪颜色,s.c_str());
}
}

if(冲锋枪){
if (gname.find("BP_MachineGun_UMP9_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]UMP45";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
if (gname.find("BP_MachineGun_TommyGun_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]汤姆逊";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
if (gname.find("BP_MachineGun_PP19_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]野牛";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
if (gname.find("BP_MachineGun_Uzi_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]UZI";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
if (gname.find("BP_MachineGun_Vector_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]Vector";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
if (gname.find("BP_MachineGun_MP5K_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]MP5K";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
if (gname.find("BP_MachineGun_P90_Wrapper_C") != std::string::npos) {
std::string s ="[冲锋]P90";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,冲锋颜色,s.c_str());
}
}
if(狙击枪){
if (gname.find("BP_Sniper_QBU_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]QBU";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_Kar98k_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]Kar98k";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_Mini14_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]Mini14";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_SKS_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]SKS";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_M24_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]M24";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_WEP_Mk14_Pickup_C") != std::string::npos) {
std::string s ="[狙击]MK14";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_AWM_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]AWM";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_SLR_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]SLR";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_Win94_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]Win94";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_VSS_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]VSS";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_AMR_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]AMR";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_MK12_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]MK12";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
if (gname.find("BP_Sniper_Mosin_Wrapper_C") != std::string::npos) {
std::string s ="[狙击]莫辛纳甘";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,狙击颜色,s.c_str());
}
}

if(散弹枪){
if (gname.find("BP_ShotGun_S686_Wrapper_C") != std::string::npos) {
std::string s ="[散弹]S686";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,散弹颜色,s.c_str());
}
if (gname.find("BP_ShotGun_S1897_Wrapper_C") != std::string::npos) {
std::string s ="[散弹]S1897";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,散弹颜色,s.c_str());
}
if (gname.find("BP_ShotGun_S12K_Wrapper_C") != std::string::npos) {
std::string s ="[散弹]S12K";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,散弹颜色,s.c_str());
}
if (gname.find("BP_ShotGun_DP12_Wrapper_C") != std::string::npos) {
std::string s ="[散弹]DBS";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,散弹颜色,s.c_str());
}
if (gname.find("BP_ShotGun_M1014_Wrapper_C") != std::string::npos) {
std::string s ="[散弹]M1014";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,散弹颜色,s.c_str());
}
if (gname.find("BP_ShotGun_Neostead2000_Wrapper_C") != std::string::npos) {
std::string s ="[散弹]NS2000";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,散弹颜色,s.c_str());
}
}

if(手枪){
if (gname.find("BP_Pistol_P92_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]P92";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_Pistol_P1911_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]P1911";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_Pistol_R1895_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]R1895";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_Pistol_P18C_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]P18C";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_Pistol_R45_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]R45";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_ShotGun_SawedOff_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]短管散弹";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_Pistol_Vz61_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]蝎式手枪";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
if (gname.find("BP_Pistol_DesertEagle_Wrapper_C") != std::string::npos) {
std::string s ="[手枪]沙漠之鹰";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,手枪颜色,s.c_str());
}
}

if(近战武器){
if (gname.find("BP_WEP_Pan_Pickup_C") != std::string::npos) {
std::string s ="[近战]平底锅";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,近战颜色,s.c_str());
}
if (gname.find("BP_WEP_Sickle_Pickup_C") != std::string::npos) {
std::string s ="[近战]镰刀";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,近战颜色,s.c_str());
}
if (gname.find("BP_WEP_Sickle_Pickup_C") != std::string::npos) {
std::string s ="[近战]砍刀";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,近战颜色,s.c_str());
}
if (gname.find("BP_WEP_Cowbar_Pickup_C") != std::string::npos) {
std::string s ="[近战]撬棍";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,近战颜色,s.c_str());
}
if (gname.find("BP_WEP_Dagger_Pickup_C") != std::string::npos) {
std::string s ="[近战]军用匕首";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,近战颜色,s.c_str());
}
}

if(其他){
if (gname.find("BP_Other_CrossBow_Wrapper_C") != std::string::npos) {
std::string s ="[其他]十字弩";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
if (gname.find("BP_Other_DP28_Wrapper_C") != std::string::npos) {
std::string s ="[其他]DP28";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
if (gname.find("BP_Other_M249_Wrapper_C") != std::string::npos) {
std::string s ="[其他]M249";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
if (gname.find("BP_Other_MG3_Wrapper_C") != std::string::npos) {
std::string s ="[其他]MG3";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
if (gname.find("BP_Other_HuntingBow_Wrapper_C") != std::string::npos || gname.find("BP_Other_HuntingBowEA_Wrapper_C") != std::string::npos) {
std::string s ="[其他]爆炸猎弓";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
if (gname.find("BP_Other_CrossbowBorderland_Wrapper_C") != std::string::npos) {
std::string s ="[其他]战术弩";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
if (gname.find("BP_IceSnowRPG_Wrapper_C") != std::string::npos) {
std::string s ="[其他]雪球加农";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,其他颜色,s.c_str());
}
}

if(子弹){
if (gname.find("BP_Ammo_9mm") != std::string::npos) {
std::string s ="[子弹]9毫米";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_556mm") != std::string::npos) {
std::string s ="[子弹]5.56";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_762mm") != std::string::npos) {
std::string s ="[子弹]7.62";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_12Guage") != std::string::npos) {
std::string s ="[子弹]12口径";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_45ACP") != std::string::npos) {
std::string s ="[子弹]45口径";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_300Magnum") != std::string::npos) {
std::string s ="[子弹]300马格南";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_Bolt") != std::string::npos) {
std::string s ="[子弹]弩箭";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_FireBolt") != std::string::npos) {
std::string s ="[子弹]燃烧箭";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_50BMG") != std::string::npos) {
std::string s ="[子弹]50口径";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_40mm") != std::string::npos) {
std::string s ="[子弹]40毫米";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
if (gname.find("BP_Ammo_IceSnowRPG_Pickup_C") != std::string::npos) {
std::string s ="[子弹]雪蛋";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,子弹颜色,s.c_str());
}
}

if(倍镜){
if (gname.find("BP_MZJ_QX_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]全息";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_HD_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]红点";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_SideRMR_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]侧边镜";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_2X_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]2倍镜";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_3X_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]3倍镜";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_4X_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]4倍镜";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_6X_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]6倍镜";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
if (gname.find("BP_MZJ_8X_Pickup_C") != std::string::npos) {
std::string s ="[倍镜]8倍镜";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,倍镜颜色,s.c_str());
}
}

if(配件){
if (gname.find("BP_ZDD_Crossbow_Q_Pickup_C") != std::string::npos) {
std::string s ="[配件]箭袋";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_ZDD_Sniper_Pickup_C") != std::string::npos) {
std::string s ="[配件]子弹袋";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_Lasersight_Pickup_C") != std::string::npos) {
std::string s ="[配件]激光瞄准器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_ThumbGrip_Pickup_C") != std::string::npos) {
std::string s ="[配件]拇指握把";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_HalfGrip_Pickup_C") != std::string::npos) {
std::string s ="[配件]半截握把";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_Vertical_Pickup_C") != std::string::npos) {
std::string s ="[配件]垂直握把";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_Angled_Pickup_C") != std::string::npos) {
std::string s ="[配件]直角握把";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_LightGrip_Pickup_C") != std::string::npos) {
std::string s ="[配件]轻型握把";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Choke_Pickup_C") != std::string::npos) {
std::string s ="[配件]散弹收束器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_DuckBill_Pickup_C") != std::string::npos) {
std::string s ="[配件]鸭嘴枪口";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QT_A_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪枪托";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QT_Sniper_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击枪托";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QT_UZI_Pickup_C") != std::string::npos) {
std::string s ="[配件]UZI枪托";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Sniper_Compensator_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击补偿器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Sniper_FlashHider_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击消焰器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Sniper_Suppressor_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击消音器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Large_Suppressor_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪消音器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Large_Compensator_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪补偿器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Large_FlashHider_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪消焰器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Mid_Suppressor_Pickup_C") != std::string::npos) {
std::string s ="[配件]冲锋消音器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Mid_Compensator_Pickup_C") != std::string::npos) {
std::string s ="[配件]冲锋补偿器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Mid_FlashHider_Pickup_C") != std::string::npos) {
std::string s ="[配件]冲锋消焰器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Sniper_EQ_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击快扩";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Sniper_E_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击扩容";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Sniper_Q_Pickup_C") != std::string::npos) {
std::string s ="[配件]狙击快速";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Large_EQ_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪快扩";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Large_E_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪扩容";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Large_Q_Pickup_C") != std::string::npos) {
std::string s ="[配件]步枪快速";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Mid_EQ_Pickup_C") != std::string::npos) {
std::string s ="[配件]冲锋快扩";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Mid_E_Pickup_C") != std::string::npos) {
std::string s ="[配件]冲锋扩容";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Mid_Q_Pickup_C") != std::string::npos) {
std::string s ="[配件]冲锋快速";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}

if (gname.find("BP_DJ_Pistol_EQ_Pickup_C") != std::string::npos) {
std::string s ="[配件]手枪快扩";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Pistol_E_Pickup_C") != std::string::npos) {
std::string s ="[配件]手枪枪扩容";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_Pistol_Q_Pickup_C") != std::string::npos) {
std::string s ="[配件]手枪枪快速";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_GL_A_Pickup_C") != std::string::npos) {
std::string s ="[配件]全自动枪机";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DB_A_Pickup_C") != std::string::npos) {
std::string s ="[配件]枪机侧挡板";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_QK_Large_MuzzleBrake_Pickup_C") != std::string::npos) {
std::string s ="[配件]枪口制退器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_DJ_DrumMag_Pickup_C") != std::string::npos) {
std::string s ="[配件]小型弹鼓";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
if (gname.find("BP_WB_ErgoGrip_Pickup_C") != std::string::npos) {
std::string s ="[配件]人体工程学握把";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,配件颜色,s.c_str());
}
}

if(药品){
if (gname.find("Injection_Pickup_C") != std::string::npos) {
std::string s ="[药品]肾上腺素";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
if (gname.find("Firstaid_Pickup_C") != std::string::npos) {
std::string s ="[药品]急救包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
if (gname.find("FirstAidbox_Pickup_C") != std::string::npos) {
std::string s ="[药品]医疗箱";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
if (gname.find("Pills_Pickup_C") != std::string::npos) {
std::string s ="[药品]止痛药";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
if (gname.find("Drink_Pickup_C") != std::string::npos) {
std::string s ="[药品]饮料";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
if (gname.find("Bandage_Pickup_C") != std::string::npos) {
std::string s ="[药品]绷带";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
if (gname.find("EgyptWine_Pickup_C") != std::string::npos) {
std::string s ="[药品]圣水";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,药品颜色,s.c_str());
}
}

if(头盔){
if (gname.find("PickUp_BP_Helmet_Lv1_C") != std::string::npos) {
std::string s ="[头盔]一级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,白色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv2_C") != std::string::npos) {
std::string s ="[头盔]二级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,绿色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv3_C") != std::string::npos) {
std::string s ="[头盔]三级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,蓝色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv4_C") != std::string::npos) {
std::string s ="[头盔]四级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv4_2_C") != std::string::npos) {
std::string s ="[头盔]独眼四级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv4_3_C") != std::string::npos) {
std::string s ="[头盔]钢铁四级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv5_C") != std::string::npos) {
std::string s ="[头盔]五级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,粉红,s.c_str());
}

if (gname.find("PickUp_BP_Helmet_Lv5_2_C") != std::string::npos) {
std::string s ="[头盔]独眼五级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv5_3_C") != std::string::npos) {
std::string s ="[头盔]钢铁五级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv6_C") != std::string::npos) {
std::string s ="[头盔]六级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv6_2_C") != std::string::npos) {
std::string s ="[头盔]独眼六级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Helmet_Lv6_3_C") != std::string::npos) {
std::string s ="[头盔]钢铁六级头";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv1_C") != std::string::npos) {
std::string s ="[护甲]一级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,白色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv2_C") != std::string::npos) {
std::string s ="[护甲]二级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,绿色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv3_C") != std::string::npos) {
std::string s ="[护甲]三级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,蓝色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv4_C") != std::string::npos) {
std::string s ="[护甲]四级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv4_2_C") != std::string::npos) {
std::string s ="[护甲]独眼四级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv4_3_C") != std::string::npos) {
std::string s ="[护甲]钢铁四级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv5_C") != std::string::npos) {
std::string s ="[护甲]五级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,粉红,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv5_2_C") != std::string::npos) {
std::string s ="[护甲]独眼五级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv5_3_C") != std::string::npos) {
std::string s ="[护甲]钢铁五级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv6_C") != std::string::npos) {
std::string s ="[护甲]六级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv6_2_C") != std::string::npos) {
std::string s ="[护甲]独眼六级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Armor_Lv6_3_C") != std::string::npos) {
std::string s ="[护甲]钢铁六级甲";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Bag_Lv1_C") != std::string::npos || gname.find("PickUp_BP_Bag_Lv1_A_C") != std::string::npos || gname.find("PickUp_BP_Bag_Lv1_B_C") != std::string::npos) {
std::string s ="[背包]一级包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,白色,s.c_str());
}
if (gname.find("PickUp_BP_Bag_Lv2_C") != std::string::npos || gname.find("PickUp_BP_Bag_Lv2_A_C") != std::string::npos || gname.find("PickUp_BP_Bag_Lv2_B_C") != std::string::npos) {
std::string s ="[背包]二级包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,绿色,s.c_str());
}
if (gname.find("PickUp_BP_Bag_Lv3_C") != std::string::npos || gname.find("PickUp_BP_Bag_Lv3_A_C") != std::string::npos || gname.find("PickUp_BP_Bag_Lv3_B_C") != std::string::npos) {
std::string s ="[背包]三级包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,蓝色,s.c_str());
}
if (gname.find("PickUp_BP_Bag_Lv4") != std::string::npos) {
std::string s ="[背包]四级包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("PickUp_BP_Bag_Lv5") != std::string::npos) {
std::string s ="[背包]五级包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,粉红,s.c_str());
}
if (gname.find("PickUp_BP_Bag_Lv6") != std::string::npos) {
std::string s ="[背包]六级包";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
}

if(其他){
if (gname.find("BP_Grenade_Shoulei") != std::string::npos) {
std::string s =  "[投掷]手榴弹";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,投掷颜色,s.c_str());
}
if (gname.find("BP_Grenade_Burn") != std::string::npos) {
std::string s =  "[投掷]燃烧瓶";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,投掷颜色,s.c_str());
}
if (gname.find("BP_Grenade_Stun") != std::string::npos) {
std::string s =  "[投掷]震爆弹";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,投掷颜色,s.c_str());
}
if (gname.find("BP_Grenade_Smoke") != std::string::npos) {
std::string s =  "[投掷]烟雾弹";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,投掷颜色,s.c_str());
}
if (gname.find("BP_Grenade_Apple") != std::string::npos) {
std::string s =  "[投掷]苹果";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,投掷颜色,s.c_str());
}
}

if(变卖物){
if (gname.find("BP_Necklace_Pickup") != std::string::npos) {
std::string s ="[地铁]狗牌";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,紫色,s.c_str());
}
if (gname.find("BP_Envelope_Pickup") != std::string::npos) {
std::string s ="[地铁]绿卡";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,粉红,s.c_str());
}
if (gname.find("BP_jiangu_Pickup") != std::string::npos) {
std::string s ="[地铁]异变的肩骨";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
}

if(特殊){
if (gname.find("Flaregun") != std::string::npos) {
std::string s ="[特殊]信号枪";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
/*char 警告[100];
sprintf(警告,"[警告]附近有信号枪");
绘制字体描边(22,(glWidth / 2) - 70,100,ImColor(248,0,0),警告);*/
}
if (gname.find("BP_Ammo_Flare_Pickup_C") != std::string::npos) {
std::string s ="[特殊]信号弹";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("GasCan_Destructible_Pickup_C") != std::string::npos) {
std::string s ="[特殊]气油桶";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("BP_Grenade_EmergencyCall_Weapon_Wrapper_C") != std::string::npos) {
std::string s ="[特殊]紧急呼救器";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("GoldenTokenWrapper_C") != std::string::npos) {
std::string s ="[特殊]代币";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("StoneGateKeyWrapper_C") != std::string::npos) {
std::string s ="[特殊]钥匙";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Bike_WithRack_C") != std::string::npos) {
std::string s ="[特殊]双人自行车";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Snowboard_IceWorld2_C") != std::string::npos) {
std::string s ="[特殊]滑雪板";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
if (gname.find("PickUp_BP_Ghillie_1_C") != std::string::npos || gname.find("PickUp_BP_Ghillie_2_C") != std::string::npos || gname.find("PickUp_BP_Ghillie_3_C") != std::string::npos || gname.find("PickUp_BP_Ghillie_4_C") != std::string::npos) {
std::string s ="[特殊]吉利服";
s += "(";
s += std::to_string((int) Distance);
s += ")";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
draw->AddCircleFilled({drugPos.X, drugPos.Y}, 3, 白色,  0);
绘制字体描边(20,drugPos.X - (textSize.x / 2), drugPos.Y,红色,s.c_str());
}
}

}



}            
                   
if (载具) 
{
if (Actor->IsA(ASTExtraVehicleBase::StaticClass())) {
auto Vehicle = (ASTExtraVehicleBase *) Actor;
auto Vehicle1 = (ESTExtraVehicleHealthState *) Actor;
float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
FVector2D vehiclePos;
if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos)) {
std::string classname = Vehicle->GetName();
std::string s;
if(classname.find("VH_BRDM_C")!=std::string::npos){
s +="装甲车";
}else if(classname.find("VH_Scooter_C")!=std::string::npos){
s +="小绵羊";
}else if(classname.find("VH_Motorcycle_C")!=std::string::npos){
s +="摩托车";
}else if(classname.find("VH_Motorcycle_1_C")!=std::string::npos){
s +="摩托车";
}else if(classname.find("VH_Motorcycle_SI_C")!=std::string::npos){
s +="摩托车";
}else if(classname.find("VH_MotorcycleCart_1_C")!=std::string::npos){
s +="三轮摩托";
}else if(classname.find("VH_MotorcycleCart_C")!=std::string::npos){
s +="三轮摩托";
}else if(classname.find("VH_MotorcycleCart_SI_C")!=std::string::npos){
s +="三轮摩托";
}else if(classname.find("VH_Snowmobile_C")!=std::string::npos){
s +="雪地摩托";
}else if(classname.find("VH_Snowbike_C")!=std::string::npos){
s +="雪地摩托";
}else if(classname.find("BP_VH_Tuk_C")!=std::string::npos){
s +="三轮车";
}else if(classname.find("BP_VH_Tuk_1_C")!=std::string::npos){
s +="三轮车";
}else if(classname.find("BP_VH_Tuk_1_SI_C")!=std::string::npos){
s +="三轮车";
}else if(classname.find("Buggy")!=std::string::npos){
s +="蹦蹦";
}else if(classname.find("Dacia")!=std::string::npos){
s +="轿车";
}else if(classname.find("VH_DAcia_SI_C")!=std::string::npos){
s +="轿车";
}else if(classname.find("UAZ")!=std::string::npos){
s +="吉普";
}else if(classname.find("CoupeRB")!=std::string::npos){
s +="库配RB";
}else if(classname.find("_PickUp")!=std::string::npos){
s +="皮卡车";
}else if(classname.find("Card_PickUp")!=std::string::npos){
s +="皮卡车";
}else if(classname.find("Rony")!=std::string::npos){
s +="皮卡车";
}else if(classname.find("Mirado")!=std::string::npos){
s +="跑车";
}else if(classname.find("MiniBus")!=std::string::npos){
s +="迷你巴士";
}else if(classname.find("PG117")!=std::string::npos){
s +="快艇";
}else if(classname.find("AquaRail")!=std::string::npos){
s +="摩托艇";
}else if(classname.find("Motorglider")!=std::string::npos){
s +="滑翔机";
}else if(classname.find("VH_ATV1_C")!=std::string::npos){
s +="越野车";
}else if(classname.find("VH_ATV2_C")!=std::string::npos){
s +="越野车";
}else if(classname.find("VH_ATV3_C")!=std::string::npos){
s +="越野车";
}else if(classname.find("PickUp_07_C")!=std::string::npos){
s +="罗尼皮卡";
}else if(classname.find("BP_VH_Bigfoot_C")!=std::string::npos){
s +="大脚车";
}else if(classname.find("BP_VH_Bigfoot_S1_C")!=std::string::npos){
s +="大脚车";
}else if(classname.find("VH_UTV_C")!=std::string::npos){
s +="越野车";
}else if(classname.find("wing_Vehicle_BornISIand_C")!=std::string::npos){
s +="直升机";
}else if(classname.find("wing_Vehicle_SI_C")!=std::string::npos){
s +="直升机";
}else if(classname.find("BP_Bike_WithRack_Pickable_C")!=std::string::npos){
s +="自行车";
}else if(classname.find("BP_Bike_WithRack_SI_C")!=std::string::npos){
s +="自行车";
}else if(classname.find("BP_ReindeerVehicle_C")!=std::string::npos){
s +="驯鹿";
}else if(classname.find("BP_ReindeerCart_C")!=std::string::npos){
s +="驯鹿车座";
}else if(classname.find("VH_SnowBoard_IceWorId2_C")!=std::string::npos){
s +="滑雪板";
}else if(classname.find("TrackVehicle_BP_C")!=std::string::npos){
s +="矿车";
}
s += "[";
s += std::to_string((int) Distance);
s += "米]";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 20);
绘制字体描边(20,vehiclePos.X - (textSize.x / 2), vehiclePos.Y,ImColor(248,248,255),s.c_str());

}
}
}
//某些爱当破防狗的我就懒得说了




       }}}
/*std::string credit = "  \n\n ";
auto textSize = ImGui::CalcTextSize2(credit.c_str(), 0, 41);
绘制字体描边(41, (glWidth/4.5) - (textSize.x / 2), 100, ImColor(255, 255, 255), credit.c_str());*/


if(开){
std::string sFPS = "MKS直装v15-SVIP版本\n官方电报@MKSYYDS\n认准官方频道";
绘制字体描边(20.0f, glWidth / 2 - 600, glHeight / 2 - 300, ImVec4(1.0f, 1.0f, 1.0f, 1.0f), sFPS.c_str());
}//悬浮字
/*
if (初始化){

// 这是一个简单的函数，它将在线程中执行
void bIsWeaponFiring() {
    for (int i = 0; i < 11; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // 模拟耗时操作
        std::cout << i << std::endl;

    // 创建一个线程对象
    std::thread t(bIsWeaponFiring);

    // 等待线程完成
    t.join();

    return 0;
}}}*/

if (初始化){

    for (int i = 0; i < 11; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // 模拟耗时操作
        std::cout << i << std::endl;
       
        
        自动瞄准 = true;

}}

if (自瞄1) {
draw->AddCircle(ImVec2(glWidth / 2, glHeight / 2),FOV,ToColor(Config.ColorsESP.Fov颜色),0,0.0f);
}




if (屏幕深绿){/*
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV, IM_COL32(106, 168, 79，0), 100, 0.f);//圈圈*/
}

if (屏幕粉){/*
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV, IM_COL32(255, 0, 255，0), 100, 0.f);//圈圈*/
}

if (屏幕紫){/*
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV, IM_COL32(255, 0, 255，0), 100, 0.f);//圈圈*/
}

if (屏幕蓝){/*
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV, IM_COL32(74, 134, 232，0), 100, 0.f);//圈圈*/
}

if (屏幕青){/*
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV, IM_COL32(106, 168, 79,0), 100, 0.f);//圈圈*/
}

if (屏幕青绿){/*
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV, IM_COL32(0, 255, 0，0), 100, 0.f);//圈圈*/
}

if (屏幕白){/*
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV, IM_COL32(255, 255, 255, 255), 100, 0.f);//圈圈*/
}

if (屏幕灰){/*
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV, IM_COL32(102, 102, 102，0), 100, 0.f);//圈圈*/
}

if (屏幕科技){/*
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV, IM_COL32(61, 133, 198，0), 100, 0.f);//圈圈*/
}

if (屏幕红){/*
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV, IM_COL32(255, 0, 0，0), 100, 0.f);//圈圈*/
}



if (国家) {





}







if(你){
if(我 == false){
FOV1=FOV;
}
}

if(我){

      if(就 <= 距){
      FOV=FOV2;
      
}
     if(就 > 距){
     FOV=FOV1; 
    
 
      }
      }
   /*
std::string 字幕 = "十";
auto 位置 = ImGui::CalcTextSize2(字幕.c_str(), 0, ((float) density / 1170.0f));
draw->AddText(NULL, ((float) density / 1170.0f), {((float) glWidth / 2.05) - (位置.x / 540), 550}, 红色, 字幕.c_str());
*/
if (绘制鸡腿) {
g_LocalController = localController;
g_LocalPlayer = localPlayer;   


if(宽度增加3){
小晨宝嘻嘻+=动画速度3;
if(小晨宝嘻嘻>最大长度3){
小晨宝嘻嘻=最大长度3;
}}else{
小晨宝嘻嘻-=动画速度3;
if(小晨宝嘻嘻<最小长度3){
小晨宝嘻嘻=最小长度3;
}}
ImColor 血量颜色2;
float 左边=glWidth/2-小晨宝嘻嘻/2-初始长度3;
float 右边=glWidth/2+小晨宝嘻嘻/2+初始长度3;
draw->AddRectFilled({左边,65},{右边,120},ImColor(0,0,0,120),5,0);
std::string s;
if(!totalEnemies&&!totalBots){
宽度增加3=false;
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(0, 181, 181,255),5,0);//背景
s+="安全";
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),63,ImColor(0,248,0),s.c_str());
}else{
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(0, 181, 181,255),5,0);//背景
s+="人:";
s+=std::to_string((int)totalEnemies);
s+="|";
s+="Bot:";
s+=std::to_string((int)totalBots);
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),65,ImColor(248,248,248),s.c_str());

for(int i=0;i<Actors.size();i++){
auto Actor=Actors[i];
if(isObjectInvalid(Actor))
continue;
if(Actor->IsA(ASTExtraPlayerCharacter::StaticClass())){
ASTExtraPlayerCharacter*Target= NIKE_Aimbot_Thread ();
float Distance=localPlayer->GetDistanceTo(Target)/100.f;
if(Target){
宽度增加3=true;

auto WeaponManagerComponent=Target->WeaponManagerComponent;
if(WeaponManagerComponent){
auto CurrentWeaponReplicated=(ASTExtraShootWeapon*)WeaponManagerComponent->CurrentWeaponReplicated;
std::string s;
std::string ss;
if(CurrentWeaponReplicated){
auto WeaponId=(int)CurrentWeaponReplicated->GetWeaponID();
auto wppp=CurrentWeaponReplicated->GetWeaponID();
auto 当前子弹=CurrentWeaponReplicated->CurBulletNumInClip;
auto 最大子弹=CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
s+="[";
s+=wppp;
s+="]";
if(wppp==107020||wppp==602001||wppp==602002||wppp==602003||wppp==602004||wppp==108001||wppp==1080011||wppp==108002||wppp==108003||wppp==108004||wppp==1080041||wppp==108005||wppp==1080051||wppp==602005){
ss+="[未知]";
}else{
ss+="[";
ss+=std::to_string((int)当前子弹);
ss+="/";
ss+=std::to_string((int)最大子弹);
ss+="]";
}
}else{
s+="[拳头]";
ss+="[未知]";
}
绘制字体描边(20,glWidth/2+75,65,ImColor(248,248,0),s.c_str());
绘制字体描边(20,glWidth/2+75,85,ImColor(248,248,0),ss.c_str());
}

int CurHP=(int)std::max(0,std::min((int)Target->Health,(int)Target->HealthMax));//数量
int MaxHP=100;
血量颜色2=ImColor(0,248,0);
if(Target->Health==0.0f&&!Target->bDead){
血量颜色2=ImColor(248,0,0);
CurHP=Target->NearDeathBreath;
if(Target->NearDeatchComponent){
MaxHP=Target->NearDeatchComponent->BreathMax;
}}
std::string xl="HP:";
xl+=std::to_string((int)CurHP);
绘制字体描边(20,glWidth/2-145,65,血量颜色2,xl.c_str());
std::string jl="距离:";
jl+=std::to_string((int)Distance);
jl+="M";
绘制字体描边(20,glWidth/2-145,85,ImColor(248,248,248),jl.c_str());
std::string mz=Target->PlayerName.ToString();
auto textSize=ImGui::CalcTextSize(mz.c_str(),0,22);
绘制字体描边(22,glWidth/2-(textSize.x/2),95,ImColor(248,248,248),mz.c_str());
}else{
宽度增加3=false;}}}}}
if (绘制黑) {
g_LocalController = localController;
g_LocalPlayer = localPlayer;   


if(宽度增加3){
小晨宝嘻嘻+=动画速度3;
if(小晨宝嘻嘻>最大长度3){
小晨宝嘻嘻=最大长度3;
}}else{
小晨宝嘻嘻-=动画速度3;
if(小晨宝嘻嘻<最小长度3){
小晨宝嘻嘻=最小长度3;
}}
ImColor 血量颜色2;
float 左边=glWidth/2-小晨宝嘻嘻/2-初始长度3;
float 右边=glWidth/2+小晨宝嘻嘻/2+初始长度3;
draw->AddRectFilled({左边,65},{右边,120},ImColor(0,0,0,120),5,0);
std::string s;
if(!totalEnemies&&!totalBots){
宽度增加3=false;
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(0,0,0,255),5,0);//背景
s+="安全";
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),63,ImColor(0,248,0),s.c_str());
}else{
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(0,0,0,255),5,0);//背景
s+="玩家:";
s+=std::to_string((int)totalEnemies);
s+="|";
s+="人机:";
s+=std::to_string((int)totalBots);
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),65,ImColor(248,248,248),s.c_str());

for(int i=0;i<Actors.size();i++){
auto Actor=Actors[i];
if(isObjectInvalid(Actor))
continue;
if(Actor->IsA(ASTExtraPlayerCharacter::StaticClass())){
ASTExtraPlayerCharacter*Target= NIKE_Aimbot_Thread ();
float Distance=localPlayer->GetDistanceTo(Target)/100.f;
if(Target){
宽度增加3=true;

auto WeaponManagerComponent=Target->WeaponManagerComponent;
if(WeaponManagerComponent){
auto CurrentWeaponReplicated=(ASTExtraShootWeapon*)WeaponManagerComponent->CurrentWeaponReplicated;
std::string s;
std::string ss;
if(CurrentWeaponReplicated){
auto WeaponId=(int)CurrentWeaponReplicated->GetWeaponID();
auto wppp=CurrentWeaponReplicated->GetWeaponID();
auto 当前子弹=CurrentWeaponReplicated->CurBulletNumInClip;
auto 最大子弹=CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
s+="[";
s+=wppp;
s+="]";
if(wppp==107020||wppp==602001||wppp==602002||wppp==602003||wppp==602004||wppp==108001||wppp==1080011||wppp==108002||wppp==108003||wppp==108004||wppp==1080041||wppp==108005||wppp==1080051||wppp==602005){
ss+="[未知]";
}else{
ss+="[";
ss+=std::to_string((int)当前子弹);
ss+="/";
ss+=std::to_string((int)最大子弹);
ss+="]";
}
}else{
s+="[拳头]";
ss+="[未知]";
}
绘制字体描边(20,glWidth/2+75,65,ImColor(248,248,0),s.c_str());
绘制字体描边(20,glWidth/2+75,85,ImColor(248,248,0),ss.c_str());
}

int CurHP=(int)std::max(0,std::min((int)Target->Health,(int)Target->HealthMax));//数量
int MaxHP=100;
血量颜色2=ImColor(0,248,0);
if(Target->Health==0.0f&&!Target->bDead){
血量颜色2=ImColor(248,0,0);
CurHP=Target->NearDeathBreath;
if(Target->NearDeatchComponent){
MaxHP=Target->NearDeatchComponent->BreathMax;
}}
std::string xl="HP:";
xl+=std::to_string((int)CurHP);
绘制字体描边(20,glWidth/2-145,65,血量颜色2,xl.c_str());
std::string jl="距离:";
jl+=std::to_string((int)Distance);
jl+="M";
绘制字体描边(20,glWidth/2-145,85,ImColor(248,248,248),jl.c_str());
std::string mz=Target->PlayerName.ToString();
auto textSize=ImGui::CalcTextSize(mz.c_str(),0,22);
绘制字体描边(22,glWidth/2-(textSize.x/2),95,ImColor(248,248,248),mz.c_str());
}else{
宽度增加3=false;}}}}}
if (绘制白) {
g_LocalController = localController;
g_LocalPlayer = localPlayer;   


if(宽度增加3){
小晨宝嘻嘻+=动画速度3;
if(小晨宝嘻嘻>最大长度3){
小晨宝嘻嘻=最大长度3;
}}else{
小晨宝嘻嘻-=动画速度3;
if(小晨宝嘻嘻<最小长度3){
小晨宝嘻嘻=最小长度3;
}}
ImColor 血量颜色2;
float 左边=glWidth/2-小晨宝嘻嘻/2-初始长度3;
float 右边=glWidth/2+小晨宝嘻嘻/2+初始长度3;
draw->AddRectFilled({左边,65},{右边,120},ImColor(0,0,0,120),5,0);
std::string s;
if(!totalEnemies&&!totalBots){
宽度增加3=false;
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(255,255,255,255),5,0);//背景
s+="安全";
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),63,ImColor(0,248,0),s.c_str());
}else{
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(255,255,255,255),5,0);//背景
s+="人:";
s+=std::to_string((int)totalEnemies);
s+="|";
s+="Bot:";
s+=std::to_string((int)totalBots);
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),65,ImColor(248,248,248),s.c_str());

for(int i=0;i<Actors.size();i++){
auto Actor=Actors[i];
if(isObjectInvalid(Actor))
continue;
if(Actor->IsA(ASTExtraPlayerCharacter::StaticClass())){
ASTExtraPlayerCharacter*Target= NIKE_Aimbot_Thread ();
float Distance=localPlayer->GetDistanceTo(Target)/100.f;
if(Target){
宽度增加3=true;

auto WeaponManagerComponent=Target->WeaponManagerComponent;
if(WeaponManagerComponent){
auto CurrentWeaponReplicated=(ASTExtraShootWeapon*)WeaponManagerComponent->CurrentWeaponReplicated;
std::string s;
std::string ss;
if(CurrentWeaponReplicated){
auto WeaponId=(int)CurrentWeaponReplicated->GetWeaponID();
auto wppp=CurrentWeaponReplicated->GetWeaponID();
auto 当前子弹=CurrentWeaponReplicated->CurBulletNumInClip;
auto 最大子弹=CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
s+="[";
s+=wppp;
s+="]";
if(wppp==107020||wppp==602001||wppp==602002||wppp==602003||wppp==602004||wppp==108001||wppp==1080011||wppp==108002||wppp==108003||wppp==108004||wppp==1080041||wppp==108005||wppp==1080051||wppp==602005){
ss+="[未知]";
}else{
ss+="[";
ss+=std::to_string((int)当前子弹);
ss+="/";
ss+=std::to_string((int)最大子弹);
ss+="]";
}
}else{
s+="[拳头]";
ss+="[未知]";
}
绘制字体描边(20,glWidth/2+75,65,ImColor(248,248,0),s.c_str());
绘制字体描边(20,glWidth/2+75,85,ImColor(248,248,0),ss.c_str());
}

int CurHP=(int)std::max(0,std::min((int)Target->Health,(int)Target->HealthMax));//数量
int MaxHP=100;
血量颜色2=ImColor(0,248,0);
if(Target->Health==0.0f&&!Target->bDead){
血量颜色2=ImColor(248,0,0);
CurHP=Target->NearDeathBreath;
if(Target->NearDeatchComponent){
MaxHP=Target->NearDeatchComponent->BreathMax;
}}
std::string xl="HP:";
xl+=std::to_string((int)CurHP);
绘制字体描边(20,glWidth/2-145,65,血量颜色2,xl.c_str());
std::string jl="距离:";
jl+=std::to_string((int)Distance);
jl+="M";
绘制字体描边(20,glWidth/2-145,85,ImColor(248,248,248),jl.c_str());
std::string mz=Target->PlayerName.ToString();
auto textSize=ImGui::CalcTextSize(mz.c_str(),0,22);
绘制字体描边(22,glWidth/2-(textSize.x/2),95,ImColor(248,248,248),mz.c_str());
}else{
宽度增加3=false;}}}}}
if (绘制紫) {
g_LocalController = localController;
g_LocalPlayer = localPlayer;   


if(宽度增加3){
小晨宝嘻嘻+=动画速度3;
if(小晨宝嘻嘻>最大长度3){
小晨宝嘻嘻=最大长度3;
}}else{
小晨宝嘻嘻-=动画速度3;
if(小晨宝嘻嘻<最小长度3){
小晨宝嘻嘻=最小长度3;
}}
ImColor 血量颜色2;
float 左边=glWidth/2-小晨宝嘻嘻/2-初始长度3;
float 右边=glWidth/2+小晨宝嘻嘻/2+初始长度3;
draw->AddRectFilled({左边,65},{右边,120},ImColor(0,0,0,120),5,0);
std::string s;
if(!totalEnemies&&!totalBots){
宽度增加3=false;
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(255, 0, 255, 255),5,0);//背景
s+="安全";
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),63,ImColor(0,248,0),s.c_str());
}else{
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(255, 0, 255, 255),5,0);//背景
s+="人:";
s+=std::to_string((int)totalEnemies);
s+="|";
s+="Bot:";
s+=std::to_string((int)totalBots);
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),65,ImColor(248,248,248),s.c_str());

for(int i=0;i<Actors.size();i++){
auto Actor=Actors[i];
if(isObjectInvalid(Actor))
continue;
if(Actor->IsA(ASTExtraPlayerCharacter::StaticClass())){
ASTExtraPlayerCharacter*Target= NIKE_Aimbot_Thread ();
float Distance=localPlayer->GetDistanceTo(Target)/100.f;
if(Target){
宽度增加3=true;

auto WeaponManagerComponent=Target->WeaponManagerComponent;
if(WeaponManagerComponent){
auto CurrentWeaponReplicated=(ASTExtraShootWeapon*)WeaponManagerComponent->CurrentWeaponReplicated;
std::string s;
std::string ss;
if(CurrentWeaponReplicated){
auto WeaponId=(int)CurrentWeaponReplicated->GetWeaponID();
auto wppp=CurrentWeaponReplicated->GetWeaponID();
auto 当前子弹=CurrentWeaponReplicated->CurBulletNumInClip;
auto 最大子弹=CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
s+="[";
s+=wppp;
s+="]";
if(wppp==107020||wppp==602001||wppp==602002||wppp==602003||wppp==602004||wppp==108001||wppp==1080011||wppp==108002||wppp==108003||wppp==108004||wppp==1080041||wppp==108005||wppp==1080051||wppp==602005){
ss+="[未知]";
}else{
ss+="[";
ss+=std::to_string((int)当前子弹);
ss+="/";
ss+=std::to_string((int)最大子弹);
ss+="]";
}
}else{
s+="[拳头]";
ss+="[未知]";
}
绘制字体描边(20,glWidth/2+75,65,ImColor(248,248,0),s.c_str());
绘制字体描边(20,glWidth/2+75,85,ImColor(248,248,0),ss.c_str());
}

int CurHP=(int)std::max(0,std::min((int)Target->Health,(int)Target->HealthMax));//数量
int MaxHP=100;
血量颜色2=ImColor(0,248,0);
if(Target->Health==0.0f&&!Target->bDead){
血量颜色2=ImColor(248,0,0);
CurHP=Target->NearDeathBreath;
if(Target->NearDeatchComponent){
MaxHP=Target->NearDeatchComponent->BreathMax;
}}
std::string xl="HP:";
xl+=std::to_string((int)CurHP);
绘制字体描边(20,glWidth/2-145,65,血量颜色2,xl.c_str());
std::string jl="距离:";
jl+=std::to_string((int)Distance);
jl+="M";
绘制字体描边(20,glWidth/2-145,85,ImColor(248,248,248),jl.c_str());
std::string mz=Target->PlayerName.ToString();
auto textSize=ImGui::CalcTextSize(mz.c_str(),0,22);
绘制字体描边(22,glWidth/2-(textSize.x/2),95,ImColor(248,248,248),mz.c_str());
}else{
宽度增加3=false;}}}}}
if (绘制粉) {
g_LocalController = localController;
g_LocalPlayer = localPlayer;   


if(宽度增加3){
小晨宝嘻嘻+=动画速度3;
if(小晨宝嘻嘻>最大长度3){
小晨宝嘻嘻=最大长度3;
}}else{
小晨宝嘻嘻-=动画速度3;
if(小晨宝嘻嘻<最小长度3){
小晨宝嘻嘻=最小长度3;
}}
ImColor 血量颜色2;
float 左边=glWidth/2-小晨宝嘻嘻/2-初始长度3;
float 右边=glWidth/2+小晨宝嘻嘻/2+初始长度3;
draw->AddRectFilled({左边,65},{右边,120},ImColor(0,0,0,120),5,0);
std::string s;
if(!totalEnemies&&!totalBots){
宽度增加3=false;
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(255,153,204,255),5,0);//背景
s+="安全";
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),63,ImColor(0,248,0),s.c_str());
}else{
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(255,153,204,255),5,0);//背景
s+="人:";
s+=std::to_string((int)totalEnemies);
s+="|";
s+="Bot:";
s+=std::to_string((int)totalBots);
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),65,ImColor(248,248,248),s.c_str());

for(int i=0;i<Actors.size();i++){
auto Actor=Actors[i];
if(isObjectInvalid(Actor))
continue;
if(Actor->IsA(ASTExtraPlayerCharacter::StaticClass())){
ASTExtraPlayerCharacter*Target= NIKE_Aimbot_Thread ();
float Distance=localPlayer->GetDistanceTo(Target)/100.f;
if(Target){
宽度增加3=true;

auto WeaponManagerComponent=Target->WeaponManagerComponent;
if(WeaponManagerComponent){
auto CurrentWeaponReplicated=(ASTExtraShootWeapon*)WeaponManagerComponent->CurrentWeaponReplicated;
std::string s;
std::string ss;
if(CurrentWeaponReplicated){
auto WeaponId=(int)CurrentWeaponReplicated->GetWeaponID();
auto wppp=CurrentWeaponReplicated->GetWeaponID();
auto 当前子弹=CurrentWeaponReplicated->CurBulletNumInClip;
auto 最大子弹=CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
s+="[";
s+=wppp;
s+="]";
if(wppp==107020||wppp==602001||wppp==602002||wppp==602003||wppp==602004||wppp==108001||wppp==1080011||wppp==108002||wppp==108003||wppp==108004||wppp==1080041||wppp==108005||wppp==1080051||wppp==602005){
ss+="[未知]";
}else{
ss+="[";
ss+=std::to_string((int)当前子弹);
ss+="/";
ss+=std::to_string((int)最大子弹);
ss+="]";
}
}else{
s+="[拳头]";
ss+="[未知]";
}
绘制字体描边(20,glWidth/2+75,65,ImColor(248,248,0),s.c_str());
绘制字体描边(20,glWidth/2+75,85,ImColor(248,248,0),ss.c_str());
}

int CurHP=(int)std::max(0,std::min((int)Target->Health,(int)Target->HealthMax));//数量
int MaxHP=100;
血量颜色2=ImColor(0,248,0);
if(Target->Health==0.0f&&!Target->bDead){
血量颜色2=ImColor(248,0,0);
CurHP=Target->NearDeathBreath;
if(Target->NearDeatchComponent){
MaxHP=Target->NearDeatchComponent->BreathMax;
}}
std::string xl="HP:";
xl+=std::to_string((int)CurHP);
绘制字体描边(20,glWidth/2-145,65,血量颜色2,xl.c_str());
std::string jl="距离:";
    jl+=std::to_string((int)Distance);
jl+="M";
绘制字体描边(20,glWidth/2-145,85,ImColor(248,248,248),jl.c_str());
std::string mz=Target->PlayerName.ToString();
auto textSize=ImGui::CalcTextSize(mz.c_str(),0,22);
绘制字体描边(22,glWidth/2-(textSize.x/2),95,ImColor(248,248,248),mz.c_str());
}else{
宽度增加3=false;}}}}}
if (绘制绿) {
g_LocalController = localController;
g_LocalPlayer = localPlayer;   


if(宽度增加3){
小晨宝嘻嘻+=动画速度3;
if(小晨宝嘻嘻>最大长度3){
小晨宝嘻嘻=最大长度3;
}}else{
小晨宝嘻嘻-=动画速度3;
if(小晨宝嘻嘻<最小长度3){
小晨宝嘻嘻=最小长度3;
}}
ImColor 血量颜色2;
float 左边=glWidth/2-小晨宝嘻嘻/2-初始长度3;
float 右边=glWidth/2+小晨宝嘻嘻/2+初始长度3;
draw->AddRectFilled({左边,65},{右边,120},ImColor(0,0,0,120),5,0);
std::string s;
if(!totalEnemies&&!totalBots){
宽度增加3=false;
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(0,255,0,255),5,0);//背景
s+="安全";
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),63,ImColor(0,248,0),s.c_str());
}else{
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(0,255,0,255),5,0);//背景
s+="人:";
s+=std::to_string((int)totalEnemies);
s+="|";
s+="Bot:";
s+=std::to_string((int)totalBots);
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),65,ImColor(248,248,248),s.c_str());

for(int i=0;i<Actors.size();i++){
auto Actor=Actors[i];
if(isObjectInvalid(Actor))
continue;
if(Actor->IsA(ASTExtraPlayerCharacter::StaticClass())){
ASTExtraPlayerCharacter*Target= NIKE_Aimbot_Thread ();
float Distance=localPlayer->GetDistanceTo(Target)/100.f;
if(Target){
宽度增加3=true;

auto WeaponManagerComponent=Target->WeaponManagerComponent;
if(WeaponManagerComponent){
auto CurrentWeaponReplicated=(ASTExtraShootWeapon*)WeaponManagerComponent->CurrentWeaponReplicated;
std::string s;
std::string ss;
if(CurrentWeaponReplicated){
auto WeaponId=(int)CurrentWeaponReplicated->GetWeaponID();
auto wppp=CurrentWeaponReplicated->GetWeaponID();
auto 当前子弹=CurrentWeaponReplicated->CurBulletNumInClip;
auto 最大子弹=CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
s+="[";
s+=wppp;
s+="]";
if(wppp==107020||wppp==602001||wppp==602002||wppp==602003||wppp==602004||wppp==108001||wppp==1080011||wppp==108002||wppp==108003||wppp==108004||wppp==1080041||wppp==108005||wppp==1080051||wppp==602005){
ss+="[未知]";
}else{
ss+="[";
ss+=std::to_string((int)当前子弹);
ss+="/";
ss+=std::to_string((int)最大子弹);
ss+="]";
}
}else{
s+="[拳头]";
ss+="[未知]";
}
绘制字体描边(20,glWidth/2+75,65,ImColor(248,248,0),s.c_str());
绘制字体描边(20,glWidth/2+75,85,ImColor(248,248,0),ss.c_str());
}

int CurHP=(int)std::max(0,std::min((int)Target->Health,(int)Target->HealthMax));//数量
int MaxHP=100;
血量颜色2=ImColor(0,248,0);
if(Target->Health==0.0f&&!Target->bDead){
血量颜色2=ImColor(248,0,0);
CurHP=Target->NearDeathBreath;
if(Target->NearDeatchComponent){
MaxHP=Target->NearDeatchComponent->BreathMax;
}}
std::string xl="HP:";
xl+=std::to_string((int)CurHP);
绘制字体描边(20,glWidth/2-145,65,血量颜色2,xl.c_str());
std::string jl="距离:";
jl+=std::to_string((int)Distance);
jl+="M";
绘制字体描边(20,glWidth/2-145,85,ImColor(248,248,248),jl.c_str());
std::string mz=Target->PlayerName.ToString();
auto textSize=ImGui::CalcTextSize(mz.c_str(),0,22);
绘制字体描边(22,glWidth/2-(textSize.x/2),95,ImColor(248,248,248),mz.c_str());
}else{
宽度增加3=false;}}}}}
if (绘制) {
g_LocalController = localController;
g_LocalPlayer = localPlayer;   


if(宽度增加3){
小晨宝嘻嘻+=动画速度3;
if(小晨宝嘻嘻>最大长度3){
小晨宝嘻嘻=最大长度3;
}}else{
小晨宝嘻嘻-=动画速度3;
if(小晨宝嘻嘻<最小长度3){
小晨宝嘻嘻=最小长度3;
}}
ImColor 血量颜色2;
float 左边=glWidth/2-小晨宝嘻嘻/2-初始长度3;
float 右边=glWidth/2+小晨宝嘻嘻/2+初始长度3;
draw->AddRectFilled({左边,65},{右边,120},ImColor(0,0,0,120),5,0);
std::string s;
if(!totalEnemies&&!totalBots){
宽度增加3=false;
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(0,51,0,255),5,0);//背景
s+="安全";
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),63,ImColor(0,248,0),s.c_str());
}else{
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(0,51,0,255),5,0);//背景
s+="人:";
s+=std::to_string((int)totalEnemies);
s+="|";
s+="Bot:";
s+=std::to_string((int)totalBots);
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),65,ImColor(248,248,248),s.c_str());

for(int i=0;i<Actors.size();i++){
auto Actor=Actors[i];
if(isObjectInvalid(Actor))
continue;
if(Actor->IsA(ASTExtraPlayerCharacter::StaticClass())){
ASTExtraPlayerCharacter*Target= NIKE_Aimbot_Thread ();
float Distance=localPlayer->GetDistanceTo(Target)/100.f;
if(Target){
宽度增加3=true;

auto WeaponManagerComponent=Target->WeaponManagerComponent;
if(WeaponManagerComponent){
auto CurrentWeaponReplicated=(ASTExtraShootWeapon*)WeaponManagerComponent->CurrentWeaponReplicated;
std::string s;
std::string ss;
if(CurrentWeaponReplicated){
auto WeaponId=(int)CurrentWeaponReplicated->GetWeaponID();
auto wppp=CurrentWeaponReplicated->GetWeaponID();
auto 当前子弹=CurrentWeaponReplicated->CurBulletNumInClip;
auto 最大子弹=CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
s+="[";
s+=wppp;
s+="]";
if(wppp==107020||wppp==602001||wppp==602002||wppp==602003||wppp==602004||wppp==108001||wppp==1080011||wppp==108002||wppp==108003||wppp==108004||wppp==1080041||wppp==108005||wppp==1080051||wppp==602005){
ss+="[未知]";
}else{
ss+="[";
ss+=std::to_string((int)当前子弹);
ss+="/";
ss+=std::to_string((int)最大子弹);
ss+="]";
}
}else{
s+="[拳头]";
ss+="[未知]";
}
绘制字体描边(20,glWidth/2+75,65,ImColor(248,248,0),s.c_str());
绘制字体描边(20,glWidth/2+75,85,ImColor(248,248,0),ss.c_str());
}

int CurHP=(int)std::max(0,std::min((int)Target->Health,(int)Target->HealthMax));//数量
int MaxHP=100;
血量颜色2=ImColor(0,248,0);
if(Target->Health==0.0f&&!Target->bDead){
血量颜色2=ImColor(248,0,0);
CurHP=Target->NearDeathBreath;
if(Target->NearDeatchComponent){
MaxHP=Target->NearDeatchComponent->BreathMax;
}}
std::string xl="HP:";
xl+=std::to_string((int)CurHP);
绘制字体描边(20,glWidth/2-145,65,血量颜色2,xl.c_str());
std::string jl="距离:";
jl+=std::to_string((int)Distance);
jl+="M";
绘制字体描边(20,glWidth/2-145,85,ImColor(248,248,248),jl.c_str());
std::string mz=Target->PlayerName.ToString();
auto textSize=ImGui::CalcTextSize(mz.c_str(),0,22);
绘制字体描边(22,glWidth/2-(textSize.x/2),95,ImColor(248,248,248),mz.c_str());
}else{
宽度增加3=false;}}}}}
if (绘制蓝) {
g_LocalController = localController;
g_LocalPlayer = localPlayer;   


if(宽度增加3){
小晨宝嘻嘻+=动画速度3;
if(小晨宝嘻嘻>最大长度3){
小晨宝嘻嘻=最大长度3;
}}else{
小晨宝嘻嘻-=动画速度3;
if(小晨宝嘻嘻<最小长度3){
小晨宝嘻嘻=最小长度3;
}}
ImColor 血量颜色2;
float 左边=glWidth/2-小晨宝嘻嘻/2-初始长度3;
float 右边=glWidth/2+小晨宝嘻嘻/2+初始长度3;
draw->AddRectFilled({左边,65},{右边,120},ImColor(0,0,0,120),5,0);
std::string s;
if(!totalEnemies&&!totalBots){
宽度增加3=false;
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(0,255,255,255),5,0);//背景
s+="安全";
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),63,ImColor(0,248,0),s.c_str());
}else{
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(0,255,255,255),5,0);//背景
s+="人:";
s+=std::to_string((int)totalEnemies);
s+="|";
s+="Bot:";
s+=std::to_string((int)totalBots);
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),65,ImColor(248,248,248),s.c_str());

for(int i=0;i<Actors.size();i++){
auto Actor=Actors[i];
if(isObjectInvalid(Actor))
continue;
if(Actor->IsA(ASTExtraPlayerCharacter::StaticClass())){
ASTExtraPlayerCharacter*Target= NIKE_Aimbot_Thread ();
float Distance=localPlayer->GetDistanceTo(Target)/100.f;
if(Target){
宽度增加3=true;

auto WeaponManagerComponent=Target->WeaponManagerComponent;
if(WeaponManagerComponent){
auto CurrentWeaponReplicated=(ASTExtraShootWeapon*)WeaponManagerComponent->CurrentWeaponReplicated;
std::string s;
std::string ss;
if(CurrentWeaponReplicated){
auto WeaponId=(int)CurrentWeaponReplicated->GetWeaponID();
auto wppp=CurrentWeaponReplicated->GetWeaponID();
auto 当前子弹=CurrentWeaponReplicated->CurBulletNumInClip;
auto 最大子弹=CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
s+="[";
s+=wppp;
s+="]";
if(wppp==107020||wppp==602001||wppp==602002||wppp==602003||wppp==602004||wppp==108001||wppp==1080011||wppp==108002||wppp==108003||wppp==108004||wppp==1080041||wppp==108005||wppp==1080051||wppp==602005){
ss+="[未知]";
}else{
ss+="[";
ss+=std::to_string((int)当前子弹);
ss+="/";
ss+=std::to_string((int)最大子弹);
ss+="]";
}
}else{
s+="[拳头]";
ss+="[未知]";
}
绘制字体描边(20,glWidth/2+75,65,ImColor(248,248,0),s.c_str());
绘制字体描边(20,glWidth/2+75,85,ImColor(248,248,0),ss.c_str());
}

int CurHP=(int)std::max(0,std::min((int)Target->Health,(int)Target->HealthMax));//数量
int MaxHP=100;
血量颜色2=ImColor(0,248,0);
if(Target->Health==0.0f&&!Target->bDead){
血量颜色2=ImColor(248,0,0);
CurHP=Target->NearDeathBreath;
if(Target->NearDeatchComponent){
MaxHP=Target->NearDeatchComponent->BreathMax;
}}
std::string xl="HP:";
xl+=std::to_string((int)CurHP);
绘制字体描边(20,glWidth/2-145,65,血量颜色2,xl.c_str());
std::string jl="距离:";
jl+=std::to_string((int)Distance);
jl+="M";
绘制字体描边(20,glWidth/2-145,85,ImColor(248,248,248),jl.c_str());
std::string mz=Target->PlayerName.ToString();
auto textSize=ImGui::CalcTextSize(mz.c_str(),0,22);
绘制字体描边(22,glWidth/2-(textSize.x/2),95,ImColor(248,248,248),mz.c_str());
}else{
宽度增加3=false;}}}}}
}

//小晨



void 灵动岛初始化3()
{
if(宽度增加3){
小晨宝嘻嘻+=动画速度3;
if(小晨宝嘻嘻>最大长度3){
小晨宝嘻嘻=最大长度3;
}}else{
小晨宝嘻嘻-=动画速度3;
if(小晨宝嘻嘻<最小长度3){
小晨宝嘻嘻=最小长度3;
}}}    

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
static bool 菜单4 = false;/*
static bool 菜单5 = false;*/

std::string Login(const char *user_key) {
    if (!g_App)
        return "Internal Error";

    auto activity = g_App->activity;
    if (!activity)
        return "Internal Error";

    auto vm = activity->vm;
    if (!vm)
        return "Internal Error";

    auto object = activity->clazz;
    if (!object)
        return "Internal Error";

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);

    std::string hwid = user_key;
    hwid += GetAndroidID(env, object);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);

    std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());

    vm->DetachCurrentThread();

    std::string errMsg;

    struct MemoryStruct chunk{};
    chunk.memory = (char *) malloc(1);
    chunk.size = 0;

    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, /*POST*/ StrEnc(",IL=", "\x7C\x06\x1F\x69", 4).c_str());
        std::string sRedLink = "对接地址";

     
        curl_easy_setopt(curl, CURLOPT_URL, sRedLink.c_str());

        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION,1L);
        curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, /*https*/ StrEnc("!mLBO", "\x49\x19\x38\x32\x3C", 5).c_str());
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, /*Content-Type: application/x-www-form-urlencoded*/ StrEnc("@;Ls\\(KP4Qrop`b#d3094/r1cf<c<=H)AiiBG6i|Ta66s2[", "\x03\x54\x22\x07\x39\x46\x3F\x7D\x60\x28\x02\x0A\x4A\x40\x03\x53\x14\x5F\x59\x5A\x55\x5B\x1B\x5E\x0D\x49\x44\x4E\x4B\x4A\x3F\x04\x27\x06\x1B\x2F\x6A\x43\x1B\x10\x31\x0F\x55\x59\x17\x57\x3F", 47).c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        char data[4096];
        sprintf(data, /*game=PUBG&user_key=%s&serial=%s*/ StrEnc("qu2yXK,YkJyGD@ut0.u~Nb'5(:.:chK", "\x16\x14\x5F\x1C\x65\x1B\x79\x1B\x2C\x6C\x0C\x34\x21\x32\x2A\x1F\x55\x57\x48\x5B\x3D\x44\x54\x50\x5A\x53\x4F\x56\x5E\x4D\x38", 31).c_str(), user_key, UUID.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);

        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            try {
                json result = json::parse(chunk.memory);
                if (result[/*status*/ StrEnc("(>_LBm", "\x5B\x4A\x3E\x38\x37\x1E", 6).c_str()] == true) {
                    std::string token = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*token*/ StrEnc("{>3Lr", "\x0F\x51\x58\x29\x1C", 5).c_str()].get<std::string>();
                    time_t rng = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*rng*/ StrEnc("+n,", "\x59\x00\x4B", 3).c_str()].get<time_t>();
                    if (rng + 30 > time(0)) {
                        std::string auth = /*PUBG*/ StrEnc("Q*) ", "\x01\x7F\x6B\x67", 4).c_str();;
                        auth += "-";
                        auth += user_key;
                        auth += "-";
                        auth += UUID;
                        auth += "-";
                        auth += /*Vm8Lk7Uj2JmsjCPVPVjrLa7zgfx3uz9E*/ StrEnc("-2:uwZdV^%]?{{wHs2V,+(^NJU;kC*_{", "\x7B\x5F\x02\x39\x1C\x6D\x31\x3C\x6C\x6F\x30\x4C\x11\x38\x27\x1E\x23\x64\x3C\x5E\x67\x49\x69\x34\x2D\x33\x43\x58\x36\x50\x66\x3E", 32).c_str();
                        std::string outputAuth = Tools::CalcMD5(auth);

                        g_Token = token;
                        g_Auth = outputAuth;

                        bValid = g_Token == g_Auth;
                    }
                } else {
                    errMsg = result[/*reason*/ StrEnc("LW(3(c", "\x3E\x32\x49\x40\x47\x0D", 6).c_str()].get<std::string>();
                }
            } catch (json::exception &e) {
                errMsg = "{";
                errMsg += e.what();
                errMsg += "}\n{";
                errMsg += chunk.memory;
                errMsg += "}";
            }
        } else {
            errMsg = curl_easy_strerror(res);
        }
    }
    curl_easy_cleanup(curl);

    return bValid ? "OK" : errMsg;


}

void anim(){
  
if(openx<740 * 1.0f)
openx += 8.5f;
else if(openx==740 * 1.0f)
openx = 740 * 1.0f;
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
if(openx>740 * 1.0f)
openx -= 8.5f;
else if(openx==740 * 1.0f)
openx = 0 * 0.0f;
/*
if(openy>740 * 0.8f)
openy -= 8.5;
else if(openy==740 * 0.8f)
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

     // 文本颜色
     style->Colors[ImGuiCol_Text] = ImColor(0, 0, 0, 255);

     // 背景颜色
     style->Colors[ImGuiCol_WindowBg] = ImColor(255, 255, 255, 255);

     // 激活后按钮颜色
     style->Colors[ImGuiCol_ButtonActive] = ImColor(255, 192, 203);

     // 边框颜色
     style->Colors[ImGuiCol_Border] = ImColor(255, 131, 250);

     // 框架背景颜色
     style->Colors[ImGuiCol_FrameBg] = ImColor(0, 0, 0, 0);
     style->Colors[ImGuiCol_FrameBgActive] = ImColor(0, 0, 0, 0);
     style->Colors[ImGuiCol_FrameBgHovered] = ImColor(0, 0, 0, 0);

     // 按钮对勾颜色
     style->Colors[ImGuiCol_CheckMark] = ImColor(255, 105, 180);

     // 滚动条小方块颜色
     style->Colors[ImGuiCol_SliderGrab] = ImColor(255, 204, 212);

     // 滚动条颜色
     style->Colors[ImGuiCol_ScrollbarBg] = ImColor(255, 204, 212);
     style->Colors[ImGuiCol_ScrollbarGrab] = ImColor(255, 204, 212);
     style->Colors[ImGuiCol_ScrollbarGrabHovered] = ImColor(255, 204, 212);
     style->Colors[ImGuiCol_ScrollbarGrabActive] = ImColor(255, 204, 212);

     // 滑块抓手颜色
     style->Colors[ImGuiCol_SliderGrabActive] = ImColor(255, 204, 212);

     // 下拉框激活状态背景颜色
     style->Colors[ImGuiCol_PopupBg] = ImColor(255, 255, 255, 255);

     // 分隔线颜色
     style->Colors[ImGuiCol_Separator] = ImColor(70, 70, 70, 255);

     // 人物血量颜色
     style->Colors[ImGuiCol_Header] = ImColor(255, 204, 212);
     style->Colors[ImGuiCol_HeaderActive] = ImColor(255, 204, 212);
     style->Colors[ImGuiCol_HeaderHovered] = ImColor(255, 204, 212);

     // FOV圆圈颜色
     style->Colors[ImGuiCol_FrameBg] = ImColor(255, 204, 212);
     style->Colors[ImGuiCol_FrameBgActive] = ImColor(255, 204, 212);
     style->Colors[ImGuiCol_FrameBgHovered] = ImColor(255, 204, 212);

     // 角标颜色
     style->Colors[ImGuiCol_Separator] = ImColor(255, 106, 106);

     // 屏幕准心颜色
     style->Colors[ImGuiCol_Separator] = ImColor(255, 106, 106);

     ImGui::GetStyle().ScaleAllSizes(1.0f);
     // 透明度
     ImGui::SetNextWindowBgAlpha(1.0f);
     // 设置标题栏居中
     // style.WindowTitleAlign = ImVec2(0.5, 0.5);
     style->FramePadding = ImVec2(12, 12); // 设置标题栏宽度
     // 内距 就是控件距离
     style->ScaleAllSizes(1.0f);
     // 窗口菜单按钮位置(就是窗口标题的那个三角形)(-1无 0左 1右)
     style->WindowMenuButtonPosition = 0;
     // 窗体边框圆角
      style->WindowRounding = 10.0f;
     // 控件圆角
     style->FrameRounding = 5.0f;
     // 框架描边宽度(按钮)
     style->FrameBorderSize = 3.5f;
     //框架描边宽度
     style->WindowBorderSize = 6.5f;

style->ChildRounding = 8.0f; // 子窗口圆角

style->PopupBorderSize = 1.0f; // 弹出窗口边框大小

style->ChildBorderSize = 4.0f; // 子窗口边框大小

style->Alpha = 0.95f; // 界面整体透明度
    
     // 滚动条圆角
     style->ScrollbarRounding = 4.0f;
     // 滚动条宽度
     style->ScrollbarSize = 10.0f;
     // 滑块圆角
     style->GrabRounding = 4.0f;
     // 滑块宽度
     style->GrabMinSize = 24.0f;

     // 初始化代码
        ImGui_ImplAndroid_Init();
        ImGui_ImplOpenGL3_Init("#version 300 es");
		
		ImGuiIO &io = ImGui::GetIO();
        
        io.Fonts->AddFontFromMemoryTTF((void *)小鱼字体_data, 小鱼字体_size, 16.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
            
        memset(&Config, 0, sizeof(sConfig));
        
        Config.ColorsESP.Line = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Box = CREATE_COLOR(255, 0, 255, 255);
        Config.ColorsESP.Fov颜色 = CREATE_COLOR(255,000,000,255);
        InitTexture();//add
        位置 = 0;
        视角 = 110;
        预判 = 1.1;
        屏幕 = true;
        initImGui = true;
    }
    ImGuiIO &io = ImGui::GetIO();
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(glWidth,glHeight);
    ImGui::NewFrame();
//UI
DrawESP(ImGui::GetBackgroundDrawList(),glWidth, glHeight);



static bool 音量键 = true;
for (int i = 0; i < IM_ARRAYSIZE(io.KeysDown); i++) {
    if (ImGui::IsKeyDown(i)) {
     悬浮窗 = true;
         音量键 = !音量键;
    }
}
	//菜单
if (音量键) {
openx += 13.5f;//调节开启的速度
if (openx > 600.0f)//如果到达此数值则固定
{
openx = 600.0f;//固定定义值
}
}else{
openx -= 15.5f;//调节关闭的速度
if (openx < 0.0f)//如果减少到此数值则固定
{
悬浮窗 = false;
openx = 0.0f;//固定定义值
}}
//ImGui::SetNextWindowPos(ImVec2(465, 165), ImGuiCond_FirstUseEver);
ImGui::SetNextWindowSize(ImVec2(openx, 400));
if(音量键 || 悬浮窗){
if (ImGui::Begin(" Qing ", 0, ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar )) {
			    
static bool isLogin = true;

if (!isLogin) {   
            ImGui::Text( "加入:免费获取卡密");  
            ImGui::PushItemWidth(-1);
            static char s[64];
            ImGui::InputText("##key", s, sizeof s);
            ImGui::PopItemWidth();

            if (ImGui::Button("粘贴卡密", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                auto key = getClipboardText();
                strncpy(s, key.c_str(), sizeof s);
            }

            static std::string err;
            if (ImGui::Button("登陆卡密", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                err = Login(s);
                if (err == "OK") {           
                    isLogin = bValid && g_Auth == g_Token;      
                }    
            }

            if (!err.empty() && err != "OK") {

            /* if(ImGui::Button("退出游戏",{-1, 80}))
  {
   exit(1);
  }*/
                   
                ImGui::Text("%s", err.c_str());
                
                    

            }

           
            } else
        {
        

ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, {10 , 6});
if (ImGui::BeginChild("左侧主菜单", ImVec2(150, 0), true,ImGuiWindowFlags_None));    
{
ImGui::Image(Logo.textureId, {130, 130});
ImGui::Separator();//插入分割线
if (ImGui::Button("主页区域",ImVec2(120, 40)))//260
{
菜单 = true;
菜单1 = false;
菜单2 = false;
菜单3 = false;
菜单4 = false;
				//菜单4 = false;
}
/*ImGui::SameLine(20);	
ImGui::Image(FloatBallwc, ImVec2(40 + 0.0,40 + 0.0));     						
ImGui::ItemSize(ImVec2(0, 2));			*/
if (ImGui::Button("绘制区域",ImVec2(120, 40)))//260
{
菜单 = false;
菜单1 = true;
菜单2 = false;
菜单3 = false;
菜单4 = false;
}
/*ImGui::SameLine(20);	
ImGui::Image(FloatBallwv, ImVec2(40 + 0.0,40 + 0.0));     			    		
ImGui::ItemSize(ImVec2(0, 2));*/
if (ImGui::Button("自瞄区域",ImVec2(120, 40)))//260
{
菜单 = false;
菜单1 = false;
菜单2 = true;
菜单3 = false;
菜单4 = false;				//菜单4 = false;
}

/*if (ImGui::Button("子追功能",ImVec2(115, 40)))//260
{
菜单 = false;
菜单1 = false;
菜单2 = false;
菜单3 = false;
				菜单4 = true;
}			
*/


/*ImGui::SameLine(20);	
ImGui::Image(FloatBallwb, ImVec2(40 + 0.0,40 + 0.0));     					 
ImGui::ItemSize(ImVec2(0, 2));*/
if (ImGui::Button("功能区域",ImVec2(120, 40)))//320
{
菜单 = false;
菜单1 = false;
菜单2 = false;
菜单3 = true;
菜单4 = false;				//菜单4 = false;
}



if (ImGui::Button("美化区域",ImVec2(120, 40)))//320
{
菜单 = false;
菜单1 = false;
菜单2 = false;
菜单3 = false;
菜单4 = true;				//菜单4 = false;
}

/*ImGui::SameLine(20);	
ImGui::Image(FloatBallwt, ImVec2(40 + 0.0,40 + 0.0));     		  			    	
ImGui::ItemSize(ImVec2(0, 2));  	*/
ImGui::EndChild();

}
/*
if(菜单5){
						
if (ImGui::BeginChild("清理残留", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{
ImGui::Image(Logo15.textureId, {25, 25});
ImGui::SameLine();
ImGui::Text("残留正在清理");
//std::this_thread::sleep_for(std::chrono::seconds(1));
ImGui::Text("残留1已清理！");
//std::this_thread::sleep_for(std::chrono::seconds(1));
ImGui::Text("残留2已清理！");
//std::this_thread::sleep_for(std::chrono::seconds(1));
ImGui::Text("残留3已清理！");
//std::this_thread::sleep_for(std::chrono::seconds(1));
ImGui::Text("残留4已清理！");
//std::this_thread::sleep_for(std::chrono::seconds(2));
ImGui::SameLine();
ImGui::Text("清理残留已结束！");






ImGui::EndChild();
ImGui::End(); 			
}
}*/






ImGui::SameLine();
if(菜单){
						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{
ImGui::TextColored(ImColor(255,0,0,225), "(CN) 很高兴认识你  (EN) Nice to meet you");
ImGui::Spacing();
ImGui::Text("当前版本:V15 『MKS MOD』");
ImGui::Spacing();
ImGui::TextColored(ImColor(255,0,0,225), "梦想照亮未来 MKS和你同行");
ImGui::Spacing();
ImGui::Text("-耗时 %.3fms   当前帧率 %.1fFPS", 1000.0f / io.Framerate, io.Framerate);
ImGui::Spacing();      
/*    time_t tt_;
    struct tm *tm_ ;
    {
        time(&tt_);              
        tm_ = localtime(&tt_);    
        ImGui::TextColored(ImColor(255,0,0,225),"当前时间:%d年%d月%d日 %02d:%02d:%02d\r", 1900 + tm_->tm_year,
        tm_->tm_mon + 1, tm_->tm_mday, tm_->tm_hour, tm_->tm_min, tm_->tm_sec);
    }*/
    
if (调用3 == true) {
    if (ImGui::Button("清理残留『System』",ImVec2(-1, 70))) {
清理残留 = true;

    调用3 = false;
    }
    } else if (调用3 == false) {
    if (ImGui::Button("清理残留『System』",ImVec2(-1, 70))) {
清理残留 = true;
      
    调用3 = true;
    }
    }
if (ImGui::Button("大厅过检测『Bypass』",{-1, 70})){
Bypass = true;
}

ImGui::Text("当前分辨率: %dx%d", screenWidth,screenHeight);
ImGui::Spacing();
ImGui::TextColored(ImColor(0, 255, 0, 255),("写入模块UE4: 0X%lx\n"),UE4);
ImGui::Spacing();
ImGui::Image(Logo15.textureId, {25, 25});
ImGui::SameLine();
ImGui::Text("PUBG Gamepaid:0×4015");

static const char* colors[] = {"凯撒UI     --永久","粉色UI     --永久", "散兵UI     --永久","流浪UI     --永久","托斯UI     --永久","绿色UI     --永久","白色UI     --永久","遗照UI     --永久","鸡腿UI     --永久","红色UI     --永久"};
static int selectedColor = 8;
ImGui::Combo("悬浮窗颜色", &selectedColor, colors, IM_ARRAYSIZE(colors));
switch (selectedColor) {
    case 0:
        凯撒UI();
        绘制 = true;
        绘制绿 = false;
        绘制蓝 = false;
        绘制粉 = false;
        绘制紫 = false;
        
        break;
    case 1:
        PFSUI();
        绘制 = false;
        绘制绿 = false;
        绘制蓝 = false;
        绘制粉 = true;
        绘制紫 = false;
        屏幕粉 = true;
        break;
    case 2:
        散兵UI();
        绘制 = false;
        绘制绿 = false;
        绘制蓝 = false;
        绘制粉 = false;
        绘制紫 = true;
        屏幕紫 = true;
        break;
    case 3:
        流浪者UI();
        绘制 = false;
        绘制绿 = false;
        绘制蓝 = true;
        绘制粉 = false;
        绘制紫 = false;
        屏幕蓝 = true;
        break;        
    case 4:
        巴巴托斯UI();
        绘制 = false;
        绘制绿 = true;
        绘制蓝 = false;
        绘制粉 = false;
        绘制紫 = false;
        屏幕青 = true;
        break;
    case 5:
        绿();
        绘制 = false;
        绘制绿 = true;
        绘制蓝 = false;
        绘制粉 = false;
        绘制紫 = false;
        屏幕青绿 = true;
        break;
    case 6:
        白();
        绘制 = false;
        绘制绿 = false;
        绘制蓝 = false;
        绘制粉 = false;
        绘制紫 = false;
        绘制白 = true;
        屏幕白 = true;
        break;
    case 7:
        黑白();
        绘制 = false;
        绘制绿 = false;
        绘制蓝 = false;
        绘制粉 = false;
        绘制紫 = false;
        绘制白 = false;
        绘制黑 = true;
        屏幕灰 =true;
        break;
    case 8:
        鸡腿();
        绘制 = false;
        绘制绿 = false;
        绘制蓝 = false;
        绘制粉 = false;
        绘制紫 = false;
        绘制白 = false;
        绘制黑 = false;
        绘制鸡腿 = true;
        屏幕科技 = true;
        break;
    case 9:     
        红色风暴();
        屏幕红 = true;
        break;
}





/*ImGui::Image(Logo11.textureId, {25, 25});
ImGui::SameLine();
ImGui::TextColored(ImColor(255,0,0,225), "> @MKSYYDS");
ImGui::SameLine();*/
/*ImGui::Text("服务器已连接 %.hf秒 %c", "|/-\\"[(int)(ImGui::GetTime() / 0.05f) & 3]);
				static float values[90]    = {};
                    static int values_offset   = 0;
                    static double refresh_time = 0.0;
                    while( refresh_time < ImGui::GetTime() ) 
                    {
                    static float phase    = 0.0f;
                    values[values_offset] = cosf( phase );
                    values_offset = ( values_offset + 1 ) % IM_ARRAYSIZE( values );
                    phase += 0.10f * values_offset;
                    refresh_time += 1.0f / 60.0f;
                    }
        
                    char overlay[32] = "";
                    ImGui::PlotLines("", values, IM_ARRAYSIZE( values ), values_offset, overlay, -1.0f, 1.0f, ImVec2( 0,20.0f ) );
                    ImGui::SameLine();
                    ImGuiIO io = ImGui::GetIO();
                    ImGui::Text( "%.2f ms", 1000 / io.Framerate );*/
			    


//ImGui::SliderFloat("雷达X轴坐标", &雷达X, 0.0f, 500.0f);
//ImGui::SliderFloat("雷达Y轴坐标", &雷达Y, 0.0f, 300.0f);      
//ImGui::TextColored(ImGui::GetStyle().Colors[ImGuiCol_Text], "前设备分辨率为: %dx%d", screenx, screeny);

/*ImGui::TextColored(ImColor(255,0,0,225), "logo防封");
ImGui::Checkbox("全局离线", &全局离线);
ImGui::SameLine();
ImGui::Checkbox("半杀67", &半杀67);
ImGui::SameLine();
ImGui::Checkbox("测试初步分析", &全杀67);*/
ImGui::EndTabItem();   
} 
}
if(菜单1){
						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{
ImGui::Spacing();

ImGui::Spacing();
if (ImGui::Button("显示主要",{-1,75}))   
{
射线 = true;
骨骼 = true;
血量 = true;
信息 = true;
方框 = true;
投掷物 = true;
骨灰盒 = true;
背敌 = true;
}
ImGui::Separator();//插入分割线

/*
ImGui::SameLine();   
if (ImGui::Button("注入大厅防封",{250,75}))   
{
剩下人数 = true;
射线 = true;
骨骼 = true;
血量 = true;
信息 = true;
方框 = true;
投掷物 = true;
手持 = true;
背敌 = true;
}	*/
ImGui::Spacing();
ImGui::Combo("绘制选择", (int *) &HZT, "玩家绘制[1]\0" "玩家绘制[2]\0");

//ImGui::TextColored(ImColor(蓝色), "(PN) 绘制菜单  (EN) ESP Menu");
ImGui::Checkbox("绘制方框", &方框);
ImGui::SameLine();
ImGui::Checkbox("绘制射线", &射线);
ImGui::SameLine();
ImGui::Checkbox("绘制骨骼", &骨骼);
                    
ImGui::Checkbox("绘制名称", &信息);
ImGui::SameLine();
ImGui::Checkbox("绘制血量", &血量);
ImGui::SameLine();
ImGui::Checkbox("忽略人机", &隐藏人机);        
            
ImGui::Checkbox("背敌预警", &背敌);
ImGui::SameLine();
ImGui::Checkbox("绘制手持", &手持);
ImGui::SameLine();
ImGui::Checkbox("投掷预警", &投掷物);

ImGui::Checkbox("绘制狗子", &狗子);
ImGui::SameLine();
ImGui::Checkbox("绘制箱子", &箱子);
ImGui::SameLine();
ImGui::Checkbox("悬浮准心", &悬浮准星);

ImGui::Checkbox("绘制载具", &载具);
ImGui::SameLine();
ImGui::Checkbox("绘制盒子", &骨灰盒);
ImGui::SameLine();
ImGui::Checkbox("防闪退", &初始化);


} }

if(菜单2){
						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{
ImGui::SameLine();
if (ImGui::Button("载入自瞄",ImVec2(200, 35))){
自动瞄准 = true;

}
ImGui::SameLine();
if (ImGui::Button("函数追踪",ImVec2(200, 35))){
函数追踪 = true;

}
ImGui::Separator();//插入分割线
if (ImGui::CollapsingHeader("追踪函数")) {			
ImGui::Spacing();
ImGui::Text("函数1不能打鸟是用来上分的\n函数2可以打鸟用来全火娱乐的！");
ImGui::Text("请根据自己的使用需求来选择\n打完一把之后记得关闭哦～否则闪退！");
static int 激活 = 1;
ImGui::RadioButton("没有～", &激活,1);
ImGui::SameLine();
ImGui::RadioButton("函数1", &激活,2);
ImGui::SameLine();
ImGui::RadioButton("函数2", &激活,3);
        switch (激活) {
  case 1:
  函数1 = false;
  函数2 = false;
                break;                 
            case 2:
  函数1 = true;
  函数2 = false;
                break;            
                case 3:
                 函数1 = false;
                 函数2 = true;
                break;                
}
}


ImGui::Checkbox("倒地", &忽略倒地);
ImGui::SameLine();
ImGui::Checkbox("人机", &忽略人机);
ImGui::SameLine();
ImGui::Checkbox("判断", &掩体分辨);

ImGui::Checkbox("动态", &动态);
ImGui::SameLine();
ImGui::Checkbox("准星辅助", &悬浮准星);
ImGui::SameLine();
ImGui::Checkbox("冲力归0", &动态);
ImGui::Spacing();
ImGui::Text("自瞄参数设置");
ImGui::SliderFloat("X轴速度",&Speed_X, 1.0,10.00f);
ImGui::SliderFloat("Y轴速度",&Speed_Y, 1.0,10.00f);
ImGui::Text("Aim设置-方式");
                           
static const char *targets[] = {"头", "身体"};
ImGui::Combo("", (int *) &Config.Bullet360.Target, targets, 2, -1);			
static const char *triggers[] = {"触发方式", "开火", "开镜", "开火且开镜", "开火或开镜"};
ImGui::Combo("##Trigger", (int *) &Config.AimBot.Trigger, triggers, 5, -1);
/*ImGui::Checkbox("人物广角", &上帝视角);
ImGui::SliderFloat("广角调节", &视角, 0.0f, 120.0f);*/
//ImGui::Text("屏幕 = 普通圈圈 | 人物 = 动态圈圈");
ImGui::EndChild();
ImGui::End(); 		
                        
                        
/*
                        ImVec2 aimbotWindowPos = ImGui::GetWindowPos(); 
                        ImVec2 aimbotWindowSize = ImGui::GetWindowSize();

                        ImVec2 basicWindowPos = ImVec2(aimbotWindowPos.x + aimbotWindowSize.x + 0, aimbotWindowPos.y - 0); 
                        ImVec2 basicWindowSize = ImVec2(ImGui::GetWindowWidth() - aimbotWindowSize.x - 80, ImGui::GetWindowHeight());
                        
                        const ImVec2 minWindowSize = ImVec2(400, 400);
                       // ImGui::SetNextWindowBgAlpha(1.0);
                        ImGui::SetNextWindowSizeConstraints(minWindowSize, ImVec2(FLT_MAX, FLT_MAX));
                        ImGui::SetNextWindowPos(basicWindowPos); 
                        ImGui::SetNextWindowSize(basicWindowSize); 
                        ImGui::Begin("配置", nullptr, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar); 
                        if (ImGui::BeginChild("##绘图", ImVec2(0, 0), true, ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NavFlattened)) {
                        ImGui::TextColored(ImColor(255,0,0), "你是心头惊鸿客，亦是眉上伤心人");   
                        
                        ImGui::SliderFloat("持续时间", &持续时间, 0.00f, 60.00f, "%.2f", 1);    
                        
                        
                        ImGui::SliderFloat("自瞄距离", &距离, 0.0f, 350.0f, "%.2f", 2);      
                                                
                        ImGui::SliderFloat("自瞄范围", &FOV, 0.0f, 350.0f, "%.2f", 2);
                          
                        ImGui::SliderFloat("子弹下坠", &压枪, 0.0f, 2.0f, "%.2f", 3);     
                                  
                        ImGui::SliderFloat("自瞄预判", &Aim_Anticipation, 0.0f, 1.0f,"%.2f",2);
                        
    					ImGui::SliderFloat("预判距离", &预判距离, 0.0f, 200, "%.2f", 4);        
    				     
                        ImGui::SliderFloat("追踪范围", &追踪,0.0f,249.520f,"%.0f", 2);
                        
                        ImGui::SliderFloat("命中率", &命中率, 0.0f, 1.0f);*/
}
}
if(菜单4){
						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{
ImGui::Text("使用美化前先下载资源包 不然没有效果");
ImGui::Spacing();
ImGui::Text("衣服美化");
ImGui::Spacing();
ImGui::Separator();//插入分割线

if (ImGui::CollapsingHeader("衣服美化")) {			
ImGui::Spacing();
ImGui::Text("美化开启可能会封一天\n请根据自己的需求选择哦！");
ImGui::Text("服装选择\n打完一把之后记得关闭哦～否则闪退！");
ImGui::RadioButton("胖达", &胖达);
ImGui::SameLine();
ImGui::RadioButton("蓝木乃伊", &蓝木乃伊);
ImGui::SameLine();
ImGui::RadioButton("动态果冻", &果冻);


}

ImGui::EndChild();
ImGui::End(); 			
}
}

if(菜单3){
						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{

/*
ImGui::Checkbox("马可", &马可);
ImGui::SameLine();
ImGui::Checkbox("六道", &六道);
ImGui::SameLine();
ImGui::Checkbox("显伤", &显伤);
ImGui::SameLine();
ImGui::Checkbox("翻墙", &翻墙);=
//ImGui::TextColored(ImColor(蓝色), "(PN) 绘制菜单  (EN) ESP Menu");*/
/*
ImGui::Checkbox("三鹿奶粉", &三鹿奶粉);   
ImGui::SameLine();
ImGui::Checkbox("配件美化", &配件美化);
ImGui::SameLine();
ImGui::Checkbox("全枪美化", &全枪美化);*/
if (ImGui::Combo("自选衣服", &style_sn, "果冻1 \0金尊法老2\0丁香公主3\0猴子4\0娇俏仙灵5\0蓝色木乃伊6\0曙光芙洛拉7\0丧尸美化8\0明日香9\0胖达10\0")) {
switch (style_sn) 
{
case 0:
衣服数值 = 1406970;
break;
case 1:
衣服数值 = 1405628;
break;
case 2:
衣服数值 = 1407229;
break;
case 3:
衣服数值 = 1402627;
break;
case 4:
衣服数值 = 1407165;
break;
case 5:
衣服数值 = 1406891;
break;
case 6:
衣服数值 = 1407103;
break;
case 7:
衣服数值 = 1407195;
break;
case 8:
衣服数值 = 1406381;
break;
case 9:
衣服数值 = 1405039;
break;
}          
}
if (ImGui::Combo("自选播报", &style_idx, "冰霜核心击杀播报 \0死噶血魂魔皇击杀播报\0QBZ瑰绮灵姬击杀播报\0星云力量击杀播报\0魔力结晶击杀播报\0")) {
switch (style_idx) 
{
case 0:
播报数值 = 1101004046;
break;
case 1:
播报数值 = 1101003167;
break;
case 2:
播报数值 = 1101007046;
break;
case 3:
播报数值 = 1103007020;
break;
case 4:
播报数值 = 1101003119;
break;
}          
}
if (ImGui::Combo("自选手持", &style_fox, "冰霜核心 \0死噶血魂魔\0QBZ瑰绮灵姬\0星云妹控\0魔力结晶\0龙吟妹控\0")) {
switch (style_fox) 
{
case 0:
枪械值 = 1101004046;
break;
case 1:
枪械值 = 1101003167;
break;
case 2:
枪械值 = 1101007046;
break;
case 3:
枪械值 = 1103007020;
break;
case 4:
枪械值 = 1101003119;
break;
case 5:
枪械值 = 1103007028;
break;
}          
}
ImGui::Spacing();    
ImGui::Checkbox("衣服美化", &自选美化);
ImGui::SameLine();
ImGui::Checkbox("播报美化", &播报美化);
ImGui::SameLine();
ImGui::Checkbox("手持美化", &冰霜核心);
/*ImGui::TextColored(ImColor(255,0,0,225), "(PN) 物资绘制");
ImGui::Spacing();    
//ImGui::TextColored(ImColor(蓝色), "(PN) 绘制菜单  (EN) ESP Menu");
ImGui::Checkbox("步枪绘制", &步枪);
ImGui::SameLine();
ImGui::Checkbox("冲锋系列", &冲锋枪);
ImGui::SameLine();
ImGui::Checkbox("子弹绘制", &子弹);
                    
ImGui::Checkbox("配件绘制", &配件);
ImGui::SameLine();
ImGui::Checkbox("倍镜绘制", &倍镜);
ImGui::SameLine();
ImGui::Checkbox("其他绘制", &其他);

ImGui::Checkbox("地铁绘制", &变卖物);
ImGui::SameLine();
ImGui::Checkbox("特殊绘制", &特殊);
ImGui::SameLine();
ImGui::Checkbox("头盔护甲", &头盔);

ImGui::Checkbox("手枪绘制", &手枪);

ImGui::SameLine();
ImGui::Checkbox("散弹系列", &散弹枪);
ImGui::SameLine();
ImGui::Checkbox("狙击系列", &狙击枪);
ImGui::Checkbox("近战武器", &近战武器);
ImGui::SameLine();
ImGui::Checkbox("药品绘制", &药品);
/*ImGui::SameLine();
ImGui::Checkbox("物资绘制", &物资);*/
ImGui::Checkbox("广角", &广角);
ImGui::SameLine();
ImGui::Checkbox("下雨", &下雨);
ImGui::SameLine();
ImGui::Checkbox("除雾", &除雾);

ImGui::Checkbox("下雪", &下雪);
ImGui::SameLine();
ImGui::Checkbox("黑天", &黑天);
ImGui::SameLine();
ImGui::Checkbox("90帧率", &九十);
  
ImGui::Checkbox("基址聚点", &聚点1);
ImGui::SameLine();
ImGui::Checkbox("基址无后", &无后1);
ImGui::SameLine();
ImGui::Checkbox("基址防抖", &防抖1);

ImGui::Checkbox("基址广角", &广角1);

ImGui::EndTabItem();   

} 

}  
if (音乐菜单) {	          
ImGui::Begin("音乐菜单",&音乐菜单);     
/*if (ImGui::Button("原神启动")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=2056964874.mp3");
        }        
  
        ImGui::SameLine();
        if (ImGui::Button("恐怖模式")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=1950940221.mp3");
        }   
        
        ImGui::SameLine();
        if (ImGui::Button("最后一页")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=247936.mp3");
        }   '
        
        ImGui::SameLine();
        if (ImGui::Button("起风了O")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=1330348068.mp3");
        }   
        
        ImGui::TableNextColumn();   
        if (ImGui::Button("凄美地O")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=2004333593.mp3");
        } 
        
        ImGui::SameLine();
        if (ImGui::Button("向云端O")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=2049512697.mp3");
        }   
        
        ImGui::SameLine();
        if (ImGui::Button("把回忆拼好给你O")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=1403318151.mp3");
        }   
        
        ImGui::TableNextColumn();   
        if (ImGui::Button("最好的安排")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=1905004937.mp3");
        }  
        
        ImGui::SameLine();
        if (ImGui::Button("雪距离O")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=2026224214.mp3");
        }    
        
        ImGui::SameLine();
        if (ImGui::Button("可不可以")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=553755659.mp3");
        }   
        
         ImGui::SameLine();
        if (ImGui::Button("若把你O")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=865632948.mp3");
        }   
        
        ImGui::TableNextColumn();   
        if (ImGui::Button("LettingGo")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=208891.mp3");
        }   
        
        ImGui::SameLine();
        if (ImGui::Button("武家坡O")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=1991056669.mp3");
        }   
        
        ImGui::SameLine();
        if (ImGui::Button("过去生活")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=1308782023.mp3");
        }   
        
        ImGui::SameLine();
        if (ImGui::Button("我知道你")) {
        播放音乐("http://music.163.com/song/media/outer/url?id=1308782023.mp3");
        }                  */
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
while (true) {auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
std::vector<sRegion> tmp;
char line[512];FILE *f = fopen("/proc/self/maps", "r");if (f) {while (fgets(line, sizeof line, f)) {uintptr_t start, end;char tmpProt[16];
if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %16s %*s %*s %*s %*s", &start, &end, tmpProt) > 0) {if (tmpProt[0] != 'r') {
tmp.push_back({start, end});}}}fclose(f);}trapRegions = tmp;auto objs = UObject::GetGlobalObjects();

for (int i = 0; i < objs.Num(); i++) {
auto Object = objs.GetByIndex(i);if (isObjectInvalid(Object))continue;

if (平板视角) {
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainYFOV;
}	
} else
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainXFOV;
}
                
if (广角) {
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainYFOV;}}
else if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainXFOV;}

if (除雾) {
if (Object->IsA(UExponentialHeightFogComponent::StaticClass())) {
auto playerChar = (UExponentialHeightFogComponent *) Object;
playerChar->SetFogMaxOpacity(0.0f);
playerChar->SetFogDensity(0.0f);
playerChar->SetFogHeightFalloff(0.0f);
playerChar->SetFogCutoffDistance(0.0f);
playerChar->SetStartDistance(0.0f);}}

}

            
            if (九十) {
            auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
                if (Object->IsA(USTExtraGameInstance::StaticClass())) {
                auto SDK_USTExtraGameInstance = (USTExtraGameInstance *) Object;   
                
              
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSDef = 90;   
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSLow = 90;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSMid = 90; //TG：@heihuamods
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSHigh = 90;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSHDR = 90;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSUltralHigh = 90; //TG：@heihuamods
            } //TG：@heihuamods
         }
         }
                
                
        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));}}


size_t hook_strlen(const char *thread)
{
    if (strstr(thread, "eglSwapBuffers"))
    {
        return 0;
    }
    return strlen(thread);
}

//HOOK_LIB_NO_ORIG("libUE4.so","0x42743F8",hook_strlen);
//X64 防止EGL追封

int (*osub_363FB8)(int a1, const char *a2, int a3, int a4);
int sub_363FB8(int a1, const char* a2, int a3, int a4) {

    if (strstr((const char *) a2,"lib") != nullptr)
    
    { //
    
        return 0;
        
    } //
    
    return osub_363FB8(a1, a2, a3, a4);
    
    }  //
__int64 __fastcall (*osub_51726AC)(__int64 result, int a1);
__int64 __fastcall sub_51726AC(__int64 result, int a1)
{ 
   if (a1 == 101004)
   {
      a1 = 1101004046; //new_Skin.M416_1
   }          
   return osub_51726AC(result, a1);
}
__int64 __fastcall (*sub_18B4EC)(const char *a1, unsigned int a2);
__int64 __fastcall hsub_18B4EC(const char *a1, unsigned int a2)
{
while (true) {
sleep(1);
}
return sub_18B4EC(a1, a2);
}
int (*oEgl_Check)(int a1, const char *a2);
int Egl_Check(int a1, const char *a2) {   
      if ( strstr((const char *) a2,"egl"))
      
{
        LOGI(OBFUSCATE("Blocked Strlen caller | %p"), a2);
        return 0;
    }
    else
    {
        LOGI(OBFUSCATE("Allowed Strlen caller | %p"), a2);
        return oEgl_Check(a1,a2);
    }
}

	int (*osub_1B99A4)(const char *a1, unsigned int a2);
int hsub_1B99A4(const char *a1, unsigned int a2)
{
    while(true)
    {
        sleep(10000);
    }
    return osub_1B99A4(a1,a2);
}

int (*osub_12BA2C)(const char* a1, unsigned int a2);
int hsub_12BA2C(const char* a1, unsigned int a2) {
    std::this_thread::sleep_for(std::chrono::hours::max());
    return osub_12BA2C(a1, a2);
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



//方块
/*
int fastcall (*osub_3CA5C0)(const char *a1, unsigned int a2);
int fastcall hsub_3CA5C0(const char *a1, unsigned int a2)
{
 while(true)
 {
  sleep(10000);
 }
 return osub_3CA5C0(a1, a2);
}

int fastcall (*osub_43A880)(const char *a1, unsigned int a2);
int fastcall hsub_43A880(const char *a1, unsigned int a2)
{
 while(true)
 {
  sleep(10000);
 }
 return osub_43A880(a1, a2);
}

int fastcall (*osub_11A854)(const char *a1, unsigned int a2);
int fastcall hsub_11A854(const char *a1, unsigned int a2)
{
 while(true)
 {
  sleep(10000);
 }
 return osub_11A854(a1, a2);
}

void *旁路_thread(void *) {
       do {
        sleep(1);
    } while (!isLibraryLoaded("libanogs.so"));
HOOK_LIB("libanogs.so","0x3CA5C0",hsub_3CA5C0,osub_3CA5C0);
HOOK_LIB("libanogs.so","0x43A880",hsub_43A880,osub_43A880);
HOOK_LIB("libanogs.so","0x11A854",hsub_11A854,osub_11A854);    
return NULL;   
}*/
 

__int64 __fastcall (*osub_3D03F8)(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3);
__int64 __fastcall sub_3D03F8(__int64 a1, unsigned  __int64 a2, int a3, char a4){
return 0LL;
}
__int64 __fastcall (*osub_81EC)(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3);
__int64 __fastcall sub_81EC(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3){
return 0LL;
}
__int64 __fastcall (*osub_0x536460)(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3);
__int64 __fastcall sub_0x536460(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3){
return 0LL;
}
__int64 __fastcall (*org_sub_0x535444)(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3);
__int64 __fastcall hook_sub_0x535444(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3){
return 0LL;
}


__int64 __fastcall (*osub_532DF8)(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3);
__int64 __fastcall sub_532DF8(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3){
return 0LL;
}
__int64 __fastcall (*osub_24FA8)(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3);
__int64 __fastcall sub_24FA8(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3){
return 0LL;
}
__int64 __fastcall (*osub_0x3B058)(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3);
__int64 __fastcall sub_0x3B058(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3){
return 0LL;
}

__int64 __fastcall (*hooksub_12BA2C)(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3);
__int64 __fastcall sub_12BA2C(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3){
return 0LL;
}


__int64 __fastcall (*hooksub_15987C)(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3);
__int64 __fastcall sub_15987C(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3){
return 0LL;
}
 __int64 __fastcall (*osub_133180)(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3);
__int64 __fastcall hsub_133180(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3){
return 0LL;
}

__int64 __fastcall (*oFixAimBotBan)(__int64 result);
__int64 __fastcall FixAimBotBan(__int64 result) {
    result = 0;
    if ( (result & 1) != 0 ) {
    return (
"F:\\Release3.3.0\\AS\\Survive\\Source\\ShadowTrackerExtra\\CustomComponent\\PlayerSlideComponent.cpp", 0LL, 0LL, 0LL, "P", 0LL, *(unsigned int *)(0LL));
    }
    return result;
    return oFixAimBotBan(result);
}

__int64 __fastcall (*osub_3CA5C0)(const char *a1, unsigned int a2);
__int64 __fastcall hsub_3CA5C0(const char *a1, unsigned int a2)
{
 while(true)
 {
  sleep(10000);
 }
 return osub_3CA5C0(a1, a2);
}

__int64 __fastcall (*osub_43A880)(const char *a1, unsigned int a2);
__int64 __fastcall hsub_43A880(const char *a1, unsigned int a2)
{
 while(true)
 {
  sleep(10000);
 }
 return osub_43A880(a1, a2);
}

__int64 __fastcall (*osub_11A854)(const char *a1, unsigned int a2);
__int64 __fastcall hsub_11A854(const char *a1, unsigned int a2)
{
 while(true)
 {
  sleep(10000);
 }
 return osub_11A854(a1, a2);
}




/* 作者 @ZeroRyxTeam 官方频道 @ZEROTEAMCN */
/* 修复来自关于 SDK 内存自瞄的禁令,使用他可以修复所有来自 SDK 内存自瞄的禁令
*提示: 他并不能修复其他的禁令,您无法只用他完成所有的过检测 */

/* Author @ZeroRyxTeam Official Channel @ZEROTEAMCN */
/* Fix the ban on SDK memory AimBot, using it can fix all bans from SDK memory AimBot * Tip: It cannot fix other bans, and you cannot use it alone to complete all over checks */

__int64 __fastcall (*osub_415C28)(const char *a1, unsigned int a2);
__int64 __fastcall hsub_415C28(const char *a1, unsigned int a2)
{
 while(true)
 {
  sleep(10000);
 }
 return osub_415C28(a1, a2);
}




 

void *修复自瞄_thread(void *) {
       do {
        sleep(1);
    } while (!isLibraryLoaded("libUE4.so"));
HOOK_LIB("libUE4.so", "0x4F7CD58", FixAimBotBan, oFixAimBotBan);
HOOK_LIB("libUE4.so", "0x4F7CFE4", FixAimBotBan, oFixAimBotBan);
HOOK_LIB("libUE4.so", "0x4F7E128", FixAimBotBan, oFixAimBotBan);
HOOK_LIB("libUE4.so", "0x4F7E6A0", FixAimBotBan, oFixAimBotBan);


return NULL;   
}
 
void *修复禁令_thread(void *) {
       do {
        sleep(1);
    } while (!isLibraryLoaded("libanogs.so"));
HOOK_LIB("libanogs.so","0x3CA5C0",hsub_3CA5C0,osub_3CA5C0);
HOOK_LIB("libanogs.so","0x43A880",hsub_43A880,osub_43A880);
HOOK_LIB("libanogs.so","0x11A854",hsub_11A854,osub_11A854);
HOOK_LIB("libanogs.so","0x415C28",hsub_415C28,osub_415C28);
return NULL;   
}
 
 
 void *aviwa_thread(void *) {
    LOGI(OBFUSCATE("pthread created"));
    do {    
   sleep(1);
    } while (!isLibraryLoaded(targetLibName));    
    
    return NULL;
}

void *修复追封_thread(void *) {
       do {
        sleep(1);
    } while (!isLibraryLoaded("libanogs.so"));
    
return NULL;   
}


void *HOOK防闪_thread(void *) {
       do {
        sleep(1);
    } while (!isLibraryLoaded("libanort.so"));
    LOGI("libUE4.so: %p", UE4);
 PATCH_LIB("libanogs.so","0x53AA98","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0x53AAC8","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0x572B40","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0x572C00","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDB960","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDB990","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDB9B0","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDBA80","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDBAA0","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDBC00","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDBCD0","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDBD70","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDBE90","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDBEE0","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDBF90","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDBFA0","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDC2E0","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDC330","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDC340","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDC450","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDC4F0","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDC580","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xDC5B0","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","00x3ca874" ,"01 03 00 04");
PATCH_LIB("libanogs.so","00x3ca95c" ,"01 03 00 04");
PATCH_LIB("libanogs.so","00x3ca970" ,"01 03 00 04");
PATCH_LIB("libanogs.so","00x3ca9f4" ,"01 03 00 04");
PATCH_LIB("libanogs.so","00x3caa18" ,"01 03 00 04");
PATCH_LIB("libanogs.so","00x3cab14" ,"01 03 00 04");
PATCH_LIB("libanogs.so","00x3cab58" ,"01 03 00 04");
PATCH_LIB("libanogs.so","00x3cbdfc" ,"01 03 00 04");
PATCH_LIB("libanogs.so","00x3dc858" ,"01 03 00 04");
HOOK_LIB("libanort.so","0x18B4EC",hsub_18B4EC,sub_18B4EC);//修复EGL - fix Egl
HOOK_LIB("libanort.so","0x18AE7C","00 00 80 D2 C0 03 5F D6");//修复崩溃 - fix crash
HOOK_LIB("libanort.so","0x1A76C4","00 00 80 D2 C0 03 5F D6");//过效验 - Verification

HOOK_LIB("libanort.so","0x12B3DC",hsub_12BA2C,osub_12BA2C);//修复闪退
HOOK_LIB("libanort.so","0x12BA2C",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B00",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B04",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B08",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B0C",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B10",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B14",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B18",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B1C",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B20",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B24",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B28",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B2C",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B30",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B34",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B38",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B3C",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B40",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B44",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B48",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B4C",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B50",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B54",hsub_12BA2C,osub_12BA2C);
HOOK_LIB("libgcloud.so","0x7892CB5B58",hsub_12BA2C,osub_12BA2C);

HOOK_LIB("libanogs.so", "0x15DB50", "h00 00 00 00");
HOOK_LIB("libanogs.so", "0x15DB44", "h00 00 00 00");
HOOK_LIB("libanogs.so", "0x15D3F8", "h00 00 00 00");
HOOK_LIB("libanogs.so", "0x15D3D0", "h00 00 00 00");
HOOK_LIB("libanogs.so", "0x15D344", "h00 00 00 00");
HOOK_LIB("libanogs.so", "0x15C03C", "h00 00 00 00");
HOOK_LIB("libanogs.so", "0x1f3eb0", "h00 00 00 00");
HOOK_LIB("libanogs.so", "0x1d3f04", "h00 00 00 00");


PATCH_LIB("libanogs.so", "0x158718", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x15871C", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158728", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158734", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158738", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158D80", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158DA0", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158DA8", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158DB0", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158DB8", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158DC8", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158E18", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158F74", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158F8C", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158F90", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x158F94", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x159874", "00 00 80 D2 C0 03 5F D6");//FIX
PATCH_LIB("libanogs.so", "0x159FEC", "00 00 80 D2 C0 03 5F D6");//FIX
 HOOK_LIB_NO_ORIG("libUE4.so","0x42743F8",hook_sstrlen);


    return 0;
}

__attribute__((constructor))
void lib_main()
{
	pthread_t ptid4;
	pthread_t t;
	pthread_t ptid2;
	pthread_t ptid3;
	pthread_t ptid1;
	pthread_t ptid;
  pthread_create(&ptid4, NULL, aviwa_thread, NULL);
	pthread_create(&t, NULL, HOOK防闪_thread, NULL);
    pthread_create(&t, NULL, 修复追封_thread, NULL);
    pthread_create(&t, NULL, 修复自瞄_thread, NULL);
	pthread_create(&ptid, NULL, NIKEHome_thread, NULL);
	pthread_create(&ptid2, NULL, hack_thread, NULL);
}

