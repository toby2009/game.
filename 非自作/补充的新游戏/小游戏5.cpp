#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
using namespace std;
char book[]={""};
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
}
int main(){
  FILE *user;
  int did;
  user=fopen("user.exe","rb");
  fscanf(user,"%d",&did);
  if(did<3)
    system("start 3");
  else if(did==3){
    paint();
    system("pause");
    work();
  }
  else{
    paint();
    system("pause");
    system("start 5");
  }
  return 0;
}
