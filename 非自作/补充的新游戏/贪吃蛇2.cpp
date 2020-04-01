#include <bits/stdc++.h>
#include <windows.h>
#include <Winuser.h>
#include <conio.h>
#include <ctime>
using namespace std;
int x[10000],y[10000],l,fx,fy,score,highest,color=1;
int t=100;
bool a,eaten=true,easy=true;
char p,fangxiang='d';
void hidemousepoint(void)  
{  
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};   
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);  
}
void gotoxy(int x,int y)
{   
   COORD c;   
   c.X = x - 1;   
   c.Y = y - 1;   
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);   
}
void choose_color(void)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    system ("cls");
    gotoxy(35,5);
    cout<<"1: BLUE";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
    cout<<"  **";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    gotoxy(35,10);
    cout<<"2: GREEN";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
    cout<<" **";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    gotoxy(35,15);
    cout<<"3: RED";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
    cout<<"   **";
    gotoxy(35,20);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    cout<<"4: WHITE";
    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
    cout<<" **";
again2:
    p=_getch();
    switch (p)
    {
        case '1':color=0;break;
        case '2':color=1;break;
        case '3':color=2;break;
        case '4':color=3;break;
        default:goto again2;
    }
    system("cls");
}
int main()
{
start:
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    easy=true;
    eaten=true;
    t=100;
    hidemousepoint();
    gotoxy(37,2);
    cout<<"贪 吃 蛇"; 
    gotoxy(1,2+2);
    for (short i=1;i<=80;i++) cout<<'-';
    gotoxy(27,3+2);
    cout<<"w,s选择 k确定 l选颜色 r重置"; 
    gotoxy(1,4+2);
    for (short i=1;i<=80;i++) cout<<'-';
    gotoxy(40,8+2);
    cout<<"简单";
    gotoxy(40,12+2);
    cout<<"困难";
    gotoxy(20,8+2);
    cout<<">>";
    gotoxy(39,18);
    switch (color)
    {
        case 0:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);break;
        case 1:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);break;
        case 2:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);break;
        case 3:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);break;
    }
    cout<<"**";
    gotoxy(60,18+2);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    cout<<"制作：hyzxxqc";
    while (1)
    {
        p=_getch();
        switch (p)
        {
            case 'w':easy=true;gotoxy(20,12+2);cout<<"  ";gotoxy(20,8+2);cout<<">>";break;
            case 's':easy=false;gotoxy(20,8+2);cout<<"  ";gotoxy(20,12+2);cout<<">>";break;
            case 'k':goto beginning;
            case 'l':choose_color();goto start;
            case 'r':system("cls");gotoxy(30,12);cout<<"是否重置?是(y) 否(n)";p=_getch();
                     while (p!='y'&&p!='n') p=getch();
                     if (p=='y') 
                     {
                        highest=0;
                         color=1;
                     }
                     goto start;
        }
    }
beginning:
    if (!easy) t=50;
    system("cls");
    l=2;
    for (short i=1;i<=50;i++)
    {
        gotoxy(i,1);
        cout<<'-';
        gotoxy(i,25);
        cout<<'-';
    }
    for (short i=2;i<=24;i++)
    {
        gotoxy(1,i);
        cout<<'|';
        gotoxy(50,i);
        cout<<'|';
    }
    gotoxy(55,3);
    cout<<"用wasd控制贪吃蛇";
    gotoxy(55,5);
    cout<<"按p暂停 按任意字符继续";
    gotoxy(55,7);
    cout<<"你的分数是:0";
    x[1]=25;y[1]=12;
    x[2]=24;y[2]=12;
    switch (color)
    {
        case 0:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);break;
        case 1:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);break;
        case 2:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);break;
        case 3:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);break;
    }
    gotoxy(25,12);cout<<'*';
    gotoxy(24,12);cout<<'*';
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    gotoxy(25,5);
    cout<<3;
    _sleep(1000);
    gotoxy(25,5);
    cout<<2;
    _sleep(1000);
    gotoxy(25,5);
    cout<<1;
    _sleep(1000);
    gotoxy(25,5);
    cout<<"GO";
    _sleep(1000);
    gotoxy(25,5);
    cout<<"  ";
    p='d';
    fangxiang='d';
    score=0;
    while (1)
    {
        if (kbhit())
        {
            p=_getch();
            if (p=='p')
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                gotoxy(55,9);
                cout<<"已暂停"; 
                p=_getch();
                gotoxy(55,9);
                cout<<"      "; 
                goto next;
            }
            if ((!(p=='a'&&fangxiang=='d'||p=='d'&&fangxiang=='a'||p=='w'&&fangxiang=='s'||p=='s'&&fangxiang=='w'))&&(p=='a'||p=='s'||p=='d'||p=='w'))
                fangxiang=p;
            else goto next;
            gotoxy(x[l],y[l]);
            cout<<' ';
            for (int i=l;i>=2;i--)
            {
                x[i]=x[i-1];
                y[i]=y[i-1];
            }
            switch (fangxiang)
            {
                case 'a':x[1]=x[2]-1;y[1]=y[2];break;
                case 's':x[1]=x[2];y[1]=y[2]+1;break;
                case 'd':x[1]=x[2]+1;y[1]=y[2];break;
                case 'w':x[1]=x[2];y[1]=y[2]-1;break;
            }
            if (x[1]<=1||x[1]>=50||y[1]<=1||y[1]>=25) goto end;
            for (int i=2;i<=l;i++)
                if (x[1]==x[i]&&y[1]==y[i])
                    goto end;
            gotoxy(x[1],y[1]);
            switch (color)
            {
                case 0:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);break;
                case 1:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);break;
                case 2:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);break;
                case 3:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);break;
            }
            cout<<'*';
            if (x[1]==fx&&y[1]==fy)
            {
                eaten=true;
                score+=10;
                l++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                gotoxy(55,7);
                cout<<"你的分数是:"<<score; 
            }
            if (eaten)
            {
again1:
                srand(time(0));
                fx=rand()%48+2;
                fy=rand()%23+2;
                for (int i=1;i<=l;i++)
                    if (fx==x[i]&&fy==y[i])
                        goto again1;    
                gotoxy(fx,fy);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
                cout<<'@';
                if (fx==49)
                {
                    gotoxy(50,fy);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    cout<<'|';
                }
                eaten=false;
            }
            _sleep(t);
        }
next:
        while (!kbhit())
        {
            gotoxy(x[l],y[l]);
            cout<<' ';
            for (int i=l;i>=2;i--)
            {
                x[i]=x[i-1];
                y[i]=y[i-1];
            }
            switch (fangxiang)
            {
                case 'a':x[1]=x[2]-1;y[1]=y[2];break;
                case 's':x[1]=x[2];y[1]=y[2]+1;break;
                case 'd':x[1]=x[2]+1;y[1]=y[2];break;
                case 'w':x[1]=x[2];y[1]=y[2]-1;break;
            }
            if (x[1]<=1||x[1]>=50||y[1]<=1||y[1]>=25) goto end;
            for (int i=2;i<=l;i++)
                if (x[1]==x[i]&&y[1]==y[i])
                    goto end;
            gotoxy(x[1],y[1]);
            switch (color)
            {
                case 0:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);break;
                case 1:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);break;
                case 2:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);break;
                case 3:SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);break;
            }
            cout<<'*';
            if (x[1]==fx&&y[1]==fy)
            {
                eaten=true;
                score+=10;
                l++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                gotoxy(55,7);
                cout<<"你的分数是:"<<score;
                if (score>=highest)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
                    cout<<"  新纪录!"; 
                }
            }
            if (eaten)
            {
again:
                srand(time(0));
                fx=rand()%48+2;
                fy=rand()%23+2;
                for (int i=1;i<=l;i++)
                    if (fx==x[i]&&fy==y[i])
                        goto again; 
                gotoxy(fx,fy);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
                cout<<'@';
                if (fx==49)
                {
                    gotoxy(50,fy);
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    cout<<'|';
                }
                eaten=false;
            }
            _sleep(t);
        }
    }
end:
    gotoxy(18,12);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    cout<<"your score is:"<<score;
    if (score>highest)
        highest=score;
    gotoxy(18,13);
    cout<<"hightest score is:"<<highest;
    if (score==highest)
    {
        gotoxy(18,14);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
        cout<<"the highest score";
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    gotoxy(18,16);
    cout<<"是否重新开始：是(y),否(n)";
    while (1)
    {
        p=_getch();
        switch (p)
        {
            case 'y':system("cls");goto start;break;
            case 'n':gotoxy(1,25);return 0;
        }
    } 
    return 0;
}
