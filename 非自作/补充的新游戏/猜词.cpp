#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
    srand(time(NULL));
    int n;
    char a[n];
    string chop;
    string qp;
    int life;
    bool p[26] = {false};
    cout << "欢迎来到猜词游戏!（虽然电脑给的不是真的词）" << endl;
    cout << "选择模式 (1P / 2P)" << endl;
    cin >> chop;
    if(chop == "2P"){
        cout << "1号玩家，请输入目标词" << endl;
        cin >> qp;
        n = qp.size();
        cout << "请输入您想给对方的机会数" << endl;
        cin >> life;
        for(int i = 0; i < n; i++){
            a[i] = qp[i];
        }
    }else{
        cout << "请输入你想猜的单词的长度 " << endl;
        cin >> n;
        cout << "请输入你想要的机会数 " << endl;
        cin >> life;
    }
    system("cls");
    bool rev[n] = {false};
    if(chop == "1P"){
        for(int i = 0; i < n; i++){
            a[i] = char(rand() % 26 + 97);
        }
    }
    int cnt = 0;
    char ch;
    while(life > 0){
        cout << "猜词状态：" << endl;
        for(int i = 0; i < n; i++){
            if(rev[i]){
                cout << a[i];
                cnt++;
            }else{
                cout << "-";
            }
        }
        cout << endl;
        cout << "猜出" << cnt << "个字母" << endl;
        if(cnt == n){
            cout << "你赢了！" << endl;
            return 0;
        }
        cout << "剩余机会数: " << life << endl;
        cout << "选择你要猜的字母: ";
        cnt = 0;
        cin >> ch;
        while(1){
            if(p[int(ch) - 97] == true){
                cout << endl;
                cout << "猜过了！";
                cin >> ch;
            }else{
                p[int(ch) - 97] = true;
                cout << "检测中..." << endl;
                Sleep(300);
                for(int i = 0; i < n; i++){
                    if(a[i] == ch){
                        rev[i] = true;
                        cnt++;
                    }
                }
                if(cnt == 0){
                    cout << "你失去了一次机会!" << endl;
                    life--;
                }
                cout << "本轮猜出" << cnt << "个字母" << endl;
                cnt = 0;
                system("pause");
                system("cls");
                break;
            }
        }
    }
    cout << "你输了。" << endl;
    return 0;
}
