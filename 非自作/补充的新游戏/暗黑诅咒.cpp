#include <iostream>
#include <ctime>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <stack>
#include <set>
#include <map>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
using namespace std;
double sudu=3;
bool jieju;
string aaa[101];
int nnn=10,mmm=10,k,x=1,y=1;
struct me
{
    int blood=600,speed=85,attack=500;
}m;
struct slm
{
    int blood=50,attack=5,speed=10;
}m1;
struct zombie
{
    int blood=100,attack=15,speed=20;
}m2;
struct godzilla
{
    int blood=10000,attack=250,speed=50;
}m3;
struct super_godzilla
{
    int blood=100000,attack=5000,speed=85;
}m4;
struct laoban
{
    int blood=10000,attack=5000,speed=85;
}m5;
struct devola
{
    int blood=1000000,attack=10000,speed=90;
 }m6; 
 struct jushou
 {
     int blood=1000,attack=100,speed=50;
 }m7; 
 struct slm2 
{
    int blood=25,attack=3,speed=5;
}m8;
 struct Pavris 
{
    int blood=500,attack=99,speed=20;
}m9;
 struct drzo
{
    int blood=1000000,attack=9999,speed=85;
}m10;
struct bianfu
{
    int blood=300,attack=25,speed=75;
}m11;
struct langren
{
    int blood=1000,attack=100,speed=50;
}m12;
struct dujiao
{
    int blood=500,attack=300,speed=50;
}m13;
struct banmaohu
{
    int blood=5000,attack=500,speed=75;
}m14;
struct haobo8
{
    int blood=1000000000,attack=1000000000,speed=100;
}m15;
struct sts
{
    int blood=6000,attack=1000,speed=50;
}m16;
struct gongzhu
{
    int blood=100,attack=25,speed=50;
}m17;
void jiazai()
{
    printf("���ڼ������...\n0");
    Sleep(150);
    system("cls");
    printf("�������ӷ�����...\n��15");
    Sleep(210);
    system("cls");
    printf("������Դ��...\n����25");
    Sleep(180);
    system("cls");
    printf("������Դ��...\n������55");
    Sleep(120);
    system("cls");
    printf("������Դ��...\n��������70");
    Sleep(90);
    system("cls");
    printf("������Դ��...\n��������75");
    Sleep(450);
    system("cls");
    printf("���ڼ��ؾ���...\n����������90");
    Sleep(120);
    system("cls");
    printf("���ڼ��ع���...\n����������100");
    Sleep(300);
    system("cls");
    printf("���ڽ������½�...\n����������100");
    Sleep(900);
    system("cls"); 
}
void SlowDisplay(char *p)
{
    while(1)
    {
        if(*p!=0)
            printf("%c",*p++);
        else
            break;
        Sleep(sudu*30);
    }
}
void texiao()
{
    for(int i=1; i<=10; i++)
    {
        system("color 2f");
        Sleep(10);
        system("color 0f");
        Sleep(10);
    }
}
void out()
{
    int i,j;
    for(i=1;i<=nnn;i++)
    {
        for(j=0;j<=mmm;j++)
        {
            cout<<aaa[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}

bool judge(int x,int y)
{
    if(x<1||y<0)return 0;
    if(x>10||y>10)return 0;
    if(aaa[x][y]=='*')return 0;
    return 1;
}
bool jianshang=true;
long long coin=100,a1=10,a3=15,a4=100,a5=25,a6=20,level=1,e1=0,e2=100,tian=1,ct=0;
double a2=10;
bool bai=true,zuihan=true,jiuguan=true;
int main()
{
    srand((unsigned)time(NULL)*10);
    //freopen(".in","r",stdin);
    //freopen(".out","w",stdout);
    if(m.blood>1000000&&m.attack>10000&&m.speed>=85)
    {
                int c2=3,c3=10,c4=5,c5=1;
        SlowDisplay("...\n");
        SlowDisplay("...\n");
        SlowDisplay("...\n");
        SlowDisplay("��ϲ���뿪�ҽ�֣�����������ǰ�Ĵ����ǲ����ա�������Ȼ��ôϲ�����ң��Ǿ���֤�㿪�ҿ������ðɣ�����\n");
        SlowDisplay("�������haobo8�������˹�ȥ������   QAQ\n");
        texiao(); 
        int saot=0,lt=0,t;
        bool saopi=false,liang=false;
         while(m.blood>0&&m15.blood>0)
                    {
                        if(saot==3)
                        {
                            saot=0;
                            saopi=false;
                        }

                        if(saopi)
                        saot++;
                        if(lt==3)
                        {
                            lt=0;
                            liang=false;
                        }

                        if(liang)
                        lt++;

                        cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<endl;
                        cout<<"�з���Ѫ����"<<m15.blood<<endl;

                        if(liang==false)
                        {
                            cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                        int z;
                        cin>>z;
                        if(z==1)
                        {

                            if(rand()%101<m15.speed)
                            cout<<"�з�����˹���"<<endl;
                            else
                            {
                                m15.blood-=a1;
                                m15.blood-=m.attack;
                                cout<<"�з��ܵ�����"<<endl; 
                            }

                        } 
                        else if(z==2&&c2>0)
                        {
                            m1.speed-=a2;
                            cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                            c2--;
                        }
                        else if(z==3&&c3>0)
                        {
                            if(rand()%101<m15.speed||saopi==true)
                            cout<<"�з�����˹���"<<endl;
                            else
                            {
                                m15.blood-=a3;
                                m15.blood-=m.attack;
                                cout<<"�з��ܵ�����"<<endl; 
                            }
                            c3--;
                        }
                        else if(z==4&&c4>0)
                        {
                            m.blood+=a4;
                            cout<<"����Ѫ�ˣ�"<<endl; 
                            c4--;
                        }
                        else if(z==5&&c5>0)
                        {

                            m15.blood-=a5;
                            m15.blood-=m.attack;
                            cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                            m.blood+=a6;
                            c5--;
                        }   
                     else
                     cout<<"������Ч������"<<endl;
                        }
                        else
                        {
                            lt++; 
                        cout<<"���Ѫ����"<<m.blood<<endl;
                        SlowDisplay("���޷�����������\n");
                        }
                     int dt=rand()%10;
                     if(dt==1)
                     {
                        SlowDisplay("haobo8ʹ�ó��˹ң��������죬������������ƣ��羰��߸��á�������������Ѫ\n");
                        m15.blood+=2333;
                     }
                     else if(dt==2)
                     {
                        t=m15.blood; 
                        SlowDisplay("haobo8ʹ����Ѫ�ң�3�غϲ���Ѫ\n");
                        saopi=true;
                     }
                     else if(dt==3)
                     {
                        SlowDisplay("haobo8ʹ�˱����ң���3�غ��޷�����\n");
                        liang=true;
                     }
                     else if(dt==4)
                     {
                        SlowDisplay("haobo8ʹ�˱�ͷ�Ҩ{��ߩרTһ���� ��(>��<)����Ѫ���ö�\n");
                        m.blood-=44444444;
                     }
                     else if(dt==5)
                     {
                        SlowDisplay("haobo8ʹ�˾��˹ң���Ѫ��2\n");
                        m15.blood*=2;
                     }
                     else
                     cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m15.attack);
                     if(saopi)
                     m15.blood=t;
                }
                if(m.blood<=0)
            {
                cout<<"������"<<endl;
                return 0;
            }
            else{ 
            cout<<"��������,Ȼ�������˶Է��и���ң�����QAQ"<<endl;
                    return 0; 
                }
    }
    SlowDisplay("�������������ʲô��(������5���ַ�)\n");
    string name;
    cin>>name;
    if(name=="Crish")
    {
    SlowDisplay("���������֡�����\n"); 
        texiao();
    }
    while(name.size()>5) {
        printf("���ƴ���,����������\n");
        cin>>name;
    }
    int t;
    while(t!=1)
    {
    cout<<name;
    printf(",��û�ӭ��������������Ϸ\n");
    cout<<"���˵���"<<endl;
    cout<<"1.��ʼ��Ϸ"<<endl<<"2.�鿴�������"<<endl<<"3.�鿴������־"<<endl<<"4.�鿴���ֹ���"<<endl<<"5.�鿴����"<<endl<<"6.�鿴Ŀ¼"<<endl<<"7.haobo8���X�m"<<endl<<"8.�ش��棨�ؿ�������������"<<endl;

    cin>>t;
    if(t==1)
    system("cls");
    else if(t==3)
     {
        SlowDisplay("0.1.1���¼�������ϰ���飬�޸���һЩbug�������Լ��������������ʾ\n");
        SlowDisplay("0.1.2�޸���һЩbug�����˸�����־����������ϵͳ��������һ��������\n");
         SlowDisplay("0.1.3���밵�ڵظ��½ڣ����˵�bug����������ϵͳ��������ϵͳ\n");
         SlowDisplay("0.2.0�����X�mhaobo8�����Ż���һ�£������ٶȿ��ˣ���������С��5�ַ�bug\n");
         SlowDisplay("0.2.1 ��лRyan�����bug���������bug�����������飬��û���꣬Ŀǰ��û�в鿴��ͼ���ܣ����ӵڶ��£������Ӿƹݡ����������˿���ģʽ������\n");
         SlowDisplay("0.2.2��������shiys2017�����bug��������࣬�������͹��＼�ܡ�\n");
         SlowDisplay("0.2.3��������˹���ı���������������£����˲鿴��ͼ\n");
         SlowDisplay("0.3.0����������ܣ����ֹ��ԣ����ã������¸����꣬�ٴθ�лhaobo8����һ��bug\n");
         SlowDisplay("0.3.1���ӻ����֣���ʾ�����£�3����ͼս��Pavris���ɽ�������֣�������Ŀ¼�������ռ�\n");
         SlowDisplay("0.3.2���������һ�롣������л����yama�ҵ���bug\n");
         SlowDisplay("0.3.3���������,���˵�ͼ��ʾ��bug������ų���֣���һ������10�Σ����ɽ��룬�����Ѵ򣡣�������ȡ������ģʽ��������Ч�����˵�\n");
         SlowDisplay("0.3.4ֱ�Ӹ�������¡����������ºܳ���������Ϸ�����Ѿ�����2000���ˣ�����\n");
         SlowDisplay("0.4.0һ������������¡���������һЩ�����ϵ�bug������\n");
         SlowDisplay("0.4.1һ������������º͵ڰ���һ�㡣�������ӿ��ҽ�֡�����\n");
         SlowDisplay("0.4.2����ڰ��£�����ûʱ�����������лwanghanjun�����bug\n");
         SlowDisplay("0.4.3����ھ��¡�����\n");
         SlowDisplay("0.5.0���˵��ʮ�¡�����\n");
     }
     else if(t==4)
     {
        SlowDisplay("����ûʲô���ԣ�Ψһ���Ծ��ǵ����һ��ʱѪ����600�����⹥����500���ٶ�85ʱ�Ϳ��Դ��˹���ˡ�\n");
        SlowDisplay("˳��˵һ�µ�һ�´���֣����е㳤�������������ʥ��ҩ�������顣\n");
         SlowDisplay("��˵��ô���ˣ���Ϸ��죡����\n");
      } 
      else if(t==7)
     {
        bool haobo=true;
        while(haobo)
        {
            cout<<"haobo8�Ǹ��X�m������������"<<endl;
        }
      } 
      else if(t==5)
      {
        cout<<"����1�����ٶȷɿ죬2�����ٶȽϿ죬3�еȣ�4����"<<endl;
          int she;
          cin>>she;
          if(she==1)
          sudu=0.5;
          if(she==2)
          sudu=1;
          if(she==3)
          sudu=2;
          if(she==4)
          sudu=3; 
          cout<<"��һ���Ѷȣ� 1.���� 2.���� 3.��"<<endl;
          int she2;
          cin>>she2;
          if(she2==1)
          {m.blood=100;
        m.attack=0;
        m.speed=5;
        coin=100;} 
          if(she2==2)
          {
           m.blood=600;
        m.attack=500;
        m.speed=85;
        coin=100;} 
          if(she2==3){ 
          m.blood=1000000;
        m.attack=10000;
        m.speed=85;
        coin=10000;} 
       } 
       else if(t==2)
       {
         SlowDisplay("�㣺�޽���\n");
        SlowDisplay("devola���������ӣ�������ǿ����˵ֻ�й�������ͷ�˲��ܴ��������͸��ҹ����Ҳ�ܴ����\n");
         SlowDisplay("����ӣ�50���꣬����ʮ�㣬�����ֺʹ��ͣ����պ�ħ��\n");
         SlowDisplay("Pavris:���谮�Ⱦƣ����ȹ����˹����ٴΡ�\n");
         SlowDisplay("Sarais�����ӹ��鳼��ı�����˹���Ρ�\n");
         SlowDisplay("ENDER����ͷ�ߵ���ţ����������µĹ���\n");
        } 
         else if(t==8)
       {
         SlowDisplay("2019   3�·�\n");
        SlowDisplay("��������ڶ�������Pavris�ķ�ӡ������ʽ��Ʒ\n");
         SlowDisplay("�����Գ���������\n");
         SlowDisplay("�嵶ɱ�˿����ֽ���\n");
         SlowDisplay("�����뷨ʦս����������\n");
         SlowDisplay("�Ÿ����ɾ�ǿ��ʦ\n");
         SlowDisplay("��ɱ   ս��   ����    ������˷����\n");
         SlowDisplay("3��24�գ����������Ŷӣ����ǲ�����ɢ������\n");
        } 
        else if(t==6) 
        {
            SlowDisplay("��һ�� ʧ��\n");
        SlowDisplay("�ڶ��� ���ڵظ�\n");
         SlowDisplay("������ �ӱ�����\n");
         SlowDisplay("������ Pavris�ķ���\n");
         SlowDisplay("������ ɭ������\n");
         SlowDisplay("������ ��ȡҹ����\n");
         SlowDisplay("������ ���ӹ�Σ��\n");
         SlowDisplay("�ڰ��� Խ��\n");
         SlowDisplay("�ھ��� Ĺ�ؾ���\n");
         SlowDisplay("��ʮ�� ����\n");
        }
    else
    {
        cout<<"ByeBye~"<<endl; 
        return 0;
    }

    }
    printf("������Ϸ:�������䣨The Curse Of Darkness��\n");
    Sleep(1000);
    printf("��Ʒ��:drzo��teacherga��\n");
    Sleep(1000);
    printf("�汾:0.5.0\n");
    Sleep(1000);
    printf("���������ʼ");
    getchar();
    system("cls");
    jiazai(); 
    cout<<"����1�����飬����������"<<endl;
    int twqewqe;
    cin>>twqewqe;
    if(twqewqe==1)
    {
    SlowDisplay("��˵���ܾ���ǰ���и�Ұ��ʮ�㡢�Ĵ�Ѱ�������˽�Crivola����ѧ���˺ܶ�������һ������һ������ڤ˼������ʮ������������֪���Ǹ�Ϊ�������ܶ���£���������ǿ��ķ���ռ�����磬���������˷����������ѳ��������ˣ��ֱ�ȥѰ���Լ���׷���˼�룬Լ��2�����ͺ��ٺ��塣\n");
    SlowDisplay("�����˺ܿ�ͽ����������ɱ𣬷ֱ�Ϊ�����ɺ͹����ɣ�һ��׷�����һ��׷�����ã������ɵ��Ǹ��˺ܿ����˸��ݵغ����֣�������ɷ�������������\n");
    SlowDisplay("�����ڰ��ɵ��Ǹ��˶����з��������˶������˰������䣬���о���ZO�壬�����1�����������ɱ�������������ع�����ռ���Ϸ磬�����ɽ�����ʧ������������һֱ�������������������ɺ͹����ɵ��˶����ˣ�ֻ�ö�Ͷ̥ת����");
    SlowDisplay("�ܿ����30����и����Գ��ǰ������ӣ����������ɵ���ת̥����ˣ������ǵ������������ӣ��������������ɵĽ�����ת̥����Ҳû�г��֣���˵��ʧ���ˣ�������Ҳû�����ܴ�ܰ������ӣ�����������ȥ����20��󰵺�����������ZO�壬Ȼ����ZO�����и��˼���������սʤһ�У�������-----");
    cout<<name<<endl;
    SlowDisplay("Ŀǰ��Ϸ��������ϣ����λ�����½⣬QAQ\n");

}
SlowDisplay("ף������Ϸ��죬����1��ʼ\n");
    int a,tc=0;
    cin>>a;
    if(a==1)
    {
        SlowDisplay("��һ�� ʧ��\n");
            SlowDisplay("��1��,��������19�������\n");
            cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ10�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�10�� 3.������ʹ10�Σ�����Ϊ15�� 4.���︴�գ�ʹ5�Σ�Ѫ+100�� 5.������ѣ�1�Σ�����25����Ѫ20��"<<endl<<"��Ľ����"<<coin<<"��"<<endl; 
            int c1=0;
            int c2=0; 
            bool flag=true;
            while(flag) 
            {
                int c2=3,c3=10,c4=5,c5=1;
                if(tc==10)
                {
                    SlowDisplay("ΰ�����ʿ������Ϊ�����ų�������Ѿ�������10���ˣ�û����һֱ�����ţ�Ŷ������˭��������Ϸ��Ʒ��drzo����һֱ���㱳��͵�����㡣����\n");
                    SlowDisplay("��ô�������");
                    cout<<"��";
                     Sleep(500);

                     cout<<"��";
                     Sleep(500);
                     cout<<"��";
                     Sleep(500);
                     cout<<"��";
                     Sleep(500);
                     cout<<"��";
                     Sleep(500);
                     cout<<"��"<<endl;
                     cout<<"1.�� 2.��"<<endl;
                     int yongqi;
                     cin>>yongqi;
                     if(yongqi==1)
                     {
                        SlowDisplay("��ϲ�����ų���֣���������������������֤�����ʵ���ɣ�����\n");
                      } 
                      else
                      {
                        SlowDisplay("��ϲ�����ų���֣�����������������ߵģ����ԡ������ټ��ˡ�����\n");
                      }
                      cout<<name;
                      Sleep(125);
                      cout<<"��";
                       Sleep(125);
                      cout<<"��";
                      Sleep(125);
                      cout<<"��";
                      Sleep(125);
                      cout<<"��";
                      Sleep(125);
                      cout<<"��";
                      Sleep(125);
                      cout<<"��";
                      Sleep(125);
                      cout<<"���ң�";
                      Sleep(500);
                      cout<<"��";
                      Sleep(500);
                      cout<<"��";
                      Sleep(500);
                      cout<<"��"<<endl;
                      SlowDisplay("��Ϸ��Ʒ��drzo��Ҳ�����ң������˹�ȥ�ˣ�����     QAQ\n");
                      texiao(); 
                      int saot=0,lt=0;
                      bool saopi=false,liang=false;
                      while(m.blood>0&&m10.blood>0)
                    {
                        if(lt==3)
                        {
                            lt=0;
                            liang=false;
                        }
                        if(saot==3)
                        {
                            saot=0;
                            saopi=false;
                        }

                        if(saopi)
                        saot++;

                        cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<endl;
                        cout<<"�з���Ѫ����"<<m10.blood<<endl;

                        if(liang==false)
                        {
                            cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                        int z;
                        cin>>z;
                        if(z==1)
                        {

                            if(rand()%101<m10.speed)
                            cout<<"�з�����˹���"<<endl;
                            else
                            {
                                m10.blood-=a1;
                                m10.blood-=m.attack;
                                cout<<"�з��ܵ�����"<<endl; 
                            }

                        } 
                        else if(z==2&&c2>0)
                        {
                            m1.speed-=a2;
                            cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                            c2--;
                        }
                        else if(z==3&&c3>0)
                        {
                            if(rand()%101<m10.speed||saopi==true)
                            cout<<"�з�����˹���"<<endl;
                            else
                            {
                                m10.blood-=a3;
                                m10.blood-=m.attack;
                                cout<<"�з��ܵ�����"<<endl; 
                            }
                            c3--;
                        }
                        else if(z==4&&c4>0)
                        {
                            m.blood+=a4;
                            cout<<"����Ѫ�ˣ�"<<endl; 
                            c4--;
                        }
                        else if(z==5&&c5>0)
                        {

                            m10.blood-=a5;
                            m10.blood-=m.attack;
                            cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                            m.blood+=a6;
                            c5--;
                        }   
                     else
                     cout<<"������Ч������"<<endl;
                        }
                        else
                        {
                            lt++; 
                        cout<<"���Ѫ����"<<m.blood<<endl;
                        SlowDisplay("���޷�����������\n");
                        }
                     int dt=rand()%10;
                     if(dt==1)
                     {
                        SlowDisplay("drzo�������Ϸ�����ߣ������˸���ָ����Ѫ˲�����һ�롣����\n");
                        m.blood/=2;
                     }
                     else if(dt==2)
                     {
                        SlowDisplay("drzoʹ����Ƥ��λ��3�غϴ���\n");
                        saopi=true;
                     }
                     else if(dt==3)
                     {
                        SlowDisplay("drzo������������3�غ��޷�����\n");
                        liang=true;
                     }
                     else if(dt==4)
                     {
                        SlowDisplay("drzo����32+56=�������88��drzo�����˸������з���8888��Ѫ������\n");
                        m10.blood+=8888; 
                     }
                     else
                     cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m10.attack);
                }
                if(m.blood<=0)
            {
                cout<<"������"<<endl;
                return 0;
            }
            else{ 
            cout<<"��������,������ɱ����Ϸ��Ʒ�ˣ���Ϸ˲�����������QAQ"<<endl;
                    return 0; 
                }
                }
                if(e1>=e2)
                {
                    int h=e1/e2;
                    level+=e1/e2;
                    e1=e1%e2;
                    e2+=50;
                    cout<<"��������!!!������&Ѫ�������ˣ�����"<<endl;
                    a1+=2*h;
                    a3+=3*h;
                    a5+=5*h;
                    a6+=4*h;
                    a4+=10*h;
                    a2+=(5*h)/100;
                    m.blood+=10*h;
                    coin+=100*h; 
                }
                if(zuihan)
                cout<<"��Ҫ��1.ȥҩ�� 2.��� 3.�����Լ� 4.ȥ��(��100��ң���ֽ����һ���һ��) 5.ȥ�ƹ�(һ��ֻ��ȥһ�Σ����ֱ�ȥ������Ҫ���飡����) 6.�ؼ�"<<endl; 
                else
                cout<<"��Ҫ��1.ȥҩ�� 2.��� 3.�����Լ� 4.ȥ��(��100��ң���ֽ����һ���һ��) 5.ȥ�ƹ�(һ��ֻ��ȥһ��) 6.�ؼ� 7.�鿴��ͼ "<<endl; 

                int p;
                cin>>p;
                if(p==6)
                {
                    cout<<"����1,�鿴��д���ռ�"<<endl;
                    int riji;
                    cin>>riji;
                    if(riji==1)
                    {
                        SlowDisplay("11��13�� ��ʧ���ˣ�������ҽԺ�ﲻ֪���룬����˵����ɽ���﷢���ҵģ����Ѿ�������5���ˡ� 12��1�� �Ҹо�����������Ϻ������壬������ɱ�� 5��7�� �þ�ûд�ռ��ˣ������ڷ������ҵ����壬����ZO�塣����\n");
                        SlowDisplay("�ռ��������Ȼ��ֹ������\n");
                     } 
                     else
                     cout<<"��������ռǣ��뿪�˼ҡ�"<<endl;
                 } 
                else if(p==7) 
                {
                    if(zuihan)
                    cout<<"������󡣡���"<<endl;
                    else
                    {
                    printf("############################\n");
    printf(".bbbbb...hhh....a.a.a..ccc.a\n");
    printf("...@......hhh....aaa..aa.@.*\n");
    printf("#######.#...hhh%%..aaaa..aaa.\n");
    printf("^zzzzzzz#@...hhhh..aaaa...a.\n");
    printf("zzzzzzzz#....&.hhh....aaa.a.\n");
    printf("zzzzzzzz#@....hhhhh....a.a.a\n");
    printf("#########........hhhhh....aa\n");
    printf("....................hhhhh..a\n");
    printf("############################\n");
                    }
                }
                else if(p==5)
                {
                    if(jiuguan==false)
                    {
                        cout<<"�����Ѿ�����������"<<endl;
                    }
                    else
                    {
                    if(zuihan) 
                    SlowDisplay("�ƹ�������󺰵�����˵�㡣����������Ҫ�����������棿�����ܲ���������������и���������ͼ�������͸��㡣������ͼ�ϱ��*���ǡ��������صġ�����λ�á�������������װ�Ķ������������������磡����^�����λ�ù������������㡣�����ɡ�����\n");
                     zuihan=false;
                     cout<<"��Ҫʲô��1.��ȫ�� 2.ơ�� 3.�뿪(ȫ�����)"<<endl;
                     int ppp;
                     cin>>ppp;
                     if(ppp==1)
                     {
                         cout<<"��ȫ�����㣡����Ѫ������100"<<endl; 
                         m.blood+=100;
                      } 
                      if(ppp==2)
                     {
                         cout<<"��ơ�����㣡�������⹥��������50"<<endl; 
                         m.attack+=50;
                      } 
                      if(ppp==3)
                      cout<<"�뿪�ɹ�������"<<endl;
                      jiuguan=false;
                }
                 } 
                else if(p==4)
                {
                    if(coin>=100)
                    {
                        coin-=100; 
                    if(tian==1)
                    SlowDisplay("����ͷ����*ZO����Σ�ڵ�Ϧ����ʿŬ���������磬�Ե׻����ׯ*\n");
                    if(tian==2)
                    SlowDisplay("����ͷ����*�峤�����ݽ�����ʿ�Ƿ������ȴ�ׯ���ұ�ʾ���ɡ�������ʿ����ų��*\n"); 
                    if(tian==3)
                    SlowDisplay("����ͷ����*�����ﱻ�ɵ�����ׯΣ�����룬������ץ��˭�����ȹ������ͽ�10000*"); 
                    if(tian==4)
                    SlowDisplay("����ͷ����*���氵������ץס�峤�����񼴽��������������伴��16������飡����*"); 
                    if(tian>4)
                    SlowDisplay("�����������ѱ���˹���ȱ⣬û�������������ˡ�����");
                    }
                    else
                    cout<<"Ǯ����������"<<endl;

                }
                else if(p==3)
                {
                    cout<<"���Ѫ����"<<m.blood<<endl<<"��Ķ��⹥������"<<m.attack<<endl<<"����ٶ�(�ٶ�����85)��"<<m.speed<<endl;
                    long long ttt=e1/10;
                    cout<<"��ľ���Ϊ��";
                    for(int i=0; i<ttt; i++)
                    {
                        cout<<"��"; 
                     } 
                     cout<<e1<<"/"<<e2<<endl;
                     cout<<"��ĵȼ�Ϊ��"<<level<<endl; 

                }                
                else if(p==2)
                {
                int t=rand()%7;
                if(c1==1)
                {
                    t=7;
                }
                if(t<=3)
                {
                    m1.blood=50;
                    cout<<"��������ʷ��ķ��ʷ��ķ���ȴ��ȵģ������˺�����̫�󣬽�������������ս�����ܣ�������"<<endl; 
                    cout<<"�������� 1.��ս 2.���ܣ��ᷣ�"<<endl; 
                    int w;
                    cin>>w;
                    if(w==2)
                    {
                        tc++;
                        coin-=100;
                        cout<<"���ܳɹ�"<<endl;
                        continue;
                     } 
                    while(m.blood>0&&m1.blood>0)
                    {
                        cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<endl;
                        cout<<"�з���Ѫ����"<<m1.blood<<endl;
                        cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                        int z;

                        cin>>z;
                        if(z==1)
                        {

                            if(rand()%101<m1.speed)
                            cout<<"�з�����˹���"<<endl;
                            else
                            {
                                m1.blood-=a1;
                                m1.blood-=m.attack;
                                cout<<"�з��ܵ�����"<<endl; 
                            }

                        } 
                        else if(z==2&&c2>0)
                        {
                            m1.speed-=a2;
                            cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                            c2--;
                        }
                        else if(z==3&&c3>0)
                        {
                            if(rand()%101<m1.speed)
                            cout<<"�з�����˹���"<<endl;
                            else
                            {
                                m1.blood-=a3;
                                m1.blood-=m.attack;
                                cout<<"�з��ܵ�����"<<endl; 
                            }
                            c3--;
                        }
                        else if(z==4&&c4>0)
                        {
                            m.blood+=a4;
                            cout<<"����Ѫ�ˣ�"<<endl; 
                            c4--;
                        }
                        else if(z==5&&c5>0)
                        {

                            m1.blood-=a5;
                            m1.blood-=m.attack;
                            cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                            m.blood+=a6;
                            c5--;
                        }   
                     else
                     cout<<"������Ч������"<<endl;
                     cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m1.attack);
                }
            }
            if(t>3&&t<=5)
            {
                m2.blood=100;
                cout<<"�������˽�ʬ�����ǲ�����ò��ª��Ҳ�׺ݲб����ɵ����ǰɣ��������ܣ���ʬ����"<<endl;
                cout<<"�������� 1.��ս 2.���ܣ��ᷣ�"<<endl; 
                    int w;
                    cin>>w;
                    if(w==2)
                    {
                        tc++;
                        coin-=100;
                        cout<<"���ܳɹ�"<<endl;
                        continue;
                     } 
                    bool bd=false; 
                    int bdc=0;
                while(m.blood>0&&m2.blood>0)
                {
                    if(bdc==3)
                    {
                        bdc=0;
                        bd=false;
                    }
                    if(bd)
                    bdc++;
                    cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<endl;
                    cout<<"�з���Ѫ����"<<m2.blood<<endl;
                    cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m2.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m2.blood-=a1;
                            m2.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m2.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m2.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m2.blood-=a3;
                            m2.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m2.blood-=a5;
                        m2.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     if(rand()%11==1)
                     {
                        cout<<"�з��ӳ��˽�ʬ����!!!�����˶�������3�غϳ�����Ѫ������"<<endl;
                        bd=true;
                        m.blood-=25;
                     } 
                     else
                     {
                        cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m2.attack);
                     if(bd)
                     {
                        cout<<"����Ϊ���ؼ�Ѫ�ˣ�����"<<endl;
                        m.blood-=5;
                     }

                     }

                }
            }
            if(t==6)
            {
                m3.blood=10000;
                cout<<"�������˸�˹�����������������ǧ����ԣ�������һ���ƺ�����ģ��������ܣ���"<<endl; 
                cout<<"�������� 1.��ս 2.���ܣ��ᷣ�"<<endl; 
                    int w;
                    cin>>w;
                    if(w==2)
                    {
                        tc++;
                        coin-=100;
                        cout<<"���ܳɹ�"<<endl;
                        continue;
                     } 
                while(m.blood>0&&m3.blood>0)
                {
                    cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<endl;
                    cout<<"�з���Ѫ����"<<m3.blood<<endl;
                    cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m3.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m3.blood-=a1;
                            m3.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m3.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m3.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m3.blood-=a3;
                            m3.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m3.blood-=a5;
                        m3.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m3.attack);
                }
            }
            if(t==7)
            {
                bool bao=false;
                int cb=0;
                m4.blood=100000;
                cout<<"�������˳�����˹����"<<endl; 
                SlowDisplay("������˹������ɱ�����ҵĸ�˹���ܵܣ��������������������ܣ�������\n");
                cout<<"�������� 1.��ս 2.���ܣ��ᷣ�"<<endl; 
                    int w;
                    cin>>w;
                    if(w==2)
                    {
                        tc++;
                        coin-=100;
                        cout<<"���ܳɹ�"<<endl;
                        continue;
                     } 
                while(m.blood>0&&m4.blood>0)
                {
                    if(cb==3)
                    {
                        bao=false;
                        cb=0;
                    }
                    cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<endl;
                    cout<<"�з���Ѫ����"<<m4.blood<<endl;
                    cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m4.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m4.blood-=a1;
                            m4.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m4.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m4.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m4.blood-=a3;
                            m4.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m4.blood-=a5;
                        m4.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     if(rand()%11==1)
                     {
                        cout<<"�з�ʹ���˱�����������3�غϹ��������������������"<<endl;
                        bao=true;
                      } 
                     cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     {
                        if(bao)
                        {
                            m.blood-=(rand()%5+m4.attack)*2;
                            cb++;
                         }

                        else
                        m.blood-=(rand()%5+m4.attack);
                     }

                }
            }
            if(m.blood<=0)
            {
                cout<<"������"<<endl;
                return 0;
            }

            else
            {
                system("cls");
                if(t<=3)
                {
                    cout<<"ʷ��ķ���ѳ���һ��Сʷ��ķ������"<<endl;
                    m8.blood=25;
                     while(m.blood>0&&m8.blood>0)
                {
                    cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<endl;
                    cout<<"�з���Ѫ����"<<m8.blood<<endl;
                    cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m8.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m8.blood-=a1;
                            m8.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m8.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m8.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m8.blood-=a3;
                            m8.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m8.blood-=a5;
                        m8.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m8.attack);
                }
                if(m.blood<=0)
            {
                cout<<"������"<<endl;
                return 0;
            }
            else{ 
            cout<<"�������ˣ��ǽ����"<<endl;
                    coin+=10;
                    e1+=50;} 
                }

                else if(t>3&&t<=5)
                {
                    cout<<"�������ˣ��ǽ����"<<endl;
                    coin+=100;
                    e1+=100;
                }

                else if(t==6)
                {
                    cout<<"�������ˣ��ǽ����"<<endl;
                    coin+=1000;
                    c1++;
                    e1+=500;
                }
                else
                {
                    cout<<"�������ˣ��ǽ����"<<endl;
                    coin+=5000;
                    e1+=10000;
                }
            }

            }
            else
            {
                if(jianshang)
                {
                SlowDisplay("�����ϰ壺��������С���ӣ�־�򲻴������������(�񡪡�)���һ�֧����ġ�\n");
                SlowDisplay("�����ϰ壺˳����һ�����������һ��ҩ����ͻ��Զ�ʳ����������ʥ��ҩ�о�ϲ��~ɧ�꣬���Ͱ�~\n");
                jianshang=false;
                }
                cout<<"��Ľ����"<<coin<<endl; 
                cout<<"��Ҫ��: 0.�뿪 1.������ҩˮ 25Ԫ 2.����������ҩˮ 100Ԫ 3.������ҩˮ 10Ԫ 4.����������ҩˮ 100Ԫ 5.�ٶ�ҩˮ 10Ԫ 6.�޵�ҩˮ 1000Ԫ 7.��˹��ҩˮ 5000Ԫ 8.��ʥ��ҩ 10000Ԫ"<<endl;
                int r;
                cin>>r;
                if(r==0)
                SlowDisplay("�����뿪�С�����\n");
                else if(r==1&&coin>=25)
                {
                    e1+=1;
                    m.attack+=10;
                    coin-=25;
                    cout<<"����ɹ�"<<endl;
                 } 
                else if(r==2&&coin>=100)
                {
                    e1+=1;
                    m.attack+=50;
                    coin-=100;
                    cout<<"����ɹ�"<<endl;
                 } 
                 else if(r==3&&coin>=10)
                {
                    e1+=1;
                    m.blood+=50;
                    coin-=10;
                    cout<<"����ɹ�"<<endl;
                 } 
                 else if(r==4&&coin>=100)
                {
                    e1+=1;
                    m.blood+=600;
                    coin-=100;
                    cout<<"����ɹ�"<<endl;
                 } 
                 else if(r==5&&coin>=10&&m.speed<=75)
                {
                    e1+=1;
                    m.speed+=10;
                    coin-=10;
                    cout<<"����ɹ�"<<endl;
                 } 
                 else if(r==6&&coin>=1000&&m.speed<=75)
                {
                    e1+=1;
                    m.speed+=10;
                    m.attack+=2500; 
                    m.blood+=30000; 
                    coin-=1000;
                    cout<<"����ɹ�"<<endl;
                 } 
                 else if(r==8&&coin>=10000)
                {
                    e1+=1;
                    SlowDisplay("�����ϰ壺��������С���ӣ���Ȼ־�򲻴�������㱻ƭඣ����ǵ����������������Ե���ɱ��ģ��������ʥ��ҩҲ�Ƕ�ҩ��������~\n");
                    SlowDisplay("���Ѫ�͹����������ٶ�ֱ�Ӽ���һ�룬�ڴ�ͬʱ�����ϰ���������ƿ�����˹���������QAQ\n");
                    m.speed/=2;
                    m.attack/=2;
                    m.blood/=2;
                    while(m.blood>0&&m5.blood>0)
                    {
                        cout<<"�з���Ѫ����"<<m5.blood<<endl;
                        cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                        int z;

                        cin>>z;
                        if(z==1)
                        {

                            if(rand()%101<m5.speed)
                            cout<<"�з�����˹���"<<endl;
                            else
                            {
                            m5.blood-=a1;
                            m5.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                            }

                        } 
                        else if(z==2&&c2>0)
                        {
                        m5.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                        }
                        else if(z==3&&c3>0)
                        {
                        if(rand()%101<m5.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m5.blood-=a3;
                            m5.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                         }
                        else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m5.blood-=a5;
                        m5.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     cout<<"�з��ó�������!!!"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"����ͼ���,�������Ƿ�Χ����!!!"<<endl;
                        m.blood-=(rand()%5+m5.attack); 
                     }
                     m.blood-=(rand()%5+m5.attack);
                }
            if(m.blood<=0)
            {
                cout<<"������"<<endl;
                return 0;
            }

            else
            {
                cout<<"�������ˣ��ǽ����"<<endl;
                SlowDisplay("�Ե��ڵص�����Ѫ�ļ����ϰ壺��������С���ӣ���Ȼս��������������㱻ƭඣ�!@#               $#%^%&^%^#$               %@#%               $^%^&$               ^#$%#^&%*(**,����~\n");
                SlowDisplay("�����ϰ�˵����һЩ��ֵ�����,���ͬʱҩ����������,����һ������,����ǰһ��\n");
              SlowDisplay("��һ�� ��\n");
    system("pause");
                    coin+=5000; 
                    system("cls"); 
                    system("cls");
    jiazai(); 
    SlowDisplay("��ϲ����ڶ��°��ڵظ�\n");
    system("cls"); 
    int zing;
    cout<<"����1�鿴���飬����������"<<endl;
    cin>>zing;
    if(zing==1) 
    { 
    SlowDisplay("�ɵ��ڵص��������۾����ҡ�������������������𡣡���\n");
            SlowDisplay("������һƬ��ڣ�ȫ�ǳ�ʪ�Ĵ���ʯ������ͼ���������㱻���ڵ��ϡ�����\n");
            SlowDisplay("��ʱ������Զ��һ���ˣ����Ŷ��񿴲������ӣ������߽�������˵��û������û�������Ҿ����������־�ĵ��������氵�����ӣ����죬�Ұ������ӣ����������������ʿ����棬�����ǵ���ʿ����ȴ�����ڵ��ϣ�������~\n");
            SlowDisplay("����������ָ���Ử������������ӣ����Ӷ��ˡ�����\n");
            SlowDisplay("���������Һ������Ҫ��������Ҫɱ���㣬�ô����Ҳ�������ҵ�ʵ����������~\n");
            SlowDisplay("������Ц��ʱ����ʹ��������ͼͻ�������������ø첲һ���������㷴���������ϣ��㱻�����ڵ��Ǳ�����������\n");
            SlowDisplay("������������ͼͻϮ�ң��������������Ҫ�������Ǵ�ׯ�Ĺ�����ǰ����������\n");
            SlowDisplay("������һ�ԵĹ������Ⱦ���~\n");
            SlowDisplay("�㣺���棬������Ҿ������ã��ҽ���͸��������������������վ������������\n");
            SlowDisplay("�㻰�������������ͬʱʹ�����У���ʱ�������λ���Ľ���ɶҲ�����壬������ʱ���㿴��һ������ӵ��˰��㾾��һ�ԣ��Ǹ�����ӵ���Ҳ��ס������һ������ŵ������ĺ�������������������ǰ�ٴ�һƬ��ڡ�����\n");
            } 
            SlowDisplay("����һ����������ɵ��ڵص��������۾����ҡ�������������������ܿ��˿������ֿ������ɵ��ڵصĴ���ӵ��ˡ�����\n");
            SlowDisplay("����ӣ��ҵ����������ˣ�ֻ�ܴ��㴫�͵������ˡ��������Ǵ峤��������ģ����ȴ��Ź����ܰɣ��߹��ң���ͷ������׷�š�����\n");
            SlowDisplay("���������ͷ׷����һ�����ھ��ޡ�����\n");
            SlowDisplay("��ֻ����ǰ��ȥ�����ܳ��ظ�����100�ס�����\n");
            for(int i=0; i<100; i++)
            {
                Sleep(100);
                cout<<"���ܳ��ظ���ʣ"<<100-i<<"��"<<endl;
                int iii=rand()%10;
                if(iii==1)
                {
                    int c2=3,c3=10,c4=5,c5=1;
                    m7.blood=1000;
                    cout<<"��ӭ�������˰��ھ��ޡ�����"<<endl; 
                    while(m.blood>0&&m7.blood>0)
                    {
                        cout<<"�з���Ѫ����"<<m7.blood<<endl;
                        cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                        int z;

                        cin>>z;
                        if(z==1)
                        {

                            if(rand()%101<m7.speed)
                            cout<<"�з�����˹���"<<endl;
                            else
                            {
                            m7.blood-=a1;
                            m7.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                            }

                        } 
                        else if(z==2&&c2>0)
                        {
                        m7.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                        }
                        else if(z==3&&c3>0)
                        {
                        if(rand()%101<m7.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m7.blood-=a3;
                            m7.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                         }
                        else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m7.blood-=a5;
                        m7.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     cout<<"�з��ù�����!!!"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"������"<<endl;
                     }
                     m.blood-=(rand()%5+m7.attack);
                }
            if(m.blood<=0)
            {
                cout<<"������"<<endl;
                return 0;
            }
            else
            cout<<"�������ˣ���ܲ�����ش��Ź���������ǰ�ܡ�����";
                }
             } 
              SlowDisplay("���ܳ��˵ظ�������\n");
              SlowDisplay("ͻȻ�ظ��ſڳ��ֵ���������Ӱ������һ����������ȥ������\n");
              SlowDisplay("�ڶ��� ��\n");
    system("pause");
              jiazai();
              system("cls");
               SlowDisplay("��ϲ���������� �ӱ�����\n");

               int t3;
    cout<<"����1�鿴���飬����������"<<endl;
    m.blood=100;
               m.attack=0;
               m.speed=5;
               cin>>t3;
               if(t3==1)
               {
               SlowDisplay("�㷢�����������ɵ��ڲݵ��ϣ��㿴���˴���Ӻ͹��������ǽ�����֡�����\n");
               SlowDisplay("����ӣ�С���ӣ���������������ţ�������������ô��ʱ�䣬�������ѵĹ��������������밵�����������ʣ10���ˡ��������������");
               cout<<name;
               SlowDisplay("�����Ǹ����������֣��ҵ������Ǵ���ӣ��Ժ�����ʲô���⣬�ҾͿ��԰������ˣ����Ǵ峤�����ġ�   �������������������֡�����\n");
               SlowDisplay("��������������֣����������ʹ��ʹ���ٴε��أ�����������ס�㣬����üͷ˵������������ʹ����һ�������������ʹ��Ѫ���͹��������ٶȶ���Ϊ�˳�ʼ״̬�������ں���������Ҫ���״򶷣���������ҩ�����öࡣ����\n");

               SlowDisplay("�������������ˣ�˵������ӣ��Ҹе��ö��ˣ�лл�㡣����    �㷢������һ���ӵ��Աߣ���ʱ�㿴����һ����������д��ǧ��Ҫ�ɺӣ���ֹ�������˴����㡣����\n");
               SlowDisplay("��ʱ�㿴���ӱ���һ���ˣ��㺰�������㣿��������ô�����������\n");
               SlowDisplay("���ڴ����ľƹ�����������˼������ʶ����\n");
            SlowDisplay("�㣺���ھƹݼ������㣬������ˣ����Բ��ǵ��ˡ�\n");
            SlowDisplay("�����ߣ������������ܸ�����ʶ����������ҽ�Pavris��\n");
            SlowDisplay("Pavris:���ˣ��Һ�������ʲô���׵������𡣡���\n");
            SlowDisplay("�㣺ûʲô����Ͱ�һ��д���ҿ��������ַ��ĵ�ͼ�����ҡ�\n");
            SlowDisplay("���ֵ�Pavris��ʲô�������Ҳ��ܰ��Ǹ���ͼ���㣬�����ܣ������Ǹ���ͼ���ı��ؽ����ң�ΰ���Pavris�õ��ģ��������ѵ�ͼ���ң��ұ㲻������ӣ�����\n");
            SlowDisplay("�㣺��˵��Ҳû˵��Ҫ���Ӱ���\n");
            SlowDisplay("���ȵ�Pavris���㾹Ȼ������ȥɭ���������أ�������������װ�Ŀ���ҹ���飬�ܵ������������κ��˺������������ң�ΰ���PavrisҪ�õ���������ܵ����������������������������������������������������������ã��Һ���˵©����Щʲô������\n");
            SlowDisplay("�㣺��Ȼ�ܴ�ܵ�����Ϊ�β�������ҹ���飬�ҿ���ZO�����ʿ-----");
            cout<<name<<endl;}
             SlowDisplay("Pavris:������������������ӵģ�����\n");
             bool pavris=false;
             int zddd=0; 
             while(pavris==false)
             {
                SlowDisplay("Pavris��ס�����ȥ·����Ҫ��1.ս�� 2.���� 3.������ͼ\n");
             int ddd;
             cin>>ddd;
             if(ddd==3)
             {
                SlowDisplay("������Щʲô��������������������������Ҫ��ͼ������\n");
              } 
              else if(ddd==1)
              {
                if(zddd<3)
                {
                SlowDisplay("������Щʲô������������������������������֧������\n");
                zddd++;

                  }
                  else
                  {
                    SlowDisplay("����ôϣ��ս��������\n");
                    cout<<"��"; 
                    Sleep(250);
                    cout<<"��"; 
                    Sleep(250);
                    cout<<"��"; 
                    Sleep(250);
                    cout<<"��"; 
                    Sleep(250);
                    cout<<"ս"; 
                    Sleep(250);
                    cout<<"��"; 
                    Sleep(250);
                    cout<<"��"; 
                    Sleep(250);
                    cout<<"Ȼ"; 
                    Sleep(250);
                    cout<<"��"; 
                    Sleep(250);
                    cout<<"��"<<endl; 
                    SlowDisplay("�㳯Pavris���˹�ȥ������QAQ\n");
                    SlowDisplay("Pavris�γ���ħ�嵶������\n");
                    system("color 2f");
        Sleep(10);
                    int huzi=1000; 
                    int ttttt=1,tttttt=1;
                    while(huzi>0)
                    {
                        cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<endl;

                        int z;
                        if(ttttt==1)
                        {
                            ttttt=0;
                            cout<<"�з������ˣ����ܵ�99��Ѫ����������"<<endl;
                     m.blood-=(m9.attack);
                     SlowDisplay("Pavris������Ϊ�һ������һ��ɵɵվ�ţ������ȴ��ң�\n");
                     cout<<"�з���Ѫ����"<<m9.blood<<endl;
                        cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                         } 
                        else
                        {
                            cout<<"�з������ˣ�����Ӱ��㿸ס�˺�����������ӣ�����ļһ����"<<endl;
                     huzi-=(m9.attack);
                     cout<<"�з���Ѫ����"<<m9.blood<<endl;
                     cout<<"����ӵ�Ѫ����"<<huzi<<endl;
                        cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                        }

                        cin>>z;
                        if(z==1)
                        {

                                cout<<"������������֧����û�����κ�����"<<endl; 

                        } 
                        else if(z==2&&c2>0)
                        {
                            cout<<"������������֧����û�����κ�����"<<endl; 
                            c2--;
                        }
                        else if(z==3&&c3>0)
                        {
                            cout<<"������������֧����û�����κ�����"<<endl; 
                            c3--;
                        }
                        else if(z==4&&c4>0)
                        {
                            cout<<"������������֧����û�����κ�����"<<endl; 
                            c4--;
                        }
                        else if(z==5&&c5>0)
                        {

                            cout<<"������������֧����û�����κ�����"<<endl; 
                            c5--;
                        }   
                     else
                     cout<<"������Ч������"<<endl;
                     cout<<"����ӹ�����"<<endl;
                     m9.blood-=100; 
                     if(m9.blood<=0&&tttttt==1)
                     {
                        tttttt=0;
                        SlowDisplay("Pavris���Ҹо�Ҫ���ˣ��Ҳ����ˣ�����Ҫ���ţ���Ҫɱ�˵��������Ҳ��������������������Ұɡ�������Ѫ�Ǹ�����ҲҪ���ţ�����\n");
                     }
                }    
                SlowDisplay("�Ե��ڵصĴ���ӣ���ô�������������ȡ���������������������\n");
                SlowDisplay("��ʹ����ͬʱ�����˻ҽ�������������\n");
                SlowDisplay("��ɹ����浽�˻����֡������������������������������������ǲ��Ǹ���û����������Pavris����֪������ɱ���������ĵ�����������\n");
                printf("������Ϸ:�������䣨The Curse Of Darkness��\n");
    Sleep(1000);
    printf("��Ʒ��:drzo��teacherga��\n");
    Sleep(1000);
    printf("�汾:0.5.0\n");
    Sleep(1000);
    printf("�����ˣ���Ϸ����\n");
                return 0; 
                  }
              }
              else
              {
                cout<<"��˭������1.�������бؿ����飡������ 2.����� 3.Pavris"<<endl;
                  int jjj;
                  cin>>jjj;
                  if(jjj==1)
                  {
                    SlowDisplay("��������л������ң���һ��Ҫ��ܵ�������������Ϊ�˸м��㣬����һ���������\n");
                   } 
                   else if(jjj==2) 
                   SlowDisplay("����ӣ�ʲô�����������˲��ù��ӣ������������ú�˵�������������ȥ�ġ�\n");
                   else
                   { 
                    SlowDisplay("�㣺Pavris��������ҹ�ȥ�ɣ�����һ���õ�ҹ���飬һ��ɵ�����������á�����\n");
                    SlowDisplay("��Щ��ŭ��Pavris��������޷�����ң�������������Сʱ���ɱ���Ҹ�磬����Ӧɱ����������Ӧ���ң�����\n");
                    SlowDisplay("Pavris�Ļ�����ɽ�ȱ߻ص���һƬ�ž�������\n");
                    SlowDisplay("�㣺����ȫ����㣬���ǵĴ�ׯ1����ǰ�ͱ����䣬10��������Ҫ���֣��㱻��������ͷ�ԣ�����㲻���ҹ��ӣ������޹���������10�����𣡣�����ĸ���Ϊ��е������ģ�����\n");
                    SlowDisplay("�ٴ�һƬ�ž�������\n");
                    SlowDisplay("Pavris���������ȥ���������и����ף�ɱ���������ı������ҡ�����\n");
                    SlowDisplay("���Ƿ�ͬ�⣺1.ͬ�� 2.��ͬ�⣨�ش��֧��������Ӱ�����������֣�������\n");
                    int jujuju;
                    cin>>jujuju;
                    if(jujuju==1)
                    {
                        SlowDisplay("�㣺��ͬ�⣬������·�ɡ�\n");
                        jieju=true;
                     } 
                     else
                     {
                        SlowDisplay("�㣺�Ҳ�ͬ�⣬�ҿ�����������ҹ���飬����������ɱ��������  Pavris��˼��һ�ᣬ����ͷ��    �㣺������·�ɣ�\n");
                        jieju=false;
                     }
                        SlowDisplay("��������\n");
                        system("pause"); 
                     jiazai();
              system("cls");
              SlowDisplay("������ Pavris�ķ���\n");

               int t3;
    cout<<"����1�鿴�����£�������ȫ�Ǿ��飩������������"<<endl;
               cin>>t3;
               if(t3==1)
               {
                SlowDisplay("���ںȾƵ�Pavris������ô���ˣ�������ҼҰɣ�������Ϣһ��ͳ���ȥ��ҹ���顣\n");
              SlowDisplay("�㣬����������ӣ�Pavris����·�ϡ�����Pavris�ں�������һƬҶ�ӣ�Ҷ������Ϊһ���������Ƕ����˴���\n");
              SlowDisplay("�㣺Pavris����˵����ĵ�ͼ�Ҹ�������������\n");
              SlowDisplay("Pavris��Ŷ������˵��������ˣ�����\n");
              SlowDisplay("�����˵����͵�ͼ��\n");
              printf("############################\n");
    printf(".bbbbb...hhh....a.a.a..ccc.a\n");
    printf("...@......hhh....aaa..aa.@.*\n");
    printf("#######.#...hhh%%..aaaa..aaa.\n");
    printf("zzzzzzzz#@...hhhh..aaaa...a.\n");
    printf("zzzzzzzz#....&.h^h....aaa.a.\n");
    printf("zzzzzzzz#@....hhhhh....a.a.a\n");
    printf("#########........hhhhh....aa\n");
    printf("....................hhhhh..a\n");
    printf("############################\n");
    printf("#����ǽ��z����ZO�壬h�Ǻӣ�a������*�Ǳ��أ�@�ǹ�����ݵأ�.��ƽԭ��b��Ĺ�أ�c�����ӹ���%��Pavris�ļң�&�ǰ��ڵظ�\n");
    SlowDisplay("�ܿ죬���Ϳ����˶԰�������Pavris�ļң��Ǹ��ƾɵ�Сľ�ݡ�\n");
    SlowDisplay("���ǽ���ľ�ݣ������ر����������ù����Pavris���������˵��������������������\n");
    SlowDisplay("�㿴����һ���ƾɵ��ռǱ�����͵͵�ش��ˣ�\n");
    SlowDisplay("11��7�գ��Ҹ���Ѿ�����5���ˣ��ҡ�������Ҳ����д�ռ��ˡ�������Ҫ****��������\n");
    SlowDisplay("*��ī�����壬�㷭��һҳ��û�뵽����һ�䣬д�������ĵĹ��ھƵ�Ц���������ⶼ��Pavris�����д�µġ�\n");
    SlowDisplay("����ӣ��ҳ�ȥ��������ϻ���������\n");
    SlowDisplay("��������ȥ������\n");
    SlowDisplay("�ܿ��ҹ�����ˣ����Ƕ�����������������ӻ�û��������ܵ��ġ�����\n");
    SlowDisplay("Pavris����һ�㶼����������  �㣺��ʲô��˼�����ɾȹ��ҵ�����    Pavris���Ҿ��Ǿ������е㲻�Ծ�����Ҳ����ʶ��������ô��ͻȻð�������㣿\n");
    SlowDisplay("�㣺�������ˣ��峤�������ġ�\n");
    SlowDisplay("Pavris����üͷ���������������Ҵ�����ͷ���￴�峤��������ץ�ˡ�\n");
    SlowDisplay("�㣺�������������˯���ɡ�����\n");
    SlowDisplay("��ҹ������ôҲ˯���ţ������������μ�Ĺ�����Ĺ����һ��Ѽ�С�ͻȻ�㿴��һ������ذ�׵���Ӱ����Ĵ��ߣ�������һ����⣬�Ǹ���Ӱ�����ˣ�����Ǵӹ�������Ļ������������ģ��㣺��ô���¡�����\n");
    SlowDisplay("�ڶ��� ��Ҷ����˺󣬶�˵�㿴�����ǻþ����źʹ����ĺúõģ�Ҳû�����Ŷ���ļ��󣬴���ӻ���û����������\n");
    SlowDisplay("Pavris�����˸�ʮ�����Լ��ó��˸�ħ�嵶���ѹ��������������ɭ����̫Σ���ˣ��Ͱѹ����������ˣ���֮�����·�ˡ�����\n");
    SlowDisplay("���Pavris���������죬Pavris���ҵ�ȫ����Pavris Black����˵ֻ�������Black������ˣ��������ɿ��Ƹ�ħ�嵶������\n");
    SlowDisplay("��ʱ���㷢��ɭ�ֱ�Ե��һ�����£�����Ѫ����ֹ�Ĵ���ӡ�����QAQ\n");
               }

    SlowDisplay("��������\n");
    system("pause");
    system("cls");
    jiazai();
    SlowDisplay("������ ɭ������\n");
    SlowDisplay("����һ�����ƣ��������������������\n");
    SlowDisplay("����ӣ���һ������������ƿ�ں�ͷ͵Ϯ�ң�����   �㣺����ƿ��������������������һ���ˡ�����\n");
    SlowDisplay("��ӭ����drzo���⻷�ڣ�������������ǿ�����ǰͷ����Ϸʱ���ǲ��Ǻ����棡����\n");
    SlowDisplay("��һ�⣺ʹ�õ�����������ƿ������˭������  A.�����ϰ� B.�� C.drzo D.�����\n");
    SlowDisplay("���ѡ���ǣ�");
    char ABCD;
    cin>>ABCD;
    if(ABCD=='A')
    SlowDisplay("����ˣ�����\n");
    else
     SlowDisplay("����ˣ������´�Ŭ��������\n");
     system("pause"); 
      SlowDisplay("�㣺�Ǽ����ϰ壡��������������˵�������������ڴ���͵Ϯ�ҵ�Ҳ������������ô˵�������Ѿ�֪�����ǵ�λ���ˣ����ǵøϽ���·�ˣ�����\n");
      SlowDisplay("Pavris������Ҫ��ȥ͵��ҹ���飬���봩���ڰ�ɭ�֣��ƹ����˱���ɭ�������ܶ࣬������С�ģ������պ����ʮ������·�ɣ�����  �������������߽���ɭ�֡�����\n");
      int lucheng=1000;
      while(lucheng>0)
      {
        if(e1>=e2)
                {
                    int h=e1/e2;
                    level+=e1/e2;
                    e1=e1%e2;
                    e2+=50;
                    cout<<"��������!!!������&Ѫ�������ˣ�����"<<endl;
                    a1+=2*h;
                    a3+=3*h;
                    a5+=5*h;
                    a6+=4*h;
                    a4+=10*h;
                    a2+=5*h;
                    m.blood+=10*h;
                    coin+=100*h; 
                }
        SlowDisplay("���뱦��\n");
        cout<<lucheng;
           SlowDisplay("�ס�����\n");
           cout<<"��Ҫ��1.�����˵�� 2.���ٵ�· 3.�����Լ� 4.���� 5.�鿴��ͼ "<<endl; 
           int stst;
           cin>>stst;
           if(stst==1)
           {
                SlowDisplay("Pavris�������������ұ���ץס��������Ϊ�Ҹ�籨�𣡣���   ����ӣ�С���ӣ����Ͱɡ�����   �㣺�һ�Ŭ���ģ�����QAQ\n");
           }
           else if(stst==3)
           {
            cout<<"���Ѫ����"<<m.blood<<endl<<"��Ķ��⹥������"<<m.attack<<endl<<"����ٶ�(�ٶ�����85)��"<<m.speed<<endl;
                    long long ttt=e1/10;
                    cout<<"��ľ���Ϊ��";
                    for(int i=0; i<ttt; i++)
                    {
                        cout<<"��"; 
                     } 
                     cout<<e1<<"/"<<e2<<endl;
                     cout<<"��ĵȼ�Ϊ��"<<level<<endl; 
           }
           else if(stst==4)
           {
            SlowDisplay("���¶���ǰЩ����ϱ�ֽ��"); 
            SlowDisplay("����ͷ����*ZO����Σ�ڵ�Ϧ����ʿŬ���������磬�Ե׻����ׯ*\n");
                    SlowDisplay("����ͷ����*�峤�����ݽ�����ʿ�Ƿ������ȴ�ׯ���ұ�ʾ���ɡ�������ʿ����ų��*\n"); 
                    SlowDisplay("����ͷ����*�����ﱻ�ɵ�����ׯΣ�����룬������ץ��˭�����ȹ������ͽ�10000*"); 
                    SlowDisplay("����ͷ����*���氵������ץס�峤�����񼴽��������������伴��16������飡����*"); 
           }
           else if(stst==5)
           {
                if(lucheng==1000)
                {
                     SlowDisplay("�����˵����͵�ͼ��\n");
              printf("############################\n");
    printf(".bbbbb...hhh....a.a.a..ccc.a\n");
    printf("...@......hhh....aaa..aa.@.*\n");
    printf("#######.#...hhh%%..^aaa..aaa.\n");
    printf("zzzzzzzz#@...hhhh..aaaa...a.\n");
    printf("zzzzzzzz#....&.hhh....aaa.a.\n");
    printf("zzzzzzzz#@....hhhhh....a.a.a\n");
    printf("#########........hhhhh....aa\n");
    printf("....................hhhhh..a\n");
    printf("############################\n");
    printf("#����ǽ��z����ZO�壬h�Ǻӣ�a������*�Ǳ��أ�@�ǹ�����ݵأ�.��ƽԭ��b��Ĺ�أ�c�����ӹ���%��Pavris�ļң�&�ǰ��ڵظ�\n");

                   }
                   else if(lucheng>=750)
                   {
                     SlowDisplay("�����˵����͵�ͼ��\n");
              printf("############################\n");
    printf(".bbbbb...hhh....a.a.a..ccc.a\n");
    printf("...@......hhh....aaa..aa.@.*\n");
    printf("#######.#...hhh%%..aa^a..aaa.\n");
    printf("zzzzzzzz#@...hhhh..aaaa...a.\n");
    printf("zzzzzzzz#....&.hhh....aaa.a.\n");
    printf("zzzzzzzz#@....hhhhh....a.a.a\n");
    printf("#########........hhhhh....aa\n");
    printf("....................hhhhh..a\n");
    printf("############################\n");
    printf("#����ǽ��z����ZO�壬h�Ǻӣ�a������*�Ǳ��أ�@�ǹ�����ݵأ�.��ƽԭ��b��Ĺ�أ�c�����ӹ���%��Pavris�ļң�&�ǰ��ڵظ�\n");

                   }
                   else if(lucheng>=500)
                   {
                     SlowDisplay("�����˵����͵�ͼ��\n");
              printf("############################\n");
    printf(".bbbbb...hhh....a.a.a..ccc.a\n");
    printf("...@......hhh....aaa..aa.@.*\n");
    printf("#######.#...hhh%%..aaa^..aaa.\n");
    printf("zzzzzzzz#@...hhhh..aaaa...a.\n");
    printf("zzzzzzzz#....&.hhh....aaa.a.\n");
    printf("zzzzzzzz#@....hhhhh....a.a.a\n");
    printf("#########........hhhhh....aa\n");
    printf("....................hhhhh..a\n");
    printf("############################\n");
    printf("#����ǽ��z����ZO�壬h�Ǻӣ�a������*�Ǳ��أ�@�ǹ�����ݵأ�.��ƽԭ��b��Ĺ�أ�c�����ӹ���%��Pavris�ļң�&�ǰ��ڵظ�\n");

                   }
                   else
                   {
                     SlowDisplay("�����˵����͵�ͼ��\n");
              printf("############################\n");
    printf(".bbbbb...hhh....a.a.a..ccc.a\n");
    printf("...@......hhh....aaa..a^.@.*\n");
    printf("#######.#...hhh%%..aaaa..aaa.\n");
    printf("zzzzzzzz#@...hhhh..aaaa...a.\n");
    printf("zzzzzzzz#....&.hhh....aaa.a.\n");
    printf("zzzzzzzz#@....hhhhh....a.a.a\n");
    printf("#########........hhhhh....aa\n");
    printf("....................hhhhh..a\n");
    printf("############################\n");
    printf("#����ǽ��z����ZO�壬h�Ǻӣ�a������*�Ǳ��أ�@�ǹ�����ݵأ�.��ƽԭ��b��Ĺ�أ�c�����ӹ���%��Pavris�ļң�&�ǰ��ڵظ�\n");

                   }
             }
            else if(stst==2)
            {
                int c2=3,c3=10,c4=5,c5=1;
                int slg=rand()%3;
                if(slg==0)
                {
                    SlowDisplay("����������Ѫ���𣬼��ܣ���Ѫ\n");
                    m11.blood=300; 
                    while(m.blood>0&&m11.blood>0)
                {
                    cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<"6.��ʮ���󹥻���100"<<endl;
                    cout<<"�з���Ѫ����"<<m11.blood<<endl;
                    cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m11.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m11.blood-=a1;
                            m11.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m11.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m11.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m11.blood-=a3;
                            m11.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m11.blood-=a5;
                        m11.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else if(z==6)
                     {

                        cout<<"�з��ܵ�����"<<endl; 
                        m11.blood-=100; 
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     cout<<"�з������˻���Ѫ��"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     {

                        m.blood-=(rand()%5+m11.attack);
                        m11.blood+=(rand()%5+m11.attack)/4;
                     }

                }
                }
                if(slg==1)
                {
                    SlowDisplay("�����������ˣ��޼���\n");
                    m12.blood=1000;
                    while(m.blood>0&&m12.blood>0)
                {
                    cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<"6.��ʮ���󹥻���100"<<endl;
                    cout<<"�з���Ѫ����"<<m12.blood<<endl;
                    cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m12.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m12.blood-=a1;
                            m12.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m12.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m12.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m12.blood-=a3;
                            m12.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m12.blood-=a5;
                        m12.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else if(z==6)
                     {

                        cout<<"�з��ܵ�����"<<endl; 
                        m12.blood-=100; 
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     {

                        m.blood-=(rand()%5+m12.attack);
                     }

                }
                }
                if(slg==2)
                {
                    SlowDisplay("�������˶����ޣ��޼���\n");
                    m13.blood=500;
                    while(m.blood>0&&m13.blood>0)
                {
                    cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<"6.��ʮ���󹥻���100"<<endl;
                    cout<<"�з���Ѫ����"<<m13.blood<<endl;
                    cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m13.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m13.blood-=a1;
                            m13.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m13.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m13.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m13.blood-=a3;
                            m13.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m13.blood-=a5;
                        m13.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else if(z==6)
                     {

                        cout<<"�з��ܵ�����"<<endl; 
                        m13.blood-=100; 
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     {
                        m.blood-=(rand()%5+m13.attack);
                     }

                }
                }
                 if(m.blood<=0)
                 {
                    cout<<"������"<<endl;
                    return 0;
                 }
                 else
                 {
                    cout<<"�������ˣ��Ǿ�����"<<endl;
                    if(slg==0) 
                    e1+=100;
                    else if(slg==1)
                    e1+=300;
                    else
                    e1+=250;
                 }
SlowDisplay("��ǰ����100�ף�����\n");
lucheng-=100;

             } 
            else
            cout<<"������󣡣���"<<endl;  
                }
                SlowDisplay("���ǵ��˾��˱�����������Ҫ��Ϣʱ��ͻȻһ���������ĳ�������QAQ\n");

                int c2=3,c3=10,c4=5,c5=1;
                while(m.blood>0&&m14.blood>0)
                {
                    cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<"6.��ʮ���󹥻���100"<<endl;
                    cout<<"�з���Ѫ����"<<m14.blood<<endl;
                    cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�,�����Ҳǰ����ս��Pavris�ߺȾƱ��Թۡ�����"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m14.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m14.blood-=a1;
                            m14.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m14.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m14.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m14.blood-=a3;
                            m14.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m14.blood-=a5;
                        m14.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else if(z==6)
                     {

                        cout<<"�з��ܵ�����"<<endl; 
                        m14.blood-=100; 
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     cout<<"����ӹ����ˣ�����������100��Ѫ"<<endl;
                     m14.blood-=100; 
                     if(rand()%10!=1)
                     {

                     cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     {
                        m.blood-=(rand()%5+m14.attack);
                     }
                     }
                     else
                     {
                        cout<<"������ʹ�úӶ�ʨ�����ٶȼ���20������"<<endl;
                        m.speed-=20; 
                     }

                }
                if(m.blood<=0)
                {
                    cout<<"�����ˣ�����"<<endl;
                return 0;
                }
                else
                {
                    cout<<"���˹��ˣ�����"<<endl;
                    SlowDisplay("�㣺�ո�̫���ˣ������ˣ��Һô���Ӿ���\n");
                    SlowDisplay("����ӣ����������ж�Һ������󣬻�˵һ�㶼�˹�����զ��ɭ�����ˣ�����    ����ӱ�˵�߶�����ƿ�ӽ��˵�Ӱ�����ʬ����������µĶ�Һ������\n");
                    SlowDisplay("ͻȻ������Pavrisһ����У�������һ������㾪�ȵط����Ǹ����Ǹ��˹����壬�㣺����ӣ����ܣ�����    ���Ѿ����ˣ�һ���޴������������ʹ����ͷ�ϣ������������������\n");
                    SlowDisplay("���������ǿ϶��Ǳ�������ץ�ˣ�����������һ��60�����һ�����ݽ�թ��һ����ͷ�ӣ��������Ǵ������ʵ����������ߺ��ˣ���������ɱ���������ӹ������������ĳ�����������������Ǳ�����������\n");
                    SlowDisplay("������ ��\n");
                    system("pause");
                    system("cls");
                    jiazai();
                    SlowDisplay("������ ��ȡҹ����\n");
                    SlowDisplay("��������̫����ˣ����Ǳ����ӹ�����ץ��֮������֪���ľ��ǣ����Ǳ������˼�����Ͷ���˵��Ρ��������ͬʱ��������8������ԡ�����\n");
                    SlowDisplay("Pavris��ŭ�޳������·��������η��ذ壬��ŭ�����ûϣ���ˡ�������Ҳ����ץ���������ˡ�����  ������쳣�侲��һֱ�ڰ�οPavris������\n");
                    SlowDisplay("����о����뿪��ϣ����ã���Լ����ڽ��������  ͻȻһ��������һ���߸����˴����ţ��߽��η�����˵���������ӹ���������Ҳ�����ӹ���������˵����ZO����ʿ������\n");
                    SlowDisplay("��Ҫ��1����   2������\n");
                    int t;
                    cin>>t;
                    if(t==1)
                    {
                        SlowDisplay("���ӹ�����������ڵ���QAQ��˵����˵��Ҫȥ��ҹ���飬�����ҿɳ�����ˣ���Ȼ���ǹ��Ҳ��ܰ������䣬������Ҳ��޵���������Ϊ�������ľ��˾��žۼ������ǹ����Եľ��˱��ڣ������ֺ����ǹ��ң�������������������\n");
                        SlowDisplay("������˵���������Ҫȥ��ҹ���飬һ��Ҫ��ܵ���������������������ͷ����ǳ�ȥ��������ƿ�þƣ�����������ģ�Ŷ�����ˣ�������ǳɹ�͵����ҹ���飬һ��Ҫ�ع��������������ǣ����� \n");
                        SlowDisplay("���������Ǳ����ˣ���������ȥ͵ҹ�����·������ \n");
                        SlowDisplay("�����������˱��ĳ�ǽǰ��Pavris�����˵�����ؾ����ھ��˱������Ժ����Ĵ�����������Ӳ�������ܣ��������ƶ��üƻ��ˣ��Ǿ�������ˮ�������� \n");
                        SlowDisplay("�㣺����ˮ����������������������϶����Ƕ��ĵľ��˵ı�㣡   Pavris����������������üƻ����벻���͸����ߣ����� \n");
                        SlowDisplay("���������˶��ĵ���ˮ������ˮ�����ݽ��� �������Թ��ǵġ�����\n");
                        SlowDisplay("û����ӭ����drzoС��Ϸ���ڣ����������Թ��ɣ�����\n");
                        system("pause"); 
                        system("cls");
                        int i,j;
    aaa[1]="*@*********";
    aaa[2]="*   *   * *";
    aaa[3]="* *** * * *";
    aaa[4]="* *** * * *";
    aaa[5]="*   * * * *";
    aaa[6]="* * * * * *";
    aaa[7]="* * * * * *";
    aaa[8]="* * * * * *";
    aaa[9]="* *   *   *";
    aaa[10]="********* *";
    out();
    char c;
    for(;;)
    {
        c=getch();
        system("cls");
        if(c=='w')
        {
            if(judge(x-1,y))
            {
                swap(aaa[x-1][y],aaa[x][y]);
                x--;
            }
        }
        if(c=='a')
        {
            if(judge(x,y-1))
            {
                swap(aaa[x][y-1],aaa[x][y]);
                y--;
            }
        }
        if(c=='s')
        {
            if(judge(x+1,y))
            {
                swap(aaa[x+1][y],aaa[x][y]);
                x++;
            }
        }
        if(c=='d')
        {
            if(judge(x,y+1))
            {
                swap(aaa[x][y+1],aaa[x][y]);
                y++;
            }
        }
        out();
        if(x==10&&y==9)
        {
            system("cls");
            cout<<"YOU WIN"<<endl;
            Sleep(2000);
            getch();
            break;
        }
    }
                    SlowDisplay("����������������ˮ�������ǴӾ��˱��Ĳ������һ������é���������������ǻ�����ʺ���Ǳ���������Pavrisһֱ��Ż�£��㷢�ֲ�����������Ǹ��ػ����ص�Ժ�ӡ�����\n");
                    SlowDisplay("�㣺�Ͻ��ж����죬���ǴӴ�������ȥ������     ������ʱ�����������˾޴�ĽŲ�����Pavris�����ˡ�����      �����ſڳ����˸������Ӵ�ľ��ˣ���ò����ޱȣ��·��ϻ����ű��飬����������ŭ��һ�����������һ��ѿ�ˮ���������ڲ���������ʺ����մ���˾��˵Ŀ�ˮ�����˾��������������ȥ�������룺���������ˡ�����\n");
                    SlowDisplay("�����ͬʱPavris���ٴ���������ϴ����ӹ������������ƿ�ƣ��������ھ���ͷ�ϣ����˱������ڵأ�����ƿ�������ˣ��������ڵأ�����Ӿ��Ȳ��ѡ�����  Pavris����˵�����Ƿ�������ˣ�����\n");
                    SlowDisplay("��ʱ�����ſڳ���3�����ˣ����ǿ��˿��������ڵص�������ˣ��ֿ��˿�Pavris�����յ���ƿ�ӣ��ֿ��˿�Pavris���͵����飬���������ˣ���Pavris���ţ���ҪΪ�Ҹ�籨�𣡣���   ׷����ȥ������ӣ���̫ɵ�ˣ����򲻹���ô����˵ġ�����     �㣺���ù��������ȴӴ�������ȥ�����������������\n");
                    SlowDisplay("����һ�����Pavris�������������������������Pavris���������ˣ���������ʮ���������    �㣺�Ͻ�����ȥ������Ҫ��Ȼû����!!!\n");
                    SlowDisplay("���Ƕ�������ȥ��������Ѿ��ҵ���ҹ�����ӵ�Pavris���С�����������Ժ�������ҵ�������������ȫ������ȥ������ؼ��ų�������׷���˼�ʮ�����ˣ�Pavris�ڳ��ϺȾ�ѹ����������������˸��ڶ����Ǽ������˶����˽�ȥ���������ڰ�ȫ�ˡ�����\n");
                    SlowDisplay("������ ��\n");
                    system("pause");
                    system("cls");
                     SlowDisplay("������ ���ӹ�Σ��\n");
                    SlowDisplay("����˳��������˱��������õ�ҹ���飬����������������ӹ����ͣ����ǻ���˺ܶ�Ǯ��ס��һ�ޣ�׼���뿪���밵����������7�졣����\n");
                    SlowDisplay("��׼������������ӹ��������Ҫ�뿪ʱ���ϴΰ�����ץ������60������ͷ����ס�����ǣ�����Ц��˵���Ǻǣ�С����־�򲻴�����õ���ҹ���飬Ҫȥ�����棬�ҽ�Sarais�������ӹ��󳼹�������\n");
                    SlowDisplay("�����룺��˵���������������е�������ʶ������   Sarais���������������룬�����Ҽ��������������������ͺȵ�裬���������߹�������\n");
                    SlowDisplay("���Ƿ�ҪȥSarais���ң�");
                    SlowDisplay("1.ȥ 2.��ȥ\n");
                    int t;
                    cin>>t;
                    if(t==1)
                    {
                        SlowDisplay("�㣺�ã���ȥ����ȥ������\n");
                        SlowDisplay("������������Sarais���ҡ�����·�У��㿴��·���и���ɭ���ŵ꣬�㿴��������д�ţ���ɱר����\n");
                        SlowDisplay("�������߽�ȥ���и���棺���������٣����������ǻ����ë��ֱ����������ɱר���꣬�ṩ100�����������ṩ��ѹײ�Ŷ������\n");
                        SlowDisplay("����ڰ��ޱȣ������кö����Ŷ�Ҫ��ɱ���㷢��ÿ��Ҫ��ɱ���˶�������һ�����������Ҳû�����ˣ��㷢�������������ġ�����  ����ӣ��ⷿ��ǳ����Ծ����㿴���ô�ǽ����ȥ��һ�ۡ�����\n");
                        SlowDisplay("��һ�������ӳ����ˣ���ͷ�󺹣���˵�����ã�����ÿ��Ҫ��ɱ���˶����ȱ���˽�ʬ���������Ǹ���ı������    ����Pavrisײ�����ţ���Ȼһ��Ⱥ��ʬӵ�˳���������һ�Ȼ��ң�����\n");
                        int jn=30;
                        while(jn>0)
                        {
                            SlowDisplay("����");
                            cout<<jn;
                             SlowDisplay("����ʬ���������ͣ������������ǣ�����\n");
                             m2.blood=100;
                cout<<"�������˽�ʬ�����ǲ�����ò��ª��Ҳ�׺ݲб����ɵ����ǰɣ��������ܣ���ʬ����"<<endl;
                    bool bd=false; 
                    int bdc=0;
                    int c2=3,c3=10,c4=5,c5=1;
                while(m.blood>0&&m2.blood>0)
                {
                    if(bdc==3)
                    {
                        bdc=0;
                        bd=false;
                    }
                    if(bd)
                    bdc++;
                    cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<"6.��ʮ���󹥻���100"<<endl;
                    cout<<"�з���Ѫ����"<<m2.blood<<endl;
                    cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m2.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m2.blood-=a1;
                            m2.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m2.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m2.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m2.blood-=a3;
                            m2.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m2.blood-=a5;
                        m2.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else if(z==6)
                     {

                        cout<<"�з��ܵ�����"<<endl; 
                        m2.blood-=100; 
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     if(rand()%11==1)
                     {
                        cout<<"�з��ӳ��˽�ʬ����!!!�����˶�������3�غϳ�����Ѫ������"<<endl;
                        bd=true;
                        m.blood-=25;
                     } 
                     else
                     {
                        cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m2.attack);
                     if(bd)
                     {
                        cout<<"����Ϊ���ؼ�Ѫ�ˣ�����"<<endl;
                        m.blood-=5;
                     }

                     }

                }
                             if(m.blood<=0)
                        {
                            SlowDisplay("�����ˡ�����\n");
                            return 0; 
                        } 
                        else
                        {
                            SlowDisplay("�������ˡ�����\n");
                            jn--;
                        }
                        } 

                        SlowDisplay("���ǰѽ�ʬ�������ˡ����������������������󹦣������ͣ�Sarais���ʲ��ѡ�����\n");
                    }
                    else
                    {
                        SlowDisplay("�㣺�Ҳ�ȥ������\n");
                        SlowDisplay("���������뿪�����ӹ�������·�У��㿴��·���и���ɭ���ŵ꣬�㿴��������д�ţ���ɱר����\n");
                        SlowDisplay("�������߽�ȥ���и���棺���������٣����������ǻ����ë��ֱ����������ɱר���꣬�ṩ100�����������ṩ��ѹײ�Ŷ������\n");
                        SlowDisplay("����ڰ��ޱȣ������кö����Ŷ�Ҫ��ɱ���㷢��ÿ��Ҫ��ɱ���˶�������һ�����������Ҳû�����ˣ��㷢�������������ġ�����  ����ӣ��ⷿ��ǳ����Ծ����㿴���ô�ǽ����ȥ��һ�ۡ�����\n");
                        SlowDisplay("��һ�������ӳ����ˣ���ͷ�󺹣���˵�����ã�����ÿ��Ҫ��ɱ���˶����ȱ���˽�ʬ���������Ǹ���ı������    ����Pavrisײ�����ţ���Ȼһ��Ⱥ��ʬӵ�˳���������һ�Ȼ��ң�����\n");
                        int jn=30;
                          int c2=3,c3=10,c4=5,c5=1;
                        while(jn>0)
                        {
                            SlowDisplay("����");
                            cout<<jn;
                             SlowDisplay("����ʬ���������ͣ������������ǣ�����\n");
                             m2.blood=100;
                cout<<"�������˽�ʬ�����ǲ�����ò��ª��Ҳ�׺ݲб����ɵ����ǰɣ��������ܣ���ʬ����"<<endl;
                    bool bd=false; 
                    int bdc=0;
                while(m.blood>0&&m2.blood>0)
                {
                    if(bdc==3)
                    {
                        bdc=0;
                        bd=false;
                    }
                    if(bd)
                    bdc++;
                    cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<endl;
                    cout<<"�з���Ѫ����"<<m2.blood<<endl;
                    cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m2.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m2.blood-=a1;
                            m2.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m2.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m2.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m2.blood-=a3;
                            m2.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m2.blood-=a5;
                        m2.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     if(rand()%11==1)
                     {
                        cout<<"�з��ӳ��˽�ʬ����!!!�����˶�������3�غϳ�����Ѫ������"<<endl;
                        bd=true;
                        m.blood-=25;
                     } 
                     else
                     {
                        cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m2.attack);
                     if(bd)
                     {
                        cout<<"����Ϊ���ؼ�Ѫ�ˣ�����"<<endl;
                        m.blood-=5;
                     }

                     }

                }
                             if(m.blood<=0)
                        {
                            SlowDisplay("�����ˡ�����\n");
                            return 0; 
                        } 
                        else
                        {
                            SlowDisplay("�������ˡ�����\n");
                            jn--;
                        }
                        } 

                        SlowDisplay("���ǰѽ�ʬ�������ˡ����������������������󹦣������ͣ�Sarais���ʲ��ѡ�����\n");
                    } 
                    SlowDisplay("Sarais����ҧ���гݣ��������һ�˴�����һ�������һ���ֶ�����˵��ץס��������\n");
                    SlowDisplay("�㣺Sarais����������û�����κ����鰡������     �������㱻�ؽ�����ɭ�ļ���������\n"); 
                    SlowDisplay("������ ��\n"); 
                    system("pause");
                    system("cls");
                    jiazai();
                    SlowDisplay("�ڰ��� Խ��\n");
                    SlowDisplay("�㣺Sarais����������û�����κ����鰡������     Sarais����̫�����ˣ�����Ϊ�����Ҿͷ����㣿����ҹ���������ˣ��������������飬�͵��������ˡ�����\n");
                    SlowDisplay("�㣺�㲻������������    Sarais����Ϊʲô�����������������ӹ��󳼣�������ȫ�����ң����군�ģ�������������Ȼ־�򲻴����㱻ƭ��������\n");
                    SlowDisplay("�ٴλ�ӭ����drzo���⻷�ڣ��ڶ����⣺\n");
                    SlowDisplay("Sarais�Ļ�����˭�Ļ�������  A.�����ϰ� B.�� C.drzo D.�����\n");
    SlowDisplay("���ѡ���ǣ�");
    char ABCD;
    cin>>ABCD;
    if(ABCD=='A')
    SlowDisplay("����ˣ�����\n");
    else
     SlowDisplay("����ˣ������´�Ŭ��������\n");
     system("pause"); 
                    SlowDisplay("�㣺��Ī���Ǽ����ϰ壿������\n");
                    SlowDisplay("Sarais��ɵ�ӣ����ڲ��������������������   ����Sarais˺������ߣ�¶�������ϰ����ף�\n");
                    SlowDisplay("��ʱ�������˽���,�㣺����������ô�������������Ϊ��һֱ����Pavris���ң����ܣ����������ǵ��������£�����\n");
                    SlowDisplay("���ţ������ˣ��ֲ�Ѫ�ȵ�һĻ����������¶��Ѫ���ڣ������һ�����͵�����ͷ���ߣ�����һ�ڰ�Sarais˺�������룬��Ѫ�ɽ�������\n");
                    SlowDisplay("�㾪���ˣ������ڵأ�ԭ��������Ҳ�ǵ����������ģ����� ���룺�����û���ˡ�����QAQ\n");
                    SlowDisplay("��ͷ��˻˻�ؽе���");
                     SlowDisplay("�����������ҽ�ENDER���ǵ���������ɱ��ģ�û�뵽����и�������Ĵ�������ֻ�ð�������ʳ������������Ҳ�����ҵ�ʳ���ˣ�����������\n");
                      SlowDisplay("ENDER����ײ�ϼ����ţ�һײ��ײ���ˣ�����\n");
                       SlowDisplay("��Ҫ�û���1.ս�� 2.����\n");
                       int tttt;
                       cin>>tttt;
                       if(tttt==1)
                        {

                    int c2=3,c3=10,c4=5,c5=1;
                            while(m.blood>0&&m16.blood>0)
                {
                    cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<endl;
                    cout<<"�з���Ѫ����"<<m16.blood<<endl;
                    cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m16.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m16.blood-=a1;
                            m16.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m16.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m16.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m16.blood-=a3;
                            m16.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m16.blood-=a5;
                        m16.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"������Ч������"<<endl;
                        cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m16.attack);

                        }if(m.blood<=0)
                        {
                            SlowDisplay("�����ˡ�����\n");
                            return 0; 
                        } 
                        else
                        {
                            SlowDisplay("�������ˡ�����\n");
                            e1+=10000;
                            if(e1>=e2)
                {
                    int h=e1/e2;
                    level+=e1/e2;
                    e1=e1%e2;
                    e2+=50;
                    cout<<"��������!!!������&Ѫ�������ˣ�����"<<endl;
                    a1+=2*h;
                    a3+=3*h;
                    a5+=5*h;
                    a6+=4*h;
                    a4+=10*h;
                    a2+=(5*h)/100;
                    m.blood+=10*h;
                    coin+=100*h; 
                }
                        }
                    }
                    SlowDisplay("��û��ܵ��ˣ�����\n");
                    SlowDisplay("�ڰ��� ��\n");
                    system("pause");
                    jiazai();
                    SlowDisplay("�ھ��� Ĺ�ؾ���\n");
                    SlowDisplay("����ҹ�ӳ����ӹ���Pavris�ʹ���Ӷ���ץ�ˣ���ҹ�����ֱ����ߣ��밵����������3�졣����QAQ\n");
                    SlowDisplay("��֮ǰ�����ϸɵ����ж�����һ����о���ֹ������ϣ����ã������������֪�������������������Ҳ��֪�����������֡�����\n");
                    SlowDisplay("���һ���뵽�ľ��ǻ�Pavris���Ҿ�һ���������㵽�����ң�����ط��ֹ���������ͷ��Ϊ���Է������ǵ��������±�ã�����̽���ʣ���Ϊ�ж��ң������͵�ʲô�������\n");
                    SlowDisplay("������������   ������һ�������������湫����������ȷʵ����ġ�������\n");
                    SlowDisplay("��ʱ�㿴��ǽ�����Ÿ���������ͷд�ţ�Ҫ��Ȼ�������ѣ�Pavris�ʹ���ӣ�����ʮ���㣬����һ����Ĺ�ؼ��ҡ�\n");
                    SlowDisplay("����˵������Բ���ȥ������Ҫ֪��������������ʿ����ֹһ�����Ҽ��������ǣ����Ǿ����ˣ���һ��һ���Ķ����ˣ���������ɱ���ˣ���֪�������������������ѣ��ɲ������������Ƕ������ģ������ȥ����Ҳ��������ˣ�Ϊ���㣬�һ���ס�㣬���Բ�Ҫ��ȥ������\n");
                    bool flag2=true,mazui=true;
                    while(flag2) 
                    {
                        if(mazui)
                        SlowDisplay("������ס���ȥ·����Ҫ��1.ս�� 2.���� 3.�鿴����\n");
                        else
                        SlowDisplay("������ס���ȥ·����Ҫ��1.ս�� 2.���� 3.�鿴���� 4.������\n");
                    int ttttt;
                    cin>>ttttt;
                    bool jieju2=true;
                    if(ttttt==1)
                {
                    cout<<"������";
                      Sleep(125);
                      cout<<"��";
                       Sleep(125);
                      cout<<"��";
                      Sleep(125);
                      cout<<"��";
                      Sleep(125);
                      cout<<"��";
                      Sleep(125);
                      cout<<"��";
                      Sleep(125);
                      cout<<"��";
                      Sleep(125);
                      cout<<"���ң�";
                      Sleep(500);
                      cout<<"��";
                      Sleep(500);
                      cout<<"��";
                      Sleep(500);
                      cout<<"��";
                      Sleep(500);
                      cout<<"��";
                      Sleep(500);
                      cout<<"��ִ";
                      Sleep(500);
                      cout<<"��";
                      Sleep(500);
                      cout<<"��";
                      Sleep(500);
                      cout<<"���ò�";
                      Sleep(500);
                      cout<<"ɱ���㣬";
                      Sleep(500);
                      cout<<"�Բ���";
                      Sleep(500);
                      cout<<"��";
                      Sleep(1000);
                      cout<<"��";
                      Sleep(1000);
                      cout<<"�ˡ�"<<endl;
                      texiao();
                          int c2=3,c3=10,c4=5,c5=1;
                    while(m.blood>0&&m17.blood>0)
                {
                    cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<endl;
                    cout<<"�з���Ѫ����"<<m17.blood<<endl;
                    cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m17.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m17.blood-=a1;
                            m17.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m17.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m17.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m17.blood-=a3;
                            m17.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m17.blood-=a5;
                        m17.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m17.attack);
                }
                if(m.blood<=0)
                {
                    SlowDisplay("������\n");
                    return 0; 
                }
                else
                {
                    jieju2=false;
                    SlowDisplay("��������\n");
                    break;
                }
                }
                        else if(ttttt==2)
                        {

                        SlowDisplay("����������û�õģ����������ߣ�����\n");
                        } 
                       else if(ttttt==3&&mazui==true)
                        {
                            SlowDisplay("�ѵ������������\n");
                            mazui=false;
                        }
                        else if(ttttt==3&&mazui==false)
                        {
                            SlowDisplay("û�����ˡ�����\n");
                        }
                       else if(ttttt==4&&mazui==false)
                        {
                            SlowDisplay("��ѹ��������ˡ�����\n");
                            break; 
                        }
                        else
                        {
                            SlowDisplay("������󡣡���\n");
                        }
                    }
                    SlowDisplay("�㰴�涨ʱ��ϵ���Ĺ�أ��밵����������2�졣����\n");
                    SlowDisplay("��ʱ�����ֿ�������Ϥ�Ĵ�����ĺ�ɫ��Ӱ���ǵ����������������������ε���Pavris�ʹ���ӡ�����\n");
                    SlowDisplay("���ܽ���ȭͷ��ŭ����������ӿ����ʱ��е�������Я���Ļ���������⣬�㳹�ױ�����,���Ѫ���͹�������10���ٶ�85������\n");
                    m.blood*=10;
                    m.speed=85;
                    m.attack*=10; 
                    texiao();
                     SlowDisplay("������������˹�ȥ������AWA\n");
                     int c2=3,c3=10,c4=5,c5=1;
                    while(m.blood>0&&m6.blood>0)
                {
                    cout<<"����5�����У�1.�����ʹ���޴Σ�����Ϊ"<<a1<<"�� 2.���⣨��ʹ3�Σ��õз��ٶȼ�"<<a2<<"�� 3.������ʹ10�Σ�����Ϊ"<<a3<<"�� 4.���︴�գ�ʹ5�Σ�Ѫ+"<<a4<<"�� 5.������ѣ�1�Σ�����"<<a5<<"����Ѫ"<<a6<<"��"<<endl;
                    cout<<"�з���Ѫ����"<<m6.blood<<endl;
                    cout<<"���Ѫ����"<<m.blood<<"   �빥����ѡ����б�ţ�"<<endl;
                    int z;

                    cin>>z;
                    if(z==1)
                    {

                        if(rand()%101<m6.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m6.blood-=a1;
                            m6.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }

                     } 
                     else if(z==2&&c2>0)
                     {
                        m6.speed-=a2;
                        cout<<"�з�����ס�ˣ������ٶȣ�"<<endl;
                        c2--;
                     }
                     else if(z==3&&c3>0)
                     {
                        if(rand()%101<m17.speed)
                        cout<<"�з�����˹���"<<endl;
                        else
                        {
                            m6.blood-=a3;
                            m6.blood-=m.attack;
                            cout<<"�з��ܵ�����"<<endl; 
                        }
                        c3--;
                     }
                     else if(z==4&&c4>0)
                     {
                        m.blood+=a4;
                        cout<<"����Ѫ�ˣ�"<<endl; 
                        c4--;
                     }
                     else if(z==5&&c5>0)
                     {

                        m6.blood-=a5;
                        m6.blood-=m.attack;
                        cout<<"������ѣ������з��ܵ����ҹ���������"<<endl; 
                        m.blood+=a6;
                        c5--;
                     }
                     else
                     cout<<"������Ч������"<<endl;
                     cout<<"�з�������"<<endl;
                     if(rand()%101<m.speed)
                     {
                        cout<<"�����˹�����"<<endl;
                     }
                     else
                     m.blood-=(rand()%5+m6.attack);
                }
                if(m.blood<=0)
                {
                    m.blood =1;
                    SlowDisplay("�㻹��˿��Ѫ��1��Ѫ����Ҫ�����ˣ�����QAQ\n");
                    SlowDisplay("��ʱ��ֻ������ǰ�������ⷺ����ҧ��������˵���Ҳ�����������������������ZO�壡������������\n");
                    texiao();

                    SlowDisplay("������Ѫ˲��-999999999999999999999999999999999999999\n");
                    texiao();
                    Beep(400,100); 
                }
                SlowDisplay("����һ�����ĵ�����:�Ҿ�֪�����������͡�����\n");
                SlowDisplay("����һ�����ĵ�����:��Ҫ������Ҫ������\n");
                SlowDisplay("����������û˵�꣬������ɥ��Ȫ�ˡ�����\n");
                    SlowDisplay("�ھ��� ��\n");
                    system("pause");
                    jiazai();
                    if(flag2)
                    {

                    SlowDisplay("��ʮ�� ���ࣨ�����£�\n");
                SlowDisplay("���ǻص���ZO������ףʤ��������˺öཱ�ͣ���Ѫ�ֱ��100000�ˡ�\n");
                m.blood=100000;

                SlowDisplay("�������ڿ�party��ͻȻһ��������ʱ��һ����ɫͷ�����������Ӵ��˽���������\n");

                SlowDisplay("���󺰵����ҽ�shiys�����Ǹ�Ԥ�Լң��ʵ����ڶ������Ϊ��Ҫ��ɫ�����ҹ������������ǣ��������䵹��ʱ��û�н���������˵�������ĵ�������û����������������������ͻ����֣�����\n");

                    SlowDisplay("δ�����\n");
                    system("pause");
                    return 0; 
                     } 
                    else
                    {

                    SlowDisplay("��ʮ�� ���ࣨ�����£�\n");
                    Sleep(500);
                    system("cls"); 
                    SlowDisplay("��ʮ�� ���ࣨ�����£�\n");

                    SlowDisplay("������ɱ�˹��������Թ�ϲ����ڻ���֣�����QAQ\n");
                    texiao(); 

                    SlowDisplay("δ�����\n");
                    system("pause");
                    return 0; 
                    }

                    }
                    else
                    {
                        SlowDisplay("���Ƕ����������̡�������Ϸ����������QAQ\n");
                        return 0;
                    }
                }
       } 
                    } 
              } 
              } 
            }

                 else if(r==6&&coin>=1000&&m.speed>75)
                {
                    e1+=1;
                    m.attack+=2500; 
                    m.blood+=30000; 
                    coin-=1000;
                    cout<<"����ɹ�"<<endl;
                 } 
                else if(r==7&&coin>=5000)
                {
                    e1+=1;
                    m.blood+=200000;
                    m.attack+=15000; 
                    coin-=5000;
                    cout<<"����ɹ�"<<endl;
                } 
                 else
                {
                    e1+=1;
                    cout<<"����ʧ��"<<endl;
                 } 

            }
            ct++;
            if(ct>=10)
            {
                ct=0;
                if(bai)
                bai=false;
                else
                {
                    bai=true;
                    tian++;
                    if(tian==20)
                    {
                        SlowDisplay("��20�죬�����������顣\n");
                        SlowDisplay("�����ǰ�������֮ʱ����ׯһ����죬����ͷ��Ӷ���Ϊ�ҽ����������˫�ۣ���о���������ı���һ�����磬�����Ҳ���������ˡ�������ϲ����������֡�����\n");
                        printf("������Ϸ:�������䣨The Curse Of Darkness��\n");
    Sleep(1000);
    printf("��Ʒ��:drzo��teacherga��\n");
    Sleep(1000);
    printf("�汾:0.5.0\n");
    Sleep(1000);
    printf("�����ˣ���Ϸ����\n");
                        return 0; 
                    }
                    SlowDisplay("��");
                    cout<<tian;
                    SlowDisplay("�죬��������"); 
                    cout<<20-tian;
                    SlowDisplay("������飡���������˽�ң�����"); 
                    coin+=tian*100;
                    jiuguan=true; 
                }
            }
        }
    } 
    else
    {
        return 0;
    }
    return 0;
}
