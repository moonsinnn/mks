#include "Dobby64/dobby.h"
#include "ZDMOD配置区/Includes.h"
#include "ZDMOD配置区/Tools.h"
#include "ZDMOD配置区/fake_dlfcn.h"
#include "ZDMOD配置区/imgui/imgui.h"
#include "ZDMOD配置区/imgui/backends/imgui_impl_android.h"
#include "ZDMOD配置区/imgui/backends/imgui_impl_opengl3.h"
#include "ZDMOD配置区/StrEnc.h"
#include "ZDMOD配置区/字体/小晨字体.h"//字体
#include "ZDMOD配置区/plthook.h"
#include "ZDMOD配置区/Items.h"
#include "ZDMOD配置区/obfuscate.h"
#include "ZDMOD配置区/json.hpp"
#include "ZDMOD配置区/ImguiPP.cpp"
#include "ZDMOD配置区/imgui/stb_image.h"
#include "ZDMOD配置区/KittyMemory/MemoryPatch.h"
#include "ZDMOD配置区/KittyMemory/MemoryBackup.h"
#include "ZDMOD配置区/KittyMemory/MemoryBackup.cpp"
#include "ZDMOD配置区/KittyMemory/MemoryPatch.cpp"
#include "ZDMOD配置区/KittyMemory/KittyMemory.h"
#include "ZDMOD配置区/KittyMemory/KittyUtils.h"
#include "ZDMOD配置区/KittyMemory/KittyMemory.cpp"
#include "ZDMOD配置区/KittyMemory/KittyUtils.cpp"
#include "ZDMOD配置区/Vector2.hpp"
#include "ZDMOD配置区/Vector3.hpp"
#include "ZDMOD配置区/Menu.h"
#include "ZDMOD配置区/Font.h"
#include "Icon.h"
#include "图片/图片.h"


#include "ZDMOD配置区/Oxorany/oxorany.h"
#include "ZDMOD配置区/Rect.h"
#include "ZDMOD配置区/SDK.hpp"
#include "ZDMOD配置区/base64/base64.h"
#include "ZDMOD配置区/imgui_helper.hpp"
#include "ZDMOD配置区/Snowflake.hpp"
#include "ZDMOD配置区/模块对接/zygisk.hpp"
#include "Iconcpp.h"
#include "美化.h"
#include "ZDMOD配置区/xhook/xhook.h"
#include "foxcheats/include/ScanEngine.hpp"


//模块api
using zygisk::Api;
using zygisk::AppSpecializeArgs;

//== это вызов хука 
void hack();
//====

class MyModule : public zygisk::ModuleBase {
 public:
void onLoad(Api *api, JNIEnv *env) override {
this->api_ = api;
this->env_ = env;
}

void preAppSpecialize(AppSpecializeArgs *args) override {
static constexpr const char *packages[] = {"com.tencent.ig", "com.pubg.krmobile","com.rekoo.pubgm","com.vng.pubgmobile"};
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
};





const char *newPlayerMaskShader =
"#version 310 es\n"
"\n"
"\n"
"#ifdef GL_EXT_gpu_shader5\n"
"#extension GL_EXT_gpu_shader5 : enable\n"
"\n"
"#endif\n"
"\n"
"#ifdef GL_EXT_texture_buffer\n"
"#extension GL_EXT_texture_buffer : enable\n"
"\n"
"#endif\n"
"\n"
"#ifdef GL_EXT_texture_cube_map_array\n"
"#extension GL_EXT_texture_cube_map_array : enable\n"
"\n"
"#endif\n"
"\n"
"#ifdef GL_EXT_shader_io_blocks\n"
"#extension GL_EXT_shader_io_blocks : enable\n"
"\n"
"#endif\n"
"#define INTERFACE_LOCATION(Pos) layout(location=Pos) \n"
"#define INTERFACE_BLOCK(Pos, Interp, Modifiers, Semantic, PreType, PostType) layout(location=Pos) Modifiers "
"Semantic { PreType PostType; }\n"
"#define HLSLCC_DX11ClipSpace 1 \n"
"#define HLSLCC_DoZConvertion 1 \n"
"\n"
"// end extensions\n"
"INTERFACE_BLOCK(0, smooth , in , TEXCOORD10, highp vec4, Data) in_TEXCOORD10;\n"
"INTERFACE_BLOCK(1, smooth , in , TEXCOORD11, highp vec4, Data) in_TEXCOORD11;\n"
"INTERFACE_BLOCK(3, smooth , in , TEXCOORD0, highp vec2, Data) in_TEXCOORD0;\n"
"INTERFACE_BLOCK(5, smooth , in , TEXCOORD8, highp vec4, Data) in_TEXCOORD8;\n"
"precision mediump float;\n"
"precision mediump int;\n"
"\n"
"#ifndef DONTEMITSAMPLERDEFAULTPRECISION\n"
"precision mediump sampler2D;\n"
"precision mediump samplerCube;\n"
"\n"
"#endif\n"
"\n"
"#ifdef TEXCOORDPRECISIONWORKAROUND\n"
"vec4 texture2DTexCoordPrecisionWorkaround(sampler2D p, vec2 tcoord)\n"
"{\n"
"return texture2D(p, tcoord);\n"
"}\n"
"#define texture2D texture2DTexCoordPrecisionWorkaround\n"
"#endif\n"
"\n"
"void compiler_internal_AdjustInputSemantic(inout vec4 TempVariable)\n"
"{\n"
"#if HLSLCC_DX11ClipSpace\n"
"TempVariable.y = -TempVariable.y;\n"
"#if HLSLCC_DoZConvertion\n"
"TempVariable.z = ( TempVariable.z + TempVariable.w ) / 2.0;\n"
"#endif\n"
"#endif\n"
"}\n"
"\n"
"void compiler_internal_AdjustOutputSemantic(inout vec4 Src)\n"
"{\n"
"#if HLSLCC_DX11ClipSpace\n"
"Src.y = -Src.y;\n"
"#if HLSLCC_DoZConvertion\n"
"Src.z = ( 2.0 * Src.z ) - Src.w;\n"
"#endif\n"
"#endif\n"
"}\n"
"\n"
"bool compiler_internal_AdjustIsFrontFacing(bool isFrontFacing)\n"
"{\n"
"#if HLSLCC_DX11ClipSpace\n"
"return !isFrontFacing;\n"
"#else\n"
"return isFrontFacing;\n"
"#endif\n"
"}\n"
"uniform vec4 pc0_m[2];\n"
"uniform highp vec4 pc0_h[7];\n"
"uniform vec4 pc1_m[5];\n"
"uniform vec4 pc2_m[10];\n"
"uniform vec4 pu_m[7];\n"
"uniform highp vec4 pu_h[2];\n"
"uniform highp samplerCube ps2;\n"
"uniform highp sampler2D ps1;\n"
"uniform highp sampler2D ps0;\n"
"INTERFACE_BLOCK(4, smooth , in , TEXCOORD7, vec4, Data) in_TEXCOORD7;\n"
"INTERFACE_LOCATION(0) out vec4 out_Target0;\n"
"void main()\n"
"{\n"
"out_Target0 = vec4(1.0, 1.0, 1.0, 1.0);\n"
"}\n";
static char s[64];
static char BQAQSQEQ[128] = {"Uy+stJE6mPKQuTei3MdO4Gc09bn72r5oxAqpal1j8CSXgwFWHVfzNBZDLRY/Ihvk"};
#include "T3/T3验证.h"
#define PATCH_LIB
#define HOOK_LIB
#define PI 3.14159265358979323846
#define GNames_Offset 0x73d9850
#define GEngine_Offset 0xc9f28b0 //UEngine
#define GEngine_Offset 0xc9f28b0 //UlocalPlayer
#define GUObject_Offset 0xc81f320
#define GetActorArray 0x8d81a80
#define Canvas_Map_Offset 0xc827fa8
#define Process_Event_Offset 0x6f01dc0
#define GNativeAndroidApp_Offset 0xc575148
#define Actors_Offset 0xa0
#define DefineHook(RET, NAME, ARGS) \
RET(*Orig_##NAME) \
ARGS; \
RET Hook_##NAME ARGS
#define SNOW_LIMIT 300
#include <openssl/pem.h>
#include <curl/curl.h>
#include <openssl/rsa.h>
#define SLEEP_TIME 1000LL / 60LL

using namespace SDK;
using json = nlohmann::json;
char extra[32];

ImFont* basic = nullptr;
static bool isLogin = true;
static float SliderFloat = 0;



time_t timep;
struct tm*p;
char time1[28];
static std::string dqsj;
static std::string dqsjs;
bool ActiveEsp = false;
static bool p_open = true;
float accent_color[4] = { 0.300f, 0.220f, 0.750f, 1.000f };


bool IgnoreBot = false;
bool 主播模式 = true;
bool 局内防举报;
bool 广角;
bool 大厅全防;
bool 黄金风衣;
bool 开启绘制;
bool 修复骨骼;
bool 人物射线;
bool 显示队伍;
bool 头盔美化;
bool 少女;
bool 背包美化;
bool 怪物;
bool 最新方框;
bool 胖达;
bool 显示名字;
bool 忽机;
bool 全局离线;
bool 准心 = true;
bool 手持武器;
bool 动作判断;
bool 蓝色木乃伊;
bool 独家血量;
bool 显示距离;
bool 狗子绘制;
bool 敌对预警;
bool 游戏进程 = true;
bool 盒子位置;
bool 忽略人机;
bool 载具 = false;
bool 空投 = false;
bool 显示动作;
//自瞄
bool 自瞄;
bool 追踪线;
bool 取消FOV;
bool 取消圆圈 = true;
bool 忽略倒地 = false;
bool 梅花;
//内存
bool 平板视角;
bool 拿枪加速;
bool 除雾;
bool 果冻;

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
template<typename T>
void 写入F类(uintptr_t addr, T value) {
Tools::WriteAddr((void *) addr, &value, sizeof(T));
}
void 写入D类(uintptr_t addr,int var){
Tools::WriteAddr(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var),4);
}
template<typename T>
void Write(uintptr_t addr, T value) {
Tools::WriteAddr((void *) addr, &value, sizeof(T));
}
void HueText(const char* text, ImVec4 color)
{
static auto start_time = std::chrono::high_resolution_clock::now();
auto elapsed_seconds = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start_time).count() / 1000.0f; 
ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 0.0f)); 
for (int i = 0; i < strlen(text); i++)
{
ImGui::SameLine();
float t = fmodf(elapsed_seconds + (float)i / (float)strlen(text), 1.0f); 
ImVec4 currentColor = ImVec4(color.x * t, color.y * t, color.z * t, color.w); 
ImGui::PushStyleColor(ImGuiCol_Text, currentColor); 
ImGui::Text("%c", text[i]); 
ImGui::PopStyleColor(); 
}
ImGui::PopStyleColor(); 
}
void 绘制字体描边(float size,int x, int y, ImVec4 color, const char* str)
{
ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x + 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x - 0.1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0.0f, 0.0f, 0.0f, 1.0f)), str);
ImGui::GetBackgroundDrawList()->AddText(NULL, size,ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(color), str);
}
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
//写入式防封
bool WriteAddr(void *addr, void *buffer, size_t length) {
unsigned long page_size = sysconf(_SC_PAGESIZE);
unsigned long size = page_size * sizeof(uintptr_t);
return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}


//定义DrawTextCentered
void DrawTextCentered(const char *text)
{
ImGui::Separator();
ImGui::SetCursorPosX((ImGui::GetWindowWidth() - ImGui::CalcTextSize(text).x) / 2.f);
ImGui::Text(text);
ImGui::Separator();
}

time_t rng = 0;
json items_data;
std::unordered_set<GLuint> playerPrograms;
GLuint playerVertexShader = 0, playerMaskShader = 0;
std::string g_Token, g_Auth;
std::mutex playerProgramsMutex;
std::mutex playerShaderMutex;
//数据定义
float FOV = 120.0f;
//UI
float 字体调整 = 28.0f;
float X轴;
float Y轴;
float 长度 = 600;
float 宽度 = 450;
float 绘制距离 = 100.0f;
float 广角调节 = 1.6;
float 射线调节 = 1.0f;

float 压枪系数 = 1.0f;

//旁路定义
uintptr_t UE4;
uintptr_t gcloud;
uintptr_t ijkffmpeg;
uintptr_t GCloudVoice;
uintptr_t anogs;

//人物定义

android_app *g_App = 0;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
std::vector<Snowflake::Snowflake> Snow;

bool HIDEESP = true;
bool initImGui = false;


int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;


static UEngine *GEngine = 0;
UWorld *GetWorld() {while (!GEngine) {
 GEngine = UObject::FindObject<UEngine>("UAEGameEngine Transient.UAEGameEngine_1");sleep(1);}
if (GEngine) {auto ViewPort = GEngine->GameViewport;
if (ViewPort) {return ViewPort->World;}}return 0;}
TNameEntryArray *GetGNames() {return ((TNameEntryArray *(*)()) (UE4 + GNames_Offset))();}
std::vector<AActor *> getActors() {auto World = GetWorld();if (!World)return std::vector<AActor *>();
auto PersistentLevel = World->PersistentLevel;if (!PersistentLevel)return std::vector<AActor *>();
auto Actors = *(TArray<AActor *> *)((uintptr_t) PersistentLevel + Actors_Offset);
std::vector<AActor *> actors;for (int i = 0; i < Actors.Num(); i++) {auto Actor = Actors[i];
if (Actor) {actors.push_back(Actor);}}return actors;}

//反正就是定义的
enum EAim {Distance = 0,Croshhair = 1};enum EAimTarget {Head = 0,Chest = 1};
enum EEsp {EspTop = 0,EspBelow = 1,EspNone = 3};enum ECount {Count =0,
Countb = 1,Countc = 2};
enum EAimTrigger {None = 0,Shooting = 0,Scoping = 1,Both = 2,Any = 3};
std::map<int, bool> Items;std::map<int, float *> ItemColors;struct sConfig {
struct sESPMenu {bool Line;bool Box;bool Skeleton;
bool Health;bool ShowKnockedHealth;bool Name;bool Distance;
bool TeamID;bool Dbox;bool Radar;bool Offsc;bool Genn;
int Aim50;int Aim100;int Aim150;int Aim200;int Aim250;
int Aim300;int AimYQ;int gDistance;bool NoBot;bool Loot;};
sESPMenu ESPMenu;struct sPlayerESP {bool ActiveEsp;bool 上;bool 中;bool 下;
bool AirDrop;bool AUTOGOODZ;bool AUTOGOODY;bool AUTOGOODX;
bool AUTOGOODXX;bool AUTOGOODYY;bool Box;bool 准心射线;
bool Alert360;bool Box3D;bool Health;bool Skeleton;bool Name;bool Radar;
bool Distance;bool TeamID;bool Vehicle;bool NoBot;bool LootBox;
bool Grenade;bool VehicleHP;bool VehicleFuel;bool Bypass1;};
sPlayerESP PlayerESP{0};struct sHighRisk {bool Shake;bool Recoil;bool Instant;bool Ghost;
bool Para;bool HitEffect;};sHighRisk HighRisk{0};
struct sVehicleESP {bool ShowVehicle;bool ShowDistance;};
sVehicleESP VehicleESP{0}; struct sSilentAim {bool Enable;
bool AimBot;float Cross;float Recc;EAim By;EAimTarget Target;
EAimTrigger Trigger;bool Pred;bool ReCo;bool IgnoreKnocked;bool VisCheck;
bool IgnoreBots;};sSilentAim SilentAim{0};
struct sAimMenu {bool 子追2;bool A1;float Cross;bool Enable1;
bool Enable;bool Enable360;bool LongJump;bool AimBot;bool Fovb;bool FovbJ;
EAimTarget Target;EAimTrigger Trigger;bool IgnoreKnocked;bool VisCheck;
bool IgnoreBots;float FovEdit;bool RecoilComparison;float Recc;bool Prediction;
float Line;bool IgnoreBot; bool IgnoreKnocked1;bool IgnoreBot1;
bool VisCheck1;bool IgnoreBots1;bool Fov;};
sAimMenu BulletTracking{0};sAimMenu AimBot{0};sAimMenu Bullet360{0};
struct sOTHER {bool FPS;};sOTHER OTHER{0};struct sColorsESP{
float *PVLine;
float *小晨;
float *PVILine;float *BVLine;float *BVILine;float *PVBox;float *PVIBox;float *BVBox;
float *BVIBox;float *PVLinebot;float *PVILinebot;float *PVSkeleton;float *PVISkeleton;float *BVSkeleton;
float *BVISkeleton;float *TeamID;float *PVName;float *PVIName;float *Name;float *Distance;float *Vehicle;float *Items;
float *Fov;float *Text;float *Menucolour;float *Line;float *Box;float *Boxbot;float *Skeleton;float *Skeletonbot;
float *Linebot;float *Count;float *颜色;float *PVisibile;};sColorsESP ColorsESP{0};};sConfig Config{0};


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





//Darw渲染
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






static float LineSize = 0.6f;static float BoxSize = 1.7f;static float SkeletonSize = 1.0f;
static float NameSize = 34.0f;static float DistanceSize = 35.0f;static float VehicleSize = 30.0f;
static int style_idx;static int xc_o = 0;struct sRegion {uintptr_t start, end;};
std::vector<sRegion> trapRegions;bool isObjectInvalid(UObject *obj) {
if (!Tools::IsPtrValid(obj)) {return true;}
if (!Tools::IsPtrValid(obj->ClassPrivate)) {return true;}
if (obj->InternalIndex <= 0) {return true;}
if (obj->NamePrivate.ComparisonIndex <= 0) {return true;}
if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {return true;}
if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {return true;}return false;}
std::string getObjectPath(UObject *Object) {std::string s;
for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
if (!s.empty())s += ".";s += super->NamePrivate.GetName();}return s;}
int32_t ToColor(float *col) {return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));}
FRotator ToRotator(FVector local, FVector target) {
FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);
float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);
FRotator newViewAngle = {0};
newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
newViewAngle.Roll = (float) 0.f;if (rotation.X >= 0.f)newViewAngle.Yaw += 180.0f;return newViewAngle;}
#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)

bool isInsideFOVs(int x, int y) {if (!自瞄)return true;
int circle_x = glWidth / 2;int circle_y = glHeight / 2;int rad = FOV;
return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;}
auto GetTargetForAimBot() {ASTExtraPlayerCharacter *result = 0;float max = std::numeric_limits<float>::infinity();
auto Actors = getActors();auto localPlayer = g_LocalPlayer;auto localController = g_LocalController;
if (localPlayer) {for (auto Actor : Actors) {if (isObjectInvalid(Actor))continue;
if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {auto Player = (ASTExtraPlayerCharacter *) Actor;
auto Target = (ASTExtraPlayerCharacter *) Actor;float dist = localPlayer->GetDistanceTo(Target) / 100.0f;
if (dist > 150)continue;if (Player->PlayerKey == localPlayer->PlayerKey)continue;
if (Player->TeamID == localPlayer->TeamID)continue;if (Player->bDead)continue;
if (忽略倒地) {if (Player->Health == 0.0f)continue;}
if (自瞄) {if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))continue;}
if (忽机) {if (Player->bEnsure)continue;}
auto Root = Player->GetBonePos("Root", {});auto Head = Player->GetBonePos("Head", {});
FVector2D RootSc, HeadPosSC;if (W2S(Root, &RootSc) && W2S(Head, &HeadPosSC)){
float height = abs(HeadPosSC.Y - RootSc.Y);float width = height * 0.65f;
FVector middlePoint = {HeadPosSC.X + (width / 2), HeadPosSC.Y + (height / 2), 0};
if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)){
FVector2D v2Middle = FVector2D((float)(glWidth / 2), (float)(glHeight / 2));
FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
if(isInsideFOVs((int)middlePoint.X, (int)middlePoint.Y)) {float dist = FVector2D::Distance(v2Middle, v2Loc);
if (dist < max) {max = dist;result = Player;}}}}}}}return result;}
#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)




auto 自瞄360度() {
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

if (Player->PlayerKey == localPlayer->PlayerKey)
continue;

if (Player->TeamID == localPlayer->TeamID)
continue;

if (Player->bDead)
continue;

if (Config.AimBot.IgnoreKnocked) {
if (Player->Health == 0.0f)
continue;
}

if (Config.AimBot.VisCheck) {
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
continue;
}

if (Config.AimBot.IgnoreBots) {
if (Player->bEnsure)
continue;
}


float dist = localPlayer->GetDistanceTo(Player);
if (dist < max) {
max = dist;
result = Player;
}
}
}
}


return result;
}
#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(g_LocalController, w, true, s)

ASTExtraPlayerCharacter *GetTargetByDistance() {
ASTExtraPlayerCharacter *result = 0;

auto infinity = std::numeric_limits<float>::infinity();
auto max = std::numeric_limits<uint32_t>::max();

auto Actors = getActors();

auto localPlayer = g_LocalPlayer;
auto localController = g_LocalController;

if (localPlayer) {
for (auto Actor: Actors) {
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

if (Config.SilentAim.VisCheck) {
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
continue;
}


if (Config.SilentAim.IgnoreKnocked) {
if (Player->Health == 0.0f)
continue;
}

if (IgnoreBot) {
if (Player->bEnsure)
continue;
}
 

float dist = g_LocalPlayer->GetDistanceTo(Actor);
if (dist < max) {
max = dist;
result = Player;
}
}
}
}
return result;
}

auto GetTargetByCrossDist() {
ASTExtraPlayerCharacter *result = 0;
float max = std::numeric_limits<float>::infinity();

auto Actors = getActors();

auto localPlayer = g_LocalPlayer;
auto localController = g_LocalController;


if (localPlayer) {
localPlayer->MoveAntiCheatComponent = 0;
localController->AntiCheatManagerComp = 0;
for (int i = 0; i < Actors.size(); i++) {
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

if (Config.BulletTracking.IgnoreKnocked) {
if (Player->Health == 0.0f)
continue;
}




if (Config.BulletTracking.VisCheck) {
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
continue;
}
 
 
if (Config.BulletTracking.IgnoreBots) {
if (Player->bEnsure)
continue;
}

auto HeadPos = Player->GetBonePos("Head", {});
HeadPos.Z = HeadPos.Z + 1.0f; //head se line ooper





auto RootPos = Player->GetBonePos("Root", {});






 


FVector2D RootPosSC, headPosSC;
if (W2S(HeadPos,&headPosSC) &&W2S(RootPos,&RootPosSC)) {

float height = abs(headPosSC.Y - RootPosSC.Y);
float width = height * 0.65f;

FVector middlePoint = {headPosSC.X + (width / 2), headPosSC.Y + (height / 2), 0};
if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

float dist = FVector2D::Distance(v2Middle, v2Loc);

if (dist < max) {
max = dist;
result = Player;
}}}}}}

return result;
}
#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)
auto GetTargetByPussy() {
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

 /* if (Config.SilentAim.IgnoreKnocked) {
if (Player->Health == 0.0f)
continue;
}

if (Config.SilentAim.IgnoreBots) {
if (Player->bEnsure)
continue;
}*/

 
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
continue;

float dist = g_LocalPlayer->GetDistanceTo(Player);
 if (dist < max) {
 max = dist;
result = Player;

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
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
return "Motorbike";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
return "Dacia";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
return "Mini Bus";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
return "Pick Up";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
return "Buggy";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
return "UAZ";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
return "PG117";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
return "Aquarail";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
return "Mirado";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
return "Rony";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
return "Scooter";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
return "Snow Mobile";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
return "Tuk Tuk";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
return "Snow Bike";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
return "Surf Board";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
return "Snow Board";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
return "Amphibious";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
return "Lada Niva";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
return "UAV";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
return "Mega Drop";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
return "Lamborghini";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
return "Gold Mirado";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
return "Big Foot";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
return "UH60";
break;
default:
return "Vehicle";
break;
}
return "Vehicle";
}







void (*orig_shoot_event)(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, void *unk1, int unk2) = 0;
void shoot_event(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, ASTExtraShootWeapon *weapon, int unk1) {


if (Config.Bullet360.Enable) {
ASTExtraPlayerCharacter *Target = GetTargetByPussy();
if (Target) {
bool triggerOk = false;
if (Config.Bullet360.Trigger != EAimTrigger::None) {
if (Config.Bullet360.Trigger == EAimTrigger::Shooting) {
triggerOk = g_LocalPlayer->bIsWeaponFiring;
} else if (Config.Bullet360.Trigger == EAimTrigger::Scoping) {
triggerOk = g_LocalPlayer->bIsGunADS;
} else if (Config.Bullet360.Trigger == EAimTrigger::Both) {
triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
} else if (Config.Bullet360.Trigger == EAimTrigger::Any) {
triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
}
} else triggerOk = true;
if (triggerOk) {
FVector targetAimPos = Target->GetBonePos("Head", {});
if (Config.Bullet360.Target == EAimTarget::Chest) {
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



if (Config.BulletTracking.Enable) {
ASTExtraPlayerCharacter *Target = GetTargetByCrossDist();
if (Target) {
bool triggerOk = false;
if (Config.BulletTracking.Trigger != EAimTrigger::None) {
if (Config.BulletTracking.Trigger == EAimTrigger::Shooting) {
triggerOk = g_LocalPlayer->bIsWeaponFiring;
} else if (Config.BulletTracking.Trigger == EAimTrigger::Scoping) {
triggerOk = g_LocalPlayer->bIsGunADS;
} else if (Config.BulletTracking.Trigger == EAimTrigger::Both) {
triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
} else if (Config.BulletTracking.Trigger == EAimTrigger::Any) {
triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
}
} else triggerOk = true;
if (triggerOk) {
FVector targetAimPos = Target->GetBonePos("Head", {});
if (Config.BulletTracking.Trigger == EAimTarget::Chest) {
targetAimPos.Z -= 25.0f;
}


UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;



if (ShootWeaponEntityComponent) {
ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
if (CurrentVehicle) {
FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

float dist = g_LocalPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
} else {
FVector Velocity = Target->GetVelocity();

float dist = g_LocalPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
}
rot = ToRotator(g_LocalController->PlayerCameraManager->CameraCache.POV.Location, targetAimPos);
 


}
}
}
}



return orig_shoot_event(thiz, start, rot, weapon, unk1);





}








// ================================================================================================================================ //
class FPSCounter {
protected:
unsigned int m_fps;
unsigned int m_fpscount;
long m_fpsinterval;

public:
FPSCounter() : m_fps(0), m_fpscount(0), m_fpsinterval(0) {
}

void update() {
m_fpscount++;

if (m_fpsinterval < time(0)) {
m_fps = m_fpscount;

m_fpscount = 0;
m_fpsinterval = time(0) + 1;
}
}

unsigned int get() const {
return m_fps;
}
};
FPSCounter fps;







void Line(ImDrawList *draw,FVector2D origin, FVector2D dest, ImColor color)
{
 draw->AddLine({origin.X, origin.Y},{dest.X, dest.Y},color, 1.0f);
}
bool W2S2(FVector worldPos, FVector2D *screenPos) {
return g_LocalController->ProjectWorldLocationToScreen(worldPos, true, screenPos);
}


void Box3D(ImDrawList *draw, FVector origin, FVector extends, ImColor col) {
origin.X -= extends.X / 2.f;
origin.Y -= extends.Y / 2.f;
origin.Z -= extends.Z / 2.f;


 FVector one = origin;
 FVector two = origin; two.X += extends.X;
 FVector tree = origin; tree.X += extends.X; tree.Y += extends.Y;
 FVector four = origin; four.Y += extends.Y;

 FVector five = one; five.Z += extends.Z;
 FVector six = two; six.Z += extends.Z;
 FVector seven = tree; seven.Z += extends.Z;
 FVector eight = four; eight.Z += extends.Z;

FVector2D s1, s2, s3, s4, s5, s6, s7, s8;
if (W2S2(one, &s1) && W2S2(two, &s2) && W2S2(tree, &s3) && W2S2(four, &s4) &&
W2S2(five, &s5) && W2S2(six, &s6) && W2S2(seven, &s7) && W2S2(eight, &s8))
{

Line(draw,s1, s2, col);
Line(draw,s2, s3, col);
Line(draw,s3, s4, col);
Line(draw,s4, s1, col);
 
Line(draw,s5, s6, col);
Line(draw,s6, s7, col);
Line(draw,s7, s8, col);
Line(draw,s8, s5, col);
 
Line(draw,s1, s5, col);
Line(draw,s2, s6, col);
Line(draw,s3, s7, col);
Line(draw,s4, s8, col);

}
}

void Box4Line(ImDrawList *draw, float thicc, int x, int y, int w, int h, int color) {
int iw = w / 4;
int ih = h / 4;
// top
draw->AddRect(ImVec2(x, y),ImVec2(x + iw, y), color, thicc);
draw->AddRect(ImVec2(x + w - iw, y),ImVec2(x + w, y), color, thicc);
draw->AddRect(ImVec2(x, y),ImVec2(x, y + ih), color, thicc);
draw->AddRect(ImVec2(x + w - 1, y),ImVec2(x + w - 1, y + ih), color, thicc);;
// bottom
draw->AddRect(ImVec2(x, y + h),ImVec2(x + iw, y + h), color, thicc);
draw->AddRect(ImVec2(x + w - iw, y + h),ImVec2(x + w, y + h), color, thicc);
draw->AddRect(ImVec2(x, y + h - ih), ImVec2(x, y + h), color, thicc);
draw->AddRect(ImVec2(x + w - 1, y + h - ih), ImVec2(x + w - 1, y + h), color, thicc);
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

int 手机版本() {
char prop_value[PROP_VALUE_MAX];
__system_property_get("ro.build.version.sdk", prop_value);
return atoi(prop_value);
}


std::string 手机名字() {
char 设备品牌名称[1024] = {0};
char prop值[1024] = {0};
FILE* 鸡脖;

鸡脖 = popen("getprop ro.product.brand", "r");
if (鸡脖 != NULL) {
if (fgets(prop值, sizeof(prop值), 鸡脖)) {
strncpy(设备品牌名称, prop值, sizeof(设备品牌名称));
}
pclose(鸡脖);
}

return std::string(设备品牌名称);
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
int 颜色数组[100];// 必须分配空间
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
int 播放音乐(const char* url) {
JavaVM* java_vm = g_App->activity->vm;
JNIEnv* java_env = NULL;
jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
if (jni_return == JNI_EDETACHED) {
if (java_vm->AttachCurrentThread(&java_env, NULL) != JNI_OK) {
return -1;
}
} else if (jni_return == JNI_EVERSION) {
return -1;
}
	jclass 音乐 = java_env->FindClass("android/media/MediaPlayer");
if (音乐 == NULL) {
return -3;
}

jmethodID create_method_id = java_env->GetMethodID(音乐, "<init>", "()V");
if (create_method_id == NULL) {
return -4;
}

jobject media_player_obj = java_env->NewObject(音乐, create_method_id);
if (media_player_obj == NULL) {
return -5;
}

jmethodID set_data_source_method_id = java_env->GetMethodID(音乐, "setDataSource", "(Ljava/lang/String;)V");
if (set_data_source_method_id == NULL) {
return -6;
		}

jstring url_str = java_env->NewStringUTF(url);
java_env->CallVoidMethod(media_player_obj, set_data_source_method_id, url_str);

jmethodID prepare_method_id = java_env->GetMethodID(音乐, "prepare", "()V");
if (prepare_method_id == NULL) {
return -7;
}
java_env->CallVoidMethod(media_player_obj, prepare_method_id);

jmethodID start_method_id = java_env->GetMethodID(音乐, "start", "()V");
if (start_method_id == NULL) {
return -8;
}
 
java_env->CallVoidMethod(media_player_obj, start_method_id);

java_env->DeleteLocalRef(音乐);
java_env->DeleteLocalRef(media_player_obj);
java_env->DeleteLocalRef(url_str);

if (java_vm->DetachCurrentThread() != JNI_OK) {
return -1;
}

return 0;
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



void DrawESP(ImDrawList*draw) {
if (g_LocalController == 0){
 FOV -= 10.0f;
if (FOV = 0.0f)//布局如果加到比100大固定100
{
FOV = 0.0f;
}
}else{
 FOV += 1.0f;
if (FOV > 300.0f)//布局如果加到比100大固定100
{
FOV = 300.0f;
}
}







AGameSession *GameSession = 0;
if(局内防举报){

auto FK = GameSession->MaxSplitscreensPerConnection;    
FK = 0;

}

if(主播模式){


draw->AddText(NULL, ((float) density / 9.6f), {(float) glWidth / 150 + glWidth / 40,640}, IM_COL32(255, 0, 0, 255), "欢迎使用神盾局");






if(p_open){
std::string sFPS = "神盾局一体直装 3.0 64BIT\n官方频道@SDJMOD;";
绘制字体描边(20.0f, glWidth / 2 - 600, glHeight / 2 - 300, ImVec4(1.0f, 1.0f, 1.0f, 1.0f), sFPS.c_str());
}
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

if (localController) {
for (int i = 0; i < Actors.size(); i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;

if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey == localController->PlayerKey) {
localPlayer = (ASTExtraPlayerCharacter *) Actor;
break;
}
}
}


if (localPlayer) {
if (localPlayer->PartHitComponent) {
auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {
ConfigCollisionDistSqAngles[j].Angle = 90.0f;
}
localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;
}

 
if(游戏进程){
 if (自瞄) {
{
ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
if (Target)
{
bool triggerOk = false;
if (Config.AimBot.Trigger == EAimTrigger::Shooting)
{
triggerOk = g_LocalPlayer->bIsWeaponFiring;
}
else if (Config.AimBot.Trigger == EAimTrigger::Scoping)
{
triggerOk = g_LocalPlayer->bIsGunADS;
}
else if (Config.AimBot.Trigger == EAimTrigger::Both)
{
triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
}
else if (Config.AimBot.Trigger == EAimTrigger::Any)
{
triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
}

else
triggerOk = true;
if (triggerOk)
{
FVector targetAimPos = Target->GetBonePos("Head", {});
if (Config.AimBot.Target == EAimTarget::Chest)
{
targetAimPos.Y -= 1.228f;
targetAimPos.Z -= 25.0f;
//targetAimPos.X -= Config.Skill4;
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


}
else
{
FVector Velocity = Target->GetVelocity();


/*targetAimPos.Z += Velocity.Z * timeToTravel + 0.5 * Config.Line * timeToTravel * timeToTravel;*/
}

if (自瞄) {
if (g_LocalPlayer->bIsGunADS) {
 if (g_LocalPlayer->bIsWeaponFiring) {
float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f; 
targetAimPos.Z -= dist * 压枪系数;

}
 }
}

localController->SetControlRotation(ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location, targetAimPos),"");}}}}}}}}}

}


static bool bShooting = false;
 if (Config.Bullet360.Enable) {
auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
if (WeaponManagerComponent) {
auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
if (CurrentWeaponReplicated) {
auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
if (ShootWeaponComponent) {
int shoot_event_idx = 165;
auto VTable = (void **) ShootWeaponComponent->VTable;
// CHANGE22222 add lambda function f_mprotect
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
// CHANGE22222 add call of f_mprotect
f_mprotect((uintptr_t)(&VTable[shoot_event_idx]), sizeof(uintptr_t), PROT_READ | PROT_WRITE);
VTable[shoot_event_idx] = (void *) shoot_event;
}
}
}
 }
}
}

if (Config.BulletTracking.Enable) {
   auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
         if (WeaponManagerComponent) {
  auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
  if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
   auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
              if (CurrentWeaponReplicated) {
   auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
             if (ShootWeaponComponent) {
              int shoot_event_idx = 165;
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
 







 //ESP=====//ZDMOD
for (int i = 0; i < Actors.size(); i++)
				{
					auto Actor = Actors[i];
					if (isObjectInvalid(Actor))
						continue;
					if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
					{
					
					long PlayerBoxClrCf = ToColor(Config.ColorsESP.PVisibile);
long PlayerBoxClrCf2 = ToColor(Config.ColorsESP.PVisibile);
					
						auto Player = (ASTExtraPlayerCharacter *)Actor;
long PBox, PLine, PSkeleton;


						float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
						
							
	 			if (Distance > 绘制距离)//默认绘制距离
							continue;
							int SCOLOR;
int SCOLOR2;


					int Colorhealth;
						int healthOutline;
if (Player->bEnsure)
						{
totalBots++;
							Colorhealth = IM_COL32(0, 255, 174, 110);
							healthOutline = IM_COL32(0, 255, 174, 255);
						}
else 
						{
							totalEnemies++;
							Colorhealth = IM_COL32(255, 0, 0, 110);
							healthOutline = IM_COL32(255, 0, 0, 255);
							}
						if (Player->PlayerKey == localController->PlayerKey)
							continue;
						if (Player->TeamID == localController->TeamID)
							continue;
						if (Player->bDead)
							continue;
						if (!Player->Mesh)
							continue;
						if (Player->bEnsure)
						{						
					 		totalBots++;
						PBox = ToColor(Config.ColorsESP.BVBox);
PLine = ToColor(Config.ColorsESP.BVLine);
PSkeleton = ToColor(Config.ColorsESP.BVSkeleton);
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
{
PBox = ToColor(Config.ColorsESP.BVIBox);
PLine = ToColor(Config.ColorsESP.BVILine);
PSkeleton = ToColor(Config.ColorsESP.BVISkeleton);
}
						} else {
							totalEnemies++;
						PBox = ToColor(Config.ColorsESP.PVBox);
PLine = ToColor(Config.ColorsESP.PVLine);
PSkeleton = ToColor(Config.ColorsESP.PVSkeleton);
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
{
PBox = ToColor(Config.ColorsESP.PVIBox);
PLine = ToColor(Config.ColorsESP.PVILine);
PSkeleton = ToColor(Config.ColorsESP.PVISkeleton);
}
						}




if (忽略人机)
if (Player->bEnsure)
continue;
else
totalEnemies++;

auto HeadPos = Player->GetBonePos("Head", {});
ImVec2 HeadPosSC;
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
if (W2S(HeadPos, (FVector2D *)&HeadPosSC) && W2S(upper_r, (FVector2D *)&upper_rPoSC) && W2S(upper_l, (FVector2D *)&upper_lPoSC) && W2S(lowerarm_r, (FVector2D *)&lowerarm_rPoSC) && W2S(hand_r, (FVector2D *)&hand_rPoSC) && W2S(lowerarm_l, (FVector2D *)&lowerarm_lSC) && W2S(hand_l, (FVector2D *)&hand_lPoSC) && W2S(thigh_l, (FVector2D *)&thigh_lPoSC) && W2S(calf_l, (FVector2D *)&calf_lPoSC) && W2S(foot_l, (FVector2D *)&foot_lPoSC) && W2S(thigh_r, (FVector2D *)&thigh_rPoSC) && W2S(calf_r, (FVector2D *)&calf_rPoSC) && W2S(foot_r, (FVector2D *)&foot_rPoSC) && W2S(neck_01, (FVector2D *)&neck_01PoSC) && W2S(Pelvis, (FVector2D *)&PelvisPoSC) && W2S(RootPos, (FVector2D *)&RootPosSC)){
FVector2D screen(glWidth, glHeight);
FVector2D location(RootPosSC.x, HeadPosSC.y);





 if (独家血量) {
int CurHP = (int) std::max(0, std::min(
(int) Player->Health,
(int) Player->HealthMax));
int MaxHP = (int) Player->HealthMax;

/*long HPColor = IM_COL32(
std::min(((510 * (MaxHP - CurHP)) / MaxHP),
255),
std::min((510 * CurHP) / MaxHP, 255), 0,
110);*/
														
												long HPColor;
if (Player->Health < 25)
HPColor = IM_COL32(255, 0, 0, 50);
 else if (Player->Health < 50)
HPColor = IM_COL32(255, 165, 0, 50);
 else if ( Player->Health < 75)
HPColor = IM_COL32(255, 255, 0, 50);
else
HPColor = Colorhealth;

//if (Config.ESPMenu.ShowKnockedHealth) {
if (Player->Health == 0.0f && !Player->bDead) {
SCOLOR = IM_COL32(250, 22, 253, 110);

HPColor = IM_COL32(255, 100, 0, 40);

CurHP = Player->NearDeathBreath;
if (Player->NearDeatchComponent) {
MaxHP = Player->NearDeatchComponent->BreathMax;
}
}
//}

float boxWidth = density / 1.6f;
boxWidth -= std::min(
((boxWidth / 2) / 0.001f) * Distance,
boxWidth / 2);
float boxHeight = boxWidth * 0.15f;


ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2),
HeadPosSC.y -
(boxHeight * 2.001f)};

ImVec2 vEndFilled = {
vStart.x + (CurHP * boxWidth / MaxHP),
vStart.y + boxHeight};
ImVec2 vEndRect = {vStart.x + boxWidth,
vStart.y + boxHeight};

draw->AddRectFilled(vStart, vEndFilled, HPColor,
2.0f);
draw->AddRect(vStart, vEndRect,
healthOutline, 2.0f);}



if (人物射线) {
draw->AddLine({(float)glWidth / 2, 0}, HeadPosSC, PLine, 0.1f);
}

								if (怪物) 
       {
                      if (Actor->IsA(UObjectCountWatcherComponent::StaticClass())) {
                                auto Grenade = (UObjectCountWatcherComponent *) Actor;
                                auto RootComponent = Actor->RootComponent;
                                if (!RootComponent)
                                continue;
                                
               if (Distance >200.0f)
               continue;
                                FVector2D grenadePos;
 
               std::string classname = Grenade->GetName();
               if (classname.find("BPPawn_Library_C") != std::string::npos) {
                                    std::string s =  "大猩猩";
                                    s += "[";
                                    s += std::to_string((int) Distance);
                                    s += "M]";
                                   draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255,255,255, 255), s.c_str());
                 }
               if (classname.find("BPPAWn_HungerH_C") != std::string::npos) {
                                    std::string s =  "爬行者";
                                    s += "[";
                                    s += std::to_string((int) Distance);
                                    s += "M]";
                                   draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255, 255, 255, 255), s.c_str());
                 }
               if (classname.find("BPPawn_HungerB_C") != std::string::npos) {
                                    std::string s =  "爬行者2";
                                    s += "[";
                                    s += std::to_string((int) Distance);
                                    s += "M]";
                                   draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255,255,255, 255), s.c_str());
                }
               if (classname.find("BPPawn_Watcher_C") != std::string::npos) {
                                    std::string s =  "观察者";
                                    s += "[";
                                    s += std::to_string((int) Distance);
                                    s += "M]";
                                   draw->AddText(NULL, ((float) density / 30.0f),{grenadePos.X, grenadePos.Y},IM_COL32(255, 255, 255, 255), s.c_str());
     }
                                }
                            }

if (修复骨骼){
float boxWidth = 7.f - Distance * 0.03;
//draw->AddCircle({HeadPosSC.x, HeadPosSC.y}, boxWidth, PSkeleton, 0, 0.1f);
draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, neck_01PoSC, PSkeleton, 0.1f);
draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, neck_01PoSC, PSkeleton, 0.1f);
draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, lowerarm_rPoSC, PSkeleton, 0.1f);
draw->AddLine({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, hand_rPoSC, PSkeleton, 0.1f);
draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, lowerarm_lSC, PSkeleton, 0.1f);
draw->AddLine({lowerarm_lSC.x, lowerarm_lSC.y}, hand_lPoSC, PSkeleton, 0.1f);
draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, thigh_lPoSC, PSkeleton, 0.1f);
draw->AddLine({thigh_lPoSC.x, thigh_lPoSC.y}, calf_lPoSC, PSkeleton, 0.1f);
draw->AddLine({calf_lPoSC.x, calf_lPoSC.y}, foot_lPoSC, PSkeleton, 0.1f);
draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, calf_rPoSC, PSkeleton, 0.1f);
draw->AddLine({calf_rPoSC.x, calf_rPoSC.y}, foot_rPoSC, PSkeleton, 0.1f);
draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, PelvisPoSC, PSkeleton, 0.1f);
draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, HeadPosSC, PSkeleton, 0.1f);
}if (最新方框) {
float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
float boxWidth = boxHeight * 0.65f;
Box4Line(draw, 0.5f, HeadPosSC.x - (boxWidth / 2), HeadPosSC.y, boxWidth, boxHeight,  IM_COL32(255,255,0,255));} 
if (追踪线) {
ASTExtraPlayerCharacter *Target = GetTargetByCrossDist();
long PlayerAimLineColor = IM_COL32(0,0,139, 255);
if (Target) {
FVector HEAD = Target->GetBonePos("Head", {});
 ImVec2 HeadPosSCC;//这个"Head"不要改，不会显示
if (W2S(HEAD, (FVector2D *)&HeadPosSCC)) {
ImDrawList *draw = ImGui::GetBackgroundDrawList();
draw->AddLine({(float) glWidth / 2,(float) (glHeight / 2)}, HeadPosSCC,
PlayerBoxClrCf, 0.1f);
}}}
 if (显示名字) {
std::string s;
if (Player->bEnsure) {
s += "机器人-BOT";
} else {
s += Player->PlayerName.ToString();}
绘制字体描边(13.f, HeadPosSC.x - 28, HeadPosSC.y - 23.0f, ImVec4(1.0f, 1.0f, 1.0f, 1.0f), s.c_str());}
if (显示距离) {
std::string s;
s += std::to_string((int)Distance);
s += "米";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 20.0f));
draw->AddText(NULL, 20, {RootPosSC.x - (textSize.x / 2), RootPosSC.y}, IM_COL32(255, 255, 255, 255), s.c_str());}}}
//BY小晨







if (Actors[i]->IsA(APickUpWrapperActor::StaticClass()))
{auto PickUp = (APickUpWrapperActor *)Actors[i];
if (Items[PickUp->DefineID.TypeSpecificID])
{auto RootComponent = PickUp->RootComponent;if (!RootComponent)continue;
float Distance = PickUp->GetDistanceTo(localPlayer) / 100.f;FVector2D itemPos;
if (W2S(PickUp->K2_GetActorLocation(), &itemPos)){std::string s;
uint32_t tc = 0xFF000000;for (auto &category : items_data){
for (auto &item : category["Items"]){if (item["itemId"] == PickUp->DefineID.TypeSpecificID){
s = item["itemName"].get<std::string>();break;}}}s += "";s += std::to_string((int)Distance);s += "米";
draw->AddText(NULL, ((float)density / 25.0f), {itemPos.X, itemPos.Y}, ToColor(Config.ColorsESP.Items), s.c_str());}}}}}}

g_LocalController = localController;
g_LocalPlayer = localPlayer;
//SDK功能拿枪加速


std::string s;
ImColor sColor;






draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), FOV*0.5f, ToColor(Config.ColorsESP.颜色), 100, 0.0f);




}
 
 
 
 
 
 
 

 


std::string getClipboardText() {if (!g_App)return "";auto activity = g_App->activity;if (!activity)
return "";auto vm = activity->vm;if (!vm)return "";auto object = activity->clazz;if (!object)
return "";std::string result;JNIEnv *env;vm->AttachCurrentThread(&env, 0);{
auto ContextClass = env->FindClass("android/content/Context");
auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");auto str = env->NewStringUTF("clipboard");
auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);env->DeleteLocalRef(str);
auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");
auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");
auto text = env->CallObjectMethod(clipboardManager, getText);
if (text) {str = (jstring) env->CallObjectMethod(text, toStringMethod);
result = env->GetStringUTFChars(str, 0);env->DeleteLocalRef(str);env->DeleteLocalRef(text);}
env->DeleteLocalRef(CharSequenceClass);env->DeleteLocalRef(ClipboardManagerClass);
env->DeleteLocalRef(clipboardManager);env->DeleteLocalRef(ContextClass);}
vm->DetachCurrentThread();return result;}

const char *GetAndroidID(JNIEnv *env, jobject context) {
jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());
auto obj = env->CallObjectMethod(context, getContentResolverMethod);
auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
return env->GetStringUTFChars(str, 0);}
const char *GetDeviceModel(JNIEnv *env) {
jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());
auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
return env->GetStringUTFChars(str, 0);}
const char *GetDeviceBrand(JNIEnv *env) {
jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());
auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
return env->GetStringUTFChars(str, 0);}
const char *GetPackageName(JNIEnv *env, jobject context) {
jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());
auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
return env->GetStringUTFChars(str, 0);}
const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());
auto len = strlen(uuid);
jbyteArray myJByteArray = env->NewByteArray(len);
env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);
jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());
auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
return env->GetStringUTFChars(str, 0);}
struct MemoryStruct {char *memory;size_t size;};
namespace ZDMOD{static int 列表 = 1;}
static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
size_t realsize = size * nmemb;
struct MemoryStruct *mem = (struct MemoryStruct *) userp;

mem->memory = (char *) realloc(mem->memory, mem->size + realsize + 1);
if (mem->memory == NULL) {return 0;}

memcpy(&(mem->memory[mem->size]), contents, realsize);
mem->size += realsize;mem->memory[mem->size] = 0;
return realsize;}
namespace Settings
{
static int Tab = 1;
}
void CenterColored(const char *text){
ImGui::SetCursorPosX((ImGui::GetWindowWidth() - ImGui::CalcTextSize(text).x) / 2.f);
ImGui::TextColored(ImVec4(2.55f, 0.69f, 0.00f, 1.00f),text);}


char *appkey = "ZDMOD云端验证";
char *登录调用码 = "PUBGSDJ2892";

char *提示 = "";
static bool 错误提示 = false;

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


#define IM_CLAMP(V, MN, MX) ((V) < (MN) ? (MN) : (V) > (MX) ? (MX) : (V))
//开始渲染
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
if (!initImGui) {
ImGui::CreateContext();

ImGuiStyle& style = ImGui::GetStyle();



		    
		    
		    
style.WindowPadding = ImVec2(10, 15);
style.WindowRounding = 5.5f;
style.FramePadding = ImVec2(4, 5);
style.FrameRounding = 5.0f;
style.WindowTitleAlign = ImVec2(0.5, 0.5);
style.FrameBorderSize = 3.5f;
style.WindowBorderSize = 3.0f;
style.TabBorderSize = 2.0f;
style.WindowMinSize = ImVec2(300, 220);
style.WindowTitleAlign = ImVec2(0.5, 0.5);
style.ButtonTextAlign = ImVec2(0.5,0.5);
style.Colors[ImGuiCol_Text]=ImVec4(0,0,0,255);
style.Colors[ImGuiCol_TextDisabled]=ImColor(242,51,51,255);

style.Colors[ImGuiCol_WindowBg]=ImColor(194,0,113,255);
style.Colors[ImGuiCol_ChildBg]=ImColor(194,0,113,255);
style.Colors[ImGuiCol_PopupBg]=ImColor(255,215,0,255);
style.Colors[ImGuiCol_Border]=ImColor(194,94,0,255);
style.Colors[ImGuiCol_BorderShadow]=ImColor(194,94,0,255);
style.Colors[ImGuiCol_FrameBg]=ImColor(247,164,87,255);
style.Colors[ImGuiCol_FrameBgActive]=ImColor(247,164,87,255);
style.Colors[ImGuiCol_FrameBgHovered]=ImColor(247,164,87,255);
style.Colors[ImGuiCol_TitleBg]=ImColor(222,75,22,255);
style.Colors[ImGuiCol_TitleBgActive]=ImColor(222,75,22,255);
style.Colors[ImGuiCol_TitleBgCollapsed]=ImColor(222,75,22,130);
style.Colors[ImGuiCol_MenuBarBg]=ImVec4(255,215,0,255);
style.Colors[ImGuiCol_ScrollbarBg]=ImColor(222,75,22,255);
style.Colors[ImGuiCol_ScrollbarGrab]=ImVec4(255,215,0,255);
style.Colors[ImGuiCol_ScrollbarGrabHovered]=ImVec4(255,215,0,255);
style.Colors[ImGuiCol_ScrollbarGrabActive]=ImVec4(255,215,0,255);
style.Colors[ImGuiCol_CheckMark]=ImVec4(255,215,0,255);
style.Colors[ImGuiCol_SliderGrab]=ImVec4(255,215,0,255);
style.Colors[ImGuiCol_SliderGrabActive]=ImVec4(184,180,70,255);
style.Colors[ImGuiCol_Separator]=ImColor(235,133,23,255);
style.Colors[ImGuiCol_SeparatorActive]=ImColor(235,133,23,255);
style.Colors[ImGuiCol_SeparatorHovered]=ImColor(235,133,23,255);
style.Colors[ImGuiCol_Button]=ImColor(235,23,23,255);
style.Colors[ImGuiCol_ButtonActive]=ImColor(235,23,23,255);
style.Colors[ImGuiCol_ButtonHovered]=ImColor(235,23,23,255);
style.Colors[ImGuiCol_Header]=ImColor(235,23,150,255);
style.Colors[ImGuiCol_HeaderActive]=ImColor(235,23,150,255);
style.Colors[ImGuiCol_HeaderHovered]=ImColor(235,23,150,255);
style.Colors[ImGuiCol_ResizeGrip]=ImVec4(255,215,0,255);
style.Colors[ImGuiCol_ResizeGripHovered]=ImVec4(255,215,0,255);
style.Colors[ImGuiCol_ResizeGripActive]=ImVec4(255,215,0,255);
style.Colors[ImGuiCol_PlotLines]=ImVec4(255,215,0,255);
style.Colors[ImGuiCol_PlotLinesHovered]=ImVec4(255,215,0,255);
style.Colors[ImGuiCol_PlotHistogram]=ImVec4(255,215,0,255);
style.Colors[ImGuiCol_PlotHistogramHovered]=ImVec4(255,215,0,255);
style.Colors[ImGuiCol_TextSelectedBg]=ImVec4(255,215,0,255);
//UI
style.ScaleAllSizes(std::max(2.5f,density/400.0f));
ImGui_ImplAndroid_Init();
ImGui_ImplOpenGL3_Init("#version 300 es");
ImGuiIO &io = ImGui::GetIO();
io.ConfigWindowsMoveFromTitleBarOnly = true;
io.IniFilename = NULL; //结束
static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
ImFontConfig icons_config;
ImFontConfig CustomFont;
CustomFont.FontDataOwnedByAtlas = false;
icons_config.MergeMode = true;
icons_config.PixelSnapH = true;
icons_config.OversampleH = 2.5;
icons_config.OversampleV = 2.5;
//字体
 io.Fonts->AddFontFromMemoryTTF((void *)XCNB_data, XCNB_size, 21.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 21.0f, &icons_config, icons_ranges);
ImFontConfig cfg;
cfg.SizePixels = ((float) density / 25.0f);
Snowflake::CreateSnowFlakes(Snow, SNOW_LIMIT, 5.f/*minimum size*/, 25.f/*maximum size*/, 0/*imgui window x position*/, 0/*imgui window y position*/, glWidth, glHeight, Snowflake::vec3(0.f, 0.005f)/*gravity*/, IM_COL32(99, 124, 146, 50)/*color*/);
memset(&Config, 0, sizeof(sConfig));

//颜色
Config.ColorsESP.PVisibile = CREATE_COLOR(28, 252, 3, 255);
Config.ColorsESP.PVLine = CREATE_COLOR(0, 255, 0, 255);
Config.ColorsESP.PVILine = CREATE_COLOR(255, 0, 0, 255);
Config.ColorsESP.BVLine = CREATE_COLOR(255, 255, 255, 255);
Config.ColorsESP.BVILine = CREATE_COLOR(255, 255, 255, 255);
Config.ColorsESP.PVBox = CREATE_COLOR(0, 255, 0, 255);
Config.ColorsESP.PVIBox = CREATE_COLOR(255, 0, 0, 255);
Config.ColorsESP.BVBox = CREATE_COLOR(255, 255, 255, 255);

Config.ColorsESP.BVIBox = CREATE_COLOR(255, 255, 255, 255);
Config.ColorsESP.PVSkeleton = CREATE_COLOR(0, 255, 0, 255);
Config.ColorsESP.PVISkeleton = CREATE_COLOR(255, 0, 0, 255);
Config.ColorsESP.BVSkeleton = CREATE_COLOR(255, 255, 255, 255);
Config.ColorsESP.BVISkeleton = CREATE_COLOR(255, 255, 255, 255);
Config.ColorsESP.Line = CREATE_COLOR(255, 255, 255, 255);
Config.ColorsESP.Box = CREATE_COLOR(255, 255, 255, 255);
Config.ColorsESP.Name = CREATE_COLOR(255, 255, 255, 255);
Config.ColorsESP.Distance = CREATE_COLOR(255, 255, 255, 255);
Config.ColorsESP.Vehicle = CREATE_COLOR(255, 255, 255, 255);
Config.ColorsESP.颜色 = CREATE_COLOR(255, 255, 255, 255);
initImGui = true;
for (auto &i : items_data) {for (auto &item : i["Items"]) {int r, g, b;
sscanf(item["itemTextColor"].get<std::string>().c_str(), "#%02X%02X%02X", &r, &g, &b);
ItemColors[item["itemId"].get<int>()] = CREATE_COLOR(r, g, b, 255);}}initImGui = true;
}

ImGuiIO &io = ImGui::GetIO();
ImGui_ImplOpenGL3_NewFrame();
ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
ImGui::NewFrame();

DrawESP(ImGui::GetBackgroundDrawList());
//限制UI长宽

bool showsta = true;
char s[64];
char buf[128];
//ZDMOD悬浮窗 






for (int i = 0; i < IM_ARRAYSIZE(io.KeysDown); i++) {
    if (ImGui::IsKeyDown(i)) {
        p_open = !p_open;
    }
}
if(p_open){
if (ImGui::Begin(OBFUSCATE(" 神盾局-Shield  |  PUBGM 3.0  |  64BIT  |  V13 "), 0, ImGuiWindowFlags_NoBringToFrontOnFocus )) {
 


static std::string err;
if (!isLogin) {
ImGui::Text("请输入神盾局卡号 | TG-SDJMOD");


ImGui::PushItemWidth(-1);
static char s[64];
ImGui::InputText("##key", s, sizeof s);
ImGui::PopItemWidth();

ImGui::PushItemWidth(-1);
if (ImGui::Button("粘贴", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) { 
auto key = getClipboardText();
strncpy(s, key.c_str(), sizeof s);}
ImGui::PopItemWidth();
if (ImGui::Button("登录", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) { Login(s); }; 
ImGui::PopItemWidth();

if(ImGui::Button("购买卡密")){
跳转浏览器("https://buy.nmslcnm.cn/links/63D51516");};
ImGui::SameLine();

if(ImGui::Button("解绑卡密")){
跳转浏览器("https://www.t3yanzheng.com/unbound.php?C28011E264F9D0FE");};
ImColor color(0, 255, 255); 
							
							ImColor CRZN(255, 255, 0); 
							
					HueText("TG: SDJMOD", CRZN);

ImGui::PopItemWidth();
time_t tt_;
struct tm *tm_ ; 
{time(&tt_); tm_ = localtime(&tt_);
ImGui::Text("当前时间：%d年%d月%d日 %02d:%02d:%02d\r", 1900 + tm_->tm_year,
tm_->tm_mon + 1, tm_->tm_mday, tm_->tm_hour, tm_->tm_min, tm_->tm_sec);}
ImGui::Text("错误提示:");

if (错误提示) {
ImGui::SameLine(); 
ImGui::Text("%s",提示);}
ImGui::Text("卡密验证次数%2lf次", (double)clock() / CLOCKS_PER_SEC);
ImGui::PopItemWidth();}else{


	

 			ImGui::Text("                欢迎使用神盾局直装");
ImGui::Separator(); 			
ImGui::Columns(2);
ImGui::SetColumnOffset(1, 195);
{


ImGui::Text("\n\n\n");

if (ImGui::Button("人物透视", ImVec2(135,65)))
Settings::Tab = 1;	




if (ImGui::Button("功能页面", ImVec2(135,65)))
Settings::Tab = 2;	


if (ImGui::Button("物资显示", ImVec2(135,65)))
Settings::Tab = 3;	


if (ImGui::Button("内存美化", ImVec2(135,65)))
Settings::Tab = 4;



ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 000, 255));

ImGui::PopStyleColor();

}
ImGui::NextColumn();




time_t tt_;
struct tm *tm_ ; 
{time(&tt_); tm_ = localtime(&tt_);
ImGui::Text("当前时间:%d年%d月%d日 %02d:%02d:%02d\r", 1900 + tm_->tm_year,
tm_->tm_mon + 1, tm_->tm_mday, tm_->tm_hour, tm_->tm_min, tm_->tm_sec);}
ImGui::Text("到期时间:%s",到期时间);


ImGui::Separator();
 if (Settings::Tab == 1) {
 ImGui::SliderFloat("绘制距离", &绘制距离, 150.0f, 500.0f); 
ImGui::Text( " 绘制渲染实时帧率FPS %.2f", 1000 / io.Framerate );
if(开启绘制){
独家血量 = true;
修复骨骼 = true;
显示距离 = true;
怪物 = true;
显示名字 = true;
}else{
独家血量 = false;
修复骨骼 = false;
显示距离 = false;
怪物 = false;
显示名字 = false;
}
ImGui::Checkbox("一键开启 ", &开启绘制);
ImGui::SameLine();
ImGui::Checkbox("忽略人机 ", &忽略人机);
ImGui::Text( "细节调整");
ImGui::Checkbox("显示射线 ", &人物射线);
ImGui::SameLine();
ImGui::Checkbox("独家血量 ", &独家血量);
ImGui::SameLine();
ImGui::Checkbox("修复骨骼 ", &修复骨骼);

ImGui::Checkbox("显示距离 ", &显示距离);
ImGui::SameLine();
ImGui::Checkbox("显示名字 ", &显示名字);
ImGui::SameLine();
ImGui::Checkbox("绘制狗子 ", &怪物);

ImGui::Text("-耗时:%.3fms 帧数:%.1f 帧率", 1000.0f / ImGui::GetIO().Framerate,
ImGui::GetIO().Framerate);




ImGui::Text("分辨率: %dx%d", screenWidth,screenHeight);

ImGui::Text(" 云端服务器运行中 %c", "|/-\\"[(int)(ImGui::GetTime() / 0.05f) & 3]);
static float values[90]= {};
static int values_offset= 0;
static double refresh_time = 0.0;
while( refresh_time < ImGui::GetTime() ) // Create data at fixed 60 Hz rate for the demo
{
static float phase= 0.0f;
values[values_offset] = cosf( phase );
values_offset = ( values_offset + 1 ) % IM_ARRAYSIZE( values );
phase += 0.10f * values_offset;
refresh_time += 1.0f / 60.0f;
}
char overlay[32] = "";
ImGui::PlotLines("", values, IM_ARRAYSIZE( values ), values_offset, overlay, -1.0f, 1.0f, ImVec2( 0,20.0f ) );
//ImGui::SameLine();
ImGuiIO io = ImGui::GetIO();
					 
}
else if(Settings::Tab == 4){
ImGui::Text("使用美化前先下载资源包 不然没有效果");



					
								


ImGui::Text("衣服美化");
if(ImGui::Button("蓝木乃伊")){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC5AFD38)+0x0)+0x340)+0x30)+0x388)+0x118, 1406891);
}
ImGui::SameLine(); 
if(ImGui::Button("动态果冻")){

写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC5AFD38)+0x0)+0x340)+0x30)+0x388)+0x118, 1406971);
}
ImGui::SameLine(); 
if(ImGui::Button("小黄鸭鸭")){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC5AFD38)+0x0)+0x340)+0x30)+0x388)+0x118, 1405801);
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC5AFD38)+0x0)+0x340)+0x30)+0x388)+0x70, 1405791);
}
ImGui::SameLine(); 
if(ImGui::Button("凛冬冰后")){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC5AFD38)+0x0)+0x340)+0x30)+0x388)+0x118, 1407107);
}

if(ImGui::Button("明日香女")){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC5AFD38)+0x0)+0x340)+0x30)+0x388)+0x118, 1406387);
}
ImGui::SameLine(); 
if(ImGui::Button("黄金风衣")){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC5AFD38)+0x0)+0x340)+0x30)+0x388)+0x118, 1400779);
}
ImGui::SameLine(); 
if(ImGui::Button("黄木乃伊")){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC5AFD38)+0x0)+0x340)+0x30)+0x388)+0x118, 1405623);
}
ImGui::SameLine(); 
if(ImGui::Button("白木乃伊")){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC5AFD38)+0x0)+0x340)+0x30)+0x388)+0x118, 12201101);
}
ImGui::Text("头盔背包美化");
if(ImGui::Button("性感胖达头盔")){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC5AFD38)+0x0)+0x340)+0x30)+0x388)+0x1F8,1502003027);
}
ImGui::SameLine(); 
if(ImGui::Button("地狱骑士头盔")){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC5AFD38)+0x0)+0x340)+0x30)+0x388)+0x1F8,1502002014);
}


if(ImGui::Button("恐龙布朗熊背包")){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC5AFD38)+0x0)+0x340)+0x30)+0x388)+0x1C0,1501003261);
}
ImGui::SameLine(); 
if(ImGui::Button("蔚蓝风暴背包")){
写入D类(readValueL(readValueL(readValueL(readValueL(readValueL(UE4+0xC5AFD38)+0x0)+0x340)+0x30)+0x388)+0x1C0,1501003009);
}


}
else if(Settings::Tab == 3){
	ImGui::Text("物资绘制 - 神盾局");

ImGui::Spacing();

for (auto &i : items_data) {
if (ImGui::TreeNode(i["Category"].get<std::string>().c_str())) {
ImGui::Spacing();
for (auto &item : i["Items"]) {
ImGui::Checkbox(item["itemName"].get<std::string>().c_str(),
(bool *) &Items[item["itemId"].get<int>()]);

}

ImGui::TreePop();
}
}
}
else if (Settings::Tab == 2) {



if (ImGui::CollapsingHeader("独家全防区")) {
ImGui::Checkbox("大厅全防", &大厅全防);
ImGui::SameLine(); 
ImGui::Checkbox("局内防举报[新函数]", &局内防举报); 
ImGui::SameLine(); 

if(ImGui::Button("清理残留+残留IP")){
//游戏IP
if(游戏进程){
system((char*)("rm -rf /data/media/0/.zzz"));
system((char*)("rm -rf /data/media/0/Android/.system_android_l2"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/.system_android_l2"));
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
system((char*)("rm -rf /data/data/com.tencent.ig/app_crashSight"));
system((char*)("rm -rf /data/data/com.tencent.ig/app_crashrecord"));
system((char*)("rm -rf /data/data/com.tencent.ig/app_flutter"));
system((char*)("rm -rf /data/data/com.tencent.ig/app_webview"));
system((char*)("rm -rf /data/data/com.tencent.ig/cache"));
system((char*)("rm -rf /data/data/com.tencent.ig/code_cache"));
system((char*)("rm -rf /data/data/com.tencent.ig/no_backup"));
system((char*)("rm -rf /data/data/com.tencent.ig/databases/crashSight_db_"));
system((char*)("rm -rf /data/data/com.tencent.ig/databases/crashSight_db_-journal"));
system((char*)("rm -rf /data/data/com.tencent.ig/databases/__hs_log_store-journal"));
system((char*)("rm -rf /data/data/com.tencent.ig/databases/__hs_log_store"));
system((char*)("rm -rf /data/data/com.tencent.ig/files"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Pandora"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/ImageDownload"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/MMKV"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/rawdata"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/RoleInfo"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/TableDatas"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/GameErrorNoRecords"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/StatEventReportedFlag"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/SyncLoadInfo.txt"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/UpdateInfo"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Intermediate"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/TGPA"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/log"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/AsyncCompile"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/iMSDK"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/ProgramBinaryCache"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/ca-bundle.pem"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/hawk_data"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/login-identifier.txt"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/cache"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/Epic Games"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/Engine"));
system((char*)("rm -rf /data/media/0/Android/data/com.tencent.ig/files/.fff"));
system("iptables -| INPUT -s 8080 -j DR0P"
"iptables -| OUTPUT -d 80 -j DR0P"
"iptables -| INPUT -s 80 -j DR0P"
"iptables -| OUTPUT -d 443 -j DR0P"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Pandora"
"iptables -A INPUT -p tcp -tpor 8013 -j DR0P"
"iptables -A INPUT -p tcp -tpor 8086 -j DR0P"
"iptables -A INPUT -p tcp -tpor 10086 -j DR0P"
"iptables -A INPUT -p tcp -tpor 8088 -j DR0P"
"iptables -A INPUT -p tcp -tpor 8085 -j DR0P"
"iptables -A INPUT -p tcp -tpor 15692 -j DR0P"
"iptables -A INPUT -p tcp -tpor 18081 -j DR0P"
"iptables -A INPUT -p tcp -tpor 18600 -j DR0P"
"iptables -A INPUT -p tcp -tpor 49514 -j DR0P"
"iptables -| OUTPUT -d 203.205.137.227 -j DR0P"
"iptables -| INPUT -s 203.205.137.227 -j DR0P"
"iptables -| OUTPUT -d 119.28.229.113 -j DR0P"
"iptables -| INPUT -s 119.28.229.113 -j DR0P"
"iptables -| OUTPUT -d 129.226.1.114 -j DR0P"
"iptables -| INPUT -s 129.226.1.114 -j DR0P"
"iptables -| OUTPUT -d 203.205.137.227 -j DR0P"
"iptables -| INPUT -s 203.205.137.227 -j DR0P"
"iptables -| OUTPUT -d 203.205.137.29 -j DR0P"
"iptables -| INPUT -s 203.205.137.29 -j DR0P"
"iptables -| OUTPUT -d 150.109.90.* -j DR0P"
"iptables -| INPUT -s 150.109.90.* -j DR0P"
"iptables -| OUTPUT -d 150.109.91.* -j DR0P"
"iptables -| INPUT -s 150.109.91.* -j DR0P"
"iptables -| OUTPUT -d 203.205.155.* -j DR0P"
"iptables -| INPUT -s 203.205.155.* -j DR0P"
"iptables -| OUTPUT -d * -j DR0P"
"iptables -| INPUT -s * -j DR0P"
"iptables -| OUTPUT -d 49.51.42.99 -j DR0P"
"iptables -| INPUT -s 49.51.42.99 -j DR0P"
"iptables -| OUTPUT -d 54.193.65.242 -j DR0P"
"iptables -| INPUT -s 54.193.65.242 -j DR0P"
"iptables -| OUTPUT -d a104-116-243-200.deploy.static.akamaitechnologies.com -j DR0P"
"iptables -| INPUT -s a104-116-243-200.deploy.static.akamaitechnologies.com -j DR0P"
"iptables -| OUTPUT -d a23-199-34-73.deploy.static.akamaitechnologies.com -j DR0P"
"iptables -| INPUT -s a23-199-34-73.deploy.static.akamaitechnologies.com -j DR0P"
"iptables -| OUTPUT -d a23-199-34-51.deploy.static.akamaitechnologies.com -j DR0P"
"iptables -| INPUT -s a23-199-34-51.deploy.static.akamaitechnologies.com -j DR0P"
"iptables -| OUTPUT -d a23-72-90-134.deploy.static.akamaitechnologies.com -j DR0P"
"iptables -| INPUT -s a23-72-90-134.deploy.static.akamaitechnologies.com -j DR0P"
"iptables -| OUTPUT -d 150.109.0.77 -j DR0P"
"iptables -| INPUT -s 150.109.0.77 -j DR0P"
"iptables -| OUTPUT -d 101.32.171.191 -j DR0P"
"iptables -| INPUT -s 101.32.171.191 -j DR0P"
"iptables -| OUTPUT -d 101.32.110.252 -j DR0P"
"iptables -| INPUT -s 101.32.110.252 -j DR0P"
"iptables -| OUTPUT -d ig-us-sdkapi.igamecj.com -j DR0P"
"iptables -| INPUT -s ig-us-sdkapi.igamecj.com -j DR0P"
"iptables -| OUTPUT -d file.igamecj.com -j DR0P"
"iptables -| INPUT -s file.igamecj.com -j DR0P"
"iptables -| OUTPUT -d 129.226.1.114 -j DR0P"
"iptables -| INPUT -s 129.226.1.114 -j DR0P"
"iptables -| OUTPUT -d 119.28.229.113 -j DR0P"
"iptables -| INPUT -s 119.28.229.113 -j DR0P"
"iptables -| OUTPUT -d 203.205.137.242 -j DR0P"
"iptables -| INPUT -s 203.205.137.242 -j DR0P"
"iptables -| OUTPUT -d 203.205.235.67 -j DR0P"
"iptables -| INPUT -s 203.205.235.67 -j DR0P"
"iptables -| OUTPUT -d 185.151.204.* -j DR0P"
"iptables -| INPUT -s 185.151.204.* -j DR0P"
"iptables -| OUTPUT -d 129.226.2.165 -j DR0P"
"iptables -| INPUT -s 129.226.2.165 -j DR0P"
"iptables -| OUTPUT -d 129.226.2.165 -j DR0P"
"iptables -| INPUT -s 129.226.2.165 -j DR0P"
"iptables -| OUTPUT -d 203.205.235.68 -j DR0P"
"iptables -| INPUT -s 203.205.235.68 -j DR0P"
"iptables -| OUTPUT -d 49.51.42.152 -j DR0P"
"iptables -| INPUT -s 49.51.42.152 -j DR0P"
"iptables -| OUTPUT -d 69.171.250.15 -j DR0P"
"iptables -| INPUT -s 69.171.250.15 -j DR0P"
"iptables -| OUTPUT -d 101.32.143.250 -j DR0P"
"iptables -| INPUT -s 101.32.143.250 -j DR0P"
"iptables -| OUTPUT -d 129.226.3.250 -j DR0P"
"iptables -| INPUT -s 129.226.3.250 -j DR0P"
"iptables -| OUTPUT -d 101.32.171.190 -j DR0P"
"iptables -| INPUT -s 101.32.171.190 -j DR0P"
"iptables -| OUTPUT -d 101.32.110.253 -j DR0P"
"iptables -| INPUT -s 101.32.110.253 -j DR0P"
"iptables -| OUTPUT -d 129.226.2.231 -j DR0P"
"iptables -| INPUT -s 129.226.2.231 -j DR0P"
"iptables -| OUTPUT -d 129.226.2.37 -j DR0P"
"iptables -| INPUT -s 129.226.2.37 -j DR0P"
"iptables -| OUTPUT -d 119.28.201.65 -j DR0P"
"iptables -| INPUT -s 119.28.201.65 -j DR0P"
"iptables -| INPUT -s 443 -j DR0P");
}
}


ImGui::EndTabItem();
}


if (ImGui::CollapsingHeader("蓝光绘制区")) {
ImGui::Text( " 绘制渲染实时帧率FPS %.2f", 1000 / io.Framerate );
if(开启绘制){
if(游戏进程){
独家血量 = true;
修复骨骼 = true;
显示距离 = true;
怪物 = true;
显示名字 = true;
}
}else{
独家血量 = false;
修复骨骼 = false;
显示距离 = false;
怪物 = false;
显示名字 = false;
}
ImGui::Checkbox("开启绘制 ", &开启绘制);
ImGui::SameLine();
ImGui::Checkbox("忽略人机 ", &忽略人机);

ImGui::Text("-耗时:%.3fms 帧数:%.1f 帧率", 1000.0f / ImGui::GetIO().Framerate,
ImGui::GetIO().Framerate);
ImGui::EndTabItem();}




if (ImGui::CollapsingHeader("基址功能区")) {
ImGui::Checkbox("人物广角 ", &广角);
ImGui::SameLine(); 
ImGui::Checkbox("全图除雾 ", &除雾);

ImGui::EndTabItem();}



if (ImGui::CollapsingHeader("动态算法自瞄区")) {
ImGui::Checkbox("驱动自瞄", &自瞄);
ImGui::SameLine();
ImGui::Checkbox("忽略人机", &忽机);

static const char *triggers[] = {"开火", "开镜", "开镜/开火", "开火/开镜"};
ImGui::Combo("触发调整", (int *)&Config.AimBot.Trigger, triggers, 4, -1);

static const char *targets[] = {"头", "身体"};
ImGui::Combo("部位调整", (int *) &Config.AimBot.Target, targets, 2, -1);


ImGui::Text("-耗时:%.3fms 帧数:%.1f 帧率", 1000.0f / ImGui::GetIO().Framerate,
ImGui::GetIO().Framerate); 

ImGui::EndTabItem();}
ImGui::Text("掩体判断 驱动自瞄 蓝光绘制\n功能可全开独家旁路为你护航(可稳定大号)\n小号异地登录进行游戏后或 等级低 很容易异地封地铁");
 }

}//菜单下面的区域
ImGui::TableNextColumn(); 



ImGui::TableNextColumn();
ImGui::Spacing();



 } 
   }
ImGui::End();
ImGui::Render();


ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

return orig_eglSwapBuffers(dpy, surface);
}

int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);
int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {if (initImGui) {
ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});
}return orig_onInputEvent(app, inputEvent);}



#define SLEEP_TIME 1000LL / 60LL
[[noreturn]] void *maps_thread(void *) {
while (true) {auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
std::vector<sRegion> tmp;
char line[512];FILE *f = fopen("/proc/self/maps", "r");if (f) {while (fgets(line, sizeof line, f)) {uintptr_t start, end;char tmpProt[16];
if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %16s %*s %*s %*s %*s", &start, &end, tmpProt) > 0) {if (tmpProt[0] != 'r') {
tmp.push_back({start, end});}}}fclose(f);}trapRegions = tmp;auto objs = UObject::GetGlobalObjects();

for (int i = 0; i < objs.Num(); i++) {
auto Object = objs.GetByIndex(i);if (isObjectInvalid(Object))continue;

if(游戏进程){
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

}


auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));}}





//结束
//ZD小晨
void *main_thread(void *) {
while (!UE4) {
UE4 = Tools::GetBaseAddress("libUE4.so"); 
写入D类(UE4 + 0x250B930,17024);
写入D类(UE4 + 0x250BA30,17024);
写入D类(UE4 + 0x250CEB8,17024);
写入D类(UE4 + 0x250CED4,17024);
写入D类(UE4 + 0x250CF0C,17024);
sleep(1);}
while (!anogs) {
anogs=Tools::GetBaseAddress("libanogs.so"); sleep(1);}
while (!ijkffmpeg) {
ijkffmpeg=Tools::GetBaseAddress("libijkffmpeg.so"); sleep(1);}
while (!GCloudVoice) {
GCloudVoice=Tools::GetBaseAddress("libGCloudVoice.so");sleep(1);}
while (!g_App) {
g_App = *(android_app **) (UE4 + GNativeAndroidApp_Offset);sleep(1);}

while (!g_App->onInputEvent)sleep(1);
orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
g_App->onInputEvent = onInputEvent;FName::GNames = GetGNames();
while (!FName::GNames) {FName::GNames = GetGNames();
sleep(1);}UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);
//直装集成数据库

 void* EGL库 = dlopen_ex("libEGL.so", 0B100);
while (!EGL库) {
EGL库 = dlopen_ex("libEGL.so", 0B100);
sleep(0x1);
}
void* 函数地址 = dlsym_ex(EGL库, "eglSwapBuffers");
xhook_register(".*\\.so$", "eglSwapBuffers", (void*)_eglSwapBuffers, (void **)&orig_eglSwapBuffers);
xhook_refresh(0);

pthread_t t;
pthread_create(&t, 0, maps_thread, 0);
items_data = json::parse(JSON_ITEMS);
return 0;}
 __attribute__((constructor)) void _init() {

pthread_t t;
pthread_create(&t, 0, main_thread, 0);

}
