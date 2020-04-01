#include<cstdio>
#include<windows.h>
#define UP 1
#define LEFT 2
#define DOWN 3
#define RIGHT 4
#define HEAD 5
#define WALL 22
struct botton{
int x;
int y;
int length;
}; 
struct Snake{
Snake(int a,bool b,int c);
bool life;
int Flag ;
int Length ;
int Sum ;
int color;
int speed;
POINT Head ;
POINT End ;
void Smarter() ;
void Move() ;
void Go(bool iiSmart,bool iiSmarter,bool iiMove,int up,int left,int down,int right) ;
};
void GradeIn() ;
void LevelChoose() ;
void MenuPrint() ;
void Menu() ;
void GradePrint() ;
void Setting() ;
void Prepare() ;
void Walk(int ,long&,long&) ;
void Dead() ;
void Foods() ;
void GradeOut(int) ;
void Check() ;
void Pedge(int,int,int,bool) ; 
int Pposition(int,int) ;
int Pcolor(int,int) ;
char *Psame(int,char);
char *Pempty(int) ;
POINT Food ;
Snake Person(10,true,1) ;
Snake Computer(1,false,1) ;
Snake Another(14,false,1) ;
int Map[WALL][WALL] ={} ;
int Level = 0 ;
int Score[4] ={} ;
bool iBegin = true ;
bool iMenu = false ;
bool iDead = true ;
bool iFor = false ;
bool iSmart = false ;
bool iCheck = false ;
char wLevel[4][5] ={"简单","普通","困难","炼狱"} ;
Snake::Snake(int a,bool b,int c)
{
color=a;
life=b;
speed=c;
}
/* 数据导入 */ 
void GradeIn()
{
if ( fopen("score.txt","rb")){
fscanf(fopen("score.txt","rb"),"%d%d%d%d",&Score[0],&Score[1],&Score[2]),&Score[3] ;
}
}
/* 选择菜单 */
void Menu()
{
int one=0 ;
POINT edge[5]={{16,7},{13,10},{13,13},{23,13},{16,16}} ;
int length[5]={12,18,10,8,12} ;
Print:
system("cls") ;
printf("\n\n\n%s贪%s吃%s蛇\n\n\n\n",Pempty(17),Pempty(2),Pempty(2),Pcolor( 15, 3)) ;
printf("\n%s开始游戏\n\n",Pempty(18)) ;
printf("\n%s游戏难度 :%s\n\n",Pempty(15),wLevel[Level]) ;
printf("\n%s排行榜%s设置\n\n",Pempty(15),Pempty(4)) ;
printf("\n%s退出游戏",Pempty(18)) ;
Pedge(edge[one].x,edge[one].y,length[one],true);
Scan:
Sleep(125) ;
if ( GetAsyncKeyState(' ')||GetAsyncKeyState(VK_RETURN)){
void (*name[])()={Prepare,LevelChoose,GradePrint,Setting} ;
if(one<4){
name[one]() ;
}
if(one==0||one==4){
iBegin=(one==4)?false:true ;
return ;
}
one=0 ;
}
else if ((GetAsyncKeyState('S')||GetAsyncKeyState(VK_DOWN))&& one!=4){
one+=(one==2)?2:1 ; 
}
else if ((GetAsyncKeyState('W')||GetAsyncKeyState(VK_UP))&& one!=0){
one-=(one==3)?2:1 ;
}
else if ((GetAsyncKeyState('D')||GetAsyncKeyState(VK_RIGHT))&& one==2){
one++ ;
}
else if ((GetAsyncKeyState('A')||GetAsyncKeyState(VK_LEFT))&& one==3){
one-- ;
}
else{
goto Scan ;
}
for(int i=0;i<5;i++){
Pedge(edge[i].x,edge[i].y,length[i],false);
}
goto Print ;
}
/* 难度选择 */
void LevelChoose()
{
Print :
system("cls") ;
printf("\n\n\n%s困 难 度 选 择\n\n\n\n",Pempty(20)) ;
for(int i=0 ;i<4 ;i++){
printf("%s%s\n\n\n",Pempty(27),wLevel[i]) ;
}
for(int i=0 ;i<2 ;i++){
printf("--------",Pposition(25,(Level+2)*3+i*2) ) ;
printf("#",Pposition(25+i*7,(Level+2)*3+1)) ;
}
Scan:
Sleep(125) ;
if ((GetAsyncKeyState('S')||GetAsyncKeyState(VK_DOWN))&& Level != 3){
Level++ ;
}
else if ((GetAsyncKeyState('W')||GetAsyncKeyState(VK_UP))&& Level != 0){
Level-- ;
}
else if ( GetAsyncKeyState(' ')||GetAsyncKeyState(VK_RETURN)){
return ;
}
else{
goto Scan ;
}
goto Print ;
}
/* 排行数据 */
void GradePrint()
{
system("cls") ;
printf("\n\n\n%s排 行 榜\n\n",Pempty(18)) ;
for(int i=0 ;i<3 ;i++){
printf("%s第%d名: %d\n\n",Pempty(17) ,i+1,Score[i]) ;
}
printf("\n\n\n%s知道了\n\n",Pempty(19)) ;
Pedge(17,13,10,true);
for(Sleep(125) ; (GetAsyncKeyState(' ') ||GetAsyncKeyState(VK_RETURN))== false ;Sleep(125)) ; 
}
/* 系统设置 */ 
void Setting()
{
bool iScore=false ;
bool iOut=false ; 
bool *str[8]={&iDead,&iFor,&iSmart,&Computer.life,&Another.life,&iScore,&iCheck,&iOut} ;
char Name[8][9]={"死亡限制","循环地图","智能辅助","人机模式","双人模式","缓存清理","检查模式","退出设置"} ;
int one=0 ;
Print:
system("cls") ;
printf("\n\n%s设%s置\n\n",Pempty(25),Pempty(4)) ;
for(int i=0 ;i<8 ;i++){
printf("%s%s%s",Pempty(20),Name[i],Pempty(8)) ;
printf("%s\n\n",(*str[i])?" 开":"关",Pcolor((*str[i])?3:15,(*str[i])?15:3)) ;
Pcolor(15,3) ;
}
for(int i=0 ;i<2 ;i++){
printf("--------",Pposition(34,one*2+3+i*2)) ;
printf("#",Pposition(34+i*7,one*2+4) ) ;
}
Scan:
Sleep(125) ;
if((GetAsyncKeyState('S')||GetAsyncKeyState(VK_DOWN))&& one < 7){
one++ ;
}
else if((GetAsyncKeyState('W')||GetAsyncKeyState(VK_UP))&& one > 0){
one-- ;
}
else if( GetAsyncKeyState(' ')||GetAsyncKeyState(VK_RETURN)){
*str[one]=(*str[one])?false:true ;
}
else{
goto Scan ;
}
if(iScore){; 
Score[0] = Score[1] = Score[2] = Score[3]= 0 ;
GradeOut(0); 
}
if(iOut){
return ;
}
goto Print ;
}
/* 检查文件 */ 
void Check()
{
for(int i=0 ;i<WALL ;i++){
for(int j=0 ;j<WALL ;j++){
fprintf(fopen("check.txt","a"),"%c",Map[i][j]+32) ;
}
fprintf(fopen("check.txt","a"),"\n") ;
}
}
/* 主函数 */
int main()
{
system("color 3f&mode con cols=44 lines=24&title 贪吃蛇") ;
GradeIn() ;
Menu:
Menu() ;
while( iBegin){
if(Another.life==false){
Person.Go(iSmart,false,false,VK_UP,VK_LEFT,VK_DOWN,VK_RIGHT) ;
}
Person.Go(iSmart,false,true,'W','A','S','D') ;
Computer.Go(true,true,true,0,0,0,0) ;
Another.Go(iSmart,false,true,VK_UP,VK_LEFT,VK_DOWN,VK_RIGHT) ;
if ( iDead&&(Map[Person.Head.y][Person.Head.x] != HEAD || ( Computer.life&& Map[Computer.Head.y][Computer.Head.x] != HEAD) || ( Another.life&& Map[Another.Head.y][Another.Head.x] != HEAD))){
Dead() ;
}
if ( iMenu){
goto Menu ;
}
Sleep(( Level < 3) ? ( 150 - ( Level * 50)) : ( rand() % 80)) ;
if(iCheck){
Check() ;
}
} 
return 0 ;
}
/* 玩家方向 */
void Snake::Go(bool iiSmart,bool iiSmarter,bool iiMove,int up,int left,int down,int right)
{
if(life){
Flag =((GetAsyncKeyState(left))&& Flag!=RIGHT)?LEFT:Flag ;
Flag = ((GetAsyncKeyState(right))&& Flag!=LEFT)?RIGHT:Flag ;
Flag = ((GetAsyncKeyState(up))&& Flag!=DOWN)?UP:Flag ;
Flag = ((GetAsyncKeyState(down))&& Flag!=UP)?DOWN:Flag ;
iMenu = (GetAsyncKeyState('R'))?true:false ;
if(iiSmarter){
Smarter() ;
}
if(iiSmart){
for(int i=0 ;i<16 ;i++){
if((Flag==LEFT&&Map[Head.y][Head.x-1])||(Flag==DOWN&&Map[Head.y+1][Head.x])||(Flag==RIGHT&&Map[Head.y][Head.x+1])||(Flag==UP&&Map[Head.y-1][Head.x])){
Flag=rand()%4+1 ;
}
}
}
if(iiMove){
Move() ;
}
}
}
/* 智能方向 */
void Snake::Smarter()
{
Map[Food.y][Food.x]=-2 ;
for(int nem=0 ;nem<50&&Map[Head.y-1][Head.x]!=-2&&Map[Head.y+1][Head.x]!=-2&&Map[Head.y][Head.x-1]!=-2&&Map[Head.y][Head.x+1]!=-2 ;nem++){
for(int i=1 ;i<WALL-1 ;i++){
for(int j=1 ;j<WALL-1 ;j++){
if(Map[i][j]==-2){
if(Map[i-1][j]==0){
Map[i-1][j]=-1 ;
}
if(Map[i+1][j]==0){
Map[i+1][j]=-1 ;
}
if(Map[i][j-1]==0){
Map[i][j-1]=-1 ;
}
if(Map[i][j+1]==0){
Map[i][j+1]=-1 ;
}
}
}
}
if(iFor){
for(int i=0 ;i<WALL ;i++){
for(int j=0 ;j<WALL ;j+=(i==0||i==WALL-1)?1:WALL-1){
if(Map[i][j]==-1){
Map[(i==0||i==WALL-1)?abs(i-WALL+1):i][(j==0||j==WALL-1)?abs(j-WALL+1):j] = (Map[(i==0||i==WALL-1)?abs(i-WALL+1):i][(j==0||j==WALL-1)?abs(j-WALL+1):j]==0)?-2:Map[(i==0||i==WALL-1)?abs(i-WALL+1):i][(j==0||j==WALL-1)?abs(j-WALL+1):j] ;
Map[(i==0||i==WALL-1)?abs(i-WALL+2):i][(j==0||j==WALL-1)?abs(j-WALL+2):j] = (Map[(i==0||i==WALL-1)?abs(i-WALL+2):i][(j==0||j==WALL-1)?abs(j-WALL+2):j]==0)?-2:Map[(i==0||i==WALL-1)?abs(i-WALL+2):i][(j==0||j==WALL-1)?abs(j-WALL+2):j] ;   
}
}
}
}
for(int i=0 ;i<WALL ;i++){
for(int j=0 ;j<WALL ;j++){
Map[i][j]=(Map[i][j]==-1)?-2:Map[i][j] ;
}
}
}
if(Map[Head.y-1][Head.x]==-2){
Flag=UP ;
}
else if(Map[Head.y+1][Head.x]==-2){
Flag=DOWN ;
}
else if(Map[Head.y][Head.x-1]==-2){
Flag=LEFT ;
}
else if(Map[Head.y][Head.x+1]==-2){
Flag=RIGHT ;
}
for(int i=0 ;i<WALL ;i++){
for(int j=0 ;j<WALL ;j++){
if(Map[i][j]==-2){
Map[i][j]=0 ;
}
}
}
}
/* 定位打印 */
int Pposition ( int x ,int y)
{
COORD Pos ={ x,y } ;
HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE) ;
SetConsoleCursorPosition(Handle, Pos) ;
CONSOLE_CURSOR_INFO CurSor ;
GetConsoleCursorInfo(Handle,&CurSor) ;
CurSor.bVisible = false ;
SetConsoleCursorInfo(Handle,&CurSor) ;
return 0 ;
}
/* 颜色字体 */
int Pcolor( int a ,int b)
{
HANDLE Handle=GetStdHandle(STD_OUTPUT_HANDLE) ;
SetConsoleTextAttribute(Handle, a + b * 0x10) ;
return 0 ;
}
/* 批量打印 */ 
char * Psame (int n,char word)
{
char * sentence=new char [n+2] ;
for(int i=0 ;i<n ;i++){
sentence[i]=word ;
}
sentence[n]=0 ;
return sentence ;
}
/* 空格打印 */ 
char * Pempty(int n)
{
return Psame(n,' '); 
}
/* 边框打印 */
void Pedge(int x,int y,int length,bool saw)
{
for(int i=0;i<2;i++){
printf("%s",Psame(length,'-'),Pposition(x,y+i*2),Pcolor(saw?15:3,3));
printf("#",Pposition(x+i*(length-1),y+1)); 
}
}
/* 运行准备 */
void Prepare()
{
Person.Flag = RIGHT ;
Person.End.x = Person.Head.x = 3 ;
Person.End.y = Person.Head.y = 10 ;
Person.Sum = -3 ;
Person.Length = 0 ;
Computer.Flag = LEFT ;
Computer.End.x = Computer.Head.x = 18 ;
Computer.End.y = Computer.Head.y = 10 ;
Computer.Sum = -3 ;
Computer.Length = 0 ;
Another.Flag =(Computer.life)?DOWN : LEFT ;
Another.End.x = Another.Head.x =(Computer.life)? 11:18 ;
Another.End.y = Another.Head.y =(Computer.life)? 3:10 ;
Another.Sum = -3 ;
Another.Length = 0 ;
iMenu = false ;
system("cls") ;
for( int i = 0 ; i < WALL ; i++){
for( int j = 0 ; j < WALL ; ++j){
if( i == 0 || i == WALL -1 || j == 0 || j == WALL -1){
Map[i][j] = (iFor)?0:WALL ;
Pcolor( 15,3) ;
}
else{
Map[i][j] = 0 ;
Pcolor( 3 , 3) ;
}
printf("■") ;
}
}
Foods() ;
}
/* 蛇皮走位 */
void Walk(int Flag,long&x,long&y)
{
switch(Flag){
case LEFT:{
x-=(iFor&&x==1)?-19:1 ;
}return ;
case RIGHT:{
x+=(iFor&&x==20)?-19:1 ;
}return ;
case UP:{
y-=(iFor&&y==1)?-19:1 ;
}return ;
case DOWN:{
y+=(iFor&&y==20)?-19:1 ;
}return ;
}
}
/* 蛇的移动 */ 
void Snake::Move()
{
printf("●",Pcolor(color,3) ,Pposition(End.x*2,End.y) ) ;
Map[Head.y][Head.x] = Flag ;
Walk(Flag,Head.x,Head.y) ;
printf("●",Pcolor( color ,3),Pposition( Head.x * 2 ,Head.y)) ;
Map[Head.y][Head.x] += HEAD ;
if( Head.y==Food.y&& Head.x==Food.x){
Length++ ;
Foods() ;
}
if( Sum==Length){
int Temp = Map[End.y][End.x] ;
Map[End.y][End.x] = 0 ;
printf("■",Pcolor( 3 ,3), Pposition( End.x * 2 ,End.y) ) ;
Walk(Temp,End.x,End.y) ;
}
else{
Sum++ ;
}
}
/* 判断死亡 */
void Dead()
{
GradeOut(Person.Length+Another.Length) ;
printf(" Game Over !",Pcolor( 15, 3) ,Pposition( 16 , 9)) ;
Sleep(1500) ;
char wDead[3][9] ={"重新开始","返回菜单","退出游戏"} ;
int one = iBegin = false ;
Print:
system("cls") ;
printf("\n\n\n\n%s游 戏 结 束\n",Pempty(20)) ;
if(Another.life&&Person.Length>Another.Length){
printf("%s左 边 赢 了",Pempty(20)) ;
}
else if(Another.life&&Person.Length<Another.Length){
printf("%s右 边 赢 了",Pempty(20)) ;
}
printf("\n%s分数 : %d\n\n\n\n" ,Pempty(22),Person.Length+Another.Length) ;
for( int i = 0 ; i < 3 ; i++){
printf("%s%s\n\n\n",Pempty(23),wDead[i]) ;
}
for(int i=0 ;i<2 ;i++){
printf("------------",Pposition(21,one*3+9+i*2)) ;
printf("#",Pposition(21+i*11,one*3+10) ) ;
}
Scan:
Sleep(125) ;
if((GetAsyncKeyState('W')||GetAsyncKeyState(VK_UP))&& one != 0){
one-- ;
}
else if((GetAsyncKeyState('S')||GetAsyncKeyState(VK_DOWN))&& one != 2){
one++ ;
}
else if( GetAsyncKeyState(' ')||GetAsyncKeyState(VK_RETURN)){
switch(one){
case 0:{
iBegin = true ;
Prepare() ;
}break ;
case 1:{
iBegin = iMenu = true ;
}break ;
}
return ;
}
else{
goto Scan ;
}
goto Print ;
}
/* 随机果实 */
void Foods()
{
do{
Food.x = rand() % ( WALL - 2) +1 ;
Food.y = rand() % ( WALL - 2) +1 ;
}while( Map[Food.y][Food.x]!=0) ;
printf("★",Pcolor( 4 , 3),Pposition( Food.x * 2 ,Food.y)) ;
}
/* 分数保存 */
void GradeOut(int grade)
{
for(int i=2 ;i>=0 ;i--){
if(Score[i]<grade){
Score[i+1] = Score[i] ;
Score[i] = grade ;
}
}
fprintf(fopen("score.txt","w+"),"%d\n%d\n%d",Score[0],Score[1],Score[2]) ;
}
