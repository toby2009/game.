#include<bits/stdc++.h>
#include<ctime>
using namespace std;
int ma1[4][4] = { 0 };      
void print();               
int random_num();           
void random_place();            
void moveUp();          
void moveDown();        
void moveLeft();        
void moveRight();       

int main() {
    char ch;
    random_place(); //开始时，随机两个位置产生2或4
    random_place();
    while (1) {
        system("cls");
        print();
        cin >> ch;
        switch (ch) {
        case 'w':moveUp(); break;
        case 's':moveDown(); break;
        case 'a':moveLeft(); break;
        case 'd':moveRight(); break;
        case 'p':exit(0); break;
        default:cout << "输入错误，请重新输入！" << endl; break;
        }
    }
    system("pause");
}
void print() {
    cout << "************************************************" << endl;
    cout << "*     " << ma1[0][0] << "           " << ma1[0][1] << "           " << ma1[0][2] << "            " << ma1[0][3] << "    *" << endl;
    cout << "************************************************" << endl;
    cout << "*     " << ma1[1][0] << "           " << ma1[1][1] << "           " << ma1[1][2] << "            " << ma1[1][3] << "    *" << endl;
    cout << "************************************************" << endl;
    cout << "*     " << ma1[2][0] << "           " << ma1[2][1] << "           " << ma1[2][2] << "            " << ma1[2][3] << "    *" << endl;
    cout << "************************************************" << endl;
    cout << "*     " << ma1[3][0] << "           " << ma1[3][1] << "           " << ma1[3][2] << "            " << ma1[3][3] << "    *" << endl;
    cout << "************************************************" << endl;
    cout << "操作详情：(输入后，按回车键结束)" << endl;
    cout << "w :    向上移动        s :     向下移动" << endl;
    cout << "a :    向左移动        s :     向右移动" << endl;
    cout << "p :    退出" << endl;
}
int random_num() {
    srand((unsigned int)time(NULL));    //随机数
    int num = rand() % 10;
    return num < 1 ? 4 : 2;
}

void random_place() {
    int row, col;
    row = rand() % 4;
    col = rand() % 4;
    while (ma1[row][col] != 0) {
        row = rand() % 4;
        col = rand() % 4;
    }
    ma1[row][col] = random_num();
}

void moveUp() {         
    int flag, temp;
    for (int col = 0; col < 4; col++) {     
        for (int row = 0; row < 4; row++) {     
            if (ma1[row][col] != 0) {
                flag = row;
                while (flag != 0 && ma1[flag - 1][col] == 0) {          
                    temp = ma1[flag - 1][col];
                    ma1[flag - 1][col] = ma1[flag][col];
                    ma1[flag][col] = temp;
                    flag--;
                }
            }
        }
    }
    for (int col = 0; col < 4; col++) {     
        for (int row = 0; row < 3; row++) {
            if (ma1[row][col] == ma1[row + 1][col]) {
                ma1[row][col] *= 2;
                ma1[row + 1][col] = 0;
            }
        }
    }
    for (int col = 0; col < 4; col++) {     
        for (int row = 0; row < 4; row++) {
            if (ma1[row][col] != 0) {
                flag = row;
                while (flag != 0 && ma1[flag - 1][col] == 0) {
                    temp = ma1[flag - 1][col];
                    ma1[flag - 1][col] = ma1[flag][col];
                    ma1[flag][col] = temp;
                    flag--;
                }
            }
        }
    }
    random_place();
}
void moveDown() {
    int flag, temp;
    for (int col = 0; col < 4; col++) {
        for (int row = 3; row >= 0; row--) {
            if (ma1[row][col] != 0) {
                flag = row;
                while (flag != 3 && ma1[flag + 1][col] == 0) {          
                    temp = ma1[flag + 1][col];
                    ma1[flag + 1][col] = ma1[flag][col];
                    ma1[flag][col] = temp;
                    flag++;
                }
            }
        }
    }
    for (int col = 0; col < 4; col++) {     
        for (int row = 3; row > 0; row--) {
            if (ma1[row][col] == ma1[row - 1][col]) {
                ma1[row][col] *= 2;
                ma1[row - 1][col] = 0;
            }
        }
    }
    for (int col = 0; col < 4; col++) {     
        for (int row = 3; row >= 0; row--) {
            if (ma1[row][col] != 0) {
                flag = row;
                while (flag != 3 && ma1[flag + 1][col] == 0) {          
                    temp = ma1[flag + 1][col];
                    ma1[flag + 1][col] = ma1[flag][col];
                    ma1[flag][col] = temp;
                    flag++;
                }
            }
        }
    }
    random_place();
}
void moveLeft() {
    int flag, temp;
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            if (ma1[row][col] != 0) {
                flag = col;
                while (flag != 0 && ma1[row][flag-1] == 0) {            
                    temp = ma1[row][flag - 1];
                    ma1[row][flag - 1] = ma1[row][flag];
                    ma1[row][flag] = temp;
                    flag--;
                }
            }
        }
    }
    for (int row = 0; row < 4; row++) {     
        for (int col = 0; col < 3; col++) {
            if (ma1[row][col] == ma1[row][col+1]) {
                ma1[row][col] *= 2;
                ma1[row][col+1] = 0;
            }
        }
    }
    for (int row = 0; row < 4; row++) {     
        for (int col = 0; col < 4; col++) {
            if (ma1[row][col] != 0) {
                flag = col;
                while (flag != 0 && ma1[row][flag-1] == 0) {        
                    temp = ma1[row][flag - 1];
                    ma1[row][flag - 1] = ma1[row][flag];
                    ma1[row][flag] = temp;
                    flag--;
                }
            }
        }
    }
    random_place();
}
void moveRight() {
    int flag, temp;

    for (int row = 0; row < 4; row++) {
        for (int col = 3; col >= 0; col--) {
            if (ma1[row][col] != 0) {
                flag = col;
                while (flag != 3 && ma1[row][flag+1] == 0) {            
                    temp = ma1[row][flag + 1];
                    ma1[row][flag + 1] = ma1[row][flag];
                    ma1[row][flag] = temp;
                    flag++;
                }
            }
        }
    }
    for (int row = 0; row < 4; row++) {     
        for (int col = 3; col > 0; col--) {
            if (ma1[row][col] == ma1[row][col - 1]) {
                ma1[row][col] *= 2;
                ma1[row][col - 1] = 0;
            }
        }
    }
    for (int row = 0; row < 4; row++) {     
        for (int col = 3; col >= 0; col--) {
            if (ma1[row][col] != 0) {
                flag = col;
                while (flag != 3 && ma1[row][flag+1] == 0) {            
                    temp = ma1[row][flag + 1];
                    ma1[row][flag + 1] = ma1[row][flag];
                    ma1[row][flag] = temp;
                    flag++;
                }
            }
        }
    }
    random_place();
}
