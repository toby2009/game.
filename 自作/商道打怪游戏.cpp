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
#define ull long long
using namespace std;
void waitput(string st){
	for(int i=0;i<st.size();i++){
		cout<<st[i];
		Sleep(100);
	}
}
struct wupingd{
	long long zuan_;
	long long jiacheng;
	long long shuliang;
	long long max_shuliang;
};
struct dian{
	string m;
	ull speak_;
	wupingd wu[5];
	ull one;
	ull two;
	ull three;
	ull four;
	ull five;
	bool open;
	ull money_one;
	ull speak_one_jia;
};
dian mzd,fcdgs,srct,srjd,kyzx;
struct play{
	string name;
	ull gong;
	ull fang;
	ull life;
	ull max_life;
	string gongz;
	string fangz;
	ull deng;
	ull jing;
	ull max_jing;
	ull money;
	ull zuan;
	ull max;
	ull huangjin;
	bool place_;
	ull gongzn;
	ull fangzn;
	dian dian_;
	ull yuan;
}player={"勇者",80,80,100,100,"无","无",1,0,100,100000,1000,9223372036854775807,0,0};
struct monster{
	string mz;
	string wupin; 
	ull jg;
	ull fh;
	ull sm;
	ull max_sm;
	ull jb;
	ull j;
}jr={"森林巨人怪","金刚石锁子甲",120,150,220,220,150,75},
nw={"魔法女巫","银甲衣",50,70,85,85,60,30},
xy={"巨变蜥蜴","铜梓衣",25,35,42,42,30,15},
jrw={"森林巨人怪王","巨人蓝铁晶石",850,1000,1320,1320,1000,500},
xs={"凶恶雄狮","黄金断链剑",130,160,230,230,160,80},
ym={"狂暴野马","40米长刀",70,80,90,90,80,40},
hf={"毒刺黄蜂","干草叉",50,55,65,65,60,30},
st={"修炼使徒","修炼秘籍",900,1050,1400,1400,1100,550},
guai; 
long long gong1=1,gong2=0,gong3=0,gong4=0;//匕首，干草叉，40米长刀 ，黄金断链剑 
int gong1n=15,gong2n=55,gong3n=70,gong4n=100;
long long fang1=1,fang2=0,fang3=0,fang4=0;//布衣，铜梓衣，银甲衣，金刚石锁子甲
int fang1n=20,fang2n=60,fang3n=70,fang4n=95;
int wkcy=5,yyjjb=4,ynby=3,tszy=2,smdys=1;//外科草药，医用急救包，云南白药，特殊中药，生命大药水
int wkcyn=50,yyjjbn=75,ynbyn=120,tszyn=175,smdysn=200;
int sld=5,jdfb=4,spgnzd=3,spdd=2,spyzhd=1;//手榴弹，剧毒飞镖，手抛高能炸弹，手抛导弹，手抛原子核弹
int sldn=60,jdfbn=80,spgnzdn=125,spddn=175,spyzhdn=210;
int jrltjs,xlmj;//巨人蓝铁晶石，修炼秘籍
int xlmjg=90,xlmjf=85,xlmjs=100;
int choose_number,choose;
bool battle;
long double start,end;
string str[10]={"\0","匕首","干草叉","40米长刀","黄金断链剑","布衣","铜梓衣","银甲衣","金刚石锁子甲"};
unsigned int rando(unsigned int x){
	srand((unsigned)time(NULL));
	return random(x)+1;
}
void wp(){
	printf("1：外科草药，%d个\n",wkcy);
	printf("2：医用急救包，%d个\n",yyjjb);
	printf("3：云南白药，%d个\n",ynby);
	printf("4：特殊中药，%d个\n",tszy);
	printf("5：生命大药水，%d个\n",smdys);
	printf("6：手榴弹，%d个\n",sld);
	printf("7：剧毒飞镖，%d个\n",jdfb);
	printf("8：手抛高能炸弹，%d个\n",spgnzd);
	printf("9：手抛导弹，%d个\n",spdd);
	printf("10：手抛原子核弹，%d个\n",spyzhd);
	printf("11：巨人蓝铁晶石，%d个\n",jrltjs);
	printf("12：修炼秘籍，%d个\n",xlmj); 
	printf("0：退出\n\n\n");
	cin>>choose_number;
	switch(choose_number){
		case 1 : {
			if(wkcy<=0){
				printf("Sorry，你的数量不够~\n");
				break;
			}
			printf("使用外科草药，生命增加%d",wkcyn);
			player.life+=wkcyn;
			wkcy--;
			break;
		}
		case 2 : {
			if(yyjjb<=0){
				printf("Sorry，你的数量不够~\n");
				break;
			}
			printf("使用医用急救包，生命增加%d",yyjjbn);
			player.life+=yyjjbn;
			yyjjb--;
			break;
		}
		case 3 : {
			if(ynby<=0){
				printf("Sorry，你的数量不够~\n");
				break;
			}
			printf("使用云南白药，生命增加%d",ynbyn);
			player.life+=ynbyn;
			ynby--;
			break;
		}
		case 4 : {
			if(tszy<=0){
				printf("Sorry，你的数量不够~\n");
				break;
			}
			printf("使用特殊中药，生命增加%d",tszyn);
			player.life+=tszyn;
			tszy--;
			break;
		}
		case 5 : {
			if(smdys<=0){
				printf("Sorry，你的数量不够~\n");
				break;
			} 
			printf("使用生命大药水，生命增加%d",smdysn);
			player.life+=smdysn;
			smdys--;
			break;
		}
		case 6 : {
			if(!battle){
				printf("非战时不可使用。\n");
				break;
			}
			if(sld<=0){
				printf("Sorry，你的数量不够~\n");
				break;
			}
			printf("使用手榴弹，敌人生命减少%d",sldn);
			guai.sm-=sldn;
			sld--;
			break;
		}
		case 7 : {
			if(!battle){
				printf("非战时不可使用。\n");
				break;
			}
			if(jdfb<=0){
				printf("Sorry，你的数量不够~\n");
				break;
			}
			printf("使用剧毒飞镖，敌人生命减少%d",jdfbn);
			guai.sm-=jdfbn;
			jdfb--;
			break;
		}
		case 8 : {
			if(!battle){
				printf("非战时不可使用。\n");
				break;
			}
			if(spgnzd<=0){
				printf("Sorry，你的数量不够~\n");
				break;
			}
			printf("使用手抛高能炸弹，敌人生命减少%d",spgnzdn);
			guai.sm-=spgnzdn;
			spgnzd--;
			break;
		}
		case 9 : {
			if(!battle){
				printf("非战时不可使用。\n");
				break;
			}
			if(spdd<=0){
				printf("Sorry，你的数量不够~\n");
				break;
			}
			printf("使用手抛导弹，敌人生命减少%d",spddn);
			guai.sm-=spddn;
			spdd--;
			break;
		}
		case 10 : {
			if(!battle){
				printf("非战时不可使用。\n");
				break;
			}
			if(spyzhd<=0){
				printf("Sorry，你的数量不够~\n");
				break;
			}
			printf("使用手抛原子核弹，敌人生命减少%d",spyzhdn);
			guai.sm-=spyzhdn;
			spyzhd--;
			break;
		}
		case 11 : {
			printf("此物品暂无效果，敬请期待。\n");
			break;
		}
		case 12 : {
			if(xlmj<=0){
				printf("Sorry，你的数量不够~\n");
				break;
			}
			printf("使用修炼秘籍，攻击力+%d，防御力+%d，生命+%d",xlmjg,xlmjf,xlmjs);
			xlmj--;
			break;
		}
		default : {break;}
	}
}
void chakan(){
	cout<<player.name<<'\n';
	printf("攻击力：%lld+%lld=%lld	防御力：%lld+%lld=%lld	生命：%lld/%lld\n",player.gong,player.gongzn,player.gong+player.gongzn,player.fang,player.fangzn,player.fang+player.fangzn,player.life,player.max_life);
	printf("攻击武器：");
	cout<<player.gongz;
	printf("	防御护甲：");
	cout<<player.fangz<<'\n';
	printf("等级：%lld级	经验：%lld/%lld\n",player.deng,player.jing,player.max_jing);
  	printf("金币：%lld/%lld		钻石：%lld/%lld\n",player.money,player.max,player.zuan,player.max);
  	printf("赚钱速度：%lld\n\n\n",player.dian_.speak_);
}
void zhuangbei(){
	printf("攻击武器	1：匕首：%lld，2：干草叉：%lld，3：40米长刀：%lld，4：黄金断链剑：%lld\n",gong1,gong2,gong3,gong4);
	printf("防御武器	5：布衣：%lld，6：铜梓衣：%lld，7：银甲衣：%lld，8：金刚石锁子甲：%lld\n",fang1,fang2,fang3,fang4);
	printf("0：退出\n\n\n");
	cin>>choose_number;
	if(0<choose_number&&choose_number<9){
		if(1<=choose_number&&choose_number<=4){
			printf("拿起了");
			player.gongz=str[choose_number];
		}
		else{
			printf("穿上了");
			player.fangz=str[choose_number];
		}
		cout<<str[choose_number];
		switch(choose_number){
			case 1 : {
				player.gongzn=gong1n;
				break;
			}
			case 2 : {
				player.gongzn=gong2n;
				break;
			}
			case 3 : {
				player.gongzn=gong3n;
				break;
			}
			case 4 : {
				player.gongzn=gong4n;
				break;
			}
			case 5 : {
				player.fangzn=fang1n;
				break;
			}
			case 6 : {
				player.fangzn=fang2n;
				break;
			}
			case 7 : {
				player.fangzn=fang3n;
				break;
			}
			case 8 : {
				player.fangzn=fang4n;
				break;
			}
		}
	}
	cout<<"\n\n\n";
}
void chucun_dian(){
	//////
	mzd.m="包子店";
	mzd.money_one=2000;
	mzd.open=1;
	mzd.speak_one_jia=120;
		//////
		mzd.wu[0].jiacheng=10;
		mzd.wu[0].shuliang=1;
		mzd.wu[0].zuan_=120;
		mzd.wu[0].max_shuliang=5;
		//////
		mzd.wu[1].jiacheng=75;
		mzd.wu[1].zuan_=150;
		mzd.wu[1].max_shuliang=2;
		//////
		mzd.wu[2].jiacheng=90;
		mzd.wu[2].zuan_=175;
		mzd.wu[2].max_shuliang=2;
		//////
		mzd.wu[3].jiacheng=120;
		mzd.wu[3].zuan_=200;
		mzd.wu[3].max_shuliang=1;
		//////
	//////
	fcdgs.m="房产地公司";
	fcdgs.money_one=3500;
	fcdgs.open=0;
	fcdgs.speak_one_jia=150;
		//////
		fcdgs.wu[0].jiacheng=20;
		fcdgs.wu[0].max_shuliang=4;
		fcdgs.wu[0].shuliang=1;
		fcdgs.wu[0].zuan_=150;
		//////
		fcdgs.wu[1].jiacheng=100;
		fcdgs.wu[1].max_shuliang=2;
		fcdgs.wu[1].zuan_=175;
		//////
		fcdgs.wu[2].jiacheng=175;
		fcdgs.wu[2].max_shuliang=2;
		fcdgs.wu[2].zuan_=200;
		//////
		fcdgs.wu[3].jiacheng=200;
		fcdgs.wu[3].max_shuliang=1;
		fcdgs.wu[3].zuan_=250;
		//////
	//////
	srct.m="私人餐厅";
	srct.money_one=4200;
	srct.open=0;
	srct.speak_one_jia=205;
		//////
		srct.wu[0].jiacheng=35;
		srct.wu[0].max_shuliang=4;
		srct.wu[0].shuliang=1;
		srct.wu[0].zuan_=205;
		//////
		srct.wu[1].jiacheng=175;
		srct.wu[1].max_shuliang=2;
		srct.wu[1].zuan_=250;
		//////
		srct.wu[2].jiacheng=240;
		srct.wu[2].max_shuliang=2;
		srct.wu[2].zuan_=275;
		//////
		srct.wu[3].jiacheng=275;
		srct.wu[3].max_shuliang=1;
		srct.wu[3].zuan_=300;
		//////
	//////
	srjd.m="私人酒店";
	srjd.money_one=4750;
	srjd.open=0;
	srjd.speak_one_jia=250;
		//////
		srjd.wu[0].jiacheng=50;
		srjd.wu[0].max_shuliang=4;
		srjd.wu[0].shuliang=1;
		srjd.wu[0].zuan_=250;
		//////
		srjd.wu[1].jiacheng=200;
		srjd.wu[1].max_shuliang=2;
		srjd.wu[1].zuan_=275;
		//////
		srjd.wu[2].jiacheng=250;
		srjd.wu[2].max_shuliang=2;
		srjd.wu[2].zuan_=300;
		//////
		srjd.wu[3].jiacheng=275;
		srjd.wu[3].max_shuliang=1;
		srjd.wu[3].zuan_=350;
		//////
	//////
	kyzx.m="科研中心";
	kyzx.money_one=5000;
	kyzx.open=0;
	kyzx.speak_one_jia=275;
		//////
		kyzx.wu[0].jiacheng=75;
		kyzx.wu[0].max_shuliang=4;
		kyzx.wu[0].shuliang=1;
		kyzx.wu[0].zuan_=275;
		//////
		kyzx.wu[1].jiacheng=250;
		kyzx.wu[1].max_shuliang=2;
		kyzx.wu[1].zuan_=300;
		//////
		kyzx.wu[2].jiacheng=275;
		kyzx.wu[2].max_shuliang=2;
		kyzx.wu[2].zuan_=350;
		//////
		kyzx.wu[3].jiacheng=300;
		kyzx.wu[3].max_shuliang=1;
		kyzx.wu[3].zuan_=375;
		//////
	//////
}
void kaitou(){
	chucun_dian();
	waitput("欢迎来到商道打怪游戏1.0版！\n\n请输入你的名字，我将会给你100000金币和1000钻石。\n\n");
	cin>>player.name;
	waitput("好的，");
	cout<<player.name<<"\n\n\n";
	Sleep(1000);
}
void fire(){
	ull li;
	battle=1;
	cout<<guai.mz;
	printf("扑了过来！\n\n\n");
	puts("=============================================================================");
	printf("要怎么办？\n\n\n	1：攻击，2：使用道具，3：查看状态，4：逃跑\n\n\n");
	cin>>choose_number;
	switch(choose_number){
		case 1 : {
			cout<<player.name;
			printf("攻击！ ");
			cout<<guai.mz;
			li=player.gong+rando(player.gong)-guai.fh/2-1;
			if(li<0) li=0;
			printf("血量减少%d\n",li);
			guai.sm-=li;
			if(rando(10)<6&&guai.sm>0){
				cout<<guai.mz;
				printf("反击！ ");
				cout<<player.name;
				li=guai.jg+rando(guai.jg)-player.fang/2-1;
				printf("血量减少%d\n",li);
				player.life-=li;
			}
			break;
		}
		case 2 : {
			wp();
			break;
		}
		case 3 : {
			chakan();
			break;
		}
		case 4 : {
			if(rando(10)<6){
				cout<<player.name;
				printf("逃跑失败！！\n");
			}
			else{
				cout<<player.name;
				printf("逃跑了~\n");
			}
			break;
		}
		default : {
			printf("输入错误，请重新输入\n\n\n");
			break;
		}
	}
	if(guai.sm<=0){
		cout<<player.name;
		printf("胜利！获得金币%d\n",guai.jb);
		if(rando(10)%2==0){
			printf("从敌人尸骸中发现");
			cout<<guai.wupin;
			if(guai.wupin=="铜梓衣") fang2++;
			if(guai.wupin=="银甲衣") fang3++;
			if(guai.wupin=="金刚石锁子甲") fang4++;
			if(guai.wupin=="干草叉") gong2++;
			if(guai.wupin=="40米长刀") gong3++;
			if(guai.wupin=="黄金断链剑") gong4++;
			if(guai.wupin=="巨人蓝铁晶石") jrltjs++;
			if(guai.wupin=="修炼秘籍") xlmj++;
		}
		unsigned int jy=player.jing+guai.j;
		int n=0;
		while(jy>=player.max_jing){
			n++;
			jy-=player.max_jing;
			player.max_jing+=50;
		}
		player.deng+=n;
		player.jing=jy;
		if(n>0){
			if(n>1){
				printf("哇！连升%d级！\n",n);
			}
			else{
				cout<<player.name;
				printf("升级\n");
			}
			printf("攻击力+%lld，防御力+%lld，生命上限+%lld\n\n\n",n*8,n*9,n*7);
			player.gong+=n*8;
			player.fang+=n*9;
			player.max_life+=n*7;
			player.life=player.max_life;
		}
	}
	if(player.life<=0){
		cout<<player.name;
		printf("战败，掉落金币");
		unsigned int m=0;
		m=3000+rando(1000);
		cout<<m<<"\n\n\n";
		player.money-=m;
	}
}
void mao(){
	printf("要去哪个区？\n\n\n    1：森林区，2：草原区\n\n\n");
	cin>>choose_number;
	if(choose_number==0||choose_number>2){
		return;
	}
	printf("要去哪个地区？\n\n\n    1：一区，2：二区，0：退出\n\n\n");
	int d=-1;
	cin>>d;
	int s=rando(10);
	switch(choose_number){
		case 1 : {
			switch(d){
				case 1 : {
					if(s<5) guai=xy;
					else if(s<8) guai=nw; 
						else {
							printf("这里安全。\n\n\n");
							break;
						}
					fire();
					break;
				}
				case 2 : {
					if(s<6) guai=jr;
					else if(s<8) guai=jrw; 
						else{
							printf("这里安全。\n\n\n");
							break;
						}
					fire();
					break;
				}
				default : {break;}
			}
			break;
		}
		case 2 : {
			switch(d){
				case 1 : {
					if(s<5) guai=hf;
					else if(s<8) guai=ym;
						else{
							printf("这里安全。\n\n\n");
							break;
						}
					fire();
					break;
				}
				case 2 : {
					if(s<6) guai=xs;
					else if(s<8) guai=st;
						else{
							printf("这里安全。\n\n\n");
							break;
						}
					fire();
					break;
				}
				default : {break;}
			}
			break;
		}
		default : {break;}
	}
}
void _dian_(){
	switch(choose){
		case 1 : mzd=player.dian_;
		break;
		case 2 : fcdgs=player.dian_;
		break;
		case 3 : {
			srct=player.dian_;
			break;
		}
		case 4 : {
			srjd=player.dian_;
			break;
		}
		case 5 : {
			kyzx=player.dian_;
			break;
		}
	}
	player.place_=true;
	printf("1：包子店，2：房产地公司，3：私人餐厅，4：私人酒店，5：科研中心\n\n\n");
	cin>>choose_number;
	switch(choose_number){
		case 1 : {
			player.dian_=mzd;
			break;
		}
		case 2 : {
			if(!fcdgs.open){
				if(mzd.five>=7){
					printf("是否要购买此店？   价钱：125钻石（Y,y/N,n）\n");
					char ch;
					cin>>ch;
					if(ch=='y'||ch=='Y'){
						player.zuan-=125; 
						printf("正在装修中......\n");
						Sleep(2500);
						printf("装修完毕！赠送100钻石！\n\n\n");
						player.zuan+=100;
						fcdgs.open=true;
						player.dian_=fcdgs;
					}
				}
				else{
					printf("您还没达到任务（前一店员工有%lld个/7个）~~\n\n\n",mzd.five);
				}
			}
			else player.dian_=fcdgs;
			break;
		}
		case 3 : {
			if(!srct.open){
				if(fcdgs.five==8){
					printf("是否要购买此店？   价钱：150钻石（Y,y/N,n）\n");
					char ch;
					cin>>ch;
					if(ch=='y'||ch=='Y'){
						player.zuan-=150; 
						printf("正在装修中......\n");
						Sleep(2500);
						printf("装修完毕！赠送125钻石！\n\n\n");
						player.zuan+=125;
						srct.open=true;
						player.dian_=srct;
					}
				}
				else{
					printf("您还没达到任务（前一店员工有%lld个/8个）~~\n\n\n",fcdgs.five);
				}
			}
			else player.dian_=srct;
			break;
		}
		case 4 : {
			if(!srjd.open){
				if(srct.five==9){
					printf("是否要购买此店？   价钱：175钻石（Y,y/N,n）\n");
					char ch;
					cin>>ch;
					if(ch=='y'||ch=='Y'){
						player.zuan-=175; 
						printf("正在装修中......\n");
						Sleep(2500);
						printf("装修完毕！赠送150钻石！\n\n\n");
						player.zuan+=150;
						srjd.open=true;
						player.dian_=srjd;
					}
				}
				else{
					printf("您还没达到任务（前一店员工有%lld个/9个）~~\n\n\n",srct.five);
				}
			}
			else player.dian_=srjd;
			break;
		}
		case 5 : {
			if(!kyzx.open){
				if(srjd.five==10){
					printf("是否要购买此店？   价钱：200钻石（Y,y/N,n）\n");
					char ch;
					cin>>ch;
					if(ch=='y'||ch=='Y'){
						player.zuan-=200; 
						printf("正在装修中......\n");
						Sleep(2500);
						printf("装修完毕！赠送200钻石！\n\n\n");
						player.zuan+=200;
						kyzx.open=true;
						player.dian_=kyzx;
					}
				}
				else{
					printf("您还没达到任务（前一店员工有%lld个/10个）~~\n\n\n",srjd.five);
				}
			}
			else player.dian_=kyzx;
			break;
		}
		default : {break;}
	}
	start=clock();
	choose=choose_number;
}
void move_(){
	printf("要去哪?\n\n\n    0：Happy旅店，1：森林商店，2：红玉拍卖会，3，冒险区，4：店铺\n\n\n");
	cin>>choose_number;
	switch(choose_number){
		case 0 : {
			player.place_=false;
			printf("要买房吗？200金币一间\n  1：要，2：不要\n\n\n");
			cin>>choose_number;
			switch(choose_number){
				case 1 : {
					printf("好好休息\nHP满\n第二天了\n\n");
					player.life=player.max_life;
					break;
				}
			}
			break;
		}
		case 1 : {
			player.place_=false;
			printf("请问要买什么？\n\n\n   1：攻击武器，2：防御护甲，3：一次性攻击使用物品，4：一次性治疗使用物品\n\n\n");
			int c;
			cin>>c; 
			switch(c){
				case 1 : {
					printf("1：匕首 150金币，2：干草叉 250金币，3：40米长刀 100钻石\n\n\n");
					int d;
					cin>>d;
					switch(d){
						case 1 : {
							if(150>player.money){
								printf("Sorry，你的钱不够~\n");
							}
							else{
								gong1++;
								player.money-=150;
								printf("购买成功！\n");
							}
							break;
						}
						case 2 : {
							if(250>player.money){
								printf("Sorry，你的钱不够~\n");
							}
							else{
								gong2++;
								player.money-=250;
								printf("购买成功！");
							}
							break;
						}
						case 3 : {
							if(100>player.zuan){
								printf("Sorry，你的钱不够~\n");
							}
							else{
								gong3++;
								player.zuan-=100;
								printf("购买成功！\n");
							}
							break;
						}
						default : {
							printf("对不起，我们只出售以上武器\n\n");
							break;
						}
					}
					break;
				}
				case 2 : {
					printf("1：布衣 175金币，2：铜梓衣 275金币，3：银甲衣 125钻石\n\n\n");
					int d;
					cin>>d;
					switch(d){
						case 1 : {
							if(175>player.money){
								printf("Sorry，你的钱不够~\n");
							}
							else{
								fang1++;
								player.money-=175;
								printf("购买成功！\n");
							}
							break;
						}
						case 2 : {
							if(275>player.money){
								printf("Sorry，你的钱不够~\n");
							}
							else{
								fang2++;
								player.money-=275;
								printf("购买成功！\n");
							}
							break;
						}
						case 3 : {
							if(125>player.zuan){
								printf("Sorry，你的钱不够~\n");
							}
							else{
								fang3++;
								player.zuan-=125;
								printf("购买成功！"); 
							}
							break;
						}
						default : {
							printf("对不起，我们只出售以上护甲。\n\n");
							break;
						}
					} 
					break;
				}
				case 3 : {
					printf("1：手抛导弹（两个） 225金币，2：手抛原子核弹（两个） 175钻石\n\n\n");
					int d;
					cin>>d;
					switch(d){
						case 1 : {
							if(225>player.money){
								printf("Sorry，你的钱不够~\n");
							}
							else{
								spdd+=2;
								player.money-=225;
								printf("购买成功！\n");
							}
							break;
						}
						case 2 : {
							if(175>player.zuan){
								printf("Sorry，你的钱不够~\n");
							}
							else{
								spyzhd+=2;
								player.zuan-=175;
								printf("购买成功！\n");
							}
							break;
						}
						default : {
							printf("对不起，我们只出售以上攻击物品\\n");
							break;
						}
					}
					break;
				}
				case 4 : {
					printf("1：特殊中药（两个） 200金币，2：生命大药水（两个） 150钻石\n\n\n");
					int d;
					cin>>d;
					switch(d){
						case 1 : {
							if(200>player.money){
								printf("Sorry，你的钱不够~\n");
							}
							else{
								tszy+=2;
								player.money-=200;
								printf("购买成功！\n");
							}
							break;
						}
						case 2 : {
							if(150>player.zuan){
								printf("Sorry，你的钱不够~\n");
							}
							else{
								smdys+=2;
								player.zuan-=150;
								printf("购买成功！\n");
							}
							break;
						}
						default : {
							printf("对不起，我们只出售以上治疗物品\n");
							break;
						}
					}
					break;
				}
			}
			break;
		}
		case 2 : {
			player.place_=false;
			int money_=-1,zuan_=-1,shu_=-1;
			printf("请问要拍卖什么？\n   1：攻击武器，2：防御护甲\n\n\n");
			cin>>choose_number;
			switch(choose_number){
				case 1 : {
					printf("1：匕首  底价：125金币，2：干草叉  底价：200金币，3：40米长刀  底价：75钻石,4：黄金断链剑  底价：125钻石\n\n\n");
					int d;
					cin>>d;
					switch(d){
						case 1 : {
							money_=125+rando(50); 
							printf("请输入数量：（总数量：%d）",gong1);
							cin>>shu_;
							if(shu_>gong1){
								printf("Sorry，你的数量不够~\n");
							}
							if(player.money+money_<=player.max) player.money+=money_;
							gong1-=shu_;
							break;
						}
						case 2 : {
							money_=200+rando(75);
							printf("请输入数量：（总数量：%d）",gong2);
							cin>>shu_;
							if(shu_>gong2){
								printf("Sorry，你的数量不够~\n");
							}
							if(player.money+money_<=player.max) player.money+=money_;
							gong2-=shu_;
							break;
						}
						case 3 : {
							zuan_=75+rando(50);
							printf("请输入数量：（总数量：%d）",gong3);
							cin>>shu_;
							if(shu_>gong3){
								printf("Sorry，你的数量不够~\n");
							}
							if(player.zuan+zuan_<=player.max) player.zuan+=zuan_;
							gong3-=shu_;
							break;
						}
						case 4 : {
							zuan_=125+rando(100);
							printf("请输入数量：（总数量：%d）",gong4);
							cin>>shu_;
							if(shu_>gong4){
								printf("Sorry，你的数量不够~\n");
							}
							if(player.zuan+zuan_<=player.max) player.zuan+=zuan_;
							gong4-=shu_;
							break;
						}
						default : {break;}
					}
					break;
				}
				case 2 : {
					printf("1：布衣  底价：150金币，2：铜梓衣  底价：250金币，3：银甲衣  底价：100钻石，4：金刚石锁子甲  底价：150钻石\n\n\n");
					cin>>choose_number;
					switch(choose_number){
						case 1 : {
							money_=150+rando(75);
							printf("请输入数量（总数量：%d）",fang1);
							cin>>shu_;
							if(shu_>fang1){
								printf("Sorry，你的数量不够~\n");
							}
							if(player.money+money_<=player.max) player.money+=money_;
							fang1-=shu_;
							break;
						}
						case 2 : {
							money_=250+rando(100);
							printf("请输入数量（总数量：%d）",fang2);
							cin>>shu_;
							if(shu_>fang2){
								printf("Sorry，你的数量不够~\n");
							}
							if(player.money+money_<=player.max) player.money+=money_;
							fang2-=shu_;
							break;
						}
						case 3 : {
							zuan_=100+rando(50);
							printf("请输入数量（总数量：%d）",fang3);
							cin>>shu_;
							if(shu_>fang3){
								printf("Sorry，你的数量不够~\n");
							}
							if(player.zuan+zuan_<=player.max) player.zuan+=zuan_;
							fang3-=shu_;
							break;
						}
						case 4 : {
							zuan_=150+rando(75);
							printf("请输入数量（总数量：%d）",fang4);
							cin>>shu_;
							if(shu_>fang4){
								printf("Sorry，你的数量不够~\n");
							}
							if(player.zuan+zuan_<=player.max) player.zuan+=zuan_;
							fang4-=shu_;
							break;
						}
					}
					break;
				}
			}
			printf("拍卖成功！拍卖单价：%d",max(money_,zuan_));
			break;
		}
		case 3 : {
			player.place_=false;
			mao();
			break;
		}
		case 4 : {
			_dian_();
			break;
		}
		default : {break;}
	}
}
void ck_dian(){
	cout<<player.dian_.m<<'\n';
	printf("员工：%lld\n",player.dian_.five);
	printf("赚钱速度：%lld\n\n\n",player.dian_.speak_);
}
void buy_zx(){
	printf("1：\n速度加成：%lld，数量：%lld/%lld，价钱：%lld钻石\n",player.dian_.wu[0].jiacheng,player.dian_.wu[0].shuliang,player.dian_.wu[0].max_shuliang,player.dian_.wu[0].zuan_);
	printf("2：\n速度加成：%lld，数量：%lld/%lld，价钱：%lld钻石\n",player.dian_.wu[1].jiacheng,player.dian_.wu[1].shuliang,player.dian_.wu[1].max_shuliang,player.dian_.wu[1].zuan_);
	printf("3：\n速度加成：%lld，数量：%lld/%lld，价钱：%lld钻石\n",player.dian_.wu[2].jiacheng,player.dian_.wu[2].shuliang,player.dian_.wu[2].max_shuliang,player.dian_.wu[2].zuan_);
	printf("4：\n速度加成：%lld，数量：%lld/%lld，价钱：%lld钻石\n",player.dian_.wu[3].jiacheng,player.dian_.wu[3].shuliang,player.dian_.wu[3].max_shuliang,player.dian_.wu[3].zuan_);
	printf("0：退出\n\n\n");
	cin>>choose_number;
	switch(choose_number){
		case 1 : {
			if(player.dian_.wu[0].shuliang+1>player.dian_.wu[0].max_shuliang){
				printf("数量超限~\n\n\n");
				break;
			}
			player.dian_.wu[0].shuliang++;
			player.dian_.speak_+=player.dian_.wu[0].jiacheng;
			player.zuan-=player.dian_.wu[0].zuan_;
			printf("购买成功！\n\n\n");
			break;
		}
		case 2 : {
			if(player.dian_.wu[1].shuliang+1>player.dian_.wu[1].max_shuliang){
				printf("数量超限~\n\n\n");
				break;
			}
			player.dian_.wu[1].shuliang++;
			player.dian_.speak_+=player.dian_.wu[1].jiacheng;
			player.zuan-=player.dian_.wu[1].zuan_;
			printf("购买成功！\n\n\n");
			break;
		} 
		case 3 : {
			if(player.dian_.wu[2].shuliang+1>player.dian_.wu[2].max_shuliang){
				printf("数量超限~\n\n\n");
				break;
			}
			player.dian_.wu[2].shuliang++;
			player.dian_.speak_+=player.dian_.wu[2].jiacheng;
			player.zuan-=player.dian_.wu[2].zuan_;
			printf("购买成功！\n\n\n");
			break;
		}
		case 4 : {
			if(player.dian_.wu[3].shuliang+1>player.dian_.wu[3].max_shuliang){
				printf("数量超限~\n\n\n");
				break;
			}
			player.dian_.wu[3].shuliang++;
			player.dian_.speak_+=player.dian_.wu[3].jiacheng;
			player.zuan-=player.dian_.wu[3].zuan_;
			printf("购买成功！\n\n\n");
			break;
		}
		default : {break;} 
	}
}
void PLAYER(){
	while(1){
		printf("\n");
		puts("=============================================================================");
		printf("要做什么？\n\n\n    1：移动，2：查看状态，3：查看道具，4：查看装备，5：查看店铺，6：购买装饰，7：取钱，8：购买员工，0：退出\n\n\n");
		puts("=============================================================================");
		cin>>choose_number;
		switch(choose_number){
			case 1 : {
				move_();
				break;
			}
			case 2 : {
				chakan();
				break;
			}
			case 3 : {
				wp();
				break;
			}
			case 4 : {
				zhuangbei();
				break;
			}
			case 5 : {
				if(!player.place_){
					printf("现在不在店铺中，不能查看店铺。\n\n\n");
					break;
				}
				else{
					ck_dian();
				}
				break;
			} 
			case 6 : {
				if(!player.place_){
					printf("现在不在店铺中，不能购买装饰。\n\n\n");
					break;
				}
				else{
					buy_zx();
				}
				break;
			}
			case 7 : {
				if(!player.place_){
					printf("现在不在店铺中，不能取钱。\n\n\n");
					break;
				}
					else{
						end=clock();
						unsigned int t=(end-start)/CLOCKS_PER_SEC/1;
						player.money+=t*player.dian_.speak_/3/1;
						printf("取钱成功！您已取款：%lld",t*player.dian_.speak_/3/1);
						start=clock();
				}
				break;
			}
			case 8 : {
				if(!player.place_){
					printf("现在不在店铺中，不能购买员工。\n\n\n");
					break;
				}
				printf("是否要购买一个员工？（Y,y/N,n）  单价：%lld金币\n\n\n",player.dian_.money_one);
				char ch;
				cin>>ch;
				if(ch=='Y'||ch=='y'){
					player.dian_.five++;
					player.money-=player.dian_.money_one;
					player.dian_.speak_+=player.dian_.speak_one_jia;
					printf("购买成功！");
				}
				break;
			} 
			case 0 : {
				printf("是否退出游戏？（Y,y/N,n）");
				char ch;
				cin>>ch;
				if(ch=='y'||ch=='Y') exit(0); 
				break;
			}
			default : {break;}
		}
	}
}
int main(){
	kaitou();
	PLAYER();
}
/*
注意：如果在运行PLAYER函数时只能输入数字，否则会出现毁灭性损失。 
*/
