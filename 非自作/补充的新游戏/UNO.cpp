#include<bits/stdc++.h>
#include<windows.h>
//making 制作中 waiting 等待中 end 完成 
using namespace std;
struct card//卡片(end) 
{
    int color;//1=red 2=blue 3=green 4=yellow 5=black
    int number;//0-9=0-9 10=禁 11=转 12=+2 13=调色 14=+4 
};
struct player//van家(end)
{
    card hand[103];
    int score=0;
    int have=0;
};

player a[13];
card now;
bool skip=false,turn=true,plus2=true;
int Plus=0;

card randcard()//随机卡(end)
{
    card s;
    s.number=rand()%15;
    if(s.number>=13) s.color=5;
    else s.color=rand()%4+1;
    return s;
}
void getcard(int n)//获得一张卡(end)
{
    a[n].have++;
    a[n].hand[a[n].have]=randcard();
    return ;
}
void setcolor()//调色(end) 
{
    cout<<"您希望变成什么颜色?\n1 红\n2 蓝\n3 绿\n4 黄\n";
    int change;
    cin>>change;
    now.color=change;
    now.number=-1;
    return ;
}
void usecard(int i,int n)//使用一张卡(end)
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
void init()//初始化(end) 
{
    for(int i=1; i<=10; i++) for(int j=1; j<=7; j++) getcard(i);
    return ;
}
int end(int n)//游戏结束判定(end)
{
    for(int i=1; i<=n; i++) if(a[i].have==0) return i;
    return 0;
}
void show(int n,int i)//卡牌展示(end)
{
    switch (a[n].hand[i].color)
    {
        case 1:
            cout<<"红";
            break;
        case 2:
            cout<<"蓝";
            break;
        case 3:
            cout<<"绿";
            break;
        case 4:
            cout<<"黄";
            break;
    }
    if(a[n].hand[i].number<=9)cout<<a[n].hand[i].number<<' ';
    if(a[n].hand[i].number==10)cout<<"禁 ";
    if(a[n].hand[i].number==11)cout<<"转 ";
    if(a[n].hand[i].number==12)cout<<"+2 ";
    if(a[n].hand[i].number==13)cout<<"调色 ";
    if(a[n].hand[i].number==14)cout<<"+4 ";
    return ;
}
void shownow()
{
    switch (now.color)
    {
        case 1:
            cout<<"红";
            break;
        case 2:
            cout<<"蓝";
            break;
        case 3:
            cout<<"绿";
            break;
        case 4:
            cout<<"黄";
            break;
    }
    if(now.number<=9)cout<<now.number<<' ';
    if(now.number==10)cout<<"禁 ";
    if(now.number==11)cout<<"转 ";
    if(now.number==12)cout<<"+2 ";
    if(now.number==13)cout<<"调色 ";
    if(now.number==14)cout<<"+4 ";
    return ;
}
void round(int n)//回合进行(end)
{
    system("cls");
    cout<<n<<"号玩家的回合";
    system("pause"); 
    system("cls");
    if(skip) 
    {
        cout<<n<<"号玩家您被禁了!";
        skip=false;
        return ;
    }
    if(Plus!=0 && plus2)
    {
        cout<<"上家加给你了"<<Plus<<"张牌,您只能出+2 or +4!\n您的手牌有\n";
        for(int i=1; i<=a[n].have; i++) show(n,i);
        cout<<"\n您要出哪张牌?(从左往右的序号)输出0为不出牌,摸牌\n";
        int use;
        cin>>use;
        if(use>a[n].have || (a[n].hand[use].number!=12 && a[n].hand[use].number!=14 && use!=0)) 
        {
            cout<<"无效的手牌!系统默认为0";
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
        cout<<"上家加给你了"<<Plus<<"张牌,您只能出+4!\n您的手牌有\n";
        for(int i=1; i<=a[n].have; i++) show(n,i);
        cout<<"\n您要出哪张牌?(从左往右的序号)输出0为不出牌,摸牌\n";
        int use;
        cin>>use;
        if(use>a[n].have || (a[n].hand[use].number!=14 && use!=0)) 
        {
            cout<<"无效的手牌!系统默认为0";
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
    cout<<n<<"号玩家的回合\n您的手牌有\n";
    for(int i=1; i<=a[n].have; i++) show(n,i);
    cout<<"\n上一张牌为";
    shownow();
    cout<<"\n您要出哪张牌?(从左往右的序号)输出0为不出牌,摸牌\n";
    int use;
    cin>>use;
    cout<<"\n";
    if(use>a[n].have || (a[n].hand[use].color!=now.color && a[n].hand[use].color!=5 && use!=0)) 
    {
        cout<<"无效的手牌!系统默认为0\n";
        use=0;
    }
    if(use!=0) usecard(use,n);
    else 
    {
        getcard(n);
        cout<<"您摸了";
        show(n,a[n].have);
        cout<<"\n";
        if(a[n].hand[a[n].have].color==now.color || a[n].hand[a[n].have].number==now.number)
        {
            cout<<"您摸的牌可以出! 按1出牌\n";
            int ans;
            cin>>ans;
            if(ans==1) cout<<"您出了这张牌。\n";
        }
        usecard(use,n);
    }
    return ;
}
int play(int n)//游戏进程(end)
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
int main()//主程序(end)
{
    int n;
    srand(time(0));
    cout<<"UNO TIME by dead_X\nver1.3.0\n测试版\n由于WarmSnow催更过于勤劳,简化内容已经提前完成,具体请看更新公告\n";
    system("pause");
    cout<<"请输入游戏人数:\n";
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
    cout<<"加载完成!\n是否查看游戏规则介绍?是请按1,否请按0\n";
    cin>>ans;
    if(ans==1) cout<<"此功能正在开发中,预计将在2.0.0开发完毕\n";
    cout<<"游戏开始!";
    Sleep(100);
    int res=play(n);
    cout<<n<<"号玩家取得了胜利!";
    return 0;
}
