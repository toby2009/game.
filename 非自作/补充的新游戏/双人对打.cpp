#include<iomanip>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<cstdio>
#include<vector>
#include<cstring>
#include<string>

#define bottom 40
#define jumph 6
#define skills 6
#define skilled 2
#define Setcolor(NAME) if(NAME)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE);else SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE)
#define Backcolor(NAME) if(NAME)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE)
#define Choosecolor(NAME) if(NAME==2)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED| FOREGROUND_GREEN|FOREGROUND_BLUE | FOREGROUND_INTENSITY|BACKGROUND_BLUE );else if(!NAME)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_RED| BACKGROUND_INTENSITY| BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_BLUE );else if(NAME==1)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY| BACKGROUND_GREEN|BACKGROUND_RED)

using namespace std;

void HideCursor();
void go(int x, int y);
void movewindow();
void GetContain();
void start1();
void start2();
void _skillprint(int, int);
void skillprint(int,int);
void mapprint();
void Getmove();
void winprint(bool);
void BoomGet();
class bullet;
class player;

bool dj1, dj2, s11, s12, s21, s22;
int da1, da2,skill1[2] = { 4,3 }, skill2[2] = {2,4}, boom1, boom2, cost[10] = {0,3,3,5,15},place[11][2][2],explace[11][2];//[???üêy×?][ê?óú][x,y×?±ê]
float cool[2][2];
char hit[2]; 
string name1, name2,contain[11],excontain[11];
vector<bullet>bu;
class player {
public:
int x, y, j, jh, life,loving,flying,gaying;
char a, b[2];
bool dir, fly, myself,fdir;
//dir￡o0?a×ó￡?1?aóò
void clear() {
go(x, y);
printf(" ");
go(x, y + 1);
printf(" ");
}
void print() {
Setcolor(myself);
if (gaying)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE|FOREGROUND_RED | BACKGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE);
go(x, y);
if (loving) {
Setcolor(!myself);
cout << (char)3;
Setcolor(myself);
}
else if (gaying)cout << "?á";
else cout << a;
go(x, y + 1);
cout << b[dir];
Backcolor(myself);
}
void lifedown(int l) {
if (!myself) {
go(life - l+1, 2);
for (int i = 1; i <= l; ++i)
cout << " ";
}
else {
go(188 - life, 2);
for (int i = 1; i <= l; ++i)
cout << " ";
}
life -= l;
}
void jump() {
++j;
if (j <= jh) {
clear();
--y;
print();
}
else fly = 1;
}
void flown() {
++flying;
clear();
if (flying <= jumph-1)--y;
else if (flying <= 2 * jumph-2)++y;
else flying = 0;
if (!fdir)x-=2;
else x+=2;
if (x < 1)x = 1;
else if (x > 188)x = 188;
print();
}
void skill(int,bool);
void attack();
void move(int);
} p1, p2;
class bullet {
public:
int x, y, boom,length,soap;
bool own, dir, love;
inline void clear() {
go(x, y);
cout << " ";
}
void print() {
Setcolor(own);
go(x, y);
if (boom)cout << (char)15;
else if (love)cout << (char)3;
else if (soap) cout << "¨|";
else cout << hit[own];
Backcolor(own);
}
void start(int p, int q, bool d, bool o) {
y = q;
dir = d;
own = o;
if (!d)x = p - 1;
else x = p + 1;
boom = 0;
love = 0;
length = 0;
soap = 0;
}
void boomstart(int p, int q, bool d, bool o,int l) {
y = q + 1;
dir = d;
own = o;
if (!d)x = p - 1;
else x = p + 1;
boom = 1;
length = l;
love = 0;
}
bool fly() {
if (boom >= 800) {
if (boom == 805) {
for (int i = -4; i <= 4; i += 2)
for (int j = -2; j <= 2; ++j) {
if (x + i < 1 || x + i>188 || y + j > bottom + 1)continue;
go(x + i, y + j);
cout << " ";
}
p1.print();
p2.print();
return 1;

}++boom;
return 0;
}
if(soap!=-1)clear();
if (!dir)--x;
else ++x;
if (boom) {
if (!dir)x-=length;
else x+=length;
}
if (boom) {
++boom;
char _sign = 4;
if (x < 1 || x>188) {
Setcolor(own);
for (int i = -4; i <= 4; i += 2)
for (int j = -2; j <= 2; ++j) {
if (x + i < 1 || x + i>188 || y + j > bottom + 1)continue;
go(x + i, y + j);
cout <<_sign ;
}
Backcolor(own);
if (!own)
{
if (x >= p2.x - 4 && x <= p2.x + 4 && y+2 >= p2.y&&y-2 <= p2.y + 1) {
p2.lifedown(10);
if (x > p2.x)p2.fdir = 0;
else p2.fdir = 1;
p2.flown();
}
}
else {
if (x >= p1.x - 4 && x <= p1.x + 4 && y + 2 >= p1.y&&y - 2 <= p1.y + 1) {
p1.lifedown(10);
if (x >= p1.x)p1.fdir = 0;
else p1.fdir = 1;
p1.flown();
}
}
boom = 800;
return 0;
}
if (boom <= 2 * jumph+length)--y;
else if (boom > 2 * jumph + 2+length) {
if (y <= bottom)++y;
else {
Setcolor(own);
for (int i = -4; i <= 4; i += 2)
for (int j = -2; j <= 2; ++j) {
if (x + i < 1 || x + i>188 || y + j > bottom + 1)continue;
go(x + i, y + j);
cout << _sign;
}
Backcolor(own);
if (!own) {
if (x >= p2.x - 4 && x <= p2.x + 4 && y +2>= p2.y&&y-2 <= p2.y + 1) {
p2.lifedown(10);
if (x > p2.x)p2.fdir = 0;
else p2.fdir = 1;
p2.flown();
}
}
else {
if (x >= p1.x - 4 && x <= p1.x + 4 && y + 2 >= p1.y&&y - 2 <= p1.y + 1) {
p1.lifedown(10);
if (x >= p1.x)p1.fdir = 0;
else p1.fdir = 1;
p1.flown();
}
}
boom = 800;
return 0;
}
}
print();
if (!own) {
if (x == p2.x&&y >= p2.y&&y <= p2.y + 1) {
for (int i = -4; i <= 4; i += 2)
for (int j = -2; j <= 2; ++j) {
if (x + i < 1 || x + i>188 || y + j > bottom + 1)continue;
go(x + i, y + j);
cout << _sign;
}
p2.lifedown(10);
p2.fdir = 1;
p2.flown();
boom = 800;
}
}
else {
if (x == p1.x&&y >= p1.y&&y <= p1.y + 1) {
Setcolor(own);
for (int i = -4; i <= 4; i += 2)
for (int j = -2; j <= 2; ++j) {
if (x + i < 1 || x + i>188 || y + j > bottom + 1)continue;
go(x + i, y + j);
cout << _sign;
}
Backcolor(own);
p1.lifedown(10);
p1.fdir = 0;
p1.flown();
boom = 800;
}
}
return 0;
}
if (soap) {
if (soap!=-1&&soap <= 2) {
++soap;
--y;
}
else if (soap != -1 && y <= bottom+1) {
++y;
if (y == bottom + 1) 
soap = -1; 
}
else {
if (!dir)++x;
else --x;
}
if (x < 1)x = 1;
if (x > 188)x = 188;
if (soap != -1) {
int s = bu.size();
for (register int i = 0; i < s; ++i) {
if (bu[i].soap&&bu[i].length!=length) {
if (x+1>=bu[i].x&&x<=bu[i].x+1&&y ==bu[i].y-1 ) { 
soap = -1;
break;
}
}
}
} 
if (!own) {
if (x+1 >= p2.x&&x<=p2.x&&y >= p2.y&&y <= p2.y + 1) {
p2.lifedown(8);
p2.gaying += 100;
p2.print();
return 1;
}
}
else {
if (x +1>= p1.x&&x<=p1.x&&y >= p1.y&&y <= p1.y + 1) {
p1.lifedown(8);
p1.gaying += 100;
p1.print();
return 1;
}
}
print();
return 0;
}
if (x < 1 || x>188) {
if (!love) {
if (!own) {
if ((skill1[0] == -2 || skill1[1] == -2) && !length) {
if (!dir)
++x;
else --x;
dir = !dir;
++length;
return 0;
}
}
else {
if ((skill2[0] == -2 || skill2[1] == -2) && !length) {
if (!dir)++x;
else --x;
dir = !dir;
++length;
return 0;
}
}
}
return 1;
}
if (!own) {
if (x == p1.x&&y >= p1.y&&y <= p1.y + 1)p1.print();
if (x == p2.x&&y >= p2.y&&y <= p2.y + 1) {
if (love) {
p2.lifedown(3);
p2.loving = 75;
p2.print();
}
else p2.lifedown(1);
return 1;
}
}
else {
if (x == p2.x&&y >= p2.y&&y <= p2.y + 1)p2.print();
if (x == p1.x&&y >= p1.y&&y <= p1.y + 1) {
if (love) {
p1.lifedown(3);
p1.loving = 75;
p1.print();
}
else p1.lifedown(2);
return 1;
}
}
print();
return 0;

}
}temp;
void player::attack() {
temp.start(x, y, dir, myself);
bu.push_back(temp);
}
void player::move(int k) {
clear();
if (gaying)k = 3 - k;
if (k == 1) {
--x;
dir = 0;
}
else if (k == 2) {
++x;
dir = 1;
}
int strb = bu.size();
for (register int i = 0; i < strb; ++i) {
if (bu[i].boom == 0 && bu[i].own != myself && bu[i].x == x && bu[i].y >= y && bu[i].y <= y + 1) {
bu.erase(bu.begin() + i);
if (bu[i].soap) {
gaying += 100;
lifedown(5);
}
else if (bu[i].love) {
lifedown(2);
loving =75;
}
else lifedown(1);
--i;
--strb;
}
}
print();
}
void player::skill(int l,bool which) {
if (l <= 0)return;
if (cool[myself][which] > 0)return;
cool[myself][which] += cost[l];
skillprint(myself, which);
/*￡?éá??￡?*/
if (l == 1) {
int sign = 0;
bool sign2 = 0;
if (!dir) {
for (register int i = 1; x > 1 && i <= 12; ++i) {
x -= 2;
if (x < 1) {
x = 1;
sign2 = 1;
}
print();
++sign;
}
for (register int i = 2 - sign2; i <= 2 - sign2 + 2 * sign; i += 2) {
go(x + i, y);
cout << " ";
go(x + i, y + 1);
cout << " ";
Sleep(1);
}
}
else {
for (register int i = 1; x < 188 && i <= 12; ++i) {
x += 2;
if (x > 188) {
x = 188;
sign2 = 1;
}
print();
++sign;
}
for (register int i = 2 - sign2; i <= 2 - sign2 + 2 * sign; i += 2) {
go(x - i, y);
cout << " ";
go(x - i, y + 1);
cout << " ";
Sleep(1);
}
}
}
else if (l == 2) {
if(!myself)temp.boomstart(x, y, dir, myself,boom1/6);
else temp.boomstart(x, y, dir, myself, boom2 /6);
bu.push_back(temp);
}
else if (l == 3) {
temp.start(x, y, dir, myself);
temp.love = 1;
bu.push_back(temp);
}
else if (l == 4) {
temp.start(x, y, dir, myself);
temp.soap = 1;
temp.length = rand();
bu.push_back(temp);
}
}

void go(int x, int y) {
COORD p;
p.X = x - 1;
p.Y = y - 1;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}
void movewindow() {
RECT rect;
HWND hwnd = GetForegroundWindow();
GetWindowRect(hwnd, &rect);
MoveWindow(hwnd, 0, 0, 0, 0, TRUE);
}
void HideCursor() {
CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}
void start1() {
go(20, 20);
printf("玩家一的名字:");
getline(cin, name1);
go(20, 23);
printf("玩家二的名字");
getline(cin, name2);
Sleep(500);
system("cls");
}
inline void GetContain() {
contain[1] = "| 闪现 |";
contain[2] = "| 手雷 |";
contain[3] = "| 魅惑 |";
contain[4] = "| 捡肥皂 |";
contain[5] = "| 三段跳 |";
contain[6] = "| 弹射 |";
excontain[1] = "向前瞬移一段距离 冷却 3 s";
excontain[2] = "长摁后扔出一枚手雷，造成伤害并炸飞对手。蓄力时间越长，飞行距离越远 冷却 3 s";
excontain[3] = "发出一颗爱心，造成伤害并使对手无法控制地走向自己 冷却 5 s";
excontain[4] = "扔出一个肥皂，对手捡到时造成伤害并干扰对手的移动 冷却 15 s";
excontain[5] = "（被动）可以连续跳跃三次";
excontain[6] = "（被动）普通攻击第一次碰到墙壁时会反弹回来";
place[1][0][0] = 25;
place[1][0][1] = 10;
place[1][1][0] = place[1][0][0]+85;
place[1][1][1] = 10;
for (int k = 0; k <= 1; ++k) {
for (int i = 2; i <= skills; ++i) {
place[i][k][0] = place[i - 1][k][0];
place[i][k][1] = place[i - 1][k][1] + 3;
}
}
for (int k = 0; k <= 1; ++k)
for (int i = 1; i <= skills; ++i)
explace[i][k] = place[1][k][0]+18 - excontain[i].size()/2;
}
void start2() {
GetContain();
const int exy = place[skills][0][1]+5;
int wh[2] = {1,1};
int ch[2][11] = { {0,1,0,0,0,0,0,0,0,0,0},{0,1,0,0,0,0,0,0,0,0,0,}};
int count[2] = { 0,0 };
char sign = 16;
go(82, 2);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
cout << "选择你的技能";
go(54, 45);
cout << "游戏规则：玩家一 A、D键移动，W键跳跃，J键攻击，K、L键释放技能";
go(64, 46);
cout << "玩家二 方向键跳跃和移动，1 键攻击，2、3 键释放技能";
Setcolor(0);
go(44 - name1.size()/2, 5);
cout<<name1;
go(44, 7);
printf("%c", p1.a);
go(44, 8);
printf("%c", p1.b[0]);
Setcolor(1);
go(130-name2.size()/2,5);
cout<< name2;
go(130, 7);
printf("%c", p2.a);
go(130, 8);
printf("%c", p2.b[0]);
for(int i=0;i<=1;++i)
for (int j = 1; j <= skills; ++j) {
go(place[j][i][0], place[j][i][1]);
Setcolor(i);
cout << " ";
Choosecolor(ch[i][j]);
cout << contain[j];
}
Choosecolor(1);
for (int i = 0; i <= 1; ++i) {
go(place[1][i][0], place[1][i][1]);
Setcolor(i);
cout<<sign;
go(explace[1][i], exy);
cout << excontain[1];
}
bool able[2][3] = { {0,0,0},{0,0,0} };//[0×ó 1óò][0é? 1?? 2??]
go(30, 40);
Setcolor(0);
cout << "玩家一：W、S键移动，J键选择";
go(112, 40);
Setcolor(1);
cout << "玩家二：I、K键移动，L键选择";
while (count[0]<2||count[1]<2) {
bool f = 0;
if (GetKeyState('W') >= 0)able[0][0]=1;
if (GetKeyState('S') >= 0)able[0][1] = 1;
if (GetKeyState('J') >= 0)able[0][2] = 1;
if (GetKeyState('I') >= 0)able[1][0] = 1;
if (GetKeyState('K') >= 0)able[1][1] = 1;
if (GetKeyState('L') >= 0)able[1][2] = 1;
Sleep(5);
if (GetKeyState('W') < 0&&able[f][0]) {
if(ch[f][wh[f]]!=2)--ch[f][wh[f]];
able[f][0] = 0;
go(place[wh[f]][f][0], place[wh[f]][f][1]);
Setcolor(f);
cout << " ";
Choosecolor(ch[f][wh[f]]);
cout << contain[wh[f]];
Setcolor(f);
go(explace[wh[f]][f], exy);
for (unsigned int i = 0; i < excontain[wh[f]].size()/2+1; ++i)
cout << " ";
--wh[f];
if (wh[f] < 1)wh[f] = skills;
go(explace[wh[f]][f], exy);
cout << excontain[wh[f]];
if(ch[f][wh[f]]!=2)++ch[f][wh[f]];
go(place[wh[f]][f][0], place[wh[f]][f][1]);
cout << sign;
Choosecolor(ch[f][wh[f]]); 
cout << contain[wh[f]];
}
if(GetKeyState('S')<0&&able[f][1]) {
if(ch[f][wh[f]]!=2)--ch[f][wh[f]];
able[f][1] = 0;
go(place[wh[f]][f][0], place[wh[f]][f][1]);
Setcolor(f);
cout << " ";
Choosecolor(ch[f][wh[f]]);
cout<< contain[wh[f]];
Setcolor(f);
go(explace[wh[f]][f], exy);
for (unsigned int i = 0; i < excontain[wh[f]].size()/2+1; ++i)
cout << " ";
++wh[f];
if (wh[f] > skills)wh[f] = 1;
go(explace[wh[f]][f], exy);
cout << excontain[wh[f]];
if (ch[f][wh[f]] != 2)++ch[f][wh[f]];
go(place[wh[f]][f][0], place[wh[f]][f][1]);
cout << sign;
Choosecolor(ch[f][wh[f]]);
cout << contain[wh[f]];
}
if (GetKeyState('J') < 0 && able[f][2]) {
able[f][2] = 0;
if (ch[f][wh[f]] != 2 && count[f] < 2){
++ch[f][wh[f]];
++count[f];
}
else if(ch[f][wh[f]]==2){
--ch[f][wh[f]];
--count[f];
}
go(place[wh[f]][f][0], place[wh[f]][f][1]);
Setcolor(f);
cout << sign;
Choosecolor(ch[f][wh[f]]);
cout << contain[wh[f]];
}
f = 1;
if (GetKeyState('I') < 0 && able[f][0]) {
if (ch[f][wh[f]] != 2)--ch[f][wh[f]];
able[f][0] = 0;
go(place[wh[f]][f][0], place[wh[f]][f][1]);
Setcolor(f);
cout << " ";
Choosecolor(ch[f][wh[f]]);
cout << contain[wh[f]];
Setcolor(f);
go(explace[wh[f]][f], exy);
for (unsigned int i = 0; i < excontain[wh[f]].size()/2+1; ++i)
cout << " ";
--wh[f];
if (wh[f] < 1)wh[f] = skills;
go(explace[wh[f]][f], exy);
cout << excontain[wh[f]];
if (ch[f][wh[f]] != 2)++ch[f][wh[f]];
go(place[wh[f]][f][0], place[wh[f]][f][1]);
cout << sign;
Choosecolor(ch[f][wh[f]]);
cout << contain[wh[f]];
}
if (GetKeyState('K') < 0 && able[f][1]) {
if (ch[f][wh[f]] != 2)--ch[f][wh[f]];
able[f][1] = 0;
go(place[wh[f]][f][0], place[wh[f]][f][1]);
Setcolor(f);
cout << " ";
Choosecolor(ch[f][wh[f]]);
cout << contain[wh[f]];
Setcolor(f);
go(explace[wh[f]][f], exy);
for (unsigned int i = 0; i < excontain[wh[f]].size()/2+1; ++i)
cout << " ";
++wh[f];
if (wh[f] > skills)wh[f] = 1;
go(explace[wh[f]][f], exy);
cout << excontain[wh[f]];
if (ch[f][wh[f]] != 2)++ch[f][wh[f]];
go(place[wh[f]][f][0], place[wh[f]][f][1]);
cout << sign;
Choosecolor(ch[f][wh[f]]);
cout << contain[wh[f]];
}
if (GetKeyState('L')<0 && able[f][2]) {
able[f][2] = 0;
if (ch[f][wh[f]] != 2 && count[f] < 2) {
++ch[f][wh[f]];
++count[f];
}
else if (ch[f][wh[f]] == 2) {
--ch[f][wh[f]];
--count[f];
}
go(place[wh[f]][f][0], place[wh[f]][f][1]);
Setcolor(f);
cout << sign;
Choosecolor(ch[f][wh[f]]);
cout << contain[wh[f]];
}
}
Backcolor(1);
int _s=0;
for (int i = 1; i <= skills; ++i) {
if (ch[0][i] == 2) {
if (i > skills - skilled)skill1[_s] = skills - i - 2;
else skill1[_s] = i;
++_s;
}
}
_s = 0;
for (int i = 1; i <= skills; ++i) {
if (ch[1][i] == 2) {
if (i > skills - skilled)skill2[_s] = skills - i - 2;
else skill2[_s] = i;
++_s;
}
}
Sleep(1000);
}
void Getmove() {
BoomGet();
if (GetKeyState('W') >= 0)dj1 = 0;
if (GetKeyState(VK_UP) >= 0)dj2 = 0;
if (GetKeyState('K') >= 0)s11 = 0;
if (GetKeyState('L') >= 0)s12 = 0;
if (GetKeyState('2') >= 0)s21 = 0;
if (GetKeyState('3') >= 0)s22 = 0;
if (skill1[0] == 2)s11 = 1;
if (skill1[1] == 2)s12 = 1;
if (skill2[0] == 2)s21 = 1;
if (skill2[1] == 2)s22 = 1;
if ((!p1.flying)&&(!p1.loving)) {
if (dj1 == 0 && GetKeyState('W') < 0 && (p1.jh <= jumph || ((skill1[0] == -1 || skill1[1] == -1) && p1.jh <= 2 * jumph))) {
dj1 = 1;
if ((skill1[0] == -1 || skill1[1] == -1) && p1.jh >= 2 * jumph && !p1.fly)p1.jh = 3 * jumph;
else if (p1.jh >= jumph && !p1.fly)p1.jh = 2 * jumph;
else p1.jh = p1.j + jumph;
p1.fly = 0;
p1.jump();
}
if (GetKeyState('A') < 0 && p1.x > 1) {
p1.move(1);
}
if (GetKeyState('D') < 0 && p1.x < 188) {
p1.move(2);
}
if (!p1.gaying) {
if (GetKeyState('J') < 0 && da1 == 0) {
da1 = 6;
p1.attack();
}
if (GetKeyState('K') < 0 && s11 == 0) {
s11 = 1;
p1.skill(skill1[0], 0);
}
if (GetKeyState('L') < 0 && s12 == 0) {
s12 = 1;
p1.skill(skill1[1], 1);
}
}
}
if ((!p2.flying)&&(!p2.loving)) {
if (!p2.gaying) {
if (GetKeyState('1') < 0 && da2 == 0) {
da2 = 6;
p2.attack();
}
if (GetKeyState('2') < 0 && s21 == 0) {
s21 = 1;
p2.skill(skill2[0], 0);
}
if (GetKeyState('3') < 0 && s22 == 0) {
s22 = 1;
p2.skill(skill2[1], 1);
}
}
if (dj2 == 0 && GetKeyState(VK_UP) < 0 && (p2.jh <= jumph || ((skill2[0] == -1 || skill2[1] == -1) && p2.jh <= 2 * jumph))) {
dj2 = 1;
if ((skill2[0] == -1 || skill2[1] == -1) && p2.jh >= 2 * jumph && !p2.fly)p2.jh = 3 * jumph;
else if (p2.jh >= jumph && !p2.fly)p2.jh = 2 * jumph;
else p2.jh = p2.j + jumph;
p2.fly = 0;
p2.jump();
}
if (GetKeyState(VK_LEFT) < 0 && p2.x > 1) {
p2.move(1);
}
if (GetKeyState(VK_RIGHT) < 0 && p2.x < 188) {
p2.move(2);
}
}
}
void BoomGet() {
if ((!p1.flying)&&(!p1.loving)&&(!p1.gaying)) {
if (skill1[0] == 2 && cool[0][0] <= 0) {
if (GetKeyState('K') < 0)++boom1;
if (boom1 > 30 || (GetKeyState('K') >= 0 && boom1)) {
p1.skill(2, 0);
boom1 = 0;
}
}
if (skill1[1] == 2 && cool[0][1] <= 0) {
if (GetKeyState('L') < 0)++boom1;
if (boom1 > 30 || (GetKeyState('L') >= 0 && boom1)) {
p1.skill(2, 1);
boom1 = 0;
}
}
}
if (p2.flying||p2.loving||p2.gaying)return;
if (skill2[0] == 2&&cool[1][0]<=0) {
if (GetKeyState('2') < 0)++boom2;
if (boom2 > 30 || (GetKeyState('2') >= 0 && boom2)) {
p2.skill(2,0);
boom2 = 0;
}
}
if (skill2[1] == 2&&cool[1][1]<=0) {
if (GetKeyState('3') < 0)++boom2;
if (boom2 > 30 || (GetKeyState('3') >= 0 && boom2)) {
p2.skill(2,1);
boom2 = 0;
}
}
}
void mapprint() {
for (int i = 1; i <= 188; ++i)
cout << " ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE | BACKGROUND_INTENSITY);
for (int i = 1; i <= 80; ++i)
cout << " ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE);
cout << " player1 ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
cout << "?§";
Setcolor(1);
cout << " player2 ";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED | BACKGROUND_INTENSITY);
for (int i = 1; i <= 80; ++i)
cout << " ";
go(1, 42);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
for (int i = 1; i <= 188; ++i)
cout << (char)22;
Backcolor(1);
go(20-name1.size()/2, 44);
cout << name1;
go(8, 46);
cout << "技能一： ";
_skillprint(0, 0);
go(8, 48);
cout << "技能二： ";
_skillprint(0, 1);
Setcolor(1);
go(160-name2.size()/2, 44);
cout << name2;
go(145, 46);
cout << "技能一： ";
_skillprint(1, 0);
go(145, 48);
cout << "技能二： ";
_skillprint(1, 1);
Backcolor(1);
}
void _skillprint(int a,int b) {
if (!a) {
if (!b) {
if (skill1[0] == 1)cout << "闪现 0.0 s";
else if (skill1[0] == 2)cout << "手雷 0.0 s";
else if (skill1[0] == 3)cout << "魅惑 0.0 s";
else if (skill1[0] == 4)cout << "捡肥皂 0.0 s";
else if (skill1[0] == -1)cout << "三段跳 -";
else if (skill1[0] == -2)cout << "弹射 -";

}
else {
if (skill1[1] == 1)cout << "闪现 0.0 s";
else if (skill1[1] == 2)cout << "手雷 0.0 s";
else if (skill1[1] == 3)cout << "魅惑 0.0 s";
else if (skill1[1] == 4)cout << "捡肥皂 0.0 s";
else if (skill1[1] == -1)cout << "三段跳 -";
else if (skill1[1] == -2)cout << "弹射 -";
}
}
else {
if (!b) {
if (skill2[0] == 1)cout << "闪现 0.0 s";
else if (skill2[0] == 2)cout << "手雷 0.0 s";
else if (skill2[0] == 3)cout << "魅惑 0.0 s";
else if (skill2[0] == 4)cout << "捡肥皂 0.0 s";
else if (skill2[0] == -1)cout << "三段跳 -";
else if (skill2[0] == -2)cout << "弹射 -";
}
else {
if (skill2[1] == 1)cout << "闪现 0.0 s";
else if (skill2[1] == 2)cout << "手雷 0.0 s";
else if (skill2[1] == 3)cout << "魅惑 0.0 s";
else if (skill2[1] == 4)cout << "捡肥皂 0.0 s";
else if (skill2[1] == -1)cout << "三段跳 -";
else if (skill2[1] == -2)cout << "弹射 -";
}
}
}
void skillprint(int a, int b) {
if (!a) {
if (!b)go(27, 46);
else go(27, 48);
}
else {
if (!b)go(164, 46);
else go(164, 48);
}
Setcolor(a);
printf("%.1f", cool[a][b]);
if (cool[a][b] < 9.9)cout << " ";
Backcolor(a);
}
void winprint(bool f) {
Sleep(1000);
system("cls");
string winner;
if (!f)winner = name1;
else winner = name2;
go(91 - winner.size() / 2, 20);
Setcolor(f);
cout << winner << " Win !";
Sleep(3000);
}
int main() {
system("color B9");
movewindow();
system("mode con lines=60 cols=188");
start1();
HideCursor();
gamestart:
system("cls");
p1.a = 1;
p2.a = 2;
p1.b[0] = 17;
p1.b[1] = 16;
p2.b[0] = 17;
p2.b[1] = 16;
hit[0] = 14;
hit[1] = 36;
p1.x = 10;
p1.y = bottom-28;
p2.x = 160;
p2.y = bottom-28;
p1.j = 0;
p2.j = 0;
p1.life = 80;
p2.life = 80;
p1.fly = 1;
p2.fly = 1;
p1.flying = 0;
p2.flying = 0;
p1.gaying = 0;
p2.gaying = 0;
p1.myself = 0;
p2.myself = 1;
p1.dir = 1;
start2();
system("cls");
mapprint();
p1.print();
p2.print();
bool flag = 0;
float count=0;
int num = 0;
Sleep(500);
bool flying = 0;
while (p1.life > -1 && p2.life > -1) {
++count;
++num;
if (num >= 1000)num = 0;
if (da1)--da1;
if (da2)--da2;
if (p1.loving) {
--p1.loving;
if (num% 5 == 0) {
if (p1.x > p2.x)p1.move(1);
else p1.move(2);
}
if (!p1.loving)p1.print();
}
if (p2.loving){
--p2.loving;
if (num % 5 == 0) {
if (p2.x > p1.x)p2.move(1);
else p2.move(2);
}
if (!p2.loving)p2.print();
}
if (p1.gaying)--p1.gaying;
if (p2.gaying)--p2.gaying;
if (p1.fly&& p1.y < bottom) {
p1.clear();
++p1.y;
p1.print();
}
if (p2.fly&& p2.y < bottom) {
p2.clear();
++p2.y;
p2.print();
}
if (p1.y == bottom) {
p1.jh = 0;
p1.fly = 0;
p1.j = 0;
flying = 1;
}
if (p2.y == bottom) {
p2.jh = 0;
p2.fly = 0;
p2.j = 0;
}
if (p1.j) {
if (!p1.fly)p1.jump();
else --p1.j;
}
if (p2.j) {
if (!p2.fly)p2.jump();
else --p2.j;
}
if (p1.flying)p1.flown();
if (p2.flying)p2.flown();
if(flying)Getmove();
if (count >= 2.5) {
count -= 2.5;
for (register int i = 0; i <= 1; ++i)
for (register int j = 0; j <= 1; ++j) {
if (cool[i][j] > 0) {
cool[i][j] -= 0.1;
if (cool[i][j] < 0)cool[i][j] = 0;
skillprint(i, j);
}
}
}
if (!flag&&p1.x == p2.x)flag = 1;
if (flag && (p1.x != p2.x || p1.y != p2.y)) {
flag = 0;
p1.print();
p2.print();
}
int strb = bu.size();
for (int i = 0; i < strb; ++i) {
if (bu[i].soap) {
if (bu[i].fly()) {
bu.erase(bu.begin() + i);
--i;
--strb;
break;
}
}
else if (bu[i].boom || bu[i].love)
{
if (bu[i].fly() || bu[i].fly()) {
bu.erase(bu.begin() + i);
--i;
--strb;
break;
}
}
else if (bu[i].fly() || bu[i].fly()||bu[i].fly()) {
bu.erase(bu.begin() + i);
--i;
--strb;
break;
}
}
Sleep(40 - strb / 5);
}
winprint(p1.life < p2.life);
goto gamestart;
}
