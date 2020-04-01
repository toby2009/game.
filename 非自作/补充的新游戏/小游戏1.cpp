#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
using namespace std;
char book[]={"You fell asleep yesterday.When you wake up,you find that you are not at home.There is a new world around you.So you decide to walk around to find your own's home."};
void paint(){
  int len=strlen(book);
  for(int i=0;i<len;i++){
    printf("%c",book[i]);
    if(book[i]==','||book[i]=='.')
      Sleep(200);
    else Sleep(50);
  }
  printf("\n");
}
int main(){
  int did;
  FILE *user,*user_out;
  user=fopen("user.exe","rb");
  fscanf(user,"%d",&did);
  paint();
  system("pause");
  system("start 1");
  return 0;
}
