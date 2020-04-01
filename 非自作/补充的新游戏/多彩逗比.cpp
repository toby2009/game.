#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;

int m[11][100050]=
{
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,106,0,107,0,108,0,109,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,101,0,102,103,0,104,105,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};
int score=0,speed=1,jump=0,yan=11,t=0,x=1,y=1,cnt=0,my=4,th=0,yq=0,aj=0,cz=0,xx=0,hscore=0,ww=0,win=0,level=0;
bool up=0,down=0;
int mouse;
bool Pass[5]={0,0,0,0,0};

POINT Windowpos()
{
    POINT pt;
    GetCursorPos(&pt);
    HWND h=GetForegroundWindow();
    ScreenToClient(h,&pt);
    pt.x/=8;pt.y/=16;
    return pt; 
}

void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}

void Display(char *p,int speed,int co)
{
    for(int i=1;*p;i++)
    {
        if(co==0) color(15);
        if(co==1) color(14);
        if(co==2) color(10);
        if(co==3) color(11);
        if(co==4) color(13);
        if(co==5)
        {
            switch(rand()%4+1)
            {
                case 1:color(10);break;
                case 2:color(11);break;
                case 3:color(13);break;
                case 4:color(14);break;
            }
        }
        if(*p) printf("%c",*p++);
        Sleep(speed);
    }
}

void Go(int x,int y)  //光标移动函数，X表示横坐标，Y表示纵坐标。
{
    COORD coord;         //使用头文件自带的坐标结构
    coord.X=y;            //这里将int类型值传给short,不过程序中涉及的坐标值均不会超过short范围
    coord.Y=x;
    HANDLE a=GetStdHandle(STD_OUTPUT_HANDLE);  //获得标准输出句柄
    SetConsoleCursorPosition(a,coord);         //以标准输出的句柄为参数设置控制台光标坐标
}

void Print(int i,int j)
{
    if(i==x&&j==y) color(yan),printf("●"),color(15);
    else if(m[i][j]==1) color(15),printf("■"),color(15);
    else if(m[i][j]==11) color(11),printf("■"),color(15);
    else if(m[i][j]==13) color(13),printf("■"),color(15);
    else if(m[i][j]==10) color(10),printf("■"),color(15);
    else if(m[i][j]==0) color(0),printf("  "),color(15);
    else if(m[i][j]==101) color(14),printf("by"),color(15);
    else if(m[i][j]==102) color(14),printf("Cr"),color(15);
    else if(m[i][j]==103) color(14),printf("ab"),color(15);
    else if(m[i][j]==104) color(14),printf("Da"),color(15);
    else if(m[i][j]==105) color(14),printf("ve"),color(15);
    else if(m[i][j]==106) color(10),printf("多"),color(15);
    else if(m[i][j]==107) color(11),printf("彩"),color(15);
    else if(m[i][j]==108) color(12),printf("逗"),color(15);
    else if(m[i][j]==109) color(13),printf("比"),color(15);
    else if(m[i][j]==201) color(14),printf("★"),color(15);
    else if(m[i][j]==202) color(14),printf("★"),color(15);
    else if(m[i][j]==203) color(14),printf("★"),color(15);
    else if(m[i][j]==204) color(14),printf("★"),color(15);
    else if(m[i][j]==205) color(14),printf("★"),color(15);
    else if(m[i][j]==206) color(14),printf("★"),color(15);
    else if(m[i][j]==207) color(14),printf("★"),color(15);
}

void New(int a)
{
    srand(rand()*rand());
    if(level==1)
    {
        while(a<=100030)
        {
            int b=rand()%10+1,c=rand()%5+3,h=rand()%5,f=rand()%10,d=rand()%50,e=rand()%30;
            for(register int j=a;j<=a+c;j++)
            {
                for(int i=1;i<=10;i++)
                    m[i][j]=0;
                m[0][j]=1;
                if(!h)//地面二层 
                    for(register int i=6;i<=6;i++)
                    {
                        if(b==3||b==2||b==1)m[i][j]=11;
                        else if(b==4||b==5||b==9)m[i][j]=13;
                        else if(b==10&&c==3)m[i][j]=0;
                        else if(b==6||b==7||b==8||b==10)m[i][j]=1;
                    }
                if(!f)//地面三层 
                    for(register int i=3;i<=3;i++)
                        {
                            if(b==3||b==2||b==1)m[i][j]=11;
                            else if(b==4||b==5||b==9)m[i][j]=13;
                            else if(b==10&&c==3)m[i][j]=0;
                            else if(b==6||b==7||b==8||b==10)m[i][j]=1;
                        }
                for(register int i=9;i<=10;i++)//地面一层 
                {
                    if(b==3||b==2||b==1)m[i][j]=11;
                    else if(b==4||b==5||b==9)m[i][j]=13;
                    else if(b==10&&c==3)m[i][j]=0;
                    else if(b==6||b==7||b==8||b==10)m[i][j]=1;
                }
            }
            if(c==7&&!d)//by Crab  Dave
            {
                m[10][a]=101;
                m[10][a+1]=0;
                m[10][a+2]=102;
                m[10][a+3]=103;
                m[10][a+4]=0;
                m[10][a+5]=104;
                m[10][a+6]=105;
            }
            if(!e)//星星 
            {
                m[1][a]=201+rand()%6;
            }
            a+=c;
        }
    }
    else if(level==2)
    {
        while(a<=100030)
        {
            int b=rand()%10+1,c=rand()%5+3,h=rand()%5,f=rand()%10,d=rand()%50,e=rand()%30;
            for(register int j=a;j<=a+c;j++)
            {
                for(int i=1;i<=10;i++)
                    m[i][j]=0;
                m[0][j]=1;
                if(!h)//地面二层 
                    for(register int i=6;i<=6;i++)
                    {
                        if(b==3||b==2||b==1)m[i][j]=11;
                        else if(b==4||b==5||b==9)m[i][j]=13;
                        else if(b==10&&c==3)m[i][j]=0;
                        else if(b==6||b==7||b==8||b==10)m[i][j]=1;
                    }
                if(!f)//地面三层 
                    for(register int i=3;i<=3;i++)
                        {
                            if(b==3||b==2||b==1)m[i][j]=11;
                            else if(b==4||b==5||b==9)m[i][j]=13;
                            else if(b==10&&c==3)m[i][j]=0;
                            else if(b==6||b==7||b==8||b==10)m[i][j]=1;
                        }
                for(register int i=9;i<=10;i++)//地面一层 
                {
                    if(b==3||b==2||b==1)m[i][j]=11;
                    else if(b==4||b==5||b==9)m[i][j]=13;
                    else if(b==10&&c==3)m[i][j]=0;
                    else if(b==6||b==7||b==8||b==10)m[i][j]=1;
                }
                int w=rand()%50;
                if(!w)//墙
                {
                    for(int i=1;i<=10;i++)
                        m[i][j]=1;
                    int en1=rand()%7+1,en2=rand()%7+1,en3=rand()%7+1;
                    m[en1][j]=m[en2][j]=m[en1][j+1]=m[en2][j+1]=m[en3][j]=m[en3][j+1]=0;
                } 
            }
            if(c==7&&!d)//by Crab  Dave
            {
                m[10][a]=101;
                m[10][a+1]=0;
                m[10][a+2]=102;
                m[10][a+3]=103;
                m[10][a+4]=0;
                m[10][a+5]=104;
                m[10][a+6]=105;
            }
            if(!e)//星星
            {
                m[1][a]=201+rand()%6;
            }
            a+=c;
        }
    }
    else if(level==3)
    {
        while(a<=100030)
        {
            int b=rand()%10+1,c=rand()%5+3,h=rand()%5,f=rand()%10,d=rand()%50,e=rand()%30;
            for(register int j=a;j<=a+c;j++)
            {
                for(int i=1;i<=10;i++)
                    m[i][j]=0;
                m[0][j]=1;
                if(!h)//地面二层 
                    for(register int i=6;i<=6;i++)
                    {
                        if(b==3||b==2||b==1)m[i][j]=11;
                        else if(b==4||b==5||b==9)m[i][j]=13;
                        else if(b==6||b==7)m[i][j]=10;
                        else if(b==10&&c==3)m[i][j]=0;
                        else if(b==8||b==10)m[i][j]=1;
                    }
                if(!f)//地面三层 
                    for(register int i=3;i<=3;i++)
                        {
                            if(b==3||b==2||b==1)m[i][j]=11;
                            else if(b==4||b==5||b==9)m[i][j]=13;
                            else if(b==6||b==7)m[i][j]=10;
                            else if(b==10&&c==3)m[i][j]=0;
                            else if(b==8||b==10)m[i][j]=1;
                        }
                for(register int i=9;i<=10;i++)//地面一层 
                {
                    if(b==3||b==2||b==1)m[i][j]=11;
                    else if(b==4||b==5||b==9)m[i][j]=13;
                    else if(b==6||b==7)m[i][j]=10;
                    else if(b==10&&c==3)m[i][j]=0;
                    else if(b==8||b==10)m[i][j]=1;
                }
                int w=rand()%40;
                if(!w)//墙
                {
                    for(int i=1;i<=10;i++)
                        m[i][j]=1;
                    int en1=rand()%7+1,en2=rand()%7+1,en3=rand()%7+1;
                    m[en1][j]=m[en2][j]=m[en1][j+1]=m[en2][j+1]=m[en3][j]=m[en3][j+1]=0;
                } 
            }
            if(c==7&&!d)//by Crab  Dave
            {
                m[10][a]=101;
                m[10][a+1]=0;
                m[10][a+2]=102;
                m[10][a+3]=103;
                m[10][a+4]=0;
                m[10][a+5]=104;
                m[10][a+6]=105;
            }
            if(!e)//星星
            {
                m[1][a]=201+rand()%6;
            }
            a+=c;
        }
    }
    else if(level==4)
    {
        while(a<=100030)
        {
            int b=rand()%10+1,c=rand()%5+3,h=rand()%5,f=rand()%10,d=rand()%50,e=rand()%30;
            for(register int j=a;j<=a+c;j++)
            {
                for(int i=1;i<=10;i++)
                    m[i][j]=0;
                m[0][j]=1;
                if(!h)//地面二层 
                    for(register int i=6;i<=6;i++)
                    {
                        if(b==3||b==2||b==1)m[i][j]=11;
                        else if(b==4||b==5||b==9)m[i][j]=13;
                        else if(b==6||b==7)m[i][j]=10;
                        else if(b==10&&c==3)m[i][j]=0;
                        else if(b==8||b==10)m[i][j]=1;
                    }
                if(!f)//地面三层 
                    for(register int i=3;i<=3;i++)
                        {
                            if(b==3||b==2||b==1)m[i][j]=11;
                            else if(b==4||b==5||b==9)m[i][j]=13;
                            else if(b==6||b==7)m[i][j]=10;
                            else if(b==10&&c==3)m[i][j]=0;
                            else if(b==8||b==10)m[i][j]=1;
                        }
                for(register int i=9;i<=10;i++)//地面一层 
                {
                    if(b==3||b==2||b==1)m[i][j]=11;
                    else if(b==4||b==5||b==9)m[i][j]=13;
                    else if(b==6||b==7)m[i][j]=10;
                    else if(b==10&&c==3)m[i][j]=0;
                    else if(b==8||b==10)m[i][j]=1;
                }
                int w=rand()%30;
                if(!w)//墙
                {
                    for(int i=1;i<=10;i++)
                        m[i][j]=1;
                    int en1=rand()%7+1,en2=rand()%7+1,en3=rand()%7+1;
                    m[en1][j]=m[en2][j]=m[en1][j+1]=m[en2][j+1]=m[en3][j]=m[en3][j+1]=0;
                } 
            }
            if(c==7&&!d)//by Crab  Dave
            {
                m[10][a]=101;
                m[10][a+1]=0;
                m[10][a+2]=102;
                m[10][a+3]=103;
                m[10][a+4]=0;
                m[10][a+5]=104;
                m[10][a+6]=105;
            }
            if(!e)//星星
            {
                m[1][a]=204+rand()%3;
            }
            a+=c;
        }
    }
    m[8][21]=rand()%7+201;
//  m[8][21]=203;m[8][122]=203;m[8][223]=203;m[8][324]=203;m[8][425]=203;m[8][526]=203;m[8][627]=203;m[8][728]=203;m[8][829]=203;m[8][930]=203;
}

void FuHuo()
{
    speed=1,jump=0,yan=11,t=0,x=1,cnt=0,my=4,th=0,yq=0,aj=0,cz=0,xx=0,ww=0,win=0;
    y+=2;
    int a=score/100+1;
    y=score+1;
    while(score)
    {
        Go(2,0);
        for(register int i=1;i<=a;i++)
            if(y>1) y--;
        for(register int i=1;i<=a;i++)
            if(score) score--;
        for(register int i=1;i<=10;i++)
            {
                for(register int j=score;j<score+20;j++)
                    Print(i,j);
                printf("\n");
            }
        Go(0,0);color(15);
        printf("Score %d            ",score);
        color(15);
    }
    New(score+20);
    Sleep(1000);
    Go(0,0);color(yan);
    printf("Score       ");
    Go(1,0);color(yan);
    printf("Highest Score       ");
    color(15);
    int b=rand()%10;
    if(!b)
    {
        Go(x+2,(y-score)*2);
        Display("隐藏特效：吸星大法！",100,5);
        Sleep(300);
        Go(x+2,(y-score)*2);
        printf("               ");
        xx=1;
    }
}

void Start()
{
    Go(2,0);
    for(register int i=1;i<=10;i++)
    {
        for(register int j=score;j<score+20;j++)
            Print(i,j);
        printf("\n");
    }
    Sleep(400);
    Go(1,4);
    Display("欢迎来到多彩逗比v1.0ヽ(￣▽￣)↗",125,5);
    Sleep(300);
    Go(2,4);
    Display("这里是教程关卡，是否跳过Y/N",100,0);
    Sleep(100);
    char g=_getch();
    if(g=='Y'||g=='y')return;

    system("cls");
    Go(0,0);
    Display("1.白色块■：万能块，随便走\n",25,0);
    Sleep(150);
    Display("2.彩色块■：踩在不同色块上无法前进，跳起来或变色是不错的选择\n",25,5);
    Sleep(150);
    Display("3.宝箱块★：打开有惊喜！\n",25,1);
    Sleep(150);
    Display("4.“↑”键跳跃，越跑越能跳~\n",25,5);
    Sleep(150);
    Display("5.“↓”键变色，咦我怎么变色了？！\n",25,5);
    Sleep(150);
    Display("6.Space键暂停，Enter键回主页！\n",25,5);
    Sleep(150);
    Display("7.1000分后进入无尽模式！\n",25,5);
    Sleep(150);
    Display("\n－＝≡ヘ(  ·ω·)ノ准备好了吗，出发！\n",50,5);
    Sleep(150);
    system("color 08");
    system("color 19");
    system("color 2A");
    system("color 3B");
    system("color 4C");
    system("color 5E");
    system("color 6F");
    system("color 0F");
    system("color 08");
    system("color 19");
    system("color 2A");
    system("color 3B");
    system("color 4C");
    system("color 5E");
    system("color 6F");
    system("color 0F");
    system("color 08");
    system("color 19");
    system("color 2A");
    system("color 3B");
    system("color 4C");
    system("color 5E");
    system("color 6F");
    system("color 0F");

    system("cls");
}

int main()
{
    srand(unsigned(time(NULL)));
    ios::sync_with_stdio(false);
    CONSOLE_CURSOR_INFO cursor_info={1,0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
    system("mode con cols=41 lines=13");
    for(register int i=1;i<=15;i++) color(i),printf("■");
    system("cls");
    Start();

    x: 
    system("cls");
    printf("请选择模式：\n");
    color(7);
    printf("┏━━━━┓  ┏━━━━┓  ╔═╗\n");
    printf("┃一般模式┃  ┃正常模式┃  ║作║\n");
    printf("┗━━━━┛  ┗━━━━┛  ║者║\n");
    printf("┏━━━━┓  ┏━━━━┓  ║博║\n");
    printf("┃困难模式┃  ┃地狱模式┃  ║客║\n");
    printf("┗━━━━┛  ┗━━━━┛  ╚═╝\n");
    printf("┏━━━━━━━━━━━━━━━┓\n");
    printf("┃更多模式即将出品  (o゜▽゜)o☆┃\n");
    printf("┗━━━━━━━━━━━━━━━┛\n");
    while(1)
    {
        Sleep(10);
        mouse=GetAsyncKeyState(VK_LBUTTON)&0x8000;
        POINT pt=Windowpos();
        if(pt.x>=28&&pt.x<=33&&pt.y>=1&&pt.y<=6)
        {
            color(14);
            Go(1,28);
            printf("╔═╗");
            Go(2,28);
            printf("║作║");
            Go(3,28);
            printf("║者║");
            Go(4,28);
            printf("║博║");
            Go(5,28);
            printf("║客║");
            Go(6,28);
            printf("╚═╝");
            if(mouse)
            {
                HWND hWnd=FindWindow("ConsoleWindowClass",NULL);
                ShowWindow(hWnd,SW_HIDE);
                system("start https://www.luogu.org/blog/Crab-Dave233/");
                return 0;
            }
        }
        else
        {
            color(10);
            Go(1,28);
            printf("╔═╗");
            Go(2,28);
            printf("║作║");
            Go(3,28);
            printf("║者║");
            Go(4,28);
            printf("║博║");
            Go(5,28);
            printf("║客║");
            Go(6,28);
            printf("╚═╝");
        }
        if(pt.x>=0&&pt.x<=11&&pt.y>=1&&pt.y<=3)
        {
            if(Pass[1])color(14);
            else color(15);
            Go(1,0);
            printf("┏━━━━┓");
            Go(2,0);
            printf("┃一般模式┃");
            Go(3,0);
            printf("┗━━━━┛");
            if(mouse)
            {
                level=1;
                system("color 18");
                system("color 29"); 
                system("color 3A");
                system("color 4B");
                system("color 5C");
                system("color 6E");
                system("color 7F");
                system("color 0F");
                break;
            }
        }
        else
        {
            if(Pass[1])color(2);
            else color(7);
            Go(1,0);
            printf("┏━━━━┓");
            Go(2,0);
            printf("┃一般模式┃");
            Go(3,0);
            printf("┗━━━━┛");
        }
        if(pt.x>=14&&pt.x<=25&&pt.y>=1&&pt.y<=3)
        {
            if(Pass[2])color(14);
            else color(15);
            Go(1,14);
            printf("┏━━━━┓");
            Go(2,14);
            printf("┃正常模式┃");
            Go(3,14);
            printf("┗━━━━┛");
            if(mouse)
            {
                level=2;
                system("color 18");
                system("color 29"); 
                system("color 3A");
                system("color 4B");
                system("color 5C");
                system("color 6E");
                system("color 7F");
                system("color 0F");
                break;
            }
        }
        else
        {
            if(Pass[2])color(2);
            else color(7);
            Go(1,14);
            printf("┏━━━━┓");
            Go(2,14);
            printf("┃正常模式┃");
            Go(3,14);
            printf("┗━━━━┛");
        }
        if(pt.x>=0&&pt.x<=11&&pt.y>=4&&pt.y<=6)
        {
            if(Pass[3])color(14);
            else color(15);
            Go(4,0);
            printf("┏━━━━┓");
            Go(5,0);
            printf("┃困难模式┃");
            Go(6,0);
            printf("┗━━━━┛");
            if(mouse)
            {
                level=3;
                system("color 18");
                system("color 29"); 
                system("color 3A");
                system("color 4B");
                system("color 5C");
                system("color 6E");
                system("color 7F");
                system("color 0F");
                break;
            }
        }
        else
        {
            if(Pass[3])color(2);
            else color(7);
            Go(4,0);
            printf("┏━━━━┓");
            Go(5,0);
            printf("┃困难模式┃");
            Go(6,0);
            printf("┗━━━━┛");
        }
        if(pt.x>=14&&pt.x<=25&&pt.y>=4&&pt.y<=6)
        {
            if(Pass[4])color(14);
            else color(15);
            Go(4,14);
            printf("┏━━━━┓");
            Go(5,14);
            printf("┃地狱模式┃");
            Go(6,14);
            printf("┗━━━━┛");
            if(mouse)
            {
                level=4;
                system("color 18");
                system("color 29"); 
                system("color 3A");
                system("color 4B");
                system("color 5C");
                system("color 6E");
                system("color 7F");
                system("color 0F");
                break;
            }
        }
        else
        {
            if(Pass[4])color(2);
            else color(7);
            Go(4,14);
            printf("┏━━━━┓");
            Go(5,14);
            printf("┃地狱模式┃");
            Go(6,14);
            printf("┗━━━━┛");
        }
    }

    system("cls");
    Go(0,0);color(yan);
    printf("Score       ");
    Go(1,0);color(yan);
    printf("Highest Score       ");
    color(15);
    New(score+20);
    int b=rand()%10;
    if(!b)
    {
        Go(x+2,(y-score)*2);
        Display("隐藏特效：吸星大法！",100,5);
        Sleep(300);
        Go(x+2,(y-score)*2);
        printf("               ");
        xx=1;
    }
    while(1)
    {
        if(t==(42-speed)*450000)
        {
            if(score>=1000&&win==0)
            {
                Go(5,15);
                printf("You Win!");
                system("color 0E");
                Sleep(2000);
                system("color 0F");
                win=1;
                Go(5,10);
                Display("现在开启无尽模式",75,5);
                Pass[level]=1;
                Sleep(300);
            }
            if(x<0||x>9||y<score)
            {
                Go(5,15);
                system("color 7F");
                color(0x7c);
                printf("You Die!");
                Sleep(2000);
                system("color 0F");
                FuHuo();
            }
            if(m[x+1][y]!=0) cnt=0;
            if(xx)
                for(register int i=1;i<=10;i++)
                    for(register int j=score;j<score+20;j++)
                        if(m[i][j]>200&&x!=i)
                            m[x][j]=m[i][j],m[i][j]=0;
            if(m[x][y+1]>=201)
            {
                if(m[x][y+1]==201)
                {
                    Go(x,(y-score)*2+4);
                    color(14);
                    printf("突进！");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("      ");
                    m[x][y+1]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    my+=3;
                    if(my>=20) my=19;
                }
                else if(m[x][y+1]==202)
                {
                    Go(x,(y-score)*2+4);
                    color(14);
                    printf("同化！");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("      ");
                    m[x][y+1]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    th+=100;
                }
                else if(m[x][y+1]==203)
                {
                    Go(x,(y-score)*2+4);
                    color(14);
                    printf("正向跃迁！");
                    color(15);
                    Sleep(500);
                    Go(x,(y-score)*2+4);
                    printf("          ");
                    m[x][y+1]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    score+=100;
                    y+=100;
                    m[9][y]=1;
                    m[9][y+1]=1;
                    m[9][y+2]=1;
                    m[9][y+3]=1;
                    m[9][y+4]=1;
                    yq=1;
                }
                else if(m[x][y+1]==204)
                {
                    Go(x,(y-score)*2+4);
                    color(12);
                    printf("反向跃迁···");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("              ");
                    m[x][y+1]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    score-=100;
                    if(score<=0)score=0; 
                    y-=100;
                    if(y<=0)y=0;
                    m[9][y]=1;
                    m[9][y+1]=1;
                    m[9][y+2]=1;
                    m[9][y+3]=1;
                    m[9][y+4]=1;
                    yq=1;
                }
                else if(m[x][y+1]==205)
                {
                    Go(x,(y-score)*2+4);
                    if(aj)
                    {
                        color(14);
                        printf("按键正常！");
                        color(15);
                    }
                    else
                    {
                        color(12);
                        printf("按键紊乱···");
                        color(15);
                    }
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("              ");
                    m[x][y+1]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    aj=!aj;
                }
                else if(m[x][y+1]==206)
                {
                    Go(x,(y-score)*2+4);
                    color(12);
                    printf("超重···");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("          ");
                    m[x][y+1]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    cz=100;
                }
                else if(m[x][y+1]==207)
                {
                    Go(x,(y-score)*2+4);
                    color(14);
                    printf("无畏！");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("      ");
                    m[x][y+1]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    ww=101;
                }
            }
            if(m[x+1][y]>=201)
            {
                if(m[x+1][y]==201)
                {
                    Go(x,(y-score)*2+4);
                    color(14);
                    printf("突进！");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("      ");
                    m[x+1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    my+=3;
                    if(my>=20) my=19;
                }
                else if(m[x+1][y]==202)
                {
                    Go(x,(y-score)*2+4);
                    color(14);
                    printf("同化！");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("      ");
                    m[x+1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    th+=100;
                }
                else if(m[x+1][y]==203)
                {
                    Go(x,(y-score)*2+4);
                    color(14);
                    printf("正向跃迁！");
                    color(15);
                    Sleep(500);
                    Go(x,(y-score)*2+4);
                    printf("          ");
                    m[x+1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    score+=100;
                    y+=100;
                    m[9][y]=1;
                    m[9][y+1]=1;
                    m[9][y+2]=1;
                    m[9][y+3]=1;
                    m[9][y+4]=1;
                    yq=1;
                }
                else if(m[x+1][y]==204)
                {
                    Go(x,(y-score)*2+4);
                    color(12);
                    printf("反向跃迁···");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("              ");
                    m[x+1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    score-=100;
                    if(score<=0)score=0; 
                    y-=100;
                    if(y<=0)y=0;
                    m[9][y]=1;
                    m[9][y+1]=1;
                    m[9][y+2]=1;
                    m[9][y+3]=1;
                    m[9][y+4]=1;
                    yq=1;
                }
                else if(m[x+1][y]==205)
                {
                    Go(x,(y-score)*2+4);
                    if(aj)
                    {
                        color(14);
                        printf("按键正常！");
                        color(15);
                    }
                    else
                    {
                        color(12);
                        printf("按键紊乱···");
                        color(15);
                    }
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("              ");
                    m[x+1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    aj=!aj;
                }
                else if(m[x+1][y]==206)
                {
                    Go(x,(y-score)*2+4);
                    color(12);
                    printf("超重···");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("          ");
                    m[x+1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    cz=100;
                }
                else if(m[x+1][y]==207)
                {
                    Go(x,(y-score)*2+4);
                    color(14);
                    printf("无畏！");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("      ");
                    m[x+1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    ww=101;
                }
            }
            if(m[x-1][y]>=201)
            {
                if(m[x-1][y]==201)
                {
                    Go(x,(y-score)*2+4);
                    color(14);
                    printf("突进！");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("      ");
                    m[x-1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    my+=3;
                    if(my>=20) my=19;
                }
                else if(m[x-1][y]==202)
                {
                    Go(x,(y-score)*2+4);
                    color(14);
                    printf("同化！");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("      ");
                    m[x-1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    th+=100;
                }
                else if(m[x-1][y]==203)
                {
                    Go(x,(y-score)*2+4);
                    color(14);
                    printf("正向跃迁！");
                    color(15);
                    Sleep(500);
                    Go(x,(y-score)*2+4);
                    printf("          ");
                    m[x-1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    score+=100;
                    y+=100;
                    m[9][y]=1;
                    m[9][y+1]=1;
                    m[9][y+2]=1;
                    m[9][y+3]=1;
                    m[9][y+4]=1;
                    yq=1;
                }
                else if(m[x-1][y]==204)
                {
                    Go(x,(y-score)*2+4);
                    color(12);
                    printf("反向跃迁···");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("              ");
                    m[x-1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    score-=100;
                    if(score<=0)score=0; 
                    y-=100;
                    if(y<=0)y=0;
                    m[9][y]=1;
                    m[9][y+1]=1;
                    m[9][y+2]=1;
                    m[9][y+3]=1;
                    m[9][y+4]=1;
                    yq=1;
                }
                else if(m[x-1][y]==205)
                {
                    Go(x,(y-score)*2+4);
                    if(aj)
                    {
                        color(14);
                        printf("按键正常！");
                        color(15);
                    }
                    else
                    {
                        color(12);
                        printf("按键紊乱···");
                        color(15);
                    }
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("              ");
                    m[x-1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    aj=!aj;
                }
                else if(m[x-1][y]==206)
                {
                    Go(x,(y-score)*2+4);
                    color(12);
                    printf("超重···");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("          ");
                    m[x-1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    cz=100;
                }
                else if(m[x-1][y]==207)
                {
                    Go(x,(y-score)*2+4);
                    color(14);
                    printf("无畏！");
                    color(15);
                    Sleep(1000);
                    Go(x,(y-score)*2+4);
                    printf("      ");
                    m[x-1][y]=0;
                    system("color 18");
                    system("color 29"); 
                    system("color 3A");
                    system("color 4B");
                    system("color 5C");
                    system("color 6E");
                    system("color 7F");
                    system("color 0F");
                    ww=101;
                }
            }
            if(th>0)
            {
                for(register int i=1;i<=10;i++)
                    if((m[i][y]>=1&&m[i][y]<=15)&&m[i][y]!=yan) m[i][y]=yan;
                th--;
            }
            if(cz>0)
            {
                if(cz%2==0)
                    if(m[x+1][y+1]!=0)m[x+2][y]=m[x+1][y],m[x+1][y]=0,x++;
                cz--;
            }
            ww--;
            if(((m[x+1][y]==yan||m[x+1][y]==1||m[x+1][y]==0)&&m[x][y+1]==0)||ww>0||(m[x][y+1]>100&&m[x][y+1]<200))y++;
            if(((m[x+1][y]==yan||m[x+1][y]==1||m[x+1][y]==0)&&m[x][y+1]==0&&y<score+my))y++;
            if(jump>0)
            {
                if((m[x-1][y]==0||(m[x-1][y]>=101&&m[x-1][y]<=109))||(ww>0&&x>1)) x--,jump--;
                else jump--;
            }
            if(jump==0&&(m[x+1][y]==0||(m[x+1][y]>=101&&m[x+1][y]<=109)))x++;
            Go(2,0);
            for(register int i=1;i<=10;i++)
            {
                for(register int j=score;j<score+20;j++)
                    Print(i,j);
                printf("\n");
            }
            score++;
            if(speed<41&&score>=speed*50)speed++;
            Go(0,0);color(yan);printf("Score %d          ",score);color(15);
            Go(1,0);color(yan);printf("Highest Score %d        ",hscore=max(score,hscore));color(15);
            if(yq) Sleep(1000),yq=0;
            t=0;
            if(_kbhit())
            {
                char g=_getch(); 
                if(g==' ')Go(x,(y-score)*2),color(yan),system("pause"),Go(x,(y-score)*2),color(15),printf("                     ");
                if(aj)
                {
                    int a=rand()%10;
                    if(!a)
                    {
                        if(g==72)g=80;
                        else if(g==80)g=72;
                    }
                }
                if(g==72)if(jump==0&&cnt<score/500+2)x--,jump=4,cnt++;
                if(g==80)
                {
                    if(level==1||level==2)
                    {
                        if(yan==11)yan=13;
                        else if(yan==13)yan=11;
                    }
                    if(level==3||level==4)
                    {
                        if(yan==10)yan=11;
                        else if(yan==11)yan=13;
                        else if(yan==13)yan=10;
                    }
                }
                if(g==13)
                {
                    score=0,speed=1,jump=0,yan=11,t=0,x=1,y=1,cnt=0,my=4,th=0,yq=0,aj=0,cz=0,xx=0,hscore=0,ww=0,win=0;
                    goto x;
                }
            }
        }
        t++;
    }
    return 0;
}
