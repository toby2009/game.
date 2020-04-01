#include<windows.h>
#include<iostream>
#include<conio.h>
#include<cstring>
#include<cstdio>
#include<ctime>
using namespace std;
string name= "Slime"; 
char c,p;
string jn1="扔石头",jn2="  无  ", jn3="  无  ";
int HP1=100,HP2=10,hp1=100,hp2=10,exp=0,jnn1,jnn2,jnn3,matk=1;
char atk1[]=" 5  ",atk2[]=" 0  ",atk3[]=" 0  "; 
char map[100][100]={
    "[1--1] [lock] [lock]\n",
    "[lock] [lock] [lock]\n",
    "[lock] [lock] [lock]\n",
    "[lock] [lock] [lock]\n",
    "[lock] [lock] [lock]\n"
};
string jnkk[100]={
    "扔石头","  无  ","  无  ","  无  ","  无  ",
    "  无  ","  无  ","  无  ","  无  ","  无  ",
    "  无  ","  无  ","  无  ","  无  ","  无  "
};
int jnkkk[100];

void jnk()
{
    system("cls");
    cout<<"\n\n\n\n\n\n                  技能：\n                      ";
    for(int k=1;k<16;k++)
    {
        cout<<k<<'.'<<jnkk[k-1]<<' ';
        if(k%5==0)
            cout<<"\n                      ";
    }
    cout<<"chose what you want(three number):";
    cin>>jnn1>>jnn2>>jnn3;
    jn1=jnkk[jnn1-1];
    atk1[1]=(char)(jnkkk[jnn1-1]);
    jn2=jnkk[jnn2-1];
    atk2[1]=(char)(jnkkk[jnn2-1]);
    jn3=jnkk[jnn3-1];
    atk3[1]=(char)(jnkkk[jnn3-1]);
    system("cls");
}

void battle(int x,int y,string s)
{
    cout<<"You";
    for(int i=0;i<y-4;i++)
        cout<<"  ";
    cout<<s<<endl;
    cout<<"HP:"<<HP1;
    for(int i=0;i<y-7;i++)
        cout<<"  ";
    cout<<"HP:"<<HP2<<endl;
    cout<<HP1-hp1;
    for(int i=0;i<y-4;i++)
        cout<<"  ";
    cout<<HP2-hp2<<endl;
    hp1=HP1;
    hp2=HP2;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(i>x/2-1&&i<x/2+1&&j<y/4+1&&j>y/4-1)
                cout<<"[]"; 
            else
            {
                if(i>x/2-1&&i<x/2+1&&j<y/4*3+1&&j>y/4*3-1)
                    cout<<"()"; 
                else
                    cout<<"--";
            }
        }
        cout<<endl;
    }
    cout<<"技能:"<<endl;
    cout<<"     | ====== |"<<"   "<<"| ====== |"<<"   "<<"| ====== |";
    cout<<endl;
    cout<<"     |Q:"<<jn1<<"|"<<"   |E:"<<jn2<<"|"<<"   |T:"<<jn3<<"|";
    cout<<endl;
    cout<<"     |atk:"<<atk1<<"|"<<"   |atk:"<<atk2<<"|"<<"   |atk:"<<atk3<<"|";
    cout<<endl;
    cout<<"     | ====== |"<<"   "<<"| ====== |"<<"   "<<"| ====== |";
    cout<<endl;
    Sleep(600);
    system("cls");
    cout<<"You";
    for(int i=0;i<y-4;i++)
        cout<<"  ";
    cout<<s<<endl;
    cout<<"HP:"<<HP1;
    for(int i=0;i<y-7;i++)
        cout<<"  ";
    cout<<"HP:"<<HP2<<endl;
    cout<<endl;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(i>x/2-1&&i<x/2+1&&j<y/4+1&&j>y/4-1)
                cout<<"[]"; 
            else
            {
                if(i>x/2-1&&i<x/2+1&&j<y/4*3+1&&j>y/4*3-1)
                    cout<<"()"; 
                else
                    cout<<"--";
            }
        }
        cout<<endl;
    }
    cout<<"技能:"<<endl;
    cout<<"     | ====== |"<<"   "<<"| ====== |"<<"   "<<"| ====== |";
    cout<<endl;
    cout<<"     |Q:"<<jn1<<"|"<<"   |E:"<<jn2<<"|"<<"   |T:"<<jn3<<"|";
    cout<<endl;
    cout<<"     |atk:"<<atk1<<"|"<<"   |atk:"<<atk2<<"|"<<"   |atk:"<<atk3<<"|";
    cout<<endl;
    cout<<"     | ====== |"<<"   "<<"| ====== |"<<"   "<<"| ====== |";
    cout<<endl;

    return;
}

void begin()
{
    while(HP1>0&&HP2>0)
    {
        battle(8,20,name);
        cout<<"按q:";
        c=getch();
        if(c=='q'||c=='Q')
        {
            HP2-=5;
            HP1-=1;
        }
        else
            HP1-=1;
        system("cls");
    }

    return;
}

void dead()
{
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n                      YOU DEAD!";
    Sleep(3000);
    system("cls");
}

void win()
{
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n                      YOU KILL "<<name<<'!';
    Sleep(3000);
    system("cls");

    return; 
}

void place(char c,char p)
{
    Sleep(1000);
    if(c==1&&p==1)
    {

        name="Zombie"; 
        matk=5;
        HP1=100;
        HP2=50;
        jnk();
        while(HP1>0)
        {
            battle(8,20,name);
            c=getch();
            if(c=='q'||c=='Q')
            {
                HP2-=atk1[1];
                HP1-=matk;
            }
            else if(c=='e'||c=='E')
            {
                HP2-=atk2[1];
                HP1-=matk;
            }
            else if(c=='t'||c=='T')
            {
                HP2-=atk3[1];
                HP1-=matk;
            }
            else
                HP1-=matk;
            if(HP2<=0)
            {
                win();
                for(int i=exp+30;exp<i;exp++) 
                {
                    cout<<"\n\n\n\n\n\n\n\n\n                      exp:"<<exp<<"+1";
                    Sleep(100);
                    system("cls"); 
                }
                map[0][8]='1',map[0][9]='-',map[0][10]='-',map[0][11]='2';
                return;
            }
        system("cls");
        }
    }

    return;
}

void chosemap()
{
    system("cls");
    cout<<"\n\n\n\n\n\n                      ";
    cout<<map[0];
    cout<<"                      ";
    cout<<map[1];
    cout<<"                      ";
    cout<<map[2];
    cout<<"                      ";
    cout<<map[3];
    cout<<"                      ";
    cout<<map[4];
    cout<<"                      ";
    cout<<"你要去哪：";
    c=getch();
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n                      ";
    cout<<map[c-49];
    cout<<"                      ";
    cout<<"你要去哪：";
    p=getch();
    if(map[c-49][p*7-3]==p)
        place(c,p);
    else
    {
        cout<<"\n\n\n\n\n\n\n\n\n                      lock";
        Sleep(4000);
        chosemap();
    }

    system("cls");

}

int main()
{
    memset(jnkkk,0,sizeof(jnkkk));
    jnkkk[0]=5;
    cout<<"\n\n\n\n\n\n\n\n\n                      为了更好的游戏体验，你该打完教程。";
    Sleep(2500);
    system("cls");
    while(1)
    {
        begin();
        if(HP2<=0)
            break;
        system("cls");
        dead();
        cout<<"\n\n\n\n\n\n\n\n\n                      居然教程还有人过不去。。。渣渣"; 
        HP1=100;
        HP2=10;
        Sleep(2000);
        system("cls"); 
    }
    win();
    for(int i=exp+20;exp<i;exp++) 
    {
        cout<<"\n\n\n\n\n\n\n\n\n                      exp:"<<exp<<"+1";
        Sleep(100);
        system("cls"); 
    } 
    cout<<"\n\n\n\n\n\n\n\n\n                      现在你对基本操作有所了解了吧"; 
    Sleep(5000);
    system("cls");
    cout<<"\n\n\n\n\n\n                      ";
    cout<<map[0];
    cout<<"                      ";
    cout<<map[1];
    cout<<"                      ";
    cout<<map[2];
    cout<<"                      ";
    cout<<map[3];
    cout<<"                      ";
    cout<<map[4];
    cout<<"                      ";
    cout<<"输入1：";
    c=getch();
    system("cls");
    if(c!='1')
    {
        cout<<"                      ";
        cout<<"强制输入1";
        Sleep(2000);
    } 
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n                      ";
    cout<<map[0];
    cout<<"                      ";
    cout<<"输入1：";
    c=getch();
    if(c!='1')
    {
        cout<<"                      ";
        cout<<"强制输入1";
        Sleep(2000);
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n                      loading";
    Sleep(5000);
    system("cls");
    place(1,1);
    chosemap();

    return 0;
}
