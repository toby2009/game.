#include<windows.h>
#include<conio.h>
#include<bits/stdc++.h>
#define all 10
#define da 13
using namespace std;
HANDLE h1=GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE h2=GetStdHandle(STD_INPUT_HANDLE);
HWND h3=FindWindow("ConsoleWindowClass",NULL);
COORD crd;
POINT pt;
INPUT_RECORD in;
DWORD dw;
int now,shop;
int guai[50][4];
int m,n; 
void n_w()
{
    int s=50;
    s++;guai[s][0]=18;guai[s][1]=1;guai[s][2]=35;guai[s][3]=1;
    s++;guai[s][0]=20;guai[s][1]=2;guai[s][2]=45;guai[s][3]=2;
    s++;guai[s][0]=38;guai[s][1]=3;guai[s][2]=35;guai[s][3]=3;
    s++;guai[s][0]=32;guai[s][1]=8;guai[s][2]=60;guai[s][3]=5;
    s++;guai[s][0]=42;guai[s][1]=6;guai[s][2]=50;guai[s][3]=6;
    s++;guai[s][0]=52;guai[s][1]=12;guai[s][2]=55;guai[s][3]=8;
    s++;guai[s][0]=48;guai[s][1]=22;guai[s][2]=50;guai[s][3]=12;
    s++;guai[s][0]=65;guai[s][1]=15;guai[s][2]=100;guai[s][3]=30;
    s++;guai[s][0]=60;guai[s][1]=3;guai[s][2]=130;guai[s][3]=8;
    s++;guai[s][0]=100;guai[s][1]=8;guai[s][2]=60;guai[s][3]=12;
    s++;guai[s][0]=85;guai[s][1]=5;guai[s][2]=260;guai[s][3]=18;
    s++;guai[s][0]=95;guai[s][1]=30;guai[s][2]=100;guai[s][3]=22;
    s++;guai[s][0]=120;guai[s][1]=15;guai[s][2]=320;guai[s][3]=30;
    s++;guai[s][0]=100;guai[s][1]=68;guai[s][2]=20;guai[s][3]=28;
    s++;guai[s][0]=140;guai[s][1]=20;guai[s][2]=320;guai[s][3]=30;
    s++;guai[s][0]=199;guai[s][1]=66;guai[s][2]=444;guai[s][3]=144;
//  s++;guai[s][0]=;guai[s][1]=;guai[s][2]=;guai[s][3]=;
}
void color(int a)
{
    switch (a)
    {
        case 0:
        SetConsoleTextAttribute(h1,0|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
        break;
        case 1:
        SetConsoleTextAttribute(h1,0|FOREGROUND_RED|FOREGROUND_INTENSITY);
        break;
        case 2:
        SetConsoleTextAttribute(h1,0|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
        break;
        case 3:
        SetConsoleTextAttribute(h1,0|FOREGROUND_RED|FOREGROUND_INTENSITY);
        break;
        case 4:
        SetConsoleTextAttribute(h1,0|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
        break;
        case 5:
        SetConsoleTextAttribute(h1,0|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
        break;
        case 6:
        SetConsoleTextAttribute(h1,0|FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY);
        break;
        case 7:
        SetConsoleTextAttribute(h1,BACKGROUND_RED|BACKGROUND_BLUE|BACKGROUND_INTENSITY|0);
        break;
        case 8:
        SetConsoleTextAttribute(h1,0|FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
        break;
        case 9:
        SetConsoleTextAttribute(h1,0|FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_GREEN);
        break;
    }
}

void move(int a,int b)
{
    crd.X=a*2;
    crd.Y=b;
    SetConsoleCursorPosition(h1,crd);
}
void win()
{
    system("cls");
    move(5,10);
    printf("Ê¤Àû");
    Sleep(10000);
    exit(0);
}
void lose()
{
    system("cls");
    move(5,10);
    printf("ÄãËÀÁË");
    move(3,11);
    printf("ÇëÖØÐÂÏÂÔØ´æµµ");
    Sleep(10000);
    exit(0);
}
struct dt
{
    int d[da+1][da+1];
    dt()
    {
        for(int i=0;i<da;i++)
        for(int j=0;j<da;j++)
        d[i][j]=0;
        for(int i=0;i<da;i++)
        d[i][0]=d[i][da-1]=1;
        for(int i=0;i<da;i++)
        d[0][i]=d[da-1][i]=1;
    };
    int g[30][5];
    int mn;
    int bx,by;
    int sx,sy;
}d[60];
struct play
{
    int att;
    int def;
    int hp;
    int mon;
    int key1;
    int key2;
    int key3;
    int x;
    int y;
    play()
    {att=5;def=0;hp=50;mon=0;key1=0;key2=0;key3=0;x=1;y=8;};

}p;
struct sv
{
    ~sv()
    {
    FILE* fp=fopen("´æµµ.txt","w");
    fprintf(fp,"%d %d %d %d %d %d %d %d %d %d %d\n",p.att,p.def,p.hp,p.mon,p.key1,p.key2,p.key3,p.x,p.y,now,shop);
    for(int t=1;t<=all;t++)
    {
        for(int i=0;i<da;i++,fprintf(fp,"\n"))
        for(int j=0;j<da;j++)
        fprintf(fp,"%2d ",d[t].d[j][i]);
        fprintf(fp,"%d %d\n",d[t].bx,d[t].by);
        fprintf(fp,"%d %d\n",d[t].sx,d[t].sy);
        fprintf(fp,"%d\n",d[t].mn);
        for(int i=0;i<d[t].mn;i++)
        fprintf(fp,"%d %d\n",d[t].g[i][4],d[t].g[i][2]);
        fprintf(fp,"\n\n\n\n");
    }
    fclose(fp);
    };
}sttt;
struct gw
{
    int att;
    int def;
    int hp;
    int mon;
};
void R()
{
    FILE* fp=fopen("´æµµ.txt","r");
    fscanf(fp,"%d%d%d%d%d%d%d%d%d%d%d",&p.att,&p.def,&p.hp,&p.mon,&p.key1,&p.key2,&p.key3,&p.x,&p.y,&now,&shop);
    for(int t=1;t<=all;t++)
    {   
        for(int i=0;i<da;i++)
        for(int j=0;j<da;j++)
        fscanf(fp,"%d",&d[t].d[j][i]);
        fscanf(fp,"%d%d",&d[t].bx,&d[t].by);
        fscanf(fp,"%d%d",&d[t].sx,&d[t].sy);
        fscanf(fp,"%d",&d[t].mn);
        for(int i=0;i<d[t].mn;i++)
        {
            int ls;
            fscanf(fp,"%d",&ls);
            d[t].g[i][0]=guai[ls][0];
            d[t].g[i][1]=guai[ls][1];
            d[t].g[i][2]=guai[ls][2];
            d[t].g[i][3]=guai[ls][3];
            d[t].g[i][4]=ls;
            fscanf(fp,"%d",&d[t].g[i][2]);
        }
    }
    fclose(fp);
}
void shangdian()
{
    color(0);
    move(0,da+1);
    for(int i=0;i<da*20;i++)
    printf("  ");
    move(da/3+1,da+1);
    printf(" +2¹¥");
    move(da/3+1,da+3);
    printf(" +2·À");
    move(da/3+1,da+5);
    printf("+200Ñª");
    move(da/3+1,da+7);
    printf(" ·µ»Ø");
    while(1)
    {
        GetCursorPos(&pt);
        ScreenToClient(h3,&pt); 
        int x,y;
        x=pt.x/16;
        y=pt.y/16;
        if (x<da/3+1||x>da/3+1+3)
        {
            color(0);
            move(da/3+1,da+1);
            printf(" +2¹¥");
            move(da/3+1,da+3);
            printf(" +2·À");
            move(da/3+1,da+5);
            printf("+200Ñª");
            move(da/3+1,da+7);
            printf(" ·µ»Ø");
        }
        else 
        if (y==da+1)
        {
            color(1);
            move(da/3+1,da+1);
            printf(" +2¹¥");
        }
        else if (y==da+3)
        {
            color(1);
            move(da/3+1,da+3);
            printf(" +2·À");
        }
        else if (y==da+5)
        {
            color(1);
            move(da/3+1,da+5);
            printf("+200Ñª");
        }
        else if (y==da+7)
        {
            color(1);
            move(da/3+1,da+7);
            printf(" ·µ»Ø");
        }
        else
        {
            color(0);
            move(da/3+1,da+1);
            printf(" +2¹¥");
            move(da/3+1,da+3);
            printf(" +2·À");
            move(da/3+1,da+5);
            printf("+200Ñª");
            move(da/3+1,da+7);
            printf(" ·µ»Ø");
        }
        ReadConsoleInput(h2,&in,1,&dw);
        if (in.EventType==MOUSE_EVENT && in.Event.MouseEvent.dwButtonState==FROM_LEFT_1ST_BUTTON_PRESSED)
        {
            if (y==da+1&&p.mon>=shop)
            {
                p.mon-=shop;
                p.att+=2;
                shop*=2;
                return;
            } 
            if (y==da+3&&p.mon>=shop)
            {
                p.mon-=shop;
                p.def+=2;
                shop*=2;
                return;
            } 
            if (y==da+5&&p.mon>=shop)
            {
                p.mon-=shop;
                p.hp+=200;
                shop*=2;
                return;
            } 
            if (y==da+7)
            {
                return;
            } 
        }
    }
}
void prin3(int aaa,int bbb)
{
    if (bbb==1)
    {
    switch (aaa)
    {
        case 51:
            color(1);
            printf("Ê·");
            break;
        case 52:
            color(1);
            printf("Ê·");
            break;
        case 53:
            color(1);
            printf("òù");
            break;
        case 54:
            color(1);
            printf("·¨");
            break;
        case 55:
            color(1);
            printf("÷¼");
            break;
        case 56:
            color(1);
            printf("÷¼");
            break;
        case 57:
            color(1);
            printf("ÎÀ");
            break;
        case 58:
            color(1);
            printf("÷¼");
            break;
        case 59:
            color(1);
            printf("Ê·");
            break;
        case 60:
            color(1);
            printf("òù");
            break;
        case 61:
            color(1);
            printf("ÊÞ");
            break;
    }
    Sleep(70);
    printf("\b\b");
    };

    switch (aaa)
    {
        case 51:
            color(0);
            printf("Ê·");
            break;
        case 52:
            color(5);
            printf("Ê·");
            break;
        case 53:
            color(0);
            printf("òù");
            break;
        case 54:
            color(0);
            printf("·¨");
            break;
        case 55:
            color(0);
            printf("÷¼");
            break;
        case 56:
            color(5);
            printf("÷¼");
            break;
        case 57:
            color(0);
            printf("ÎÀ");
            break;
        case 58:
            color(8);
            printf("÷¼");
            break;
        case 59:
            color(8);
            printf("Ê·");
            break;
        case 60:
            color(5);
            printf("òù");
            break;
        case 61:
            color(0);
            printf("ÊÞ");
            break;
    }
} 
void prin()
{

    move(0,0);
    for(int i=0;i<da;i++)
    {
        for(int j=0;j<da;j++)
        {
            switch (d[now].d[j][i])
            {
                case 0:
                    color(0);
                    printf("  ");
                    break;
                case 1:
                    color(0);
                    printf("¡ö");
                    break;
                case 2:
                    color(6);
                    printf("¡á");
                    break;
                case 3:
                    color(4);   
                    printf("¡á");
                    break;
                case 4:
                    color(3);
                    printf("¡á");
                    break;
                case 5:
                    color(3);
                    printf("¡ò");
                    break;
                case 6:
                    color(4);
                    printf("¡ò");
                    break;
                case 7:
                    color(1);
                    printf("¡è");
                    break;
                case 8:
                    color(2);
                    printf("¡è");
                    break;
                case 9:
                    color(0);
                    printf("¨Ž");
                    break;
                case 10:
                    color(0);
                    printf("¨");
                    break;
                case 11:
                    color(0);
                    printf("¡ï");
                    break;
                case 12:
                    color(0);
                    printf("¡ï");
                    break;
                case 31:
                    color(6);
                    printf("¡ö");
                    break;
                case 32:
                    color(4);
                    printf("¡ö");
                    break;
                case 33:
                    color(3);
                    printf("¡ö");
                    break;
                case 34:
                     color(0);
                     printf("¨ˆ");
                     break;
                case 35:
                    color(9);
                    printf("¡ö");
                    break;
                case 40:
                    color(7);
                    printf("ÉÌ--µê");
                    j+=2;
                    break;
        } 
        if (d[now].d[j][i]>80) 
        prin3(d[now].g[d[now].d[j][i]-81][4],0);
    }
        printf("\n");

    }
    move(0,0);
}
void mianban()
{
    color(0); 
    move(0,da+1);
    printf("¹¥»÷£º%d   ",p.att);
    move(0,da+2);
    printf("·ÀÓù£º%d   ",p.def);
    move(0,da+3);
    printf("ÑªÁ¿£º%d   ",p.hp);
    move(0,da+4);
    printf("½ð±Ò£º%d   ",p.mon);
    move(da/2,da+1);
    printf("»ÆÔ¿³×%d°Ñ",p.key1);
    move(da/2,da+2);
    printf("À¶Ô¿³×%d°Ñ",p.key2);
    move(da/2,da+3);
    printf("ºìÔ¿³×%d°Ñ",p.key3);
    move(da/2,da+4);
    printf("µ±Ç°µÚ%d²ã",now);
}
void prin2()
{
    color(0);
    move(0,da+6);
    if (m==p.x&&n==p.y)
    {
        printf("ÓÂÕß              \n");
        printf("                    "); 
        return;
    } 
    switch (d[now].d[m][n])
    {
        case 0:
            printf("                  \n");
            printf("                    "); 
            break;
        case 1:
            printf("                  \n");
            printf("                    "); 
            break;
        case 2:
            printf("»ÆÔ¿³×            \n");
            printf("                    "); 
            break;
        case 3:
            printf("À¶Ô¿³×            \n");
            printf("                    "); 
            break;
        case 4:
            printf("ºìÔ¿³×            \n");
            printf("                    "); 
            break;
        case 5:
            printf("ºì±¦Ê¯             \n");
            printf("¹¥»÷+%d               ",now/10+1);
            break;
        case 6:
            printf("À¶±¦Ê¯             \n");
            printf("·ÀÓù+%d              ",now/10+1);
            break;
        case 7:
            printf("ÑªÆ¿               \n");
            printf("ÑªÁ¿+%d           ",(now/10+1)*50); 
            break;
        case 8:
            printf("´óÑªÆ¿             \n");
            printf("ÑªÁ¿+%d            ",(now/10+1)*200); 
            break;  
        case 9:
            printf("Ç°ÍùÉÏÒ»²ã        \n");
            printf("                    "); 
            break;
        case 10:
            printf("Ç°ÍùÏÂÒ»²ã        \n");
            printf("                    "); 
            break;
        case 11:
            printf("ÓÂÊ¿µÄ½£          \n");
            printf("                    "); 
            break;
        case 12:
            printf("ÓÂÊ¿µÄ¶Ü          \n");
            printf("                    "); 
            break;
        case 31:
            printf("»ÆÉ«µÄÃÅ          \n");
            printf("ÐèÒª»ÆÔ¿³×          "); 
            break;
        case 32:
            printf("À¶É«µÄÃÅ          \n");
            printf("ÐèÒªÀ¶Ô¿³×          "); 
            break;
        case 33:
            printf("ºìÉ«µÄÃÅ          \n");
            printf("ÐèÒªºìÔ¿³×          "); 
            break;
        case 34:
            printf("ÊØÎÀÃÅ          \n");
            printf("»÷°ÜÊØÎÀ¿ªÆô      "); 
            break;
        case 40:
            printf("ÉÌµê              \n");
            printf("ÐèÒª%d½ð±Ò          ",shop);
    }
    if (d[now].d[m][n]>80)
    {
        switch (d[now].g[d[now].d[m][n]-81][4])
        {
            case 51:
                color(0);
                printf("Ê·À³Ä·       \n");
                break;
            case 52:
                color(0);
                printf("ÖÐ¼¶Ê·À³Ä·       \n");
                break;
            case 53:
                color(0);
                printf("Ð¡òùòð       \n");
                break;
            case 54:
                color(0);
                printf("³õ¼¶·¨Ê¦       \n");
                break;
            case 55:
                color(0);
                printf("÷¼÷ÃÈË       \n");
                break;
            case 56:
                color(0);
                printf("÷¼÷ÃÊ¿±ø       \n");
                break;
            case 57:
                color(0);
                printf("³õ¼¶ÎÀ±ø       \n");
                break;
            case 58:
                color(0);
                printf("÷¼÷Ã¶Ó³¤   !BOSS!\n");
                break;
            case 59:
                color(0);
                printf("´óÊ·À³Ä·       \n");
                break;
            case 60:
                color(0);
                printf("´óòùòð       \n");
                break;
            case 61:
                color(0);
                printf("ÊÞÈË       \n");
                break;
        }
        printf("¹¥:%d ·À:%d Ñª:%d        ",d[now].g[d[now].d[m][n]-81][0],d[now].g[d[now].d[m][n]-81][1],d[now].g[d[now].d[m][n]-81][2]);
    }
}
void moving()
{
    while(!kbhit())
    {
        GetCursorPos(&pt);
        ScreenToClient(h3,&pt);     
        int x,y;
        m=pt.x/16;
        n=pt.y/16;
        if (m<da&&n<da)
        prin2();
        Sleep(10);
    }
    char weizhi=getch();
    if (weizhi==75) weizhi='a'; 
    if (weizhi==72) weizhi='w'; 
    if (weizhi==77) weizhi='d'; 
    if (weizhi==80) weizhi='s'; 
    move(p.x,p.y);
    printf("  ");   
    int dx=p.x,dy=p.y; 
    switch (weizhi)
    {
        case 'w':
            dy--;
            break;
        case 's':
            dy++;
            break;
        case 'a':
            dx--;
            break;
        case 'd':
            dx++;
            break;
    }
    switch (d[now].d[dx][dy])
    {
        case 1:
            dx=p.x,dy=p.y;
            break;
        case 2:
            d[now].d[dx][dy]=0;
            p.key1++;
            break;
        case 3:
            d[now].d[dx][dy]=0;
            p.key2++;
            break;
        case 4:
            d[now].d[dx][dy]=0;
            p.key3++;
            break;
        case 5:
            d[now].d[dx][dy]=0;
            p.att+=now/10+1;
            break;
        case 6:
            d[now].d[dx][dy]=0;
            p.def+=now/10+1;
            break;
        case 7:
            d[now].d[dx][dy]=0;
            p.hp+=50*(now/10+1);
            break;
        case 8:
            d[now].d[dx][dy]=0;
            p.hp+=200*(now/10+1);
            break;  
        case 9:
            if (now==1)
            break;
            now--;
            move(p.x,p.y);
            printf("  ");
            p.x=d[now].sx;
            p.y=d[now].sy;
            dx=p.x,dy=p.y;
            prin();
            break;
        case 10:
            if (now==all)
            {
                win();
            }
            now++;
            move(p.x,p.y);
            printf("  ");
            p.x=d[now].bx;
            p.y=d[now].by;
            dx=p.x,dy=p.y;
            prin();
            break;
        case 11:
             d[now].d[dx][dy]=0;
             p.att+=5;
             break;
        case 12:
             d[now].d[dx][dy]=0;
             p.def+=5;
             break;
        case 31:
            if (p.key1>0)
            {
                p.key1--;
                d[now].d[dx][dy]=0;
            }
            else
            dx=p.x,dy=p.y;
            break;
        case 32:
            if (p.key2>0)
            {
                p.key2--;
                d[now].d[dx][dy]=0;
            }
            else
            dx=p.x,dy=p.y;
            break;
        case 33:
            if (p.key3>0)
            {
                p.key3--;
                d[now].d[dx][dy]=0;
            }
            else
            dx=p.x,dy=p.y;
            break;
        case 34:
            if (d[now].d[dx-1][dy+1]==0&&d[now].d[dx+1][dy+1]==0)
            d[now].d[dx][dy]=0;
            else
            dx=p.x,dy=p.y;
            break;
        case 40:
            dx=p.x,dy=p.y;
            shangdian();
            move(0,da+1);
            for(int i=0;i<da*20;i++)
            printf("  ");
            break;
    }
    if (d[now].d[dx][dy]>80)
    {
        int pau=p.att-d[now].g[d[now].d[dx][dy]-81][1];
        if (pau<0)
        pau=0;  
        d[now].g[d[now].d[dx][dy]-81][2]-=pau;
        move(dx,dy);
        prin3(d[now].g[d[now].d[dx][dy]-81][4],1);
        if (d[now].g[d[now].d[dx][dy]-81][2]<=0)
        {
            p.mon+=d[now].g[d[now].d[dx][dy]-81][3];
            for(int i=0;i<5;i++)
            d[now].g[d[now].d[dx][dy]-81][i]=0;
            move(dx,dy);
            printf(" ");
            d[now].d[dx][dy]=0;
        }
        pau=d[now].g[d[now].d[dx][dy]-81][0]-p.def;
        if (pau<0)
        pau=0;
        p.hp=p.hp-pau;
        if (p.hp<=0)
        lose();
        dx=p.x,dy=p.y;
    }
    p.x=dx;
    p.y=dy;
    color(2);
    move(p.x,p.y);
    printf("¡ì");
    mianban();

}
void scr()
{
    SMALL_RECT r={0,0,da*2-1,da+8};
    SetConsoleWindowInfo(h1,1,&r);
    EnableScrollBar(h3,SB_BOTH,ESB_DISABLE_BOTH);
}
void gb()
{
    CONSOLE_CURSOR_INFO xxx={1,0};
    SetConsoleCursorInfo(h1,&xxx);
    SetConsoleTitle("Ä§Ëþ");
}
void begin()
{
    color(0);
    n_w();
    R();
    gb();
    scr();
    prin();   
    mianban();
    while(1)
    {
        move(p.x,p.y);
        color(2);
        printf("¡ì");
        moving();
    }
}
int main()
{
    begin();
    return 0;
}
