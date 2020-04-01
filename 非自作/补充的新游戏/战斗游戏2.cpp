#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
const string guainame[]={"","小兵","僵尸","野兽","狼人","恶人","沙人","奥创","神"};
const string wuqiname[]={"","匕首","帽子","小剑","小盾","大剑","大盾","巨剑","巨盾","神剑","神盾","圣之长矛","黄金圣甲"};
const int wuqiRMB[]={0,50,50,100,100,200,200,300,300,600,600,1000,1000};
const int wuqigongji[]={0,50,0,100,0,200,0,300,0,600,0,1000};
const int wuqifangyu[]={0,0,20,0,40,0,80,0,120,0,240,0,400};
const int guaixueliang[]={0,100,150,500,1000,500,2000,1500,2e9};
const int guaigongji[]={0,25,50,75,250,300,150,400,100000};
const int guaijingyan[]={0,20,50,100,150,80,150,200,50000};
const int guaijingbi[]={0,10,20,50,100,75,125,175,1000000};
const int a[]={0,100,100,100,100,100,200,200,200,200,200,300,300,300,300,300,400,400,400,400,400,500,500,500,500,500,600,600,600,700,700,700,800,800,800,900,900,900,1000,1200,1400,1600,1800,2000,2200,2400,2600,2800,3000,3200,3400,3600,3800,4000,4500,5000,5500,6000,6500,7000,7500,8000,8500,9000,9500,10000};
const int manji=65;
const int guaishuliang=8;
const int shangpingshu=12;
string name;
int xueliang;
int MAXxueliang;
int gongji;
int fangyu;
int jingyan;
int dengji;
int jingbi;
int daguaishu;
int dqxueliang;
int ss[1100];
int b[110];
int x;
int xx;
void shuo();
void zd();
void ck();
void csh();
void xg();
void sd();
void xzgw();
void tx();
int main()
{
    printf("欢迎来到勇者游戏！") ;
    Sleep(3000);
    system("cls"); 
    printf("输入1导入存档，输入0跳过。");
    cin>>xx;
    if(xx==1)
    {
        freopen("play.txt","r",stdin);
        cin>>name;
        cin>>xueliang;
        cin>>MAXxueliang;
        cin>>gongji;
        cin>>fangyu;
        cin>>jingyan;
        cin>>dengji;
        cin>>jingbi;
        cin>>daguaishu;
        for(int i=1;i<=guaishuliang;i++)cin>>ss[i];
        for(int i=1;i<=12;i++)cin>>b[i];
        freopen("CON","r",stdin);
        printf("提示：存档后会显示句柄无效，关掉即可\n");
        Sleep(3000);
        system("cls");
    } 
    else 
    {
        system("cls"); 
        printf("请输入你的名字：") ;
        cin>>name;
        csh();
        cout<<endl;
        system("cls");
    }
    cout<<name<<"，你好。祝你游戏愉快！";
    Sleep(3000); 
    system("cls"); 
    printf("输入1看剧情，输入0跳过。");
    cin>>x;
    if(x==1)
    {
        printf("你出生在一个雨夜。\n");
        Sleep(2000);
        printf("由于战乱，父母抛弃了你。\n");
        Sleep(2000);
        printf("一位冷酷无情的将军收养了你。\n");
        Sleep(2000);
        printf("他决心将你培养成一个杀手。\n");
        Sleep(2000);
        printf("你实在受不了了，逃了出去~~\n");
        Sleep(2000);
    }
    system("cls");  
    shuo(); 
    return 0; 
} 
void shuo()
{
    system("cls");
    printf("你在山谷里。\n\n");
    Sleep(1000);
    printf("你要做什么？\n");
    Sleep(500);
    printf("1.回血  2.打怪   3.查看状态  4.探险  5.存档\n");
    cin>>x;
    if(x==1)
    {
        xueliang=MAXxueliang;
        printf("叮，回血成功！");
        Sleep(2000);
        system("cls");
        shuo(); 
    } 
    if(x==2)zd();
    if(x==3)
    {
        system("cls");
        ck();
        system("cls");
        shuo(); 
    }
    if(x==4)tx();
    if(x==5)
    {
        freopen("play.txt","w",stdout);
        cout<<name<<endl;
        cout<<xueliang<<endl;
        cout<<MAXxueliang<<endl;
        cout<<gongji<<endl;
        cout<<fangyu<<endl;
        cout<<jingyan<<endl;
        cout<<dengji<<endl;
        cout<<jingbi<<endl;
        cout<<daguaishu<<endl;
        for(int i=1;i<=guaishuliang;i++)cout<<ss[i]<<endl;
        for(int i=1;i<=12;i++)cout<<b[i]<<endl;
        fclose(stdout);
    }
    if(x<1||x>5)
    {
        system("cls");
        printf("输入错误\n");
        Sleep(2000);
        shuo();
    } 
}
void tx()
{
    system("cls");
    printf("该功能未开放！");
    Sleep(2000);
    shuo(); 
}
void zd()
{
    system("cls");
    printf("1.商店  2.打怪  3.返回\n");
    cin>>x;
    if(x==1)
    {
        sd(); 
        shuo();
    }
    if(x==2)xg();
    if(x==3)shuo();
}
void sd()
{
        system("cls");
        printf("1.买东西 2.返回\n"); 
        cin>>x;
        if(x==2)zd();
        system("cls");
        printf("你要买什么？\n");
        Sleep(3000);
        printf("金币 ：%d\n",jingbi);
        for(int i=1;i<=shangpingshu;i++)cout<<i<<"."<<wuqiname[i]<<"  "<<wuqiRMB[i]<<"金币"<<endl;
        cin>>x;
        system("cls");
        if(b[x]){printf("你已经有了哦~");Sleep(2000);sd();}
        if(jingbi<wuqiRMB[x]){printf("金币不足");Sleep(2000);sd();}
        jingbi-=wuqiRMB[x];
        b[x]=1;
        gongji+=wuqigongji[x];
        fangyu+=wuqifangyu[x];
        printf("购买成功");
        Sleep(2000); 
        sd();
        system("cls");
}
void xg()
{
    system("cls");
    printf("1.选怪  2.返回\n");
    cin>>x;
    if(x==2)zd();
    if(x==1)xzgw();
}
void ck()
{
    system("cls");
    cout<<name<<"的状态:\n\n";
    Sleep(1000);
    printf("金币：%d\n",jingbi);
    Sleep(1000);
    printf("血量：%d/%d\n",xueliang,MAXxueliang);
    Sleep(1000);
    printf("攻击：%d\n",gongji);
    Sleep(1000);
    printf("防御：%d\n",fangyu);
    Sleep(1000);
    printf("打怪数：%d\n",daguaishu);
    for(int i=1;i<=guaishuliang;i++)cout<<guainame[i]<<":"<<ss[i]<<endl;
    Sleep(1000);
    printf("等级：%d",dengji);
    if(dengji>manji)printf("->MAX!!!");
    printf("\n");
    Sleep(1000);
    printf("经验：%d/%d\n",jingyan,a[dengji]);
    Sleep(2000);
}
void csh()
{
    srand(time(0));
    if(name!="xyz")
    {
        xueliang=100;
        MAXxueliang=100;
        gongji=30;
        fangyu=12;
        jingyan=0;
        jingbi=0;
        daguaishu=0;
        dengji=1;
        Sleep(2000);
    }
    else 
    {
        printf("xyz出关了，随即，暴走！");
        Sleep(1000);
        system("cls");
        xueliang=1e9;
        MAXxueliang=1e9;
        gongji=9e8;
        fangyu=500000;
        jingyan=0;
        jingbi=1e9;
        daguaishu=0;
        dengji=1;
    }
}
void xzgw()
{
    system("cls");
    printf("你要打谁?\n");
    for(int i=1;i<=guaishuliang;i++)cout<<i<<"."<<guainame[i]<<endl;
    cin>>x;
    system("cls");
    if(x==0||x>guaishuliang)
    {
        printf("没有此怪\n");
        Sleep(2000);
        shuo(); 
    }
    printf("开始战斗！\n");
    Sleep(3000);
    dqxueliang=guaixueliang[x];
    while(1)
    {
        system("cls");
        printf("你的血：%d       怪的血:%d\n",xueliang,dqxueliang);
        Sleep(1000);
        system("cls");
        xueliang-=max(0,guaigongji[x]-fangyu);
        printf("你的血：%d       怪的血:%d\n",xueliang,dqxueliang);
        cout<<guainame[x]<<"对你造成了"<<max(0,guaigongji[x]-fangyu)<<"点伤害";
        Sleep(1000);
        if(xueliang<=0)
        {
            system("cls");
            printf("你死了\n");
            Sleep(2000);
            shuo();
        }
        Sleep(2000);
        system("cls");
        dqxueliang-=gongji;
        printf("你的血：%d       怪的血:%d\n",xueliang,dqxueliang);
        cout<<name<<"对"<<guainame[x]<<"造成了"<<gongji<<"点伤害";
        Sleep(2000);
        if(dqxueliang<=0)
        {
            system("cls");
            printf("你赢了!\n");
            Sleep(3000);
            jingbi+=guaijingbi[x];
            jingyan+=guaijingyan[x];
            while(jingyan>=a[dengji]&&dengji<manji)
            {
                jingyan-=a[dengji];
                dengji++;
                gongji+=30;
                fangyu+=12;
                MAXxueliang+=20;
                xueliang=MAXxueliang;
                printf("恭喜！你升至%d级\n",dengji);
                Sleep(2000);
            }
            daguaishu++;
            ss[x]++;
            shuo();
        }     
    }
}
