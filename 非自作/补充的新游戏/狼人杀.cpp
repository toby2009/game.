#include<bits/stdc++.h>
using namespace std;
int life[7]={1,1,1,1,1,1};
int potions[5]={-1,1};
int vote[7]={0};
string name[7]={"Ԥ�Լ�","Ů��","ƽ��","ƽ��","����","����"}; 
int seer(int x,int y,int n,int p1,int p2,int l1,int l2)
{
    int rescued;
    int die;
    int die_potions;
    bool gameover=false;
    while(gameover==false)
    {
        cout<<endl<<"��һ�죺----------------------------"<<endl;
        for(int i=1;i<=4;i++)
        {
            if(i==1&&(life[l1]>=0 or life[l2]>=0))
            {
                cout<<"����:"<<endl;
                srand((unsigned)time(NULL)); 
                die=rand()%6;
                while(name[die]=="����"||life[die]==-1) die=rand()%6;
                life[die]--;
                cout<<"����ɱ��"<<name[die]<<endl;
            }
            if(i==2&&life[x]>=0)
            {
                cout<<"Ԥ�Լ�:"<<endl;
                cout<<"����Ԥ�Լң�������0~5�ı�ţ�������Ӧ���ˣ�������"<<x<<"�ţ���Ԥ��"<<endl;
                int res;
                cin>>res;
                if(name[res]=="ƽ��"||name[res]=="Ů��"||name[res]=="Ԥ�Լ�") cout<<"����"<<endl; 
                if(name[res]=="����") cout<<"����"<<endl; 
            }
            if(i==3&&life[n]>=0)
            {
                cout<<"Ů��:"<<endl;
                int dor;
                srand((unsigned)time(NULL)); 
                dor=rand()%3;
                if(dor==0)
                {
                    die_potions=rand()%6;
                    while(name[die_potions]=="Ů��"||life[die_potions]<=0) die_potions=rand()%6;
                    life[die_potions]--;
                    potions[dor]++;
                    cout<<"Ů��ɱ��"<<name[die_potions]<<endl;
                }
                if(dor==1)
                {
                    int help;
                    for(int i=0;i<6;i++) if(life[i]==0) life[i]++,help=i;
                    potions[dor]--;
                    cout<<"Ů�׾���"<<name[help]<<endl;
                }
                if(dor==2)
                {
                    cout<<"û��ҩ"<<endl; 
                }
            }
            if(i==4)
            {
                int sum_die=0;
                cout<<"����";
                for(int j=0;j<6;j++)
                {
                    if(life[j]==0) 
                    {
                        sum_die++;
                        life[j]--;
                        cout<<j<<"��"<<name[j]<<"����"; 
                    }
                } 
                if(sum_die==0) cout<<"��ƽ��ҹ";
                int fl=0,fp=0;
                for(int j=0;j<6;j++)
                {
                    if(life[j]==1)
                    {
                        if(name[j]=="����") fl++;
                        else fp++;
                    }
                }
                if(fl==0) 
                {
                    cout<<endl<<"ƽ��Ӯ��"<<endl; 
                    gameover=true;
                    continue;
                }
                if(fp==0)
                {
                    cout<<endl<<"����Ӯ��"<<endl;
                    gameover=true; 
                    continue;
                }
                cout<<endl<<"ͶƱ"<<endl; 
                int a[7]={0,0,0,0,0,0};
                for(int j=0;j<6;j++)
                {
                    if(j==x&&life[x]==1) 
                    {
                        cout<<"��Ͷ0~5������Ϊ�����˵�";
                        int ps;
                        cin>>ps;
                        a[ps]++; 
                    }
                    else if(life[j]==1)
                    {
                        srand((unsigned)time(NULL)); 
                        int cs;
                        cs=rand()%6;
                        while(life[cs]!=1||cs==j) cs=rand()%6;
                        a[cs]++;
                    }
                }
                cout<<"ͶƱ���:"<<endl;
                cout<<"0 1 2 3 4 5"<<endl;
                for(int j=0;j<6;j++) cout<<a[j]<<" ";
                cout<<endl;
                int max=-1,mp;
                for(int j=0;j<6;j++) if(a[j]>=max) max=a[j],mp=j;
                cout<<mp<<"��"<<name[mp]<<"����"<<endl<<endl;
                life[mp]=-1; 
                int good=0,bad=0;
                for(int j=0;j<6;j++)
                {
                    if(life[j]==1&&(name[j]=="ƽ��"||name[j]=="Ů��"||name[j]=="Ԥ�Լ�")) good++;
                    if(life[j]==1&&name[j]=="����") bad++;
                }
                if(bad==0) 
                {
                    cout<<"ƽ��Ӯ��"<<endl;
                    gameover=true;
                }
                if(good==0) 
                {
                    cout<<"����Ӯ��"<<endl;
                    gameover=true;
                }
            }
        }
        system("pause");
    }
    return 0;
}
int Lycan(int x,int y,int n,int p1,int p2,int l1,int l2)
{
    int rescued;
    int die;
    int die_potions;
    bool gameover=false;
    while(gameover==false)
    {
        cout<<endl<<"��һ�죺----------------------------"<<endl;
        for(int i=1;i<=4;i++)
        {
            if(i==1&&life[x]>=0)
            {
                cout<<"����:"<<endl;
                cout<<"�������ˣ�������0~5�ı�ţ�������Ӧ���ˣ�������"<<x<<"��"<<l1+l2-x<<"�ţ���ɱ��"<<endl; 
                cin>>die;
                life[die]--;
                cout<<"����ɱ��"<<name[die]<<endl;
            }
            if(i==1&&life[x]==-1&&life[l1+l2-x]>=0)
            {
                cout<<"����:"<<endl;
                srand((unsigned)time(NULL)); 
                die=rand()%6;
                while(name[die]=="����"||life[die]==-1) die=rand()%6;
                life[die]--;
                cout<<"����ɱ��"<<name[die]<<endl;
            }
            if(i==2&&life[y]>=0)
            {
                cout<<"Ԥ�Լ�:"<<endl;
                cout<<"Ԥ�����"<<endl; 
            }
            if(i==3&&life[n]>=0)
            {
                cout<<"Ů��:"<<endl;
                int dor;
                srand((unsigned)time(NULL)); 
                dor=rand()%3;
                if(dor==0)
                {
                    die_potions=rand()%6;
                    while(name[die_potions]=="Ů��"||life[die_potions]<=0) die_potions=rand()%6;
                    life[die_potions]--;
                    potions[dor]++;
                    cout<<"Ů��ɱ��"<<name[die_potions]<<endl;
                }
                if(dor==1)
                {
                    int help;
                    for(int i=0;i<6;i++) if(life[i]==0) life[i]++,help=i;
                    potions[dor]--;
                    cout<<"Ů�׾���"<<name[help]<<endl;
                }
                if(dor==2)
                {
                    cout<<"û��ҩ"<<endl; 
                }
            }
            if(i==4)
            {
                int sum_die=0;
                cout<<"����";
                for(int j=0;j<6;j++)
                {
                    if(life[j]==0) 
                    {
                        sum_die++;
                        life[j]--;
                        cout<<j<<"��"<<name[j]<<"����"; 
                    }
                } 
                if(sum_die==0) cout<<"��ƽ��ҹ";
                int fl=0,fp=0;
                for(int j=0;j<6;j++)
                {
                    if(life[j]==1)
                    {
                        if(name[j]=="����") fl++;
                        else fp++;
                    }
                }
                if(fl==0) 
                {
                    cout<<endl<<"ƽ��Ӯ��"<<endl; 
                    gameover=true;
                    continue;
                }
                if(fp==0)
                {
                    cout<<endl<<"����Ӯ��"<<endl;
                    gameover=true; 
                    continue;
                }
                cout<<endl<<"ͶƱ"<<endl; 
                int a[7]={0,0,0,0,0,0};
                for(int j=0;j<6;j++)
                {
                    if(j==x&&life[x]==1) 
                    {
                        cout<<"��Ͷ0~5������Ϊ�����˵�";
                        int ps;
                        cin>>ps;
                        a[ps]++; 
                    }
                    else if(life[j]==1)
                    {
                        srand((unsigned)time(NULL)); 
                        int cs;
                        cs=rand()%6;
                        while(life[cs]!=1||cs==j) cs=rand()%6;
                        a[cs]++;
                    }
                }
                cout<<"ͶƱ���:"<<endl;
                cout<<"0 1 2 3 4 5"<<endl;
                for(int j=0;j<6;j++) cout<<a[j]<<" ";
                cout<<endl;
                int max=-1,mp;
                for(int j=0;j<6;j++) if(a[j]>=max) max=a[j],mp=j;
                cout<<mp<<"��"<<name[mp]<<"����"<<endl<<endl;
                life[mp]=-1; 
                int good=0,bad=0;
                for(int j=0;j<6;j++)
                {
                    if(life[j]==1&&(name[j]=="ƽ��"||name[j]=="Ů��"||name[j]=="Ԥ�Լ�")) good++;
                    if(life[j]==1&&name[j]=="����") bad++;
                }
                if(bad==0) 
                {
                    cout<<"ƽ��Ӯ��"<<endl;
                    gameover=true;
                }
                if(good==0) 
                {
                    cout<<"����Ӯ��"<<endl;
                    gameover=true;
                }
            }
        }
        system("pause");
    }
    return 0;
}
int witch(int x,int y,int n,int p1,int p2,int l1,int l2)
{
    int rescued;
    int die;
    int die_potions;
    bool gameover=false;
    while(gameover==false)
    {
        cout<<endl<<"��һ�죺----------------------------"<<endl;
        for(int i=1;i<=4;i++)
        {
            if(i==1&&(life[l1]>=0 or life[l2]>=0))
            {
                cout<<"����:"<<endl;
                srand((unsigned)time(NULL)); 
                die=rand()%6;
                while(name[die]=="����"||life[die]==-1) die=rand()%6;
                life[die]--;
                cout<<"����ɱ��"<<name[die]<<endl;
            }
            if(i==2&&life[y]>=0)
            {
                cout<<"Ԥ�Լ�:"<<endl;
                cout<<"Ԥ�����"<<endl; 
            }
            if(i==3&&life[n]>=0)
            {
                cout<<"Ů��:"<<endl;
                cout<<"����Ů�ף�������d��r��n��d����Ҫɱ��r����Ҫ�ȣ�n������ҩ"<<endl;
                char dor;
                cin>>dor;
                if(dor=='d')
                {
                    cout<<"������0~5����Ҫɱ���ˣ�����"<<n<<"�ţ�"<<endl;
                    cin>>die_potions;
                    life[die_potions]--;
                    potions[0]++;
                    cout<<"Ů��ɱ��"<<name[die_potions]<<endl;
                }
                if(dor=='r')
                {
                    int help;
                    for(int i=0;i<6;i++) if(life[i]==0) life[i]++,help=i;
                    potions[1]--;
                    cout<<"Ů�׾���"<<name[help]<<endl;
                }
                if(dor=='n')
                {
                    cout<<"û��ҩ"<<endl; 
                }
            }
            if(i==4)
            {
                int sum_die=0;
                cout<<"����";
                for(int j=0;j<6;j++)
                {
                    if(life[j]==0) 
                    {
                        sum_die++;
                        life[j]--;
                        cout<<j<<"��"<<name[j]<<"����"; 
                    }
                } 
                if(sum_die==0) cout<<"��ƽ��ҹ";
                int fl=0,fp=0;
                for(int j=0;j<6;j++)
                {
                    if(life[j]==1)
                    {
                        if(name[j]=="����") fl++;
                        else fp++;
                    }
                }
                if(fl==0) 
                {
                    cout<<endl<<"ƽ��Ӯ��"<<endl; 
                    gameover=true;
                    continue;
                }
                if(fp==0)
                {
                    cout<<endl<<"����Ӯ��"<<endl;
                    gameover=true; 
                    continue;
                }
                cout<<endl<<"ͶƱ"<<endl; 
                int a[7]={0,0,0,0,0,0};
                for(int j=0;j<6;j++)
                {
                    if(j==x&&life[x]==1) 
                    {
                        cout<<"��Ͷ0~5������Ϊ�����˵�";
                        int ps;
                        cin>>ps;
                        a[ps]++; 
                    }
                    else if(life[j]==1)
                    {
                        srand((unsigned)time(NULL)); 
                        int cs;
                        cs=rand()%6;
                        while(life[cs]!=1||cs==j) cs=rand()%6;
                        a[cs]++;
                    }
                }
                cout<<"ͶƱ���:"<<endl;
                cout<<"0 1 2 3 4 5"<<endl;
                for(int j=0;j<6;j++) cout<<a[j]<<" ";
                cout<<endl;
                int max=-1,mp;
                for(int j=0;j<6;j++) if(a[j]>=max) max=a[j],mp=j;
                cout<<mp<<"��"<<name[mp]<<"����"<<endl<<endl;
                life[mp]=-1; 
                int good=0,bad=0;
                for(int j=0;j<6;j++)
                {
                    if(life[j]==1&&(name[j]=="ƽ��"||name[j]=="Ů��"||name[j]=="Ԥ�Լ�")) good++;
                    if(life[j]==1&&name[j]=="����") bad++;
                }
                if(bad==0) 
                {
                    cout<<"ƽ��Ӯ��"<<endl;
                    gameover=true;
                }
                if(good==0) 
                {
                    cout<<"����Ӯ��"<<endl;
                    gameover=true;
                }
            }
        }
        system("pause");
    }
    return 0;
}
int commoner(int x,int y,int n,int p1,int p2,int l1,int l2)
{
    int rescued;
    int die;
    int die_potions;
    bool gameover=false;
    while(gameover==false)
    {
        cout<<endl<<"��һ�죺----------------------------"<<endl;
        for(int i=1;i<=4;i++)
        {
            if(i==1&&(life[l1]>=0 or life[l2]>=0))
            {
                cout<<"����:"<<endl;
                srand((unsigned)time(NULL)); 
                die=rand()%6;
                while(name[die]=="����"||life[die]==-1) die=rand()%6;
                life[die]--;
                cout<<"����ɱ��"<<name[die]<<endl;
            }
            if(i==2&&life[y]>=0)
            {
                cout<<"Ԥ�Լ�:"<<endl;
                cout<<"Ԥ�����"<<endl; 
            }
            if(i==3&&life[n]>=0)
            {
                cout<<"Ů��:"<<endl;
                int dor;
                srand((unsigned)time(NULL)); 
                dor=rand()%3;
                if(dor==0)
                {
                    die_potions=rand()%6;
                    while(name[die_potions]=="Ů��"||life[die_potions]<=0) die_potions=rand()%6;
                    life[die_potions]--;
                    potions[dor]++;
                    cout<<"Ů��ɱ��"<<name[die_potions]<<endl;
                }
                if(dor==1)
                {
                    int help;
                    for(int i=0;i<6;i++) if(life[i]==0) life[i]++,help=i;
                    potions[dor]--;
                    cout<<"Ů�׾���"<<name[help]<<endl;
                }
                if(dor==2)
                {
                    cout<<"û��ҩ"<<endl; 
                }
            }
            if(i==4)
            {
                int sum_die=0;
                cout<<"����";
                for(int j=0;j<6;j++)
                {
                    if(life[j]==0) 
                    {
                        sum_die++;
                        life[j]--;
                        cout<<j<<"��"<<name[j]<<"����"; 
                    }
                } 
                if(sum_die==0) cout<<"��ƽ��ҹ";
                int fl=0,fp=0;
                for(int j=0;j<6;j++)
                {
                    if(life[j]==1)
                    {
                        if(name[j]=="����") fl++;
                        else fp++;
                    }
                }
                if(fl==0) 
                {
                    cout<<endl<<"ƽ��Ӯ��"<<endl; 
                    gameover=true;
                    continue;
                }
                if(fp==0)
                {
                    cout<<endl<<"����Ӯ��"<<endl;
                    gameover=true; 
                    continue;
                }
                cout<<endl<<"ͶƱ"<<endl; 
                int a[7]={0,0,0,0,0,0};
                for(int j=0;j<6;j++)
                {
                    if(j==x&&life[x]==1) 
                    {
                        cout<<"��Ͷ0~5������Ϊ�����˵�";
                        int ps;
                        cin>>ps;
                        a[ps]++; 
                    }
                    else if(life[j]==1)
                    {
                        srand((unsigned)time(NULL)); 
                        int cs;
                        cs=rand()%6;
                        while(life[cs]!=1||cs==j) cs=rand()%6;
                        a[cs]++;
                    }
                }
                cout<<"ͶƱ���:"<<endl;
                cout<<"0 1 2 3 4 5"<<endl;
                for(int j=0;j<6;j++) cout<<a[j]<<" ";
                cout<<endl;
                int max=-1,mp;
                for(int j=0;j<6;j++) if(a[j]>=max) max=a[j],mp=j;
                cout<<mp<<"��"<<name[mp]<<"����"<<endl<<endl;
                life[mp]=-1; 
                int good=0,bad=0;
                for(int j=0;j<6;j++)
                {
                    if(life[j]==1&&(name[j]=="ƽ��"||name[j]=="Ů��"||name[j]=="Ԥ�Լ�")) good++;
                    if(life[j]==1&&name[j]=="����") bad++;
                }
                if(bad==0) 
                {
                    cout<<"ƽ��Ӯ��"<<endl;
                    gameover=true;
                }
                if(good==0) 
                {
                    cout<<"����Ӯ��"<<endl;
                    gameover=true;
                }
            }
        }
        system("pause");
    }
    return 0;
}
int main()
{
    begin:
    cout<<"����ɱ"<<endl;
    cout<<"1��Ԥ�Լ� 1��Ů�� 2��ƽ�� 2������"<<endl;
    srand((unsigned)time(NULL)); 
    for(int i=1;i<=1000;i++)
    {
        int x=rand()%6; 
        int y=rand()%6;
        swap(name[x],name[y]);
    }
    int player=rand()%6;
    cout<<"����"<<name[player]<<endl<<"���ı����"<<player<<endl<<endl;
    int l1,l2,l=1;
    int y;
    int n;
    int p1,p2,p=1;
    for(int i=0;i<6;i++)
    {
        if(name[i]=="����"&&l==1) 
        {
            l1=i;
            l++;
            continue;
        }
        if(name[i]=="����"&&l==2) l2=i,l++;
        if(name[i]=="Ԥ�Լ�") y=i;
        if(name[i]=="Ů��") n=i;
        if(name[i]=="ƽ��"&&p==1) 
        {
            p1=i;
            p++;
            continue;
        }
        if(name[i]=="ƽ��"&&p==2) p2=i,p++;
    }
    if(player==y) seer(player,y,n,p1,p2,l1,l2);
    if(player==l1 or player==l2) Lycan(player,y,n,p1,p2,l1,l2);
    if(player==n) witch(player,y,n,p1,p2,l1,l2);
    if(player==p1 or player==p2) commoner(player,y,n,p1,p2,l1,l2);
    else return 0;
} 
