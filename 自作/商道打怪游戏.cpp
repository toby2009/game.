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
}player={"����",80,80,100,100,"��","��",1,0,100,100000,1000,9223372036854775807,0,0};
struct monster{
	string mz;
	string wupin; 
	ull jg;
	ull fh;
	ull sm;
	ull max_sm;
	ull jb;
	ull j;
}jr={"ɭ�־��˹�","���ʯ���Ӽ�",120,150,220,220,150,75},
nw={"ħ��Ů��","������",50,70,85,85,60,30},
xy={"�ޱ�����","ͭ����",25,35,42,42,30,15},
jrw={"ɭ�־��˹���","����������ʯ",850,1000,1320,1320,1000,500},
xs={"�׶���ʨ","�ƽ������",130,160,230,230,160,80},
ym={"��Ұ��","40�׳���",70,80,90,90,80,40},
hf={"���̻Ʒ�","�ɲݲ�",50,55,65,65,60,30},
st={"����ʹͽ","�����ؼ�",900,1050,1400,1400,1100,550},
guai; 
long long gong1=1,gong2=0,gong3=0,gong4=0;//ذ�ף��ɲݲ棬40�׳��� ���ƽ������ 
int gong1n=15,gong2n=55,gong3n=70,gong4n=100;
long long fang1=1,fang2=0,fang3=0,fang4=0;//���£�ͭ���£������£����ʯ���Ӽ�
int fang1n=20,fang2n=60,fang3n=70,fang4n=95;
int wkcy=5,yyjjb=4,ynby=3,tszy=2,smdys=1;//��Ʋ�ҩ��ҽ�ü��Ȱ������ϰ�ҩ��������ҩ��������ҩˮ
int wkcyn=50,yyjjbn=75,ynbyn=120,tszyn=175,smdysn=200;
int sld=5,jdfb=4,spgnzd=3,spdd=2,spyzhd=1;//���񵯣��綾���ڣ����׸���ը�������׵���������ԭ�Ӻ˵�
int sldn=60,jdfbn=80,spgnzdn=125,spddn=175,spyzhdn=210;
int jrltjs,xlmj;//����������ʯ�������ؼ�
int xlmjg=90,xlmjf=85,xlmjs=100;
int choose_number,choose;
bool battle;
long double start,end;
string str[10]={"\0","ذ��","�ɲݲ�","40�׳���","�ƽ������","����","ͭ����","������","���ʯ���Ӽ�"};
unsigned int rando(unsigned int x){
	srand((unsigned)time(NULL));
	return random(x)+1;
}
void wp(){
	printf("1����Ʋ�ҩ��%d��\n",wkcy);
	printf("2��ҽ�ü��Ȱ���%d��\n",yyjjb);
	printf("3�����ϰ�ҩ��%d��\n",ynby);
	printf("4��������ҩ��%d��\n",tszy);
	printf("5��������ҩˮ��%d��\n",smdys);
	printf("6�����񵯣�%d��\n",sld);
	printf("7���綾���ڣ�%d��\n",jdfb);
	printf("8�����׸���ը����%d��\n",spgnzd);
	printf("9�����׵�����%d��\n",spdd);
	printf("10������ԭ�Ӻ˵���%d��\n",spyzhd);
	printf("11������������ʯ��%d��\n",jrltjs);
	printf("12�������ؼ���%d��\n",xlmj); 
	printf("0���˳�\n\n\n");
	cin>>choose_number;
	switch(choose_number){
		case 1 : {
			if(wkcy<=0){
				printf("Sorry�������������~\n");
				break;
			}
			printf("ʹ����Ʋ�ҩ����������%d",wkcyn);
			player.life+=wkcyn;
			wkcy--;
			break;
		}
		case 2 : {
			if(yyjjb<=0){
				printf("Sorry�������������~\n");
				break;
			}
			printf("ʹ��ҽ�ü��Ȱ�����������%d",yyjjbn);
			player.life+=yyjjbn;
			yyjjb--;
			break;
		}
		case 3 : {
			if(ynby<=0){
				printf("Sorry�������������~\n");
				break;
			}
			printf("ʹ�����ϰ�ҩ����������%d",ynbyn);
			player.life+=ynbyn;
			ynby--;
			break;
		}
		case 4 : {
			if(tszy<=0){
				printf("Sorry�������������~\n");
				break;
			}
			printf("ʹ��������ҩ����������%d",tszyn);
			player.life+=tszyn;
			tszy--;
			break;
		}
		case 5 : {
			if(smdys<=0){
				printf("Sorry�������������~\n");
				break;
			} 
			printf("ʹ��������ҩˮ����������%d",smdysn);
			player.life+=smdysn;
			smdys--;
			break;
		}
		case 6 : {
			if(!battle){
				printf("��սʱ����ʹ�á�\n");
				break;
			}
			if(sld<=0){
				printf("Sorry�������������~\n");
				break;
			}
			printf("ʹ�����񵯣�������������%d",sldn);
			guai.sm-=sldn;
			sld--;
			break;
		}
		case 7 : {
			if(!battle){
				printf("��սʱ����ʹ�á�\n");
				break;
			}
			if(jdfb<=0){
				printf("Sorry�������������~\n");
				break;
			}
			printf("ʹ�þ綾���ڣ�������������%d",jdfbn);
			guai.sm-=jdfbn;
			jdfb--;
			break;
		}
		case 8 : {
			if(!battle){
				printf("��սʱ����ʹ�á�\n");
				break;
			}
			if(spgnzd<=0){
				printf("Sorry�������������~\n");
				break;
			}
			printf("ʹ�����׸���ը����������������%d",spgnzdn);
			guai.sm-=spgnzdn;
			spgnzd--;
			break;
		}
		case 9 : {
			if(!battle){
				printf("��սʱ����ʹ�á�\n");
				break;
			}
			if(spdd<=0){
				printf("Sorry�������������~\n");
				break;
			}
			printf("ʹ�����׵�����������������%d",spddn);
			guai.sm-=spddn;
			spdd--;
			break;
		}
		case 10 : {
			if(!battle){
				printf("��սʱ����ʹ�á�\n");
				break;
			}
			if(spyzhd<=0){
				printf("Sorry�������������~\n");
				break;
			}
			printf("ʹ������ԭ�Ӻ˵���������������%d",spyzhdn);
			guai.sm-=spyzhdn;
			spyzhd--;
			break;
		}
		case 11 : {
			printf("����Ʒ����Ч���������ڴ���\n");
			break;
		}
		case 12 : {
			if(xlmj<=0){
				printf("Sorry�������������~\n");
				break;
			}
			printf("ʹ�������ؼ���������+%d��������+%d������+%d",xlmjg,xlmjf,xlmjs);
			xlmj--;
			break;
		}
		default : {break;}
	}
}
void chakan(){
	cout<<player.name<<'\n';
	printf("��������%lld+%lld=%lld	��������%lld+%lld=%lld	������%lld/%lld\n",player.gong,player.gongzn,player.gong+player.gongzn,player.fang,player.fangzn,player.fang+player.fangzn,player.life,player.max_life);
	printf("����������");
	cout<<player.gongz;
	printf("	�������ף�");
	cout<<player.fangz<<'\n';
	printf("�ȼ���%lld��	���飺%lld/%lld\n",player.deng,player.jing,player.max_jing);
  	printf("��ң�%lld/%lld		��ʯ��%lld/%lld\n",player.money,player.max,player.zuan,player.max);
  	printf("׬Ǯ�ٶȣ�%lld\n\n\n",player.dian_.speak_);
}
void zhuangbei(){
	printf("��������	1��ذ�ף�%lld��2���ɲݲ棺%lld��3��40�׳�����%lld��4���ƽ��������%lld\n",gong1,gong2,gong3,gong4);
	printf("��������	5�����£�%lld��6��ͭ���£�%lld��7�������£�%lld��8�����ʯ���Ӽף�%lld\n",fang1,fang2,fang3,fang4);
	printf("0���˳�\n\n\n");
	cin>>choose_number;
	if(0<choose_number&&choose_number<9){
		if(1<=choose_number&&choose_number<=4){
			printf("������");
			player.gongz=str[choose_number];
		}
		else{
			printf("������");
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
	mzd.m="���ӵ�";
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
	fcdgs.m="�����ع�˾";
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
	srct.m="˽�˲���";
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
	srjd.m="˽�˾Ƶ�";
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
	kyzx.m="��������";
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
	waitput("��ӭ�����̵������Ϸ1.0�棡\n\n������������֣��ҽ������100000��Һ�1000��ʯ��\n\n");
	cin>>player.name;
	waitput("�õģ�");
	cout<<player.name<<"\n\n\n";
	Sleep(1000);
}
void fire(){
	ull li;
	battle=1;
	cout<<guai.mz;
	printf("���˹�����\n\n\n");
	puts("=============================================================================");
	printf("Ҫ��ô�죿\n\n\n	1��������2��ʹ�õ��ߣ�3���鿴״̬��4������\n\n\n");
	cin>>choose_number;
	switch(choose_number){
		case 1 : {
			cout<<player.name;
			printf("������ ");
			cout<<guai.mz;
			li=player.gong+rando(player.gong)-guai.fh/2-1;
			if(li<0) li=0;
			printf("Ѫ������%d\n",li);
			guai.sm-=li;
			if(rando(10)<6&&guai.sm>0){
				cout<<guai.mz;
				printf("������ ");
				cout<<player.name;
				li=guai.jg+rando(guai.jg)-player.fang/2-1;
				printf("Ѫ������%d\n",li);
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
				printf("����ʧ�ܣ���\n");
			}
			else{
				cout<<player.name;
				printf("������~\n");
			}
			break;
		}
		default : {
			printf("�����������������\n\n\n");
			break;
		}
	}
	if(guai.sm<=0){
		cout<<player.name;
		printf("ʤ������ý��%d\n",guai.jb);
		if(rando(10)%2==0){
			printf("�ӵ���ʬ���з���");
			cout<<guai.wupin;
			if(guai.wupin=="ͭ����") fang2++;
			if(guai.wupin=="������") fang3++;
			if(guai.wupin=="���ʯ���Ӽ�") fang4++;
			if(guai.wupin=="�ɲݲ�") gong2++;
			if(guai.wupin=="40�׳���") gong3++;
			if(guai.wupin=="�ƽ������") gong4++;
			if(guai.wupin=="����������ʯ") jrltjs++;
			if(guai.wupin=="�����ؼ�") xlmj++;
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
				printf("�ۣ�����%d����\n",n);
			}
			else{
				cout<<player.name;
				printf("����\n");
			}
			printf("������+%lld��������+%lld����������+%lld\n\n\n",n*8,n*9,n*7);
			player.gong+=n*8;
			player.fang+=n*9;
			player.max_life+=n*7;
			player.life=player.max_life;
		}
	}
	if(player.life<=0){
		cout<<player.name;
		printf("ս�ܣ�������");
		unsigned int m=0;
		m=3000+rando(1000);
		cout<<m<<"\n\n\n";
		player.money-=m;
	}
}
void mao(){
	printf("Ҫȥ�ĸ�����\n\n\n    1��ɭ������2����ԭ��\n\n\n");
	cin>>choose_number;
	if(choose_number==0||choose_number>2){
		return;
	}
	printf("Ҫȥ�ĸ�������\n\n\n    1��һ����2��������0���˳�\n\n\n");
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
							printf("���ﰲȫ��\n\n\n");
							break;
						}
					fire();
					break;
				}
				case 2 : {
					if(s<6) guai=jr;
					else if(s<8) guai=jrw; 
						else{
							printf("���ﰲȫ��\n\n\n");
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
							printf("���ﰲȫ��\n\n\n");
							break;
						}
					fire();
					break;
				}
				case 2 : {
					if(s<6) guai=xs;
					else if(s<8) guai=st;
						else{
							printf("���ﰲȫ��\n\n\n");
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
	printf("1�����ӵ꣬2�������ع�˾��3��˽�˲�����4��˽�˾Ƶ꣬5����������\n\n\n");
	cin>>choose_number;
	switch(choose_number){
		case 1 : {
			player.dian_=mzd;
			break;
		}
		case 2 : {
			if(!fcdgs.open){
				if(mzd.five>=7){
					printf("�Ƿ�Ҫ����˵ꣿ   ��Ǯ��125��ʯ��Y,y/N,n��\n");
					char ch;
					cin>>ch;
					if(ch=='y'||ch=='Y'){
						player.zuan-=125; 
						printf("����װ����......\n");
						Sleep(2500);
						printf("װ����ϣ�����100��ʯ��\n\n\n");
						player.zuan+=100;
						fcdgs.open=true;
						player.dian_=fcdgs;
					}
				}
				else{
					printf("����û�ﵽ����ǰһ��Ա����%lld��/7����~~\n\n\n",mzd.five);
				}
			}
			else player.dian_=fcdgs;
			break;
		}
		case 3 : {
			if(!srct.open){
				if(fcdgs.five==8){
					printf("�Ƿ�Ҫ����˵ꣿ   ��Ǯ��150��ʯ��Y,y/N,n��\n");
					char ch;
					cin>>ch;
					if(ch=='y'||ch=='Y'){
						player.zuan-=150; 
						printf("����װ����......\n");
						Sleep(2500);
						printf("װ����ϣ�����125��ʯ��\n\n\n");
						player.zuan+=125;
						srct.open=true;
						player.dian_=srct;
					}
				}
				else{
					printf("����û�ﵽ����ǰһ��Ա����%lld��/8����~~\n\n\n",fcdgs.five);
				}
			}
			else player.dian_=srct;
			break;
		}
		case 4 : {
			if(!srjd.open){
				if(srct.five==9){
					printf("�Ƿ�Ҫ����˵ꣿ   ��Ǯ��175��ʯ��Y,y/N,n��\n");
					char ch;
					cin>>ch;
					if(ch=='y'||ch=='Y'){
						player.zuan-=175; 
						printf("����װ����......\n");
						Sleep(2500);
						printf("װ����ϣ�����150��ʯ��\n\n\n");
						player.zuan+=150;
						srjd.open=true;
						player.dian_=srjd;
					}
				}
				else{
					printf("����û�ﵽ����ǰһ��Ա����%lld��/9����~~\n\n\n",srct.five);
				}
			}
			else player.dian_=srjd;
			break;
		}
		case 5 : {
			if(!kyzx.open){
				if(srjd.five==10){
					printf("�Ƿ�Ҫ����˵ꣿ   ��Ǯ��200��ʯ��Y,y/N,n��\n");
					char ch;
					cin>>ch;
					if(ch=='y'||ch=='Y'){
						player.zuan-=200; 
						printf("����װ����......\n");
						Sleep(2500);
						printf("װ����ϣ�����200��ʯ��\n\n\n");
						player.zuan+=200;
						kyzx.open=true;
						player.dian_=kyzx;
					}
				}
				else{
					printf("����û�ﵽ����ǰһ��Ա����%lld��/10����~~\n\n\n",srjd.five);
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
	printf("Ҫȥ��?\n\n\n    0��Happy�õ꣬1��ɭ���̵꣬2�����������ᣬ3��ð������4������\n\n\n");
	cin>>choose_number;
	switch(choose_number){
		case 0 : {
			player.place_=false;
			printf("Ҫ����200���һ��\n  1��Ҫ��2����Ҫ\n\n\n");
			cin>>choose_number;
			switch(choose_number){
				case 1 : {
					printf("�ú���Ϣ\nHP��\n�ڶ�����\n\n");
					player.life=player.max_life;
					break;
				}
			}
			break;
		}
		case 1 : {
			player.place_=false;
			printf("����Ҫ��ʲô��\n\n\n   1������������2���������ף�3��һ���Թ���ʹ����Ʒ��4��һ��������ʹ����Ʒ\n\n\n");
			int c;
			cin>>c; 
			switch(c){
				case 1 : {
					printf("1��ذ�� 150��ң�2���ɲݲ� 250��ң�3��40�׳��� 100��ʯ\n\n\n");
					int d;
					cin>>d;
					switch(d){
						case 1 : {
							if(150>player.money){
								printf("Sorry�����Ǯ����~\n");
							}
							else{
								gong1++;
								player.money-=150;
								printf("����ɹ���\n");
							}
							break;
						}
						case 2 : {
							if(250>player.money){
								printf("Sorry�����Ǯ����~\n");
							}
							else{
								gong2++;
								player.money-=250;
								printf("����ɹ���");
							}
							break;
						}
						case 3 : {
							if(100>player.zuan){
								printf("Sorry�����Ǯ����~\n");
							}
							else{
								gong3++;
								player.zuan-=100;
								printf("����ɹ���\n");
							}
							break;
						}
						default : {
							printf("�Բ�������ֻ������������\n\n");
							break;
						}
					}
					break;
				}
				case 2 : {
					printf("1������ 175��ң�2��ͭ���� 275��ң�3�������� 125��ʯ\n\n\n");
					int d;
					cin>>d;
					switch(d){
						case 1 : {
							if(175>player.money){
								printf("Sorry�����Ǯ����~\n");
							}
							else{
								fang1++;
								player.money-=175;
								printf("����ɹ���\n");
							}
							break;
						}
						case 2 : {
							if(275>player.money){
								printf("Sorry�����Ǯ����~\n");
							}
							else{
								fang2++;
								player.money-=275;
								printf("����ɹ���\n");
							}
							break;
						}
						case 3 : {
							if(125>player.zuan){
								printf("Sorry�����Ǯ����~\n");
							}
							else{
								fang3++;
								player.zuan-=125;
								printf("����ɹ���"); 
							}
							break;
						}
						default : {
							printf("�Բ�������ֻ�������ϻ��ס�\n\n");
							break;
						}
					} 
					break;
				}
				case 3 : {
					printf("1�����׵����������� 225��ң�2������ԭ�Ӻ˵��������� 175��ʯ\n\n\n");
					int d;
					cin>>d;
					switch(d){
						case 1 : {
							if(225>player.money){
								printf("Sorry�����Ǯ����~\n");
							}
							else{
								spdd+=2;
								player.money-=225;
								printf("����ɹ���\n");
							}
							break;
						}
						case 2 : {
							if(175>player.zuan){
								printf("Sorry�����Ǯ����~\n");
							}
							else{
								spyzhd+=2;
								player.zuan-=175;
								printf("����ɹ���\n");
							}
							break;
						}
						default : {
							printf("�Բ�������ֻ�������Ϲ�����Ʒ\\n");
							break;
						}
					}
					break;
				}
				case 4 : {
					printf("1��������ҩ�������� 200��ң�2��������ҩˮ�������� 150��ʯ\n\n\n");
					int d;
					cin>>d;
					switch(d){
						case 1 : {
							if(200>player.money){
								printf("Sorry�����Ǯ����~\n");
							}
							else{
								tszy+=2;
								player.money-=200;
								printf("����ɹ���\n");
							}
							break;
						}
						case 2 : {
							if(150>player.zuan){
								printf("Sorry�����Ǯ����~\n");
							}
							else{
								smdys+=2;
								player.zuan-=150;
								printf("����ɹ���\n");
							}
							break;
						}
						default : {
							printf("�Բ�������ֻ��������������Ʒ\n");
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
			printf("����Ҫ����ʲô��\n   1������������2����������\n\n\n");
			cin>>choose_number;
			switch(choose_number){
				case 1 : {
					printf("1��ذ��  �׼ۣ�125��ң�2���ɲݲ�  �׼ۣ�200��ң�3��40�׳���  �׼ۣ�75��ʯ,4���ƽ������  �׼ۣ�125��ʯ\n\n\n");
					int d;
					cin>>d;
					switch(d){
						case 1 : {
							money_=125+rando(50); 
							printf("����������������������%d��",gong1);
							cin>>shu_;
							if(shu_>gong1){
								printf("Sorry�������������~\n");
							}
							if(player.money+money_<=player.max) player.money+=money_;
							gong1-=shu_;
							break;
						}
						case 2 : {
							money_=200+rando(75);
							printf("����������������������%d��",gong2);
							cin>>shu_;
							if(shu_>gong2){
								printf("Sorry�������������~\n");
							}
							if(player.money+money_<=player.max) player.money+=money_;
							gong2-=shu_;
							break;
						}
						case 3 : {
							zuan_=75+rando(50);
							printf("����������������������%d��",gong3);
							cin>>shu_;
							if(shu_>gong3){
								printf("Sorry�������������~\n");
							}
							if(player.zuan+zuan_<=player.max) player.zuan+=zuan_;
							gong3-=shu_;
							break;
						}
						case 4 : {
							zuan_=125+rando(100);
							printf("����������������������%d��",gong4);
							cin>>shu_;
							if(shu_>gong4){
								printf("Sorry�������������~\n");
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
					printf("1������  �׼ۣ�150��ң�2��ͭ����  �׼ۣ�250��ң�3��������  �׼ۣ�100��ʯ��4�����ʯ���Ӽ�  �׼ۣ�150��ʯ\n\n\n");
					cin>>choose_number;
					switch(choose_number){
						case 1 : {
							money_=150+rando(75);
							printf("��������������������%d��",fang1);
							cin>>shu_;
							if(shu_>fang1){
								printf("Sorry�������������~\n");
							}
							if(player.money+money_<=player.max) player.money+=money_;
							fang1-=shu_;
							break;
						}
						case 2 : {
							money_=250+rando(100);
							printf("��������������������%d��",fang2);
							cin>>shu_;
							if(shu_>fang2){
								printf("Sorry�������������~\n");
							}
							if(player.money+money_<=player.max) player.money+=money_;
							fang2-=shu_;
							break;
						}
						case 3 : {
							zuan_=100+rando(50);
							printf("��������������������%d��",fang3);
							cin>>shu_;
							if(shu_>fang3){
								printf("Sorry�������������~\n");
							}
							if(player.zuan+zuan_<=player.max) player.zuan+=zuan_;
							fang3-=shu_;
							break;
						}
						case 4 : {
							zuan_=150+rando(75);
							printf("��������������������%d��",fang4);
							cin>>shu_;
							if(shu_>fang4){
								printf("Sorry�������������~\n");
							}
							if(player.zuan+zuan_<=player.max) player.zuan+=zuan_;
							fang4-=shu_;
							break;
						}
					}
					break;
				}
			}
			printf("�����ɹ����������ۣ�%d",max(money_,zuan_));
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
	printf("Ա����%lld\n",player.dian_.five);
	printf("׬Ǯ�ٶȣ�%lld\n\n\n",player.dian_.speak_);
}
void buy_zx(){
	printf("1��\n�ٶȼӳɣ�%lld��������%lld/%lld����Ǯ��%lld��ʯ\n",player.dian_.wu[0].jiacheng,player.dian_.wu[0].shuliang,player.dian_.wu[0].max_shuliang,player.dian_.wu[0].zuan_);
	printf("2��\n�ٶȼӳɣ�%lld��������%lld/%lld����Ǯ��%lld��ʯ\n",player.dian_.wu[1].jiacheng,player.dian_.wu[1].shuliang,player.dian_.wu[1].max_shuliang,player.dian_.wu[1].zuan_);
	printf("3��\n�ٶȼӳɣ�%lld��������%lld/%lld����Ǯ��%lld��ʯ\n",player.dian_.wu[2].jiacheng,player.dian_.wu[2].shuliang,player.dian_.wu[2].max_shuliang,player.dian_.wu[2].zuan_);
	printf("4��\n�ٶȼӳɣ�%lld��������%lld/%lld����Ǯ��%lld��ʯ\n",player.dian_.wu[3].jiacheng,player.dian_.wu[3].shuliang,player.dian_.wu[3].max_shuliang,player.dian_.wu[3].zuan_);
	printf("0���˳�\n\n\n");
	cin>>choose_number;
	switch(choose_number){
		case 1 : {
			if(player.dian_.wu[0].shuliang+1>player.dian_.wu[0].max_shuliang){
				printf("��������~\n\n\n");
				break;
			}
			player.dian_.wu[0].shuliang++;
			player.dian_.speak_+=player.dian_.wu[0].jiacheng;
			player.zuan-=player.dian_.wu[0].zuan_;
			printf("����ɹ���\n\n\n");
			break;
		}
		case 2 : {
			if(player.dian_.wu[1].shuliang+1>player.dian_.wu[1].max_shuliang){
				printf("��������~\n\n\n");
				break;
			}
			player.dian_.wu[1].shuliang++;
			player.dian_.speak_+=player.dian_.wu[1].jiacheng;
			player.zuan-=player.dian_.wu[1].zuan_;
			printf("����ɹ���\n\n\n");
			break;
		} 
		case 3 : {
			if(player.dian_.wu[2].shuliang+1>player.dian_.wu[2].max_shuliang){
				printf("��������~\n\n\n");
				break;
			}
			player.dian_.wu[2].shuliang++;
			player.dian_.speak_+=player.dian_.wu[2].jiacheng;
			player.zuan-=player.dian_.wu[2].zuan_;
			printf("����ɹ���\n\n\n");
			break;
		}
		case 4 : {
			if(player.dian_.wu[3].shuliang+1>player.dian_.wu[3].max_shuliang){
				printf("��������~\n\n\n");
				break;
			}
			player.dian_.wu[3].shuliang++;
			player.dian_.speak_+=player.dian_.wu[3].jiacheng;
			player.zuan-=player.dian_.wu[3].zuan_;
			printf("����ɹ���\n\n\n");
			break;
		}
		default : {break;} 
	}
}
void PLAYER(){
	while(1){
		printf("\n");
		puts("=============================================================================");
		printf("Ҫ��ʲô��\n\n\n    1���ƶ���2���鿴״̬��3���鿴���ߣ�4���鿴װ����5���鿴���̣�6������װ�Σ�7��ȡǮ��8������Ա����0���˳�\n\n\n");
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
					printf("���ڲ��ڵ����У����ܲ鿴���̡�\n\n\n");
					break;
				}
				else{
					ck_dian();
				}
				break;
			} 
			case 6 : {
				if(!player.place_){
					printf("���ڲ��ڵ����У����ܹ���װ�Ρ�\n\n\n");
					break;
				}
				else{
					buy_zx();
				}
				break;
			}
			case 7 : {
				if(!player.place_){
					printf("���ڲ��ڵ����У�����ȡǮ��\n\n\n");
					break;
				}
					else{
						end=clock();
						unsigned int t=(end-start)/CLOCKS_PER_SEC/1;
						player.money+=t*player.dian_.speak_/3/1;
						printf("ȡǮ�ɹ�������ȡ�%lld",t*player.dian_.speak_/3/1);
						start=clock();
				}
				break;
			}
			case 8 : {
				if(!player.place_){
					printf("���ڲ��ڵ����У����ܹ���Ա����\n\n\n");
					break;
				}
				printf("�Ƿ�Ҫ����һ��Ա������Y,y/N,n��  ���ۣ�%lld���\n\n\n",player.dian_.money_one);
				char ch;
				cin>>ch;
				if(ch=='Y'||ch=='y'){
					player.dian_.five++;
					player.money-=player.dian_.money_one;
					player.dian_.speak_+=player.dian_.speak_one_jia;
					printf("����ɹ���");
				}
				break;
			} 
			case 0 : {
				printf("�Ƿ��˳���Ϸ����Y,y/N,n��");
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
ע�⣺���������PLAYER����ʱֻ���������֣��������ֻ�������ʧ�� 
*/
