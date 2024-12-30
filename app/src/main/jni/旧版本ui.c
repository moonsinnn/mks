
//XA ESP CHEAT 自写UI菜单
ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, {10 , 10});
if (ImGui::BeginChild("左侧主菜单", ImVec2(150, 0), true,ImGuiWindowFlags_None));    
{
ImGui::Image(Logo.textureId, {130, 140});
if (ImGui::Button("主页区域",ImVec2(130, 60)))
{
菜单 = true;
菜单1 = false;
菜单2 = false;
菜单3 = false;
				//菜单4 = false;
}
			
if (ImGui::Button("绘制区域",ImVec2(130, 60)))
{
菜单 = false;
菜单1 = true;
菜单2 = false;
菜单3 = false;
				//菜单4 = false;
}
if (ImGui::Button("追踪区域",ImVec2(130, 60)))
{
菜单 = false;
菜单1 = false;
菜单2 = true;
菜单3 = false;
				//菜单4 = false;
}
			
if (ImGui::Button("待定区域",ImVec2(130, 60)))
{
菜单 = false;
菜单1 = false;
菜单2 = false;
菜单3 = true;
}
ImGui::Text("青龙Qing直装");			
ImGui::EndChild();
}
		
ImGui::SameLine();
if(菜单){
						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{
ImGui::Text(" - PUBG MOBILE - 3.0");

ImGui::Spacing();
ImGui::Separator();
ImGui::TableNextColumn();
ImGui::Spacing();
ImGui::Text(" - 欢迎使用 青龙Qing - 0302");
        
ImGui::Text(" - 官方频道:@Qing0129");

//ImGui::Toggle(OBFUSCATE("大厅过检〈防止禁令〉"), &大厅防封);
//ImGui::Toggle(OBFUSCATE("全局离线〈局内开启〉"), &全局);

ImGui::Text(" - 注意：");
ImGui::Text(" - 你的卡密到期时间为:");
ImGui::Text(" - %s", 到期时间);
ImGui::Text(" - 追踪必须开启忽略人机");
ImGui::Text(" - 大厅开启初始化配置");
ImGui::Text(" - 局内开启全局离线");
ImGui::EndTabItem();   
} 
}  
if(菜单1){						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{
if (ImGui::Button("一键开启绘制",{-1,40}))   
{
射线 = true;
骨骼 = true;
血量 = true;
信息 = true;
投掷物 = true;
载具 = true;
骨灰盒 = true;
//手持 = true;
}
		 
ImGui::Spacing();//间距
if (ImGui::Button("一键关闭绘制",{-1,40}))   
{
射线 = false;
骨骼 = false;
血量 = false;
信息 = false;
投掷物 = false;
载具 = false;
骨灰盒 = false;
//手持 = false;
}
ImGui::Spacing();
ImGui::Separator();
ImGui::TableNextColumn();
ImGui::Spacing();
//ImGui::SliderFloat("绘制距离", &绘制距离, 0.0f, 500.0f);
ImGui::Spacing();
ImGui::Separator();
ImGui::TableNextColumn();
ImGui::Spacing();
if (ImGui::BeginTable("split", 2,
ImGuiTableFlags_Borders | ImGuiTableFlags_Resizable |
ImGuiTableFlags_Reorderable | ImGuiTableFlags_Hideable)) {
ImGui::TableSetupColumn("绘制菜单", ImGuiTableColumnFlags_WidthStretch);
ImGui::TableSetupColumn("", ImGuiTableColumnFlags_WidthStretch);
ImGui::TableHeadersRow();
ImGui::TableNextColumn();
ImGui::Checkbox("显示射线", &射线);
ImGui::TableNextColumn();
ImGui::Checkbox("显示骨骼", &骨骼);

ImGui::TableNextColumn();
ImGui::Checkbox("显示血量", &血量);
ImGui::TableNextColumn();
ImGui::Checkbox("显示信息", &信息);

ImGui::TableNextColumn();
ImGui::Checkbox("手雷预警", &投掷物);
ImGui::TableNextColumn();
ImGui::Checkbox("显示载具", &载具);

ImGui::TableNextColumn();
ImGui::Checkbox("显示盒子", &骨灰盒);
//ImGui::TableNextColumn();
//ImGui::Checkbox("盒子物资", &盒子物资);

ImGui::TableNextColumn();
ImGui::Checkbox("手持显示", &手持);
ImGui::TableNextColumn();
ImGui::Checkbox("隐藏人机", &隐藏人机);
ImGui::TableNextColumn();
ImGui::EndTable();	
}
//ImGui::Checkbox("全局离线<对局开启>", &全局);
ImGui::EndTabItem();  
}
}
if(菜单2){
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));
{

ImGui::Toggle(OBFUSCATE("漏打自瞄 - 250米"), &漏打自瞄);
ImGui::TableNextColumn();
ImGui::Toggle(OBFUSCATE("子弹追踪 - 250米"), &子追);
ImGui::Separator();
ImGui::TableNextColumn();
  ImGui::Text("击中部位:");
  static int b = 2;
  ImGui::RadioButton("头部", &b, 1);
  ImGui::SameLine();
  ImGui::RadioButton("身体", &b, 2);
  switch (b) {
  case 1:
  头部 = true;
  身体 = false;
  break;
  case 2:
  头部 = false;
  身体 = true;
  break;
  }
  ImGui::Separator();
  ImGui::TableNextColumn();
  ImGui::Text("触发方式:");
  static int g = 3;
  ImGui::RadioButton("开火", &g, 1);
  ImGui::SameLine();
  ImGui::RadioButton("开镜", &g, 2);
  ImGui::SameLine();
  ImGui::RadioButton("任何", &g, 3);
  switch (g) {
  case 1:
  开火 = true;
  开镜 = false;
  break;
  case 2:
  开火 = false;
  开镜 = true;
  case 3:
  开火 = false;
  开镜 = false;
  开火开镜 = true;
  break;
  }
ImGui::Separator();
ImGui::TableNextColumn();
ImGui::SliderFloat("范围",&Fov, 0.0f, 160.0f);
ImGui::ColorEdit3("范围颜色",Config.ColorsESP.Fov颜色);
ImGui::Separator();
ImGui::TableNextColumn();
ImGui::Checkbox("人机不瞄", &忽略人机);
ImGui::SameLine();			
ImGui::Checkbox("倒地不瞄", &忽略倒地);  
ImGui::EndTabItem();   
} 
}  

if(菜单3){
						
if (ImGui::BeginChild("子菜单0", ImVec2(0, 0), true, ImGuiWindowFlags_None));{
/*ImGui::Checkbox("基址广角", &广角);
ImGui::SliderFloat("大小",&广角大小, 0.0f, 5.0f);

ImGui::Text(" - 大厅开启(否则防禁)");

ImGui::Checkbox("果冻美化", &Config.果冻);
ImGui::SameLine();			
ImGui::Checkbox("猴子美化", &Config.猴子);  

ImGui::Checkbox("木乃伊黄", &Config.木乃伊黄);
ImGui::SameLine();			
ImGui::Checkbox("木乃伊蓝", &Config.木乃伊蓝);  

ImGui::Checkbox("木乃伊白", &Config.木乃伊白);
ImGui::SameLine();			
ImGui::Checkbox("满级血鸦", &Config.满级血鸦);  

ImGui::Checkbox("满级法老", &Config.满级法老);
ImGui::SameLine();			
ImGui::Checkbox("满级海王", &Config.满级海王); 

ImGui::EndTabItem();   
}
}
}
}
}