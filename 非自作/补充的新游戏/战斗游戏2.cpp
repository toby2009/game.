#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
const string guainame[]={"","С��","��ʬ","Ұ��","����","����","ɳ��","�´�","��"};
const string wuqiname[]={"","ذ��","ñ��","С��","С��","��","���","�޽�","�޶�","��","���","ʥ֮��ì","�ƽ�ʥ��"};
const int wuqiRMB[]={0,50,50,100,100,200,200,300,300,600,600,1000,1000};
const int wuqigongji[]={0,50,0,100,0,200,0,300,0,600,0,1000};
const int wuqifangyu[]={0,0,20,0,40,0,80,0,120,0,240,0,400};
const int guaixueliang[]={0,100,150,500,1000,500,2000,1500,2e9};
const int guaigongji[]={0,25,50,75,250,300,150,400,100000};
const int guaijingyan[]={0,20,50,100,150,80,150,200,50000};
const int guaijingbi[]={0,10,20,50,100,75,125,175,1000000};
const int a[]={0,100,100,100,100,100,200,200,200,200,200,300,300,300,300,300,400,400,400,400,400,500,500,500,500,500,600,600,600,700,700,700,800,800,800,900,900,900,1000,1200,1400,1600,1800,2000,2200,2400,2600,2800,3000,3200,3400,3600,3800,4000,4500,5000,5500,6000,6500,7000,7500,8000,8500,9000,9500,10000};
const int manji=65;
const int guaishuliang=8;
const int shangpingshu=12;
string name;
int xueliang;
int MAXxueliang;
int gongji;
int fangyu;
int jingyan;
int dengji;
int jingbi;
int daguaishu;
int dqxueliang;
int ss[1100];
int b[110];
int x;
int xx;
void shuo();
void zd();
void ck();
void csh();
void xg();
void sd();
void xzgw();
void tx();
int main()
{
    printf("��ӭ����������Ϸ��") ;
    Sleep(3000);
    system("cls"); 
    printf("����1����浵������0������");
    cin>>xx;
    if(xx==1)
    {
        freopen("play.txt","r",stdin);
        cin>>name;
        cin>>xueliang;
        cin>>MAXxueliang;
        cin>>gongji;
        cin>>fangyu;
        cin>>jingyan;
        cin>>dengji;
        cin>>jingbi;
        cin>>daguaishu;
        for(int i=1;i<=guaishuliang;i++)cin>>ss[i];
        for(int i=1;i<=12;i++)cin>>b[i];
        freopen("CON","r",stdin);
        printf("��ʾ���浵�����ʾ�����Ч���ص�����\n");
        Sleep(3000);
        system("cls");
    } 
    else 
    {
        system("cls"); 
        printf("������������֣�") ;
        cin>>name;
        csh();
        cout<<endl;
        system("cls");
    }
    cout<<name<<"����á�ף����Ϸ��죡";
    Sleep(3000); 
    system("cls"); 
    printf("����1�����飬����0������");
    cin>>x;
    if(x==1)
    {
        printf("�������һ����ҹ��\n");
        Sleep(2000);
        printf("����ս�ң���ĸ�������㡣\n");
        Sleep(2000);
        printf("һλ�������Ľ����������㡣\n");
        Sleep(2000);
        printf("�����Ľ���������һ��ɱ�֡�\n");
        Sleep(2000);
        printf("��ʵ���ܲ����ˣ����˳�ȥ~~\n");
        Sleep(2000);
    }
    system("cls");  
    shuo(); 
    return 0; 
} 
void shuo()
{
    system("cls");
    printf("����ɽ���\n\n");
    Sleep(1000);
    printf("��Ҫ��ʲô��\n");
    Sleep(500);
    printf("1.��Ѫ  2.���   3.�鿴״̬  4.̽��  5.�浵\n");
    cin>>x;
    if(x==1)
    {
        xueliang=MAXxueliang;
        printf("������Ѫ�ɹ���");
        Sleep(2000);
        system("cls");
        shuo(); 
    } 
    if(x==2)zd();
    if(x==3)
    {
        system("cls");
        ck();
        system("cls");
        shuo(); 
    }
    if(x==4)tx();
    if(x==5)
    {
        freopen("play.txt","w",stdout);
        cout<<name<<endl;
        cout<<xueliang<<endl;
        cout<<MAXxueliang<<endl;
        cout<<gongji<<endl;
        cout<<fangyu<<endl;
        cout<<jingyan<<endl;
        cout<<dengji<<endl;
        cout<<jingbi<<endl;
        cout<<daguaishu<<endl;
        for(int i=1;i<=guaishuliang;i++)cout<<ss[i]<<endl;
        for(int i=1;i<=12;i++)cout<<b[i]<<endl;
        fclose(stdout);
    }
    if(x<1||x>5)
    {
        system("cls");
        printf("�������\n");
        Sleep(2000);
        shuo();
    } 
}
void tx()
{
    system("cls");
    printf("�ù���δ���ţ�");
    Sleep(2000);
    shuo(); 
}
void zd()
{
    system("cls");
    printf("1.�̵�  2.���  3.����\n");
    cin>>x;
    if(x==1)
    {
        sd(); 
        shuo();
    }
    if(x==2)xg();
    if(x==3)shuo();
}
void sd()
{
        system("cls");
        printf("1.���� 2.����\n"); 
        cin>>x;
        if(x==2)zd();
        system("cls");
        printf("��Ҫ��ʲô��\n");
        Sleep(3000);
        printf("��� ��%d\n",jingbi);
        for(int i=1;i<=shangpingshu;i++)cout<<i<<"."<<wuqiname[i]<<"  "<<wuqiRMB[i]<<"���"<<endl;
        cin>>x;
        system("cls");
        if(b[x]){printf("���Ѿ�����Ŷ~");Sleep(2000);sd();}
        if(jingbi<wuqiRMB[x]){printf("��Ҳ���");Sleep(2000);sd();}
        jingbi-=wuqiRMB[x];
        b[x]=1;
        gongji+=wuqigongji[x];
        fangyu+=wuqifangyu[x];
        printf("����ɹ�");
        Sleep(2000); 
        sd();
        system("cls");
}
void xg()
{
    system("cls");
    printf("1.ѡ��  2.����\n");
    cin>>x;
    if(x==2)zd();
    if(x==1)xzgw();
}
void ck()
{
    system("cls");
    cout<<name<<"��״̬:\n\n";
    Sleep(1000);
    printf("��ң�%d\n",jingbi);
    Sleep(1000);
    printf("Ѫ����%d/%d\n",xueliang,MAXxueliang);
    Sleep(1000);
    printf("������%d\n",gongji);
    Sleep(1000);
    printf("������%d\n",fangyu);
    Sleep(1000);
    printf("�������%d\n",daguaishu);
    for(int i=1;i<=guaishuliang;i++)cout<<guainame[i]<<":"<<ss[i]<<endl;
    Sleep(1000);
    printf("�ȼ���%d",dengji);
    if(dengji>manji)printf("->MAX!!!");
    printf("\n");
    Sleep(1000);
    printf("���飺%d/%d\n",jingyan,a[dengji]);
    Sleep(2000);
}
void csh()
{
    srand(time(0));
    if(name!="xyz")
    {
        xueliang=100;
        MAXxueliang=100;
        gongji=30;
        fangyu=12;
        jingyan=0;
        jingbi=0;
        daguaishu=0;
        dengji=1;
        Sleep(2000);
    }
    else 
    {
        printf("xyz�����ˣ��漴�����ߣ�");
        Sleep(1000);
        system("cls");
        xueliang=1e9;
        MAXxueliang=1e9;
        gongji=9e8;
        fangyu=500000;
        jingyan=0;
        jingbi=1e9;
        daguaishu=0;
        dengji=1;
    }
}
void xzgw()
{
    system("cls");
    printf("��Ҫ��˭?\n");
    for(int i=1;i<=guaishuliang;i++)cout<<i<<"."<<guainame[i]<<endl;
    cin>>x;
    system("cls");
    if(x==0||x>guaishuliang)
    {
        printf("û�д˹�\n");
        Sleep(2000);
        shuo(); 
    }
    printf("��ʼս����\n");
    Sleep(3000);
    dqxueliang=guaixueliang[x];
    while(1)
    {
        system("cls");
        printf("���Ѫ��%d       �ֵ�Ѫ:%d\n",xueliang,dqxueliang);
        Sleep(1000);
        system("cls");
        xueliang-=max(0,guaigongji[x]-fangyu);
        printf("���Ѫ��%d       �ֵ�Ѫ:%d\n",xueliang,dqxueliang);
        cout<<guainame[x]<<"���������"<<max(0,guaigongji[x]-fangyu)<<"���˺�";
        Sleep(1000);
        if(xueliang<=0)
        {
            system("cls");
            printf("������\n");
            Sleep(2000);
            shuo();
        }
        Sleep(2000);
        system("cls");
        dqxueliang-=gongji;
        printf("���Ѫ��%d       �ֵ�Ѫ:%d\n",xueliang,dqxueliang);
        cout<<name<<"��"<<guainame[x]<<"�����"<<gongji<<"���˺�";
        Sleep(2000);
        if(dqxueliang<=0)
        {
            system("cls");
            printf("��Ӯ��!\n");
            Sleep(3000);
            jingbi+=guaijingbi[x];
            jingyan+=guaijingyan[x];
            while(jingyan>=a[dengji]&&dengji<manji)
            {
                jingyan-=a[dengji];
                dengji++;
                gongji+=30;
                fangyu+=12;
                MAXxueliang+=20;
                xueliang=MAXxueliang;
                printf("��ϲ��������%d��\n",dengji);
                Sleep(2000);
            }
            daguaishu++;
            ss[x]++;
            shuo();
        }     
    }
}
