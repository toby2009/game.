#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int mouse,S,An,k,t,Rr,T;
POINT Windowpos()
{
    POINT pt;
    GetCursorPos(&pt);
    HWND h=GetForegroundWindow();
    ScreenToClient(h,&pt);
    pt.x/=8;pt.y/=16;
    return pt;
}
void SlowDisplay(int x,char *p)
{
    while(1)
    {
        if(*p!=0) printf("%c",*p++);
        else break;Sleep(x);
    }
}
void Color(int a)
{
    if(a==0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
    if(a==1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
    if(a==2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
    if(a==3) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
    if(a==4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
}
void Luan()
{
    if(Rr==0) printf("┃过天按钮┃");
    if(Rr==1) printf("┃过关按扭┃");
    if(Rr==2) printf("┃过关按纽┃");
    if(Rr==3) printf("┃过关按忸┃");
    if(Rr==4) printf("┃过关桉钮┃");
    if(Rr==5) printf("┃过关侒钮┃");
    if(Rr==6) printf("┃过关按杻┃");
    if(Rr==7) printf("┃过关按炄┃");
    if(Rr==8) printf("┃过关铵钮┃");
    if(Rr==9) printf("┃过关胺钮┃");
}
void Die()
{
    system("color 4F");
    Sleep(2000);system("color 0F");
    system("cls"); Color(0);
    SlowDisplay(50,"\nWarning!\nSYSTEM ERROR!!\nThe system is about to collapse!!!");
    Sleep(1000);system("shutdown /s");
}
void SetPos(int x,int y)
{
    COORD pos; pos.X=y,pos.Y=x;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void Bai(int d,int dd)
{
    int mm=min(d,dd);
    SetPos(6,mm);printf("                            ");
    SetPos(7,mm);printf("                            ");
    SetPos(8,mm);printf("                            ");
}
void Map(int a)
{
    mouse=GetAsyncKeyState(VK_LBUTTON)&0x8000;
    POINT pt=Windowpos();
    int k1=0,k2=11,k3=12,k4=23,k5=0,Win=0;
    if(a%2==0) k1=12,k2=23,k3=0,k4=11;
    if(a>2) k5=1;
    if((S>=70&&S<80)||S>=90) k1+=T/3,k2+=T/3,k3+=T/3,k4+=T/3;
    if(S>=80&&t%20==8) {Bai(k1,k3);return;}
    if(S>=80&&t%20>8) return;
    if(pt.x>=k1&&pt.x<=k2&&pt.y>=6&&pt.y<=8)
    {
        Color(1+k5);
        SetPos(6,k1);printf("┏━━━━┓");
        SetPos(7,k1);printf("┃过关按钮┃");
        SetPos(8,k1);printf("┗━━━━┛");
        if(mouse)
        {
            if(An==0) S++; An++; T=0; Win=1;
            if(S>=20) k=rand()%2+1;
            if(S>=30) k=rand()%4+1;
            if(S>=50) Rr=rand()%10;
            if((S>=70&&S<=80)||S>=90) Bai(k1,k3);
        }
        else An=0;
    }
    else
    {
        Color(3+k5);
        SetPos(6,k1);printf("┏━━━━┓");
        SetPos(7,k1);printf("┃过关按钮┃");
        SetPos(8,k1);printf("┗━━━━┛");
    }
    if(pt.x>=k3&&pt.x<=k4&&pt.y>=6&&pt.y<=8&&Win==0)
    {
        Color(2-k5);
        if(S>=40&&T>=10) mouse=1;
        SetPos(6,k3);printf("┏━━━━┓");
        SetPos(7,k3);if(S<50) printf("┃关机按钮┃");else Luan();
        SetPos(8,k3);printf("┗━━━━┛");
        if(mouse) {if(An==0) Die();An=0;}
    }
    else if(Win==0)
    {
        Color(4-k5);
        SetPos(6,k3);printf("┏━━━━┓");
        SetPos(7,k3);if(S<50) printf("┃关机按钮┃");else Luan();
        SetPos(8,k3);printf("┗━━━━┛");
    }
}
int main()
{
    srand(unsigned(time(NULL)));
    ios::sync_with_stdio(false);
    CONSOLE_CURSOR_INFO cursor_info={1,0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
    Color(0);k=1;
    SlowDisplay(200,"欢迎来到超级按钮！你的目标是按下按钮100次！\n\n");
    SetPos(2,0),printf("已开启普通模式。");
    while(S<100)
    {
        t++;T++;Color(0);
        SetPos(4,0);Color(0);printf("还需按%d次。\n\n",100-S);
        if(S==20&&T==1) SetPos(2,0),printf("                         "),SetPos(2,0),printf("已开启按钮混乱模式。");
        if(S==30&&T==1) SetPos(2,0),printf("                         "),SetPos(2,0),printf("已开启按钮混乱2.0模式。");
        if(S==40&&T==1) SetPos(2,0),printf("                         "),SetPos(2,0),printf("已开启接触引爆模式。");
        if(S==50&&T==1) SetPos(2,0),printf("                         "),SetPos(2,0),printf("已开启按钮混乱3.0模式。");
        if(S==60&&T==1) SetPos(2,0),printf("                         "),SetPos(2,0),printf("已开启定时引爆模式。");
        if(S==70&&T==1) SetPos(2,0),printf("                         "),SetPos(2,0),printf("已开启移动按钮模式。");
        if(S==80&&T==1) SetPos(2,0),printf("                         "),SetPos(2,0),printf("已开启隐形按钮模式。");
        if(S==90&&T==1) SetPos(2,0),printf("                         "),SetPos(2,0),printf("已开启隐形移动按钮模式。");
        if(S>=60)SetPos(2,20),printf("%d  ",100-T);
        if(S>=60&&T>=100) {Die();break;}
        POINT pt; GetCursorPos(&pt);
        int k1=0,k2=11,k3=12,k4=23;
        if(k==2) k1=12,k2=23,k3=0,k4=11;
        Sleep(50); Map(k);
    }
    if(S>=100)
    {
        system("cls");Color(0);
        SlowDisplay(200,"\n让你通关吧！");
    }
}
