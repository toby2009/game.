#include<bits/stdc++.h>
#include<windows.h>
//making ������ waiting �ȴ��� end ��� 
using namespace std;
struct card//��Ƭ(end) 
{
    int color;//1=red 2=blue 3=green 4=yellow 5=black
    int number;//0-9=0-9 10=�� 11=ת 12=+2 13=��ɫ 14=+4 
};
struct player//van��(end)
{
    card hand[103];
    int score=0;
    int have=0;
};

player a[13];
card now;
bool skip=false,turn=true,plus2=true;
int Plus=0;

card randcard()//�����(end)
{
    card s;
    s.number=rand()%15;
    if(s.number>=13) s.color=5;
    else s.color=rand()%4+1;
    return s;
}
void getcard(int n)//���һ�ſ�(end)
{
    a[n].have++;
    a[n].hand[a[n].have]=randcard();
    return ;
}
void setcolor()//��ɫ(end) 
{
    cout<<"��ϣ�����ʲô��ɫ?\n1 ��\n2 ��\n3 ��\n4 ��\n";
    int change;
    cin>>change;
    now.color=change;
    now.number=-1;
    return ;
}
void usecard(int i,int n)//ʹ��һ�ſ�(end)
{
    now=a[n].hand[i];
    if(a[n].hand[i].number==10) skip=true;
    if(a[n].hand[i].number==11) turn=!turn;
    if(a[n].hand[i].number==12) Plus+=2;
    if(a[n].hand[i].number==13) setcolor();
    if(a[n].hand[i].number==14) 
    {
        Plus+=4;
        plus2=false;
        setcolor();
    }
    card temp;
    temp=a[n].hand[a[n].have];
    a[n].hand[a[n].have]=a[n].hand[i];
    a[n].hand[i]=temp;
    a[n].have--;
    return ;
}
void init()//��ʼ��(end) 
{
    for(int i=1; i<=10; i++) for(int j=1; j<=7; j++) getcard(i);
    return ;
}
int end(int n)//��Ϸ�����ж�(end)
{
    for(int i=1; i<=n; i++) if(a[i].have==0) return i;
    return 0;
}
void show(int n,int i)//����չʾ(end)
{
    switch (a[n].hand[i].color)
    {
        case 1:
            cout<<"��";
            break;
        case 2:
            cout<<"��";
            break;
        case 3:
            cout<<"��";
            break;
        case 4:
            cout<<"��";
            break;
    }
    if(a[n].hand[i].number<=9)cout<<a[n].hand[i].number<<' ';
    if(a[n].hand[i].number==10)cout<<"�� ";
    if(a[n].hand[i].number==11)cout<<"ת ";
    if(a[n].hand[i].number==12)cout<<"+2 ";
    if(a[n].hand[i].number==13)cout<<"��ɫ ";
    if(a[n].hand[i].number==14)cout<<"+4 ";
    return ;
}
void shownow()
{
    switch (now.color)
    {
        case 1:
            cout<<"��";
            break;
        case 2:
            cout<<"��";
            break;
        case 3:
            cout<<"��";
            break;
        case 4:
            cout<<"��";
            break;
    }
    if(now.number<=9)cout<<now.number<<' ';
    if(now.number==10)cout<<"�� ";
    if(now.number==11)cout<<"ת ";
    if(now.number==12)cout<<"+2 ";
    if(now.number==13)cout<<"��ɫ ";
    if(now.number==14)cout<<"+4 ";
    return ;
}
void round(int n)//�غϽ���(end)
{
    system("cls");
    cout<<n<<"����ҵĻغ�";
    system("pause"); 
    system("cls");
    if(skip) 
    {
        cout<<n<<"�������������!";
        skip=false;
        return ;
    }
    if(Plus!=0 && plus2)
    {
        cout<<"�ϼҼӸ�����"<<Plus<<"����,��ֻ�ܳ�+2 or +4!\n����������\n";
        for(int i=1; i<=a[n].have; i++) show(n,i);
        cout<<"\n��Ҫ��������?(�������ҵ����)���0Ϊ������,����\n";
        int use;
        cin>>use;
        if(use>a[n].have || (a[n].hand[use].number!=12 && a[n].hand[use].number!=14 && use!=0)) 
        {
            cout<<"��Ч������!ϵͳĬ��Ϊ0";
            use=0;
        }
        if(use!=0) usecard(use,n);
        else 
        {
            for(int i=1; i<=Plus; i++) getcard(n);
            plus2=true;
        }
        return ;
    }
    if(Plus!=0 && !plus2)
    {
        cout<<"�ϼҼӸ�����"<<Plus<<"����,��ֻ�ܳ�+4!\n����������\n";
        for(int i=1; i<=a[n].have; i++) show(n,i);
        cout<<"\n��Ҫ��������?(�������ҵ����)���0Ϊ������,����\n";
        int use;
        cin>>use;
        if(use>a[n].have || (a[n].hand[use].number!=14 && use!=0)) 
        {
            cout<<"��Ч������!ϵͳĬ��Ϊ0";
            use=0;
        }
        if(use!=0) usecard(use,n);
        else 
        {
            for(int i=1; i<=Plus; i++) getcard(n);
            plus2=true;
        }
        return ;
    }
    cout<<n<<"����ҵĻغ�\n����������\n";
    for(int i=1; i<=a[n].have; i++) show(n,i);
    cout<<"\n��һ����Ϊ";
    shownow();
    cout<<"\n��Ҫ��������?(�������ҵ����)���0Ϊ������,����\n";
    int use;
    cin>>use;
    cout<<"\n";
    if(use>a[n].have || (a[n].hand[use].color!=now.color && a[n].hand[use].color!=5 && use!=0)) 
    {
        cout<<"��Ч������!ϵͳĬ��Ϊ0\n";
        use=0;
    }
    if(use!=0) usecard(use,n);
    else 
    {
        getcard(n);
        cout<<"������";
        show(n,a[n].have);
        cout<<"\n";
        if(a[n].hand[a[n].have].color==now.color || a[n].hand[a[n].have].number==now.number)
        {
            cout<<"�������ƿ��Գ�! ��1����\n";
            int ans;
            cin>>ans;
            if(ans==1) cout<<"�����������ơ�\n";
        }
        usecard(use,n);
    }
    return ;
}
int play(int n)//��Ϸ����(end)
{
    now=randcard();
    while(now.number>=10)now=randcard();
    int i=0;
    while(true)
    {
        system("pause");
        round(i+1);
        if(turn) i=(i+1)%n;
        else if(i==0) i=n-1;
        else i--;
        if(end(n)!=0) break; 
    }
    return end(n);
}
int main()//������(end)
{
    int n;
    srand(time(0));
    cout<<"UNO TIME by dead_X\nver1.3.0\n���԰�\n����WarmSnow�߸���������,�������Ѿ���ǰ���,�����뿴���¹���\n";
    system("pause");
    cout<<"��������Ϸ����:\n";
    cin>>n;
    init();
    system("cls");
    for(int i=1; i<=100; i++)
    {
        cout<<"Loading......";
        cout<<i<<"%";
        Sleep(5);
        system("cls");
    }
    int ans;
    cout<<"�������!\n�Ƿ�鿴��Ϸ�������?���밴1,���밴0\n";
    cin>>ans;
    if(ans==1) cout<<"�˹������ڿ�����,Ԥ�ƽ���2.0.0�������\n";
    cout<<"��Ϸ��ʼ!";
    Sleep(100);
    int res=play(n);
    cout<<n<<"�����ȡ����ʤ��!";
    return 0;
}
