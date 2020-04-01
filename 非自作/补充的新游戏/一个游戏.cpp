#include<iostream>
#include<string>
#include<algorithm>
#include<windows.h>
#include<ctime>
#include<cstdlib>
using namespace std;
int y[1];
int a,b;
void show_show(){
cout<<"There is one pile of sticks."<<endl;
cout<<"Sticks numbers:"<<y[0]<<endl;
cout<<"----------------------------"<<endl;
}
void player_one_move(){
cout<<"The first player,how many sticks will you move:"<<endl;
cin>>a;
while(a!=1&&a!=2&&a!=3){
cout<<"The first player,you don't allow the rules."<<endl;
cout<<"Please tell me the right numbers of sticks you want to pick:"<<endl;
cin>>a;
}
y[0]=max(y[0]-a,0);
}
void player_two_move() {
cout<<"The second player,how many sticks will you move:"<<endl;
cin>>b;
while(a!=1&&a!=2&&a!=3){
cout<<"The second player,you don't allow the rules."<<endl;
cout<<"Please tell me the right numbers of sticks you want to pick:"<<endl;
cin>>b;
}
y[0]=max(y[0]-b,0);
}
int x[2];
void show(){
cout<<"There are two piles of sticks:"<<endl;
cout<<"Pile 0:"<<x[0]<<"stick(s)."<<endl;
cout<<"Pile 1:"<<x[1]<<"stick(s)."<<endl;
cout<<"------------------------------"<<endl;
}
void player_move(){
int p,s;
cout<<"Please pick a pile(0/1):";
cin>>p;
cout<<"How many sticks will you remove:";
cin>>s;
if(p>=0&&p<=1)
x[p]=max(x[p]-s,0);
}
void robot_move(){
if(x[0]>x[1]){

cout<<"The computer picks pile 0:"<<x[0]-x[1]<<"stick(s)."<<endl;
x[0]=x[1];
}else if(x[0]<x[1]){
cout<<"The computer picks pile 1:"<<x[1]-x[0]<<"stick(s)."<<endl;
x[1]=x[0];
}else if(x[0]=x[1]){
cout<<"The computer picks pile 0:"<<1<<"stick(s)."<<endl;
x[0]--;
}
}
int c,d,e,f;
int z[2];
void show_two(){
cout<<"There are two piles of sticks:"<<endl;
cout<<"Pile 0:"<<z[0]<<"stick(s)."<<endl;
cout<<"Pile 1:"<<z[1]<<"stick(s)."<<endl;
cout<<"------------------------------"<<endl;
}
void one_player_move(){
cout<<"The first player,please pick a pile(0/1):"<<endl;
cin>>c;
cout<<"The first player,how many sticks will you move:"<<endl;
cin>>d;
z[c]=max(z[c]-d,0);
}
void two_player_move(){
cout<<"The second player,please pick a pile(0/1):"<<endl;
cin>>e;
cout<<"The second player,how many sticks will you move:"<<endl;
cin>>f;
z[e]=max(z[e]-f,0);
}
void SLEEP(int x){
clock_t now=clock();
while(clock()-now<x);
}
int LIFE=5;
int M=15;
int N=30;
string words[15]= {"coding","programming","season","artificial","painting",
"knowledge","loop","input","economics","ceiling",
"absolute","function","algorithm","answer","intelligence"};
int main(){
int rec;
while(rec!=2){
int ansans,aaa;
cout<<"one.Pick sticks."<<endl;
cout<<"1.Coming soon."<<endl;
cout<<"2.Two persons.One pile."<<endl;
cout<<"3.One person,one computer.Two piles."<<endl;
cout<<"4.Two persons.Two piles."<<endl;
cout<<"two.Guess numbers"<<endl;
cout<<"1.One person."<<endl;
cout<<"2.Two persons." <<endl;
cout<<"three.Remember numbers" <<endl;
cout<<"1.One person."<<endl;
cout<<"2.Two persons." <<endl;
cout<<"four.Guess English words"<<endl;
cout<<"1.One person."<<endl;
cout<<"2.Coming soon." <<endl;
cout<<"Your choice:"<<endl;
cout<<"Big number:"<<endl;
cin>>aaa;
cout<<"Small number:"<<endl;
cin>>ansans;
system("cls");
if(aaa==1&&ansans==2){
system("color 0A");
cout<<"Welcome to NIM game!"<<endl;
_sleep(500);
cout<<"Here's the rules:"<<endl;
_sleep(1000);
cout<<"1 There is one pile of sticks."<<endl;
_sleep(500);
cout<<"2 The person who pick the last stick wins."<<endl;
_sleep(500);
cout<<"3 You can only pick 1,2 or 3 sticks one time."<<endl;
_sleep(500);
cout<<"Ok,let'begin!"<<endl;
_sleep(2000);
srand(time(0));
int A=20;
y[0]=rand()%A+10;
show_show();
while(1){
player_one_move();
show_show();
if(y[0]==0){
cout<<"The first player wins!"<<endl;
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
player_two_move();
show_show();
if(y[0]==0){
cout<<"The second player wins!"<<endl;
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
}
}
if(aaa==1&&ansans==3){
system("color 0A");
cout<<"Welcome to NIM game!"<<endl;
_sleep(500);
cout<<"Here's the rules:"<<endl;
_sleep(1000);
cout<<"1 There are two piles of sticks."<<endl;
_sleep(500);
cout<<"2 The person who pick the last stick wins."<<endl;
_sleep(500);
cout<<"3 You can pick any numbers sticks."<<endl;
_sleep(500);
cout<<"OK,let's begin!"<<endl;
_sleep(2000);
srand(time(0)) ;
int N=20;
x[0]=rand()%N+10;
x[1]=rand()%N+10;
show();
while(1){
player_move();
show();
if(x[0]==0&&x[1]==0){
cout<<"You win!";
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
cout<<"The computer is thinking."<<endl;
_sleep(2000);
robot_move();
show();
if(x[0]==0&&x[1]==0){
cout<<"You lose.";
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
}
}
if(aaa==1&&ansans==4){
system("color 0A");
cout<<"Welcome to NIM game!"<<endl;
_sleep(500);
cout<<"Here's the rules:"<<endl;
_sleep(1000);
cout<<"1 There are two piles of sticks."<<endl;
_sleep(500);
cout<<"2 The person who pick the last stick wins."<<endl;
_sleep(500);
cout<<"3 You can pick any numbers sticks."<<endl;
_sleep(500);
cout<<"OK,let's begin!"<<endl;
_sleep(2000);
srand(time(0));
int B=20;
z[0]=rand()%B+10;
z[1]=rand()%B+10;
show_two();
while(1){
one_player_move();
show_two();
if(z[0]==0&&z[1]==0){
cout<<"You win!";
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
two_player_move();
show_two();
if(z[0]==0&&z[1]==0){
cout<<"You lose.";
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
}
}
if(aaa==2&&ansans==1){
system("color 0E");
cout<<"Welcome to GN game!"<<endl;
_sleep(500);
cout<<"Here's the rules:"<<endl;
_sleep(1000);
cout<<"1 There is one person to play the game."<<endl;
_sleep(500);
cout<<"2 The number is from 1 to 99."<<endl;
_sleep(500);
cout<<"3 You have five choice."<<endl;
_sleep(500);
cout<<"OK,let's begin!"<<endl;
srand(time(0));
int asd=99;
int ann=rand()%asd+1;
int ab;
for(int i=1;i<=5;i++){
cout<<"Please guess a number: ";
cin>>ab;
if(ab>ann){
cout<<"Too big!"<<endl;
}
else if(ab<ann){
cout<<"Too small!"<<endl;
}
if(ab==ann){
cout<<"Bingo!"<<endl;
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
}
cout<<"Sorry. Game over!"<<endl;
cout<<"Answer = "<<ann<<endl;
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
if(aaa==2&&ansans==2){
system("color 0E");
cout<<"Welcome to GN game!"<<endl;
_sleep(500);
cout<<"Here's the rules:"<<endl;
_sleep(1000);
cout<<"1 There is two persons to play the game."<<endl;
_sleep(500);
cout<<"2 The number is from 1 to 99."<<endl;
_sleep(500);
cout<<"OK,let's begin!"<<endl;
srand(time(0));
int zxc=99;
int qwe=rand()%zxc+1;
int gn,gh;
while(1){
cout<<"The first player,please guess a number:"<<endl;
cin>>gn;
if(gn>qwe){
cout<<"Too big!"<<endl;
}
if(gn<qwe){
cout<<"Too small!"<<endl;
}
else if(qwe==gn){
cout<<"The first player wins!"<<endl;
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
cout<<"The second player,please guess a number:"<<endl;
cin>>gh;
if(gh>qwe){
cout<<"Too big!"<<endl;
}
else if(gh<qwe){
cout<<"Too small!"<<endl;
}
if(qwe==gh){
cout<<"The second player wins!"<<endl;
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
}
}
if(aaa==3&&ansans==1){
system("color 0F");
int vf,og;
cout<<"Please tell me how many numbers you want to remember:"<<endl;
cin>>vf;
cout<<"Please tell me how many time you want to remember the numbers(milliseconds):" <<endl;
cin>>og;
cout<<"Be careful at the screen£¡"<<endl;
SLEEP(3000);
string b,a="";
for(int i=0;i<vf;i++){
char x=rand()%10+'0';
a=a+x;
}
cout<<a<<endl;
SLEEP(og);
system("cls");
cout<<"Tell me the number you see: ";
cin>>b;
if(a==b){
cout<<"You win£¡"<<endl;
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
else{
cout<<"The correct answer is: "<<a<<endl;
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
}
if(aaa==3&&ansans==2){
system("color 0F");
int kj,jh;
cout<<"Please tell me how many numbers you want to remember:"<<endl;
cin>>kj;
cout<<"Please tell me how many time you want to remember the numbers(milliseconds):" <<endl;
cin>>jh;
cout<<"Be careful at the screen£¡"<<endl;
SLEEP(3000);
string b,a="";
for(int i=0;i<kj;i++){
char x=rand()%10+'0';
a=a+x;
}
cout<<a<<endl;
SLEEP(jh);
system("cls");
cout<<"The first player,please tell me the number you see:"<<endl;
cin>>b;
while(1){
if(a==b){
cout<<"The first player wins."<<endl;
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
cout<<"The second player,please tell me the number you see:"<<endl;
cin>>b;
if(a==b){
cout<<"The second player wins."<<endl;
cout<<"[1]continue,[2]exit."<<endl;
cin>>rec;
}
}
}
if(aaa==4&&ansans==1) {
srand(time(0));
string ans=words[rand()%M];
bool ok[N];
fill(ok,ok+N,0);
while(1){
cout<<"Welcome to word guessing game"<<endl;
cout<<"Your secret word is: "<<endl;
int cnt=0;
for(int j=0;j<ans.size();j++)
if(ok[j]) {
cout<<" "<<ans[j];
cnt++;
}
else cout<<" _";
cout<<endl<<endl;
if(cnt==ans.size())
break;
cout<<"Guess a letter ["<<LIFE<<"]: ";
char ch;
cin>>ch;
int hit=0;
for(int j=0;j<ans.size();j++)
if(ans[j]==ch) {
ok[j]=1;
hit=1;
}
if(!hit) LIFE--;
if(LIFE==0) break;
system("cls");
}
cout<<"The answer is : "<<endl;
for(int j=0;j<ans.size();j++)
cout<<" "<<ans[j];
return 0;
}
if(aaa==4&&ansans==2){

}
}
}
