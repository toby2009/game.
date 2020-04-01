#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<cstdlib>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<winbase.h>
#include<conio.h>
#include<bits/stdc++.h>
#include<stdio.h>
#include<ctime>
#define random(x) (rand()%x)
using namespace std;
struct Tank{
	int x,y,zds=50,life=100,fenshu;
	char shoot_way='w';
	int bxs;
}My_Tank,Di_Tank;
int di_=250,baoxiang=4,mb,wo=120;
char di[10]={'w','a','s','d','k','q'};
long long  StartTime,EndTime;
char map_[5][25][25]={
		{
			{'|','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ','^',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','%',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ','@',' ',' ',' ',' ','%',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.','|'},
			{'|',' ',' ',' ','%','%',' ',' ',' ',' ',' ',' ',' ',' ',' ','.',' ',' ',' ','|'},
			{'|',' ',' ',' ','%','%',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','@',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ','.',' ','%',' ',' ',' ','%','%',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ','%','%',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','@',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ','.',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ','^',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ','@',' ',' ',' ',' ',' ',' ',' ',' ','%',' ','.',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' ','^',' ',' ','|'},
			{'|','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','|'},
		},
		{
			{'|','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ','@',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ','%','%',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ','%','%',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ','@',' ',' ','.',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ','@','^',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ','@','.',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ','^',' ',' ',' ',' ','.',' ','.',' ',' ',' ','|'},
			{'|',' ',' ',' ','.',' ',' ','%','%',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','^',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','|'},
		},
		{
			{'|','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ','@',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ','%','%','%',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ','%','%','%',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ','%','%','%',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','@',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ','@',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','^',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' ','^',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','@',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ','%','%',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','.',' ',' ','|'},
			{'|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|',' ',' ',' ',' ','^',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
			{'|','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','|'},
		},
	};
void waitput(string st){
	for(int i=0;i<st.size();i++){
		cout<<st[i];
		_sleep(100);
	}
}
void da_xiong(){
	system("cls");
	waitput("这次的运气超差，得了大凶，祝你游戏好运！");
	_sleep(500);
	system("cls");
}
void xiong(){
	system("cls");
	waitput("这次的运气较差，只得了凶，祝你游戏好运！");
	_sleep(500);
	system("cls");
}
void zhong_ping(){
	system("cls");
	waitput("这次的运气一般，得了中平，祝你游戏愉快！");
	_sleep(500);
	system("cls");
}
void xiao_ji(){
	system("cls");
	waitput("这次的运气较好，得了小吉，祝你游戏愉快！");
	_sleep(500);
	system("cls");
}
void zhong_ji(){
	system("cls");
	waitput("这次的运气超好，得了中吉，祝你游戏好运！");
	_sleep(500);
	system("cls");
}
void da_ji(){
	system("cls");
	waitput("这次的运气异常的好，得了大吉，祝你游戏好运！");
	_sleep(500);
	system("cls");
}
void now_(int g){
	double ti=EndTime-StartTime;
	ti=ti/CLOCKS_PER_SEC;
	printf("当前关卡：%d\n",g+1);
	printf("当前时间：%lf s\n",ti);
	printf("玩家：{血量：%d 子弹：%d颗 已获宝箱：%d个}\n",My_Tank.life,My_Tank.zds,My_Tank.bxs);
	printf("敌人：{血量：%d 子弹：%d颗 已获宝箱：%d个}",Di_Tank.life,Di_Tank.zds,Di_Tank.bxs);
}
void tong(int &g){
	system("cls");
	_sleep(2000);
	printf("恭喜你通过第%d关！",++g);
	_sleep(2000);
	system("cls");
	My_Tank.life=wo,My_Tank.x=2,My_Tank.y=2,My_Tank.zds=50,My_Tank.bxs=0,My_Tank.shoot_way='w';
	Di_Tank.life=di_,Di_Tank.x=9,Di_Tank.y=9,Di_Tank.zds=50,Di_Tank.bxs=0,Di_Tank.shoot_way='w';
	di_+=100,wo+=20,baoxiang=4;
	StartTime=clock();
	if(g==3){
		printf("您的分数：%d",My_Tank.fenshu);
		_sleep(2000);
		system("cls");
		printf("恭喜您，本次闯关");
		_sleep(4500);
		if(My_Tank.fenshu>=mb) printf("成功！\n");
		else printf("失败！\n");
		_sleep(1500);
		system("pause");
		exit(0);
	}
}
void tong2(int &g){
	system("cls");
	_sleep(2000);
	printf("恭喜玩家1通过第%d关！\n",++g);
	_sleep(2000);
	system("cls");
	My_Tank.life=100,My_Tank.x=2,My_Tank.y=2,My_Tank.zds=50,My_Tank.bxs=0,My_Tank.shoot_way='w';
	Di_Tank.life=100,Di_Tank.x=9,Di_Tank.y=9,Di_Tank.zds=50,Di_Tank.bxs=0,Di_Tank.shoot_way='w';
	baoxiang=4;
	StartTime=clock();
}
void tong3(int &g){
	system("cls");
	_sleep(2000);
	printf("恭喜玩家2通过第%d关！\n",++g);
	_sleep(2000);
	system("cls");
	My_Tank.life=100,My_Tank.x=2,My_Tank.y=2,My_Tank.zds=50,My_Tank.bxs=0,My_Tank.shoot_way='w';
	Di_Tank.life=100,Di_Tank.x=9,Di_Tank.y=9,Di_Tank.zds=50,Di_Tank.bxs=0,Di_Tank.shoot_way='w';
	baoxiang=4;
	StartTime=clock();
}
void tgpd(){
	printf("恭喜");
	_sleep(2000);
	if(My_Tank.fenshu>Di_Tank.fenshu) printf("玩家1");
	else printf("玩家2");
	printf("成功过关！");
	printf("玩家1：%d分/n玩家2：%d分",My_Tank.fenshu,Di_Tank.fenshu);
	double t=clock()/CLOCKS_PER_SEC;
	printf("总时间：%lf\n",t);
	system("pause");
	exit(0);
}
void over(int g){
	system("cls");
	printf("游戏结束。\n");
	printf("您在打第%d关时被敌人打败！\n",g+1);
	printf("您的分数：%d\n",My_Tank.fenshu);
	system("pause");
	exit(0);
}
void kaitou(){
	system("color 61");
	waitput("欢迎来玩坦克大战！\n");
	_sleep(500);
	waitput("作者：黄旭涛\n");
	_sleep(500);
	waitput("版本：v.1.0\n");
	_sleep(500);
	waitput("请输入任意键开始加载。");
	char aaaa=getch();
	system("cls");
	waitput("游戏配置正在玩命加载中......\n");
	_sleep(1500);
	printf("加载完毕。\n");
	_sleep(500);
	waitput("游戏地图正在玩命加载中......\n");
	_sleep(1500);
	printf("加载完毕。\n");
	_sleep(500);
	waitput("游戏数据正在玩命加载中......\n");
	_sleep(1500);
	printf("加载完毕。\n");
	_sleep(500);
	waitput("Loading now,please wait......");
	_sleep(550);
	printf("\n");
	system("pause");  
	system("cls");
}
void guize(){
	waitput("是否要阅读规则？");
	printf("\n");
	waitput("是输入y，否则输入n。");
	char c=getch();
	if(c=='n') system("cls");
	else{
		system("cls");
		waitput("说明：\n");
		waitput("“w”“a”“s”“d”为移动键（上下左右），“k”为发射键，“t”为结束，“q”为不动。\n");
		waitput("“v”为玩家，“d”为敌人，“@”为宝箱，“.”为子弹宝箱，“%”为障碍物，“^”为陷阱，“|”或“-”为墙,“$”为子弹。\n");
		waitput("规则：\n");
		waitput("此游戏有三局。在每局中，玩家和敌人各有一辆生命为100，子弹数为50的坦克。\n");
		waitput("玩家可按“w”“a”“s”“d”进行移动或按“k”发射子弹。如想退出请输入“t”。\n");
		waitput("敌人会随机移动和发射子弹。如果玩家撞上墙，生命-5并返回出生点；如果玩家（敌人）碰到陷阱时，生命-15；如果玩家（敌人）被子弹射中，生命-20。\n");
		waitput("子弹碰到玩家（敌人）、宝箱、子弹宝箱、障碍物、陷阱或墙时会消失，其中碰到宝箱或子弹宝箱时，被碰到的宝箱或子弹宝箱就会消失。\n");
		waitput("在每局中有四个宝箱，如果玩家（敌人）获取到一个宝箱，生命+20；在每局中还有一些子弹宝箱，如果玩家（敌人）获取到一个子弹宝箱，子弹数+5.\n");
		waitput("在游戏中，玩家只有打败敌人才能过关；否则，如果被敌人打败，则游戏结束。\n");
		waitput("敌人从第二关起每关血量增加150，玩家从第二关起每关血量增加20。\n");
		waitput("当双方子弹数都为零时，每人子弹+50,每人生命-20。如果某一方生命不足(生命小于等于20)则那一方不补充子弹。\n");
		waitput("分数统计规则：\n");
		waitput("玩家在战斗的时候，每收集一个宝箱（不包括子弹宝箱），我的分数+50；敌人每收集一个宝箱（不包括子弹宝箱），我的分数-40。\n");
		waitput("玩家被敌人的子弹射中时，我的分数-10。\n");
		waitput("玩家只有在最后达到了自己的目标分数，才能真正获胜。\n");
		system("pause");
		printf("\n");
		waitput("双人：\n");
		waitput("“v”为玩家1，“d”为玩家2。\n");
		waitput("玩家1：“q”为不动。     玩家2：“/”为不动。\n");
		waitput("此游戏有三局。在每局中，玩家1和玩家2各有一辆生命为100，子弹数为50的坦克。\n");
		waitput("玩家1可按“w”“a”“s”“d”进行移动或按“k”发射子弹。\n");
		waitput("玩家2可按“8”“4”“5”“6”进行移动或按“.”发射子弹。\n");
		waitput("如果玩家撞上墙，生命-5并返回出生点；如果玩家1（玩家2）碰到陷阱时，生命-15；如果玩家2（玩家2）被子弹射中，生命-20。\n");
		waitput("子弹碰到玩家1（玩家2）、宝箱、子弹宝箱、障碍物、陷阱或墙时会消失，其中碰到宝箱或子弹宝箱时，被碰到的宝箱或子弹宝箱就会消失。\n");
		waitput("在每局中有四个宝箱，如果玩家1（玩家2）获取到一个宝箱，生命+20；在每局中还有一些子弹宝箱，如果玩家1（玩家2）获取到一个子弹宝箱，子弹数+5.\n");
		waitput("在游戏中，玩家只有打败另一个玩家才能过关；否则，如果被另一个打败，则游戏结束。\n");
		waitput("如果玩家1子弹数为零，他（她）可以按“h”来用20分补充50颗子弹；如果玩家2子弹数为零，他（她）可以按“+”来用20分补充50颗子弹。如果分数不足，将不补充子弹。(注意：只有子弹为零时按规定的键才会补充子弹，否则将扣除10分。)\n");
		waitput("提醒：如要退出请输入“t”。\n");
		waitput("分数统计规则：\n");
		waitput("玩家1（玩家2）在战斗的时候，每收集一个宝箱（不包括子弹宝箱），分数+50。\n");
		waitput("玩家被另一个玩家的子弹射中时，他的分数-10。\n");
		waitput("最后，分数多的玩家获胜。\n");
		system("pause");
		system("cls");
	}
}
void now(int g){
	system("cls");
	for(int j=0;j<20;j++){
			for(int k=0;k<20;k++)
			if(j==My_Tank.y&&k==My_Tank.x) printf("v");
			else if(j==Di_Tank.y&&k==Di_Tank.x) printf("d");
				else cout<<map_[g][j][k];
		printf("\n");
	}
	now_(g);
}
void now2(int g,int x_,int y_){
	system("cls");
	for(int j=0;j<20;j++){
		for(int k=0;k<20;k++)
			if(j==My_Tank.y&&k==My_Tank.x) printf("v");
			else if(j==Di_Tank.y&&k==Di_Tank.x) printf("d");
				else if(j==y_&&k==x_) printf("$");
					else cout<<map_[g][j][k];
		printf("\n");
	}
	now_(g);
}
void w(Tank &gong,Tank &fang,int g){
	int sx=gong.x,sy=gong.y;
	for(int i=gong.x;i>=0;i--){
		sx--;
		if(fang.x!=sx&&map_[g][sy][sx]==' '||fang.y!=sy&&map_[g][sy][sx]==' ') now2(g,sx,sy);
		else{
			if(fang.x==sx&&fang.y==sy) fang.life-=20,fang.fenshu-=10;
			else if(map_[g][sy][sx]=='@') map_[g][sy][sx]=' ',baoxiang--;
				else if(map_[g][sy][sx]=='.') map_[g][sy][sx]=' ';
			return;
		}
	}
}
void a(Tank &gong,Tank &fang,int g){
	int sx=gong.x,sy=gong.y;
	for(int i=gong.y;i>=0;i--){
		sy--;
		if(fang.x!=sx&&map_[g][sy][sx]==' '||fang.y!=sy&&map_[g][sy][sx]==' ') now2(g,sx,sy);
		else{
			if(fang.x==sx&&fang.y==sy) fang.life-=20,fang.fenshu-=10;
			else if(map_[g][sy][sx]=='@') map_[g][sy][sx]=' ',baoxiang--;
				else if(map_[g][sy][sx]=='.') map_[g][sy][sx]=' ';
			return;
		}
	}
}
void s(Tank &gong,Tank &fang,int g){
	int sx=gong.x,sy=gong.y;
	for(int i=gong.x;i<20;i++){
		sx++;
		if(fang.x!=sx&&map_[g][sy][sx]==' '||fang.y!=sy&&map_[g][sy][sx]==' ') now2(g,sx,sy);
		else{
			if(fang.x==sx&&fang.y==sy) fang.life-=20,fang.fenshu-=10;
			else if(map_[g][sy][sx]=='@') map_[g][sy][sx]=' ',baoxiang--;
				else if(map_[g][sy][sx]=='.') map_[g][sy][sx]=' ';
			return;
		}
	}
}
void d(Tank &gong,Tank &fang,int g){
	int sx=gong.x,sy=gong.y;
	for(int i=gong.y;i<20;i++){
		sy++;
		if(fang.x!=sx&&map_[g][sy][sx]==' '||fang.y!=sy&&map_[g][sy][sx]==' ') now2(g,sx,sy);
		else{
			if(fang.x==sx&&fang.y==sy) fang.life-=20,fang.fenshu-=10;
			else if(map_[g][sy][sx]=='@'||map_[g][sy][sx]=='.') map_[g][sy][sx]=' ';
			return;
		}
	}
}
void shoot(Tank &gong,Tank &fang,int g){
	switch(gong.shoot_way){
		case 'w' : a(gong,fang,g);
		break;
		case 'a' : w(gong,fang,g);
		break;
		case 's' : d(gong,fang,g);
		break;
		case 'd' : s(gong,fang,g);
		break;
	}
	gong.zds--;
}
void play(){
	system("cls");
	printf("请输入您的目标分数：");
	scanf("%d",&mb);
	system("cls");
	StartTime=clock();
	int gq=0;
	while(gq<3){
		now(gq);
		char ch=getch();
		char d=di[(random(6))];
		EndTime=clock();
		if(ch!='q'&&ch!='t'&&ch!='k') My_Tank.shoot_way=ch;              
		if(d!='q'&&d!='t'&&d!='k') Di_Tank.shoot_way=d;
		if(ch=='w') My_Tank.y--;
		if(ch=='s') My_Tank.y++;
		if(ch=='a') My_Tank.x--;
		if(ch=='d') My_Tank.x++;
		if(ch=='t'){
			system("cls");
			waitput("欢迎下次再玩！");
			exit(0);
		}
		if(ch=='q');
		if(d=='w') Di_Tank.y--;
		if(d=='s') Di_Tank.y++;
		if(d=='a') Di_Tank.x--;
		if(d=='d') Di_Tank.x++;
		if(d=='q');
		switch(map_[gq][My_Tank.y][My_Tank.x]){
			case 'd' :{
				if(ch=='w') My_Tank.y++;
				if(ch=='s') My_Tank.y--;
				if(ch=='a') My_Tank.x++;
				if(ch=='d') My_Tank.x--;
				break;
			}
			case '%' :{
				if(ch=='w') My_Tank.y++;
				if(ch=='s') My_Tank.y--;
				if(ch=='a') My_Tank.x++;
				if(ch=='d') My_Tank.x--;
				break;
			}
			case '.' :{
				My_Tank.zds+=5;
				map_[gq][My_Tank.y][My_Tank.x]=' ';
				break;
			}
			case '@' :{
				My_Tank.fenshu+=50;
				My_Tank.bxs++;
				My_Tank.life+=20;
				map_[gq][My_Tank.y][My_Tank.x]=' ';
				break;
			}
			case '^' :{
				My_Tank.life-=15;
				break;
			}
			case '|':{
				My_Tank.life-=5;
				My_Tank.x=2,My_Tank.y=2;
				break;
			}
			case '-':{
				My_Tank.life-=5;
				My_Tank.x=2,My_Tank.y=2;
				break;
			}
		}
		switch(map_[gq][Di_Tank.y][Di_Tank.x]){
			case 'v' :{
				if(d=='w') Di_Tank.y++;
				if(d=='s') Di_Tank.y--;
				if(d=='a') Di_Tank.x++;
				if(d=='d') Di_Tank.x--;
				break;
			}
			case '%' :{
				if(d=='w') Di_Tank.y++;
				if(d=='s') Di_Tank.y--;
				if(d=='a') Di_Tank.x++;
				if(d=='d') Di_Tank.x--;
				break;
			}
			case '.' :{
				Di_Tank.zds+=5;
				map_[gq][Di_Tank.y][Di_Tank.x]=' ';
				break;
			}
			case '@' :{
				My_Tank.fenshu-=40;
				Di_Tank.bxs++;
				Di_Tank.life+=20;
				map_[gq][Di_Tank.y][Di_Tank.x]=' ';
				break;
			}
			case '^' :{
				Di_Tank.life-=15;
				break;
			}
			case '|':{
				Di_Tank.life-=5;
				Di_Tank.x=9,Di_Tank.y=9;
				break;
			}
			case '-':{
				Di_Tank.life-=5;
				Di_Tank.x=9,Di_Tank.y=9;
				break;
			}
		}
		if(ch=='k'&&My_Tank.zds>0) shoot(My_Tank,Di_Tank,gq);
		if(d=='k'&&Di_Tank.zds>0) shoot(Di_Tank,My_Tank,gq);
		if(My_Tank.zds<=0&&Di_Tank.zds<=0){
			if(My_Tank.life>20) My_Tank.life-=20,My_Tank.zds=50;
			if(Di_Tank.life>20) Di_Tank.life-=20,Di_Tank.zds=50;
		}
		if(My_Tank.bxs+Di_Tank.bxs==baoxiang&&Di_Tank.life<=0||Di_Tank.life<=0) tong(gq);
		if(My_Tank.life<=0) over(gq);
	}
}
void play2(){
	StartTime=clock();
	int gq=0;
	while(gq<3){
		now(gq);
		char ch=getch();
		char d=ch;
		EndTime=clock();
		if(ch!='q'&&ch!='k'&&'a'<=ch&&ch<='z') My_Tank.shoot_way=ch;
		if('0'<=d&&d<='9'){
			if(d=='8') Di_Tank.shoot_way='w';
			if(d=='5') Di_Tank.shoot_way='s';
			if(d=='4') Di_Tank.shoot_way='a';
			if(d=='6') Di_Tank.shoot_way='d';
		}
		if(ch=='w') My_Tank.y--;
		if(ch=='s') My_Tank.y++;
		if(ch=='a') My_Tank.x--;
		if(ch=='d') My_Tank.x++;
		if(ch=='t'){
			system("cls");
			waitput("欢迎下次再玩！");
			exit(0);
		}
		if(ch=='q');
		if(d=='8') Di_Tank.y--;
		if(d=='5') Di_Tank.y++;
		if(d=='4') Di_Tank.x--;
		if(d=='6') Di_Tank.x++;
		if(d=='/');
		switch(map_[gq][My_Tank.y][My_Tank.x]){
			case 'd' :{
				if(ch=='w') My_Tank.y++;
				if(ch=='s') My_Tank.y--;
				if(ch=='a') My_Tank.x++;
				if(ch=='d') My_Tank.x--;
				break;
			}
			case '%' :{
				if(ch=='w') My_Tank.y++;
				if(ch=='s') My_Tank.y--;
				if(ch=='a') My_Tank.x++;
				if(ch=='d') My_Tank.x--;
				break;
			}
			case '.' :{
				My_Tank.zds+=5;
				map_[gq][My_Tank.y][My_Tank.x]=' ';
				break;
			}
			case '@' :{
				My_Tank.fenshu+=50;
				My_Tank.bxs++;
				My_Tank.life+=20;
				map_[gq][My_Tank.y][My_Tank.x]=' ';
				break;
			}
			case '^' :{
				My_Tank.life-=15;
				break;
			}
			case '|':{
				My_Tank.life-=5;
				My_Tank.x=2,My_Tank.y=2;
				break;
			}
			case '-':{
				My_Tank.life-=5;
				My_Tank.x=2,My_Tank.y=2;
				break;
			}
		}
		switch(map_[gq][Di_Tank.y][Di_Tank.x]){
			case 'v' :{
				if(d=='8') Di_Tank.y++;
				if(d=='5') Di_Tank.y--;
				if(d=='4') Di_Tank.x++;
				if(d=='6') Di_Tank.x--;
				break;
			}
			case '%' :{
				if(d=='8') Di_Tank.y++;
				if(d=='5') Di_Tank.y--;
				if(d=='4') Di_Tank.x++;
				if(d=='6') Di_Tank.x--;
				break;
			}
			case '.' :{
				Di_Tank.zds+=5;
				map_[gq][Di_Tank.y][Di_Tank.x]=' ';
				break;
			}
			case '@' :{
				Di_Tank.fenshu+=50;
				Di_Tank.bxs++;
				Di_Tank.life+=20;
				map_[gq][Di_Tank.y][Di_Tank.x]=' ';
				break;
			}
			case '^' :{
				Di_Tank.life-=15;
				break;
			}
			case '|':{
				Di_Tank.life-=5;
				Di_Tank.x=9,Di_Tank.y=9;
				break;
			}
			case '-':{
				Di_Tank.life-=5;
				Di_Tank.x=9,Di_Tank.y=9;
				break;
			}
		}
		if(ch=='k'&&My_Tank.zds>0) shoot(My_Tank,Di_Tank,gq);
		if(ch=='0'&&Di_Tank.zds>0) shoot(Di_Tank,My_Tank,gq);
		if(ch=='h'&&My_Tank.zds<=0) My_Tank.zds=50,My_Tank.fenshu-=20;
		else if(ch=='h'&&My_Tank.zds>0) My_Tank.fenshu-=10;
		if(ch=='+'&&Di_Tank.zds<=0) Di_Tank.zds=50,Di_Tank.fenshu-=20;
		else if(ch=='+'&&Di_Tank.zds>0) Di_Tank.fenshu-=10; 
		if(My_Tank.bxs+Di_Tank.bxs==baoxiang&&Di_Tank.life<=0||Di_Tank.life<=0) tong2(gq);
		if(Di_Tank.bxs+My_Tank.bxs==baoxiang&&My_Tank.life<=0||My_Tank.life<=0) tong3(gq);
		if(gq==3) tgpd();
	}
}
void dspd(){
	waitput("请输入游戏模式");
	printf("\n");
	waitput("+表示单人，-表示双人。");
	char ab=getch();
	if(ab=='+') play();
	else play2();
}
int main(){
	srand(time(0));
	My_Tank.x=1,My_Tank.y=1;
	Di_Tank.x=9,Di_Tank.y=9;
	kaitou();
	guize();
	system("cls");
	waitput("在此之前，我们现在先来抽抽这次的运势吧！"); 
	printf("\n");
	waitput("正在随机获取一个数......");
	_sleep(2000);
	system("cls");
	waitput("今次运势已确定。如想查看请输入y，否则输入n。");
	char abc=getch();
	if(abc=='y'){
		int s=random(200); 
		if(s<20) da_xiong();
		else if(s<50) xiong();
			else if(s<80) zhong_ping();
				else if(s<110) xiao_ji();
					else if(s<140) zhong_ji();
						else da_ji();
	}
	dspd();
	return 0;
}
/*
说明： 
“w”“a”“s”“d”为移动键（上下左右），“k”为发射键，“t”为结束，“q”为不动。
“v”为玩家，“d”为敌人，“@”为宝箱，“.”为子弹宝箱，“%”为障碍物，“^”为陷阱，“|”或“-”为墙,“$”为子弹。 
规则：
此游戏有三局。在每局中，玩家和敌人各有一辆生命为100，子弹数为50的坦克。
玩家可按“w”“a”“s”“d”进行移动或按“k”发射子弹。如想退出请输入“t”。
敌人会随机移动和发射子弹。如果玩家撞上墙，生命-5并返回出生点；如果玩家（敌人）碰到陷阱时，生命-15；如果玩家（敌人）被子弹射中，生命-20。
子弹碰到玩家（敌人）、宝箱、子弹宝箱、障碍物、陷阱或墙时会消失，其中碰到宝箱或子弹宝箱时，被碰到的宝箱或子弹宝箱就会消失。
在每局中有四个宝箱，如果玩家（敌人）获取到一个能量，生命+20；在每局中还有一些子弹宝箱，如果玩家（敌人）获取到一个子弹宝箱，子弹数+5.
在游戏中，玩家只有打败敌人才能过关；否则，如果被敌人打败，则游戏结束。
敌人从第二关起每关血量增加100，玩家从第二关起每关血量增加20。
当双方子弹数都为零时，每人子弹+50,每人生命-20。如果某一方生命不足(生命小于等于20)则那一方不补充子弹。
分数统计规则：
玩家在战斗的时候，每收集一个宝箱（不包括子弹宝箱），我的分数+50；敌人每收集一个宝箱（不包括子弹宝箱），我的分数-40。
玩家被敌人的子弹射中时，我的分数-10。
玩家只有在最后达到了自己的目标分数，才能真正获胜。
双人：
“v”为玩家1，“d”为玩家2。
玩家1：“q”为不动。     玩家2：“/”为不动。
此游戏有三局。在每局中，玩家1和玩家2各有一辆生命为100，子弹数为50的坦克。
玩家1可按“w”“a”“s”“d”进行移动或按“k”发射子弹。
玩家2可按“8”“4”“5”“6”进行移动或按“.”发射子弹。
如果玩家撞上墙，生命-5并返回出生点；如果玩家1（玩家2）碰到陷阱时，生命-15；如果玩家2（玩家2）被子弹射中，生命-20。
子弹碰到玩家1（玩家2）、宝箱、子弹宝箱、障碍物、陷阱或墙时会消失，其中碰到宝箱或子弹宝箱时，被碰到的宝箱或子弹宝箱就会消失。
在每局中有四个宝箱，如果玩家1（玩家2）获取到一个能量，生命+20；在每局中还有一些子弹宝箱，如果玩家1（玩家2）获取到一个子弹宝箱，子弹数+5.
在游戏中，玩家只有打败另一个玩家才能过关；否则，如果被另一个打败，则游戏结束。
如果玩家1子弹数为零，他（她）可以按“h”来用20分补充50颗子弹；如果玩家2子弹数为零，他（她）可以按“+”来用20分补充50颗子弹。如果分数不足，将不补充子弹。(注意：只有子弹为零时按规定的键才会补充子弹，否则将扣除10分。) 
提醒：如要退出请输入“t”。
分数统计规则：
玩家1（玩家2）在战斗的时候，每收集一个宝箱（不包括子弹宝箱），分数+50。
玩家被另一个玩家的子弹射中时，他的分数-10。 
最后，分数多的玩家获胜。
		*/
