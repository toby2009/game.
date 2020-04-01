#include<bits/stdc++.h>//打方块 Windows7 
#include<windows.h> 
using namespace std;
int fen,mb[10][18],leaf;

void kg(int a)
{
for(int i=0;i<a;i++)
cout<<' ';
}

void go(int x, int y)
{
COORD p;
p.X=(x-1)*2;
p.Y=y-1;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);
}

void printtu(int x,int y,bool a)
{
go(x,y);
cout<<"□";
if(x>2&&x<11)
{
go(x-1,y+1);
cout<<"□□□";
}
else if(x==2)
{
go(x,y+1);
cout<<"□□";
}
else if(x==11)
{
go(x-1,y+1);
cout<<"□□";
}
else;

if(a)
for(int i=0;i<18;i++)
{
go(2,i+2);
kg(20);
}

Sleep(100);

go(x,y);
kg(2);
if(x>2&&x<11)
{
go(x-1,y+1);
kg(6);
}
else if(x==2)
{
go(x,y+1);
kg(4);
}
else if(x==11)
{
go(x-1,y+1);
kg(4);
}
else;
go(14,5);
kg(4);
cout<<"\b\b\b\b"<<fen;

if(a)
for(int i=0;i<18;i++)
{
go(2,i+2);
for(int o=0;o<10;o++)
{
if(mb[o][i])
cout<<"■";
else kg(2);
}
}
}

void sj(int x)
{
int i;
for(i=19;;i--)
{
go(x,i);
cout<<"■";
Sleep(10);
cout<<"\b\b";
kg(2);
if(i<3)break;
if(mb[x-2][i-3]==1)break; 
}
mb[x-2][i-2]=1;
go(x,i);
cout<<"■";
fen-=10; 
for(int o=0;o<10;o++)
if(mb[o][i-2]==0)return;
for(int o=0;o<10;o++)
mb[o][i-2]=0;
for(int o=i-2;o<17;o++)
for(int j=0;j<10;j++)
mb[j][o]=mb[j][o+1];
for(int o=0;o<10;o++)
mb[o][17]=0;
printtu(x,20,1);
fen+=100;
}

void mouse(int &x,int &y)
{
POINT p; 
HWND h=GetForegroundWindow(); 
GetCursorPos(&p); 
ScreenToClient(h,&p);
x=p.x;
y=p.y;
}

void m(int wt)
{
lkr:;
fen=-500;
leaf=8;
srand(time(0));
system("mode con cols=33 lines=24");

system("cls");
cout<<"┌┄┄┄┄┄┄┄┄┄┄┐"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆ 分数"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆ 生命"<<endl;
cout<<"┆";kg(20);cout<<"┆";printf("%c %c %c %c\n",3,3,3,3);
cout<<"┆";kg(20);cout<<"┆";printf("%c %c %c %c\n",3,3,3,3);
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"┆";kg(20);cout<<"┆"<<endl;
cout<<"└┄┄┄┄┄┄┄┄┄┄┘"<<endl;
lk:;
for(int i=0;i<10;i++)
for(int o=0;o<18;o++)
mb[i][o]=0;
int x=6;
for(int i=wt*10;;)
{
if(i<wt*10)goto asd;

for(int i=0;i<10;i++)
for(int o=0;o<18;o++)
if(mb[i][o]!=0)goto qwe;
fen+=500;
qwe:;

for(int o=0;o<10;o++)
if(mb[o][17]==1)goto as;

for(int o=17;o>0;o--)
for(int j=0;j<10;j++)
mb[j][o]=mb[j][o-1];

for(int o=0;o<10;o++)
mb[o][0]=rand()%2;

asd:;
if(GetAsyncKeyState(VK_RIGHT)!=0&&x<11)x++;
if(GetAsyncKeyState(VK_LEFT)!=0&&x>2)x--;
if(GetAsyncKeyState(VK_UP)!=0)sj(x);
printtu(x,20,i>=wt*10);
if(i<wt*10)i++;
else i=1;
}
as:;
for(int i=2;i<22;i++)
{
go(2,i);
kg(20);
}
fen-=600;
switch(leaf)
{
case 1:
go(13,8);
cout<<' '<<' ';
break;
case 2:
leaf--;
go(14,8);
cout<<' '<<' ';
goto lk;
case 3:
leaf--;
go(15,8);
cout<<' '<<' ';
goto lk;
case 4:
leaf--;
go(16,8);
cout<<' '<<' ';
goto lk;
case 5:
leaf--;
go(13,9);
cout<<' '<<' ';
goto lk;
case 6:
leaf--;
go(14,9);
cout<<' '<<' ';
goto lk;
case 7:
leaf--;
go(15,9);
cout<<' '<<' ';
goto lk;
case 8:
leaf--;
go(16,9);
cout<<' '<<' ';
goto lk;
}
go(5,7);
cout<<"你输了！";
go(3,9);
cout<<"┌┄┄┐┌┄┄┐";
go(3,10);
cout<<"┆再来┆┆返回┆";
go(3,11);
cout<<"└┄┄┘└┄┄┘";
for(;;)
{
int x1,x2;
mouse(x1,x2);
if(x1<88&&x1>40&&x2<168&&x2>135&&GetAsyncKeyState(VK_LBUTTON)!=0)goto lkr;
if(x1<145&&x1>96&&x2<168&&x2>135&&GetAsyncKeyState(VK_LBUTTON)!=0)return;
}
}

void dafangkuai(){}
int main()
{
int q=3;
//  "调英文！调英文！调英文！\n不然会后悔" 
a:;
system("mode con cols=80 lines=25");
system("cls");
bool jh[8][27]={0,0,1,0,0,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,0,0,1,0,0,1,1,1,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,1,1,1,1,1,0,0,0,1,1,1,0,0,1,0,0,0,0,1,1,1,1,0,1,1,1,0,0,0,1,0,1,0,1,1,1,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,1,0,1,1,1,1,1,1,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,1,1,0,0,0,1,0,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,0,1,1,0,0,1,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0};
for(int i=2;i<10;i++)
{
go(7,i);
for(int o=0;o<27;o++)
{
if(jh[i-2][o])
cout<<"■";
else cout<<' '<<' ';
}
}
go(17,11);
cout<<"|开始游戏|";
go(17,13);
cout<<"|设置游戏|";
go(17,15);
cout<<"|游戏规则|";
go(17,17);
cout<<"|退出游戏|";
go(1,23);
cout<<"[L]确定";
int y=1;
for(;;)
{
if(GetAsyncKeyState(VK_DOWN)!=0)y+=((y==4)?-3:1);
if(GetAsyncKeyState(VK_UP)!=0)y-=((y==1)?-3:1);
if(GetAsyncKeyState('l')!=0||GetAsyncKeyState('L')!=0)
switch(y)
{
case 1:
system("cls");
m(q);
goto a;
case 2:
system("cls");
go(16,11);
cout<<' '<<q<<"秒增加一行"; 
go(16,10);
printf(" %c",30); 
go(16,12);
printf(" %c",31); 
go(1,23);
cout<<"[K]确定";
for(;;)
{
int x,y;
mouse(x,y);
if(x<255&&x>247&&y<155&&y>145&&GetAsyncKeyState(VK_LBUTTON)!=0&&q<9)
{
q++;
go(16,11);
cout<<' '<<q;
}
if(x<255&&x>247&&y<190&&y>180&&GetAsyncKeyState(VK_LBUTTON)!=0&&q>1)
{
q--;
go(16,11);
cout<<' '<<q;
}
if(GetAsyncKeyState('k')!=0||GetAsyncKeyState('K')!=0)goto a;
Sleep(100);
}
case 3:
//  "点确定浏览规则" 
//  "←→控制炮台"
//  "满一行即消除" 
//  "每消除一行+100"
//  "少一条命-100"
//  "全部消除+500"
//  "发射一炮-10"
case 4: 
return 0;
}
go(16,11);
cout<<' '<<' ';
go(22,11);
cout<<' ';
go(16,13);
cout<<' '<<' ';
go(22,13);
cout<<' ';
go(16,15);
cout<<' '<<' ';
go(22,15);
cout<<' ';
go(16,17);
cout<<' '<<' ';
go(22,17);
cout<<' ';
go(16,9+2*y);
cout<<' '<<'>';
go(22,9+2*y);
cout<<'<';
Sleep(100);
}
}
