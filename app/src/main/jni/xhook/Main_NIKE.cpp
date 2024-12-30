#include "Includes.h"
#include "Tools.h"
#include "fake_dlfcn.h"
#include "imgui/imgui.h"
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
#define GNames_Offset 0x6db6908
#define GUObject_Offset 0xc0fd220
#define GNativeAndroidApp_Offset 0xbe7faa0
float 追踪距离 = 150;
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
bool 头部;
bool 全局离线;
bool 物资;
bool 防封;
bool 预警;
bool 身体;
bool 开火;
float FOV = 150;
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
bool 隐藏人机;
bool 骨灰盒;
bool 观战人数;
bool 投掷物;
bool 载具;
bool 距离;
bool 美国人;
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

    auto Actors = *(TArray<AActor *> *)((uintptr_t) PersistentLevel + 0xA0);

    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.Num(); i++) {
        auto Actor = Actors[i];
        if (Actor) {
            actors.push_back(Actor);
        }
    }
    return actors;
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


void *hack_thread(void *) {
       do {
        sleep(1);
    } while (!isLibraryLoaded("libanort.so"));
PATCH_LIB("libUE4.so","0xB0037E0","h 00 00 00 00");
PATCH_LIB("libUE4.so","0xB004988","h 00 00 00 00");
PATCH_LIB("libUE4.so","0xB042E88","h 00 00 00 00");
PATCH_LIB("libUE4.so","0xB11D378","h 00 00 00 00");
PATCH_LIB("libUE4.so","0xB12B3F8","h 00 00 00 00");
PATCH_LIB("libUE4.so","0xB12C710","h 00 00 00 00");
PATCH_LIB("libUE4.so","0xB1AFD48","h 00 00 00 00");
PATCH_LIB("libUE4.so","0xB1AFD90","h 00 00 00 00");
PATCH_LIB("libUE4.so","0xB209248","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x2650500","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x28C64A4","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x2989D40","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x2A1A704","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x2A63210","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x2C7C234","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x2CBE798","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x2EB8958","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x2FBF004","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x3052EFC","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x3068918","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x36768F4","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x367A4A4","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x367E6C8","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x368B7F8","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x36A56C4","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x36B16D0","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x36C23C0","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x3779B1C","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x37B3600","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x37D027C","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x3806B48","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x382A69C","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x385FEA0","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x3899204","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x389DDC0","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x38B5910","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x38F99BC","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x38F99F0","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x38F9A90","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x38F9AA4","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x38FA0B4","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x3D85F0C","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x4B38C0C","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x4BC5F4C","h 00 00 00 00");
PATCH_LIB("libUE4.so","0x4BDF274","h 00 00 00 00");
PATCH_LIB("libanogs.so","0x38DA8","h 00 00 00 00");
PATCH_LIB("libanogs.so","0x418004","h 00 00 00 00");
PATCH_LIB("libanogs.so","0x492960","h 00 00 00 00");
PATCH_LIB("libanogs.so","0x4A4698","h 00 00 00 00");
PATCH_LIB("libTDataMaster.so","0x2F3090","h 00 00 00 00");
PATCH_LIB("libTDataMaster.so","0x31AC38","h 00 00 00 00");
PATCH_LIB("libTDataMaster.so","0x31ACA0","h 00 00 00 00");
PATCH_LIB("libTDataMaster.so","0x31ADE0","h 00 00 00 00");
PATCH_LIB("libTDataMaster.so","0x31AE08","h 00 00 00 00");
PATCH_LIB("libTDataMaster.so","0x33EC0C","h 00 00 00 00");
PATCH_LIB("libTDataMaster.so","0x33EC3C","h 00 00 00 00");
PATCH_LIB("libTDataMaster.so","0x346C54","h 00 00 00 00");    
HOOK_LIB("libanort.so","0x1B40B4",hsub_1B99A4,osub_1B99A4);
HOOK_LIB("libanort.so","0x1B99A4",hsub_1B99A4,osub_1B99A4);
    return 0;
}





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
#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};
uint32_t Colors[] = {0x9241EB, 0x9EFF00, 0x006EF4, 0xCA2876, 0x0A31DE, 0xBAA7FD, 0xCEDB3F, 0x286A45, 0x58F014, 0x45CAE6, 0x773702, 0x94CEF0, 0x3C5F51, 0x453CD7, 0x364024, 0x439997, 0x4CB612, 0xC6B564, 0x17F250, 0xE41BC0, 0xAF8E27, 0x8E382E, 0x47A101, 0x9DAC33, 0x66F4CF, 0x59A9F0, 0x798D1A, 0x2EBB59, 0xBF66C3, 0x4BD8FB, 0xBBFA54, 0x6B9881, 0x144967, 0xBAA3AE, 0xE80B9D, 0x7BA552, 0x96A456, 0x17D7B4, 0x130C39, 0x3C06A8, 0x62737E, 0xA87E89, 0xB6D3E4, 0x66B77D, 0x66E304, 0x1B80E1, 0x7A06BC, 0xBFFB1B, 0x618506, 0x7E4D34};

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
bool Fov(int x, int y) {
    if (!自动瞄准)
        return true;
    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int rad =FOV;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
struct Threat_t {
	ASTExtraPlayerCharacter *m_Player;
	bool bAiming;
	bool bBehind;
	float mFOV;
	float mDIS;
};

std::vector<Threat_t> GetThreats() {
	std::vector<Threat_t> result;
	auto Actors = getActors();
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

        

        if (localPlayer) {
        for (auto Actor : Actors) {
            if (isObjectInvalid(Actor))
                continue;
            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *)Actor;
                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;
                if (Player->TeamID == localPlayer->TeamID)
                    continue;
                if (Player->bDead)
                    continue;//NIKEMOD
				auto RootComponent = Player->RootComponent;
				if (RootComponent) {
					FRotator RelativeRotation = RootComponent->RelativeRotation;
					ClampAngles(RelativeRotation);
					FVector myHeadPosition = localPlayer->GetBonePos("Head", {});
					FVector headLocation = Player->GetBonePos("Head", {});
					auto Angle = UKismetMathLibrary::Conv_VectorToRotator(UKismetMathLibrary::Subtract_VectorVector(headLocation, myHeadPosition));
					ClampAngles(Angle);
					float num = abs(RelativeRotation.Pitch - Angle.Pitch);
					float num2 = abs(RelativeRotation.Yaw - Angle.Yaw);
					bool num3 = (num + num2) >= 170.f && (num + num2) <= 220.f;
					if (num + num2 >= 65.f) {
						if (localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
							float dist = localPlayer->GetDistanceTo(Player);
							FVector2D HeadPosSC;
							result.push_back({Player, num3, NULL, num + num2, dist});
						}
					}
				}
			}
		}
	}
	std::sort(result.begin(), result.end(),
	[](const Threat_t &a, const Threat_t &b) -> bool {
		return a.mDIS < b.mDIS;
	});
	return result;
}

auto NIKEAIM() {
        ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();
		auto GWorld = GetWorld();
		if (GWorld)
		{
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

                    
                    
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
                        continue;
               }
					


               if (忽略倒地) {
                    if (Player->Health == 0.0f)
                        continue;
                }
                
                
                
  if (忽略人机) {
 if (Player->bIsAI)
                        continue;
                }

					
					

				
auto HeadPos = Player->GetBonePos("Head", {});
auto RootPos = Player->GetBonePos("Root", {});


auto upper_r = Player->GetBonePos("upperarm_r", {});

auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});

auto hand_r = Player->GetBonePos("hand_r", {});

auto upper_l = Player->GetBonePos("upperarm_l", {});

auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});

auto hand_l = Player->GetBonePos("hand_l", {});

auto thigh_l = Player->GetBonePos("thigh_l", {});

auto calf_l = Player->GetBonePos("calf_l", {});

auto foot_l = Player->GetBonePos("foot_l", {});

auto thigh_r = Player->GetBonePos("thigh_r", {});

auto calf_r = Player->GetBonePos("calf_r", {});

auto foot_r = Player->GetBonePos("foot_r", {});

auto neck_01 = Player->GetBonePos("neck_01", {});

auto pelvis = Player->GetBonePos("pelvis", {});
FVector2D RootPosSC, HeadPosSC,upper_rPoSC,upper_lPoSC,lowerarm_rPoSC,hand_rPoSC,lowerarm_lSC,hand_lPoSC,thigh_lPoSC,calf_lPoSC,foot_lPoSC,thigh_rPoSC,calf_rPoSC,foot_rPoSC,neck_01PoSC,pelvisPoSC;
if (W2S(HeadPos,&HeadPosSC) &&W2S(upper_r,&upper_rPoSC) &&
W2S(upper_l,&upper_lPoSC) &&W2S(lowerarm_r,&lowerarm_rPoSC) &&
W2S(hand_r,&hand_rPoSC) &&W2S(lowerarm_l, &lowerarm_lSC) &&
W2S(hand_l,&hand_lPoSC) && W2S(thigh_l, &thigh_lPoSC) &&
W2S(calf_l,&calf_lPoSC) &&W2S(foot_l,&foot_lPoSC) &&
W2S(thigh_r, &thigh_rPoSC) &&W2S(calf_r, &calf_rPoSC) &&
W2S(foot_r,&foot_rPoSC) &&W2S(neck_01,&neck_01PoSC) &&
W2S(pelvis,&pelvisPoSC) &&W2S(RootPos,&RootPosSC)) {
static bool 已选择 = false;//漏打bug想要修复就要让他有独立的掩体判断
算法 = 0;
已选择 = false;
if(!localController->LineOfSightTo(localController->PlayerCameraManager, neck_01, false))
{
is脖子 = false;
}else{
is脖子 = true;
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, false)){
is右小臂 = false;
}else{
is右小臂 = true;
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_l, false)){
is左小臂 = false;
}else{
is左小臂 = true;
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager, thigh_l, false)){
is左大腿 = false;
}else{
is左大腿 = true;
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager, thigh_r, false)){//落 改进漏打&神乐
is右大腿 = false;
}else{
is右大腿 = true;
}

if(!localController->LineOfSightTo(localController->PlayerCameraManager, pelvis, false)){
is盆骨 = false;
}else{
is盆骨 = true;
}
if(!localController->LineOfSightTo(localController->PlayerCameraManager, HeadPos, false)){
is头 = false;
}else{
is头 = true;
}
//落 改进漏打&神乐
if (!已选择)
if(is头) { 
算法 = 1;
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is盆骨) {
算法 = 2;
已选择 = true;
}else{
已选择 = false;
}

if (!已选择)
if(is右小臂) {
算法 = 3;
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is左小臂) { 
算法 = 4;
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is右大腿) {
算法 = 5;
已选择 = true;
}else{
已选择 = false;
}
if (!已选择)
if(is左大腿) {
算法 = 6;
已选择 = true;
}else{
已选择 = false;
}//落 改进漏打&神乐
float height = abs(HeadPosSC.Y - RootPosSC.Y);
float width = height * 0.7;
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




std::string GetPackageName() {
    FILE *f = fopen("/proc/self/cmdline", "rb");
    if (f) {
        char *buf = new char[64];
        fread(buf, sizeof(char), 64, f);
        fclose(f);
        return buf;
    }
    return 0;
}
//下载文件数据接收函数
size_t dl_req_reply(void *buffer, size_t size, size_t nmemb, void *user_p)
{
	FILE *fp = (FILE *)user_p;
	size_t return_size = fwrite(buffer, size, nmemb, fp);
	//cout << (char *)buffer << endl;
	return return_size;
}

//http GET请求文件下载  
CURLcode dl_curl_get_req(const std::string &url, std::string filename)
{
	//int len = filename.length();
	//char* file_name = new char(len + 1);//char*最后有一个结束字符\0
	//strcpy_s(file_name, len + 1, filename.c_str());

	const char* file_name = filename.c_str();
	char* pc = new char[1024];//足够长
	strcpy(pc, file_name);

	FILE *fp = fopen(pc, "wb");

	//curl初始化  
	CURL *curl = curl_easy_init();
	// curl返回值 
	CURLcode res;
	if (curl)
	{
		//设置curl的请求头
		struct curl_slist* header_list = NULL;
		header_list = curl_slist_append(header_list, "User-Agent: Mozilla/5.0 (Windows NT 10.0; WOW64; Trident/7.0; rv:11.0) like Gecko");
		curl_easy_setopt(curl, CURLOPT_HTTPHEADER, header_list);

		//不接收响应头数据0代表不接收 1代表接收
		curl_easy_setopt(curl, CURLOPT_HEADER, 0);

		//设置请求的URL地址 
		curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

		//设置ssl验证
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, false);
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, false);

		//CURLOPT_VERBOSE的值为1时，会显示详细的调试信息
		curl_easy_setopt(curl, CURLOPT_VERBOSE, 0);

		curl_easy_setopt(curl, CURLOPT_READFUNCTION, NULL);

		//设置数据接收函数
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &dl_req_reply);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);

		curl_easy_setopt(curl, CURLOPT_NOSIGNAL, 1);

		//设置超时时间
		curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, 6); // set transport and time out time  
		curl_easy_setopt(curl, CURLOPT_TIMEOUT, 6);

		// 开启请求  
		res = curl_easy_perform(curl);
	}
	// 释放curl 
	curl_easy_cleanup(curl);
	//释放文件资源
	fclose(fp);

	return res;
}



void DrawESP(ImDrawList*draw,int screenWidth, int screenHeight) {

if(g_LocalPlayer&&g_LocalController){
Dtype(libgcloud+0x601378,16777215);
Dtype(libanogs+0x4BE06C,16777215);
Dtype(libanogs+0x4BE080,16777215);
Dtype(libanogs+0x4BE0EC,16777215);
Dtype(libanogs+0x4BE21C,16777215);
Dtype(libanogs+0x4BE284,16777215);
Dtype(libanogs+0x4BE2A8,16777215);
Dtype(libanogs+0x4BE310,16777215);
Dtype(libanogs+0x4BE33C,16777215);
Dtype(libanogs+0x4BE354,16777215);
Dtype(libanogs+0x4BE38C,16777215);
Dtype(libanogs+0x4BE3E8,16777215);
Dtype(libanogs+0x4BE400,16777215);
Dtype(libanogs+0x4BE4E4,16777215);
Dtype(libanogs+0x4BE528,16777215);
Dtype(libanogs+0x4BE548,16777215);
Dtype(libanogs+0x4BE568,16777215);
Dtype(libanogs+0x4BE5D8,16777215);
Dtype(libanogs+0x4BE6CC,16777215);
Dtype(libanogs+0x4BE6EC,16777215);
Dtype(libanogs+0x4BE808,16777215);
Dtype(libanogs+0x4BE858,16777215);
Dtype(libanogs+0x4BE884,16777215);
Dtype(libanogs+0x4BE8D8,16777215);
Dtype(libanogs+0x4BE91C,16777215);
Dtype(libanogs+0x4BE9FC,16777215);
Dtype(libanogs+0x4BEBBC,16777215);
Dtype(libanogs+0x4BEC30,16777215);
Dtype(libanogs+0x4BEC74,16777215);
Dtype(libanogs+0x4BECA8,16777215);
Dtype(libanogs+0x4BED30,16777215);
Dtype(libanogs+0x4BED78,16777215);
Dtype(libanogs+0x4BEE38,16777215);
Dtype(libanogs+0x4BEE84,16777215);
Dtype(libanogs+0x4BEEE0,16777215);
Dtype(libanogs+0x4BEEF0,16777215);
Dtype(libanogs+0x4BEFD8,16777215);
Dtype(libanogs+0x4BF00C,16777215);
Dtype(libanogs+0x4BF02C,16777215);
Dtype(libanogs+0x4BF06C,16777215);
Dtype(libanogs+0x4BF24C,16777215);
Dtype(libanogs+0x4BF30C,16777215);
Dtype(libanogs+0x4BF384,16777215);
Dtype(libanogs+0x4BF3A8,16777215);
Dtype(libanogs+0x4BF3B8,16777215);
Dtype(libanogs+0x4BF3E8,16777215);
Dtype(libanogs+0x4BF404,16777215);
Dtype(libanogs+0x4BF414,16777215);
Dtype(libanogs+0x4BF53C,16777215);
Dtype(libanogs+0x4BF558,16777215);
Dtype(libanogs+0x4BF5D8,16777215);
Dtype(libTDataMaster+0x3DB0E0,16777215);
Dtype(libanogs+0x3C2090,16777215);
Dtype(libanogs+0x3D4F74,16777215);
Dtype(libgcloud+0x429330,16777215);
Dtype(libgcloud+0x481174,16777215);
Dtype(libgcloud+0x481210,16777215);
Dtype(libgcloud+0x4817D0,16777215);
Dtype(libgcloud+0x481ECC,16777215);
Dtype(libgcloud+0x481F74,16777215);
Dtype(libgcloud+0x48201C,16777215);
Dtype(libgcloud+0x48207C,16777215);
Dtype(libgcloud+0x482140,16777215);
Dtype(libgcloud+0x48234C,16777215);
Dtype(libgcloud+0x48247C,16777215);
Dtype(libgcloud+0x4824B0,16777215);
Dtype(libgcloud+0x4825C8,16777215);
Dtype(libgcloud+0x482630,16777215);
Dtype(libgcloud+0x482738,16777215);
Dtype(libgcloud+0x482848,16777215);
Dtype(libgcloud+0x4829DC,16777215);
Dtype(libgcloud+0x482E80,16777215);
Dtype(libgcloud+0x482F10,16777215);
Dtype(libgcloud+0x483098,16777215);
Dtype(libgcloud+0x483188,16777215);
Dtype(libgcloud+0x4831A8,16777215);
Dtype(libgcloud+0x483200,16777215);
Dtype(libgcloud+0x4833A4,16777215);
Dtype(libgcloud+0x483594,16777215);
Dtype(libgcloud+0x483628,16777215);
Dtype(libgcloud+0x483860,16777215);
Dtype(libgcloud+0x483880,16777215);
Dtype(libgcloud+0x48404C,16777215);
Dtype(libgcloud+0x4A37E0,16777215);
Dtype(libgcloud+0x5A5728,16777215);
Dtype(libTDataMaster+0x2E2744,16777215);
Dtype(libTDataMaster+0x2E27D4,16777215);
Dtype(libTDataMaster+0x2E2A84,16777215);
Dtype(libTDataMaster+0x2E2C7C,16777215);
Dtype(libTDataMaster+0x2E2CDC,16777215);
Dtype(libTDataMaster+0x2E2D2C,16777215);
Dtype(libTDataMaster+0x2E2D4C,16777215);
Dtype(libTDataMaster+0x2E2D6C,16777215);
Dtype(libTDataMaster+0x2E2DAC,16777215);
Dtype(libTDataMaster+0x2E2DCC,16777215);
Dtype(libTDataMaster+0x2E300C,16777215);
Dtype(libTDataMaster+0x2E3064,16777215);
Dtype(libTDataMaster+0x2E308C,16777215);
Dtype(libTDataMaster+0x2E30AC,16777215);
Dtype(libTDataMaster+0x2E3534,16777215);
Dtype(libTDataMaster+0x2E3674,16777215);
Dtype(libTDataMaster+0x2E3964,16777215);
Dtype(libTDataMaster+0x2E3A8C,16777215);
Dtype(libTDataMaster+0x2E3B5C,16777215);
Dtype(libTDataMaster+0x2E3B94,16777215);
Dtype(libTDataMaster+0x2E3D6C,16777215);
Dtype(libTDataMaster+0x2E3F6C,16777215);
Dtype(libTDataMaster+0x2E487C,16777215);
Dtype(libTDataMaster+0x2E49A4,16777215);
Dtype(libTDataMaster+0x2E506C,16777215);
Dtype(libTDataMaster+0x2E508C,16777215);
Dtype(libTDataMaster+0x2E50FC,16777215);
Dtype(libTDataMaster+0x2E5174,16777215);
Dtype(libTDataMaster+0x2E57C4,16777215);
Dtype(libTDataMaster+0x2E5A5C,16777215);
Dtype(libTDataMaster+0x2E5DC4,16777215);
Dtype(libTDataMaster+0x2E5ECC,16777215);
Dtype(libTDataMaster+0x2E6034,16777215);
Dtype(libTDataMaster+0x2E655C,16777215);
Dtype(libTDataMaster+0x2E6D84,16777215);
Dtype(libTDataMaster+0x2E6DDC,16777215);
Dtype(libTDataMaster+0x2E6FFC,16777215);
Dtype(libTDataMaster+0x2E709C,16777215);
Dtype(libTDataMaster+0x2E75C4,16777215);
Dtype(libTDataMaster+0x2E885C,16777215);
Dtype(libTDataMaster+0x2E890C,16777215);
Dtype(libTDataMaster+0x2E893C,16777215);
Dtype(libTDataMaster+0x2E8D34,16777215);
Dtype(libTDataMaster+0x2EA73C,16777215);
Dtype(libTDataMaster+0x2EBF7C,16777215);
Dtype(libTDataMaster+0x2EC054,16777215);
Dtype(libTDataMaster+0x2F1E04,16777215);
Dtype(libTDataMaster+0x2F2244,16777215);
Dtype(libTDataMaster+0x2F2D98,16777215);
Dtype(libTDataMaster+0x2F3598,16777215);
Dtype(libTDataMaster+0x2F4574,16777215);
Dtype(libTDataMaster+0x2F4D20,16777215);
Dtype(libTDataMaster+0x2F4D40,16777215);
Dtype(libTDataMaster+0x2F5060,16777215);
Dtype(libTDataMaster+0x2F5104,16777215);
Dtype(libTDataMaster+0x2F530C,16777215);
Dtype(libTDataMaster+0x2F5438,16777215);
Dtype(libTDataMaster+0x2F54C0,16777215);
Dtype(libTDataMaster+0x2F54E0,16777215);
Dtype(libTDataMaster+0x2F5518,16777215);
Dtype(libTDataMaster+0x2F56D8,16777215);
Dtype(libTDataMaster+0x2F5768,16777215);
Dtype(libTDataMaster+0x2F5C1C,16777215);
Dtype(libTDataMaster+0x2F5DD8,16777215);
Dtype(libTDataMaster+0x2F5EB0,16777215);
Dtype(libTDataMaster+0x2F5F88,16777215);
Dtype(libTDataMaster+0x2F5FF0,16777215);
Dtype(libTDataMaster+0x2F60E4,16777215);
Dtype(libTDataMaster+0x2F6118,16777215);
Dtype(libTDataMaster+0x2F62D4,16777215);
Dtype(libTDataMaster+0x2F6460,16777215);
Dtype(libTDataMaster+0x2F65BC,16777215);
Dtype(libTDataMaster+0x2F661C,16777215);
Dtype(libTDataMaster+0x2F6664,16777215);
Dtype(libTDataMaster+0x2F670C,16777215);
Dtype(libTDataMaster+0x2F6DB0,16777215);
Dtype(libTDataMaster+0x2F73C0,16777215);
Dtype(libTDataMaster+0x2F744C,16777215);
Dtype(libTDataMaster+0x313458,16777215);
Dtype(libTDataMaster+0x31694C,16777215);
Dtype(libTDataMaster+0x31AC50,16777215);
Dtype(libTDataMaster+0x31AD08,16777215);
Dtype(libTDataMaster+0x31AD40,16777215);
Dtype(libTDataMaster+0x31ADC8,16777215);
Dtype(libTDataMaster+0x31ED14,16777215);
Dtype(libTDataMaster+0x390F68,16777215);
Dtype(libTDataMaster+0x3914D0,16777215);
Dtype(libTDataMaster+0x391564,16777215);
Dtype(libTDataMaster+0x391798,16777215);
Dtype(libTDataMaster+0x3917DC,16777215);
Dtype(libTDataMaster+0x391810,16777215);
Dtype(libTDataMaster+0x391E84,16777215);
Dtype(libTDataMaster+0x391EC8,16777215);
Dtype(libTDataMaster+0x391FAC,16777215);
Dtype(libTDataMaster+0x392024,16777215);
Dtype(libTDataMaster+0x392D90,16777215);
Dtype(libTDataMaster+0x392DE0,16777215);
Dtype(libTDataMaster+0x392F08,16777215);
Dtype(libTDataMaster+0x39305C,16777215);
Dtype(libTDataMaster+0x3933D0,16777215);
Dtype(libTDataMaster+0x3934C4,16777215);
Dtype(libTDataMaster+0x393508,16777215);
Dtype(libTDataMaster+0x39353C,16777215);
Dtype(libTDataMaster+0x39480C,16777215);
Dtype(libTDataMaster+0x3949C0,16777215);
Dtype(libTDataMaster+0x394A38,16777215);
Dtype(libTDataMaster+0x394B10,16777215);
Dtype(libTDataMaster+0x394F0C,16777215);
Dtype(libTDataMaster+0x394F5C,16777215);
Dtype(libTDataMaster+0x395038,16777215);
Dtype(libTDataMaster+0x3951C0,16777215);
Dtype(libTDataMaster+0x39524C,16777215);
Dtype(libTDataMaster+0x395E50,16777215);
Dtype(libTDataMaster+0x395E84,16777215);
Dtype(libTDataMaster+0x3963E4,16777215);
Dtype(libTDataMaster+0x3966D8,16777215);
Dtype(libTDataMaster+0x397698,16777215);
Dtype(libTDataMaster+0x397988,16777215);
Dtype(libTDataMaster+0x397E04,16777215);
Dtype(libTDataMaster+0x398240,16777215);
Dtype(libTDataMaster+0x39A74C,16777215);
Dtype(libTDataMaster+0x39A784,16777215);
Dtype(libTDataMaster+0x39A7BC,16777215);
Dtype(libTDataMaster+0x39A948,16777215);
Dtype(libTDataMaster+0x39B7BC,16777215);
Dtype(libTDataMaster+0x39B838,16777215);
Dtype(libTDataMaster+0x39B8B4,16777215);
Dtype(libTDataMaster+0x39BB4C,16777215);
Dtype(libTDataMaster+0x39C4DC,16777215);
Dtype(libTDataMaster+0x39C744,16777215);
Dtype(libTDataMaster+0x39C7E0,16777215);
Dtype(libTDataMaster+0x39C950,16777215);
Dtype(libTDataMaster+0x39CEE0,16777215);
Dtype(libTDataMaster+0x39CF58,16777215);
Dtype(libTDataMaster+0x39DAA4,16777215);
Dtype(libTDataMaster+0x39DB60,16777215);
Dtype(libTDataMaster+0x39DCDC,16777215);
Dtype(libTDataMaster+0x39DD64,16777215);
Dtype(libTDataMaster+0x39DDB4,16777215);
Dtype(libanort+0x1D561C,16777215);
draw->AddText({ ((float) density / 200.0f), 570}, IM_COL32(255,000,000,250),OBFUSCATE("电报频道:@NIKEPUBGHACK"));
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

if (自动瞄准) {
                    long PlayerAimLineColor = IM_COL32(255,0,0,255);
                ASTExtraPlayerCharacter *Target = NIKEAIM();
                    if (Target) {
                        FVector HEAD = Target->GetBonePos("Head", {});
                        ImVec2 HeadPosSC;
                        if (W2S(HEAD, (FVector2D *)&HeadPosSC)) {
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
FVector targetAimPos;
float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;
if(算法 == 1) {
targetAimPos = Target->GetBonePos("Head", {});
} else if(算法 == 2){
targetAimPos = Target->GetBonePos("pelvis", {});//锁骨
} else if(算法 == 3){
targetAimPos = Target->GetBonePos("lowerarm_r", {});//右小臂
} else if(算法 == 4){
targetAimPos = Target->GetBonePos("lowerarm_l", {});//左小臂
} else if(算法 == 5){
targetAimPos = Target->GetBonePos("thigh_r", {});//右大腿
} else if(算法 == 6){
targetAimPos = Target->GetBonePos("thigh_l", {});//左大腿
} else {
targetAimPos = Target->GetBonePos("Head", {});
}
if (localPlayer->bIsWeaponFiring){
targetAimPos.Z -= dist * 1.2;
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
if (CurrentVehicle) {
FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
float dist = localPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;
if (dist > 120)//预判距离
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
}else{
FVector Velocity = Target->GetVelocity();
float dist = localPlayer->GetDistanceTo(Target);
auto timeToTravel = Anticipation / ShootWeaponEntityComponent->BulletRange + Anticipation;
if (dist > 120)//预判距离
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos,UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
}
if (自动瞄准) {
if (localController) {
auto ControlRotator =  localController->ControlRotation;      
auto PlayerCameraManage = localController->PlayerCameraManager;
if (PlayerCameraManage) {
auto aimRotation = ToRotator(g_LocalController->PlayerCameraManager->CameraCache.POV.Location,targetAimPos);
if (自动瞄准) {
aimRotation.Yaw -= ControlRotator.Yaw;
aimRotation.Pitch -= ControlRotator.Pitch;
AimAngle(aimRotation);                                                
ControlRotator.Pitch += aimRotation.Pitch / ScreenX;//X轴(上下滑动速度)
ControlRotator.Yaw += aimRotation.Yaw / ScreenY;//Y轴(左右滑动速度)
}else{
ControlRotator.Yaw = aimRotation.Yaw;
ControlRotator.Pitch = aimRotation.Pitch;
}
localController->ControlRotation = ControlRotator;
}}}
}}}}}}}}




                for (int i = 0; i < Actors.size(); i++) {
                    auto Actor = Actors[i];
                    if (isObjectInvalid(Actor))
                        continue;
                        
                    if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {

                        auto Player = (ASTExtraPlayerCharacter *) Actor;

                        float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
                        if (Distance > 500.0f)
                            continue;

                        if (Player->PlayerKey == localController->PlayerKey)
                            continue;

                        if (Player->TeamID == localController->TeamID)
                            continue;

                        if (Player->bDead)
                            continue;
                            

                         
                         
                if (Player->bIsAI)
                    totalBots++;
                else totalEnemies++;

                        if (隐藏人机)
                            if (Player->bIsAI)
                                continue;
                                
                               
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
if (Player->bIsAI)  {
draw->AddLine({(float) glWidth / 2,75}, HeadPosSC,IM_COL32(255,255,255,255),0.0f);
}else{
draw->AddLine({(float) glWidth / 2,75}, HeadPosSC,GetRandomColorByIndex(Player->TeamID),0.0f);
}
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
}
}






if (血量) {
int CurHP = (int) std::max(0, std::min((int) Player->Health, (int) Player->HealthMax));//数量
int MaxHP = (int) Player->HealthMax;
if (Player->Health == 0.0f && !Player->bDead) {
float boxWidth = density / 1.8f;
float boxHeight = boxWidth * 0.19f;
std::string s;
s += "(倒地)";
draw->AddText(NULL, ((float) density / 27),{HeadPosSC.x - (boxWidth / 4.020),HeadPosSC.y - (boxHeight*0.550)},IM_COL32(255,000,000,255),s.c_str());
CurHP = Player->NearDeathBreath;
if (Player->NearDeatchComponent) {
MaxHP = Player->NearDeatchComponent->BreathMax;
}
}
float boxWidth = density / 1.8f;
float boxHeight = boxWidth * 0.19f;
std::string s;
s += "血量:";
s += std::to_string((int)CurHP);
draw->AddText(NULL, ((float) density / 27),{HeadPosSC.x - (boxWidth / 8.772),HeadPosSC.y - (boxHeight*0.550)},IM_COL32(255,255,255,255),s.c_str());
}



if (名字) {
float boxWidth = density / 1.8f;
float boxHeight = boxWidth * 0.19f;
std::string s;
if (Player->bIsAI) {
s += "Bot";
} else {
s += Player->PlayerName.ToString();
}
draw->AddText(NULL, ((float) density / 27),{HeadPosSC.x - (boxWidth / 8.772),HeadPosSC.y - (boxHeight*0.800)},IM_COL32(255, 255, 255, 255),s.c_str());
}


if (距离) {
float boxWidth = density / 1.8f;
float boxHeight = boxWidth * 0.19f;
std::string s;
s += std::to_string((int)Distance);
s += "m";
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, ((float) density / 25));
draw->AddText(NULL, ((float) density / 25), {RootPosSC.x - (textSize.x / 2), RootPosSC.y}, IM_COL32(59,209,68,255), s.c_str());
}
}
                                                   
if (骨灰盒) {
if (Actors[i]->IsA(APickUpListWrapperActor::StaticClass())) {
auto Pick = (APickUpListWrapperActor *) Actors[i];
if (!Pick->RootComponent)
continue;
auto PickUpDataList = (TArray<FPickUpItemData>)Pick->GetDataList();
float Distance = Pick->GetDistanceTo(localPlayer) / 100.0f;
if (Distance >100.0f)//骨灰盒显示最大距离
continue;
FVector2D PickUpListsPos;
FVector origin, extends;
if (W2S(Pick->K2_GetActorLocation(), & PickUpListsPos)) {

std::string s = "骨灰盒";
s += "(";
s += std::to_string((int) Distance);
s += "m)";
draw->AddText(NULL,((float) density / 29.0f),
{PickUpListsPos.X, PickUpListsPos.Y},
IM_COL32(0,0,0,255), s.c_str());
draw->AddText(NULL,((float) density / 30.0f),
{PickUpListsPos.X, PickUpListsPos.Y},
IM_COL32(205,133,63,255), s.c_str());
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
s += "(";
s += std::to_string((int) Distance);
s += "m)";
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
             


if (自动瞄准) {
int centerX = glWidth/2;
int centerY = glHeight/2;
draw->AddLine(ImVec2(centerX-((int)FOV),centerY-((int)FOV)),ImVec2(centerX+((int)FOV),centerY-((int)FOV)),ToColor(Config.ColorsESP.Fov颜色),0.0f);//LH-RH
draw->AddLine(ImVec2(centerX+((int)FOV),centerY-((int)FOV)),ImVec2(centerX+((int)FOV),centerY+((int)FOV)),ToColor(Config.ColorsESP.Fov颜色),0.0f);//RH-RL
draw->AddLine(ImVec2(centerX+((int)FOV),centerY+((int)FOV)),ImVec2(centerX-((int)FOV),centerY+((int)FOV)),ToColor(Config.ColorsESP.Fov颜色),0.0f);//RL-LL
draw->AddLine(ImVec2(centerX-((int)FOV),centerY+((int)FOV)),ImVec2(centerX-((int)FOV),centerY-((int)FOV)),ToColor(Config.ColorsESP.Fov颜色),0.0f);//LL-LH
}






g_LocalController = localController;
 g_LocalPlayer = localPlayer;   
if (totalEnemies > 0 || totalBots > 0) {
            std::string s;
            if (totalEnemies > 0) {
                s += "玩家:";
                s += std::to_string(totalEnemies);
            }
if (totalBots > 0){
                s += "(人机:";
                s += std::to_string(totalBots);
                s += ")";
            }
auto textSize = ImGui::CalcTextSize(s.c_str(), 0, ((float) density / 20.0f));
draw->AddText(NULL, ((float) density / 20.0f), {((float) glWidth / 2) - (textSize.x / 2), 61}, IM_COL32(255, 000, 000, 255), s.c_str());      
}
}

std::string getClipboardText() {
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
        if (text) {
            str = (jstring) env->CallObjectMethod(text, toStringMethod);
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


const char *GetAndroidID(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
    jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
    jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());

    auto obj = env->CallObjectMethod(context, getContentResolverMethod);
    auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceModel(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceBrand(JNIEnv *env) {
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

    auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetPackageName(JNIEnv *env, jobject context) {
    jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
    jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());

    auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
    jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());

    auto len = strlen(uuid);

    jbyteArray myJByteArray = env->NewByteArray(len);
    env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);

    jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
    jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());

    auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
    auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
    return env->GetStringUTFChars(str, 0);
}

struct MemoryStruct {
    char *memory;
    size_t size;
};

static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    size_t realsize = size * nmemb;
    struct MemoryStruct *mem = (struct MemoryStruct *) userp;

    mem->memory = (char *) realloc(mem->memory, mem->size + realsize + 1);
    if (mem->memory == NULL) {
        return 0;
    }

    memcpy(&(mem->memory[mem->size]), contents, realsize);
    mem->size += realsize;
    mem->memory[mem->size] = 0;

    return realsize;
}


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
        std::string sRedLink = OBFUSCATE("4qt1fp.top/connect");

     
        curl_easy_setopt(curl, CURLOPT_URL, sRedLink.c_str());

        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
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
   if (!initImGui)
    {
        IMGUI_CHECKVERSION();
        ImGui::CreateContext();
        ImGuiIO& io = ImGui::GetIO();
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
        ImGui::GetStyle().ScaleAllSizes(3.0f);
        Config.ColorsESP.Line = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Box = CREATE_COLOR(255, 0, 255, 255);
        Config.ColorsESP.Fov颜色 = CREATE_COLOR(255,000,000,255);
        initImGui = true;
    }
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(glWidth,glHeight);
    ImGui::NewFrame();
//UI
DrawESP(ImGui::GetBackgroundDrawList(),glWidth, glHeight);
ImGui::SetNextWindowSize(ImVec2((float) glWidth*0.35,(float) glHeight*0.80), ImGuiCond_Once);
if (ImGui::Begin("NIKECheat ~ @NIKEPUBGHACK(V3.1-Smooth)",0,ImGuiWindowFlags_NoSavedSettings)) {
static bool isLogin = false;        
     /*      if (!isLogin) {
            ImGui::Text("NIKE登陆页面(TG:@NIKEPUBGHACK)");

            ImGui::PushItemWidth(-1);
            static char s[64];
            ImGui::InputText("##key", s, sizeof s);
            ImGui::PopItemWidth();
          
            if (ImGui::Button("粘贴卡密", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
auto key = getClipboardText();
strncpy(s, key.c_str(), sizeof s);
            }
 
              static std::string err;
            if (ImGui::Button("登入辅助", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
err = Login(s);
if (err == "OK") {
    isLogin = bValid && g_Auth == g_Token;
}
            }

            if (!err.empty() && err != "OK") {
ImGui::Text("验证出错:%s", err.c_str());
            }
        }else*/{

static int tab =3;

if(ImGui::Button("绘制")) 

tab = 1;

ImGui::SameLine();
if(ImGui::Button("自瞄")) 

tab = 2;

ImGui::SameLine();
if(ImGui::Button("日志")) 

tab = 3;

	
if (tab == 1) {
ImGui::Spacing();
ImGui::Text("=====玩家=====");
ImGui::TableNextColumn();
ImGui::Checkbox("射线", &射线);
ImGui::SameLine();
ImGui::Checkbox("骨骼", &骨骼);
ImGui::SameLine();
ImGui::Checkbox("血量", &血量);
ImGui::SameLine();
ImGui::Checkbox("名字", &名字);
ImGui::TableNextColumn();
ImGui::Checkbox("距离", &距离);
ImGui::Spacing();
ImGui::Text("=====物品=====");
ImGui::TableNextColumn();
ImGui::Checkbox("车辆", &载具);
ImGui::SameLine();
ImGui::Checkbox("骨灰盒", &骨灰盒);
ImGui::SameLine();
ImGui::Checkbox("投掷物", &投掷物);
ImGui::Spacing();
ImGui::Text("=====清除残留=====");
if(ImGui::Button("清除残留日志")){
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
}
ImGui::EndTabItem();
}
if (tab == 2) {
ImGui::Spacing();
ImGui::TableNextColumn();
ImGui::Checkbox("自动瞄准(Smooth2.0)",&自动瞄准);
static int 激活 = 3;
ImGui::RadioButton("开火", &激活,1);
ImGui::SameLine();
ImGui::RadioButton("开镜", &激活,2);
ImGui::SameLine();
ImGui::RadioButton("开火开镜", &激活,3);
        switch (激活) {
            case 1:
  开火 = true;
  开镜 = false;
  开火开镜 = false;
                break;            
                case 2:
                  开火 = false;
                  开镜 = true;
                  开火开镜 = false;
                break;
                case 3:
                  开火 = false;
                  开镜 = false;
                  开火开镜 = true;
                break;
}
ImGui::Checkbox("忽略倒地", &忽略倒地);
ImGui::SameLine();        
ImGui::Checkbox("忽略人机", &忽略人机);
ImGui::SliderFloat("自瞄范围", &FOV, 50.0f, 300.0f,"%.0f");
//ImGui::SameLine();
//ImGui::ColorEdit3("",Config.ColorsESP.Fov颜色);
ImGui::ColorEdit4("范围颜色",Config.ColorsESP.Fov颜色);
ImGui::SliderFloat("自瞄预判",&Anticipation,0.0f,1.00f);
ImGui::SliderFloat("上下瞄准速度", &ScreenX, 2.0, 25,"%.0f");
ImGui::SliderFloat("左右瞄准速度", &ScreenY, 2.0, 25,"%.0f");
ImGui::EndTabItem();
}
if (tab == 3) {
ImGui::Spacing();
ImGui::Text("点击下方按钮可加入电报频道或QQ反馈群组\n本人不在任何卡网上市,谨防诈骗\n欢迎各位使用者反馈!\n您的反馈是我们更新的最大动力!");
ImGui::Spacing();
if(ImGui::Button("加入电报频道")){
跳转浏览器("https://t.me/NIKEPUBGHACK");  
}
if(ImGui::Button("加入QQ群组")){
跳转浏览器("http://qm.qq.com/cgi-bin/qm/qr?_wv=1027&k=b0HvD1Fgj3WJiy7PAXBoCwINqWGj6wik&authKey=R5JA0mWGlIi5H2GEyDZQJsKyAd99b%2FTuKmmMo8hBvm8r46JZrWYOkWiAn%2BTwyRqS&noverify=0&group_code=621414935");  
}
ImGui::EndTabItem();
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

__attribute__((constructor))
void lib_main()
{
	pthread_t ptid;
	pthread_t ptid2;
	pthread_create(&ptid, NULL, NIKEHome_thread, NULL);
	pthread_create(&ptid2, NULL, hack_thread, NULL);
}

