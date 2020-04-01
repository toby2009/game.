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
	waitput("��ε�����������˴��ף�ף����Ϸ���ˣ�");
	_sleep(500);
	system("cls");
}
void xiong(){
	system("cls");
	waitput("��ε������ϲֻ�����ף�ף����Ϸ���ˣ�");
	_sleep(500);
	system("cls");
}
void zhong_ping(){
	system("cls");
	waitput("��ε�����һ�㣬������ƽ��ף����Ϸ��죡");
	_sleep(500);
	system("cls");
}
void xiao_ji(){
	system("cls");
	waitput("��ε������Ϻã�����С����ף����Ϸ��죡");
	_sleep(500);
	system("cls");
}
void zhong_ji(){
	system("cls");
	waitput("��ε��������ã������м���ף����Ϸ���ˣ�");
	_sleep(500);
	system("cls");
}
void da_ji(){
	system("cls");
	waitput("��ε������쳣�ĺã����˴󼪣�ף����Ϸ���ˣ�");
	_sleep(500);
	system("cls");
}
void now_(int g){
	double ti=EndTime-StartTime;
	ti=ti/CLOCKS_PER_SEC;
	printf("��ǰ�ؿ���%d\n",g+1);
	printf("��ǰʱ�䣺%lf s\n",ti);
	printf("��ң�{Ѫ����%d �ӵ���%d�� �ѻ��䣺%d��}\n",My_Tank.life,My_Tank.zds,My_Tank.bxs);
	printf("���ˣ�{Ѫ����%d �ӵ���%d�� �ѻ��䣺%d��}",Di_Tank.life,Di_Tank.zds,Di_Tank.bxs);
}
void tong(int &g){
	system("cls");
	_sleep(2000);
	printf("��ϲ��ͨ����%d�أ�",++g);
	_sleep(2000);
	system("cls");
	My_Tank.life=wo,My_Tank.x=2,My_Tank.y=2,My_Tank.zds=50,My_Tank.bxs=0,My_Tank.shoot_way='w';
	Di_Tank.life=di_,Di_Tank.x=9,Di_Tank.y=9,Di_Tank.zds=50,Di_Tank.bxs=0,Di_Tank.shoot_way='w';
	di_+=100,wo+=20,baoxiang=4;
	StartTime=clock();
	if(g==3){
		printf("���ķ�����%d",My_Tank.fenshu);
		_sleep(2000);
		system("cls");
		printf("��ϲ�������δ���");
		_sleep(4500);
		if(My_Tank.fenshu>=mb) printf("�ɹ���\n");
		else printf("ʧ�ܣ�\n");
		_sleep(1500);
		system("pause");
		exit(0);
	}
}
void tong2(int &g){
	system("cls");
	_sleep(2000);
	printf("��ϲ���1ͨ����%d�أ�\n",++g);
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
	printf("��ϲ���2ͨ����%d�أ�\n",++g);
	_sleep(2000);
	system("cls");
	My_Tank.life=100,My_Tank.x=2,My_Tank.y=2,My_Tank.zds=50,My_Tank.bxs=0,My_Tank.shoot_way='w';
	Di_Tank.life=100,Di_Tank.x=9,Di_Tank.y=9,Di_Tank.zds=50,Di_Tank.bxs=0,Di_Tank.shoot_way='w';
	baoxiang=4;
	StartTime=clock();
}
void tgpd(){
	printf("��ϲ");
	_sleep(2000);
	if(My_Tank.fenshu>Di_Tank.fenshu) printf("���1");
	else printf("���2");
	printf("�ɹ����أ�");
	printf("���1��%d��/n���2��%d��",My_Tank.fenshu,Di_Tank.fenshu);
	double t=clock()/CLOCKS_PER_SEC;
	printf("��ʱ�䣺%lf\n",t);
	system("pause");
	exit(0);
}
void over(int g){
	system("cls");
	printf("��Ϸ������\n");
	printf("���ڴ��%d��ʱ�����˴�ܣ�\n",g+1);
	printf("���ķ�����%d\n",My_Tank.fenshu);
	system("pause");
	exit(0);
}
void kaitou(){
	system("color 61");
	waitput("��ӭ����̹�˴�ս��\n");
	_sleep(500);
	waitput("���ߣ�������\n");
	_sleep(500);
	waitput("�汾��v.1.0\n");
	_sleep(500);
	waitput("�������������ʼ���ء�");
	char aaaa=getch();
	system("cls");
	waitput("��Ϸ������������������......\n");
	_sleep(1500);
	printf("������ϡ�\n");
	_sleep(500);
	waitput("��Ϸ��ͼ��������������......\n");
	_sleep(1500);
	printf("������ϡ�\n");
	_sleep(500);
	waitput("��Ϸ������������������......\n");
	_sleep(1500);
	printf("������ϡ�\n");
	_sleep(500);
	waitput("Loading now,please wait......");
	_sleep(550);
	printf("\n");
	system("pause");  
	system("cls");
}
void guize(){
	waitput("�Ƿ�Ҫ�Ķ�����");
	printf("\n");
	waitput("������y����������n��");
	char c=getch();
	if(c=='n') system("cls");
	else{
		system("cls");
		waitput("˵����\n");
		waitput("��w����a����s����d��Ϊ�ƶ������������ң�����k��Ϊ���������t��Ϊ��������q��Ϊ������\n");
		waitput("��v��Ϊ��ң���d��Ϊ���ˣ���@��Ϊ���䣬��.��Ϊ�ӵ����䣬��%��Ϊ�ϰ����^��Ϊ���壬��|����-��Ϊǽ,��$��Ϊ�ӵ���\n");
		waitput("����\n");
		waitput("����Ϸ�����֡���ÿ���У���Һ͵��˸���һ������Ϊ100���ӵ���Ϊ50��̹�ˡ�\n");
		waitput("��ҿɰ���w����a����s����d�������ƶ��򰴡�k�������ӵ��������˳������롰t����\n");
		waitput("���˻�����ƶ��ͷ����ӵ���������ײ��ǽ������-5�����س����㣻�����ң����ˣ���������ʱ������-15�������ң����ˣ����ӵ����У�����-20��\n");
		waitput("�ӵ�������ң����ˣ������䡢�ӵ����䡢�ϰ�������ǽʱ����ʧ����������������ӵ�����ʱ���������ı�����ӵ�����ͻ���ʧ��\n");
		waitput("��ÿ�������ĸ����䣬�����ң����ˣ���ȡ��һ�����䣬����+20����ÿ���л���һЩ�ӵ����䣬�����ң����ˣ���ȡ��һ���ӵ����䣬�ӵ���+5.\n");
		waitput("����Ϸ�У����ֻ�д�ܵ��˲��ܹ��أ�������������˴�ܣ�����Ϸ������\n");
		waitput("���˴ӵڶ�����ÿ��Ѫ������150����Ҵӵڶ�����ÿ��Ѫ������20��\n");
		waitput("��˫���ӵ�����Ϊ��ʱ��ÿ���ӵ�+50,ÿ������-20�����ĳһ����������(����С�ڵ���20)����һ���������ӵ���\n");
		waitput("����ͳ�ƹ���\n");
		waitput("�����ս����ʱ��ÿ�ռ�һ�����䣨�������ӵ����䣩���ҵķ���+50������ÿ�ռ�һ�����䣨�������ӵ����䣩���ҵķ���-40��\n");
		waitput("��ұ����˵��ӵ�����ʱ���ҵķ���-10��\n");
		waitput("���ֻ�������ﵽ���Լ���Ŀ�����������������ʤ��\n");
		system("pause");
		printf("\n");
		waitput("˫�ˣ�\n");
		waitput("��v��Ϊ���1����d��Ϊ���2��\n");
		waitput("���1����q��Ϊ������     ���2����/��Ϊ������\n");
		waitput("����Ϸ�����֡���ÿ���У����1�����2����һ������Ϊ100���ӵ���Ϊ50��̹�ˡ�\n");
		waitput("���1�ɰ���w����a����s����d�������ƶ��򰴡�k�������ӵ���\n");
		waitput("���2�ɰ���8����4����5����6�������ƶ��򰴡�.�������ӵ���\n");
		waitput("������ײ��ǽ������-5�����س����㣻������1�����2����������ʱ������-15��������2�����2�����ӵ����У�����-20��\n");
		waitput("�ӵ��������1�����2�������䡢�ӵ����䡢�ϰ�������ǽʱ����ʧ����������������ӵ�����ʱ���������ı�����ӵ�����ͻ���ʧ��\n");
		waitput("��ÿ�������ĸ����䣬������1�����2����ȡ��һ�����䣬����+20����ÿ���л���һЩ�ӵ����䣬������1�����2����ȡ��һ���ӵ����䣬�ӵ���+5.\n");
		waitput("����Ϸ�У����ֻ�д����һ����Ҳ��ܹ��أ������������һ����ܣ�����Ϸ������\n");
		waitput("������1�ӵ���Ϊ�㣬�����������԰���h������20�ֲ���50���ӵ���������2�ӵ���Ϊ�㣬�����������԰���+������20�ֲ���50���ӵ�������������㣬���������ӵ���(ע�⣺ֻ���ӵ�Ϊ��ʱ���涨�ļ��ŻᲹ���ӵ������򽫿۳�10�֡�)\n");
		waitput("���ѣ���Ҫ�˳������롰t����\n");
		waitput("����ͳ�ƹ���\n");
		waitput("���1�����2����ս����ʱ��ÿ�ռ�һ�����䣨�������ӵ����䣩������+50��\n");
		waitput("��ұ���һ����ҵ��ӵ�����ʱ�����ķ���-10��\n");
		waitput("��󣬷��������һ�ʤ��\n");
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
	printf("����������Ŀ�������");
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
			waitput("��ӭ�´����棡");
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
			waitput("��ӭ�´����棡");
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
	waitput("��������Ϸģʽ");
	printf("\n");
	waitput("+��ʾ���ˣ�-��ʾ˫�ˡ�");
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
	waitput("�ڴ�֮ǰ�������������������ε����ưɣ�"); 
	printf("\n");
	waitput("���������ȡһ����......");
	_sleep(2000);
	system("cls");
	waitput("���������ȷ��������鿴������y����������n��");
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
˵���� 
��w����a����s����d��Ϊ�ƶ������������ң�����k��Ϊ���������t��Ϊ��������q��Ϊ������
��v��Ϊ��ң���d��Ϊ���ˣ���@��Ϊ���䣬��.��Ϊ�ӵ����䣬��%��Ϊ�ϰ����^��Ϊ���壬��|����-��Ϊǽ,��$��Ϊ�ӵ��� 
����
����Ϸ�����֡���ÿ���У���Һ͵��˸���һ������Ϊ100���ӵ���Ϊ50��̹�ˡ�
��ҿɰ���w����a����s����d�������ƶ��򰴡�k�������ӵ��������˳������롰t����
���˻�����ƶ��ͷ����ӵ���������ײ��ǽ������-5�����س����㣻�����ң����ˣ���������ʱ������-15�������ң����ˣ����ӵ����У�����-20��
�ӵ�������ң����ˣ������䡢�ӵ����䡢�ϰ�������ǽʱ����ʧ����������������ӵ�����ʱ���������ı�����ӵ�����ͻ���ʧ��
��ÿ�������ĸ����䣬�����ң����ˣ���ȡ��һ������������+20����ÿ���л���һЩ�ӵ����䣬�����ң����ˣ���ȡ��һ���ӵ����䣬�ӵ���+5.
����Ϸ�У����ֻ�д�ܵ��˲��ܹ��أ�������������˴�ܣ�����Ϸ������
���˴ӵڶ�����ÿ��Ѫ������100����Ҵӵڶ�����ÿ��Ѫ������20��
��˫���ӵ�����Ϊ��ʱ��ÿ���ӵ�+50,ÿ������-20�����ĳһ����������(����С�ڵ���20)����һ���������ӵ���
����ͳ�ƹ���
�����ս����ʱ��ÿ�ռ�һ�����䣨�������ӵ����䣩���ҵķ���+50������ÿ�ռ�һ�����䣨�������ӵ����䣩���ҵķ���-40��
��ұ����˵��ӵ�����ʱ���ҵķ���-10��
���ֻ�������ﵽ���Լ���Ŀ�����������������ʤ��
˫�ˣ�
��v��Ϊ���1����d��Ϊ���2��
���1����q��Ϊ������     ���2����/��Ϊ������
����Ϸ�����֡���ÿ���У����1�����2����һ������Ϊ100���ӵ���Ϊ50��̹�ˡ�
���1�ɰ���w����a����s����d�������ƶ��򰴡�k�������ӵ���
���2�ɰ���8����4����5����6�������ƶ��򰴡�.�������ӵ���
������ײ��ǽ������-5�����س����㣻������1�����2����������ʱ������-15��������2�����2�����ӵ����У�����-20��
�ӵ��������1�����2�������䡢�ӵ����䡢�ϰ�������ǽʱ����ʧ����������������ӵ�����ʱ���������ı�����ӵ�����ͻ���ʧ��
��ÿ�������ĸ����䣬������1�����2����ȡ��һ������������+20����ÿ���л���һЩ�ӵ����䣬������1�����2����ȡ��һ���ӵ����䣬�ӵ���+5.
����Ϸ�У����ֻ�д����һ����Ҳ��ܹ��أ������������һ����ܣ�����Ϸ������
������1�ӵ���Ϊ�㣬�����������԰���h������20�ֲ���50���ӵ���������2�ӵ���Ϊ�㣬�����������԰���+������20�ֲ���50���ӵ�������������㣬���������ӵ���(ע�⣺ֻ���ӵ�Ϊ��ʱ���涨�ļ��ŻᲹ���ӵ������򽫿۳�10�֡�) 
���ѣ���Ҫ�˳������롰t����
����ͳ�ƹ���
���1�����2����ս����ʱ��ÿ�ռ�һ�����䣨�������ӵ����䣩������+50��
��ұ���һ����ҵ��ӵ�����ʱ�����ķ���-10�� 
��󣬷��������һ�ʤ��
		*/
