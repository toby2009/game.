#include <iostream> 
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <algorithm>
using namespace std;
void color(int a){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
int n, x, y;
int a[15][15];

void output(){
    system("cls");
    for(int i = 1; i <= n; i++){
        color(15 + 6 * 16);
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 0){
                cout << "  ";
            }else{
                printf("%02d", a[i][j]);
            }
            if(j != n){
                cout << " ";
            }
        }
        color(15);
        cout << endl;
    }
}

bool ying(){
    bool hh1 = false;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == n && j == n){
                return true;
            }else{
                if(a[i][j] != i * n - n + j){
                    hh1 = true;
                    break;
                }
            }
        }
        if(hh1){
            break;
        }
    }
    return false;
}

void yi(int x1){
    if(x1 == 0){
        if(x == n){
            return;
        }else{
            swap(a[x][y], a[x + 1][y]);
            x++;
        }
    }else if(x1 == 1){
        if(x == 1){
            return;
        }else{
            swap(a[x][y], a[x - 1][y]);
            x--;
        }
    }else if(x1 == 2){
        if(y == n){
            return;
        }else{
            swap(a[x][y], a[x][y + 1]);
            y++;
        }
    }else{
        if(y == 1){
            return;
        }else{
            swap(a[x][y], a[x][y - 1]);
            y--;
        }
    }
}

void suii1(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == n && j == n){
                a[i][j] = 0;
            }else{
                a[i][j] = i * n - n + j;
            }
        }
    }
    srand(time(NULL));
    long long sui1 = rand() % 1000000007;
    while(sui1 <= 1000000000000000007){
        sui1 = sui1 * sui1;
    }
    while(sui1 > 0){
        int aa1 = sui1 % 4;
        sui1 = sui1 / 4;
        if(aa1 == 0 && x == n){
            aa1 = 1;
        }else if(aa1 == 1 && x == 1){
            aa1 = 0;
        }else if(aa1 == 2 && y == n){
            aa1 = 3;
        }else if(aa1 == 3 && y == 1){
            aa1 = 2;
        }
        yi(aa1);
    }
}

void suii2(){
    bool az1[110];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){

        }
    }
}

void play(){
    p2:system("cls");
    cout << "游戏开始" << endl; 
    cout << "请输入关键字" << endl;
    int m1;
    cin >> m1;
    if(m1 == 1){
        freopen("数字华容道.txt", "r", stdin);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
                if(a[i][j] == 0){
                    x = i;
                    y = j;
                }
            }
        }
        freopen("CON","r",stdin);
    }else if(m1 == 2){
        suii1();
    }else if(m1 == 3){
        suii2();
    }else{
        goto p2;
    }
    while(true){
        output();
        if(ying()){
            break;
        }
        char m2 = getch();
        if(m2 == '0'){
            return;
        }else if(m2 == 'w'){
            yi(0);
        }else if(m2 == 's'){
            yi(1);
        }else if(m2 == 'a'){
            yi(2);
        }else if(m2 == 'd'){
            yi(3);
        }
    }
    cout << "恭喜获胜！" << endl;
    Sleep(3000);
    return;
}

int main( ){
    system("mode con cols=50 lines=20");
    color(15);
    cout << "本游戏由XTW蒟蒻编制" << endl;
    Sleep(2000);
    p1:cout << "请输入阶数" << endl;
    cin >> n;
    if(n < 2 || n > 10){
        cout << "输入有误" << endl;
        Sleep(500);
        system("cls");
        goto p1;
    }
    x = n;
    y = n;
    Sleep(1000);
    play();
    cout << "本游戏由XTW蒟蒻编制" << endl;
    Sleep(2000);
    return 0;
}
