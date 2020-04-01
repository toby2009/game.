#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
using namespace std;
char book[]={"After you live in the house for a night,a villager comes.He say thanks to you for killing the zombie.He tells you that the zombie have killed many many villagers and broken many villages,and he is from the last village here,but other villager in his village disappeared yesterday.He wishes you to find his family and friends.\nThen,a group of zombies comes.It's make the villager very afraid.How can you kill them?"};
void paint(char *s=book){
  int len=strlen(s);
  for(int i=0;i<len;i++){
    printf("%c",s[i]);
    if(s[i]=='\n')
      Sleep(500);
    if(s[i]==','||s[i]=='.'||s[i]=='!')
      Sleep(200);
    else Sleep(50);
  }
  printf("\n");
}
void work(){
  int drink=0,give=0,kill=0;
  for(;;){
    system("cls");
    printf(give?(drink?"What will you do?\n  1.find your sword  2.ask the village about them\n    choose please : ":"What will you do?\n  1.find your sword  2.drink the blue water  3.ask the village about them\n    choose please : "):(drink?"What will you do?\n  1.use the sword to kill them  2.give up your sword  3.ask the village about them\n    choose please : ":"What will you do?\n  1.use the sword to kill them  2.give up your sword  3.drink the blue water  4.ask the village about them\n    choose please : "));
    char c;
    if(give)
      if(drink){
        while(((c=getchar())<'1')||(c>'2'));
        c=(c=='1')?'2':'4';
      }
      else{
        while(((c=getchar())<'1')||(c>'3'));
        c++;
      }
    else if(drink){
      while(((c=getchar())<'1')||(c>'3'));
        c=(c=='3')?'4':c;
    }
    else while(((c=getchar())<'1')||(c>'4'));
    switch(c-'0'){
      case 1:
        if(drink){
          char st[100]="You kill all of them in one go,and you get a map.";
          paint(st);
          FILE *user;
          user=fopen("user.exe","wb");
          fprintf(user,"2");
          system("pause");
          system("start 3");
          return;
        }
        if(kill++){
          char st[100]="They kill you and the villager!";
          paint(st);
          system("pause");
          return;
        }
        else{
          char st[100]="You can't touch them!";
          paint(st);
          system("pause");
        }
        break;
      case 2:
        give=1-give;
        system("pause");
        break;
      case 3:
        if(give){
          drink=1;
          system("pause");
        }
        else{
          char st[100]="You drink it and your sword kill you!";
          paint(st);
          system("pause");
          return;
        }
        break;
      case 4:
        char st[100]="He says nothing but point at the sunny sky.";
        paint(st);
        system("pause");
    }
  }
}
int main(){
  FILE *user;
  int did;
  user=fopen("user.exe","rb");
  fscanf(user,"%d",&did);
  if(did==0)
    system("start 1");
  else if(did==1){
    paint();
    system("pause");
    work();
  }
  else{
    paint();
    system("pause");
    system("start 3");
  }
  return 0;
}
