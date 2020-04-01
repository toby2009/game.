/*
dos windows 25*80
*/
#include <algorithm>
#include <windows.h>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <ctype.h>
#include <cstdio>
#include <cmath>
#include <ctime>
using namespace std;
int game_answer=0;

/*
1 = 蓝色   9  = 淡蓝色
2 = 绿色   10 = 淡绿色
3 = 湖蓝色 11 = 淡浅绿色
4 = 红色   12 = 淡红色
5 = 紫色   13 = 淡紫色
6 = 黄色   14 = 淡黄色
7 = 白色   15 = 亮白色
*/
/*设置背景颜色*/int setBackColor(unsigned char bColor){
	HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbInfo;
	GetConsoleScreenBufferInfo(hd, &csbInfo);
	return SetConsoleTextAttribute(hd, (bColor << 4) | (csbInfo.wAttributes&~0xF0));
} 
/*设置字体颜色*/int setTextColor(unsigned char fColor){
	HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbInfo;
	GetConsoleScreenBufferInfo(hd, &csbInfo);
	return SetConsoleTextAttribute(hd, fColor | (csbInfo.wAttributes&~0x0F));
}

void appGetXY() //得到光标位置 
{ 
    HANDLE hStdout;
    CONSOLE_SCREEN_BUFFER_INFO pBuffer; 
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE); 
    GetConsoleScreenBufferInfo(hStdout, &pBuffer); 
    cout << pBuffer.dwCursorPosition.X <<" "<< pBuffer.dwCursorPosition.Y <<endl;; 
}
void appGotoXY(int x,int y)  //移动光标 
{
	swap(x,y);
    CONSOLE_SCREEN_BUFFER_INFO    csbiInfo;                            
    HANDLE    hConsoleOut;
    hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsoleOut,&csbiInfo);
    csbiInfo.dwCursorPosition.X = x;                                    
    csbiInfo.dwCursorPosition.Y = y;                                    
    SetConsoleCursorPosition(hConsoleOut,csbiInfo.dwCursorPosition);   
}
inline int Get_X(int x,int y){
	if(x==1)	return 5;
	if(x==2)	return 9;
	if(x==3)	return 13;
	if(x==4)	return 17;
}
inline int Get_Y(int x,int y){
	if(y==1)	return 24;
	if(y==2)	return 34;
	if(y==3)	return 44;
	if(y==4)	return 54;
}

void HideCursor(){//隐藏光标 
	CONSOLE_CURSOR_INFO cursor_info = {1, 0}; 
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

int a[5][5];
bool if_game_over(){
	for(int i=1;i<=4;i++)
		for(int j=1;j<=4;j++)
			if(!a[i][j])
				return 1;
	for(int i=2;i<=4;i++)
		for(int j=1;j<=4;j++){
			if(a[j][i]==a[j][i-1])
				return 1;
			if(a[i][j]==a[i-1][j])
				return 1;
		}
	return 0;
}
bool vis[20];

void Pr_a_num_with_color(int x){
	switch (x){/*
		1 = 蓝色   9  = 淡蓝色
		2 = 绿色   10 = 淡绿色
		3 = 湖蓝色 11 = 淡浅绿色
		4 = 红色   12 = 淡红色
		5 = 紫色   13 = 淡紫色
		6 = 黄色   14 = 淡黄色
		7 = 白色   15 = 亮白色*/
		case 2:setTextColor(9);printf("%4d",x);setTextColor(0);break ;
		case 4:setTextColor(10);printf("%4d",x);setTextColor(0);break ;
		case 8:setTextColor(11);printf("%4d",x);setTextColor(0);break ;
		case 16:setTextColor(12);printf("%4d",x);setTextColor(0);break ;
		case 32:setTextColor(13);printf("%4d",x);setTextColor(0);break ;
		case 64:setTextColor(14);printf("%4d",x);setTextColor(0);break ;
		case 128:setTextColor(15);printf("%4d",x);setTextColor(0);break ;
		case 256:setTextColor(1);printf("%4d",x);setTextColor(0);break ;
		case 512:setTextColor(2);printf("%4d",x);setTextColor(0);break ;
		case 1024:setTextColor(3);printf("%4d",x);setTextColor(0);break ;
		case 2048:setTextColor(4);printf("%4d",x);setTextColor(0);break ;
		case 4096:setTextColor(5);printf("%4d",x);setTextColor(0);break ;
	}
}

void Pr_all_num(){
	for(int i=1;i<=4;i++)
		for(int j=1;j<=4;j++){
			int x=Get_X(i,j),y=Get_Y(i,j); 
			appGotoXY(x,y);
			if(a[i][j]==0)
				printf("    ");
			else{
				Pr_a_num_with_color(a[i][j]);
				//printf("%4d",a[i][j]);
			}
		}
	return ;
}
//**************************************************
bool clear_up(){
	bool bb=0;
	for(int k=1;k<=4;k++)
		for(int i=3;i>=1;i--)
			for(int j=1;j<=4;j++)
				if(a[i][j]==0&&a[i+1][j]!=0){
					swap(a[i][j],a[i+1][j]);
					bb=1;
				}
	if(bb==1)
		return 1;
	return 0;
}
bool do_up(){
	if(!if_game_over())
		return 1;
	bool bb=1;
	if(!clear_up())//没空间不能移动 
		bb=0;
	for(int j=1;j<=4;j++){
		int i=1;
		while(i<4){
			if(!a[i+1][j])
				break ;
			if(a[i][j]!=a[i+1][j]){
				i++;
				continue ;
			}
			if(a[i][j]==a[i+1][j]){
				a[i][j]+=a[i+1][j]; game_answer+=a[i+1][j];
				a[i+1][j]=0; 
				i+=2;
				bb=1;//可以合并 
			}
		}
	}
	if(bb==0)//没空间又不能合并 
		return 0;
	clear_up();
	return 1;
}
//**************************************************
bool clear_down(){
	bool bb=0;
	for(int k=1;k<=4;k++)
		for(int i=2;i<=4;i++)
			for(int j=1;j<=4;j++)
				if(a[i][j]==0&&a[i-1][j]!=0){
					swap(a[i][j],a[i-1][j]);
					bb=1;
				}
	if(bb==1)
		return 1;
	return 0;
}
bool do_down(){
	if(!if_game_over())
		return 1;
	bool bb=1;
	if(!clear_down())
		bb=0;
	for(int j=1;j<=4;j++){
		int i=4;
		while(i>1){
			if(!a[i-1][j])
				break ;
			if(a[i][j]!=a[i-1][j]){
				i--;
				continue ;
			}
			if(a[i][j]==a[i-1][j]){
				a[i][j]+=a[i-1][j];  game_answer+=a[i-1][j];
				a[i-1][j]=0; 
				i-=2;
				bb=1;
			}
		}
	}
	if(bb==0)
		return 0;
	clear_down();
	return 1;
}
//**************************************************
bool clear_left(){
	bool bb=0;
	for(int k=1;k<=4;k++)
		for(int i=1;i<=4;i++)
			for(int j=3;j>=1;j--)
				if(a[i][j]==0&&a[i][j+1]!=0){
					swap(a[i][j],a[i][j+1]);
					bb=1;
				}
	if(bb==1)
		return 1;
	return 0;
}
bool do_left(){
	if(!if_game_over())
		return 1;
	bool bb=1;
	if(!clear_left())
		bb=0;
	for(int i=1;i<=4;i++){
		int j=1;
		while(j<4){
			if(!a[i][j+1])
				break ;
			if(a[i][j]!=a[i][j+1]){
				j++;
				continue ;
			}
			if(a[i][j]==a[i][j+1]){
				a[i][j]+=a[i][j+1];  game_answer+=a[i][j+1];
				a[i][j+1]=0; 
				j+=2;
				bb=1;
			}
		}
	}
	if(bb==0)
		return 0;
	clear_left();
	return 1;
}
//**************************************************
bool clear_right(){
	bool bb=0;
	for(int k=1;k<=4;k++)
		for(int i=1;i<=4;i++)
			for(int j=2;j<=4;j++)
				if(a[i][j]==0&&a[i][j-1]!=0){
					swap(a[i][j],a[i][j-1]);
					bb=1;
				}
	if(bb==1)
		return 1;
	return 0;
}
bool do_right(){
	if(!if_game_over())
		return 1;
	bool bb=1;
	if(!clear_right())
		bb=0;
	for(int i=1;i<=4;i++){
		int j=4;
		while(j>1){
			if(!a[i][j-1])
				break ;
			if(a[i][j]!=a[i][j-1]){
				j--;
				continue ;
			}
			if(a[i][j]==a[i][j-1]){
				a[i][j]+=a[i][j-1];  game_answer+=a[i][j-1];
				a[i][j-1]=0; 
				j-=2;
				bb=1;
			}
		}
	}
	if(bb==0)
		return 0;
	clear_right();
	return 1; 
}

void START(); 
void END();



//后悔操作开始 


struct regret{
	int id;//id为进度 
	int rg[5][5];
}Regret[101];
int Rg_num,Rg_now;//num为数组下标,now为目前最高进度 

void Cannot_regret(){
	setBackColor(15);
	setTextColor(0);
	appGotoXY(21,30);
	char s_1[30]="您目前不能撤回。";
	for(int i=0;i<16;i++){
		cout<<s_1[i];
		Sleep(30); 
	}
	Sleep(400);
	appGotoXY(21,30);
	printf("                ");
	setBackColor(7);
	return ;
}


void Rg_watch_num();//反悔步数显示，先声明 

void I_regret(){
	if(!Rg_num||Rg_now-Regret[Rg_num].id>=10||(Rg_now<=10)){
		Cannot_regret();
		return ;
	}
	Rg_num--;
	if(Rg_num==0&&Rg_now-Regret[100].id<=10)
		Rg_num=100;
	for(int i=1;i<=4;i++)
		for(int j=1;j<=4;j++)
			a[i][j]=Regret[Rg_num].rg[i][j];
			
	//Pr_all_num;  
	//我也不知道为什么调用不了输出函数，只好手动输出 
	for(int i=1;i<=4;i++)
		for(int j=1;j<=4;j++){
			int x=Get_X(i,j),y=Get_Y(i,j); 
			appGotoXY(x,y);
			if(a[i][j]==0)
				printf("    ");
			else{
				Pr_a_num_with_color(a[i][j]);
			}
		}
	Rg_watch_num(); 
	return ;
}

void Rg_watch_num(){//反悔步数显示 
	appGotoXY(2,54);
	setBackColor(15);
	printf("%2d",10-Rg_now+Regret[Rg_num].id);
	setBackColor(7);
	return ;
}


//后悔操作结束 



int main(){
	srand(time(0));
	HideCursor();//隐藏光标 	
	
	START();
	
	while(if_game_over()){
		//system("cls");
		//appGotoXY(0,0);
	
		int bb=0;//bb判断是否有空位 
		for(int i=1;i<=4;i++)
			for(int j=1;j<=4;j++)
				if(!a[i][j])
					bb=1;
		if(bb==1){
			int num_new=rand()%10+1;//新出现4还是2 
			if(num_new==1)	num_new=4;
			else	num_new=2;
			int place_new=0,x=0,y=0;
			while(1){
				place_new=rand()%16+1;
				x=(place_new-1)/4+1,y=place_new%4+1;
				if(!a[x][y])
					break ;
			}
			a[x][y]=num_new;	
		}
		
		Pr_all_num();
		
	again:
		char ch_1=getch(),ch_2;
		if(ch_1=='r'){//regret
			I_regret();
				goto again;
		}
		if(ch_1!=-32){
			appGotoXY(20,30);
			char s_1[30]="您输入的字符不合法。";
			for(int i=0;i<20;i++){
				cout<<s_1[i];
				Sleep(1);
			}
			Sleep(200);
			for(int i=1;i<=19;i++)
				printf("\b \b");
			goto again;
		}
		ch_2=getch();
		if(ch_2==72)//up
			if(!do_up())
				goto again;
		if(ch_2==80)//down
			if(!do_down())
				goto again;
		if(ch_2==75)//left
			if(!do_left())
				goto again;
		if(ch_2==77)//right
			if(!do_right())
				goto again;
		appGotoXY(20,30);
		printf("您当前的总分为:%d",game_answer); 
		//regret_预处理 
		int Last=Rg_num;
		Rg_num++;
		if(Rg_num==101)
			Rg_num=1;
		Regret[Rg_num].id=Regret[Last].id+1;
		Rg_now=max(Rg_now,Regret[Rg_num].id);
		for(int i=1;i<=4;i++)
			for(int j=1;j<=4;j++)
				Regret[Rg_num].rg[i][j]=a[i][j];
		Rg_watch_num();
	}
	appGotoXY(20,30);
	printf("                     "); 
	END();
	return 0;
}
void START(){
	appGotoXY(0,0);
	setBackColor(15);//大背景颜色 
	for(int i=1;i<=26*80;i++)
		cout<<" ";
	appGotoXY(0,0);
	cout<<" ";
	appGotoXY(20,19);
	setBackColor(7);//小背景颜色 
	for(int i=1;i<=42;i++)
		cout<<" ";
	setTextColor(0);//字体颜色 
	appGotoXY(3,19);
	printf("┏━━━━┳━━━━┳━━━━┳━━━━┓\n");
	appGotoXY(4,19);
	printf("┃        ┃        ┃        ┃        ┃\n");
	appGotoXY(5,19);
	printf("┃        ┃        ┃        ┃        ┃\n");
	appGotoXY(6,19);
	printf("┃        ┃        ┃        ┃        ┃\n");
	appGotoXY(7,19);
	printf("┣━━━━╋━━━━╋━━━━╋━━━━┫\n");
	appGotoXY(8,19);
	printf("┃        ┃        ┃        ┃        ┃\n");
	appGotoXY(9,19);
	printf("┃        ┃        ┃        ┃        ┃\n");
	appGotoXY(10,19);
	printf("┃        ┃        ┃        ┃        ┃\n");
	appGotoXY(11,19);
	printf("┣━━━━╋━━━━╋━━━━╋━━━━┫\n");
	appGotoXY(12,19);
	printf("┃        ┃        ┃        ┃        ┃\n");
	appGotoXY(13,19);
	printf("┃        ┃        ┃        ┃        ┃\n");
	appGotoXY(14,19);
	printf("┃        ┃        ┃        ┃        ┃\n");
	appGotoXY(15,19);
	printf("┣━━━━╋━━━━╋━━━━╋━━━━┫\n");
	appGotoXY(16,19);
	printf("┃        ┃        ┃        ┃        ┃\n");
	appGotoXY(17,19);
	printf("┃        ┃        ┃        ┃        ┃\n");
	appGotoXY(18,19);
	printf("┃        ┃        ┃        ┃        ┃\n");
	appGotoXY(19,19);
	printf("┗━━━━┻━━━━┻━━━━┻━━━━┛\n");
	//Sleep(100000);
	appGotoXY(2,19);
	setBackColor(15);
	char s_1[40]="可按'r'键反悔。您还可反悔的步数为：";
	for(int i=0;i<35;i++){
		cout<<s_1[i];
		Sleep(1);
	}
	setBackColor(7); 
	return ;
}
void END(){
	setBackColor(15);
	appGotoXY(21,30);
	char s_1[30]="游戏结束，您的得分为：";
	for(int i=0;i<22;i++){
		cout<<s_1[i];
		Sleep(30);
	}
	Sleep(500);
	cout<<game_answer<<endl;
	Sleep(500);
	appGotoXY(22,30);
	char s_2[30]="请按任意键结束游戏。";
	for(int i=0;i<20;i++){
		cout<<s_2[i];
		Sleep(30);
	}
}
/*
1┏━━━━┳━━━━┳━━━━┳━━━━┓
2┃        ┃        ┃        ┃        ┃
3┃  0000  ┃  0000  ┃  0000  ┃  0000  ┃
4┃        ┃        ┃        ┃        ┃
5┣━━━━╋━━━━╋━━━━╋━━━━┫
6┃        ┃        ┃        ┃        ┃
7┃  0000  ┃  0000  ┃  0000  ┃  0000  ┃
8┃        ┃        ┃        ┃        ┃
9┣━━━━╋━━━━╋━━━━╋━━━━┫
0┃        ┃        ┃        ┃        ┃
1┃  0000  ┃  0000  ┃  0000  ┃  0000  ┃
2┃        ┃        ┃        ┃        ┃
3┣━━━━╋━━━━╋━━━━╋━━━━┫
4┃        ┃        ┃        ┃        ┃
5┃  0000  ┃  0000  ┃  0000  ┃  0000  ┃
6┃        ┃        ┃        ┃        ┃
7┗━━━━┻━━━━┻━━━━┻━━━━┛
*/
