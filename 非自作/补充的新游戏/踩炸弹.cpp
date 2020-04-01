#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;
int hiscore = 10000000;
void gotoxy(int x,int y){
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
bool confirm() {
    char ch;
    while (true) {
        ch = getch();
        switch(ch) {
            case'y':
                return true;
            case'n':
                return false;
            default:
                break;
        }
    }
}
void ask_hint(){
    cout << "是否开启提示? (y/n)" << endl;
    if(confirm()){
        system("cls");
        cout << "欢迎来到清理游戏!" << endl;
        Sleep(1800);
        cout << "目标是清除棋盘上的所有字母（炸弹除外）。" << endl;
        Sleep(2400);
        system("cls");
        cout << "按'w'向上，'a'向左移动，'s'向下移动然后'd'向右移动。" << endl;
        Sleep(3000);
        cout << "谨防！ 有一封炸弹信条，一旦你在炸弹上面就输了！" << endl;
        Sleep(2000);
        system("cls");
        return;
    }
}
int main(){
    system("cls");
    ask_hint();
    system("cls");
    Sleep(1000);
    int n;
    int comp = false;
    char s;
    cout << "选择尺寸(1 ~ 10)" << endl;
    cin >> n;
    char mm[n][n];
    int ran[n][n];
    char bomb;
    clock_t start, end;
    double dur;
    srand(time(NULL));
    bomb = char(rand() % 26 + 97);
    system("cls");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ran[i][j] = rand() % 26 + 97;
            mm[i][j] = char(ran[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            gotoxy(10 + i, 10 + j);
            cout << mm[i][j];
        }
        cout << endl;
    }
    int x = 0;
    int y = 0;
    gotoxy(0, 21);
    cout << "代表炸弹的是字母 " << bomb << endl;
    if(comp){
        gotoxy(10, 0);
        cout << "最快的时间：" << hiscore / 1000 << endl;
    }
    start = clock();
    cycle:
        char ch = 'p';
        gotoxy(10 + x, 10 + y);
        if(kbhit()){
            gotoxy(0, 20);
            ch = getche();
            if(mm[x][y] == bomb){
                goto boom;
            }else{
                mm[x][y] = ' ';
                gotoxy(10 + x, 10 + y);
                cout << mm[x][y];
            }
        }
    switch(ch){
        case 'w':{
            if(!(y-1<0))
                y--; 
            break;
        }
        case 's':{
            if(!(y+1>=n))
                y++;
            break;
        }
        case 'a':{
            if(!(x-1<0))
                x--;
            break;
        }
        case 'd':{
            if(!(x+1>=n))
                x++;
            break;
        }
        default: break;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mm[i][j] != ' ' && mm[i][j] != bomb){
                    goto cycle;
                }
            }
        }
        goto win;
    boom:
        system("cls");
        cout << "轰!" << endl;
        cout << "你踩到了炸弹" << endl;
        return 0;
    win:
        end = clock();
        dur = end - start;
        system("cls");
        cout << "你获得了胜利" << endl;
        cout << "使用时间: ";
        printf("%. 3f", dur / 1000.0);
        cout << " 秒" << endl;
        system("pause");
        return 0;
}
