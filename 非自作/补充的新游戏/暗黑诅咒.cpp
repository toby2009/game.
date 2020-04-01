#include <iostream>
#include <ctime>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <stack>
#include <set>
#include <map>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
using namespace std;
double sudu=3;
bool jieju;
string aaa[101];
int nnn=10,mmm=10,k,x=1,y=1;
struct me
{
    int blood=600,speed=85,attack=500;
}m;
struct slm
{
    int blood=50,attack=5,speed=10;
}m1;
struct zombie
{
    int blood=100,attack=15,speed=20;
}m2;
struct godzilla
{
    int blood=10000,attack=250,speed=50;
}m3;
struct super_godzilla
{
    int blood=100000,attack=5000,speed=85;
}m4;
struct laoban
{
    int blood=10000,attack=5000,speed=85;
}m5;
struct devola
{
    int blood=1000000,attack=10000,speed=90;
 }m6; 
 struct jushou
 {
     int blood=1000,attack=100,speed=50;
 }m7; 
 struct slm2 
{
    int blood=25,attack=3,speed=5;
}m8;
 struct Pavris 
{
    int blood=500,attack=99,speed=20;
}m9;
 struct drzo
{
    int blood=1000000,attack=9999,speed=85;
}m10;
struct bianfu
{
    int blood=300,attack=25,speed=75;
}m11;
struct langren
{
    int blood=1000,attack=100,speed=50;
}m12;
struct dujiao
{
    int blood=500,attack=300,speed=50;
}m13;
struct banmaohu
{
    int blood=5000,attack=500,speed=75;
}m14;
struct haobo8
{
    int blood=1000000000,attack=1000000000,speed=100;
}m15;
struct sts
{
    int blood=6000,attack=1000,speed=50;
}m16;
struct gongzhu
{
    int blood=100,attack=25,speed=50;
}m17;
void jiazai()
{
    printf("正在检查网络...\n0");
    Sleep(150);
    system("cls");
    printf("正在连接服务器...\n▊15");
    Sleep(210);
    system("cls");
    printf("加载资源中...\n█▎25");
    Sleep(180);
    system("cls");
    printf("加载资源中...\n██▊55");
    Sleep(120);
    system("cls");
    printf("加载资源中...\n███▌70");
    Sleep(90);
    system("cls");
    printf("加载资源中...\n███▊75");
    Sleep(450);
    system("cls");
    printf("正在加载剧情...\n████▌90");
    Sleep(120);
    system("cls");
    printf("正在加载怪兽...\n█████100");
    Sleep(300);
    system("cls");
    printf("正在进入新章节...\n█████100");
    Sleep(900);
    system("cls"); 
}
void SlowDisplay(char *p)
{
    while(1)
    {
        if(*p!=0)
            printf("%c",*p++);
        else
            break;
        Sleep(sudu*30);
    }
}
void texiao()
{
    for(int i=1; i<=10; i++)
    {
        system("color 2f");
        Sleep(10);
        system("color 0f");
        Sleep(10);
    }
}
void out()
{
    int i,j;
    for(i=1;i<=nnn;i++)
    {
        for(j=0;j<=mmm;j++)
        {
            cout<<aaa[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}

bool judge(int x,int y)
{
    if(x<1||y<0)return 0;
    if(x>10||y>10)return 0;
    if(aaa[x][y]=='*')return 0;
    return 1;
}
bool jianshang=true;
long long coin=100,a1=10,a3=15,a4=100,a5=25,a6=20,level=1,e1=0,e2=100,tian=1,ct=0;
double a2=10;
bool bai=true,zuihan=true,jiuguan=true;
int main()
{
    srand((unsigned)time(NULL)*10);
    //freopen(".in","r",stdin);
    //freopen(".out","w",stdout);
    if(m.blood>1000000&&m.attack>10000&&m.speed>=85)
    {
                int c2=3,c3=10,c4=5,c5=1;
        SlowDisplay("...\n");
        SlowDisplay("...\n");
        SlowDisplay("...\n");
        SlowDisplay("恭喜进入开挂结局！！！孩子提前改代码是不好哒。。。既然这么喜欢开挂，那就验证你开挂开的有用吧！！！\n");
        SlowDisplay("开挂玩家haobo8向你扑了过去！！！   QAQ\n");
        texiao(); 
        int saot=0,lt=0,t;
        bool saopi=false,liang=false;
         while(m.blood>0&&m15.blood>0)
                    {
                        if(saot==3)
                        {
                            saot=0;
                            saopi=false;
                        }

                        if(saopi)
                        saot++;
                        if(lt==3)
                        {
                            lt=0;
                            liang=false;
                        }

                        if(liang)
                        lt++;

                        cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<endl;
                        cout<<"敌方的血还有"<<m15.blood<<endl;

                        if(liang==false)
                        {
                            cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                        int z;
                        cin>>z;
                        if(z==1)
                        {

                            if(rand()%101<m15.speed)
                            cout<<"敌方躲避了攻击"<<endl;
                            else
                            {
                                m15.blood-=a1;
                                m15.blood-=m.attack;
                                cout<<"敌方受到攻击"<<endl; 
                            }

                        } 
                        else if(z==2&&c2>0)
                        {
                            m1.speed-=a2;
                            cout<<"敌方被冻住了，减了速度！"<<endl;
                            c2--;
                        }
                        else if(z==3&&c3>0)
                        {
                            if(rand()%101<m15.speed||saopi==true)
                            cout<<"敌方躲避了攻击"<<endl;
                            else
                            {
                                m15.blood-=a3;
                                m15.blood-=m.attack;
                                cout<<"敌方受到攻击"<<endl; 
                            }
                            c3--;
                        }
                        else if(z==4&&c4>0)
                        {
                            m.blood+=a4;
                            cout<<"你涨血了！"<<endl; 
                            c4--;
                        }
                        else if(z==5&&c5>0)
                        {

                            m15.blood-=a5;
                            m15.blood-=m.attack;
                            cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                            m.blood+=a6;
                            c5--;
                        }   
                     else
                     cout<<"攻击无效！！！"<<endl;
                        }
                        else
                        {
                            lt++; 
                        cout<<"你的血还有"<<m.blood<<endl;
                        SlowDisplay("你无法动弹。。。\n");
                        }
                     int dt=rand()%10;
                     if(dt==1)
                     {
                        SlowDisplay("haobo8使用超人挂，飞上了天，“看尽世界风云，风景这边更好”，于是他涨了血\n");
                        m15.blood+=2333;
                     }
                     else if(dt==2)
                     {
                        t=m15.blood; 
                        SlowDisplay("haobo8使用锁血挂，3回合不减血\n");
                        saopi=true;
                     }
                     else if(dt==3)
                     {
                        SlowDisplay("haobo8使了冰冻挂，你3回合无法动弹\n");
                        liang=true;
                     }
                     else if(dt==4)
                     {
                        SlowDisplay("haobo8使了爆头挂▄︻┻┳═一…… ☆(>○<)，你血减好多\n");
                        m.blood-=44444444;
                     }
                     else if(dt==5)
                     {
                        SlowDisplay("haobo8使了巨人挂，他血乘2\n");
                        m15.blood*=2;
                     }
                     else
                     cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m15.attack);
                     if(saopi)
                     m15.blood=t;
                }
                if(m.blood<=0)
            {
                cout<<"你死了"<<endl;
                return 0;
            }
            else{ 
            cout<<"敌人死了,然而你忘了对方有复活挂！！！QAQ"<<endl;
                    return 0; 
                }
    }
    SlowDisplay("请问你的名字是什么？(不大于5个字符)\n");
    string name;
    cin>>name;
    if(name=="Crish")
    {
    SlowDisplay("真正的名字。。。\n"); 
        texiao();
    }
    while(name.size()>5) {
        printf("名称错误,请重新输入\n");
        cin>>name;
    }
    int t;
    while(t!=1)
    {
    cout<<name;
    printf(",你好欢迎来到暗黑诅咒游戏\n");
    cout<<"主菜单："<<endl;
    cout<<"1.开始游戏"<<endl<<"2.查看人物介绍"<<endl<<"3.查看更新日志"<<endl<<"4.查看新手攻略"<<endl<<"5.查看设置"<<endl<<"6.查看目录"<<endl<<"7.haobo8是蒟蒻"<<endl<<"8.重大广告（必看！！！！！）"<<endl;

    cin>>t;
    if(t==1)
    system("cls");
    else if(t==3)
     {
        SlowDisplay("0.1.1更新加入奸商老板剧情，修复了一些bug，看看自己里加入了文字提示\n");
        SlowDisplay("0.1.2修复了一些bug，有了更新日志，加入升级系统，还加了一点怪物介绍\n");
         SlowDisplay("0.1.3加入暗黑地府章节，改了点bug，加入天数系统，加入买报系统\n");
         SlowDisplay("0.2.0经过蒟蒻haobo8建议优化了一下，加载速度快了，改了名字小于5字符bug\n");
         SlowDisplay("0.2.1 感谢Ryan提出的bug，改了许多bug，增加醉汉剧情，但没更完，目前还没有查看地图功能，增加第二章，还增加酒馆。。。还更了开挂模式！！！\n");
         SlowDisplay("0.2.2经过巨佬shiys2017提出的bug，改了许多，增多剧情和怪物技能。\n");
         SlowDisplay("0.2.3增添超级哥斯拉的暴走术，新添第三章，有了查看地图\n");
         SlowDisplay("0.3.0增添人物介绍，新手攻略，设置，第三章更新完，再次感谢haobo8改了一个bug\n");
         SlowDisplay("0.3.1增加毁灭结局（提示第三章，3次试图战斗Pavris即可进入毁灭结局），增添目录，增添日记\n");
         SlowDisplay("0.3.2增添第四章一半。。。感谢北辰yama找到的bug\n");
         SlowDisplay("0.3.3增添第四章,改了地图显示的bug，增添懦夫结局（第一章逃跑10次，即可进入，超级难打！！！），取消开挂模式，增添特效和主菜单\n");
         SlowDisplay("0.3.4直接更完第五章。。。第五章很长。。。游戏代码已经超过2000行了！！！\n");
         SlowDisplay("0.4.0一口气更完第六章。。。改了一些文字上的bug。。。\n");
         SlowDisplay("0.4.1一口气更完第七章和第八章一点。。。增加开挂结局。。。\n");
         SlowDisplay("0.4.2更完第八章，寒假没时间更。。。感谢wanghanjun提出的bug\n");
         SlowDisplay("0.4.3更完第九章。。。\n");
         SlowDisplay("0.5.0更了点第十章。。。\n");
     }
     else if(t==4)
     {
        SlowDisplay("基本没什么攻略，唯一攻略就是当玩第一章时血量达600，额外攻击力500，速度85时就可以打哥斯拉了。\n");
        SlowDisplay("顺便说一下第一章纯打怪，会有点长，枯燥。必须买神圣仙药触发剧情。\n");
         SlowDisplay("就说这么多了，游戏愉快！！！\n");
      } 
      else if(t==7)
     {
        bool haobo=true;
        while(haobo)
        {
            cout<<"haobo8是个蒟蒻！！！！！！"<<endl;
        }
      } 
      else if(t==5)
      {
        cout<<"输入1吐字速度飞快，2吐字速度较快，3中等，4很慢"<<endl;
          int she;
          cin>>she;
          if(she==1)
          sudu=0.5;
          if(she==2)
          sudu=1;
          if(she==3)
          sudu=2;
          if(she==4)
          sudu=3; 
          cout<<"第一章难度： 1.困难 2.正常 3.简单"<<endl;
          int she2;
          cin>>she2;
          if(she2==1)
          {m.blood=100;
        m.attack=0;
        m.speed=5;
        coin=100;} 
          if(she2==2)
          {
           m.blood=600;
        m.attack=500;
        m.speed=85;
        coin=100;} 
          if(she2==3){ 
          m.blood=1000000;
        m.attack=10000;
        m.speed=85;
        coin=10000;} 
       } 
       else if(t==2)
       {
         SlowDisplay("你：无介绍\n");
        SlowDisplay("devola：暗黑王子，法力极强，传说只有光明派领头人才能打败他，剧透：夜光珠也能打败他\n");
         SlowDisplay("大胡子：50多岁，精力十足，会闪现和传送，掌握黑魔法\n");
         SlowDisplay("Pavris:懒惰爱喝酒，但救过主人公不少次。\n");
         SlowDisplay("Sarais：竹子国奸臣，谋害主人公多次。\n");
         SlowDisplay("ENDER：三头蛇的外号，德沃拉手下的怪物\n");
        } 
         else if(t==8)
       {
         SlowDisplay("2019   3月份\n");
        SlowDisplay("暗黑诅咒第二季——Pavris的封印即将正式出品\n");
         SlowDisplay("地下迷城谜团重重\n");
         SlowDisplay("佩刀杀人狂身现江湖\n");
         SlowDisplay("人类与法师战争正在酝酿\n");
         SlowDisplay("九个灵魂成就强大法师\n");
         SlowDisplay("厮杀   战争   牺牲    真相扑朔迷离\n");
         SlowDisplay("3月24日，暗黑诅咒团队，咱们不见不散！！！\n");
        } 
        else if(t==6) 
        {
            SlowDisplay("第一章 失忆\n");
        SlowDisplay("第二章 暗黑地府\n");
         SlowDisplay("第三章 河边奇遇\n");
         SlowDisplay("第四章 Pavris的房子\n");
         SlowDisplay("第五章 森林遇险\n");
         SlowDisplay("第六章 智取夜光珠\n");
         SlowDisplay("第七章 竹子国危机\n");
         SlowDisplay("第八章 越狱\n");
         SlowDisplay("第九章 墓地决斗\n");
         SlowDisplay("第十章 真相\n");
        }
    else
    {
        cout<<"ByeBye~"<<endl; 
        return 0;
    }

    }
    printf("文字游戏:暗黑诅咒（The Curse Of Darkness）\n");
    Sleep(1000);
    printf("出品人:drzo（teacherga）\n");
    Sleep(1000);
    printf("版本:0.5.0\n");
    Sleep(1000);
    printf("按任意键开始");
    getchar();
    system("cls");
    jiazai(); 
    cout<<"输入1看剧情，否则跳过。"<<endl;
    int twqewqe;
    cin>>twqewqe;
    if(twqewqe==1)
    {
    SlowDisplay("传说，很久以前，有个野心十足、四处寻求法术的人叫Crivola，他学会了很多巫术，一天他在一颗树下冥思，内心十分挣扎，他不知道是该为人们做很多好事，还是用他强大的法力占据世界，于是他用了分裂术，分裂成了两个人，分别去寻求自己所追求的思想，约定2个世纪后再合体。\n");
    SlowDisplay("两个人很快就建立了两个派别，分别为暗黑派和光明派，一个追求毁灭，一个追求美好，暗黑派的那个人很快有了根据地和人手，向光明派发出进攻。。。\n");
    SlowDisplay("建立黑暗派的那个人对所有反对他的人都进行了暗黑诅咒，其中就有ZO村，最后经历1个世纪两个派别的争斗，渐渐地光明派占了上风，暗黑派渐渐消失，但暗黑诅咒一直存留下来，建立暗黑派和光明派的人都老了，只好都投胎转世。");
    SlowDisplay("很快过了30年就有个人自称是暗黑王子，建立暗黑派的人转胎后的人，他就是德沃拉佩奇王子，但。。。光明派的建立者转胎后再也没有出现，据说他失忆了，导致再也没有人能打败暗黑王子，暗黑王子逐渐去进攻20天后暗黑诅咒就显灵的ZO村，然而，ZO村里有个人坚信勇气能战胜一切，他就是-----");
    cout<<name<<endl;
    SlowDisplay("目前游戏很辣鸡，希望各位大佬谅解，QAQ\n");

}
SlowDisplay("祝你们游戏愉快，输入1开始\n");
    int a,tc=0;
    cin>>a;
    if(a==1)
    {
        SlowDisplay("第一章 失忆\n");
            SlowDisplay("第1天,暗黑诅咒19天后显灵\n");
            cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为10） 2.冰封（能使3次，让敌方速度减10） 3.霹雳（使10次，攻击为15） 4.万物复苏（使5次，血+100） 5.天崩地裂（1次，攻击25，涨血20）"<<endl<<"你的金币有"<<coin<<"个"<<endl; 
            int c1=0;
            int c2=0; 
            bool flag=true;
            while(flag) 
            {
                int c2=3,c3=10,c4=5,c5=1;
                if(tc==10)
                {
                    SlowDisplay("伟大的勇士啊，你为何如此懦弱！你已经逃跑了10次了，没错，我一直在数着，哦，我是谁？我是游戏出品人drzo，我一直在你背后偷窥着你。。。\n");
                    SlowDisplay("那么，你觉得");
                    cout<<"你";
                     Sleep(500);

                     cout<<"有";
                     Sleep(500);
                     cout<<"勇";
                     Sleep(500);
                     cout<<"气";
                     Sleep(500);
                     cout<<"吗";
                     Sleep(500);
                     cout<<"？"<<endl;
                     cout<<"1.有 2.无"<<endl;
                     int yongqi;
                     cin>>yongqi;
                     if(yongqi==1)
                     {
                        SlowDisplay("恭喜你进入懦夫结局，如果你觉得你有勇气，就证明你的实力吧！！！\n");
                      } 
                      else
                      {
                        SlowDisplay("恭喜你进入懦夫结局，这个世界是属于勇者的，所以。。。再见了。。。\n");
                      }
                      cout<<name;
                      Sleep(125);
                      cout<<"见";
                       Sleep(125);
                      cout<<"到";
                      Sleep(125);
                      cout<<"你";
                      Sleep(125);
                      cout<<"是";
                      Sleep(125);
                      cout<<"我";
                      Sleep(125);
                      cout<<"的";
                      Sleep(125);
                      cout<<"荣幸，";
                      Sleep(500);
                      cout<<"再";
                      Sleep(500);
                      cout<<"见";
                      Sleep(500);
                      cout<<"了"<<endl;
                      SlowDisplay("游戏出品人drzo，也就是我，朝你扑过去了！！！     QAQ\n");
                      texiao(); 
                      int saot=0,lt=0;
                      bool saopi=false,liang=false;
                      while(m.blood>0&&m10.blood>0)
                    {
                        if(lt==3)
                        {
                            lt=0;
                            liang=false;
                        }
                        if(saot==3)
                        {
                            saot=0;
                            saopi=false;
                        }

                        if(saopi)
                        saot++;

                        cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<endl;
                        cout<<"敌方的血还有"<<m10.blood<<endl;

                        if(liang==false)
                        {
                            cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                        int z;
                        cin>>z;
                        if(z==1)
                        {

                            if(rand()%101<m10.speed)
                            cout<<"敌方躲避了攻击"<<endl;
                            else
                            {
                                m10.blood-=a1;
                                m10.blood-=m.attack;
                                cout<<"敌方受到攻击"<<endl; 
                            }

                        } 
                        else if(z==2&&c2>0)
                        {
                            m1.speed-=a2;
                            cout<<"敌方被冻住了，减了速度！"<<endl;
                            c2--;
                        }
                        else if(z==3&&c3>0)
                        {
                            if(rand()%101<m10.speed||saopi==true)
                            cout<<"敌方躲避了攻击"<<endl;
                            else
                            {
                                m10.blood-=a3;
                                m10.blood-=m.attack;
                                cout<<"敌方受到攻击"<<endl; 
                            }
                            c3--;
                        }
                        else if(z==4&&c4>0)
                        {
                            m.blood+=a4;
                            cout<<"你涨血了！"<<endl; 
                            c4--;
                        }
                        else if(z==5&&c5>0)
                        {

                            m10.blood-=a5;
                            m10.blood-=m.attack;
                            cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                            m.blood+=a6;
                            c5--;
                        }   
                     else
                     cout<<"攻击无效！！！"<<endl;
                        }
                        else
                        {
                            lt++; 
                        cout<<"你的血还有"<<m.blood<<endl;
                        SlowDisplay("你无法动弹。。。\n");
                        }
                     int dt=rand()%10;
                     if(dt==1)
                     {
                        SlowDisplay("drzo是这个游戏控制者，他打了个响指，你血瞬间减了一半。。。\n");
                        m.blood/=2;
                     }
                     else if(dt==2)
                     {
                        SlowDisplay("drzo使用臊皮走位，3回合打不着\n");
                        saopi=true;
                     }
                     else if(dt==3)
                     {
                        SlowDisplay("drzo唱了凉凉，你3回合无法动弹\n");
                        liang=true;
                     }
                     else if(dt==4)
                     {
                        SlowDisplay("drzo问你32+56=？，你答88，drzo立马喊了个诶，敌方加8888滴血。。。\n");
                        m10.blood+=8888; 
                     }
                     else
                     cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m10.attack);
                }
                if(m.blood<=0)
            {
                cout<<"你死了"<<endl;
                return 0;
            }
            else{ 
            cout<<"敌人死了,由于你杀了游戏出品人，游戏瞬间崩掉！！！QAQ"<<endl;
                    return 0; 
                }
                }
                if(e1>=e2)
                {
                    int h=e1/e2;
                    level+=e1/e2;
                    e1=e1%e2;
                    e2+=50;
                    cout<<"你升级了!!!攻击力&血量都多了！！！"<<endl;
                    a1+=2*h;
                    a3+=3*h;
                    a5+=5*h;
                    a6+=4*h;
                    a4+=10*h;
                    a2+=(5*h)/100;
                    m.blood+=10*h;
                    coin+=100*h; 
                }
                if(zuihan)
                cout<<"你要：1.去药店 2.打怪 3.看看自己 4.去买报(需100金币，报纸内容一天变一次) 5.去酒馆(一天只能去一次，开局必去，有重要剧情！！！) 6.回家"<<endl; 
                else
                cout<<"你要：1.去药店 2.打怪 3.看看自己 4.去买报(需100金币，报纸内容一天变一次) 5.去酒馆(一天只能去一次) 6.回家 7.查看地图 "<<endl; 

                int p;
                cin>>p;
                if(p==6)
                {
                    cout<<"输入1,查看你写的日记"<<endl;
                    int riji;
                    cin>>riji;
                    if(riji==1)
                    {
                        SlowDisplay("11月13日 我失忆了，我躺在医院里不知所措，他们说是在山沟里发现我的，我已经昏迷了5年了。 12月1日 我感觉我在这个世上毫无意义，我想自杀。 5月7日 好久没写日记了，我终于发现了我的意义，拯救ZO村。。。\n");
                        SlowDisplay("日记在这里戛然而止。。。\n");
                     } 
                     else
                     cout<<"你合上了日记，离开了家。"<<endl;
                 } 
                else if(p==7) 
                {
                    if(zuihan)
                    cout<<"输入错误。。。"<<endl;
                    else
                    {
                    printf("############################\n");
    printf(".bbbbb...hhh....a.a.a..ccc.a\n");
    printf("...@......hhh....aaa..aa.@.*\n");
    printf("#######.#...hhh%%..aaaa..aaa.\n");
    printf("^zzzzzzz#@...hhhh..aaaa...a.\n");
    printf("zzzzzzzz#....&.hhh....aaa.a.\n");
    printf("zzzzzzzz#@....hhhhh....a.a.a\n");
    printf("#########........hhhhh....aa\n");
    printf("....................hhhhh..a\n");
    printf("############################\n");
                    }
                }
                else if(p==5)
                {
                    if(jiuguan==false)
                    {
                        cout<<"今天已经来过。。。"<<endl;
                    }
                    else
                    {
                    if(zuihan) 
                    SlowDisplay("酒馆醉汉对你大喊道：听说你。。。，，，要。。。打佩奇？？？很不错。。。嘛。。。我有个。。。地图。。。送给你。。。地图上标的*号是。。。宝藏的。。。位置。。。。宝藏里装的东西。。。能拯救世界！！！^是你的位置哈。。。。给你。。。吧。。。\n");
                     zuihan=false;
                     cout<<"你要什么：1.烤全羊 2.啤酒 3.离开(全部免费)"<<endl;
                     int ppp;
                     cin>>ppp;
                     if(ppp==1)
                     {
                         cout<<"烤全羊真香！！！血量增加100"<<endl; 
                         m.blood+=100;
                      } 
                      if(ppp==2)
                     {
                         cout<<"烤啤酒真香！！！额外攻击力增加50"<<endl; 
                         m.attack+=50;
                      } 
                      if(ppp==3)
                      cout<<"离开成功。。。"<<endl;
                      jiuguan=false;
                }
                 } 
                else if(p==4)
                {
                    if(coin>=100)
                    {
                        coin-=100; 
                    if(tian==1)
                    SlowDisplay("新闻头条：*ZO村仍危在旦夕，勇士努力拯救世界，卧底混入村庄*\n");
                    if(tian==2)
                    SlowDisplay("新闻头条：*村长发表演讲：勇士是否能拯救村庄？我表示怀疑。。。勇士还是懦夫？*\n"); 
                    if(tian==3)
                    SlowDisplay("新闻头条：*许多怪物被干掉，村庄危机减半，公主被抓，谁能拯救公主，赏金10000*"); 
                    if(tian==4)
                    SlowDisplay("新闻头条：*佩奇暗黑王子抓住村长，村民即将崩溃，暗黑诅咒即将16天后显灵！！！*"); 
                    if(tian>4)
                    SlowDisplay("如今的卖报厅已被哥斯拉踩扁，没人在这里卖报了。。。");
                    }
                    else
                    cout<<"钱不够！！！"<<endl;

                }
                else if(p==3)
                {
                    cout<<"你的血量："<<m.blood<<endl<<"你的额外攻击力："<<m.attack<<endl<<"你的速度(速度上限85)："<<m.speed<<endl;
                    long long ttt=e1/10;
                    cout<<"你的经验为：";
                    for(int i=0; i<ttt; i++)
                    {
                        cout<<"█"; 
                     } 
                     cout<<e1<<"/"<<e2<<endl;
                     cout<<"你的等级为："<<level<<endl; 

                }                
                else if(p==2)
                {
                int t=rand()%7;
                if(c1==1)
                {
                    t=7;
                }
                if(t<=3)
                {
                    m1.blood=50;
                    cout<<"你遇见了史莱姆！史莱姆蠢萌蠢萌的，对你伤害不会太大，建议新手与它作战，技能：分裂术"<<endl; 
                    cout<<"你逃跑吗？ 1.作战 2.逃跑（会罚款）"<<endl; 
                    int w;
                    cin>>w;
                    if(w==2)
                    {
                        tc++;
                        coin-=100;
                        cout<<"逃跑成功"<<endl;
                        continue;
                     } 
                    while(m.blood>0&&m1.blood>0)
                    {
                        cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<endl;
                        cout<<"敌方的血还有"<<m1.blood<<endl;
                        cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                        int z;

                        cin>>z;
                        if(z==1)
                        {

                            if(rand()%101<m1.speed)
                            cout<<"敌方躲避了攻击"<<endl;
                            else
                            {
                                m1.blood-=a1;
                                m1.blood-=m.attack;
                                cout<<"敌方受到攻击"<<endl; 
                            }

                        } 
                        else if(z==2&&c2>0)
                        {
                            m1.speed-=a2;
                            cout<<"敌方被冻住了，减了速度！"<<endl;
                            c2--;
                        }
                        else if(z==3&&c3>0)
                        {
                            if(rand()%101<m1.speed)
                            cout<<"敌方躲避了攻击"<<endl;
                            else
                            {
                                m1.blood-=a3;
                                m1.blood-=m.attack;
                                cout<<"敌方受到攻击"<<endl; 
                            }
                            c3--;
                        }
                        else if(z==4&&c4>0)
                        {
                            m.blood+=a4;
                            cout<<"你涨血了！"<<endl; 
                            c4--;
                        }
                        else if(z==5&&c5>0)
                        {

                            m1.blood-=a5;
                            m1.blood-=m.attack;
                            cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                            m.blood+=a6;
                            c5--;
                        }   
                     else
                     cout<<"攻击无效！！！"<<endl;
                     cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m1.attack);
                }
            }
            if(t>3&&t<=5)
            {
                m2.blood=100;
                cout<<"你遇见了僵尸！他们不仅相貌丑陋，也凶狠残暴，干掉他们吧！！！技能：僵尸病毒"<<endl;
                cout<<"你逃跑吗？ 1.作战 2.逃跑（会罚款）"<<endl; 
                    int w;
                    cin>>w;
                    if(w==2)
                    {
                        tc++;
                        coin-=100;
                        cout<<"逃跑成功"<<endl;
                        continue;
                     } 
                    bool bd=false; 
                    int bdc=0;
                while(m.blood>0&&m2.blood>0)
                {
                    if(bdc==3)
                    {
                        bdc=0;
                        bd=false;
                    }
                    if(bd)
                    bdc++;
                    cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<endl;
                    cout<<"敌方的血还有"<<m2.blood<<endl;
                    cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m2.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m2.blood-=a1;
                            m2.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m2.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m2.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m2.blood-=a3;
                            m2.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m2.blood-=a5;
                        m2.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     if(rand()%11==1)
                     {
                        cout<<"敌方扔出了僵尸病毒!!!你中了毒！！！3回合持续减血！！！"<<endl;
                        bd=true;
                        m.blood-=25;
                     } 
                     else
                     {
                        cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m2.attack);
                     if(bd)
                     {
                        cout<<"你因为毒素减血了！！！"<<endl;
                        m.blood-=5;
                     }

                     }

                }
            }
            if(t==6)
            {
                m3.blood=10000;
                cout<<"你遇见了哥斯拉！它力大无穷，新手千万别尝试，它可以一巴掌呼死你的！！！技能：无"<<endl; 
                cout<<"你逃跑吗？ 1.作战 2.逃跑（会罚款）"<<endl; 
                    int w;
                    cin>>w;
                    if(w==2)
                    {
                        tc++;
                        coin-=100;
                        cout<<"逃跑成功"<<endl;
                        continue;
                     } 
                while(m.blood>0&&m3.blood>0)
                {
                    cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<endl;
                    cout<<"敌方的血还有"<<m3.blood<<endl;
                    cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m3.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m3.blood-=a1;
                            m3.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m3.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m3.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m3.blood-=a3;
                            m3.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m3.blood-=a5;
                        m3.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m3.attack);
                }
            }
            if(t==7)
            {
                bool bao=false;
                int cb=0;
                m4.blood=100000;
                cout<<"你遇见了超级哥斯拉！"<<endl; 
                SlowDisplay("超级哥斯拉：你杀死了我的哥斯拉弟弟，我来报仇啦！！！技能：暴走术\n");
                cout<<"你逃跑吗？ 1.作战 2.逃跑（会罚款）"<<endl; 
                    int w;
                    cin>>w;
                    if(w==2)
                    {
                        tc++;
                        coin-=100;
                        cout<<"逃跑成功"<<endl;
                        continue;
                     } 
                while(m.blood>0&&m4.blood>0)
                {
                    if(cb==3)
                    {
                        bao=false;
                        cb=0;
                    }
                    cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<endl;
                    cout<<"敌方的血还有"<<m4.blood<<endl;
                    cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m4.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m4.blood-=a1;
                            m4.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m4.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m4.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m4.blood-=a3;
                            m4.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m4.blood-=a5;
                        m4.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     if(rand()%11==1)
                     {
                        cout<<"敌方使用了暴走术！！！3回合攻击力大幅度提升！！！"<<endl;
                        bao=true;
                      } 
                     cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     {
                        if(bao)
                        {
                            m.blood-=(rand()%5+m4.attack)*2;
                            cb++;
                         }

                        else
                        m.blood-=(rand()%5+m4.attack);
                     }

                }
            }
            if(m.blood<=0)
            {
                cout<<"你死了"<<endl;
                return 0;
            }

            else
            {
                system("cls");
                if(t<=3)
                {
                    cout<<"史莱姆分裂出了一个小史莱姆！！！"<<endl;
                    m8.blood=25;
                     while(m.blood>0&&m8.blood>0)
                {
                    cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<endl;
                    cout<<"敌方的血还有"<<m8.blood<<endl;
                    cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m8.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m8.blood-=a1;
                            m8.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m8.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m8.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m8.blood-=a3;
                            m8.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m8.blood-=a5;
                        m8.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m8.attack);
                }
                if(m.blood<=0)
            {
                cout<<"你死了"<<endl;
                return 0;
            }
            else{ 
            cout<<"敌人死了，涨金币了"<<endl;
                    coin+=10;
                    e1+=50;} 
                }

                else if(t>3&&t<=5)
                {
                    cout<<"敌人死了，涨金币了"<<endl;
                    coin+=100;
                    e1+=100;
                }

                else if(t==6)
                {
                    cout<<"敌人死了，涨金币了"<<endl;
                    coin+=1000;
                    c1++;
                    e1+=500;
                }
                else
                {
                    cout<<"敌人死了，涨金币了"<<endl;
                    coin+=5000;
                    e1+=10000;
                }
            }

            }
            else
            {
                if(jianshang)
                {
                SlowDisplay("奸商老板：哈哈哈，小伙子，志向不错哈，想打败佩奇(●—●)，我会支持你的。\n");
                SlowDisplay("奸商老板：顺便提一下如果你买了一管药，你就会自动食用它，买神圣仙药有惊喜啊~骚年，加油吧~\n");
                jianshang=false;
                }
                cout<<"你的金币有"<<coin<<endl; 
                cout<<"你要买: 0.离开 1.攻击力药水 25元 2.超级攻击力药水 100元 3.生命力药水 10元 4.超级生命力药水 100元 5.速度药水 10元 6.无敌药水 1000元 7.哥斯拉药水 5000元 8.神圣仙药 10000元"<<endl;
                int r;
                cin>>r;
                if(r==0)
                SlowDisplay("正在离开中。。。\n");
                else if(r==1&&coin>=25)
                {
                    e1+=1;
                    m.attack+=10;
                    coin-=25;
                    cout<<"购买成功"<<endl;
                 } 
                else if(r==2&&coin>=100)
                {
                    e1+=1;
                    m.attack+=50;
                    coin-=100;
                    cout<<"购买成功"<<endl;
                 } 
                 else if(r==3&&coin>=10)
                {
                    e1+=1;
                    m.blood+=50;
                    coin-=10;
                    cout<<"购买成功"<<endl;
                 } 
                 else if(r==4&&coin>=100)
                {
                    e1+=1;
                    m.blood+=600;
                    coin-=100;
                    cout<<"购买成功"<<endl;
                 } 
                 else if(r==5&&coin>=10&&m.speed<=75)
                {
                    e1+=1;
                    m.speed+=10;
                    coin-=10;
                    cout<<"购买成功"<<endl;
                 } 
                 else if(r==6&&coin>=1000&&m.speed<=75)
                {
                    e1+=1;
                    m.speed+=10;
                    m.attack+=2500; 
                    m.blood+=30000; 
                    coin-=1000;
                    cout<<"购买成功"<<endl;
                 } 
                 else if(r==8&&coin>=10000)
                {
                    e1+=1;
                    SlowDisplay("奸商老板：哈哈哈，小伙子，虽然志向不错哈，但你被骗喽，我是德沃拉王子派来的卧底来杀你的，你买的神圣仙药也是毒药，哈哈哈~\n");
                    SlowDisplay("你的血和攻击力还有速度直接减了一半，于此同时奸商老板拿着硫酸瓶向你扑过来！！！QAQ\n");
                    m.speed/=2;
                    m.attack/=2;
                    m.blood/=2;
                    while(m.blood>0&&m5.blood>0)
                    {
                        cout<<"敌方的血还有"<<m5.blood<<endl;
                        cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                        int z;

                        cin>>z;
                        if(z==1)
                        {

                            if(rand()%101<m5.speed)
                            cout<<"敌方躲避了攻击"<<endl;
                            else
                            {
                            m5.blood-=a1;
                            m5.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                            }

                        } 
                        else if(z==2&&c2>0)
                        {
                        m5.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                        }
                        else if(z==3&&c3>0)
                        {
                        if(rand()%101<m5.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m5.blood-=a3;
                            m5.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                         }
                        else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m5.blood-=a5;
                        m5.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     cout<<"敌方泼出了硫酸!!!"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你试图躲避,但硫酸是范围攻击!!!"<<endl;
                        m.blood-=(rand()%5+m5.attack); 
                     }
                     m.blood-=(rand()%5+m5.attack);
                }
            if(m.blood<=0)
            {
                cout<<"你死了"<<endl;
                return 0;
            }

            else
            {
                cout<<"敌人死了，涨金币了"<<endl;
                SlowDisplay("卧倒在地的在吐血的奸商老板：哈哈哈，小伙子，虽然战斗力不错哈，但你被骗喽，!@#               $#%^%&^%^#$               %@#%               $^%^&$               ^#$%#^&%*(**,哈哈~\n");
                SlowDisplay("奸商老板说出了一些奇怪的咒语,与此同时药店震了起来,随着一声巨响,你眼前一黑\n");
              SlowDisplay("第一章 完\n");
    system("pause");
                    coin+=5000; 
                    system("cls"); 
                    system("cls");
    jiazai(); 
    SlowDisplay("恭喜进入第二章暗黑地府\n");
    system("cls"); 
    int zing;
    cout<<"输入1查看剧情，否则跳过。"<<endl;
    cin>>zing;
    if(zing==1) 
    { 
    SlowDisplay("躺倒在地的你睁开眼睛：我。。。在哪里。。。有人吗。。。\n");
            SlowDisplay("你四周一片漆黑，全是潮湿的大理石，你试图起来，但你被捆在地上。。。\n");
            SlowDisplay("这时你望见远处一个人，带着斗篷看不清脸庞，慢慢走进，对你说：没错。。。没错。。。我就是你们所恐惧的德沃拉佩奇暗黑王子，今天，我暗黑王子，和你们所敬佩的勇士面对面，而你们的勇士现在却被捆在地上！哈哈哈~\n");
            SlowDisplay("德沃拉用手指轻轻滑过捆着你的绳子，绳子断了。。。\n");
            SlowDisplay("德沃拉：我和你今天要决斗，我要杀了你，让大家再也不怀疑我的实力，哈哈哈~\n");
            SlowDisplay("正在他笑的时候，你使出霹雳试图突击，但他轻轻用胳膊一拨，攻击便反弹回你身上，你被击倒在地狼狈不堪。。。\n");
            SlowDisplay("德沃拉：你试图突袭我，想的美！今天你要死在你们村庄的公主面前！哈哈哈！\n");
            SlowDisplay("被捆在一旁的公主：救救我~\n");
            SlowDisplay("你：佩奇，你想跟我决斗，好，我今天就跟你决斗。。。你慢慢地站了起来。。。\n");
            SlowDisplay("你话音刚落你和佩奇同时使出绝招，顿时整个地牢火光四溅，啥也看不清，就在这时，你看到一个大胡子的人把你揪在一旁，那个大胡子的人也揪住公主，一秒后随着德沃拉的喊叫声，蓝光四起，你眼前再次一片漆黑。。。\n");
            } 
            SlowDisplay("过了一会儿。。。躺倒在地的你睁开眼睛：我。。。在哪里。。。你四周看了看，你又看见，躺倒在地的大胡子的人。。。\n");
            SlowDisplay("大胡子：我的能量不足了，只能带你传送到这里了。。。我是村长派来救你的，你先带着公主跑吧，边管我，后头还有人追着。。。\n");
            SlowDisplay("话音刚落后头追上来一个暗黑巨兽。。。\n");
            SlowDisplay("你只得往前跑去，距跑出地府还有100米。。。\n");
            for(int i=0; i<100; i++)
            {
                Sleep(100);
                cout<<"距跑出地府还剩"<<100-i<<"米"<<endl;
                int iii=rand()%10;
                if(iii==1)
                {
                    int c2=3,c3=10,c4=5,c5=1;
                    m7.blood=1000;
                    cout<<"你迎面遇到了暗黑巨兽。。。"<<endl; 
                    while(m.blood>0&&m7.blood>0)
                    {
                        cout<<"敌方的血还有"<<m7.blood<<endl;
                        cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                        int z;

                        cin>>z;
                        if(z==1)
                        {

                            if(rand()%101<m7.speed)
                            cout<<"敌方躲避了攻击"<<endl;
                            else
                            {
                            m7.blood-=a1;
                            m7.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                            }

                        } 
                        else if(z==2&&c2>0)
                        {
                        m7.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                        }
                        else if(z==3&&c3>0)
                        {
                        if(rand()%101<m7.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m7.blood-=a3;
                            m7.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                         }
                        else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m7.blood-=a5;
                        m7.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     cout<<"敌方泼攻击了!!!"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了"<<endl;
                     }
                     m.blood-=(rand()%5+m7.attack);
                }
            if(m.blood<=0)
            {
                cout<<"你死了"<<endl;
                return 0;
            }
            else
            cout<<"敌人死了，你奋不顾身地带着公主继续向前跑。。。";
                }
             } 
              SlowDisplay("你跑出了地府！！！\n");
              SlowDisplay("突然地府门口出现德沃拉的身影，接着一道红光向你飞去。。。\n");
              SlowDisplay("第二章 完\n");
    system("pause");
              jiazai();
              system("cls");
               SlowDisplay("恭喜你进入第三章 河边奇遇\n");

               int t3;
    cout<<"输入1查看剧情，否则跳过。"<<endl;
    m.blood=100;
               m.attack=0;
               m.speed=5;
               cin>>t3;
               if(t3==1)
               {
               SlowDisplay("你发现你醒来后，躺倒在草地上，你看到了大胡子和公主，他们焦虑万分。。。\n");
               SlowDisplay("大胡子：小伙子，你的体力难以置信！！！昏迷了那么长时间，都还能醒的过来。。。现在离暗黑诅咒显灵就剩10天了。。。你的名字是");
               cout<<name;
               SlowDisplay("？真是个好听的名字，我的名字是大胡子，以后你有什么问题，我就可以帮助你了，我是村长派来的。   接着他伸出手想跟你握手。。。\n");
               SlowDisplay("你想起身跟他握手，但浑身的疼痛感使你再次倒地，大胡子立马扶住你，皱起眉头说：德沃拉对你使用了一种神奇的招数，使你血量和攻击力和速度都成为了初始状态，你现在很虚弱，不要轻易打斗，来喝下这药，你会好多。。。\n");

               SlowDisplay("你慢慢的起身了，说：大胡子，我感到好多了，谢谢你。。。    你发现你在一个河的旁边，这时你看到了一个牌子上面写：千万不要渡河，禁止垂钓，此处无鱼。。。\n");
               SlowDisplay("这时你看到河边有一个人，你喊道：是你？？？你怎么在这儿？？？\n");
               SlowDisplay("正在垂钓的酒馆醉汉：不好意思，我认识你吗？\n");
            SlowDisplay("你：我在酒馆见到过你，你喝醉了，所以不记得了。\n");
            SlowDisplay("垂钓者：啊，这样啊很高兴认识你哈。。。我叫Pavris。\n");
            SlowDisplay("Pavris:对了，我喝醉后干了什么不妥的事情吗。。。\n");
            SlowDisplay("你：没什么，你就把一个写满我看不懂的字符的地图给了我。\n");
            SlowDisplay("惊恐的Pavris：什么！！！我不能把那个地图给你，绝不能！！！那个地图里标的宝藏将是我，伟大的Pavris拿到的，你若不把地图给我，我便不让你过河！！！\n");
            SlowDisplay("你：话说我也没说我要过河啊。\n");
            SlowDisplay("惊讶的Pavris：你竟然不过河去森林里抢宝藏？？！！宝藏里装的可是夜光珠，能抵御暗黑王子任何伤害的神器，而我，伟大的Pavris要拿到它，来打败德沃拉，哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈哈！！！！！！不好，我好像说漏嘴了些什么。。。\n");
            SlowDisplay("你：既然能打败德沃拉为何不让我拿夜光珠，我可是ZO村的勇士-----");
            cout<<name<<endl;}
             SlowDisplay("Pavris:不管怎样不会让你过河的！！！\n");
             bool pavris=false;
             int zddd=0; 
             while(pavris==false)
             {
                SlowDisplay("Pavris挡住了你的去路，你要：1.战斗 2.交流 3.给出地图\n");
             int ddd;
             cin>>ddd;
             if(ddd==3)
             {
                SlowDisplay("你在想些什么？？？！！！不能这样，你需要地图！！！\n");
              } 
              else if(ddd==1)
              {
                if(zddd<3)
                {
                SlowDisplay("你在想些什么？？？！！！不能这样，你体力不支！！！\n");
                zddd++;

                  }
                  else
                  {
                    SlowDisplay("你这么希望战斗。。。\n");
                    cout<<"但"; 
                    Sleep(250);
                    cout<<"不"; 
                    Sleep(250);
                    cout<<"过"; 
                    Sleep(250);
                    cout<<"，"; 
                    Sleep(250);
                    cout<<"战"; 
                    Sleep(250);
                    cout<<"斗"; 
                    Sleep(250);
                    cout<<"当"; 
                    Sleep(250);
                    cout<<"然"; 
                    Sleep(250);
                    cout<<"可"; 
                    Sleep(250);
                    cout<<"以"<<endl; 
                    SlowDisplay("你朝Pavris扑了过去。。。QAQ\n");
                    SlowDisplay("Pavris拔出附魔佩刀。。。\n");
                    system("color 2f");
        Sleep(10);
                    int huzi=1000; 
                    int ttttt=1,tttttt=1;
                    while(huzi>0)
                    {
                        cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<endl;

                        int z;
                        if(ttttt==1)
                        {
                            ttttt=0;
                            cout<<"敌方攻击了，你受到99滴血攻击。。。"<<endl;
                     m.blood-=(m9.attack);
                     SlowDisplay("Pavris：你以为我会像怪物一样傻傻站着，等你先打我？\n");
                     cout<<"敌方的血还有"<<m9.blood<<endl;
                        cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                         } 
                        else
                        {
                            cout<<"敌方攻击了，大胡子帮你扛住伤害。。。大胡子：讨厌的家伙。。。"<<endl;
                     huzi-=(m9.attack);
                     cout<<"敌方的血还有"<<m9.blood<<endl;
                     cout<<"大胡子的血还有"<<huzi<<endl;
                        cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                        }

                        cin>>z;
                        if(z==1)
                        {

                                cout<<"由于你体力不支，你没做出任何事情"<<endl; 

                        } 
                        else if(z==2&&c2>0)
                        {
                            cout<<"由于你体力不支，你没做出任何事情"<<endl; 
                            c2--;
                        }
                        else if(z==3&&c3>0)
                        {
                            cout<<"由于你体力不支，你没做出任何事情"<<endl; 
                            c3--;
                        }
                        else if(z==4&&c4>0)
                        {
                            cout<<"由于你体力不支，你没做出任何事情"<<endl; 
                            c4--;
                        }
                        else if(z==5&&c5>0)
                        {

                            cout<<"由于你体力不支，你没做出任何事情"<<endl; 
                            c5--;
                        }   
                     else
                     cout<<"攻击无效！！！"<<endl;
                     cout<<"大胡子攻击了"<<endl;
                     m9.blood-=100; 
                     if(m9.blood<=0&&tttttt==1)
                     {
                        tttttt=0;
                        SlowDisplay("Pavris：我感觉要死了，我不行了，不我要活着，我要杀了德沃拉，我不能死！！！来，打死我吧。就算我血是负的我也要活着！！！\n");
                     }
                }    
                SlowDisplay("卧倒在地的大胡子：怎么会这样。。。救。。。。。命。。。。。\n");
                SlowDisplay("你和大胡子同时化成了灰烬。。。你死了\n");
                SlowDisplay("你成功地玩到了毁灭结局。。。哈哈哈哈哈哈哈哈哈哈哈哈。。。是不是根本没看懂。。。Pavris他不知不觉中杀死了真正的德沃拉。。。\n");
                printf("文字游戏:暗黑诅咒（The Curse Of Darkness）\n");
    Sleep(1000);
    printf("出品人:drzo（teacherga）\n");
    Sleep(1000);
    printf("版本:0.5.0\n");
    Sleep(1000);
    printf("你死了，游戏结束\n");
                return 0; 
                  }
              }
              else
              {
                cout<<"与谁交流：1.公主（有必看剧情！！！） 2.大胡子 3.Pavris"<<endl;
                  int jjj;
                  cin>>jjj;
                  if(jjj==1)
                  {
                    SlowDisplay("公主：感谢你救了我，你一定要打败德沃拉啊！！！为了感激你，给你一个护身符。\n");
                   } 
                   else if(jjj==2) 
                   SlowDisplay("大胡子：什么？？！！有人不让过河？？！！跟他好好说话，他会让你过去的。\n");
                   else
                   { 
                    SlowDisplay("你：Pavris，你就让我过去吧，我们一起拿到夜光珠，一起干掉德沃拉，多好。。。\n");
                    SlowDisplay("有些恼怒的Pavris：你根本无法理解我，德沃拉他在我小时候就杀了我哥哥，，，应杀死德沃拉的应是我！！！\n");
                    SlowDisplay("Pavris的回声在山谷边回荡，一片寂静。。。\n");
                    SlowDisplay("你：我完全理解你，我们的村庄1世纪前就被诅咒，10天后诅咒就要灵现，你被复仇冲昏了头脑，如果你不让我过河，多少无辜生命将在10天后毁灭！！！你的哥哥会为你感到惭愧的！！！\n");
                    SlowDisplay("再次一片寂静。。。\n");
                    SlowDisplay("Pavris：我让你过去。。。但有个交易，杀死德沃拉的必须是我。。。\n");
                    SlowDisplay("你是否同意：1.同意 2.不同意（重大分支！！！会影响故事整个结局！！！）\n");
                    int jujuju;
                    cin>>jujuju;
                    if(jujuju==1)
                    {
                        SlowDisplay("你：我同意，咱们上路吧。\n");
                        jieju=true;
                     } 
                     else
                     {
                        SlowDisplay("你：我不同意，我可以让你拿着夜光珠，但不能让你杀德沃拉。  Pavris沉思了一会，点了头。    你：那咱上路吧！\n");
                        jieju=false;
                     }
                        SlowDisplay("第三章完\n");
                        system("pause"); 
                     jiazai();
              system("cls");
              SlowDisplay("第四章 Pavris的房子\n");

               int t3;
    cout<<"输入1查看第四章（第四章全是剧情），否则跳过。"<<endl;
               cin>>t3;
               if(t3==1)
               {
                SlowDisplay("正在喝酒的Pavris：天这么晚了，大家来我家吧，我们休息一天就出发去找夜光珠。\n");
              SlowDisplay("你，公主，大胡子，Pavris走在路上。。。Pavris在河上扔了一片叶子，叶子立马化为一个船，你们都上了船。\n");
              SlowDisplay("你：Pavris，话说，你的地图我根本看不懂啊。\n");
              SlowDisplay("Pavris：哦，忘把说明书给你了，给。\n");
              SlowDisplay("你打开了说明书和地图：\n");
              printf("############################\n");
    printf(".bbbbb...hhh....a.a.a..ccc.a\n");
    printf("...@......hhh....aaa..aa.@.*\n");
    printf("#######.#...hhh%%..aaaa..aaa.\n");
    printf("zzzzzzzz#@...hhhh..aaaa...a.\n");
    printf("zzzzzzzz#....&.h^h....aaa.a.\n");
    printf("zzzzzzzz#@....hhhhh....a.a.a\n");
    printf("#########........hhhhh....aa\n");
    printf("....................hhhhh..a\n");
    printf("############################\n");
    printf("#代表墙，z地是ZO村，h是河，a是树，*是宝藏，@是怪物根据地，.是平原，b是墓地，c是竹子国，%是Pavris的家，&是暗黑地府\n");
    SlowDisplay("很快，船就开到了对岸，到了Pavris的家，是个破旧的小木屋。\n");
    SlowDisplay("你们进了木屋，里面特别臭，长满了霉菌，Pavris熟练地生了点火，屋子立马亮了起来。\n");
    SlowDisplay("你看到了一个破旧的日记本，你偷偷地打开了：\n");
    SlowDisplay("11月7日，我哥哥已经死了5年了，我。。。再也不想写日记了。。。我要****！！！！\n");
    SlowDisplay("*处墨迹不清，你翻了一页，没想到画风一变，写满了无聊的关于酒的笑话，你想这都是Pavris喝醉后写下的。\n");
    SlowDisplay("大胡子：我出去砍点柴，马上回来。。。\n");
    SlowDisplay("公主：我去做饭。\n");
    SlowDisplay("很快黑夜降临了，你们都吃完了晚饭，但大胡子还没回来，你很担心。。。\n");
    SlowDisplay("Pavris：我一点都不担心他。  你：你什么意思，他可救过我的命。    Pavris：我就是觉得他有点不对劲，你也不认识他，他怎么就突然冒出来救你？\n");
    SlowDisplay("你：他解释了，村长排他来的。\n");
    SlowDisplay("Pavris皱起眉头，降下声音：可我从新闻头条里看村长被德沃拉抓了。\n");
    SlowDisplay("你：不管怎样，大家睡觉吧。。。\n");
    SlowDisplay("半夜，你怎么也睡不着，你做梦总是梦见墓地里的墓碑和一大堆尖叫。突然你看到一个举着匕首的身影在你的床边，紧接着一道红光，那个身影不见了，红光是从公主给你的护身符里射出来的，你：怎么回事。。。\n");
    SlowDisplay("第二天 大家都醒了后，都说你看到的是幻觉，门和窗锁的好好的，也没有破门而入的迹象，大胡子还是没回来。。。\n");
    SlowDisplay("Pavris给你了个十字弩，自己拿出了附魔佩刀，把公主留在了屋子里（森林里太危险了，就把公主留屋里了），之后就上路了。。。\n");
    SlowDisplay("你跟Pavris愉快地聊着天，Pavris：我的全名是Pavris Black，据说只有正义的Black家族的人，才能轻松控制附魔佩刀。。。\n");
    SlowDisplay("这时，你发现森林边缘的一棵树下，躺着血流不止的大胡子。。。QAQ\n");
               }

    SlowDisplay("第四章完\n");
    system("pause");
    system("cls");
    jiazai();
    SlowDisplay("第五章 森林遇险\n");
    SlowDisplay("经过一番治疗，大胡子终于醒来。。。\n");
    SlowDisplay("大胡子：有一个人拿着硫酸瓶在后头偷袭我！！！   你：硫酸瓶。。。好像让我想起了一个人。。。\n");
    SlowDisplay("欢迎来到drzo答题环节！！！这个环节是考验你前头玩游戏时，是不是很认真！！！\n");
    SlowDisplay("第一题：使用的武器是硫酸瓶的人是谁？？？  A.奸商老板 B.你 C.drzo D.大胡子\n");
    SlowDisplay("你的选择是：");
    char ABCD;
    cin>>ABCD;
    if(ABCD=='A')
    SlowDisplay("答对了！！！\n");
    else
     SlowDisplay("答错了！！！下次努力。。。\n");
     system("pause"); 
      SlowDisplay("你：是奸商老板！！！绝对是他，说不定昨天晚上在床边偷袭我的也是他！！！这么说德沃拉已经知道我们的位置了，咱们得赶紧上路了！！！\n");
      SlowDisplay("Pavris：我们要想去偷到夜光珠，必须穿过黑暗森林，绕过巨人堡，森林里怪物很多，必须多加小心，所以握好你的十字弩，上路吧！！！  就这样，你们走进了森林。。。\n");
      int lucheng=1000;
      while(lucheng>0)
      {
        if(e1>=e2)
                {
                    int h=e1/e2;
                    level+=e1/e2;
                    e1=e1%e2;
                    e2+=50;
                    cout<<"你升级了!!!攻击力&血量都多了！！！"<<endl;
                    a1+=2*h;
                    a3+=3*h;
                    a5+=5*h;
                    a6+=4*h;
                    a4+=10*h;
                    a2+=5*h;
                    m.blood+=10*h;
                    coin+=100*h; 
                }
        SlowDisplay("距离宝藏\n");
        cout<<lucheng;
           SlowDisplay("米。。。\n");
           cout<<"你要：1.跟大家说话 2.开辟道路 3.看看自己 4.看报 5.查看地图 "<<endl; 
           int stst;
           cin>>stst;
           if(stst==1)
           {
                SlowDisplay("Pavris：不管怎样，我必须抓住德沃拉，为我哥哥报仇！！！   大胡子：小伙子，加油吧。。。   你：我会努力的！！！QAQ\n");
           }
           else if(stst==3)
           {
            cout<<"你的血量："<<m.blood<<endl<<"你的额外攻击力："<<m.attack<<endl<<"你的速度(速度上限85)："<<m.speed<<endl;
                    long long ttt=e1/10;
                    cout<<"你的经验为：";
                    for(int i=0; i<ttt; i++)
                    {
                        cout<<"█"; 
                     } 
                     cout<<e1<<"/"<<e2<<endl;
                     cout<<"你的等级为："<<level<<endl; 
           }
           else if(stst==4)
           {
            SlowDisplay("以下都是前些天的老报纸："); 
            SlowDisplay("新闻头条：*ZO村仍危在旦夕，勇士努力拯救世界，卧底混入村庄*\n");
                    SlowDisplay("新闻头条：*村长发表演讲：勇士是否能拯救村庄？我表示怀疑。。。勇士还是懦夫？*\n"); 
                    SlowDisplay("新闻头条：*许多怪物被干掉，村庄危机减半，公主被抓，谁能拯救公主，赏金10000*"); 
                    SlowDisplay("新闻头条：*佩奇暗黑王子抓住村长，村民即将崩溃，暗黑诅咒即将16天后显灵！！！*"); 
           }
           else if(stst==5)
           {
                if(lucheng==1000)
                {
                     SlowDisplay("你打开了说明书和地图：\n");
              printf("############################\n");
    printf(".bbbbb...hhh....a.a.a..ccc.a\n");
    printf("...@......hhh....aaa..aa.@.*\n");
    printf("#######.#...hhh%%..^aaa..aaa.\n");
    printf("zzzzzzzz#@...hhhh..aaaa...a.\n");
    printf("zzzzzzzz#....&.hhh....aaa.a.\n");
    printf("zzzzzzzz#@....hhhhh....a.a.a\n");
    printf("#########........hhhhh....aa\n");
    printf("....................hhhhh..a\n");
    printf("############################\n");
    printf("#代表墙，z地是ZO村，h是河，a是树，*是宝藏，@是怪物根据地，.是平原，b是墓地，c是竹子国，%是Pavris的家，&是暗黑地府\n");

                   }
                   else if(lucheng>=750)
                   {
                     SlowDisplay("你打开了说明书和地图：\n");
              printf("############################\n");
    printf(".bbbbb...hhh....a.a.a..ccc.a\n");
    printf("...@......hhh....aaa..aa.@.*\n");
    printf("#######.#...hhh%%..aa^a..aaa.\n");
    printf("zzzzzzzz#@...hhhh..aaaa...a.\n");
    printf("zzzzzzzz#....&.hhh....aaa.a.\n");
    printf("zzzzzzzz#@....hhhhh....a.a.a\n");
    printf("#########........hhhhh....aa\n");
    printf("....................hhhhh..a\n");
    printf("############################\n");
    printf("#代表墙，z地是ZO村，h是河，a是树，*是宝藏，@是怪物根据地，.是平原，b是墓地，c是竹子国，%是Pavris的家，&是暗黑地府\n");

                   }
                   else if(lucheng>=500)
                   {
                     SlowDisplay("你打开了说明书和地图：\n");
              printf("############################\n");
    printf(".bbbbb...hhh....a.a.a..ccc.a\n");
    printf("...@......hhh....aaa..aa.@.*\n");
    printf("#######.#...hhh%%..aaa^..aaa.\n");
    printf("zzzzzzzz#@...hhhh..aaaa...a.\n");
    printf("zzzzzzzz#....&.hhh....aaa.a.\n");
    printf("zzzzzzzz#@....hhhhh....a.a.a\n");
    printf("#########........hhhhh....aa\n");
    printf("....................hhhhh..a\n");
    printf("############################\n");
    printf("#代表墙，z地是ZO村，h是河，a是树，*是宝藏，@是怪物根据地，.是平原，b是墓地，c是竹子国，%是Pavris的家，&是暗黑地府\n");

                   }
                   else
                   {
                     SlowDisplay("你打开了说明书和地图：\n");
              printf("############################\n");
    printf(".bbbbb...hhh....a.a.a..ccc.a\n");
    printf("...@......hhh....aaa..a^.@.*\n");
    printf("#######.#...hhh%%..aaaa..aaa.\n");
    printf("zzzzzzzz#@...hhhh..aaaa...a.\n");
    printf("zzzzzzzz#....&.hhh....aaa.a.\n");
    printf("zzzzzzzz#@....hhhhh....a.a.a\n");
    printf("#########........hhhhh....aa\n");
    printf("....................hhhhh..a\n");
    printf("############################\n");
    printf("#代表墙，z地是ZO村，h是河，a是树，*是宝藏，@是怪物根据地，.是平原，b是墓地，c是竹子国，%是Pavris的家，&是暗黑地府\n");

                   }
             }
            else if(stst==2)
            {
                int c2=3,c3=10,c4=5,c5=1;
                int slg=rand()%3;
                if(slg==0)
                {
                    SlowDisplay("你遇到了吸血蝙蝠，技能：吸血\n");
                    m11.blood=300; 
                    while(m.blood>0&&m11.blood>0)
                {
                    cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<"6.射十字弩攻击力100"<<endl;
                    cout<<"敌方的血还有"<<m11.blood<<endl;
                    cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m11.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m11.blood-=a1;
                            m11.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m11.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m11.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m11.blood-=a3;
                            m11.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m11.blood-=a5;
                        m11.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else if(z==6)
                     {

                        cout<<"敌方受到攻击"<<endl; 
                        m11.blood-=100; 
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     cout<<"敌方攻击了还吸血了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     {

                        m.blood-=(rand()%5+m11.attack);
                        m11.blood+=(rand()%5+m11.attack)/4;
                     }

                }
                }
                if(slg==1)
                {
                    SlowDisplay("你遇到了狼人，无技能\n");
                    m12.blood=1000;
                    while(m.blood>0&&m12.blood>0)
                {
                    cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<"6.射十字弩攻击力100"<<endl;
                    cout<<"敌方的血还有"<<m12.blood<<endl;
                    cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m12.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m12.blood-=a1;
                            m12.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m12.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m12.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m12.blood-=a3;
                            m12.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m12.blood-=a5;
                        m12.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else if(z==6)
                     {

                        cout<<"敌方受到攻击"<<endl; 
                        m12.blood-=100; 
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     {

                        m.blood-=(rand()%5+m12.attack);
                     }

                }
                }
                if(slg==2)
                {
                    SlowDisplay("你遇到了独角兽，无技能\n");
                    m13.blood=500;
                    while(m.blood>0&&m13.blood>0)
                {
                    cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<"6.射十字弩攻击力100"<<endl;
                    cout<<"敌方的血还有"<<m13.blood<<endl;
                    cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m13.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m13.blood-=a1;
                            m13.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m13.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m13.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m13.blood-=a3;
                            m13.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m13.blood-=a5;
                        m13.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else if(z==6)
                     {

                        cout<<"敌方受到攻击"<<endl; 
                        m13.blood-=100; 
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     {
                        m.blood-=(rand()%5+m13.attack);
                     }

                }
                }
                 if(m.blood<=0)
                 {
                    cout<<"你死了"<<endl;
                    return 0;
                 }
                 else
                 {
                    cout<<"敌人死了，涨经验了"<<endl;
                    if(slg==0) 
                    e1+=100;
                    else if(slg==1)
                    e1+=300;
                    else
                    e1+=250;
                 }
SlowDisplay("你前进了100米！！！\n");
lucheng-=100;

             } 
            else
            cout<<"输入错误！！！"<<endl;  
                }
                SlowDisplay("你们到了巨人堡，正在你们要休息时，突然一个斑蝥虎蹦出！！！QAQ\n");

                int c2=3,c3=10,c4=5,c5=1;
                while(m.blood>0&&m14.blood>0)
                {
                    cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<"6.射十字弩攻击力100"<<endl;
                    cout<<"敌方的血还有"<<m14.blood<<endl;
                    cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）,大胡子也前来作战，Pavris边喝酒边旁观。。。"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m14.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m14.blood-=a1;
                            m14.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m14.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m14.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m14.blood-=a3;
                            m14.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m14.blood-=a5;
                        m14.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else if(z==6)
                     {

                        cout<<"敌方受到攻击"<<endl; 
                        m14.blood-=100; 
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     cout<<"大胡子攻击了，斑蝥虎减了100滴血"<<endl;
                     m14.blood-=100; 
                     if(rand()%10!=1)
                     {

                     cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     {
                        m.blood-=(rand()%5+m14.attack);
                     }
                     }
                     else
                     {
                        cout<<"斑蝥虎使用河东狮吼，你速度减了20！！！"<<endl;
                        m.speed-=20; 
                     }

                }
                if(m.blood<=0)
                {
                    cout<<"你死了！！！"<<endl;
                return 0;
                }
                else
                {
                    cout<<"敌人挂了！！！"<<endl;
                    SlowDisplay("你：刚刚太险了，差点挂了，幸好大胡子救助\n");
                    SlowDisplay("大胡子：斑蝥虎具有毒液，很珍贵，话说一般都人工养，咋跑森林里了？？？    大胡子边说边蹲下用瓶子接了点从斑蝥虎尸体的嘴里流下的毒液。。。\n");
                    SlowDisplay("突然！！！Pavris一声尖叫，掉进了一个洞里，你惊讶地发现那个洞是个人工陷阱，你：大胡子，快跑！！！    但已经晚了，一个巨大的网兜罩在你和大胡子头上，你们中了埋伏！！！\n");
                    SlowDisplay("你心想你们肯定是被德沃拉抓了，这是走上了一个60多岁的一个面容狡诈的一个老头子，他向你们大声质问道：你们来者何人！！！竟敢杀死我们竹子国国王亲自养的宠物斑蝥虎！！！你们必须死！！！\n");
                    SlowDisplay("第五章 完\n");
                    system("pause");
                    system("cls");
                    jiazai();
                    SlowDisplay("第六章 智取夜光珠\n");
                    SlowDisplay("整个事情太疯狂了，你们被竹子国的人抓了之后，你们知道的就是，你们被戴上了枷锁，投入了地牢。。。与此同时暗黑诅咒8天后灵显。。。\n");
                    SlowDisplay("Pavris暴怒无常，以致疯狂地踹着牢房地板，便怒吼道：没希望了。。。再也不能抓到德沃拉了。。。  大胡子异常冷静，一直在安慰Pavris。。。\n");
                    SlowDisplay("而你感觉能离开的希望渺茫，自己坐在角落里。。。  突然一道光亮，一个高个的人打开牢门，走进牢房，他说：我是竹子国国王，我也叫竹子国国王，听说你是ZO村勇士？？？\n");
                    SlowDisplay("你要答：1。是   2。不是\n");
                    int t;
                    cin>>t;
                    if(t==1)
                    {
                        SlowDisplay("竹子国国王立马跪在地上QAQ，说：听说你要去拿夜光珠，所以我可崇拜你了，虽然我们国家不受暗黑诅咒，但我们也深恨德沃拉，因为德沃拉的巨人军团聚集在我们国家旁的巨人堡内，天天侵害我们国家，让我们民不聊生。。。\n");
                        SlowDisplay("他接着说：如果你们要去拿夜光珠，一定要打败德沃拉！！！来，我立马就放你们出去，拿着这瓶好酒，这是我赏你的，哦，对了，如果你们成功偷到了夜光珠，一定要回国，我来奖赏你们！！！ \n");
                        SlowDisplay("就这样你们被放了，继续走上去偷夜光珠的路。。。 \n");
                        SlowDisplay("你们来到巨人堡的城墙前，Pavris得意地说：宝藏就守在巨人堡后面的院子里，四处都是守卫，硬攻不可能，但我已制定好计划了，那就是爬下水道！！！ \n");
                        SlowDisplay("你：爬下水道？？？决不！！！里面肯定都是恶心的巨人的便便！   Pavris：那你能想出其他好计划吗，想不出就跟我走！！！ \n");
                        SlowDisplay("你们爬进了恶心的下水道，下水道横纵交错 ，跟个迷宫是的。。。\n");
                        SlowDisplay("没错，欢迎来到drzo小游戏环节！！！来闯迷宫吧！！！\n");
                        system("pause"); 
                        system("cls");
                        int i,j;
    aaa[1]="*@*********";
    aaa[2]="*   *   * *";
    aaa[3]="* *** * * *";
    aaa[4]="* *** * * *";
    aaa[5]="*   * * * *";
    aaa[6]="* * * * * *";
    aaa[7]="* * * * * *";
    aaa[8]="* * * * * *";
    aaa[9]="* *   *   *";
    aaa[10]="********* *";
    out();
    char c;
    for(;;)
    {
        c=getch();
        system("cls");
        if(c=='w')
        {
            if(judge(x-1,y))
            {
                swap(aaa[x-1][y],aaa[x][y]);
                x--;
            }
        }
        if(c=='a')
        {
            if(judge(x,y-1))
            {
                swap(aaa[x][y-1],aaa[x][y]);
                y--;
            }
        }
        if(c=='s')
        {
            if(judge(x+1,y))
            {
                swap(aaa[x+1][y],aaa[x][y]);
                x++;
            }
        }
        if(c=='d')
        {
            if(judge(x,y+1))
            {
                swap(aaa[x][y+1],aaa[x][y]);
                y++;
            }
        }
        out();
        if(x==10&&y==9)
        {
            system("cls");
            cout<<"YOU WIN"<<endl;
            Sleep(2000);
            getch();
            break;
        }
    }
                    SlowDisplay("你们终于爬出了下水道，你们从巨人堡的厕所里的一个巨型茅坑里爬出来，你们浑身都是屎，狼狈不堪，而Pavris一直在呕吐，你发现厕所窗外就是那个守护宝藏的院子。。。\n");
                    SlowDisplay("你：赶紧行动，快，咱们从窗口跳出去！！！     正在这时，你们听到了巨大的脚步声，Pavris：惨了。。。      厕所门口出现了个体型庞大的巨人，相貌奇丑无比，衣服上还留着鼻涕，它看到你们怒吼一声，口中喷出一大堆口水，你们现在不仅浑身是屎，还沾满了巨人的口水，巨人举起狼牙棒朝你挥去，你心想：这下死定了。。。\n");
                    SlowDisplay("可与此同时Pavris急速从你包里抽出上次竹子国国王赏你的那瓶酒，用力砸在巨人头上，巨人被砸晕在地，而酒瓶被砸碎了，酒流满在地，大胡子惊讶不已。。。  Pavris对你说：你可欠我条命了！！！\n");
                    SlowDisplay("这时又在门口出现3个巨人，它们看了看被砸晕在地的另个巨人，又看了看Pavris手中握的碎瓶子，又看了看Pavris凶猛的神情，都被吓跑了，而Pavris大喊着：我要为我哥哥报仇！！！   追了上去，大胡子：他太傻了，他打不过那么多巨人的。。。     你：不用管他，你先从窗口跳下去，我在这等他。。。\n");
                    SlowDisplay("过了一会儿，Pavris尖叫着跑来回来，气喘吁吁的Pavris：它们来了！！！至少十多个！！！    你：赶紧跳下去！！！要不然没命了!!!\n");
                    SlowDisplay("你们都跳了下去，大胡子已经找到了夜光珠扔到Pavris手中。。。你们在院子外面找到了辆马车，你们全跳了上去，你疯狂地驾着车，后面追上了几十个巨人，Pavris在车上喝酒压惊，而大胡子制造了个黑洞把那几个巨人都卷了进去，你们终于安全了。。。\n");
                    SlowDisplay("第六章 完\n");
                    system("pause");
                    system("cls");
                     SlowDisplay("第七章 竹子国危机\n");
                    SlowDisplay("你们顺利逃离巨人堡，并且拿到夜光珠，你们最后来到了竹子国领赏，你们获得了很多钱，住了一宿，准备离开，离暗黑诅咒显灵7天。。。\n");
                    SlowDisplay("你准备好行李，向竹子国国王告别，要离开时，上次把你们抓起来的60多岁老头子拦住了你们，他奸笑着说：呵呵，小伙子志向不错哈，拿到了夜光珠，要去打佩奇，我叫Sarais，是竹子国大臣哈。。。\n");
                    SlowDisplay("你心想：他说话的声音和语气有点似曾相识。。。   Sarais：来来来，请请请，请来我家坐坐哈，不急不急，就喝点茶，就让你们走哈。。。\n");
                    SlowDisplay("你是否要去Sarais他家：");
                    SlowDisplay("1.去 2.不去\n");
                    int t;
                    cin>>t;
                    if(t==1)
                    {
                        SlowDisplay("你：好，我去，我去。。。\n");
                        SlowDisplay("于是你们走向Sarais他家。。。路中，你看到路旁有个阴森的门店，你看到门牌上写着：自杀专卖店\n");
                        SlowDisplay("你好奇地走进去，有个广告：德沃拉降临，民不聊生，那还活个毛，直接来我们自杀专卖店，提供100种死法，还提供免费棺材哦！！！\n");
                        SlowDisplay("里面黑暗无比，但仍有好多人排队要自杀，你发现每个要自杀的人都被带进一个屋子里，就再也没出来了，你发现门锁得死死的。。。  大胡子：这房间非常不对劲，你看我用穿墙术进去瞅一眼。。。\n");
                        SlowDisplay("不一会儿大胡子出来了，满头大汗，他说：不好！！！每个要自杀的人都被迫变成了僵尸！！！这是个阴谋！！！    于是Pavris撞开了门，果然一大群僵尸拥了出来，场面一度混乱！！！\n");
                        int jn=30;
                        while(jn>0)
                        {
                            SlowDisplay("还有");
                            cout<<jn;
                             SlowDisplay("个僵尸！！！加油！！！干了它们！！！\n");
                             m2.blood=100;
                cout<<"你遇见了僵尸！他们不仅相貌丑陋，也凶狠残暴，干掉他们吧！！！技能：僵尸病毒"<<endl;
                    bool bd=false; 
                    int bdc=0;
                    int c2=3,c3=10,c4=5,c5=1;
                while(m.blood>0&&m2.blood>0)
                {
                    if(bdc==3)
                    {
                        bdc=0;
                        bd=false;
                    }
                    if(bd)
                    bdc++;
                    cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<"6.射十字弩攻击力100"<<endl;
                    cout<<"敌方的血还有"<<m2.blood<<endl;
                    cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m2.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m2.blood-=a1;
                            m2.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m2.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m2.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m2.blood-=a3;
                            m2.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m2.blood-=a5;
                        m2.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else if(z==6)
                     {

                        cout<<"敌方受到攻击"<<endl; 
                        m2.blood-=100; 
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     if(rand()%11==1)
                     {
                        cout<<"敌方扔出了僵尸病毒!!!你中了毒！！！3回合持续减血！！！"<<endl;
                        bd=true;
                        m.blood-=25;
                     } 
                     else
                     {
                        cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m2.attack);
                     if(bd)
                     {
                        cout<<"你因为毒素减血了！！！"<<endl;
                        m.blood-=5;
                     }

                     }

                }
                             if(m.blood<=0)
                        {
                            SlowDisplay("你死了。。。\n");
                            return 0; 
                        } 
                        else
                        {
                            SlowDisplay("敌人死了。。。\n");
                            jn--;
                        }
                        } 

                        SlowDisplay("你们把僵尸都给干了。。。就这样，你们又立大功，领了赏，Sarais嫉妒不已。。。\n");
                    }
                    else
                    {
                        SlowDisplay("你：我不去。。。\n");
                        SlowDisplay("于是你们离开了竹子国。。。路中，你看到路旁有个阴森的门店，你看到门牌上写着：自杀专卖店\n");
                        SlowDisplay("你好奇地走进去，有个广告：德沃拉降临，民不聊生，那还活个毛，直接来我们自杀专卖店，提供100种死法，还提供免费棺材哦！！！\n");
                        SlowDisplay("里面黑暗无比，但仍有好多人排队要自杀，你发现每个要自杀的人都被带进一个屋子里，就再也没出来了，你发现门锁得死死的。。。  大胡子：这房间非常不对劲，你看我用穿墙术进去瞅一眼。。。\n");
                        SlowDisplay("不一会儿大胡子出来了，满头大汗，他说：不好！！！每个要自杀的人都被迫变成了僵尸！！！这是个阴谋！！！    于是Pavris撞开了门，果然一大群僵尸拥了出来，场面一度混乱！！！\n");
                        int jn=30;
                          int c2=3,c3=10,c4=5,c5=1;
                        while(jn>0)
                        {
                            SlowDisplay("还有");
                            cout<<jn;
                             SlowDisplay("个僵尸！！！加油！！！干了它们！！！\n");
                             m2.blood=100;
                cout<<"你遇见了僵尸！他们不仅相貌丑陋，也凶狠残暴，干掉他们吧！！！技能：僵尸病毒"<<endl;
                    bool bd=false; 
                    int bdc=0;
                while(m.blood>0&&m2.blood>0)
                {
                    if(bdc==3)
                    {
                        bdc=0;
                        bd=false;
                    }
                    if(bd)
                    bdc++;
                    cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<endl;
                    cout<<"敌方的血还有"<<m2.blood<<endl;
                    cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m2.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m2.blood-=a1;
                            m2.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m2.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m2.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m2.blood-=a3;
                            m2.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m2.blood-=a5;
                        m2.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     if(rand()%11==1)
                     {
                        cout<<"敌方扔出了僵尸病毒!!!你中了毒！！！3回合持续减血！！！"<<endl;
                        bd=true;
                        m.blood-=25;
                     } 
                     else
                     {
                        cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m2.attack);
                     if(bd)
                     {
                        cout<<"你因为毒素减血了！！！"<<endl;
                        m.blood-=5;
                     }

                     }

                }
                             if(m.blood<=0)
                        {
                            SlowDisplay("你死了。。。\n");
                            return 0; 
                        } 
                        else
                        {
                            SlowDisplay("敌人死了。。。\n");
                            jn--;
                        }
                        } 

                        SlowDisplay("你们把僵尸都给干了。。。就这样，你们又立大功，领了赏，Sarais嫉妒不已。。。\n");
                    } 
                    SlowDisplay("Sarais气的咬牙切齿，把你独自一人带进了一个屋子里，一挥手对手下说：抓住他！！！\n");
                    SlowDisplay("你：Sarais！！！可我没做错任何事情啊！！！     就这样你被关进了阴森的监狱。。。\n"); 
                    SlowDisplay("第七章 完\n"); 
                    system("pause");
                    system("cls");
                    jiazai();
                    SlowDisplay("第八章 越狱\n");
                    SlowDisplay("你：Sarais！！！可我没做错任何事情啊！！！     Sarais：你太天真了，你以为求情我就放了你？还有夜光珠我拿了，而你的那两个伙伴，就得判死刑了。。。\n");
                    SlowDisplay("你：你不能那样！！！    Sarais：我为什么不能那样，我是竹子国大臣，国王完全听信我，你完蛋哪，哈哈哈哈，虽然志向不错，但你被骗啦！！！\n");
                    SlowDisplay("再次欢迎来到drzo答题环节，第二道题：\n");
                    SlowDisplay("Sarais的话很像谁的话？？？  A.奸商老板 B.你 C.drzo D.大胡子\n");
    SlowDisplay("你的选择是：");
    char ABCD;
    cin>>ABCD;
    if(ABCD=='A')
    SlowDisplay("答对了！！！\n");
    else
     SlowDisplay("答错了！！！下次努力。。。\n");
     system("pause"); 
                    SlowDisplay("你：你莫非是奸商老板？？！！\n");
                    SlowDisplay("Sarais：傻子，现在才想出来，哈哈哈。。。   接着Sarais撕下了面具，露出奸商老板的面孔！\n");
                    SlowDisplay("这时公主走了进来,你：公主，你怎么在这里？？？我以为你一直待在Pavris他家，快跑！！！这人是德沃拉手下！！！\n");
                    SlowDisplay("接着，发生了，恐怖血腥的一幕！！！公主露出血盆大口，变成了一个巨型的三个头的蛇！！！一口把Sarais撕成了三半，鲜血飞溅！！！\n");
                    SlowDisplay("你惊呆了，跌倒在地，原来这大怪物也是德沃拉派来的！！！ 你想：我这会没救了。。。QAQ\n");
                    SlowDisplay("三头蛇嘶嘶地叫道：");
                     SlowDisplay("你死定啦，我叫ENDER，是德沃拉派来杀你的，没想到这块有个守着你的蠢货，我只好把他当成食物啦！！！你也将是我的食物了，哈哈！！！\n");
                      SlowDisplay("ENDER猛力撞上监狱门，一撞就撞碎了！！！\n");
                       SlowDisplay("你要趁机：1.战斗 2.逃跑\n");
                       int tttt;
                       cin>>tttt;
                       if(tttt==1)
                        {

                    int c2=3,c3=10,c4=5,c5=1;
                            while(m.blood>0&&m16.blood>0)
                {
                    cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<endl;
                    cout<<"敌方的血还有"<<m16.blood<<endl;
                    cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m16.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m16.blood-=a1;
                            m16.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m16.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m16.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m16.blood-=a3;
                            m16.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m16.blood-=a5;
                        m16.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                        cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m16.attack);

                        }if(m.blood<=0)
                        {
                            SlowDisplay("你死了。。。\n");
                            return 0; 
                        } 
                        else
                        {
                            SlowDisplay("敌人死了。。。\n");
                            e1+=10000;
                            if(e1>=e2)
                {
                    int h=e1/e2;
                    level+=e1/e2;
                    e1=e1%e2;
                    e2+=50;
                    cout<<"你升级了!!!攻击力&血量都多了！！！"<<endl;
                    a1+=2*h;
                    a3+=3*h;
                    a5+=5*h;
                    a6+=4*h;
                    a4+=10*h;
                    a2+=(5*h)/100;
                    m.blood+=10*h;
                    coin+=100*h; 
                }
                        }
                    }
                    SlowDisplay("你趁机跑掉了！！！\n");
                    SlowDisplay("第八章 完\n");
                    system("pause");
                    jiazai();
                    SlowDisplay("第九章 墓地决斗\n");
                    SlowDisplay("你连夜逃出竹子国，Pavris和大胡子都被抓了，而夜光珠又被抢走，离暗黑诅咒灵现3天。。。QAQ\n");
                    SlowDisplay("你之前基本上干的所有都功亏一篑，你感觉阻止德沃拉希望渺茫，你甚至都不知道德沃拉现在在哪里，你也不知道从哪里下手。。。\n");
                    SlowDisplay("你第一个想到的就是回Pavris他家静一静，于是你到了他家，惊奇地发现公主竟在里头，为了以防她又是德沃拉手下变得，你试探地问：你为感恩我，给我送的什么礼物？？？\n");
                    SlowDisplay("答道：护身符！   你松了一口气，看来是真公主。。。（确实是真的。。。）\n");
                    SlowDisplay("这时你看到墙上贴着个字条，上头写着：要想救回你的朋友，Pavris和大胡子，今晚十二点，独自一人来墓地见我。\n");
                    SlowDisplay("公主说：你绝对不能去！！！要知道想你这样的勇士，不止一个，我见到了他们，他们就走了，就一个一个的都死了！被德沃拉杀死了！我知道你很善良，想救你朋友，可不管怎样，他们都会死的，如果你去，你也会跟着死了，为了你，我会拦住你，绝对不要你去！！！\n");
                    bool flag2=true,mazui=true;
                    while(flag2) 
                    {
                        if(mazui)
                        SlowDisplay("公主拦住你的去路，你要：1.战斗 2.交流 3.查看四周\n");
                        else
                        SlowDisplay("公主拦住你的去路，你要：1.战斗 2.交流 3.查看四周 4.麻醉公主\n");
                    int ttttt;
                    cin>>ttttt;
                    bool jieju2=true;
                    if(ttttt==1)
                {
                    cout<<"公主，";
                      Sleep(125);
                      cout<<"见";
                       Sleep(125);
                      cout<<"到";
                      Sleep(125);
                      cout<<"你";
                      Sleep(125);
                      cout<<"是";
                      Sleep(125);
                      cout<<"我";
                      Sleep(125);
                      cout<<"的";
                      Sleep(125);
                      cout<<"荣幸，";
                      Sleep(500);
                      cout<<"但";
                      Sleep(500);
                      cout<<"因";
                      Sleep(500);
                      cout<<"你";
                      Sleep(500);
                      cout<<"的";
                      Sleep(500);
                      cout<<"固执";
                      Sleep(500);
                      cout<<"，";
                      Sleep(500);
                      cout<<"我";
                      Sleep(500);
                      cout<<"不得不";
                      Sleep(500);
                      cout<<"杀死你，";
                      Sleep(500);
                      cout<<"对不起，";
                      Sleep(500);
                      cout<<"再";
                      Sleep(1000);
                      cout<<"见";
                      Sleep(1000);
                      cout<<"了。"<<endl;
                      texiao();
                          int c2=3,c3=10,c4=5,c5=1;
                    while(m.blood>0&&m17.blood>0)
                {
                    cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<endl;
                    cout<<"敌方的血还有"<<m17.blood<<endl;
                    cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m17.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m17.blood-=a1;
                            m17.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m17.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m17.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m17.blood-=a3;
                            m17.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m17.blood-=a5;
                        m17.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m17.attack);
                }
                if(m.blood<=0)
                {
                    SlowDisplay("你死了\n");
                    return 0; 
                }
                else
                {
                    jieju2=false;
                    SlowDisplay("公主死了\n");
                    break;
                }
                }
                        else if(ttttt==2)
                        {

                        SlowDisplay("公主：交流没用的，不会让你走！！！\n");
                        } 
                       else if(ttttt==3&&mazui==true)
                        {
                            SlowDisplay("搜到麻醉剂。。。\n");
                            mazui=false;
                        }
                        else if(ttttt==3&&mazui==false)
                        {
                            SlowDisplay("没东西了。。。\n");
                        }
                       else if(ttttt==4&&mazui==false)
                        {
                            SlowDisplay("你把公主麻醉了。。。\n");
                            break; 
                        }
                        else
                        {
                            SlowDisplay("输入错误。。。\n");
                        }
                    }
                    SlowDisplay("你按规定时间赶到了墓地，离暗黑诅咒灵现2天。。。\n");
                    SlowDisplay("这时，你又看到那熟悉的带斗篷的黑色身影，是德沃拉。。。他身旁捆着晕倒的Pavris和大胡子。。。\n");
                    SlowDisplay("你攒紧了拳头，怒气从你心中涌起，这时你感到你身上携带的护身符发起红光，你彻底暴走了,你的血量和攻击力乘10，速度85。。。\n");
                    m.blood*=10;
                    m.speed=85;
                    m.attack*=10; 
                    texiao();
                     SlowDisplay("你向德沃拉扑了过去！！！AWA\n");
                     int c2=3,c3=10,c4=5,c5=1;
                    while(m.blood>0&&m6.blood>0)
                {
                    cout<<"你有5个绝招：1.鬼火（能使无限次，攻击为"<<a1<<"） 2.冰封（能使3次，让敌方速度减"<<a2<<"） 3.霹雳（使10次，攻击为"<<a3<<"） 4.万物复苏（使5次，血+"<<a4<<"） 5.天崩地裂（1次，攻击"<<a5<<"，涨血"<<a6<<"）"<<endl;
                    cout<<"敌方的血还有"<<m6.blood<<endl;
                    cout<<"你的血还有"<<m.blood<<"   请攻击（选择绝招编号）"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m6.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m6.blood-=a1;
                            m6.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m6.speed-=a2;
                        cout<<"敌方被冻住了，减了速度！"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m17.speed)
                        cout<<"敌方躲避了攻击"<<endl;
                        else
                        {
                            m6.blood-=a3;
                            m6.blood-=m.attack;
                            cout<<"敌方受到攻击"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"你涨血了！"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m6.blood-=a5;
                        m6.blood-=m.attack;
                        cout<<"天崩地裂！！！敌方受到猛烈攻击！！！"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"攻击无效！！！"<<endl;
                     cout<<"敌方攻击了"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"你躲避了攻击！"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m6.attack);
                }
                if(m.blood<=0)
                {
                    m.blood =1;
                    SlowDisplay("你还有丝儿血，1滴血，你要不行了！！！QAQ\n");
                    SlowDisplay("这时，只见你胸前护身符红光泛起，你咬紧牙，你说：我不能死！！！德沃拉，还我ZO村！！！！！！！\n");
                    texiao();

                    SlowDisplay("德沃拉血瞬间-999999999999999999999999999999999999999\n");
                    texiao();
                    Beep(400,100); 
                }
                SlowDisplay("还有一口气的德沃拉:我就知道你有这能耐。。。\n");
                SlowDisplay("还有一口气的德沃拉:我要报仇，我要。。。\n");
                SlowDisplay("德沃拉话还没说完，就已命丧黄泉了。。。\n");
                    SlowDisplay("第九章 完\n");
                    system("pause");
                    jiazai();
                    if(flag2)
                    {

                    SlowDisplay("第十章 真相（季终章）\n");
                SlowDisplay("你们回到了ZO村来庆祝胜利，你得了好多奖赏，你血又变回100000了。\n");
                m.blood=100000;

                SlowDisplay("你们正在开party，突然一个浑身被临时的一个金色头发的中年男子闯了进来。。。\n");

                SlowDisplay("他大喊道：我叫shiys，我是个预言家（彩蛋，第二季会成为主要角色），我过来来警告你们，暗黑诅咒倒计时并没有结束！！！说明真正的德沃拉还没有死！！！暗黑诅咒半天后就会灵现！！！\n");

                    SlowDisplay("未完待续\n");
                    system("pause");
                    return 0; 
                     } 
                    else
                    {

                    SlowDisplay("第十章 真相（季终章）\n");
                    Sleep(500);
                    system("cls"); 
                    SlowDisplay("第十章 假相（季终章）\n");

                    SlowDisplay("由于你杀了公主，所以恭喜你进黑化结局！！！QAQ\n");
                    texiao(); 

                    SlowDisplay("未完待续\n");
                    system("pause");
                    return 0; 
                    }

                    }
                    else
                    {
                        SlowDisplay("你们都被判了死刑。。。游戏结束。。。QAQ\n");
                        return 0;
                    }
                }
       } 
                    } 
              } 
              } 
            }

                 else if(r==6&&coin>=1000&&m.speed>75)
                {
                    e1+=1;
                    m.attack+=2500; 
                    m.blood+=30000; 
                    coin-=1000;
                    cout<<"购买成功"<<endl;
                 } 
                else if(r==7&&coin>=5000)
                {
                    e1+=1;
                    m.blood+=200000;
                    m.attack+=15000; 
                    coin-=5000;
                    cout<<"购买成功"<<endl;
                } 
                 else
                {
                    e1+=1;
                    cout<<"购买失败"<<endl;
                 } 

            }
            ct++;
            if(ct>=10)
            {
                ct=0;
                if(bai)
                bai=false;
                else
                {
                    bai=true;
                    tian++;
                    if(tian==20)
                    {
                        SlowDisplay("第20天，暗黑诅咒显灵。\n");
                        SlowDisplay("就在那白日落下之时，村庄一阵巨响，村民和房子都化为灰烬，你闭上了双眼，你感觉。。。你的背后一阵凉风，你就再也呼吸不了了。。。恭喜你进入诅咒结局。。。\n");
                        printf("文字游戏:暗黑诅咒（The Curse Of Darkness）\n");
    Sleep(1000);
    printf("出品人:drzo（teacherga）\n");
    Sleep(1000);
    printf("版本:0.5.0\n");
    Sleep(1000);
    printf("你死了，游戏结束\n");
                        return 0; 
                    }
                    SlowDisplay("第");
                    cout<<tian;
                    SlowDisplay("天，暗黑诅咒"); 
                    cout<<20-tian;
                    SlowDisplay("天后显灵！！！你涨了金币！！！"); 
                    coin+=tian*100;
                    jiuguan=true; 
                }
            }
        }
    } 
    else
    {
        return 0;
    }
    return 0;
}
