#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int n;
int money=10;//钱数 
int dengji=0;//等级，相当于下面的grade 
int hp=5;//生命值 
void SHOP(int money,int grade){//商店 
        printf("Welcome to the shop\n");
        printf("You grade:%d\n",dengji);
        printf("Your money:%d\n",money);
        printf("Here are some nice things,have a look:\n");
        printf("1.fly machine 25 coins\n2.bread 2 coins\n3.water 1 coin\n4.fruit 2 coins\n5.Universal ticket(万能票) 4 coins\n" );
        printf("You want to buy:");
        scanf("%d",&n);
        if(n==1){
            if(money<25){printf("You do not have to much money,return...\n");return;
            }
            else {money-=25;printf("Ok,now you have %d money",money);return;
            }
        }
        if(n==2){
            if(money<2){printf("You do not have to much money,return...\n");return;
            }
            else {money-=2;printf("Ok,now you have %d money\n",money);return;
            }
        }
        if(n==3){
            if(money<1){printf("You do not have to much money,return...\n");return;
            }
            else {money-=1;printf("Ok,now you have %d money\n",money);
            printf("If you want to drink water,cin w\n");return;
            }
        }
        if(n==4){
            if(money<2){printf("You do not have to much money,return...\n");return;
            }
            else {money-=2;printf("Ok,now you have %d money\n",money);return;
            }
        }
        if(n==5){
            if(money<4){printf("You do not have to much money,return...\n");return;
            }
            else {money-=4;printf("Ok,now you have %d money\n",money);return;
            }
        }
}
int life(int hp){//判断生死 
    if(hp<=0&&money<=20){printf("You die!\nGame Over\nTry again!\n");return 1;
    }
    if(hp<=0&&money>20){
        money-=20;printf("You use 20 coins to continue the game.\nNow you have %d coins",money);
    }
    if(hp>0) { return 0;
    }
}
void GRADE(int hp){//升级 
    if (hp%7==0)dengji++;
    printf("Now your grade is %d\n",dengji);
    return;
}
int main(){
  printf("    Game name:Hero Trip 1(英雄之旅1之旅行的开始)\n");
  printf("Welcome to the game\n");
  printf("Let's play it now!\n");
  printf("First I need to tell you what is the game about:\n");
  printf("It is a story about a man,you are that man.\nYou need to get money and be rich!");
  printf("At first,you have 5 life.\n");
  printf("OK,now let's play together.\n");
  printf("1. PLAY THE GAME\n2. LEAVE\nYOUR CHOOSE:");
  scanf("%d",&n);
  if(n==2)return 0;
  if(n==1){
    printf("Thanks,Now you have ten coins,you can buy thing now.\n");
    printf("1.GO TO THE SHOP\n2.PLAY\n");
    printf("YOUR CHOOSE:");
    scanf("%d",&n);
    if(n==1){
      SHOP(money,dengji);
      n=2;
    }
    if(n==2){
        printf("WOW,you choose play!Come on!");
        printf("It is dark outside.\nYou cannot see anything.\nYou need to leave here.\nYou can go to left or right\n");
        printf("YOUR CHOOSE:1/2 ");
        scanf("%d",&n);
        if(n==1){
            printf("You are not careful.You fall into the river!HP-1\n");
            hp-=1;printf("Now you have %d HP\n",hp);
            if (life(hp))return 0;
            printf("You clumb up.\n");
            n=2;money-=4;printf("You lost 2 coins!\n");
        }
        if(n==2){
            hp++;money+=2;printf("You get 2 coins!\nGo on\n");
            printf("The sun rises.You need to go to Trip city.\nYou can get there on foot.\nIt will takes you a long time!\n");
            printf("But you meet a man.\nHe is sitting beside the street.\n");
            printf("1.HELP HIM\n2.LEAVE\nYOUR CHOOSE:");
            scanf("%d",&n);
            if(n==2){
                printf("That man is the street king.He come and kill you.\nYou run away.\n");
                hp-=2;money-=4;printf("You lost 2 coins!\n");printf("Now you have %d HP:",hp);
                n=1;
            }
            if(n==1){
                hp++;money+=2;if(life(hp))return 0;
                printf("You get 2 coins!\nGo on!\n");
                printf("That man is a king.He sits here for foot because someone is killing him！\n");
                printf("He thanks you.And gives you 8 coins.He also wants to get to Trip city.\nYou go with him\n");
                money+=8;printf("Now you have %d coins\n",money);
                printf("You walk with he for a day.\nYou are hungry and thirsty.\nYou need to have some food.\n");
                printf("The king find a restaurant.\nYou only can have food there,\nBut You only have %d coins.\n",money);
                printf("You can go and buy some food for the king or not.\nChoose Give or not:\n1.Give\n2.NOT\n");
                printf("YOUR CHOOSE:");
                scanf("%d",&n);
                if(n==2){
                    hp-=3;money-=12;printf("You choose not.\nthat king is very angry.\nHe steals(偷) you 4 coins!\n");
                    printf("You lost 6 coins\n");printf("Now you have %d HP\n",hp);
                    n=1;
                }
                if(n==1){
                    money+=2;hp++;  if(life(hp))return 0;
                    GRADE(hp);
                    printf("You get 2 coins!\nGo on!\n");
                    printf("The king thanks you again.\nFor thank your help,\nhe gives you 4 coins.\n");
                    printf("Now you have %d coins\n",money);
                    GRADE(hp);
                    printf("The king and you are full now.\nYou need to go to Trip city qickly.\nYou run.\n");
                    printf("After one day,You see Trip city.\nThe king and you wants to come into the city.\nBut something wrong.\n");
                    printf("A man who is wearing an uniform(制服) stops you,\nHe asks you who you are\n");
                    printf("You can choose tell him or not,\nplease choose:\n1.NOT\n2.TELL HIM\n");
                    printf("YOUR CHOOSE:");
                    scanf("%d",&n); 
                    if(n==1){
                        hp-=2;
                        money-=4;printf("You choose NOT!The man is angry.\nHe comes and kill you and the king!\nYou run.\n");
                        n++;printf("Now you have %d coins,your HP is %d\n",money,hp);
                    }
                    if(n==2){
                        printf("You choose 2!\nIt is a good choose!\nYou get 2 coins!\nGo on!\n");
                        money+=2;hp++;if(life(hp))return 0;
                        GRADE(hp);
                        printf("Now you have %d coins\n",money);
                        printf("Your HP is %d\n",hp);
                        printf("That man let you and the king come into there city.\nHe also show you around!\n");
                        printf("It is really a good place.\nEveryone here likes travelling!\nTwo hours later,You find a palace.\n");
                        printf("The palace is so big and dark.\nBut there is a door in front of it,\nYou should choose come or not!\n");
                        printf("1 COME\n2 NOT\nYOUR CHOOSE:");
                        scanf("%d",&n);
                        if(n==2){
                            hp-=3;
                            money-=4;printf("You do not want to come in.\nYou want to leave.\nBut when you want to leave,\n");
                            printf("There is a hole on the ground!\nThe king and You fall down to the hole!\n");
                            printf("You clamb up hardly and lost one HP!\n");
                            printf("You also lost 2 coins!\n");
                            printf("Now you have %d HP and %d coins",hp,money);
                            n=1;
                        }
                        if(n==1){
                            hp++;if(life(hp))return 0;money+=2;
                            GRADE(hp);
                            printf("You get 2 coins!\n");
                            printf("Now you have %d coins",money);
                            printf("The king help you open the door,\nyou come into it.\nIt is dark,You cannot see anything.\n");
                            printf("You open a touch.\nThere are two doors in front of you.\n");
                            printf("The door on the left says: this door is right!\nThe door on the right says: the door on the left is wrong!\n");
                            printf("Choose which door:\n1 LEFT\n2 RIGHT\n");
                            printf("YOUR CHOOSE:");
                            scanf("%d",&n);
                            if(n==1){
                                hp-=3;money-=4;printf("You open the left door,\nwhen you and the king come into it,\nthe door closed.\n");
                                printf("You find there are three lions in it!\nThe lions are hungry,\nThey want to eat you.\nYou run away\n");
                                printf("You lost 2 coin and 1 HP!\n");
                                printf("Now you have %d coins and %d HP\n",money,hp);
                                n++;
                            }
                            if(n==2){
                                hp++;if(life(hp))return 0;money+=2;
                                GRADE(hp);
                                printf("Good,You get 2 coins just now!\n");
                                printf("Now you have %d coins and %d HP\n",money,hp);
                                printf("You open the right door.\nIt is right.\nYou come in it and find three mirrors\n");
                                printf("The mirrors are magic!\nThey say:touch one of us and you can get to one of the place!\n");
                                printf("Soon there are some word in the mirrors\n");
                                printf("the first word is ShangHai\nthe second word is NewYork\nthe third word is England\n");
                                printf("You need Choose one of the place:\n");
                                printf("1 ShangHai grade 0\n");
                                printf("2 NewYork  grade 1\n");
                                printf("3 England  grade 2\n");
                                scanf("%d",&n);
                                if(n==2&&dengji<1){
                                    printf("Your grade must be 1 and you can join the map!\n");
                                    n==1;
                                }
                                if(n==3&&dengji<2){
                                    printf("Your grade must be 2 and you can join the map!\n");
                                    n==1;
                                }
                                if(n==1){
                                    printf("If you want to go to ShangHai,\nYou need 5 coins\n");
                                    printf("1 Buy and go\n");
                                    printf("2 Not buy and leave game\n");
                                    scanf("%d",&n);
                                    if(n==2){
                                        return 0;
                                    }
                                    if(n==1){
                                        money-=5;
                                        printf("Thank you for play.\nShangHai trip is in <HERO TRIP 2(上海之旅)>\nwe are doing the map\nplease wait!\n");
                                        printf("Made By:Wang\n");
                                        printf("LuoGu Number:_Administrator_\n");
                                        printf("LuoGu Team:https://www.luogu.org/team/show?teamid=21078\n");
                                        printf("If you have any question,please tell me by LuoGu,thanks\n");
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
  return 0;
}
