#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
using namespace std;
char book[]={"Now you find a house.Unlucky it's not yours.But there is no one inside and you must find a place safe as soon as possible.So you go into and begin to sleep.\nSoon,the owner of the house get back.He is a zombie.You find a iron sword to kill him.Now,kill him!"};
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
  int find=0,kill=0;
  for(;;){
    system("cls");
    printf("What will you do?\n  1.use the sword to kill him  2.look for other things around\n    choose please : ");
    char c;
    while((c=getchar())!='1'&&c!='2');
    if(c=='1'){
      if(kill++){
        char st[100]="He find you and kill you.";
        paint(st);
        system("pause");
        return;
      }
      else{
        char st[100]="His fur is harder than your sword!";
        paint(st);
      }
    }
    else{
      find++;
      if(find==1){
        char st[100]="You find a sword,but it's worse than yours.";
        paint(st);
      }
      else if(find==2){
        char st[100]="You find a cup of blue water.";
        paint(st);
        printf("Do you want to drink it?\n  1.Yes  2.No\n    choose please : ");
        char c;
        while((c=getchar())!='1'&&c!='2');
        if(c=='1'){
          char st[100]="You drink it and your sword kill you!";
          paint(st);
          system("pause");
          return;
        }
      }
      if(find==3){
        char st[120]="You find a bottle of sunshine,then you break the bottle.The zombie start to be in fire,at the last he dies.";
        paint(st);
        FILE *user;
        user=fopen("user.exe","wb");
        fprintf(user,"1");
        system("pause");
        system("start 2");
        return;
      }
    }
    system("pause");
  }
}
int main(){
  FILE *user;
  int did;
  user=fopen("user.exe","rb");
  fscanf(user,"%d",&did);
  paint();
  system("pause");
  if(did==0)
    work();
  else system("start 2");
  return 0;
}
