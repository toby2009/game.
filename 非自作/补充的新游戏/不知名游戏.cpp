#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string>
#pragma optmize (2)
const int STAGES=4;
const int Edit_Mode=0;
const char EASTER_EGG_CODE[5]="233";
char c='\n',s[5];
int a,b,d,e;
inline void say(const char s[])
{
    for(int i=0;i<strlen(s);i++)
    {printf("%c",s[i]);Sleep(20);}
    printf("\n");
    return;
}
inline void say2(const char s[])
{
    for(int i=0;i<strlen(s);i++)
    {printf("%c",s[i]);Sleep(20);}
    return;
}
void end()
{
    system("color 04");
    system("cls");
    say("You losed the game,and I will end your computer!!!!!!!!!!!!!!!!!!");
    for(double i=1;i>0;i-=0.05)
    {Sleep(40);system("cls");printf("Your computer will be ended in %.2lf seconds",i);}
    if(!Edit_Mode) while(1) system("shutdown /s /t 0");//立即关机，无法阻挡 
}
void Update_Log()
{
    system("color 74");
    system("cls");
    if(MessageBox(NULL,"Do you want to see the update log?","Update log",MB_YESNO)==6)
    {
        say("Beta 1.1(2018.8.11 9:00)");
        say("It's the first beta.");
        say("2 stages for you to challenge!");
        say("--------------------------------");
        say("Beta 1.2(2018.8.11 21:10)");
        say("The first update!");
        say("Now there are 3 stages.");
        say("You can have more fun!");
        say("--------------------------------");
        say("Beta 1.2.1(2018.8.17 21:30)");
        say("It's a little late because I went out for 4 days :-)");
        say("I changed the stage order,");
        Sleep(500);
        say("for the ones who CAN'T pass the first stage.");
        say("--------------------------------");
        say("Beta 1.3(2018.8.18 15:50)");
        say("The fourth stage added!");
        say("An Easter Egg for you to discover!");
        say("--------------------------------");
        say("Beta 1.4(2018.8.23 12:30)");
        say("More colorful!");
        say("Nothing else.");
        say("--------------------------------");
        say("Beta 1.5(2018.10.1 19:20)");
        say("The update at National Day.");
        say("I can't play because I update this :-):-)");
        say("One stage removed--it's too boring.");
        say("Some tips added.");
        Sleep(5000);
    }
    else
    {
        say("This is a very very interesting game.");
        say("Have fun!");
        Sleep(2000);
    }
    return;
}
void Start()
{
    system("color A9");
    say("----------An interesting game----------");
    Sleep(1000);
    say("------------Made by someone------------");
    Sleep(1000);
    Update_Log();
    system("cls");
    return;
}
void Stage1()
{
    system("color F1");
    system("cls");
    m:say("------------The first stage------------");
/*  say("There is a VERY EASY math test.");
 *  if(MessageBox(NULL,"Do you want to take the math test?","Math test",MB_YESNO)==7)
 *  {
 *      MessageBox(NULL,"NO,you do.","NO",MB_OK);
 *      system("cls");
 *      goto m;
 *  }
 *  say("OK,let's take it.");
 *  e=0;
 *  Sleep(2500);
 *  system("cls");
 *  for(int i=0;i<10;i++)
 *  {
 *      say("------------The first stage------------");
 *      a=rand()/2;
 *      b=rand()/2;
 *      printf("NO.%d:%d+%d=",i+1,a,b);
 *      scanf("%d",&d);
 *      if(a+b==d) {say("Right.Add 10 points.");e++;}
 *      else say("Wrong.");
 *      say2("Your point is:");Sleep(100);printf("%d",e*10);
 *      Sleep(1000);
 *      system("cls");
 *  }
 *  if(e<6)
 *  {
 *      if(!Edit_Mode) system("shutdown /s /t 5");
 *      say2("Your math is terrible!");
 *      Sleep(1000);
 *      end();
 *      return;
 *  }
 */ 
    say("Note:");
    say("This level is too easy,so I remove it.");
    say("Also,it's too bored.");
    say("And you can pass this stage now.");
    Sleep(2500);
    system("cls");
    say("You passed the first stage.");
    return;
}
void Stage2()
{
    system("color D7");
    system("cls");
    n:say("------------The second stage------------");
    if(MessageBox(NULL,"Do you like to study?","Study",MB_YESNO)==7)
    {
        MessageBox(NULL,"NO,you do.","NO",MB_OK);
        system("cls");
        goto n;
    }
    say("OK,so let's study!!");
    say("Read this program and tell the result.\n");
    say("#include<bits/stdc++.h>");
    say("using namespace std;");
    say("int main()");
    say("{");
    say("    int a,b;");
    say("    cin>>a>>b;");
    say("    cout<<a*b-a-b;");
    say("    return 0;");
    say("}");
    say("Tip:If your score is under 60(10 points for one problem,");
    say("   10 problems at total),you will lose the game!!!");
    e=0;
    Sleep(4500);
    system("cls");
    for(int i=0;i<10;i++)
    {
        say("------------The second stage------------");
        a=rand()%100;
        b=rand()%100;
        printf("Input #%d:\n",i+1);
        printf("%d %d\n",a,b);
        printf("Output #%d:\n",i+1);
        scanf("%d",&d);
        if(d==a*b-a-b) {say("Right.Add 10 points.");e++;}
        else say("Wrong.");
        say2("Your point is:");Sleep(100);printf("%d",e*10);
        Sleep(1000);
        system("cls");
    }
    if(e<6)
    {
        if(!Edit_Mode) system("shutdown /s /t 4");
        say2("Your programming is terrible!");
        printf("                                 Easter Egg Code:233");
        Sleep(1000);
        end();
        return;
    }
    say("You passed the second stage.");
    return;
}
void Stage3()
{
    system("color F0");
    system("cls");
    say("------------The third stage------------");
    say("Is the author handsome and c/ever?");
    say("Answer A for yes,and answer B for no.");
    say("Author:Answer A!!!!!Don't answer B!!!!!");
    say("Tip:The answer is neither A nor B but a strange one in a strange place.");
    while(c=='\n')
    scanf("%c",&c);
    if(c!='/')
    {
        if(!Edit_Mode) system("shutdown /s /t 2");
        end();
        return;
    }
    say("You passed the third stage.");
    return;
}
void Stage4()
{
    system("color 42");
    system("cls");
    say("-------------The fourth stage------------");
    say("I'll tell you a secret:");
    say("There is an Easter Egg Code!!!");
    if(MessageBox(NULL,"Did you find the Easter Egg Code?","Easter Egg Code",MB_YESNO)==6)
    {
        if(!Edit_Mode) system("shutdown /s /t 4");
        say("No,you CAN'T find the Easter Egg Code if you don't die!!!!");
        say("So GO DIE!!!!!!!!!!!!!!!");
        Sleep(1000);
        end();
        return;
    }
    else
    {
        e=3;
        say("Oh,so you didn't find it.");
        say("Don't be sad,I'll give 3 times to you to guess.");
        say("Tip:The Easter Egg Code is a 3-dight number,");
        say("    so please input a 3-dight number.");
        Sleep(1000);
        system("cls");
        k:if(e>0)
        {
            say("-------------The fourth stage------------");
            say2("Input Easter Egg Code:");
            scanf("%s",s);
            if(strcmp(s,EASTER_EGG_CODE)==0)
            {
                say("Right.");
                Sleep(1000);
                system("cls");
                goto ed;
            }
            else
            {
                e--;
                say2("Wrong.You remain ");
                printf("%d",e);
                say(" time(s) to guess.");
                Sleep(1000);
                system("cls");
                goto k;
            }
        }
        else
        {
            say("Ahoh,you spend all three times.");
            say("But you also have chance to pass this stage.");
            say("You have 10% chance to pass.");
            if(MessageBox(NULL,"Do you want to play again from stage 1 to find the Easter Egg Code?\nYes = Start from stage 1\nNo = Use the 10% chance to pass","Stage 4",MB_YESNO)==6)
            {e=1;return;}
            else
            {
                a=rand()%10;
                if(a==0)
                {
                    say("You are so lucky!");
                    Sleep(1000);
                    goto ed;
                }
                else
                {
                    say("Oh,you are not lucky enough.");
                    say("Try again next time!Bye!");
                    Sleep(1000);
                    if(!Edit_Mode) system("shutdown /s /t 1");
                    end();
                }
            }
        }
    }           
    ed:system("cls");
    say("You passed the fourth stage.");
    return;
}
void Win()
{
    system("color 06");
    system("cls");
    say("You win!!!");
    say("Next stage will be on Beta 2.0.");
    say("Thanks for playing!");
    say("Press any key(except Enter) to end game.");
    while(getch()==13);
    return;
}
int main()
{
    system("title An interesting game Beta1.5");//1.5版本，我以后会更新 
    start:Start();
    Sleep(1000);
    Stage1();
    Sleep(1000);
    Stage2();
    Sleep(1000);
    Stage3();
    Sleep(1000);
    Stage4();
    if(e==1) {system("cls");goto start;}
    Sleep(1000);
    Win();
    return 0;
}
