#include <windows.h>
#include<cstdio>
#include<cstdlib>
#include <iostream>
#include <ctime> 
#define random(a,b) (rand()%(b-a)+a)
using namespace std;
//���� 
long long win=0,lose=0,tins=0,CNY=1000/*�����*/,USD=100/*��Ԫ*/;
int elsewin=0,elselose=0,elsetin=0;
int computer;
int ms[2]={0};
int cjs[20]={0};
char xz;
int x;
int i;
int y;
long long yhy,yhm;
bool zjm;
long long tq,zs;
bool js;
//���� 
void strat();//��ʼ 
void out();//out��� 
void cq();//��ȭ 
void sz();//���� 
void sd();//�̵� 
void dw();//��λ 
void jq();//���� 
void one();
void three();
void five();
void winer();
void loser();
void tin();
void yh();
void cj();
void xt();//�ӵ���С͵ҵ��
void color();
void HideCursor();
void going();
void jl();
void dh();
//out��� 
void out(string s){
    for(i=0;i<=s.length();i++){
        cout<<s[i];
        Sleep(50);
    }
}
void HideCursor(){                  
    CONSOLE_CURSOR_INFO cursor_info={1,0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
}
//��¼ 
void jl(){
    //д����
    FILE *fpWrite=fopen("lat.txt","w");
    if(fpWrite==NULL){
        out("OK");
    }
    for(int i=0;i<10;i++){
        fprintf(fpWrite,"%d ",i);
    }   
    fclose(fpWrite);
}
//��д���� 
void dh(){
    //������
    int a[10]={0};
    FILE *fpRead=fopen("lat.txt","r");
    if(fpRead==NULL){
        out("��ȡ��¼��... ...");
    }
    for(int i=0;i<10;i++){
        fscanf(fpRead,"%d ",&a[i]);
    }
}
void xt(){
    if(CNY>0&&USD>0){
        srand((int)time(0));
        zs=random(0,11);
        if(zs>8){
            out("��鿴��Ǯ��,Ǯ����"); 
            cout<<endl;
            out("С͵͵����");
            srand((int)time(0));
            tq=random(0,CNY);
            cout<<tq;
            CNY-=tq;
            out("Ԫ,");
            srand((int)time(0));
            tq=random(0,USD);
            cout<<tq;
            USD-=tq;
            out("��Ԫ");
        }
    }   
}
void color(int a){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
//���� 
void yh(){
    while(1){
        cj();
        out("����������ʲôҵ��?\n");
        out("1.��Ǯҵ��\n");
        out("2.ȡǮҵ��\n");
        out("3.�˳�ҵ��\n");
        out("4.�鿴ҵ��(�ֽ�)(������)\n");
        cin>>x;
        switch(x){
            case 1:
            out("����������Ԫ(�����(x>3||x<3) ��Ԫ)\n");
            cin>>x>>y;
            if(x>CNY||y>USD){
                out("����");
                system("cls");
            }else{
                out("���ɹ�");
                yhy+=x;
                yhm+=y;
                CNY-=x;
                USD-=y;
                system("cls");
            } 
            break;
            case 2:
            out("������ȡ����Ԫ(����� ��Ԫ)\n");
            cin>>x>>y;
            if(x>yhy||y>yhm){
                out("����");
                system("cls");
            }else{
                out("ȡ��ɹ�");
                yhy-=x;
                yhm-=y;
                CNY+=x;
                USD+=y;
                system("cls");
            }
            break;
            case 3:
            out("�Ѿ��˳�");
            system("cls");
            break;
            case 4:
            out("����");
            cout<<CNY;
            out("RMB,");
            cout<<USD;
            out("��Ԫ");
            cout<<endl;
            out("�������������������ӡ1 or 0\n");
            cin>>zjm;
            system("cls");
            break;
            default:
            out("�������������ɱ��?");
            system("cls");
        }
        if(x==3){
            break;
        }
    }

} 
//�ɾ�
void cj(){
    //lose�ɾ� 
    if(lose>=1&&(!cjs[0])){
        out("��ɳɾ�:����ʧ��"); 
        cjs[0]++;
        Sleep(1000);
    }
    if(lose>=10&&(!cjs[1])){
        out("��ɳɾ�:ʧ�ܵĸо�"); 
        cjs[1]++;
        Sleep(1000);
    }
    if(lose>=50&&(!cjs[2])){
        out("��ɳɾ�:���µ���ζ"); 
        cjs[2]++;
        Sleep(1000);
    }
    if(lose>=100&&(!cjs[3])){
        out("��ɳɾ�:��̫����"); 
        cjs[3]++;
        Sleep(1000);
    }
    if(lose>=500&&(!cjs[4])){
        out("��ɳɾ�:�˼�һֻ"); 
        cjs[4]++;
        Sleep(1000);
    }
    //losewintin
    if(lose==win&&win==tins&&(lose!=0)&&(!cjs[5])){
        out("��ɳɾ�:���ⷢչ"); 
        cjs[5]++;
        Sleep(1000);
    }
    ///win
    if(win>=1&&(!cjs[6])){
        out("��ɳɾ�:�״�ʤ��"); 
        cjs[6]++;
        Sleep(1000);
    }
    if(win>=10&&(!cjs[7])){
        out("��ɳɾ�:��Ҫ����ʤ��");
        cjs[7]++; 
        Sleep(1000);
    }
    if(win>=50&&(!cjs[8])){
        out("��ɳɾ�:���Ǹ�����"); 
        cjs[8]++;
        Sleep(1000);
    }
    if(win>=100&&(!cjs[9])){
        out("��ɳɾ�:�Ի���Ե�����"); 
        cjs[9]++;
        Sleep(1000);
    }
    if(win>=500&&(!cjs[10])){
        out("��ɳɾ�:�Ҳ�����"); 
        cjs[10]++;
        Sleep(1000);
    }
    if(win>=1000&&(!cjs[11])){
        out("��ɳɾ�:�����ǸĴ�����"); 
        cjs[11]++;
        Sleep(1000);
    }
    if(lose>=5000&&(!cjs[12])){
        out("��ɳɾ�:̫������"); 
        cjs[12]++;
        Sleep(1000);
    }
    //tins 
    if(tins>=1&&(!cjs[13])){
        out("��ɳɾ�:ƽ��!?"); 
        cjs[13]++;
        Sleep(1000);
    }
    if(tins>=10&&(!cjs[14])){
        out("��ɳɾ�:ƽƽ����"); 
        cjs[14]++;
        Sleep(1000);
    }
    if(tins>=50&&(!cjs[15])){
        out("��ɳɾ�:ƽ�ֿ���"); 
        cjs[15]++;
        Sleep(1000);
    }
    if(tins>=100&&(!cjs[16])){
        cjs[16]++;
        out("��ɳɾ�:�Ҳ�����ƽ��"); 
        Sleep(1000);
    }
    if(tins>=500&&(!cjs[17])){
        out("��ɳɾ�:ƽ��֮��"); 
        cjs[17]++;
        Sleep(1000);
    }
    if(tins>=1000&&(!cjs[18])){
        out("��ɳɾ�:����ƽ��");
        cjs[18]++; 
        Sleep(1000);
    }
    //Lose���� 
    if(lose>=1000&&(!cjs[19])){
        cjs[19]++;
        out("��ɳɾ�:��ȥ��̫��"); 
        Sleep(1000);
    } 
    system("cls");
} 
//��ȭ
//win,lose,tin
void winer(){
    out("���ʤ��");
    CNY+=200;
    USD+=20;
    win++;
    system("cls");
    cj();
    xt();
}
void loser(){
    out("���ʧ��");
    lose++;
    system("cls");
    cj();
    xt();
}
void tin(){
    out("ƽ��");
    system("cls");
    tins++;
    CNY+=100;
    USD+=10;
    cj();
    xt();
}
//ģʽ 
void one(){
    cj();
    out("0.ʯͷ");
    cout<<endl;
    out("1.����");
    cout<<endl; 
    out("2.��");
    cout<<endl;
    out("��ѡ��:");
    cin>>x;
    if(x==0){
        out(".ʯͷ");
        cout<<endl;
    }else if(x==1){
        out(".����");
        cout<<endl; 
    }else{
        out(".��");
        cout<<endl;
    }
    srand((int)time(0));
    computer=random(0,4);
    if(computer==0){
        out("0.ʯͷ");
        cout<<endl;
        if(x==2){
            winer();
        }else if(x==1){
            loser();
        }else{
            tin();
        }
    }else if(computer==1){
        out("1.����");
        cout<<endl;
        if(x==0){
            winer();
        }else if(x==2){
            loser();
        }else{
            tin();
        }
    }else{
        out("2.��");
        cout<<endl;
        if(x==1){
            winer();
        }else if(x==0){
            loser();
        }else{
            tin();
        }
    }
}
void three(){
    cj();
    for(i=1;i<=3;i++){
        out("0.ʯͷ");
        cout<<endl;
        out("1.����");
        cout<<endl; 
        out("2.��");
        cout<<endl;
        out("��ѡ��:");
        cin>>x;
        if(x==0){
            out(".ʯͷ");
            cout<<endl;
        }else if(x==1){
            out(".����");
            cout<<endl; 
        }else{
            out(".��");
            cout<<endl;
        }
        srand((int)time(0));
        computer=random(0,4);
        if(computer==0){
            out("0.ʯͷ");
            cout<<endl;
            if(x==2){
                elsewin++;
            }else if(x==1){
                elselose++;
            }else{
                elsetin++;
            }
        }else if(computer==1){
            out("1.����");
            cout<<endl;
            if(x==0){
                elsewin++;
            }else if(x==2){
                elselose++;
            }else{
                elsetin++;
            }
        }else{
            out("2.��");
            cout<<endl;
            if(x==1){
                elsewin++;
            }else if(x==0){
                elselose++;
            }else{
                elsetin++;
            }
        }
        if(elsetin==2){
            tin();
        }else if(elselose==2){
            loser();
        }else if(elsewin==2){
            winer();
        }
    }
}
void five(){
    cj();
    for(i=1;i<=5;i++){
        out("0.ʯͷ");
        cout<<endl;
        out("1.����");
        cout<<endl; 
        out("2.��");
        cout<<endl;
        out("��ѡ��:");
        cin>>x;
        if(x==0){
            out(".ʯͷ");
            cout<<endl;
        }else if(x==1){
            out(".����");
            cout<<endl; 
        }else{
            out(".��");
            cout<<endl;
        }
        srand((int)time(0));
        computer=random(0,4);
        if(computer==0){
            out("0.ʯͷ");
            cout<<endl;
            if(x==2){
                elsewin++;
            }else if(x==1){
                elselose++;
            }else{
                elsetin++;
            }
        }else if(computer==1){
            out("1.����");
            cout<<endl;
            if(x==0){
                elsewin++;
            }else if(x==2){
                elselose++;
            }else{
                elsetin++;
            }
        }else{
            out("2.��");
            cout<<endl;
            if(x==1){
                elsewin++;
            }else if(x==0){
                elselose++;
            }else{
                elsetin++;
            }
        }
        if(elsetin==3){
            tin();
        }else if(elselose==3){
            loser();
        }else if(elsewin==3){
            winer();
        }
    }
}
//��ȭ��ʼ���� 
void cq(){
    cj();
    xt();
    while(1){
        out("ѡ��ģʽ:");
        out("0.һ���˽�");
        cout<<endl;
        if(true==ms[1]){
            out("1.������ʤ");
            cout<<endl;
        } 
        if(true==ms[2]){
            out("2.�����ʤ");
            cout<<endl;
        }
        out("3.�˳�");
        cout<<endl;
        cin>>xz;
        if(xz=='0'){
            system("cls");
            out("  һ���˽�  ");
            cout<<endl;
            one();
        }else if(true==ms[1]&&xz=='1'){
            system("cls");
            out("  ������ʤ  ");
            cout<<endl;
            three();
        }else if(true!=ms[1]&&xz=='1'){
            out("����,�㻹û����������,��");
            cout<<endl;
            Sleep(1000);
            system("cls");
        }else if(true==ms[2]&&xz=='2'){
            system("cls");
            out("  �����ʤ  ");
            cout<<endl;
            five();
        }else if(true!=ms[2]&&xz=='2'){
            out("����,�㻹û����������,��");
            cout<<endl;
            Sleep(1000);
            system("cls");
        }else if(xz=='3'){
            out("OK");
            break;
        }else{
            out("�������ʲô��,����ɶ����,��");
            cout<<endl;
            Sleep(1000);
            system("cls");
        }
    }
}
//���� 
void sz(){
    cj();
    xt();
    out("��Ҫʲô������ɫ��");
    cout<<endl;
    out("��ɫ����1");
    cout<<endl;
    out("��ɫ����2");
    cout<<endl;
    out("��ɫ����3");
    cout<<endl;
    out("ǳ��ɫ����4");
    cout<<endl;
    out("��ɫ����5");
    cout<<endl;
    out("��ɫ����6");
    cout<<endl;
    out("��ɫ����7");
    cout<<endl;
    out("��ɫ����8");
    cout<<endl;
    out("��ɫ����9");
    cout<<endl;
    cin>>xz;
    switch(xz){
        case '1':system("color 0");break;
        case '2':system("color 1");break;
        case '3':system("color 2");break;
        case '4':system("color 3");break;
        case '5':system("color 4");break;
        case '6':system("color 5");break;
        case '7':system("color 6");break;
        case '8':system("color 7");break;
        case '9':system("color 8");break;
        default:system("color");
    }
    out("����ɫ�ɹ���");
}
//�̵�
void sd(){
    while(1){
        cj();
        xt();
        out("��ӭ��������С��");
        cout<<endl;
        out("��ѡ�����");
        cout<<endl;
        out("0.lose�Ǹ�ƨ(lose--) 300��+30$");
        cout<<endl;
        out("1.lose�ǿ���(lose-=5) 1500��+150$");
        cout<<endl;
        out("2.win��ʮ�ְ�(win++) 500��+50$");
        cout<<endl;
        out("3.win���ر��(win+=5) 3000��+300$");
        cout<<endl;
        out("4.ģʽ1����(����ģʽһ) 10000��+20win+1000$");
        cout<<endl;
        out("5.ģʽ2����(����ģʽ��) 50000��+50win+5000$");
        cout<<endl;
        out("6.�˳�");
        cout<<endl;
        out("7.��ҪRMB(RMB+=10) 1$");
        cout<<endl; 
        cin>>x;
        if(x==0){
            if(CNY>=300&&USD>=30){
                CNY-=300;
                USD-=30;
                lose--;
                system("cls");
            }else{
                out("����");
                cout<<endl;
                system("cls");
            }
        }else if(x==1){
            if(CNY>=1500&&USD>=150){
                CNY-=1500;
                USD-=150;
                lose-=5;
                system("cls");
            }else{
                out("����");
                cout<<endl;
                system("cls");
            }
        }else if(x==2){
            if(CNY>=500&&USD>=50){
                CNY-=500;
                USD-=50;
                win++;
                system("cls");
            }else{
                out("����");
                cout<<endl;
                system("cls");
            }
        }else if(x==3){
            if(CNY>=3000&&USD>=300){
                CNY-=3000;
                USD-=300;
                win+=5;
                system("cls");
            }else{
                out("����");
                cout<<endl;
                system("cls");
            }
        }else if(x==4){
            if(CNY>=10000&&USD>=1000&&win>=20){
                CNY-=10000;
                USD-=1000;
                win-=20;
                system("cls");
            }else{
                out("����");
                cout<<endl;
                system("cls");
            }
        }else if(x==5){
            if(CNY>=50000&&USD>=5000&&win>=50){
                CNY-=50000;
                USD-=5000;
                win-=50;
                system("cls");
            }else{
                out("����");
                cout<<endl;
                system("cls");
            }
        }else if(x==6){
            break;
            system("cls");
        }else if(x==7){
            if(USD>=1){
                CNY+=10;
                USD--;
                system("cls");
            }else{
                out("����");
                cout<<endl;
                system("cls");
            }
        }else{
            out("�������ʲô��,����ɶ����,��");
            cout<<endl;
            Sleep(1000);
            system("cls");
        }
    }
}
//����
void jq(){
    cj();
    xt();
    out("��ģʽ���ڿ�����");
    system("cls");
}
//��λ
void dw(){
    cj();
    xt();
    out("��ģʽ���ڿ�����");
    system("cls");
}
//��ʼ��Ϸ 
void strat(){
    cj();
    cout<<"-------------------------------------------------------"<<endl;
    out("����Ϸ��ȨΪղ��������,�����ֳ�Ϯ,��δ��������,����Ը�");
    cout<<endl<<"-------------------------------------------------------"<<endl;
    out("��ӭ������Ϸ ��ȭ�� ,��Ϸ�汾��(2.1.5)");
    Sleep(100);
    cout<<endl;
    out("��Ӯ��");
    cout<<win;
    out("��,����");
    cout<<lose;
    out("��,ƽ����");
    cout<<tins;
    out("��");
    cout<<endl;
    if(zjm){
        out("����");
        cout<<CNY;
        out("Ԫ�����,");
        cout<<USD;
        out("Ԫ����");
        cout<<endl;
    }
    out("������ѡ��ģʽ:");
    Sleep(100);
    cout<<endl;
    out("1.��ȭ��");
    Sleep(100);
    cout<<endl;
    out("2.�̵���");
    Sleep(100);
    cout<<endl;
    out("3.������(������)");
    Sleep(100);
    cout<<endl;
    out("4.��λ��(������)");
    Sleep(100);
    cout<<endl;
    out("5.������");
    Sleep(100);
    cout<<endl;
    out("6.������");
    Sleep(100);
    cout<<endl;
    out("7.�˳�");
    cout<<endl;
}
void going(){
    while(1){
        cj();
        strat();
        cin>>xz;
        if(xz=='1'){
            for(i=1;i<=10;i++){
                out("���ڼ�����... ...");
                Sleep(100);
            }
            cout<<endl;
            out("�������");
            Sleep(500);
            system("cls");
            cq();
        }else if(xz=='2'){
            for(i=1;i<=10;i++){
                out("���ڼ�����... ...");
                Sleep(100);
            }
            cout<<endl;
            out("�������");
            Sleep(500);
            system("cls");
            sd();
        }else if(xz=='3'){
            for(i=1;i<=10;i++){
                out("���ڼ�����... ...");
                Sleep(100);
            }
            cout<<endl;
            out("�������");
            Sleep(500);
            system("cls");
            jq();
        }else if(xz=='4'){
            for(i=1;i<=10;i++){
                out("���ڼ�����... ...");
                Sleep(100);
            }
            cout<<endl;
            out("�������");
            Sleep(500);
            system("cls");
            dw();
        }else if(xz=='5'){
            for(i=1;i<=10;i++){
                out("���ڼ�����... ...");
                Sleep(100);
            }
            cout<<endl;
            out("�������");
            Sleep(500);
            system("cls");
            sz(); 
        }else if(xz=='6'){
            for(i=1;i<=10;i++){
                out("���ڼ�����... ...");
                Sleep(100);
            }
            cout<<endl;
            out("�������");
            Sleep(500);
            system("cls");
            yh(); 

        }else{
            out("see you");
            system("cls");
            jl();
            cout<<"-------------------------------------------------------"<<endl;
            out("����Ϸ��ȨΪղ��������,�����ֳ�Ϯ,��δ��������,����Ը�");
            cout<<endl<<"-------------------------------------------------------"<<endl;
            out("�ټ��� �ݰ�");
            cout<<endl;  
            out("��,��¼���");
            break;
        }
    }
}
//������ 
int main(){
    dh();
    HideCursor(); 
    going();

    return 0;
}
