#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
void SetColor(unsigned short ForeColor=7,unsigned short BackGroundColor=0)
{
HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,ForeColor|BackGroundColor);
}
void Setcolor(unsigned short ForeColor=7,unsigned short BackGroundColor=0)
{
HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,ForeColor|BackGroundColor);
}
int m,n,lei,ll,geet;
int x,y,z;
char a[40][40];
char showed[40][40];
int nx[8][2]={{0,-1},{1,-1},{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1}};
bool life=true,first_left=true;
int rd(int l,int r)
{
return rand()%(r-l+1)+l;
}
#define F(i,x,y) for(register int i=x;i<=y;++i)
int X,Y;
void search()
{
LONG zx=-1;
LONG zy=-1;
POINT ptB={0,0};
LPPOINT xy=&ptB;
GetCursorPos(xy);
if ((zx!=xy->x) || (zy!=xy->y))
{
    X=xy->x;
    Y=xy->y;
}
}
void gotoxy(int y,int x)
{
CONSOLE_SCREEN_BUFFER_INFO    csbiInfo;
HANDLE    hConsoleOut;
hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
GetConsoleScreenBufferInfo(hConsoleOut,&csbiInfo);
csbiInfo.dwCursorPosition.X = x;
csbiInfo.dwCursorPosition.Y = y;
SetConsoleCursorPosition(hConsoleOut,csbiInfo.dwCursorPosition);
}
void cls()
{
system("cls");
}
int xx,yy,ix,iy,jx,jy;
void change(int x,int y)
{
yy=(double)(x-ix)/(jx-ix)*70+0.5;
xx=(double)(y-iy)/(jy-iy)*24+0.5;
}
void pause()
{
printf("���ո������.\n");
char c1=0; 
while(c1!=' ') c1=getch();
}
bool ff(bool a,bool b)
{
return ((a&&(!b))||(b&&(!a)));
}
void jz()
{
printf("�����У���������У׼\n");
Sleep(1000);
pause();
cls();
printf("O  <-������ԲȦ������\n");
while(1)
{
    if(KEY_DOWN(MOUSE_MOVED))
    {
        search();
        ix=X,iy=Y;
        printf("�ܺã�\n");
        break;
    }
}
pause();
for(int i=1;i<=21;i++) printf("\n");
for(int i=1;i<=40;i++) printf(" ");
printf("        ������ԲȦ������->  O\n");
while(1)
{
    if(KEY_DOWN(MOUSE_MOVED))
    {
        search();
        jx=X,jy=Y;
        printf("�ܺã�\n��Ҫ���ƶ���Ĵ����ˣ�����\n");
        break;
    }
}
pause();
}
void help()
{
cls();
printf("��Ϸ˵����\n");
printf("�������X�m�Ĳ�иŬ�����淨��Windows�Դ���ɨ����ȫһ������\n");
printf("��ԭ�˴󲿷�Windows�Դ�ɨ�׵����ݣ������˳���ֱ�ӵ�����Ͻǡ�\n");
pause();
}
void init()
{
cls();
printf("��������ϣ�����̵�����m(9 ~ 24)������n(9 ~ 30)������l(10 ~ m*n-20)��\n");
printf("ע��������9 9 10;�м���16 16 40;�߼���16 30 99��\n");
scanf("%d%d%d",&m,&n,&lei);
if(m<9||m>24||n<9||n>30||lei<10||lei>m*n-20) {printf("�������ݲ��Ϸ�������������");Sleep(1000);system("cls");init();}
ll=lei;
return;
}
bool win()
{
F(i,1,m) F(j,1,n)
if(a[i][j]=='*') {if(showed[i][j]!='*'&&showed[i][j]!='a') return false;}
else {if(showed[i][j]=='*'||showed[i][j]=='a'||showed[i][j]=='?') return false;}
return true;
}
void make_map()
{
F(i,1,m) F(j,1,n) {a[i][j]='0';showed[i][j]='*';}
srand(time(0));
int cnt=0,xxx,yyy;
while(cnt<lei)
{
    xxx=rd(1,m),yyy=rd(1,n);
    if(a[xxx][yyy]!='*')
    {
        a[xxx][yyy]='*';
        ++cnt;
        F(i,0,7) if(a[xxx+nx[i][0]][yyy+nx[i][1]]!='*') ++a[xxx+nx[i][0]][yyy+nx[i][1]];
    }
}
return;
}
void showgame()
{
cls();
printf("ͼ����\n");
SetColor(0x6);cout<<"����";
Setcolor();cout<<"�����ܵ��׵ĸ���   �գ��Ա�û����   ";
Setcolor(0xb);cout<<"a";
Setcolor();cout<<"�����Ϊ��\n";
Setcolor(0xc);cout<<"*";
Setcolor();cout<<"��δ֪   ";
Setcolor(0xa);cout<<"o";
Setcolor();cout<<"���ף���Ϸ����ʱ���֣�  ";
Setcolor(0x8);cout<<"?";
Setcolor();cout<<"����ȷ��\n";
Setcolor(0x5);cout<<"x";
Setcolor();cout<<"�����Ϊ�ף���Ϸ����ʱ���֣�\n";
putchar('+');
F(i,1,2*n+1) printf("-");
putchar('+');
putchar('\n');
F(i,1,m)
{
    printf("| ");
    F(j,1,n)
    {
        switch(showed[i][j])
        {
            case '*':if(!win()&&life) {SetColor(0xc);cout<<"*";}
                     else if(a[i][j]=='*') {SetColor(0xa);cout<<"o";}
                     else {SetColor(0xc);cout<<"*";}
                     SetColor();break;
            case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':
            SetColor(0x6);cout<<showed[i][j];SetColor();break;
            case 'a':if((!life||win())&&a[i][j]!='*') {Setcolor(0x5);cout<<"x";}
                     else {SetColor(0xb);cout<<"a";}
                     SetColor();break;
            case '?':SetColor(0x8);cout<<"?";SetColor();break;
            case ' ':cout<<" ";break;
        }
        if(j!=n) putchar(' ');
    }
    printf(" |\n");
}
putchar('+');
F(i,1,2*n+1) printf("-");
printf("+\n");
printf("ʣ���׵ĸ�����%d",ll);
if(ll<0) printf(" ???");
printf("\n");
return;
}
void show(int xx,int yy)//left_click
{
if(showed[xx][yy]!='*') return;
if(a[xx][yy]=='*') {life=false;return;}
if(a[xx][yy]!='0') showed[xx][yy]=a[xx][yy];else {showed[xx][yy]=' ';F(i,0,7) show(xx+nx[i][0],yy+nx[i][1]);}
return;
}
void flag(int xx,int yy)//right_click
{
if(showed[xx][yy]=='*') {showed[xx][yy]='a';--ll;}
else if(showed[xx][yy]=='a') {showed[xx][yy]='?';++ll;}
else if(showed[xx][yy]=='?') showed[xx][yy]='*';
return;
}
void out(int xx,int yy)//(left+right)_click
{
int tt=0;
F(i,0,7) if(showed[xx+nx[i][0]][yy+nx[i][1]]=='a') ++tt;
if(tt+48==showed[xx][yy])
{F(i,0,7) if(showed[xx+nx[i][0]][yy+nx[i][1]]!='a') show(xx+nx[i][0],yy+nx[i][1]);}
}
void save()
{
freopen("D:\\saolei.save","w",stdout);
printf("%d %d %d\n",m,n,ll);
F(i,1,m)
{
    F(j,1,n) putchar(a[i][j]);
    putchar('\n');
}
F(i,1,m)
{
    F(j,1,n) putchar(showed[i][j]);
    putchar('\n');
}
return;
}
void read()
{
freopen("D:\\saolei.save","r",stdin);
cin>>m>>n>>ll;
F(i,1,m) F(j,1,n){a[i][j]=getchar();while(a[i][j]=='\n') a[i][j]=getchar();}
F(i,1,m) F(j,1,n){showed[i][j]=getchar();while(showed[i][j]=='\n') showed[i][j]=getchar();}
freopen("CON","r",stdin);
return;
}
void cz()
{
while(1)
if(KEY_DOWN(VK_LBUTTON))
{
    search();
    change(X,Y);
    y=xx-4;z=yy>>1;
    if(y<1||y>m||z<1||z>n) continue;
    while(first_left&&a[y][z]=='*') make_map();
    first_left=false;
    show(y,z);
    break;
}
else if(KEY_DOWN(VK_RBUTTON))
{
    #define i y
    #define j z
    search();
    change(X,Y);
    y=xx-4;z=yy>>1;
    if(y<1||y>m||z<1||z>n) continue;
    if(isdigit(showed[y][j]))
    F(k,0,7) if(showed[i+nx[k][0]][j+nx[k][1]]=='*')
    {gotoxy(i+nx[k][0]+4,(j+nx[k][1])<<1);putchar(' ');}
    gotoxy(7+m,0);
    while(KEY_DOWN(VK_RBUTTON))
    if(KEY_DOWN(VK_LBUTTON)) if(isdigit(showed[y][j])) {out(i,j);break;}
    if(!isdigit(showed[y][j])) flag(i,j);
    #undef i
    #undef j
}
return;
}
int main()
{
system("mode con cols=80 lines=40");
system("title C++��ɨ��v1.4 by WYXkk");
jz();
help();
if(MessageBox(NULL,"����Ҫ��ȡ�浵��\nע�⣺��ȷ���д浵��ȷ������","C++��ɨ��v1.4 by WYXkk",MB_YESNO)!=7)
{read();goto start;}
while(1)
{
    life=true;
    first_left=true;
    init();
    make_map();
    start:while(life&&(!win()))
    {
        showgame();
        cz();
    }
    if(life) ll=0;
    showgame();
    if(life) printf("��Ӯ�ˣ�\n");
    else printf("�����ˣ�\n");
    pause();
    cls();
    printf("�㻹��������𣿲����밴Esc�����򰴳�Esc����������\n");
    printf("ע�⣺�绹��������벻Ҫ�ƶ����ڣ�����\n");
    switch(getch())
    {
        case 27:return 0;
        case 32:case 13:continue;
        default:break;
    }
}
}
