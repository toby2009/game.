#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y) {
COORD c= {y-1,x-1};
SetConsoleCursorPosition
(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void HideCursor() {
CONSOLE_CURSOR_INFO cs= {1,0};
SetConsoleCursorInfo(
GetStdHandle(STD_OUTPUT_HANDLE),&cs);
}
char s1[21][22]= {
" ",
" ====================",
" 00=0000000000000000=",
" =000==============0=",
" =0=0=000000000000=0=",
" =0=0=0============0=",
" =0=0=0=000000000000=",
" =0=0=0============0=",
" =0=00000000000000=0=",
" =0==============0=0=",
" =000000000000=0=0=0=",
" ==============0===0=",
" =000000000000=0=0=0=",
" =0=0========0=0=0=0=",
" =0=0=00000000=0=0=0=",
" =0=0=0=0=0====0=0=0=",
" =0=0=0=0=0000=0=0=0=",
" =0=0=0=00=0=0=000=0=",
" ===0=0====0===0===0=",
" 0000=000=0000000000=",
" ===================="
};
char s2[21][22]= {
" ",
" =0==================",
" =0=0000000000000000=",
" =0================0=",
" =0=000=000000000000=",
" =0=0=0=0==========0=",
" =0=0=0=0=0000000000=",
" =0=0=0=0=0==========",
" =000=000=0000000000=",
" ==================0=",
" =000=0=0000000000=0=",
" =0=00000=0=0======0=",
" =0=====0=0=0=0000=0=",
" =0=000=0=0=0=0====0=",
" =0===0=0===0=0=0000=",
" =0=000=000=0=0==0=0=",
" =0=0=====0=0=00===0=",
" =0=0=000=0=0==00000=",
" =0=0=0=0=0=00===0=0=",
" 00=000=0000=00000=0=",
" ====================",
};
char s3[21][22]= {
" ",
" ====================",
" =0000000000=00=00000",
" =0========0=0==0====",
" =0=000=0=00=0=00000=",
" =0=0=0=0====0=0===0=",
" =0=0===0000=0=0=0=0=",
" =0000=00==0=0=0=0=0=",
" =0==0=0==00=0=0=000=",
" =0=00=000===0=0=====",
" =0====0=000=0=00000=",
" 0000000=====0=====0=",
" ======0=0=0=00000=0=",
" =000000=0=000===0=0=",
" =0=0====0===0=0=0=0=",
" =0=0000=000=0=0=0=0=",
" =0========0=0=0=0=0=",
" =000000000000=0=0=0=",
" ========0===0=0=0=0=",
" =00000000=000=00000=",
" ====================",
};
char s4[21][22]= {
" ",
" ====================",
" 00=0000000=00000000=",
" =0=0=======0==0=0=0=",
" =00000000000=00=0=0=",
" ================0=0=",
" =0000000000000000=0=",
" =====0=0=0===0====0=",
" =000=0=0=0=0=0=0=00=",
" =0=000=0=000=000====",
" =0=====0=0===0===00=",
" =00000=0=0=0=00000==",
" =0===0=0=0=0=0==0=0=",
" =000=0=0=0=0=0=00=0=",
" =====0=0=0=0=0====0=",
" 0000=0=0=0=0=0000=0=",
" ===0=0=0=0=0=0==0=0=",
" =000=0=0=0=000=00=0=",
" =0=========0======0=",
" =000000000000000000=",
" ====================",
};
char s5[21][22]= {
" ",
" ==============0=====",
" =000=00=0=0=0=0=0=0=",
" =0=000==0=0=000=000=",
" =0=====00=0=0=====0=",
" =000000=0=0=00000=0=",
" ======0=0=0===0=0=0=",
" =000000=0=000=0=0=0=",
" =0======0===0=0=0=0=",
" =0000=000000000=0=0=",
" =0==0=0===========0=",
" =00=000000000000000=",
" ========0===========",
" 0000000=0=000000000=",
" =0======0=0=0=====0=",
" =0=0000=0=0=00=00=0=",
" =0=0====0=0==0==0=0=",
" =0=000000000=0000=0=",
" =0=========0======0=",
" =00000000000=000000=",
" ====================",
};
char s6[21][22]= {
" ",
" ==0=================",
" =00=000000000000000=",
" =0==0=============0=",
" =0000=00000=0000000=",
" ==========0=0=0===0=",
" =000000000000=0=000=",
" =0===0========0=0===",
" =0=0=0=000000=0=000=",
" =0=0=0======0=0===0=",
" =000=00000000=0=000=",
" =0============0=====",
" =000000000000=00000=",
" ======0=====0=======",
" =00=0=0=000=000=000=",
" =0==000=0=0=0=0=0=0=",
" =0=0====0=====0===0=",
" =000000000000000000=",
" =0================0=",
" 00=0000000000000000=",
" ====================",
};
void run(int p,char mg[21][22],int ex,int ey,int vx) {
system("color e4");
system("cls");
for(int i=1; i<21; i++) {
for(int j=1; j<21; j++) {
if(mg[i][j]=='=')SetConsoleTextAttribute(
GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
else SetConsoleTextAttribute(
GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
printf("　");
}
printf("\n");
}
SetConsoleTextAttribute(
GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
gotoxy(ex,ey*2-1);
if(ex==1)printf("↑");
else if(ex==20)printf("↓");
else if(ey==1)printf("←");
else printf("→");
if(p==1) {
int a[2]= {vx,1};
while(!(a[0]==ex&&a[1]==ey)) {
gotoxy(a[0],a[1]*2-1);
printf("＠");
int c=0;
if(GetAsyncKeyState('a')||GetAsyncKeyState('A')) {
gotoxy(a[0],a[1]*2-1);
printf("·");
if(a[1]!=1&&mg[a[0]][a[1]-1]!='=')a[1]--;
c=1;
}
if(GetAsyncKeyState('w')||GetAsyncKeyState('W')) {
gotoxy(a[0],a[1]*2-1);
printf("·");
if(mg[a[0]-1][a[1]]!='=')a[0]--;
c=1;
}
if(GetAsyncKeyState('s')||GetAsyncKeyState('S')) {
gotoxy(a[0],a[1]*2-1);
printf("·");
if(mg[a[0]+1][a[1]]!='=')a[0]++;
c=1;
}
if(GetAsyncKeyState('d')||GetAsyncKeyState('D')) {
gotoxy(a[0],a[1]*2-1);
printf("·");
if(mg[a[0]][a[1]+1]!='=')a[1]++;
c=1;
}
if(c) {
gotoxy(a[0],a[1]*2-1);
printf("＠");
}
Sleep(100);
}
} else {
int a[2]= {vx,1},b[2]= {vx,1};
while((!(a[0]==ex&&a[1]==ey))&&(!(b[0]==ex&&b[1]==ey))) {
gotoxy(a[0],a[1]*2-1);
SetConsoleTextAttribute(
GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
printf("＠");
gotoxy(b[0],b[1]*2-1);
SetConsoleTextAttribute(
GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
printf("＠");
int ca=0,cb=0;
SetConsoleTextAttribute(
GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
if(GetAsyncKeyState('a')||GetAsyncKeyState('A')) {
gotoxy(a[0],a[1]*2-1);
printf("·");
if(a[1]!=1&&mg[a[0]][a[1]-1]!='=')a[1]--;
ca=1;
}
if(GetAsyncKeyState('w')||GetAsyncKeyState('W')) {
gotoxy(a[0],a[1]*2-1);
printf("·");
if(mg[a[0]-1][a[1]]!='=')a[0]--;
ca=1;
}
if(GetAsyncKeyState('s')||GetAsyncKeyState('S')) {
gotoxy(a[0],a[1]*2-1);
printf("·");
if(mg[a[0]+1][a[1]]!='=')a[0]++;
ca=1;
}
if(GetAsyncKeyState('d')||GetAsyncKeyState('D')) {
gotoxy(a[0],a[1]*2-1);
printf("·");
if(mg[a[0]][a[1]+1]!='=')a[1]++;
ca=1;
}
if(ca) {
gotoxy(a[0],a[1]*2-1);
printf("＠");
}
SetConsoleTextAttribute(
GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_INTENSITY);
if(GetAsyncKeyState(VK_UP)) {
gotoxy(b[0],b[1]*2-1);
printf("·");
if(mg[b[0]-1][b[1]]!='=')b[0]--;
cb=1;
}
if(GetAsyncKeyState(VK_DOWN)) {
gotoxy(b[0],b[1]*2-1);
printf("·");
if(mg[b[0]+1][b[1]]!='=')b[0]++;
cb=1;
}
if(GetAsyncKeyState(VK_LEFT)) {
gotoxy(b[0],b[1]*2-1);
printf("·");
if(b[1]!=1&&mg[b[0]][b[1]-1]!='=')b[1]--;
cb=1;
}
if(GetAsyncKeyState(VK_RIGHT)) {
gotoxy(b[0],b[1]*2-1);
printf("·");
if(mg[b[0]][b[1]+1]!='=')b[1]++;
cb=1;
}
if(cb) {
gotoxy(b[0],b[1]*2-1);
printf("＠");
}
Sleep(100);
}
}
}
int n;
int main() {
system("color e4");
HideCursor();
int a=1;
cxp:
gotoxy(1,1);
printf("按'←''→'移动，空格选择\n");
gotoxy(2,1);
if(a==1)printf("*********");
else for(int i=0; i<9; i++)printf(" ");
printf("*");
if(a==2)printf("*********");
else for(int i=0; i<9; i++)printf(" ");
gotoxy(3,1);
if(a==1)printf("*");
else printf(" ");
printf("单人模式*双人模式");
if(a==2)printf("*");
else printf(" ");
gotoxy(4,1);
if(a==1)printf("*********");
else for(int i=0; i<9; i++)printf(" ");
printf("*");
if(a==2)printf("*********");
else for(int i=0; i<9; i++)printf(" ");
while(!kbhit());
if(GetAsyncKeyState(VK_LEFT))a=1;
if(GetAsyncKeyState(VK_RIGHT))a=2;
if(GetAsyncKeyState(' '))goto xzp;
goto cxp;
xzp:
int b[3]= {rand()%6+1,rand()%6+1,rand()%6+1};
while(b[0]==b[1]||b[1]==b[2]||b[0]==b[2]) {
b[1]=rand()%6+1;
b[2]=rand()%6+1;
b[0]=rand()%6+1;
}
switch(b[0]) {
case 1:
run(a,s1,19,1,2);
break;
case 2:
run(a,s2,1,2,19);
break;
case 3:
run(a,s3,2,20,11);
break;
case 4:
run(a,s4,15,1,2);
break;
case 5:
run(a,s5,1,15,13);
break;
case 6:
run(a,s6,1,3,19);
break;
}switch(b[1]) {
case 1:
run(a,s1,19,1,2);
break;
case 2:
run(a,s2,1,2,19);
break;
case 3:
run(a,s3,2,20,11);
break;
case 4:
run(a,s4,15,1,2);
break;
case 5:
run(a,s5,1,15,13);
break;
case 6:
run(a,s6,1,3,19);
break;
}switch(b[2]) {
case 1:
run(a,s1,19,1,2);
break;
case 2:
run(a,s2,1,2,19);
break;
case 3:
run(a,s3,2,20,11);
break;
case 4:
run(a,s4,15,1,2);
break;
case 5:
run(a,s5,1,15,13);
break;
case 6:
run(a,s6,1,3,19);
break;
}
return 0;
}
