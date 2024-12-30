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
float ScreenX = 3;
float ScreenY = 4;
float SagZ = 0.81;
float Anticipation = 0.170;//预判
float 预判距离 = 120;//预判
int style_idx = 0;
int style_zt = 0;
int style_cd = 0;
int style_zx = 0;
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
bool 初始化;

float 追踪距离 = 200;
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
static bool is头,is脖子,is盆骨,is左上臂,is左小臂,is左手,is左大腿,is左小腿,is左脚,is右上臂,is右小臂,is右手,is右大腿,is右小腿,is右脚;
//==定义
bool 马可;
bool 变大;
static int 算法 = 0;
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


/*




if(绘图){
g_LocalController = localController;
g_LocalPlayer = localPlayer;   


灵动岛初始化3();
ImColor 血量颜色2;
float 左边=glWidth/2-小晨宝嘻嘻/2-初始长度3;
float 右边=glWidth/2+小晨宝嘻嘻/2+初始长度3;
draw->AddRectFilled({左边,65},{右边,120},ImColor(0,0,0,120),5,0);
std::string s;
if(!totalEnemies&&!totalBots){
宽度增加3=false;
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(0,0,0,120),5,0);//背景
s+="安全";
auto textSize=ImGui::CalcTextSize(s.c_str(),0,25);
绘制字体描边(26,(glWidth/2)-(textSize.x/2),63,ImColor(0,248,0),s.c_str());
}else{
draw->AddRectFilled({glWidth/2-70,65},{glWidth/2+70,95},ImColor(0,0,0,120),5,0);//背景
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
ASTExtraPlayerCharacter*Target=GetTargetForAimBot();
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





//小晨
*/
bool 药品;
bool Bypass =true;
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
return true;
int circle_x = glWidth / 2;
int circle_y = glHeight / 2;
int rad =FOV;
return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
auto GETTargetForAimBot() {
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
                


                if (忽略倒地) {
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
const float CHEST_OFFSET = 5.0f; // 定义胸部偏移量
    //=================///
  if (子追) {
ASTExtraPlayerCharacter *Target = GetTargetByRuiRui();
if (Target) {
// 获取目标位置，并根据配置调整
FVector targetAimPos = Target->GetBonePos("Head", {});
if (Config.Bullet360.Target == EAimTarget::Chest) {
targetAimPos.Z -= CHEST_OFFSET;
}
FRotator sex = ToRotator(start, targetAimPos);
targetAimPos.Z -= g_LocalController->LineOfSightTo(g_LocalController->PlayerCameraManager, targetAimPos, true);
if(子追){
if (shouldHit(命中率)) {
return orig_shoot_event(thiz, targetAimPos, sex, weapon, unk1);
}}}}
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
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAFC4,"26 4E 01 00").Modify();//[1] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAFB8,"80 4F 01 00").Modify();//[2] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAF98,"B3 58 01 00").Modify();//[3] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAF94,"44 59 01 00").Modify();//[4] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAF90,"54 59 01 00").Modify();//[5] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAF48,"79 6B 01 00").Modify();//[6] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAF44,"DB 6E 01 00").Modify();//[7] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAF40,"CB 6E 01 00").Modify();//[8] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAF08,"CC 78 01 00").Modify();//[9] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAF04,"B1 7A 01 00").Modify();//[10] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAF00,"7B 7C 01 00").Modify();//[11] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAEFC,"5B 7D 01 00").Modify();//[12] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAEF8,"3E 7F 01 00").Modify();//[13] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAEB8,"0B 98 01 00").Modify();//[14] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAEB4,"12 9B 02 00").Modify();//[15] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAE7C,"8E 9F 02 0E").Modify();//[16] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAACA4,"3D 4E 01 00").Modify();//[17] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAACA0,"38 4E 01 00").Modify();//[18] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAC9C,"41 4E 02 00").Modify();//[19] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAB6C,"F2 58 01 00").Modify();//[20] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAB68,"F7 58 01 00").Modify();//[21] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAB64,"06 59 01 00").Modify();//[22] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAB60,"1A 59 01 00").Modify();//[23] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAB5C,"22 59 01 00").Modify();//[24] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAB58,"62 59 02 00").Modify();//[25] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAB48,"EC 59 01 00").Modify();//[26] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAB44,"1B 5A 01 00").Modify();//[27] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAB40,"27 5A 01 00").Modify();//[28] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAB3C,"D8 59 01 00").Modify();//[29] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAB38,"66 5A 01 00").Modify();//[30] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAB2C,"08 5B 01 00").Modify();//[31] | 
MemoryPatch::createWithHex("[anon:dalvik-free list large object space]",0x1FFAAB28,"3E 5B 02 00").Modify();//[32] | 
 
 
 
 
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
 
 //表扬自抓以上
 
 
 
 
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



//橘右抓防
 PATCH_LIB("[anon:dalvik-main space (region space)]","0x2C2B48","h 00 01 00 01");//[1] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2C2B98","h 00 01 01 00");//[2] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2C2C88","h 00 01 00 00");//[3] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FACE4","h 00 04 00 00");//[4] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FACE8","h 80 00 00 00");//[5] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FAD20","h 00 01 00 00");//[6] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FAD2C","h 40 00 00 00");//[7] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FADB8","h 00 02 00 00");//[8] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FB5CC","h 00 01 00 00");//[9] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FB5D0","h 00 01 00 00");//[10] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FB5D4","h 00 04 00 00");//[11] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FB9A0","h 00 01 00 00");//[12] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FBDA8","h 00 06 00 20");//[13] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FBF74","h 00 04 00 00");//[14] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FBF78","h 00 04 00 00");//[15] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FBF7C","h 00 04 00 00");//[16] | 
PATCH_LIB("[anon:dalvik-main space (region space)]","0x2FBF80","h 00 04 00 00");//[17] | 
  
  



//


    

PATCH_LIB("libanogs.so", "0x3dcfe4", "00 00 80 D2 C0 03 5F D6");
//1 天修复禁令


//方块自抓
//纯正ida抓防，不是在ida里找的我死全家
PATCH_LIB("libUE4.so","0x8F7ECB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2325D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97102B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7ECD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2325D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971030C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7ECE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2325E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97102F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7ED00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2325E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710328","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7ED18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2325F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710354","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7ED30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2325F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710370","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7ED48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232600","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97103A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7ED60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232608","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971038C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7ED78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232610","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97103E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7ED90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232618","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97103C4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EDA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232620","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97103FC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EDC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232628","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710418","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EDD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232630","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710434","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EDF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232638","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971045C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EE08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232640","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710478","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EE20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232648","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710480","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EE38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232650","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710488","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EE50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232658","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710490","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EE68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232660","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710498","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EE80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232668","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97104BC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EE98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232670","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97104D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EEB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232678","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97104EC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EEC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232680","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97104FC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EEE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232688","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710540","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EEF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232690","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971057C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EF10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232698","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710584","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EF28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2326A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971058C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EF40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2326A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971059C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EF58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2326B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710858","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EF70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2326B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97105A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EF88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2326C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97105B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EFA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2326C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97105B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EFB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2326D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97105FC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EFD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2326D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710638","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7EFE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2326E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710648","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F000","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2326E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710654","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F018","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2326F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971065C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F030","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2326F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710664","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F048","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232700","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971066C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F060","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232708","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710674","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F078","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232710","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971067C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F090","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232718","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710684","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F0A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232720","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971068C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F0C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232728","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710694","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F0D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232730","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971069C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F0F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232738","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97106A4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F108","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232740","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97106B4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F120","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232748","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97106C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F138","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232750","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97107CC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F150","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232758","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97106D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F168","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232760","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97106C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F180","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232768","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97106D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F198","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232770","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97106E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F1B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232778","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97106E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F1C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232780","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97106F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F1E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232788","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97106F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F1F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232790","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710700","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F210","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232798","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710708","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F228","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2327A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710710","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F240","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2327A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710718","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F258","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2327B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710720","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F270","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2327B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710730","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F288","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2327C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971073C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F2A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2327C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710744","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F2B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2327D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971074C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F2D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2327D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710754","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F2E8","h 00 00 00 00 00 00");//[1] @FKNB2



PATCH_LIB("libUE4.so","0xC2327E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971075C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F300","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2327E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710764","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F318","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2327F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971076C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F330","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2327F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710774","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F348","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232800","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971077C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F360","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232808","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710784","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F378","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232810","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971078C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F390","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232818","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9710794","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F3A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232820","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x971079C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F3C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232828","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97107A4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F3D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232830","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97107AC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F3F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232838","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97107B4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F408","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232840","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97107BC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F420","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232848","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97107C4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F438","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232850","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9712A18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F450","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232858","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97129F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F468","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232860","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC245C40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F480","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232868","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEEF920","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F498","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232870","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC245C60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F4B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232878","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEEFB00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F4C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232880","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC245C80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F4E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232888","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEEFD20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F4F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232890","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC245CA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F510","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232898","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEEFF70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F528","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2328A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97254C4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F540","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2328A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725444","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F558","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2328B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972560C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F570","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2328B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725460","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F588","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2328C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972547C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F5A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2328C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725498","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F5B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2328D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97254F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F5D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2328D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972551C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F5E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2328E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725548","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F600","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2328E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725564","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F618","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2328F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97255A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F630","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2328F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725580","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F648","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232900","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97255F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F660","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232908","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97255D4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F678","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232910","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725628","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F690","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232918","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725660","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F6A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232920","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725644","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F6C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232928","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725698","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F6D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232930","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972567C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F6F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232938","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97256B4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F708","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232940","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97256EC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F720","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232948","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97256D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F738","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232950","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725708","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F750","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232958","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725724","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F768","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232960","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972572C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F780","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232968","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725734","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F798","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232970","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97257DC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F7B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232978","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97258B4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F7C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232980","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725750","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F7E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232988","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972576C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F7F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232990","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97257A4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F810","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232998","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725788","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F828","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2329A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97257C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F840","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2329A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725824","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F858","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2329B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725808","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F870","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2329B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972586C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F888","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2329C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725850","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F8A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2329C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725898","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F8B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2329D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97258FC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F8D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2329D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97258E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F8E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2329E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725928","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F900","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2329E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725944","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F918","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2329F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972597C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F930","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2329F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725960","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F948","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97259B4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F960","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725998","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F978","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97259D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F990","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725A24","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F9A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97259EC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F9C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725A78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F9D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725A08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7F9F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725A5C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FA08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725A40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FA20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725A94","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FA38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725ACC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FA50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725AB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FA68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725B04","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FA80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725AE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FA98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725B48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FAB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725B20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FAC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725B74","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FAE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725BAC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FAF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725B90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FB10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232A98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725BE4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FB28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232AA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725BC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FB40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232AA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725C00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FB58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232AB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725C1C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FB70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232AB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725C54","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FB88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232AC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725C38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FBA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232AC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725C70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FBB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232AD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725CC4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FBD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232AD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725C9C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FBE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232AE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725D0C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FC00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232AE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725CF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FC18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232AF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725D44","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FC30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232AF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725D28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FC48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725D60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FC60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725DB4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FC78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725D7C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FC90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725DFC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FCA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725D98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FCC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725DD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FCD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725E18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FCF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725E50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FD08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725E34","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FD20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725E88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FD38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725E6C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FD50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725ECC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FD68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725EA4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FD80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725F14","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FD98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725EF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FDB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725F4C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FDC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725F30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FDE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725F68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FDF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725F84","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FE10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232B98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725FA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FE28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232BA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725FF4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FE40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232BA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9725FCC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FE58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232BB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972603C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FE70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232BB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9726020","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FE88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232BC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9726058","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FEA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232BC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9726074","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FEB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232BD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972607C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FED0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232BD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9726084","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FEE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232BE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972608C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FF00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232BE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9726094","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FF18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232BF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972609C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FF30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232BF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97260A4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FF48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97260AC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FF60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97260B4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FF78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97260BC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FF90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97260C4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FFA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97260CC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FFC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97260D4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FFD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97260DC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F7FFF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97260E4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80008","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97260EC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80020","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97260F4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80038","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97260FC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80050","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9726104","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80068","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972610C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80080","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9726114","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80098","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972611C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F800B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9726124","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F800C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972612C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F800E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9726134","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F800F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972613C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80110","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232C98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9726144","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80128","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232CA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972614C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80140","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232CA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9726154","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80158","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232CB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x972615C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80170","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232CB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9726164","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80188","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232CC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9726174","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F801A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232CC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF01D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F801B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232CD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9730C98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F801D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232CD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9739FF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F801E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232CE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0260","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80200","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232CE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0290","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80218","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232CF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF02C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80230","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232CF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF02F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80248","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0320","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80260","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0350","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80278","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0380","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80290","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF03B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F802A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF03E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F802C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0410","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F802D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0440","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F802F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0470","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80308","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF04A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80320","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF04D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80338","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0500","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80350","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0530","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80368","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0740","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80380","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF07A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80398","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0800","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F803B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0860","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F803C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0560","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F803E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF08C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F803F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF05C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80410","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232D98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0920","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80428","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232DA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0620","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80440","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232DA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0980","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80458","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232DB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF09E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80470","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232DB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF06E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80488","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232DC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0680","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F804A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232DC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0A40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F804B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232DD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0AA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F804D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232DD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0B00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F804E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232DE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0B60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80500","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232DE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0BC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80518","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232DF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0D40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80530","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232DF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80548","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0DC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80560","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80578","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0BC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80590","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0F4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F805A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0EC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F805C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F805D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0E4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F805F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80608","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80620","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0CE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80638","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF0C80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80650","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0D4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80668","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80680","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0CC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80698","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F806B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0C4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F806C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C0C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F806E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF11F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F806F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1220","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80710","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232E98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF11B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80728","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232EA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1270","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80740","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232EA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1300","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80758","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232EB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1320","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80770","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232EB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1340","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80788","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232EC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1360","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F807A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232EC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1420","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F807B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232ED0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF13A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F807D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232ED8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF13E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F807E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232EE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x345A7B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80800","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232EE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x345A800","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80818","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232EF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1450","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80830","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232EF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC245F10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80848","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1490","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80860","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF14D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80878","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1510","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80890","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1550","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F808A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF15F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F808C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1610","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F808D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2462A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F808F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2460D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80908","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246260","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80920","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC245F40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80938","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1630","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80950","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF16F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80968","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1730","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80980","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x345C720","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80998","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1770","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F809B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1650","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F809C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF16A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F809E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C100","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F809F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x345BFF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80A10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232F98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x982088C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80A28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232FA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9820D5C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80A40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232FA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9823610","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80A58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232FB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9824E90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80A70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232FB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF17B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80A88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232FC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1800","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80AA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232FC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x979E868","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80AB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232FD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x982B4E4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80AD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232FD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x982EB00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80AE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232FE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x97B1FA4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80B00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232FE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x982CB14","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80B18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232FF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1900","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80B30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC232FF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1860","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80B48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233000","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1950","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80B60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233008","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF18B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80B78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233010","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF19D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80B90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233018","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1A20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80BA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233020","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1A70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80BC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233028","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1AA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80BD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233030","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2463C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80BF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233038","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246550","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80C08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233040","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1B80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80C20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233048","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1BD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80C38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233050","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1CC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80C50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233058","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1DD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80C68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233060","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1EA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80C80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233068","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1FA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80C98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233070","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2000","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80CB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233078","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF1FD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80CC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233080","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2030","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80CE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233088","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF20D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80CF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233090","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2160","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80D10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233098","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF21C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80D28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2330A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2220","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80D40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2330A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2130","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80D58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2330B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF23A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80D70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2330B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246610","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80D88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2330C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2410","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80DA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2330C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2440","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80DB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2330D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2470","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80DD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2330D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF24A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80DE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2330E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2500","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80E00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2330E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF25F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80E18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2330F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF26E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80E30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2330F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF27D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80E48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233100","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2800","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80E60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233108","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x345C750","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80E78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233110","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x345C770","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80E90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233118","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2830","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80EA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233120","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x345C740","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80EC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233128","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x345C790","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80ED8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233130","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2880","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80EF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233138","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF28D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80F08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233140","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2900","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80F20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233148","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2940","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80F38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233150","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2980","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80F50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233158","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF29D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80F68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233160","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2A00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80F80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233168","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2A40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80F98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233170","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2A70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80FB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233178","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C478","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80FC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233180","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C468","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80FE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233188","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2B10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F80FF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233190","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2AB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81010","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233198","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C470","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81028","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2331A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2B70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81040","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2331A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2AE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81058","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2331B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2B40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81070","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2331B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C480","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81088","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2331C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2466B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F810A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2331C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98A3E44","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F810B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2331D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2466B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F810D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2331D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2C00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F810E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2331E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2D00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81100","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2331E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2C80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81118","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2331F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2D70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81130","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2331F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2E10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81148","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233200","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2DE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81160","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233208","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2E40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81178","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233210","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C484","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81190","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233218","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C488","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F811A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233220","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2ED0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F811C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233228","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2EB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F811D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233230","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2F60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F811F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233238","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2E60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81208","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233240","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3040","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81220","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233248","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98A5604","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81238","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233250","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2466C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81250","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233258","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3140","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81268","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233260","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF31D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81280","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233268","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF30C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81298","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233270","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3100","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F812B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233278","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3310","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F812C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233280","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3210","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F812E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233288","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3250","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F812F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233290","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3170","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81310","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233298","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3AA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81328","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2332A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3520","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81340","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2332A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3940","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81358","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2332B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF39D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81370","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2332B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3820","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81388","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2332C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF39A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F813A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2332C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3A00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F813B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2332D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3760","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F813D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2332D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3A30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F813E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2332E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3970","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81400","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2332E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF38B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81418","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2332F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3730","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81430","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2332F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF37F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81448","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233300","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF2E90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81460","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233308","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3A80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81478","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233310","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3550","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81490","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233318","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF36D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F814A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233320","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3790","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F814C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233328","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3880","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F814D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233330","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3850","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F814F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233338","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF38E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81508","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233340","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3910","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81520","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233348","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF36A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81538","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233350","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3580","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81550","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233358","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF37C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81568","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233360","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3700","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81580","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233368","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF35B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81598","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233370","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3640","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F815B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233378","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3670","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F815C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233380","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF35E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F815E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233388","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3610","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F815F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233390","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3D10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81610","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233398","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3A60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81628","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2333A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BBF6C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81640","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2333A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BC08C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81658","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2333B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BC170","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81670","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2333B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BC254","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81688","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2333C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BB478","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F816A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2333C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BB8CC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F816B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2333D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BBAE4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F816D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2333D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BB9D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F816E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2333E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BBC0C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81700","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2333E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BB584","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81718","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2333F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BB7B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81730","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2333F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BB690","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81748","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233400","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BAB90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81760","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233408","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BA2A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81778","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233410","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BA560","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81790","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233418","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BAFC4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F817A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233420","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BB140","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F817C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233428","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BB2C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F817D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233430","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BACEC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F817F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233438","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BAE48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81808","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233440","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BA6DC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81820","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233448","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BA858","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81838","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233450","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BA9E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81850","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233458","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BA404","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81868","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233460","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B83D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81880","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233468","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B9158","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81898","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233470","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B9DB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F818B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233478","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BA004","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F818C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233480","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B9B6C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F818E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233488","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B9928","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F818F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233490","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B9724","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81910","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233498","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B9520","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81928","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2334A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B933C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81940","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2334A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B81EC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81958","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2334B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B87D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81970","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2334B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B85D4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81988","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2334C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B8008","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F819A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2334C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B8C60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F819B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2334D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B8EB4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F819D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2334D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98B8A1C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F819E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2334E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BC344","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81A00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2334E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BBD20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81A18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2334F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x98BBE4C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81A30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2334F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3DA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81A48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233500","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3DD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81A60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233508","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3FB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81A78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233510","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF3FF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81A90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233518","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4080","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81AA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233520","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C570","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81AC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233528","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C500","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81AD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233530","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C4E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81AF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233538","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C4F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81B08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233540","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C4D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81B20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233548","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C558","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81B38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233550","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C560","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81B50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233558","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C4D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81B68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233560","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C530","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81B80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233568","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C568","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81B98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233570","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C528","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81BB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233578","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C4E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81BC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233580","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C4F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81BE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233588","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C540","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81BF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233590","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C550","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81C10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233598","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C510","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81C28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2335A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C520","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81C40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2335A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C4C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81C58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2335B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF44B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81C70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2335B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4110","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81C88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2335C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4850","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81CA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2335C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF48D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81CB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2335D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C690","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81CD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2335D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C640","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81CE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2335E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C630","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81D00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2335E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C610","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81D18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2335F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C600","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81D30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2335F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C660","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81D48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233600","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C5F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81D60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233608","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C5F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81D78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233610","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4980","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81D90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233618","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF49C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81DA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233620","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4A00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81DC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233628","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4A30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81DD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233630","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4BF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81DF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233638","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4AD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81E08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233640","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4B30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81E20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233648","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4B90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81E38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233650","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4C50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81E50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233658","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4C80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81E68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233660","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4CB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81E80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233668","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4CE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81E98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233670","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4D10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81EB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233678","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4D60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81EC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233680","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4DB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81EE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233688","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4E00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81EF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233690","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4E50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81F10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233698","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4EB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81F28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2336A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4F10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81F40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2336A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4F70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81F58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2336B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9912248","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81F70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2336B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x990EF2C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81F88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2336C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9911D80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81FA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2336C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x990EE24","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81FB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2336D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4A70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81FD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2336D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C858","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F81FE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2336E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C838","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82000","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2336E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C818","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82018","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2336F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C808","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82030","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2336F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C71C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82048","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233700","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C848","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82060","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233708","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C7F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82078","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233710","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C828","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82090","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233718","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C810","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F820A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233720","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C738","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F820C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233728","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C718","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F820D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233730","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C80C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F820F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233738","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C748","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82108","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233740","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C800","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82120","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233748","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C720","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82138","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233750","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C804","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82150","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233758","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C710","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82168","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233760","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C750","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82180","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233768","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C728","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82198","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233770","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C740","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F821B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233778","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8C730","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F821C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233780","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246A64","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F821E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233788","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246A3C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F821F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233790","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246A60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82210","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233798","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246A38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82228","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2337A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xBEF4FD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82240","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2337A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9930884","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82258","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2337B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9949FCC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82270","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2337B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9949FD4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82288","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2337C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9949FDC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F822A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2337C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9949FE4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F822B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2337D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A004","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F822D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2337D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9949FEC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F822E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2337E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9949FF4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82300","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2337E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9949FFC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82318","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2337F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A00C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82330","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2337F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A014","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82348","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233800","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A01C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82360","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233808","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A024","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82378","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233810","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A02C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82390","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233818","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A034","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F823A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233820","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A03C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F823C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233828","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A044","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F823D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233830","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A04C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F823F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233838","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A054","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82408","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233840","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A05C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82420","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233848","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A064","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82438","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233850","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A06C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82450","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233858","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A074","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82468","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233860","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A084","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82480","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233868","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A07C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82498","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233870","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A08C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F824B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233878","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A094","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F824C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233880","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A09C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F824E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233888","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A0A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F824F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233890","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A0B4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82510","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233898","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A0BC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82528","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2338A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A0C4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82540","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2338A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A0CC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82558","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2338B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A0D4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82570","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2338B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A0DC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82588","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2338C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A0E4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F825A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2338C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A0EC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F825B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2338D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A0F4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F825D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2338D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A0FC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F825E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2338E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A104","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82600","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2338E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A10C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82618","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2338F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A114","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82630","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2338F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A11C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82648","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233900","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A828","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82660","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233908","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A824","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82678","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233910","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A124","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82690","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233918","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A12C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F826A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233920","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A134","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F826C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233928","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A13C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F826D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233930","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A144","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F826F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233938","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A14C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82708","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233940","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A154","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82720","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233948","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A15C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82738","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233950","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A164","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82750","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233958","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A16C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82768","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233960","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A174","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82780","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233968","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A17C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82798","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233970","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A184","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F827B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233978","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A18C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F827C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233980","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A1A4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F827E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233988","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A194","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F827F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233990","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A19C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82810","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233998","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A1AC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82828","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2339A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A1B4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82840","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2339A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A1BC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82858","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2339B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A1C4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82870","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2339B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A1CC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82888","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2339C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A1D4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F828A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2339C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A1DC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F828B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2339D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A1E4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F828D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2339D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A1EC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F828E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2339E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A1F4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82900","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2339E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A1FC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82918","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2339F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A204","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82930","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2339F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A20C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82948","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A214","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82960","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A21C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82978","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A224","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82990","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A22C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F829A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A234","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F829C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A23C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F829D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A244","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F829F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A24C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82A08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A254","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82A20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A25C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82A38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A264","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82A50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A26C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82A68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A274","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82A80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A2A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82A98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A27C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82AB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A2D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82AC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A284","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82AE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A28C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82AF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A2B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82B10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233A98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A2B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82B28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233AA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A2C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82B40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233AA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A2C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82B58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233AB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A2D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82B70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233AB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A2E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82B88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233AC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A2E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82BA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233AC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A2F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82BB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233AD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A2F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82BD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233AD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A300","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82BE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233AE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A308","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82C00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233AE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A310","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82C18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233AF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A318","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82C30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233AF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A320","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82C48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A328","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82C60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A330","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82C78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A338","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82C90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A340","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82CA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A348","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82CC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A350","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82CD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A368","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82CF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A378","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82D08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A358","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82D20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A360","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82D38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A370","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82D50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A380","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82D68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A388","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82D80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A390","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82D98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A398","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82DB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A3A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82DC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A3A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82DE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A3B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82DF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A3B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82E10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233B98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A8EC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82E28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233BA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A8F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82E40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233BA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A9E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82E58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233BB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A92C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82E70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233BB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A3F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82E88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233BC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A3C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82EA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233BC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A97C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82EB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233BD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A940","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82ED0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233BD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A3C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82EE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233BE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A9D4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82F00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233BE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A990","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82F18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233BF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A3D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82F30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233BF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AA24","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82F48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A3D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82F60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AA64","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82F78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AA28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82F90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A3E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82FA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AAA4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82FC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AA68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82FD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A3E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F82FF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AAE4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83008","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AAA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83020","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AAEC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83038","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AAE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83050","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A3F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83068","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AB08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83080","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AAF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83098","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A400","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F830B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AB40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F830C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AB28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F830E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A408","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F830F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A410","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83110","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233C98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AB60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83128","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233CA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A42C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83140","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233CA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AB64","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83158","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233CB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A43C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83170","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233CB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A434","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83188","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233CC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A44C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F831A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233CC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A444","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F831B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233CD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A45C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F831D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233CD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A454","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F831E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233CE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AB84","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83200","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233CE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AB68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83218","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233CF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A464","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83230","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233CF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AB94","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83248","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AB9C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83260","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AB98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83278","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A46C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83290","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABA4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F832A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F832C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A474","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F832D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A47C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F832F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A494","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83308","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A484","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83320","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A48C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83338","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A4B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83350","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83368","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A4F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83380","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A518","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83398","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABB4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F833B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A5C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F833C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F833E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A540","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F833F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A550","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83410","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233D98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A548","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83428","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233DA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A560","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83440","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233DA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A558","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83458","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233DB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A570","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83470","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233DB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A568","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83488","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233DC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A580","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F834A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233DC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A578","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F834B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233DD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A590","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F834D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233DD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A588","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F834E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233DE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A5A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83500","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233DE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A598","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83518","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233DF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A5B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83530","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233DF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A5A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83548","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A5C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83560","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A5B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83578","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A5D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83590","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A5D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F835A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A5E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F835C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A5E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F835D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A5F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F835F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A5F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83608","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A600","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83620","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A608","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83638","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A610","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83650","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A618","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83668","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A620","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83680","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A628","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83698","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A630","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F836B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A638","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F836C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A640","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F836E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A648","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F836F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A650","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83710","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233E98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AD74","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83728","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233EA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83740","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233EA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A658","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83758","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233EB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABBC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83770","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233EB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A678","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83788","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233EC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F837A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233EC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A684","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F837B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233ED0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABC4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F837D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233ED8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A6A4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F837E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233EE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83800","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233EE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A6C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83818","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233EF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABCC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83830","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233EF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A6F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83848","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A70C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83860","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A748","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83878","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A780","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83890","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ADF4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F838A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABEC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F838C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A79C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F838D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A7A4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F838F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A7AC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83908","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AED8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83920","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ACC4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83938","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A7C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83950","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83968","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A7D4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83980","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994AF94","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83998","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A82C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F839B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A7F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F839C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F839E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABD4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F839F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83A10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233F98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABDC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83A28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233FA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A7F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83A40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233FA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83A58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233FB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994ABE4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83A70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233FB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A800","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83A88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233FC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994A808","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83AA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233FC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994C85C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83AB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233FD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994C870","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83AD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233FD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994C88C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83AE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233FE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994C898","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83B00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233FE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994C884","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83B18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233FF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994C8A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83B30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC233FF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x994C8C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83B48","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234000","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x99507EC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83B60","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234008","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9954300","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83B78","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234010","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9954310","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83B90","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234018","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9954190","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83BA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234020","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x99541B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83BC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234028","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9958000","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83BD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234030","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246AD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83BF0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234038","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8CD38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83C08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234040","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8CD40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83C20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234048","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246B28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83C38","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234050","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246AC0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83C50","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234058","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246AC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83C68","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234060","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8CD30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83C80","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234068","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246AE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83C98","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234070","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x995F9C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83CB0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234078","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8CD2C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83CC8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234080","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246AD8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83CE0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234088","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x3466F88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83CF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234090","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x3466FA8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83D10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC234098","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8CD18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83D28","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2340A0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xCB8CD20","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83D40","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2340A8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x345E0BC","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83D58","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2340B0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246B00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83D70","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2340B8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246B10","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83D88","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2340C0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246AF8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83DA0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2340C8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246B08","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83DB8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2340D0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC246B2C","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83DD0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2340D8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x99899D4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83DE8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2340E0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x9989998","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83E00","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2340E8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x998A9B4","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83E18","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2340F0","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x998A978","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x8F83E30","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0xC2340F8","h 00 00 00 00 00 00");//[1] @FKNB2
PATCH_LIB("libUE4.so","0x998AD9C","h 00 00 00 00 00 00");//[1] @FKNB2

//方块结束







//挽



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
Write<float>(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x2F0)+0x180)+0x33C,120);
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
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x340)+0x30)+0x388)+0x118,1407103);
}
if (果冻) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x340)+0x30)+0x388)+0x118,1406970);
}

if (胖达) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x2F0)+0x280)+0x388)+0x118,1405039);
}

if (明日香) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x340)+0x30)+0x388)+0x118,1406387);

}
if (老鼠人) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x1A0)+0x0)+0x9E0)+0x11C, 1103007020);//枪械
}
if (蓝木乃伊) {
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC8C0468)+0x0)+0x340)+0x30)+0x388)+0x118,1406894);
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
if (子追) {
long PlayerAimLineColor = IM_COL32(254, 0, 0, 255);
auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
if (WeaponManagerComponent) {
auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
if (CurrentWeaponReplicated) {
auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
if (ShootWeaponComponent) {
int shoot_event_idx = 168;
auto VTable = (void **) ShootWeaponComponent->VTable;
auto f_mprotect = [](uintptr_t addr, size_t len, int32_t prot) -> int32_t {
static_assert(PAGE_SIZE == 4096);
constexpr size_t page_size = static_cast<size_t>(PAGE_SIZE);
void* start = reinterpret_cast<void*>(addr & -page_size);
uintptr_t end = (addr + len + page_size - 1) & -page_size;
return mprotect(start, end - reinterpret_cast<uintptr_t>(start), prot);
};
if (VTable && (VTable[shoot_event_idx] != shoot_event)) {
orig_shoot_event = decltype(orig_shoot_event)(
VTable[shoot_event_idx]);
f_mprotect((uintptr_t)(&VTable[shoot_event_idx]), sizeof(uintptr_t), PROT_READ | PROT_WRITE);
VTable[shoot_event_idx] = (void *) shoot_event;
}}}}}}
if (上帝视角){
localPlayer->ThirdPersonCameraComponent->SetFieldOfView(视角);
}					
//坐标自瞄
                    if (自动瞄准) {
                    ASTExtraPlayerCharacter *Target = GETTargetForAimBot();
                    if (Target) {
                        bool triggerOk = false;
                        if (Config.AimBot.Trigger != EAimTrigger::none) {
                            if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
                                triggerOk = localPlayer->bIsWeaponFiring;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
                                triggerOk = localPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Both) {
                                triggerOk = localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Any) {
                                triggerOk = localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS;
                            }
                        } else triggerOk = true;
                        if (triggerOk) {
                            FVector targetAimPos = Target->GetBonePos("Head", {});
                                targetAimPos.Z -= 位置;

                            auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                            if (WeaponManagerComponent) {
                                auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                if ((int) propSlot.GetValue() >= 1 &&
                                    (int) propSlot.GetValue() <= 3) {
                                    auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                    if (CurrentWeaponReplicated) {
                                        auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                        if (ShootWeaponComponent) {
                                            UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
                                            if (ShootWeaponEntityComponent) {
                                                ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                                                if (CurrentVehicle) {
                                                    FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                                                    float dist = localPlayer->GetDistanceTo(Target);
                                                    auto timeToTravel = dist /
                                                                        ShootWeaponEntityComponent->BulletFireSpeed;

                                                    targetAimPos = UKismetMathLibrary::Add_VectorVector(
                                                            targetAimPos,
                                                            UKismetMathLibrary::Multiply_VectorFloat(
                                                                    LinearVelocity, timeToTravel));
                                                } else {
                                                    FVector Velocity = Target->GetVelocity();

                                                    float dist = localPlayer->GetDistanceTo(Target);
                                                    auto timeToTravel = dist /
                                                                        ShootWeaponEntityComponent->BulletFireSpeed;

                                                    targetAimPos = UKismetMathLibrary::Add_VectorVector(
                                                            targetAimPos,
                                                            UKismetMathLibrary::Multiply_VectorFloat(
                                                                    Velocity, timeToTravel));
                                                }
                                                if (自动瞄准) {
if (g_LocalPlayer->bIsGunADS) {
if (g_LocalPlayer->bIsWeaponFiring) {
float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
targetAimPos.Z -= dist * 压枪;        


}  
}
}  
g_LocalController->ControlRotation =ToRotator(g_LocalController->PlayerCameraManager->CameraCache.POV.Location,                                                     targetAimPos);//修复自瞄卡屏代码

                                              /*  localController->SetControlRotation(ToRotator(
                                                        localController->PlayerCameraManager->CameraCache.POV.Location,
                                                        targetAimPos), "");*/
                                            }
                                        }
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
            if (子追){
               if (人物圈) {
            ASTExtraPlayerCharacter *Target = GetTargetByRuiRui();
        
        if (Target) {
        FVector HEAD = Target->GetBonePos("Head", {});
        ImVec2 HeadPosSC;
                        if (W2S(HEAD, (FVector2D *)&HeadPosSC)) {
                    
      
      draw->AddCircle({HeadPosSC.x , HeadPosSC.y}, 追踪*0.9f/*这是你圈圈调节的调用代码*/, IM_COL32(255, 255, 255, 255)/*你范围圈的颜色*/, 100.0f, 0.0f);
}}
}

if (屏幕圈){
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), 追踪, IM_COL32(255, 255, 255, 255), 100, 0.f);//圈圈
}}
if (自动瞄准){

            if (人物) {
// 获取瞄准目标
         ASTExtraPlayerCharacter *Target = GETTargetForAimBot();
        
        if (Target) {
        FVector HEAD = Target->GetBonePos("Head", {});
        ImVec2 HeadPosSC;
                        if (W2S(HEAD, (FVector2D *)&HeadPosSC)) {
                    
      
      draw->AddCircle({HeadPosSC.x , HeadPosSC.y}, FOV*0.9f/*这是你圈圈调节的调用代码*/, IM_COL32(255, 255, 255, 255)/*你范围圈的颜色*/, 100.0f, 0.0f);
}}
}

if (屏幕){
draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV, IM_COL32(255, 255, 255, 255), 100, 0.f);//圈圈
}}

            if (HZT == HZT::HZ1) {

if (血量) {
ImColor 血量颜色;
float PercentHP=(Player->Health/Player->HealthMax)*100;
int CurHP=(int)std::max(0,std::min((int)Player->Health,100));
int MaxHP=100;
血量颜色=ImColor(255,255,255,200);
if(Player->Health==0.0f&&!Player->bDead){
血量颜色=ImColor(255,0,0,200);
PercentHP=Player->NearDeathBreath;
if(Player->NearDeatchComponent){
MaxHP=Player->NearDeatchComponent->BreathMax;
}}
draw->AddCircleArc({HeadPosSC.x,HeadPosSC.y-27},20,{0,3.6f*PercentHP},ImColor(0,255,0,155),0,5);
std::string xl=std::to_string((int)CurHP);
auto textSize=ImGui::CalcTextSize2(xl.c_str(),0,20);
绘制字体描边(20,HeadPosSC.x-(textSize.x/2),HeadPosSC.y-(textSize.y/2)-27,血量颜色,xl.c_str());
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






if (悬浮准星) {
draw->AddLine(ImVec2(((float)glWidth / 2) - CrossLen, ((float)glHeight / 2)), ImVec2(((float)glWidth / 2) + CrossLen, ((float)glHeight / 2)), IM_COL32(0, 255, 0, 255), 3.5);
draw->AddLine(ImVec2(((float)glWidth / 2), ((float)glHeight / 2) - CrossLen), ImVec2(((float)glWidth / 2), ((float)glHeight / 2) + CrossLen), IM_COL32(0, 255, 0, 255), 3.5);
}
if (悬浮准星绿) {
draw->AddLine(ImVec2(((float)glWidth / 2) - CrossLen, ((float)glHeight / 2)), ImVec2(((float)glWidth / 2) + CrossLen, ((float)glHeight / 2)), IM_COL32(0, 51, 0, 255), 3.5);
draw->AddLine(ImVec2(((float)glWidth / 2), ((float)glHeight / 2) - CrossLen), ImVec2(((float)glWidth / 2), ((float)glHeight / 2) + CrossLen), IM_COL32(0, 51, 0, 255), 3.5);
}
if (悬浮准星粉) {
draw->AddLine(ImVec2(((float)glWidth / 2) - CrossLen, ((float)glHeight / 2)), ImVec2(((float)glWidth / 2) + CrossLen, ((float)glHeight / 2)), IM_COL32(255, 153, 204 ,255), 3.5);
draw->AddLine(ImVec2(((float)glWidth / 2), ((float)glHeight / 2) - CrossLen), ImVec2(((float)glWidth / 2), ((float)glHeight / 2) + CrossLen), IM_COL32(255, 153, 204, 255), 3.5);
}
if (悬浮准星紫) {
draw->AddLine(ImVec2(((float)glWidth / 2) - CrossLen, ((float)glHeight / 2)), ImVec2(((float)glWidth / 2) + CrossLen, ((float)glHeight / 2)), IM_COL32(255, 0, 255, 255), 3.5);
draw->AddLine(ImVec2(((float)glWidth / 2), ((float)glHeight / 2) - CrossLen), ImVec2(((float)glWidth / 2), ((float)glHeight / 2) + CrossLen), IM_COL32(255, 0, 255, 255), 3.5);
}
if (悬浮准星蓝) {
draw->AddLine(ImVec2(((float)glWidth / 2) - CrossLen, ((float)glHeight / 2)), ImVec2(((float)glWidth / 2) + CrossLen, ((float)glHeight / 2)), IM_COL32(0, 255, 255, 255), 3.5);
draw->AddLine(ImVec2(((float)glWidth / 2), ((float)glHeight / 2) - CrossLen), ImVec2(((float)glWidth / 2), ((float)glHeight / 2) + CrossLen), IM_COL32(0, 255, 255, 255), 3.5);
}
if (悬浮准星鸡腿) {
draw->AddLine(ImVec2(((float)glWidth / 2) - CrossLen, ((float)glHeight / 2)), ImVec2(((float)glWidth / 2) + CrossLen, ((float)glHeight / 2)), IM_COL32(0, 181, 181, 255), 3.5);
draw->AddLine(ImVec2(((float)glWidth / 2), ((float)glHeight / 2) - CrossLen), ImVec2(((float)glWidth / 2), ((float)glHeight / 2) + CrossLen), IM_COL32(0, 181, 181, 255), 3.5);
}
if (悬浮准星黑) {
draw->AddLine(ImVec2(((float)glWidth / 2) - CrossLen, ((float)glHeight / 2)), ImVec2(((float)glWidth / 2) + CrossLen, ((float)glHeight / 2)), IM_COL32(0,0,0, 255), 3.5);
draw->AddLine(ImVec2(((float)glWidth / 2), ((float)glHeight / 2) - CrossLen), ImVec2(((float)glWidth / 2), ((float)glHeight / 2) + CrossLen), IM_COL32(0,0,0, 255), 3.5);
}
if (悬浮准星白) {
draw->AddLine(ImVec2(((float)glWidth / 2) - CrossLen, ((float)glHeight / 2)), ImVec2(((float)glWidth / 2) + CrossLen, ((float)glHeight / 2)), IM_COL32(255,255,255, 255), 3.5);
draw->AddLine(ImVec2(((float)glWidth / 2), ((float)glHeight / 2) - CrossLen), ImVec2(((float)glWidth / 2), ((float)glHeight / 2) + CrossLen), IM_COL32(255,255,255, 255), 3.5);
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
ASTExtraPlayerCharacter*Target= GETTargetForAimBot ();
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
ASTExtraPlayerCharacter*Target= GETTargetForAimBot ();
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
ASTExtraPlayerCharacter*Target= GETTargetForAimBot ();
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
ASTExtraPlayerCharacter*Target= GETTargetForAimBot ();
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
ASTExtraPlayerCharacter*Target= GETTargetForAimBot ();
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
ASTExtraPlayerCharacter*Target= GETTargetForAimBot ();
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
ASTExtraPlayerCharacter*Target= GETTargetForAimBot ();
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
ASTExtraPlayerCharacter*Target= GETTargetForAimBot ();
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
if (ImGui::Button("       主页",ImVec2(115 -10, 40)))//260
{
菜单 = true;
菜单1 = false;
菜单2 = false;
菜单3 = false;
				//菜单4 = false;
}
ImGui::SameLine(20);	
ImGui::Image(FloatBallwc, ImVec2(40 + 0.0,40 + 0.0));     						
ImGui::ItemSize(ImVec2(0, 2));			
if (ImGui::Button("       绘制",ImVec2(115 -10, 40)))//260
{
菜单 = false;
菜单1 = true;
菜单2 = false;
菜单3 = false;
菜单4 = false;
}
ImGui::SameLine(20);	
ImGui::Image(FloatBallwv, ImVec2(40 + 0.0,40 + 0.0));     			    		
ImGui::ItemSize(ImVec2(0, 2));
if (ImGui::Button("       自瞄",ImVec2(115 -10, 40)))//260
{
菜单 = false;
菜单1 = false;
菜单2 = true;
菜单3 = false;
				//菜单4 = false;
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


ImGui::SameLine(20);	
ImGui::Image(FloatBallwb, ImVec2(40 + 0.0,40 + 0.0));     					 
ImGui::ItemSize(ImVec2(0, 2));
if (ImGui::Button("       功能",ImVec2(115 - 10, 40)))//320
{
菜单 = false;
菜单1 = false;
菜单2 = false;
菜单3 = true;
				//菜单4 = false;
}

ImGui::SameLine(20);	
ImGui::Image(FloatBallwt, ImVec2(40 + 0.0,40 + 0.0));     		  			    	
ImGui::ItemSize(ImVec2(0, 2));  	
ImGui::EndChild();

}

ImGui::SameLine();
if(菜单){
						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{
ImGui::TextColored(ImColor(255,0,0,225), "(CN) 很高兴认识你  (EN) Nice to meet you");
ImGui::Spacing();
ImGui::TextColored(ImColor(255,0,0,225), "当前版本:V15 『MKS MOD』");
ImGui::Text("-耗时 %.3fms   当前帧率 %.1fFPS", 1000.0f / io.Framerate, io.Framerate);
ImGui::Spacing();      
    time_t tt_;
    struct tm *tm_ ;
    {
        time(&tt_);              
        tm_ = localtime(&tt_);    
        ImGui::TextColored(ImColor(255,0,0,225),"当前时间:%d年%d月%d日 %02d:%02d:%02d\r", 1900 + tm_->tm_year,
        tm_->tm_mon + 1, tm_->tm_mday, tm_->tm_hour, tm_->tm_min, tm_->tm_sec);
    }
    
if (调用3 == true) {
    if (ImGui::Button("重新载入(UE4)",ImVec2(-1, 45))) {
初始化 = true;

    调用3 = false;
    }
    } else if (调用3 == false) {
    if (ImGui::Button("重新载入(UE4)",ImVec2(-1, 45))) {
初始化 = true;
      
    调用3 = true;
    }
    }
if (ImGui::Button("退出程序",{-1, 45})){

}

ImGui::Text("当前分辨率: %dx%d", screenWidth,screenHeight);
static const char* colors[] = {"凯撒UI     --永久","粉色UI     --永久", "散兵UI     --永久","流浪UI     --永久","托斯UI     --永久","绿色UI     --永久","白色UI     --永久","遗照UI     --永久","鸡腿UI     --永久","红色UI     --永久"};
static int selectedColor = 0;
ImGui::Combo("", &selectedColor, colors, IM_ARRAYSIZE(colors));
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

ImGui::TextColored(ImColor(255,0,0,225),"Yao Mingzhu, I like you.");
ImGui::Image(Logo15.textureId, {40, 40});
ImGui::SameLine();
ImGui::Image(Logo14.textureId, {40, 40});
ImGui::SameLine();
ImGui::Image(Logo13.textureId, {40, 40});
ImGui::SameLine();
ImGui::Image(Logo12.textureId, {40, 40});
ImGui::SameLine();
ImGui::TextColored(ImColor(255,0,0,225),"> PUBG MOBILE 3.3");

/*ImGui::Image(Logo11.textureId, {25, 25});
ImGui::SameLine();
ImGui::TextColored(ImColor(255,0,0,225), "> @MKSYYDS");
ImGui::SameLine();*/
ImGui::Text("服务器已连接 %.hf秒 %c", "|/-\\"[(int)(ImGui::GetTime() / 0.05f) & 3]);
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
                    ImGui::Text( "%.2f ms", 1000 / io.Framerate );
			    


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
if (ImGui::Button("一键开启绘制",{350,45}))   
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
ImGui::Checkbox("绘制国家", &国家);


} }

if(菜单2){
						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{
if (调用5 == true) {
    if (ImGui::Button("开启自瞄",ImVec2(150, 35))) {
自动瞄准 = true;

    调用5 = false;
    }
    } else if (调用5 == false) {
    if (ImGui::Button("关闭自瞄",ImVec2(150, 35))) {
自动瞄准 = false;
      
    调用5 = true;
    }
    }    
//ImGui::SameLine();
static int 废物 = 0;
if (调用6 == true) {
    if (ImGui::Button("开启子追",ImVec2(150, 35))) {
子追 = true;

    调用6 = false;
    }
    } else if (调用6 == false) {
    if (ImGui::Button("关闭子追",ImVec2(150, 35))) {
子追 = false;
      
    调用6 = true;
    }
    }

ImGui::Checkbox("倒地", &忽略倒地);
ImGui::SameLine();
ImGui::Checkbox("人机", &忽略人机);

ImGui::Checkbox("判断", &掩体分辨);
ImGui::SameLine();
ImGui::Checkbox("急救", &我);
ImGui::SliderFloat("急救距离", &就, 0.f, 300.f, "%.2f");
                        ImGui::SliderFloat("急救大小", &FOV, 0.0f, 800.0f, "%.2f");
if (ImGui::Combo("位置", &style_idx, "屏幕\0人物\0")) {
switch (style_idx) 
{
case 0:
屏幕 = true;
人物 = false;
break;
case 1:
屏幕 = false;
人物 = true;
break;
}          
}
   
                           
static const char *targets[] = {"头", "身体"};
ImGui::Combo("", (int *) &Config.Bullet360.Target, targets, 2, -1);			
static const char *triggers[] = {"触发方式", "开火", "开镜", "开火且开镜", "开火或开镜"};
ImGui::Combo("##Trigger", (int *) &Config.AimBot.Trigger, triggers, 5, -1);
/*ImGui::Checkbox("人物广角", &上帝视角);
ImGui::SliderFloat("广角调节", &视角, 0.0f, 120.0f);*/
//ImGui::Text("屏幕 = 普通圈圈 | 人物 = 动态圈圈");
ImGui::EndChild();
                        
                        

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
                                  
                        ImGui::SliderFloat("自瞄预判", &Anticipation, 0.0f, 1.0f,"%.2f",2);
                        
    					ImGui::SliderFloat("预判距离", &预判距离, 0.0f, 200, "%.2f", 4);        
    				     
                        ImGui::SliderFloat("追踪范围", &追踪,0.0f,249.520f,"%.0f", 2);
                        
                        ImGui::SliderFloat("命中率", &命中率, 0.0f, 1.0f);
                        
    					ImGui::EndChild();
                        ImGui::End(); 						
                        }
                        


}
}
if(菜单4){
						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{
//ImGui::TextColored(ImColor(255,0,0,225), "(PN) 概率子追(仿内核)");
ImGui::Spacing();
static int 废物 = 0;
ImGui::Checkbox("激活子追", &子追);
if (ImGui::Combo("圈圈位置", &style_idx, "屏幕\0人物\0")) {
switch (style_idx) 
{
case 0:
屏幕圈 = true;
人物圈 = false;
break;
case 1:
屏幕圈 = false;
人物圈 = true;
break;
}          
}
ImGui::TableNextColumn();
ImGui::SliderFloat("范围", &追踪,0.0f,249.520f,"%.0f", 2);
ImGui::SliderFloat("命中率", &命中率, 0.0f, 1.0f);
static const char *targets[] = {"头", "身体"};
ImGui::Combo("", (int *) &Config.Bullet360.Target, targets, 2, -1);			
ImGui::TableNextColumn();
ImGui::Checkbox("掩体判断", &掩体判断);
ImGui::SameLine();
ImGui::Checkbox("忽略倒到", &忽略倒地);
ImGui::SameLine();
ImGui::Checkbox("忽略人机", &忽略人机);
ImGui::Spacing();}
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
ImGui::Checkbox("六道", &六道);

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
        }   
        
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




        
        MemTraps = tmp;   
                    auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
   if (isObjectInvalid(Object))
                continue;
                
          if (平板视角) {
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainYFOV;
} else
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainXFOV;
}}      
                
if (广角) {              
            auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainYFOV;
}}
} else
            auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainXFOV;
}}
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
         }         }
              if (一百四十四) {
            auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
                if (Object->IsA(USTExtraGameInstance::StaticClass())) {
                auto SDK_USTExtraGameInstance = (USTExtraGameInstance *) Object;   
                
              
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSDef = 144;   
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSLow = 144;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSMid = 144; //TG：@heihuamods
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSHigh = 144;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSHDR = 144;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSUltralHigh = 144; //TG：@heihuamods
            } //TG：@heihuamods
         }         }
              if (一百二十) {
            auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
                if (Object->IsA(USTExtraGameInstance::StaticClass())) {
                auto SDK_USTExtraGameInstance = (USTExtraGameInstance *) Object;   
                
              
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSDef = 120;   
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSLow = 120;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSMid = 120; //TG：@heihuamods
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSHigh = 120;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSHDR = 120;
                SDK_USTExtraGameInstance->UserDetailSetting.PUBGDeviceFPSUltralHigh = 120; //TG：@heihuamods
            } //TG：@heihuamods
         }         }
		        if (变色) {
                    auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
     if (Object->IsA(UPrimitiveComponent ::StaticClass())) {
              auto playerChar = (UPrimitiveComponent  *) Object;    
     static float cnt = 0.0f;
              float r = cos(cnt) * .5f + .5f;
              float g = cos(cnt - 2.f * 3.14 / 3.f) * .5f + .5f;
              float b = cos(cnt - 4.f * 3.14 / 3.f) * .5f + .5f;
              if (cnt >= FLT_MAX) {
                  cnt = 0.0f;
              } else {
                  cnt += 0.01f;
              }    
     playerChar->SetDrawIdeaOutline(true);
     playerChar->SetIdeaOutlineNew(true);
              playerChar->SetIdeaOutlineOcclusionHighlight(true);
        playerChar->OverrideIdeaOutlineThickness(true, 1);      
               playerChar->OverrideIdeaOutlineColor(true,FLinearColor(r, g, b, 1.f));
          }
       }
       
   }
   
          if (显伤) {//显示伤害
                      auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
if (Object->IsA(AUAEPlayerController::StaticClass())) {            
    auto playerChar = (AUAEPlayerController *) Object;
 playerChar->GameReplayType = 2;
 }
                       }}
                       
           
	
if (六道) {
auto objs = UObject::GetGlobalObjects();
    for (int i = 0; i < objs.Num(); i++) {
        auto Object = objs.GetByIndex(i);
        if (isObjectInvalid(Object))
            continue;
        if (Object->IsA(UShootWeaponEntity::StaticClass())) {
            auto playerChar = (UShootWeaponEntity *) Object;
   playerChar->ShootInterval = (float) 0;
}
  }
}
		  if (翻墙) {
auto objs = UObject::GetGlobalObjects();
    for (int i = 0; i < objs.Num(); i++) {
        auto Object = objs.GetByIndex(i);
        if (isObjectInvalid(Object))
            continue;
if (Object->IsA(AActor::StaticClass())) {
auto playerChar = (AActor *) Object;
if (playerChar->bActorEnableCollision) {
playerChar->SetActorEnableCollision(true);
playerChar->bActorEnableCollision = true;
}
}
}}
     
if (黑天) {
            auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
                if (Object->IsA(ASTExtraWeapon ::StaticClass())) {
                    auto playerChar = (ASTExtraWeapon  *) Object;
                    playerChar->GetWeaponFireMode() = EWeaponFireMode::WeaponFireMode_Auto;
                }}}
if (除雾) {                
                
                auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
         if (isObjectInvalid(Object))
             continue;
                
                if (Object->IsA(UExponentialHeightFogComponent::StaticClass())) {
                    auto playerChar = (UExponentialHeightFogComponent *) Object;
                    playerChar->SetFogMaxOpacity(0.0f);
                    playerChar->SetFogDensity(0.0f);
                    playerChar->SetFogHeightFalloff(0.0f);
                    playerChar->SetFogCutoffDistance(0.0f);
                    playerChar->SetStartDistance(0.0f);
                }
                }
                }
                
                
        auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
        std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, MEMTRAPS_DELAY - td), MEMTRAPS_DELAY)));
    }}
    return 0;
}

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
 
 

void *修复追封1_thread(void *) {
       do {
        sleep(1);
    } while (!isLibraryLoaded("libanogs.so"));

HOOK_LIB("libanogs.so","0xC208");
HOOK_LIB("libanogs.so","0x532DF8",osub_532DF8,sub_532DF8);
HOOK_LIB("libanogs.so","0x9BBC");
HOOK_LIB("libanogs.so","0x535444",org_sub_0x535444,hook_sub_0x535444);
HOOK_LIB("libanogs.so","0x8BA0");
HOOK_LIB("libanogs.so","0x536460",osub_0x536460,sub_0x536460);
HOOK_LIB("libanogs.so","0x8B90");
HOOK_LIB("libanogs.so","0x536470");
HOOK_LIB("libanogs.so","0x81EC",osub_81EC,sub_81EC);
HOOK_LIB("libanogs.so","0x536E14");
 HOOK_LIB("libanogs.so","0xEE248");
HOOK_LIB("libanogs.so","0x450DB8");
HOOK_LIB("libanogs.so","0xEA3E0");
HOOK_LIB("libanogs.so","0x454C20");
HOOK_LIB("libanogs.so","0xE4F08");
HOOK_LIB("libanogs.so","0x45A0F8");
HOOK_LIB("libanogs.so","0xE32C8");
HOOK_LIB("libanogs.so","0x45BD38");
HOOK_LIB("libanogs.so","0xE2C1C");
HOOK_LIB("libanogs.so","0x45C3E4");
PATCH_LIB("libanort.so","0x165490","h 00 41 13 00");
PATCH_LIB("libanort.so","0x4B70","h 00 41 13 00");
PATCH_LIB("libanort.so","0x165490","h 00 41 13 00");
PATCH_LIB("libanort.so","0x4B70","h 00 41 13 00");
PATCH_LIB("libanort.so","0xFFFFFFFFFFFFB500","h 00 41 13 00");
PATCH_LIB("libanort.so","0xFFFFFFFFFFFFB538","h 00 41 13 00");
PATCH_LIB("libanort.so","0x145AC0","h 00 41 13 00");
PATCH_LIB("libanort.so","0x149050","h 00 41 13 00");
PATCH_LIB("libanort.so","0x14C2AC","h 00 41 13 00");
PATCH_LIB("libanort.so","0x14C648","h 00 41 13 00");
PATCH_LIB("libanort.so","0x14C720","h 00 41 13 00");
PATCH_LIB("libanort.so","0x95249D910","h 00 41 13 00");
PATCH_LIB("libanort.so","0x9524AD430","h 00 41 13 00");
// internalName:/data/app/com.tencent.ig-sRX2qiBSXVUtI97j5v6flg==/lib/arm64/libanort.so1]
PATCH_LIB("libanogs.so","0x5F1E8","h C0 11 FB 10");
PATCH_LIB("libanogs.so","0xE18","h C0 11 FB 10");
PATCH_LIB("libanogs.so","0x5B7C0","h 00 11 FD 10");
PATCH_LIB("libanogs.so","0x4840","h 00 11 FD 10");
PATCH_LIB("libanogs.so","0x5B750","h C0 15 FD 10");
PATCH_LIB("libanogs.so","0x48B0","h C0 15 FD 10");
PATCH_LIB("libanogs.so","0x4F6D8","h 00 10 1F 55");
PATCH_LIB("libanogs.so","0x10928","h 00 10 1F 55");
PATCH_LIB("libanogs.so","0x4F5D0","h 00 14 1F 42");
PATCH_LIB("libanogs.so","0x10A30","h 00 14 1F 42");
PATCH_LIB("libanogs.so","0x4F520","h 00 10 53 5E");
PATCH_LIB("libanogs.so","0x10AE0","h 00 10 53 5E");
PATCH_LIB("libanogs.so","0x4F3FC","h 00 16 1F 42");
PATCH_LIB("libanogs.so","0x10C04","h 00 16 1F 42");
PATCH_LIB("libanogs.so","0x4F0B8","h 00 12 1F 42");
PATCH_LIB("libanogs.so","0x10F48","h 00 12 1F 42");
HOOK_LIB("libcubehawk.so:bss","0x3040");
HOOK_LIB("libcubehawk.so:bss","0x1DFC0");
PATCH_LIB("libanort.so","0x169F90","h 00 10 00 00");
PATCH_LIB("libanort.so","0x70","h 00 10 00 00");
PATCH_LIB("libanort.so","0x169F58","h 00 10 00 00");
PATCH_LIB("libanort.so","0xA8","h 00 10 00 00");
PATCH_LIB("libanort.so","0x1F9D0","h 00 10 00 00");
PATCH_LIB("libanort.so","0x14A630","h 00 10 00 00");
PATCH_LIB("libanort.so","0x1C440","h 00 10 00 00");
PATCH_LIB("libanort.so","0x14DBC0","h 00 10 00 00");
HOOK_LIB("libanort.so","0x191E4");
HOOK_LIB("libanort.so","0x150E1C");
HOOK_LIB("libanort.so","0x18E48");
HOOK_LIB("libanort.so","0x1511B8");
HOOK_LIB("libanort.so","0x18D70");
HOOK_LIB("libanort.so","0x151290");
HOOK_LIB("[stack]","0xFB80");
HOOK_LIB("[stack]","0x7EF480");
HOOK_LIB("[stack]","0x60");
HOOK_LIB("[stack]","0x7FEFA0");
HOOK_LIB("libanogs.so","0x24FA8",osub_24FA8,sub_24FA8);
HOOK_LIB("libanogs.so","0x3B058",osub_0x3B058,sub_0x3B058);
HOOK_LIB("libanogs.so","0x5314D0");
HOOK_LIB("libanogs.so","0xDB30");
HOOK_LIB("libanort.so","0x12BA2C",hooksub_12BA2C,osub_12BA2C); // LOGO + LOGIN CRASH FIX
	HOOK_LIB("libanogs.so", "0x15987C" ,hooksub_15987C,sub_15987C);// CASE 37

//HOOK
HOOK_LIB("libanogs.so", "0x166B1C", hsub_133180, osub_133180);
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
    pthread_create(&t, NULL, 修复追封1_thread, NULL);
	pthread_create(&ptid, NULL, NIKEHome_thread, NULL);
	pthread_create(&ptid2, NULL, hack_thread, NULL);
}

