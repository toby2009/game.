#include <windows.h>      
#include <conio.h>         
#include <bits/stdc++.h>
using namespace std;
int rest[3][5],r1,r2;      //rest[1]:玩家的海域; rest[2]:电脑的海域  r1:玩家还剩船数; r2:电脑还剩船数 
int b1[12][12],b2[12][12];                            //0:空海; 1:船只;  2:打中; 3:边界 4:未打中 5:沉船 
int c1[12][12],c2[12][12];                            //c1:玩家海域的颜色  c2:电脑海域颜色 
int fx[8][2]={{0,1},{1,0},{0,-1},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}};
int now[2][2];              //now[左/右][x/y]  光标 
string a1[12][12],a2[12][12];
int fd [500][2],head=0,tail=0;
void movewindow();
void color(int a)//颜色函数
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
void gotoxy(int x,int y)//位置函数(整个界面)(行为x 列为y)
{
COORD pos;
pos.X=2*(y);
pos.Y=x;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void gotoxy1(int x,int y)//位置函数(左边棋盘)(行为x 列为y)
{
COORD pos;
pos.X=2*(y+5);
pos.Y=x+1;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void gotoxy2(int x,int y)//位置函数(右边棋盘)(行为x 列为y)
{
COORD pos;
pos.X=2*(y+18);
pos.Y=x+1;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void check2(int x,int y){
    int k=0,kx,ky,f=1;
    for (int i=0; i<=3; i++){
        if (b2[x+fx[i][0]][y+fx[i][1]]==2) k=i;
        if (b2[x+fx[i][0]][y+fx[i][1]]==1) f=0;
    }
    for (kx=x,ky=y; b2[kx][ky]==2; kx+=fx[k][0],ky+=fx[k][1]);
    if (b2[kx][ky]==1) f=0;
    if (f){
        int w=0;
        color(12);
        for (kx=x,ky=y; b2[kx][ky]==2; kx+=fx[k][0],ky+=fx[k][1]){
            gotoxy2(kx,ky);
            a2[kx][ky]="※";
            c2[kx][ky]=12; 
            cout <<"※";
            w++;
        }
        for (kx=x+fx[(k+2)%4][0],ky=y+fx[(k+2)%4][1]; b2[kx][ky]==2; kx+=fx[(k+2)%4][0],ky+=fx[(k+2)%4][1]){
            gotoxy2(kx,ky);
            a2[kx][ky]="※";
            c2[kx][ky]=12; 
            cout <<"※";
            w++;
        }

        if (w>0){
            rest[2][w]--;
            r2--; 
            if (rest[2][w]>0) color(14); else color(11);
            gotoxy2(5-w,16); printf("*%d",rest[2][w]);
        }
    }
}

int move1(){
    if (r1*r2==0) return(1);

    color(5); gotoxy1(14,4); printf("电脑开炮");
    color(13); gotoxy2(14,4); printf("玩家开炮");

    int kx=now[1][0],ky=now[1][1],lastx,lasty,f=1;
    char ch;
    gotoxy2(kx,ky); color(11); if (a2[kx][ky]!="  ")cout <<a2[kx][ky]; else cout <<"▂"; gotoxy2(kx,ky);
    while (f){
        ch=getch();
        if (ch=='1' || ch=='a'){kx=now[1][0]+fx[2][0]; ky=now[1][1]+fx[2][1];}
        if (ch=='2' || ch=='s'){kx=now[1][0]+fx[1][0]; ky=now[1][1]+fx[1][1];}
        if (ch=='3' || ch=='d'){kx=now[1][0]+fx[0][0]; ky=now[1][1]+fx[0][1];}
        if (ch=='5' || ch=='w'){kx=now[1][0]+fx[3][0]; ky=now[1][1]+fx[3][1];}
        if (kx>0 && kx<=10 && ky>0 && ky<=10){
            gotoxy2(now[1][0],now[1][1]); color(c2[now[1][0]][now[1][1]]); cout <<a2[now[1][0]][now[1][1]];
            gotoxy2(kx,ky); color(11); if (a2[kx][ky]!="  ")cout <<a2[kx][ky]; else cout <<"▂"; gotoxy2(kx,ky);
            now[1][0]=kx; now[1][1]=ky;
        }

        if ((ch=='0' || ch==' ')&& b2[kx][ky]<=1){ 
            if (b2[kx][ky]==1){b2[kx][ky]=2; a2[kx][ky]="◎"; c2[kx][ky]=4;}
            if (b2[kx][ky]==0){b2[kx][ky]=4; a2[kx][ky]="  ";}
            gotoxy2(kx,ky); color(c2[kx][ky]); cout <<a2[kx][ky];
            f=0;
            check2(kx,ky);
            color (7); gotoxy2(12,4); cout <<"(";  color(6); cout <<ky; color(7); cout <<","; color(2); cout <<kx;color(7); cout<<")  ";
            if (b2[kx][ky]==2) move1();
        }

        if (ch=='8' || ch=='g'){
            for (int i=1; i<=10; i++) for (int j=1; j<=10; j++)
                if (b2[i][j]==1){
                    gotoxy2(i,j);
                    color(10);
                    printf("Ω");
                }
            char ccc=getch();
            for (; ccc!='8' && ccc!='g'; ccc=getch());
            for (int i=1; i<=10; i++)for (int j=1; j<=10; j++){
                gotoxy2(i,j);
                color(c2[i][j]);
                cout <<a2[i][j];
            }
            gotoxy2(kx,ky); color(11); if (a2[kx][ky]!="  ")cout <<a2[kx][ky]; else cout <<"▂"; gotoxy2(kx,ky);
        }

        if (ch=='4' || ch=='q') return(0);
    }
    return(1);
}

int ok(int x,int y){
    int nnn=0;
    if (b1[x][y]==2 || b1[x][y]==4 || b1[x][y]==5) return(0);
    for (int i=0; i<=7; i++){
        if (b1[x+fx[i][0]][y+fx[i][1]]==2) nnn++;
        if (b1[x+fx[i][0]][y+fx[i][1]]==5) return(0);
    }
    if (nnn>1) return(0);
    return(1);
}

void check1(int x,int y) {
    int k=0,kx,ky,f=1;
    for (int i=0; i<=3; i++){
        if (b1[x+fx[i][0]][y+fx[i][1]]==2) k=i;
        if (b1[x+fx[i][0]][y+fx[i][1]]==1) f=0;
    }
    for (kx=x,ky=y; b1[kx][ky]==2; kx+=fx[k][0],ky+=fx[k][1]);
    if (b1[kx][ky]==1) f=0;

    if (f){
        int w=0;
        color(12);
        for (kx=x,ky=y; b1[kx][ky]==2; kx+=fx[k][0],ky+=fx[k][1]){
            gotoxy1(kx,ky);
            b1[kx][ky]=5;
            a1[kx][ky]="※";
            c1[kx][ky]=12; 
            cout <<"※";
            w++;
        }
        for (kx=x+fx[(k+2)%4][0],ky=y+fx[(k+2)%4][1]; b1[kx][ky]==2; kx+=fx[(k+2)%4][0],ky+=fx[(k+2)%4][1]){
            gotoxy1(kx,ky);
            b1[kx][ky]=5;
            a1[kx][ky]="※";
            c1[kx][ky]=12; 
            cout <<"※";
            w++;
        }

        if (w>0){
            rest[1][w]--;
            r1--; 
            if (rest[1][w]>0) color(14); else color(11);
            gotoxy1(5-w,-5); 
            printf("%d*",rest[1][w]);
        }
    }
}

void move2(){
    if (r1*r2==0) return;

    color(13); gotoxy1(14,4); printf("电脑开炮");
    color(5); gotoxy2(14,4); printf("玩家开炮");

    Sleep(750);
    int kx=0,ky=0,over=0;

    while (tail>head){
        head++;
        kx=fd[head][0]; ky=fd[head][1];
        if (ok(kx,ky)){over=1; break;}
    }   
    while (!over){
        kx=rand()%(10)+1;
        ky=rand()%(10)+1;
        if (ok(kx,ky)) over=1;
    }

    if (b1[kx][ky]==1){b1[kx][ky]=2; a1[kx][ky]="◎"; c1[kx][ky]=4;}
    if (b1[kx][ky]==0){b1[kx][ky]=4; a1[kx][ky]="  ";}

    gotoxy1(kx,ky); color(11); printf("⊕"); Sleep(600);
    gotoxy1(kx,ky); color(c1[kx][ky]); cout <<a1[kx][ky];
    color (7); gotoxy1(12,4); cout <<"(";  color(6); cout <<ky; color(7); cout <<","; color(2); cout <<kx;color(7); cout<<")  ";

    check1(kx,ky);

    if ((b1[kx][ky]==2 || b1[kx][ky]==5)&& r1*r2>0){
        int i=rand()%(4);
        for (int ii=0; ii<=3; ii++){
            int px=kx+fx[i][0],py=ky+fx[i][1];
            if (px>0 && px<=10 && py>0 && py<=10){
                tail++;
                fd[tail][0]=px;
                fd[tail][1]=py;
            }
            i=(i+1)%4;
        }
        move2();
    }
}

void put(){
    int k=4;
    while (k--){
        for (int i=1; i<=4-k; i++){
            int f1=0,f2=0;
            int dir1,dir2;
            dir1=rand()%(2);
            dir2=rand()%(2);
            while (!f1){
                f1=1;
                int lx=rand()%(10)+1;
                int ly=rand()%(10)+1;
                for(int nx=lx-1; nx<=lx+fx[dir1][0]*k+1; nx++)
                    for (int ny=ly-1; ny<=ly+fx[dir1][1]*k+1; ny++)
                        if(b1[nx][ny]==1){f1=0; break;}

                for (int nx=lx; nx<=lx+fx[dir1][0]*k; nx++)
                    for (int ny=ly; ny<=ly+fx[dir1][1]*k; ny++)
                        if (b1[nx][ny]==3){f1=0; break;}

                if (f1){
                    for (int jx=lx,jy=ly; jx<=lx+fx[dir1][0]*k && jy<=ly+fx[dir1][1]*k; jx+=fx[dir1][0],jy+=fx[dir1][1]){
                        b1[jx][jy]=1;
                        c1[jx][jy]=15;
                        color(15);
                        gotoxy1(jx,jy); printf("□");
                    }
                }
            }
            while (!f2){
                f2=1;
                int lx=rand()%(10)+1;
                int ly=rand()%(10)+1;
                for(int nx=lx-1; nx<=lx+fx[dir2][0]*k+1; nx++)
                    for (int ny=ly-1; ny<=ly+fx[dir2][1]*k+1; ny++)
                        if(b2[nx][ny]==1){f2=0; break;}

                for (int nx=lx; nx<=lx+fx[dir2][0]*k; nx++)
                    for (int ny=ly; ny<=ly+fx[dir2][1]*k; ny++)
                        if (b2[nx][ny]==3){f2=0; break;}

                if (f2){
                    for (int jx=lx,jy=ly; jx<=lx+fx[dir2][0]*k && jy<=ly+fx[dir2][1]*k; jx+=fx[dir2][0],jy+=fx[dir2][1])
                        b2[jx][jy]=1;
                }
            }
            int a=1;
        }
    }
}

void reset(){
    system("cls");
    color(15);gotoxy(18,10); printf("按 0 重排战船; 按任意键开始与电脑对战"); 

    color(9);
    gotoxy(0,9 ); printf("玩家海域");
    gotoxy(0,22); printf("电脑海域");

    for (int i=1; i<=4; i++) rest[1][i]=rest[2][i]=5-i;
    for (int i=1; i<=10; i++){
        b1[0][i]=b1[i][0]=b2[0][i]=b2[i][0]=3;
        b1[11][i]=b1[i][11]=b2[11][i]=b2[i][11]=3;
    }
    color(8);
    for (int i=1; i<=10; i++)for (int j=1; j<=10; j++) c1[i][j]=c2[i][j]=8;
    for (int i=1; i<=10; i++)for (int j=1; j<=10; j++){
        b1[i][j]=b2[i][j]=0;
        a1[i][j]="□"; gotoxy1(i,j); cout <<a1[i][j];
        a2[i][j]="□"; gotoxy2(i,j); cout <<a2[i][j];
    }
    color(14);
    gotoxy1(1,-5); printf("%d*□□□□",rest[1][4]);
    gotoxy1(2,-5); printf("%d*□□□  ",rest[1][3]);
    gotoxy1(3,-5); printf("%d*□□    ",rest[1][2]);
    gotoxy1(4,-5); printf("%d*□      ",rest[1][1]);
    gotoxy2(4,12); printf("      □*%d",rest[2][1]);
    gotoxy2(3,12); printf("    □□*%d",rest[2][2]);
    gotoxy2(2,12); printf("  □□□*%d",rest[2][3]);
    gotoxy2(1,12); printf("□□□□*%d",rest[2][4]);

    color(2); for (int i=1; i<=10; i++){gotoxy1(i,11); cout <<i; gotoxy2(i,11); cout <<i;}
    color(6); for (int i=1; i<=10; i++){gotoxy1(11,i); cout <<i; gotoxy2(11,i); cout <<i;}
    color(7);   gotoxy1(12,4); printf("( , )"); gotoxy2(12,4); printf("( , )");

    put();

    now[0][0]=now[0][1]=now[1][0]=now[1][1]=1;
    r1=r2=10;

    char res=getch(); if (res=='0') reset();
}

int main(){
    int gameover=1;
    while (gameover){
        srand(time(NULL));
        reset();
        gotoxy(18,10); printf("                                        ");
        int haha=0; 
        while (r1*r2){
            if (!move1()){haha=1; break;}          //玩家(haha==1说明中途退出)
            move2();                               //电脑 
        }
        gotoxy(18,0);
        if (haha) printf("怎么中途退出了...\n\n");
        else if (r1==0) printf("很遗憾，你输了...\n\n");
        else if (r2==0) printf("恭喜你，你赢了!!!\n\n");
        printf("按1退出;  按其它键继续\n>>");
        if (getch()=='1') gameover=0;
    }
}
