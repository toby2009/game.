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
    cout << "��ӭ�����´���Ϸ!����Ȼ���Ը��Ĳ�����Ĵʣ�" << endl;
    cout << "ѡ��ģʽ (1P / 2P)" << endl;
    cin >> chop;
    if(chop == "2P"){
        cout << "1����ң�������Ŀ���" << endl;
        cin >> qp;
        n = qp.size();
        cout << "������������Է��Ļ�����" << endl;
        cin >> life;
        for(int i = 0; i < n; i++){
            a[i] = qp[i];
        }
    }else{
        cout << "����������µĵ��ʵĳ��� " << endl;
        cin >> n;
        cout << "����������Ҫ�Ļ����� " << endl;
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
        cout << "�´�״̬��" << endl;
        for(int i = 0; i < n; i++){
            if(rev[i]){
                cout << a[i];
                cnt++;
            }else{
                cout << "-";
            }
        }
        cout << endl;
        cout << "�³�" << cnt << "����ĸ" << endl;
        if(cnt == n){
            cout << "��Ӯ�ˣ�" << endl;
            return 0;
        }
        cout << "ʣ�������: " << life << endl;
        cout << "ѡ����Ҫ�µ���ĸ: ";
        cnt = 0;
        cin >> ch;
        while(1){
            if(p[int(ch) - 97] == true){
                cout << endl;
                cout << "�¹��ˣ�";
                cin >> ch;
            }else{
                p[int(ch) - 97] = true;
                cout << "�����..." << endl;
                Sleep(300);
                for(int i = 0; i < n; i++){
                    if(a[i] == ch){
                        rev[i] = true;
                        cnt++;
                    }
                }
                if(cnt == 0){
                    cout << "��ʧȥ��һ�λ���!" << endl;
                    life--;
                }
                cout << "���ֲ³�" << cnt << "����ĸ" << endl;
                cnt = 0;
                system("pause");
                system("cls");
                break;
            }
        }
    }
    cout << "�����ˡ�" << endl;
    return 0;
}
