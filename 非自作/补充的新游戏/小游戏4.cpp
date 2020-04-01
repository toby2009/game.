#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
using namespace std;
char book[]={"\"Oh!The map of our new city!\"The villager says.\n\"Your city?\"You superise,\"You don't know the way to your city?\"\n\"No,on the day before the yesterday,one of my friend gave me the map.He said that he found a new city and gave me it.But it fell in zombies' hands.So,I believe that I can start to look for my family and friends now!\"The villager says.\nYou look at the map and get a great superise:It's your city.You say:\"No,it's not yours,its true owner is my neibors and me!\"\nHe says:\"I know there are other people.And when my friend got there,there people was friendly to him and invited he to move his neibors to there.He found that the city is better than ours,so he dicide to move us to there.But yesterday my neibors disappeared,so I think they are there.\"\nYou say:\"Maybe.He may get there after I left.\"\n\n\nThen,you see a wall in front of you."};
char MAP[12][200]={
  {" ________\n|        |\n| No one |\n| can go |\n| into   |\n| ****** |\n| ** *** |\n| ****.  |\n|________|"},
  {" ________\n|        |\n| No one |\n| can go |\n| out    |\n| ****** |\n| ** ****|\n| *****. |\n|________|"},
  {" ________\n|        |\n| No one |\n| can go |\n| into   |\n| except |\n| he see |\n| this.  |\n|________|"},
  {" ________\n|        |\n| No one |\n| can go |\n| out    |\n| except |\n| he dies|\n| there. |\n|________|"},
  {" ________\n|        |\n| Every  |\n| d***   |\n| people |\n| can    |\n| see    |\n| this.  |\n|________|"},
  {" ________\n|        |\n| Every  |\n| h***   |\n| people |\n| can    |\n| see    |\n| this.  |\n|________|"},
  {" ________\n|        |\n| Every  |\n| here   |\n| people |\n| can    |\n| see    |\n| this.  |\n|________|"},
  {" ________\n|        |\n| Every  |\n| dead   |\n| people |\n| can    |\n| see    |\n| this.  |\n|________|"},
  {" ________\n|        |\n| Here   |\n| is     |\n| the    |\n| ****   |\n| you    |\n| ****.  |\n|________|"},
  {" ________\n|        |\n| Here   |\n| are    |\n| the    |\n| ****   |\n| ****   |\n| you.   |\n|________|"},
  {" ________\n|        |\n| Here   |\n| is     |\n| the    |\n| city   |\n| you    |\n| find.  |\n|________|"},
  {" ________\n|        |\n| Here   |\n| are    |\n| the    |\n| pots   |\n| cook   |\n| you.   |\n|________|"}
};
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
  for(int i=0;i<3;i++){
    system("cls");
    printf("Look at the graph and choose the way:\n    1:\n%s\n    2:\n%s\n  choose please : ",MAP[i*4],MAP[i*4+1]);
    char c;
    while(((c=getchar())<'1')||(c>'2'));
    if(c-'1'==i%2)
      printf("%s\n\n",MAP[i*4+2]);
    else{
      printf("%s\n\n",MAP[i*4+3]);
      char st[100]="You make the error choice.";
      paint(st);
      system("pause");
      return;
    }
    if(i<2)
      system("pause");
  }
  FILE *user;
  user=fopen("user.exe","wb");
  fprintf(user,"3");
  system("pause");
  system("start 4");
}
int main(){
  FILE *user;
  int did;
  user=fopen("user.exe","rb");
  fscanf(user,"%d",&did);
  if(did<2)
    system("start 2");
  else if(did==2){
    paint();
    system("pause");
    work();
  }
  else{
    paint();
    system("pause");
    system("start 4");
  }
  return 0;
}
