#include <iostream>
#include <string>
#include "Windows.h"
using namespace std;
int main(){
    std::string ml;//all
    std::string wj;//give||title
    std::string wp;//give||fill||setblock
    std::string time;//timeset
    std::string wz;//title
    std::string a;//title
    long long g,m;//give
    long long xs,ys,zs,xe,ye,ze;//fill
    long long x,y,z;//setblock 
    cout<<"��ӭ����MC����ģ����(�汾��0.0.7)"<<endl;
    Sleep(500);
    while(true){
        Sleep(2000);
        cout<<"������һ������:";
        cin>>ml;
        if(ml=="/help"){
            cout<<"Ŀǰ֧������:"<<endl;
            Sleep(1500);
            cout<<"/help(��������)"<<endl;
            Sleep(1500);
            cout<<"/give @* * * *(���������Ʒ)"<<endl;
            Sleep(1500);
            cout<<"/setblock * * * *(���÷���)"<<endl;
            Sleep(1500); 
            cout<<"/timeset *(����ʱ��)"<<endl;
            Sleep(1500);
            cout<<"/title @* title *(��������)"<<endl;
            Sleep(1500);
            cout<<"/fill * * * * * * *(��䷽��)"<<endl;
            Sleep(1500);
            cout<<"���� ��/Esc �������˳�"<<endl;
        }else if(ml=="/give"){
            cin>>wj;
            cin>>wp;
            cin>>g>>m;
            cout<<"�Ѿ�������ҡ������� ��"<<wp<<g<<"��"<<m<<"��"<<endl; 
        }else if(ml=="/setblock"){
            cin>>x>>y>>z;
            cin>>wp;
            cout<<"�Ѿ���"<<x<<","<<y<<","<<z<<"������"<<wp<<"����"<<endl;
        }else if(ml=="/timeset"){
            cin>>time;
            cout<<"������ʱ��"<<time;
        }else if(ml=="/fill"){
            cin>>xs>>ys>>zs>>xe>>ye>>ze;
            cin>>wp;
            cout<<"�Ѵ�"<<xs<<","<<ys<<","<<zs<<"��"<<xe<<","<<ye<<","<<ze<<"�����Ϸ���"<<wp;
        }else if(ml=="/title"){
            cin>>wj;
            cin>>a;
            cin>>wz;
            cout<<wz<<endl;
            Sleep(1000);
            cout<<"��������ִ�гɹ�"<<endl;
        }else if(ml=="/Esc"){
            cout<<"MC";
            Sleep(1500);
            cout<<"��";
            Sleep(1500);
            cout<<"��";
            Sleep(1500);
            cout<<"ģ����:";
            Sleep(1500);
            cout<<"��";
            Sleep(1500);
            cout<<"��";
            Sleep(1500);
            cout<<"��";
            Sleep(1500);
            cout<<"��";
            Sleep(1500);
            cout<<"��"<<endl;
            break;
        }else{
            cout<<"δ֪������:"<<ml<<endl;
            Sleep(500);
            cout<<"�鿴�������� /help"<<endl;
        }
    }
    cout<<"ϵͳ:����10���رյ���"<<endl;
    for(int i=9;i>=1;i--){
        printf("%d",i);
        Sleep(1000);
        printf("\b");
    }
    cout<<"�����Ѿ��ػ�";
}
