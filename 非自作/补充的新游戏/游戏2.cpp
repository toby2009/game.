#include<iostream>
#include<cstdio>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
/*函数声明*/
void GradeIn() ;
void GameNanDuXuanZe() ;
void GameMenuPrint() ;
void GameMenu() ;
void GradePrint();
void Android() ;
void GameShuJu() ;
void Pposition ( int iX ,int iY ) ;
void Pcolor( int a ,int b ) ;
char Pvoid( int n ) ;
void GameEdgePrint();
void Move() ;
void Dead() ;
void Grade() ;
void Food() ;
void SleepTime() ;
bool key() ;
/* 四个方向 */
const int UP = 1;
const int DOWN = 2;
const int LEFT = 3;
const int RIGHT = 4;
const int FOOD = -1;
const int HIGH =20;
const int WIDE =20;
const char wNanDu[4][5] = {"简单","普通","困难","炼狱"}; 
int FangXiang = RIGHT;
int SnakeHeadx = 3;
int SnakeHeady = 10;
int SnakeZhi = 1;
int SnakeWeiBax = SnakeHeadx;
int SnakeWeiBay = SnakeHeady;
int FoodX = 0;
int FoodY = 0;
int Length = 3;
int SnakeSum = 0;
int Map[HIGH][WIDE] = {};
int NanDu = 0 ;
int Score[4] = {};
int GameGrade = -1 ;
bool iGame_INIT = false;
bool iFood = true ;
bool ibegin = true ;
bool iNanDu = false ;
bool iOver = false ;
bool iMenu = false ;
bool iAndroid = false ;
bool iGrade = false;
bool iDead = true ;
bool iGradeout = true ;
bool iLong = true ;
/*-----------------------------------------------------*/
void GradeIn()
{
FILE *fin;
fin = fopen("score.txt","rb");
if ( fin == 0 )
{
system("echo= >score.txt");
fin=fopen("score.txt","rb");
}
int i=0;
while(fscanf(fin,"%d",&Score[i])==1)i++;
fclose(fin);
if( Score[0] == 0 && Score[1] == 0 && Score[2] == 0 )
{
cout<<"\n\n\n";
cout<<Pvoid(34)<<"游 戏 指 南\n\n\n";
cout<<Pvoid(11)<<"┌─┬─┬─┬─┐ ┌──┬──┬──┬──┐\n";
cout<<Pvoid(11)<<"│ Q│ W│ E│ R│ │继续│ 上 │暂停│菜单│\n";
cout<<Pvoid(11)<<"└┬┴┬┴┬┴┬┘ └┬─┴┬─┴┬─┴┬─┘\n";
cout<<Pvoid(13)<<"│ A│ S│ D│ │ 左 │ 下 │ 右 │ \n";
cout<<Pvoid(13)<<"└─┴─┴─┘ └──┴──┴──┘ \n";
cout<<Pvoid(13)<<"你眼中的键盘 程序员眼中的键盘\n\n";
cout<<Pvoid(5)<<"另外~~\n";
cout<<Pvoid(5)<<"本程序会在所在文件夹创建一个 score.txt 的文件，没事不要瞎改里面的内容\n";
cout<<Pvoid(5)<<"如果，你想再次看到游戏指南，只要把 score.txt 删了就可以了\n\n\n\n"; 
cout<<Pvoid(34)<<"----------\n";
cout<<Pvoid(34)<<"# 知道了 #\n";
cout<<Pvoid(34)<<"----------\n";
begin:
Sleep(125);
if ( GetAsyncKeyState(' ') )
{
Sleep(125);
goto over;
}
else goto begin;
over:;
}
}
/* 选择菜单 */
void GameMenu()
{
for(;;)
{
GameMenuPrint();
Scan:
Sleep(125);
if ( GetAsyncKeyState(' ') && ( ibegin || iOver ) )
{
goto begin ;
}
else if ( GetAsyncKeyState(' ') && iNanDu )
{
GameNanDuXuanZe() ;
}
else if ( GetAsyncKeyState(' ') && iAndroid )
{
Android() ;
}
else if ( GetAsyncKeyState(' ') && iGrade )
{
GradePrint() ;
}
else if ( GetAsyncKeyState('S') && ibegin )
{
ibegin = false ;
iNanDu = true ;
}
else if ( GetAsyncKeyState('S') && iNanDu )
{
iNanDu = false ;
iGrade = true ;
}
else if ( GetAsyncKeyState('S') && ( iGrade || iAndroid ) )
{
iGrade = iAndroid = false ;
iOver = true ;
}
else if ( GetAsyncKeyState('S') && iGrade )
{
iGrade = false ;
iAndroid = true ;
}
else if ( GetAsyncKeyState('D') && iGrade )
{
iGrade = false ;
iAndroid = true ;
}
else if ( GetAsyncKeyState('W') && iOver )
{
iOver = false ;
iAndroid = true ;
}
else if ( GetAsyncKeyState('W') && iGrade )
{
iGrade = false ;
iNanDu = true ;
}
else if ( GetAsyncKeyState('W') && ( iGrade || iAndroid ) )
{
iGrade = iAndroid = false ;
iNanDu = true ;
}
else if ( GetAsyncKeyState('W') && iNanDu )
{
iNanDu = false ;
ibegin = true ;
}
else if ( GetAsyncKeyState('A') && iAndroid )
{
iGrade = true ;
iAndroid = false ;
}
else goto Scan;
}
begin: ;
}
/* 打印菜单 */
void GameMenuPrint()
{
system("cls");
Pcolor( 15, 3);
cout<<"\n\n\n";
cout<<Pvoid(34)<<"贪 吃 蛇\n";
cout<<"\n\n\n";
if ( ibegin )
{
cout<<Pvoid(33)<<"------------\n";
cout<<Pvoid(33)<<"# 开始游戏 #\n";
cout<<Pvoid(33)<<"------------\n";
}
else
{
cout<<"\n";
cout<<Pvoid(35)<<"开始游戏\n\n";
}
if ( iNanDu )
{
cout<<Pvoid(30)<<"------------------\n";
cout<<Pvoid(30);
printf("# 游戏难度 :%s #\n",wNanDu[NanDu]);
cout<<Pvoid(30)<<"------------------\n";
}
else
{
cout<<"\n";
cout<<Pvoid(32);
printf("游戏难度 :%s\n\n",wNanDu[NanDu]);
}
if ( iGrade && iAndroid == false )
{

cout<<Pvoid(30)<<"----------\n";
cout<<Pvoid(30)<<"# 排行榜 # 设置 \n";
cout<<Pvoid(30)<<"----------\n";
}
else if ( iGrade == false && iAndroid )
{

cout<<Pvoid(40)<<"--------\n";
cout<<Pvoid(32)<<"排行榜 # 设置 #\n";
cout<<Pvoid(40)<<"--------\n";
}
else
{
cout<<"\n";
cout<<Pvoid(32)<<"排行榜 设置\n";
cout<<"\n";
}
if ( iOver )
{
cout<<Pvoid(33)<<"------------\n";
cout<<Pvoid(33)<<"# 退出游戏 #\n";
cout<<Pvoid(33)<<"------------\n";
}
else
{
cout<<"\n";
cout<<Pvoid(35)<<"退出游戏\n";
cout<<"\n";
}
}
/* 难度选择 */
void GameNanDuXuanZe()
{
Print :
system("cls");
cout<<"\n\n\n";
cout<<Pvoid(30)<<"困 难 度 选 择\n";
cout<<"\n\n\n";
for(int i=0;i<4;i++)
if(i == NanDu)
{
cout<<Pvoid(35)<<"--------\n";
cout<<Pvoid(35);
printf("# %s #\n",wNanDu[i]);
cout<<Pvoid(35)<<"--------\n";
}
else
{
cout<<"\n";
cout<<Pvoid(37);
printf("%s\n\n",wNanDu[i]);
}
Scan:
Sleep(125);
if ( GetAsyncKeyState('S') && NanDu != 3 ) NanDu++ ;
else if ( GetAsyncKeyState('W') && NanDu != 0 ) NanDu-- ;
else if ( GetAsyncKeyState(' ') )
{
ibegin = true ;
iNanDu = false ;
goto Over;
}
else goto Scan;
goto Print;
Over:;
}
/* 排行数据 */
void GradePrint()
{
system("cls");
cout<<"\n\n\n";
cout<<Pvoid(35)<<"排 行 榜\n";
for(int i=0;i<3;i++)
{
cout<<"\n";
cout<<Pvoid(34)<<"第"<<i+1<<"名: "<<Score[i]<<"\n";
}
cout<<"\n\n\n";
cout<<Pvoid(34)<<"----------\n";
cout<<Pvoid(34)<<"# 知道了 #\n";
cout<<Pvoid(34)<<"----------\n";
Sleep(125);
noover:
if ( GetAsyncKeyState(' ') )
{
iGrade = false ;
ibegin = true ;
goto over;
}
else goto noover;
over:;
}
void Android()
{
int one=1;
if( key( ) )
{
Print:
system("cls");
cout<<"\n\n\n";
cout<<Pvoid(35)<<"设"<<Pvoid(4)<<"置\n\n";
cout<<Pvoid(30)<<"死亡";
cout<<Pvoid(12);
if( iDead )
{
cout<<"█";
Pcolor(3,15);
cout<<"开\n\n";
Pcolor(15,3);
}
else cout<<"关\n\n";
cout<<Pvoid(30)<<"分数保存";
cout<<Pvoid(8);
if( iGradeout )
{
cout<<"█";
Pcolor(3,15);
cout<<"开\n\n";
Pcolor(15,3);
}
else cout<<"关\n\n";
cout<<Pvoid(30)<<"长度限制";
cout<<Pvoid(8);
if( iLong )
{
cout<<"█";
Pcolor(3,15);
cout<<"开\n\n";
Pcolor(15,3);
}
else cout<<"关\n\n";
cout<<Pvoid(30)<<"缓存清理";
cout<<Pvoid(8)<<"确定";
if( one<5 )
{
Pposition(0,one*2+2);
cout<<Pvoid(44)<<"--------";
Pposition(0,one*2+4);
cout<<Pvoid(44)<<"--------";
Pposition(44,one*2+3);
cout<<"#";
Pposition(51,one*2+3);
cout<<"#";
}
Pposition(0,12);
if ( one == 5)
{
cout<<Pvoid(33)<<"--------------\n";
cout<<Pvoid(33)<<"# 保存并退出 #\n";
cout<<Pvoid(33)<<"--------------\n";
}
else
{
cout<<"\n";
cout<<Pvoid(35)<<"保存并退出\n";
}
Scan:
Sleep(125);
if( GetAsyncKeyState('S') && one < 5 ) one++;
else if( GetAsyncKeyState('W') && one > 1 ) one--;
else if( GetAsyncKeyState(' ') )
{
switch(one)
{
case 1:
{
iDead=(iDead)?false:true;
}break;
case 2:
{
iGradeout=(iGradeout)?false:true;
}break;
case 3:
{
iLong=(iLong)?false:true;
}break;
case 4:
{
system("del score.txt");
Score[0] = Score[1] = Score[2] = 0;
}break;
case 5:
{
goto over;
}break;
}
}
else goto Scan;
goto Print;
}
over:
ibegin = true ;
iAndroid = false ;
}
/* 密码判定 */
bool key()
{
/* 界面打印 */
system("cls"); 
cout<<"\n\n\n\n\n";
cout<<Pvoid(30)<<"启动此模式需要密码\n";
cout<<Pvoid(30)<<"------------------\n";
cout<<Pvoid(30)<<"#";
cout<<Pvoid(16)<<"#\n";
cout<<Pvoid(30)<<"------------------\n\n";
Pposition(37,7);
/* 密码输入 */ 
int a;
/* 密码判定 */ 
{

if(a==1433223)
{
cout<<"密码错误,正在离开";
return false ;
}
}
cout<<"密码正确,正在跳转";
Sleep(1000);
return true ;
}
/* 主函数 */
int main(void)
{
system("color 3f");
GradeIn();
Menu:
GameShuJu();
GameMenu();
GameEdgePrint();
while( iOver == false )
{
Food(); 
Move();
Pposition( 0 ,21 );
Dead();
if ( iMenu ) goto Menu;
SleepTime();
}
}
/* 初始化数据 */
void GameShuJu()
{
FangXiang = RIGHT;
SnakeHeadx = 3;
SnakeHeady = 10;
SnakeZhi = 1;
SnakeWeiBax = SnakeHeadx;
SnakeWeiBay = SnakeHeady;
Length = 3;
SnakeSum = 0;
iGame_INIT = false;
iFood = true;
iMenu = false ;
iOver = false ;
GameGrade = -1 ;
}
/* 定位打印 */
void Pposition ( int iX ,int iY )
{
COORD Pos = { iX,iY };
HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);/*获取标准输出设备句柄*/
SetConsoleCursorPosition(Handle, Pos);/*设置光标位置*/
CONSOLE_CURSOR_INFO CurSor;
GetConsoleCursorInfo(Handle, &CurSor);/*获取光标信息*/
CurSor.bVisible = false;/*使光标不可见*/
SetConsoleCursorInfo(Handle, &CurSor);/*设置光标信息*/
}
/* 颜色字体 */
void Pcolor( int a ,int b )
{
HANDLE Handle=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(Handle, a + b* 0x10 );
}
/* 空格打印 */ 
char Pvoid(int n)
{
for(int i=1;i<n;i++)cout<<" ";
return ' ';
}
/* 边框打印 */
void GameEdgePrint()
{
system("cls");
if( iGame_INIT == false )
{
for( int i = 0 ; i < HIGH ; ++i )
{
for( int j = 0 ; j < WIDE ; ++j )Map[i][j] = 0 ;
}
iGame_INIT =true;
}
if ( iGame_INIT )
{
for( int i = 0 ; i < HIGH ;++i )
{
for( int j = 0 ; j < WIDE ; ++j )
{
if( i == 0 || i == HIGH -1 || j == 0 || j == WIDE -1 )
{
Pcolor( 15,3);
cout<<"■";
}
else if (Map[i][j] == FOOD )
{
Pcolor( 4,3);
cout<<"★";
}
else
{
Pcolor( 3,3);
cout<<"■";
}
}
cout<<"\n";
}
}
}
/* 蛇的移动 */
void Move()
{
if (GetAsyncKeyState('A') && FangXiang!=RIGHT )
FangXiang = LEFT;
else if (GetAsyncKeyState('D') && FangXiang!=LEFT)
FangXiang = RIGHT;
else if (GetAsyncKeyState('W') && FangXiang!=DOWN )
FangXiang = UP;
else if (GetAsyncKeyState('S') && FangXiang!=UP)
FangXiang = DOWN;
else if ( GetAsyncKeyState('E'))
{
for(;;)
{
char i = getch();
if ( i == 'Q' || i == 'q' )break;
}
}
else if (GetAsyncKeyState('R')) iMenu = true ;
switch(FangXiang)
{
case LEFT:
{
SnakeHeadx--;
}break;
case RIGHT:
{
SnakeHeadx++;
}break;
case UP:
{
SnakeHeady--;
}break;
case DOWN:
{
SnakeHeady++;
}break;
}
/* 蛇身打印 */
if( Map[SnakeHeady][SnakeHeadx] == 0 )
{
Map[SnakeHeady][SnakeHeadx] = SnakeZhi;
Pposition( SnakeHeadx * 2 ,SnakeHeady );
Pcolor( 10 ,3 );
cout<<"●";
SnakeZhi++;
}
else if(Map[SnakeHeady][SnakeHeadx] == FOOD )
{
Map[SnakeHeady][SnakeHeadx] = SnakeZhi;
Pposition( SnakeHeadx * 2 ,SnakeHeady);
Pcolor( 10 ,3 );
cout<<"●";
Length++;
SnakeZhi++;
iFood = true;
}
/* 蛇的长度 */
if( SnakeSum < Length ) SnakeSum++;
/* 向上移动 */
else
{
if(Map[SnakeWeiBay-1][SnakeWeiBax] == Map[SnakeWeiBay][SnakeWeiBax] + 1 )
{
Map[SnakeWeiBay][SnakeWeiBax] = 0 ;
Pposition( SnakeWeiBax * 2 ,SnakeWeiBay );
Pcolor( 3,3);
cout<<"■";
SnakeWeiBay--;
}
/* 向左移动 */
else if(Map[SnakeWeiBay][SnakeWeiBax-1] == Map[SnakeWeiBay][SnakeWeiBax] + 1 )
{
Map[SnakeWeiBay][SnakeWeiBax] = 0 ;
Pposition( SnakeWeiBax * 2 ,SnakeWeiBay);
Pcolor( 3,3);
cout<<"■";
SnakeWeiBax--;
}
/* 向下移动 */
else if(Map[SnakeWeiBay+1][SnakeWeiBax] == Map[SnakeWeiBay][SnakeWeiBax] + 1 )
{
Map[SnakeWeiBay][SnakeWeiBax] = 0 ;
Pposition( SnakeWeiBax * 2 ,SnakeWeiBay );
Pcolor( 3,3);
cout<<"■";
SnakeWeiBay++;
}
/* 向右移动 */
else if(Map[SnakeWeiBay][SnakeWeiBax+1] == Map[SnakeWeiBay][SnakeWeiBax] + 1 )
{
Map[SnakeWeiBay][SnakeWeiBax] = 0 ;
Pposition( SnakeWeiBax * 2 ,SnakeWeiBay );
Pcolor( 3,3);
cout<<"■";
SnakeWeiBax++;
}
}
}
/* 判断死亡 */
void Dead()
{
if ( iDead )
{
if(Map[SnakeHeady][SnakeHeadx] != SnakeZhi -1 || SnakeHeadx == 0 || SnakeHeadx == WIDE - 1 || SnakeHeady == 0 || SnakeHeady == HIGH -1 )
{
if ( iGradeout ) Grade() ;
ibegin = true ;
iMenu = iOver = false ;
for(;;)
{
Print:
Sleep(125);
Pcolor( 15, 3);
system("cls");
cout<<"\n\n\n\n";
cout<<Pvoid(30)<<"您 已 死 亡\n";
cout<<Pvoid(30)<<"游 戏 结 束\n";
cout<<Pvoid(32)<<"分数 : "<<GameGrade<<"\n\n\n";
if( ibegin )
{
cout<<Pvoid(31)<<"------------\n";
cout<<Pvoid(31)<<"# 重新开始 #\n";
cout<<Pvoid(31)<<"------------\n";
}
else
{
cout<<"\n";
cout<<Pvoid(33)<<"重新开始\n\n";
}
if ( iMenu )
{
cout<<Pvoid(31)<<"------------\n";
cout<<Pvoid(31)<<"# 返回菜单 #\n";
cout<<Pvoid(31)<<"------------\n";
}
else
{
cout<<"\n";
cout<<Pvoid(33)<<"返回菜单\n\n";
}
if ( iOver )
{
cout<<Pvoid(31)<<"------------\n";
cout<<Pvoid(31)<<"# 退出游戏 #\n";
cout<<Pvoid(31)<<"------------\n";
}
else
{
cout<<"\n";
cout<<Pvoid(33)<<"退出游戏\n\n";
}
Scan:
if ( GetAsyncKeyState(' ') && ibegin )
{
iGame_INIT = false;
GameShuJu();
GameEdgePrint();
goto begin;
}
else if ( GetAsyncKeyState(' ') && iMenu )
{
ibegin = true ;
iOver = true ;
goto begin;
}
else if ( GetAsyncKeyState(' ') && iOver )
{
goto begin;
}
else if ( GetAsyncKeyState('S') && ibegin )
{
ibegin = false ;
iMenu = true ;
goto Print;
}
else if( GetAsyncKeyState('S') && iMenu )
{
iMenu = false ;
iOver = true ;
goto Print;
}
else if( GetAsyncKeyState('W') && iMenu )
{
iMenu = false ;
ibegin = true ;
goto Print;
}
else if( GetAsyncKeyState('W') && iOver )
{
iOver = false ;
iMenu = true ;
goto Print;
}
else goto Scan;
}
}
}
begin:;
}
/* 判断随机果实 */
void Food()
{
if( iFood )
{
do
{
FoodX = rand()% 18+1;
FoodY = rand()% 18+1;
}while( Map[FoodY][FoodX]!=0 );
Map[FoodY][FoodX] = FOOD;
Pposition( FoodX * 2 ,FoodY );
Pcolor( 4 , 3 );
cout<<"★";
iFood = false ;
GameGrade++;
}
}
/* 分数保存 */ 
void Grade()
{
for(int i=2;i>=0;i--)if(Score[i]<GameGrade)
{
Score[i+1]=Score[i];
Score[i]=GameGrade;
}
FILE *fout;
fout=fopen("score.txt","w+");
for(int i=0;i<3;i++)fprintf(fout,"%d\n",Score[i]);
fclose(fout);
}
/* 蛇的速度 */
void SleepTime()
{
if ( 150 - ( NanDu * 50 ) != 0)
{
Sleep( 150 - ( NanDu * 50 ) );
}
else
{
Sleep( rand() % 80 );
}
}
