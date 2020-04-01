#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

bool mainexit=false;
int maincommand;
int mymoney=500;
int myprivate=20;
int myfamer=50;
int mygrain=50;
int soldier[100];
int mainnumber;
int romansprivate=500;
int greeceprivate=400;
int egyptprivate=500;
//bianliang 

void wars();
void amry();
void food();
void money();
void mainout();
void food_change();
void money_change();
void private_change();
//hanshu

int main() {
    while(1) {
        private_change();
        food_change();
        money_change();
        mainout();
        cin>>maincommand;
        switch(maincommand) {
            case 1:
                mainnumber++;
                amry();
                break;
            case 2:
                mainnumber++;
                food();
                break;
            case 3:
                mainnumber++;
                money();
            case 4:
                mainnumber++;
                wars();
                break;
            case 5:
                mainnumber++;
                mainexit=true;
                break;
        }
        if(mainexit==true) {
            break;
        }
    }
    cout<<"Game over~"<<endl;
    return 0;
}

void mainout() {
    if(mainnumber>0)
    {
        cout<<endl<<endl<<endl;
    }
    cout<<"What do you want to do?"<<endl;
    cout<<"Please input a number"<<endl;
    cout<<"1.Amry"<<endl;
    cout<<"2.Food"<<endl;
    cout<<"3.Money"<<endl;
    cout<<"4.Wars"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<endl<<endl<<endl<<endl;
}

void amry() {
    int command;
    int number;
    char order[3];
    cout<<endl<<endl<<endl;
    cout<<"What do you want to do?"<<endl;
    cout<<"Please input a number"<<endl;
    cout<<"1.Add"<<endl;
    cout<<"2.exit"<<endl;
    cin>>command;
    cout<<endl<<endl<<endl<<endl;
    while(1) {
        if(command==1) {
            cout<<"You have "<<myprivate<<" privates"<<endl;
            cout<<"you have "<<mymoney<<" dollars"<<endl;
            cout<<"Each private will cost you 1 grain"<<endl;
            cout<<"Each private will cost you 1 dollar"<<endl;
            cout<<"How many private do you want to buy?"<<endl;
            cout<<"If you want to buy soilders,please input yes,else input no"<<endl;
            gets(order);
            if(order=="no") {
                break;
            } else {
                cout<<endl<<endl<<endl;
                cout<<"Please input a number"<<endl;
                cin>>number;
                myprivate+=number;
                cout<<endl<<endl<<endl<<endl;
            }
        }
        if(command==2) {
            break;
        }
    }
    return ;
}

void money() {
    int number;
    int command;
    cout<<"you have "<<mygrain<<" grain"<<endl;
    cout<<"Each grain will produce you 2 dollars"<<endl;
    cout<<"How many grain do you want to sell?"<<endl;
    cout<<"Please input a number"<<endl;
    cin>>number;
    if(mygrain-number<=0) {
        mygrain-=number;
        mymoney+=2*number;
        cout<<"you have "<<mygrain<<"grain now";
        cout<<"Input a number to exit"<<endl;
        cin>>command;
        return ;
    }
}

void food() {
    int command;
    cout<<"You have "<<myfamer<<" famer"<<endl;
    cout<<"You have "<<mygrain<<" grain"<<endl;
    cout<<"Each famer will produce you 2 grain"<<endl;
    cout<<"Input a number to exit"<<endl;
    cin>>command;
    return ;
}

void food_change() {
    mygrain-=myprivate;
    mygrain+=2*myfamer;
    return ;
}

void money_change() {
    mymoney-=myprivate;
}

void startwar() {
    int command;
    int enemy;
    int mydispatch;
    int fightchoose;
    cout<<"Please choose a enemy"<<endl;
    cout<<"Please input a number"<<endl;
    cout<<"1.Roman"<<endl;
    cout<<"2.Greece"<<endl;
    cout<<"3.Egypt"<<endl;//choose enemy
    cin>>enemy;
    if(enemy==1)//roman
    {
        cout<<"Roman has "<<romansprivate<<" siolders ,they have bow and sword"<<endl;
        cout<<"How many siolders do you want to dispatch"<<endl;
        cout<<"Please input a number"<<endl;
        cin>>mydispatch;
        if(mydispatch>myprivate)
        {
            cout<<"No,you don't have enough siolder"<<endl;
            cout<<"Please input a nmber of you want to dispatch again"<<endl;
            cin>>mydispatch;
        }       
        cout<<endl<<endl<<endl; 
        cout<<"They are coming ,Get ready to fight"<<endl;
        while(1)
        {   
            cout<<"What do you want to do now?"<<endl;
            cout<<"Please input a number"<<endl; 
            cout<<"1.fight"<<endl;
            cout<<"2.Run"<<endl;
            cin>>fightchoose;
            if(fightchoose==1)
            {
                cout<<"one hour later~"<<endl;
                if(myprivate>=romansprivate)
                {
                    cout<<"You win"<<endl;
                    myprivate-=romansprivate/3;
                    cout<<"You have "<<myprivate<<"soilder now"<<endl;
                }
                else 
                {
                    cout<<"You Defeat"<<endl;
                    myprivate-=romansprivate/2;
                    cout<<"You have "<<myprivate<<"now"<<endl;
                    cout<<"Roman has "<<romansprivate<<endl;
                }
                if(romansprivate<=0)
                {
                    cout<<"Roman Destroy"<<endl;
                }
                if(myprivate<=0)
                {
                    cout<<"Your coutry if Destroy"<<endl;
                    mainexit=true; 
                    return ;
                }
            }
            if(fightchoose==2)
            {
                cout<<"you are a coward"<<endl; 
                return ;
            } 
        } 
    }
    if(enemy==2)//Greece
    {
        cout<<"Greece has "<<greeceprivate<<" siolders ,they have ship and sword,they can one fight two"<<endl;
        cout<<"How many siolders do you want to dispatch"<<endl;
        cout<<"Please input a number"<<endl;
        cin>>mydispatch;
        if(mydispatch>myprivate)
        {
            cout<<"No,you don't have enough siolder"<<endl;
            cout<<"Please input a nmber of you want to dispatch again"<<endl;
            cin>>mydispatch;
        }
        cout<<endl<<endl<<endl; 
        cout<<"They are coming ,Get ready to fight"<<endl;
        while(1)
        {   
            cout<<"What do you want to do now?"<<endl;
            cout<<"Please input a number"<<endl; 
            cout<<"1.fight"<<endl;
            cout<<"2.Run"<<endl;
            cin>>fightchoose;
            if(fightchoose==1)
            {
                cout<<"one hour later~"<<endl;
                if(myprivate>=greeceprivate*2)
                {
                    cout<<"You win"<<endl;
                    myprivate-=greeceprivate/2;
                    cout<<"But you only have "<<myprivate<<"now"<<endl;
                }
                else 
                {
                    cout<<"You Defeat"<<endl;
                    myprivate-=greeceprivate;
                    cout<<"You have "<<myprivate<<"soilder now"<<endl;
                    cout<<"Greece has "<<greeceprivate<<endl;
                }
                if(greeceprivate<=0)
                {
                    cout<<"Greece Destroy";
                }
                if(myprivate<=0)
                {
                    cout<<"Your coutry if Destroy"<<endl;
                    mainexit=true; 
                    return ;
                }
            }
            if(fightchoose==2)
            {
                cout<<"you are a coward"<<endl; 
                return ;
            } 
        } 
    } 
    if(enemy==3)//Egypt
    {
        cout<<"Egypt has "<<egyptprivate<<" siolders ,they have stone and sword"<<endl;
        cout<<"They are small and weak"<<endl;
        cout<<"How many siolders do you want to dispatch"<<endl;
        cout<<"Please input a number"<<endl;
        cin>>mydispatch;
        if(mydispatch>myprivate)
        {
            cout<<"No,you don't have enough siolder"<<endl;
            cout<<"Please input a nmber of you want to dispatch again"<<endl;
            cin>>mydispatch;
        }
        cout<<endl<<endl<<endl; 
        cout<<"They are coming ,Get ready to fight"<<endl;
        while(1)
        {   
            cout<<"What do you want to do now?"<<endl;
            cout<<"Please input a number"<<endl; 
            cout<<"1.fight"<<endl;
            cout<<"2.Run"<<endl;
            cin>>fightchoose;
            if(fightchoose==1)
            {
                cout<<"one hour later~"<<endl;
                if(myprivate>=egyptprivate*2)
                {
                    cout<<"You win"<<endl;
                    myprivate-=egyptprivate/4;
                    cout<<"You have "<<myprivate<<"soilder now"<<endl;
                }
                else 
                {
                    cout<<"You Defeat"<<endl;
                    myprivate-=egyptprivate/2;
                    cout<<"You have "<<myprivate<<"now"<<endl;
                    cout<<"Egypt has "<<egyptprivate<<endl;
                }
                if(greeceprivate<=0)
                {
                    cout<<"Egypt Destroy";
                }
                if(myprivate<=0)
                {
                    cout<<"Your coutry if Destroy"<<endl;
                    mainexit=true; 
                    return ;
                }
            }
            if(fightchoose==2)
            {
                cout<<"you are a coward"<<endl; 
                return ;
            } 
        } 
    } 
}
void private_change()
{
    romansprivate+=30;
    greeceprivate+=25;
    egyptprivate+=35;
}

void wars() {
    string order;
    cout<<"Do you want to start a war with others?"<<endl;
    cout<<"Yes,input yes,else input no "<<endl;
    cin>>order;
    if(order=="yes") {
        startwar();
    } else {
        cout<<"you are a coward"<<endl;
        return ;
    }
    return ;
}
