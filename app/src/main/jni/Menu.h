#pragma once

#include <iostream>

#include <thread>
#include <unordered_map>
#include <string> 
#include <vector>
#include<sstream>
#include<math.h>

#include <thread>
#include <chrono>


#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
void DownImg();
using namespace std;
using namespace std::chrono;

float color_edit4[4] = { 1.00f, 1.00f, 1.00f, 1.000f };
float slider_dot = 50.0f;
float slider_speed = 10.0f;
enum Em416 {
        Fool = 0,
        Glacier = 1,
		Wanderer = 2,
		Lizard = 3,
		Wild = 4
		
    };
enum EAkm {
        Glacierr = 0,
        Seven = 1,
		Desert = 2,
		Jack = 3,
		Dragon = 4,
		Tiger = 5,
		Hellfire = 6
		
    };
enum Em762 {
        Unicorn = 0,
        Lotus = 1,
		Concerto = 2
		
    };
enum EScarL {
        Water = 0,
        Pumpkin = 1,
		Operation = 2,
		Bass = 3
		
    };
enum Eump {
        Dragonfire = 0,
        EMP = 1,
		Fantasy = 2,
		Piano = 3
		
    };
enum Em16A4 {
        Blood = 0,
        Aurora = 1,
		Radiant = 2
		
    };
enum EVector {
        Tooth = 0,
        Midnight = 1,
		Cute = 2
		
    };
enum ESkin {
	    None = 0,
        Raven = 1,
        Mummy = 2,
		Avalanche = 3,
		Poseidon = 4,
		Ab = 5,
		Abc = 6
		
		
    };
enum Em249 {
        Winter = 0
        
		
    };
enum EAwm {
        Avenger = 0,
        Godzilla = 1,
		Commander = 2
		
    };
enum Euzi {
        Savagery = 0,
        Ethereal = 1,
		Romantic = 2
		
    };
enum EKar98k {
        Terror = 0,
        Kukulkan = 1,
		Night = 2,
		Moonlit = 3
		
    };
enum Em24 {
        Sevenn = 0,
        Pharaoh = 1,
		Killer = 2,
		Lady = 3
		
    };
Em416 M416;
EVector VECTORR;
EAkm AKM;
Euzi UZI;
Em762 M762;
EAwm AWM;
EKar98k KAR98K;
Em24 M24;
Em16A4 M16A4;
Eump UMP45;
EScarL SCAR;
Em249 M249;
ESkin SKIN;
bool KM416 = false;
bool KAKM = false;
bool KSCAR = false;
bool KM762 = false;
bool KM249 = false;
bool KM16A4 = false;
bool KKAR98 = false;
bool KAWM = false;
bool KM24 = false;
bool KUMP45 = false;
bool KVECTOR = false;
bool KUZI = false;

bool KSKIN = false;
bool KSKS = false;
bool KMINI = false;
bool KDP28 = false;
bool KPAN = false;
bool KTOMMY = false;
bool KGROZA = false;

namespace ImGui {

    bool BufferingBar(const char* label, float value, const ImVec2& size_arg, const ImU32& bg_col, const ImU32& fg_col) {
        ImGuiWindow* window = GetCurrentWindow();
        if (window->SkipItems)
            return false;

        ImGuiContext& g = *GImGui;
        const ImGuiStyle& style = g.Style;
        const ImGuiID id = window->GetID(label);

        ImVec2 pos = window->DC.CursorPos;
        ImVec2 size = size_arg;
        size.x -= style.FramePadding.x * 2;

        const ImRect bb(pos, ImVec2(pos.x + size.x, pos.y + size.y));
        ItemSize(bb, style.FramePadding.y);
        if (!ItemAdd(bb, id))
            return false;

        // Render
        const float circleStart = size.x * 0.7f;
        const float circleEnd = size.x;
        const float circleWidth = circleEnd - circleStart;

        window->DrawList->AddRectFilled(bb.Min, ImVec2(pos.x + circleStart, bb.Max.y), bg_col);
        window->DrawList->AddRectFilled(bb.Min, ImVec2(pos.x + circleStart * value, bb.Max.y), fg_col);

        const float t = g.Time;
        const float r = size.y / 2;
        const float speed = 1.5f;

        const float a = speed * 0;
        const float b = speed * 0.333f;
        const float c = speed * 0.666f;

        const float o1 = (circleWidth + r) * (t + a - speed * (int)((t + a) / speed)) / speed;
        const float o2 = (circleWidth + r) * (t + b - speed * (int)((t + b) / speed)) / speed;
        const float o3 = (circleWidth + r) * (t + c - speed * (int)((t + c) / speed)) / speed;

        window->DrawList->AddCircleFilled(ImVec2(pos.x + circleEnd - o1, bb.Min.y + r), r, bg_col);
        window->DrawList->AddCircleFilled(ImVec2(pos.x + circleEnd - o2, bb.Min.y + r), r, bg_col);
        window->DrawList->AddCircleFilled(ImVec2(pos.x + circleEnd - o3, bb.Min.y + r), r, bg_col);
    }

    bool Spinner(const char* label, float radius, int thickness, const ImU32& color) {
        ImGuiWindow* window = GetCurrentWindow();
        if (window->SkipItems)
            return false;

        ImGuiContext& g = *GImGui;
        const ImGuiStyle& style = g.Style;
        const ImGuiID id = window->GetID(label);

        ImVec2 pos = window->DC.CursorPos;
        ImVec2 size((radius) * 2, (radius + style.FramePadding.y) * 2);

        const ImRect bb(pos, ImVec2(pos.x + size.x, pos.y + size.y));
        ItemSize(bb, style.FramePadding.y);
        if (!ItemAdd(bb, id))
            return false;

        // Render
        window->DrawList->PathClear();

        int num_segments = 30;
        int start = abs(ImSin(g.Time * 1.8f) * (num_segments - 5));

        const float a_min = IM_PI * 2.0f * ((float)start) / (float)num_segments;
        const float a_max = IM_PI * 2.0f * ((float)num_segments - 3) / (float)num_segments;

        const ImVec2 centre = ImVec2(pos.x + radius, pos.y + radius + style.FramePadding.y);

        for (int i = 0; i < num_segments; i++) {
            const float a = a_min + ((float)i / (float)num_segments) * (a_max - a_min);
            window->DrawList->PathLineTo(ImVec2(centre.x + ImCos(a + g.Time * 8) * radius,
                centre.y + ImSin(a + g.Time * 8) * radius));
        }

        window->DrawList->PathStroke(color, false, thickness);
    }

   

}
