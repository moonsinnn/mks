#include "配置.hpp"

void 凯撒UI(){
	IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
	
	//Set ImGui Style
    //ImGui::StyleColorsDark();
    ImGui::CreateContext();
    
    ImGuiStyle& style = ImGui::GetStyle();
style.Colors[ImGuiCol_Text]                  = ImColor(0, 0, 0, 255); //文字颜色
    style.Colors[ImGuiCol_WindowBg]              = ImColor(255, 255, 255, 255); //背景
    style.Colors[ImGuiCol_ButtonActive] = ImColor(000,000,000,120);//激活后 浅色
    style.Colors[ImGuiCol_Border]                = ImColor(000,000,000,120);   //边框 深色
     
    style.Colors[ImGuiCol_FrameBg] = ImColor(0, 0, 0, 0); // 框架背景的默认颜色（例如输入框）
    style.Colors[ImGuiCol_FrameBgActive] = ImColor(0, 0, 0, 0); // 框架背景在激活状态下的颜色
    style.Colors[ImGuiCol_FrameBgHovered] = ImColor(0, 0, 0, 0); // 鼠标悬停在框架背景上时的颜色
     
    style.Colors[ImGuiCol_CheckMark]             = ImColor(000,000,000,120); //按钮对勾 深色
    
    style.Colors[ImGuiCol_Button] = ImColor(000,000,000,120);//正常按钮颜色
    style.Colors[ImGuiCol_ButtonHovered] = ImColor(000,000,000,120);
    style.Colors[ImGuiCol_SliderGrab] = ImColor(213, 67, 13, 255); // 滚动条小方块颜
    style.Colors[ImGuiCol_Header]                = ImColor(000,000,000,120);
    style.Colors[ImGuiCol_HeaderActive]          = ImColor(000,000,000,120);
    style.Colors[ImGuiCol_HeaderHovered]         = ImColor(000,000,000,120);
    style.Colors[ImGuiCol_ScrollbarBg]           = ImColor(000,000,000,120);
    style.Colors[ImGuiCol_ScrollbarGrab]         = ImColor(000,000,000,120);
    style.Colors[ImGuiCol_ScrollbarGrabHovered]  = ImColor(000,000,000,120);
    style.Colors[ImGuiCol_ScrollbarGrabActive]   = ImColor(000,000,000,120);
    style.Colors[ImGuiCol_ResizeGrip]            = ImColor(000,000,000,120);
    style.Colors[ImGuiCol_ResizeGripHovered]     = ImColor(000,000,000,120);
    style.Colors[ImGuiCol_ResizeGripActive]      = ImColor(000,000,000,120);    
}

void 巴巴托斯UI(){
IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
	
	//Set ImGui Style
    //ImGui::StyleColorsDark();
    ImGui::CreateContext();
    
    ImGuiStyle& style = ImGui::GetStyle();
style.Colors[ImGuiCol_Text]                  = ImColor(0, 0, 0, 255); //文字颜色
    style.Colors[ImGuiCol_WindowBg]              = ImColor(255, 255, 255, 255); //背景
    style.Colors[ImGuiCol_ButtonActive] = ImColor(000,255,000,200);//激活后 浅色
    style.Colors[ImGuiCol_Border]                = ImColor(255, 255, 255, 150);   //边框 深色
     
    style.Colors[ImGuiCol_FrameBg] = ImColor(0, 0, 0, 0); // 框架背景的默认颜色（例如输入框）
    style.Colors[ImGuiCol_FrameBgActive] = ImColor(0, 0, 0, 0); // 框架背景在激活状态下的颜色
    style.Colors[ImGuiCol_FrameBgHovered] = ImColor(0, 0, 0, 0); // 鼠标悬停在框架背景上时的颜色
     
    style.Colors[ImGuiCol_CheckMark]             = ImColor(255, 255, 255, 150); //按钮对勾 深色
    
    style.Colors[ImGuiCol_Button] = ImColor(255, 255, 255, 150);//正常按钮颜色
    style.Colors[ImGuiCol_ButtonHovered] = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_SliderGrab] = ImColor(213, 67, 13, 255); // 滚动条小方块颜
    style.Colors[ImGuiCol_Header]                = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_HeaderActive]          = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_HeaderHovered]         = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ScrollbarBg]           = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ScrollbarGrab]         = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ScrollbarGrabHovered]  = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ScrollbarGrabActive]   = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ResizeGrip]            = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ResizeGripHovered]     = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ResizeGripActive]      = ImColor(000,255,000,200);    
}
void 散兵UI(){
	ImGuiStyle& style = ImGui::GetStyle();
    ImGui::StyleColorsLight();
    style.Colors[ImGuiCol_Text] = ImColor(255, 255, 255, 255); // 文本颜色
    style.Colors[ImGuiCol_WindowBg] = ImColor(0, 0, 0, 255); // 窗口背景颜色
    style.Colors[ImGuiCol_Button] = ImColor(127, 82, 180, 255); // 按钮默认状态下的颜色
    style.Colors[ImGuiCol_ButtonHovered] = ImColor(147, 102, 200, 255); // 鼠标悬停在按钮上时的颜色
    style.Colors[ImGuiCol_ButtonActive] = ImColor(167, 122, 220, 255); // 按钮被点击或激活状态下的颜色
    style.Colors[ImGuiCol_FrameBg] = ImColor(0, 0, 0, 0); // 框架背景的默认颜色（例如输入框）
    style.Colors[ImGuiCol_FrameBgActive] = ImColor(0, 0, 0, 0); // 框架背景在激活状态下的颜色
    style.Colors[ImGuiCol_FrameBgHovered] = ImColor(0, 0, 0, 0); // 鼠标悬停在框架背景上时的颜色
    style.Colors[ImGuiCol_CheckMark] = ImColor(127, 82, 180, 255); // 复选框中的勾选标记颜色
    style.Colors[ImGuiCol_SliderGrab] = ImColor(127, 82, 180, 255); // 滑块抓手的默认颜色
    style.Colors[ImGuiCol_SliderGrabActive] = ImColor(167, 122, 220, 255); // 滑块抓手在激活状态下的颜色
    style.Colors[ImGuiCol_Header] = ImColor(127, 82, 180, 255); // 标题颜色（如可折叠列表的标题）
    style.Colors[ImGuiCol_HeaderHovered] = ImColor(147, 102, 200, 255); // 鼠标悬停在标题上时的颜色
    style.Colors[ImGuiCol_HeaderActive] = ImColor(167, 122, 220, 255); // 标题在激活状态下的颜色
    style.Colors[ImGuiCol_ScrollbarBg] = ImColor(0, 0, 0, 0); // 滚动条背景颜色
    style.Colors[ImGuiCol_ScrollbarGrab] = ImColor(127, 82, 180, 255); // 滚动条把手颜色
    style.Colors[ImGuiCol_ScrollbarGrabActive] = ImColor(127, 82, 180, 255); // 滚动条激活状态把手颜色
    style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImColor(127, 82, 180, 255); // 滚动条悬停状态把手颜色
    style.Colors[ImGuiCol_ResizeGrip] = ImColor(127, 82, 180, 255); // 调整大小把手的默认颜色
    style.Colors[ImGuiCol_ResizeGripHovered] = ImColor(127, 82, 180, 255); // 鼠标悬停在调整大小把手上时的颜色
    style.Colors[ImGuiCol_ResizeGripActive] = ImColor(127, 82, 180, 255); // 正在使用调整大小把手时的颜色。
    style.Colors[ImGuiCol_PopupBg] = ImColor(0, 0, 0, 255); // 下拉框激活状态背景
    style.Colors[ImGuiCol_Border] = ImColor(81, 58, 113, 255); // 边框颜色
    style.Colors[ImGuiCol_Separator] = ImColor(81, 58, 113, 255); // 分隔符颜色
}
void 流浪者UI(){
	ImGuiStyle& style = ImGui::GetStyle();
    ImGui::StyleColorsLight();
    style.Colors[ImGuiCol_Text] = ImColor(0, 0, 0, 255); // 文本颜色
    style.Colors[ImGuiCol_WindowBg] = ImColor(255, 255, 255, 255); // 窗口背景颜色
    style.Colors[ImGuiCol_Button] = ImColor(97, 156, 222, 255); // 按钮默认状态下的颜色
    style.Colors[ImGuiCol_ButtonHovered] = ImColor(117, 176, 242, 255); // 鼠标悬停在按钮上时的颜色
    style.Colors[ImGuiCol_ButtonActive] = ImColor(137, 206, 255, 255); // 按钮被点击或激活状态下的颜色
    style.Colors[ImGuiCol_FrameBg] = ImColor(0, 0, 0, 0); // 框架背景的默认颜色（例如输入框）
    style.Colors[ImGuiCol_FrameBgActive] = ImColor(0, 0, 0, 0); // 框架背景在激活状态下的颜色
    style.Colors[ImGuiCol_FrameBgHovered] = ImColor(0, 0, 0, 0); // 鼠标悬停在框架背景上时的颜色
    style.Colors[ImGuiCol_CheckMark] = ImColor(97, 156, 222, 255); // 复选框中的勾选标记颜色
    style.Colors[ImGuiCol_SliderGrab] = ImColor(97, 156, 222, 255); // 滑块抓手的默认颜色
    style.Colors[ImGuiCol_SliderGrabActive] = ImColor(137, 206, 255, 255); // 滑块抓手在激活状态下的颜色
    style.Colors[ImGuiCol_Header] = ImColor(97, 156, 222, 255); // 标题颜色（如可折叠列表的标题）
    style.Colors[ImGuiCol_HeaderHovered] = ImColor(117, 176, 242, 255); // 鼠标悬停在标题上时的颜色
    style.Colors[ImGuiCol_HeaderActive] = ImColor(137, 206, 255, 255); // 标题在激活状态下的颜色
    style.Colors[ImGuiCol_ScrollbarBg] = ImColor(0, 0, 0, 0); // 滚动条背景颜色
    style.Colors[ImGuiCol_ScrollbarGrab] = ImColor(97, 156, 222, 255); // 滚动条把手颜色
    style.Colors[ImGuiCol_ScrollbarGrabActive] = ImColor(97, 156, 222, 255); // 滚动条激活状态把手颜色
    style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImColor(97, 156, 222, 255); // 滚动条悬停状态把手颜色
    style.Colors[ImGuiCol_ResizeGrip] = ImColor(97, 156, 222, 255); // 调整大小把手的默认颜色
    style.Colors[ImGuiCol_ResizeGripHovered] = ImColor(97, 156, 222, 255); // 鼠标悬停在调整大小把手上时的颜色
    style.Colors[ImGuiCol_ResizeGripActive] = ImColor(97, 156, 222, 255); // 正在使用调整大小把手时的颜色。
    style.Colors[ImGuiCol_PopupBg] = ImColor(255, 255, 255, 255); // 下拉框激活状态背景
    style.Colors[ImGuiCol_Border] = ImColor(87, 122, 176, 255); // 边框颜色
    style.Colors[ImGuiCol_Separator] = ImColor(87, 122, 176, 255); // 分隔符颜色
}



void PFSUI(){
ImGuiStyle *style = &ImGui::GetStyle();

     // 文本颜色
     style->Colors[ImGuiCol_Text] = ImColor(0, 0, 0, 255);

     // 背景颜色
     style->Colors[ImGuiCol_WindowBg] = ImColor(255, 255, 255, 255);

     // 激活后按钮颜色
     style->Colors[ImGuiCol_ButtonActive] = ImColor(255, 192, 203);

style->Colors[ImGuiCol_ButtonHovered] = ImColor(255, 192, 203); // 鼠标悬停在按钮上时的颜色

style->Colors[ImGuiCol_Button] = ImColor(255, 192, 203);//正常按钮颜色//巴托蓝

style->Colors[ImGuiCol_HeaderHovered] = ImColor(255, 192, 203); // 鼠标悬停在标题上时的颜色

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

}
void IOSUI(){
ImGuiStyle& style = ImGui::GetStyle();
    ImGui::StyleColorsLight();
    
style.Colors[ImGuiCol_Text] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.00f, 0.40f, 0.41f, 1.00f);
    style.Colors[ImGuiCol_WindowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.80f);
    style.Colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    style.Colors[ImGuiCol_Border] = ImVec4(0.00f, 1.00f, 1.00f, 0.65f);
    style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    style.Colors[ImGuiCol_FrameBg] = ImVec4(0.44f, 0.80f, 0.80f, 0.18f);
    style.Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.44f, 0.80f, 0.80f, 0.27f);
    style.Colors[ImGuiCol_FrameBgActive] = ImVec4(0.44f, 0.81f, 0.86f, 0.66f);
    style.Colors[ImGuiCol_TitleBg] = ImVec4(0.14f, 0.18f, 0.21f, 0.73f);
    style.Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.54f);
    style.Colors[ImGuiCol_TitleBgActive] = ImVec4(0.00f, 1.00f, 1.00f, 0.27f);
    style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.20f);
    style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.22f, 0.29f, 0.30f, 0.71f);
    style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.00f, 1.00f, 1.00f, 0.44f);
    style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.00f, 1.00f, 1.00f, 0.74f);
    style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style.Colors[ImGuiCol_CheckMark] = ImVec4(0.00f, 1.00f, 1.00f, 0.68f);
    style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.00f, 1.00f, 1.00f, 0.36f);
    style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.00f, 1.00f, 1.00f, 0.76f);
    style.Colors[ImGuiCol_Button] = ImVec4(0.00f, 0.65f, 0.65f, 0.46f);
    style.Colors[ImGuiCol_ButtonHovered] = ImVec4(0.01f, 1.00f, 1.00f, 0.43f);
    style.Colors[ImGuiCol_ButtonActive] = ImVec4(0.00f, 1.00f, 1.00f, 0.62f);
    style.Colors[ImGuiCol_Header] = ImVec4(0.00f, 1.00f, 1.00f, 0.33f);
    style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.00f, 1.00f, 1.00f, 0.42f);
    style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.00f, 1.00f, 1.00f, 0.54f);
    style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.00f, 1.00f, 1.00f, 0.54f);
    style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.00f, 1.00f, 1.00f, 0.74f);
    style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style.Colors[ImGuiCol_PlotLines] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);
    style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.00f, 1.00f, 1.00f, 0.22f);
}
void 绿色温馨风UI(){
IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
	
	//Set ImGui Style
    //ImGui::StyleColorsDark();
    ImGui::CreateContext();
    
    ImGuiStyle& style = ImGui::GetStyle();
style.Colors[ImGuiCol_Text]                  = ImColor(0, 0, 0, 255); //文字颜色
    style.Colors[ImGuiCol_WindowBg]              = ImColor(255, 255, 255, 255); //背景
    style.Colors[ImGuiCol_ButtonActive] = ImColor(000,255,000,200);//激活后 浅色
    style.Colors[ImGuiCol_Border]                = ImColor(000,255,000,200);   //边框 深色
     
    style.Colors[ImGuiCol_FrameBg] = ImColor(0, 0, 0, 0); // 框架背景的默认颜色（例如输入框）
    style.Colors[ImGuiCol_FrameBgActive] = ImColor(0, 0, 0, 0); // 框架背景在激活状态下的颜色
    style.Colors[ImGuiCol_FrameBgHovered] = ImColor(0, 0, 0, 0); // 鼠标悬停在框架背景上时的颜色
     
    style.Colors[ImGuiCol_CheckMark]             = ImColor(000,255,000,200); //按钮对勾 深色
    
    style.Colors[ImGuiCol_Button] = ImColor(000,255,000,200);//正常按钮颜色
    style.Colors[ImGuiCol_ButtonHovered] = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_SliderGrab] = ImColor(213, 67, 13, 255); // 滚动条小方块颜
    style.Colors[ImGuiCol_Header]                = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_HeaderActive]          = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_HeaderHovered]         = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ScrollbarBg]           = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ScrollbarGrab]         = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ScrollbarGrabHovered]  = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ScrollbarGrabActive]   = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ResizeGrip]            = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ResizeGripHovered]     = ImColor(000,255,000,200);
    style.Colors[ImGuiCol_ResizeGripActive]      = ImColor(000,255,000,200);    
    }
void 红色死人风UI(){
IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
	
	//Set ImGui Style
    //ImGui::StyleColorsDark();
    ImGui::CreateContext();
    
    ImGuiStyle& style = ImGui::GetStyle();
style.Colors[ImGuiCol_Text]                  = ImColor(0, 0, 0, 255); //文字颜色
    style.Colors[ImGuiCol_WindowBg]              = ImColor(255, 255, 255, 255); //背景
    style.Colors[ImGuiCol_ButtonActive] = ImColor(255,000,000,200);//激活后 浅色
    style.Colors[ImGuiCol_Border]                = ImColor(255,000,000,200);   //边框 深色
     
    style.Colors[ImGuiCol_FrameBg] = ImColor(0, 0, 0, 0); // 框架背景的默认颜色（例如输入框）
    style.Colors[ImGuiCol_FrameBgActive] = ImColor(0, 0, 0, 0); // 框架背景在激活状态下的颜色
    style.Colors[ImGuiCol_FrameBgHovered] = ImColor(0, 0, 0, 0); // 鼠标悬停在框架背景上时的颜色
     
    style.Colors[ImGuiCol_CheckMark]             = ImColor(255,000,000,200); //按钮对勾 深色
    
    style.Colors[ImGuiCol_Button] = ImColor(255,000,000,200);//正常按钮颜色
    style.Colors[ImGuiCol_ButtonHovered] = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_SliderGrab] = ImColor(213, 67, 13, 255); // 滚动条小方块颜
    style.Colors[ImGuiCol_Header]                = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_HeaderActive]          = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_HeaderHovered]         = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ScrollbarBg]           = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ScrollbarGrab]         = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ScrollbarGrabHovered]  = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ScrollbarGrabActive]   = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ResizeGrip]            = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ResizeGripHovered]     = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ResizeGripActive]      = ImColor(255,000,000,200);    
    }
void 世俗，F死马风UI(){
IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
	
	//Set ImGui Style
    //ImGui::StyleColorsDark();
    ImGui::CreateContext();
    
    ImGuiStyle& style = ImGui::GetStyle();
style.Colors[ImGuiCol_Text]                  = ImColor(0, 0, 0, 255); //文字颜色
    style.Colors[ImGuiCol_WindowBg]              = ImColor(255, 255, 255, 255); //背景
    style.Colors[ImGuiCol_ButtonActive] = ImColor(255,000,000,200);//激活后 浅色
    style.Colors[ImGuiCol_Border]                = ImColor(255,000,000,200);   //边框 深色
     
    style.Colors[ImGuiCol_FrameBg] = ImColor(0, 0, 0, 0); // 框架背景的默认颜色（例如输入框）
    style.Colors[ImGuiCol_FrameBgActive] = ImColor(0, 0, 0, 0); // 框架背景在激活状态下的颜色
    style.Colors[ImGuiCol_FrameBgHovered] = ImColor(0, 0, 0, 0); // 鼠标悬停在框架背景上时的颜色
     
    style.Colors[ImGuiCol_CheckMark]             = ImColor(255,000,000,200); //按钮对勾 深色
    
    style.Colors[ImGuiCol_Button] = ImColor(255,000,000,200);//正常按钮颜色
    style.Colors[ImGuiCol_ButtonHovered] = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_SliderGrab] = ImColor(213, 67, 13, 255); // 滚动条小方块颜
    style.Colors[ImGuiCol_Header]                = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_HeaderActive]          = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_HeaderHovered]         = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ScrollbarBg]           = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ScrollbarGrab]         = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ScrollbarGrabHovered]  = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ScrollbarGrabActive]   = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ResizeGrip]            = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ResizeGripHovered]     = ImColor(255,000,000,200);
    style.Colors[ImGuiCol_ResizeGripActive]      = ImColor(255,000,000,200);    
    }