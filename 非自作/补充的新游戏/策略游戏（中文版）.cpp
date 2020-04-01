#include <iostream>
#include <string>
#include "Windows.h"
using namespace std;
int main(){
    std::string ml;//all
    std::string wj;//give||title
    std::string wp;//give||fill||setblock
    std::string time;//timeset
    std::string wz;//title
    std::string a;//title
    long long g,m;//give
    long long xs,ys,zs,xe,ye,ze;//fill
    long long x,y,z;//setblock 
    cout<<"欢迎来到MC命令模拟器(版本号0.0.7)"<<endl;
    Sleep(500);
    while(true){
        Sleep(2000);
        cout<<"请输入一个命令:";
        cin>>ml;
        if(ml=="/help"){
            cout<<"目前支持命令:"<<endl;
            Sleep(1500);
            cout<<"/help(查找命令)"<<endl;
            Sleep(1500);
            cout<<"/give @* * * *(给予玩家物品)"<<endl;
            Sleep(1500);
            cout<<"/setblock * * * *(设置方块)"<<endl;
            Sleep(1500); 
            cout<<"/timeset *(设置时间)"<<endl;
            Sleep(1500);
            cout<<"/title @* title *(标题命令)"<<endl;
            Sleep(1500);
            cout<<"/fill * * * * * * *(填充方块)"<<endl;
            Sleep(1500);
            cout<<"输入 “/Esc ”即可退出"<<endl;
        }else if(ml=="/give"){
            cin>>wj;
            cin>>wp;
            cin>>g>>m;
            cout<<"已经给予玩家“我是猪 ”"<<wp<<g<<"个"<<m<<"组"<<endl; 
        }else if(ml=="/setblock"){
            cin>>x>>y>>z;
            cin>>wp;
            cout<<"已经将"<<x<<","<<y<<","<<z<<"处填上"<<wp<<"方块"<<endl;
        }else if(ml=="/timeset"){
            cin>>time;
            cout<<"已设置时间"<<time;
        }else if(ml=="/fill"){
            cin>>xs>>ys>>zs>>xe>>ye>>ze;
            cin>>wp;
            cout<<"已从"<<xs<<","<<ys<<","<<zs<<"到"<<xe<<","<<ye<<","<<ze<<"内填上方块"<<wp;
        }else if(ml=="/title"){
            cin>>wj;
            cin>>a;
            cin>>wz;
            cout<<wz<<endl;
            Sleep(1000);
            cout<<"标题命令执行成功"<<endl;
        }else if(ml=="/Esc"){
            cout<<"MC";
            Sleep(1500);
            cout<<"命";
            Sleep(1500);
            cout<<"令";
            Sleep(1500);
            cout<<"模拟器:";
            Sleep(1500);
            cout<<"已";
            Sleep(1500);
            cout<<"退";
            Sleep(1500);
            cout<<"出";
            Sleep(1500);
            cout<<"程";
            Sleep(1500);
            cout<<"序"<<endl;
            break;
        }else{
            cout<<"未知的命令:"<<ml<<endl;
            Sleep(500);
            cout<<"查看命令输入 /help"<<endl;
        }
    }
    cout<<"系统:将在10秒后关闭电脑"<<endl;
    for(int i=9;i>=1;i--){
        printf("%d",i);
        Sleep(1000);
        printf("\b");
    }
    cout<<"电脑已经关机";
}
