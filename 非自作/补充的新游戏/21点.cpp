#include <iostream>
#include <ctime>
#define max_length 10 
using namespace std;

typedef enum
{
	//牌面A,J=10,Q=10,K=10
	A=1,two, three, four, five, six, seven, eight,nine,ten,J,Q,K
}numtype;
//变量numtype的类型为枚举型enum 

typedef enum
	{
		//扑克牌的花色：clubs(梅花)，diamonds(方块)，hearts(红桃)和spades(黑桃)
		clubs,diamonds,hearts,spades
	}shapetype;
//变量shapetype的类型为枚举型enum 

struct Card
{
	numtype num;//面值数字
	shapetype shape;//花色形状
};
//定义一副牌的结构体


//重载运算符<<
//运用了const
ostream &operator<<(ostream &output,const Card &card )
{
	//输出花色
	if(card.shape==clubs)  output<<"梅花";
	if(card.shape==diamonds) output<<"方块";
	if(card.shape==hearts) output<<"红桃";
	if(card.shape==spades) output<<"黑桃";

	//输出面值
	if(card.num==A)
	{
		output<<"A";
	}
	else if(card.num==J)
	{
		output<<"J";
	}
	else if(card.num==Q)
	{
		output<<"Q";
	}
	else if(card.num==K)
	{
		output<<"K";
	}
	else cout<<(int)card.num;//强制转化面值为int型

	return output;

}
//声明21点的游戏类
class Point21
{
//公共变量 
public:
		//函数声明
		Point21();	//无参构造函数
		virtual ~Point21(){};//析构函数 
		void Game();
		
//私有变量		
private:
	Card PK[52];//54张牌减去大小王
	int startPosition;//发牌初始位
	Card gamers[8][21];
	//gamers[0]存放庄家的牌，gamers[1]到[7]存放玩家的牌 
	//设置庄家即是机器人，一个人也能玩
	 
	int numcards[8];	//庄家(numcards[0])及玩家的牌数
	char name[8][max_length];	//庄家及玩家姓名
	int numgamer;//玩家数
	
	void Shuffle();	//洗牌函数 
	
	int GetTotalScore(Card gamer[21],int n);	//返回第一手牌（第一次发牌）的总分值
	
	void ShowStatus(int num,bool hideFirstCard=false);
		//显示庄家(对应num=0)或玩家(对应num>0)的当前状态，要隐藏庄家机器人的第一次发的牌和分数 
	
	Card FirstCard()
	{
		return PK[startPosition++];
	}//发一张扑克牌
	
		
};

//初始化扑克牌，发牌位置，庄家与各玩家手中的扑克牌数
Point21::Point21()
{
	int nowPos=0;	//当前扑克牌位置
	
	char* str;
	
	for(int shapePos=0;shapePos<4;shapePos++)	//花色
	{
		for(int numPos=1;numPos<=13;numPos++)	//面值
		{
			PK[nowPos].shape=(shapetype)shapePos;	//花色
			PK[nowPos].num=(numtype)numPos;	//面值
			nowPos++;
		}
	}
	cout<<endl<<"请问有几个人参加游戏？(最多7个人):";
	str =new char[1];
	cin>>str;
	numgamer=atoi(str);
	//atoi函数与itoa()函数区别 
	
	while (numgamer<1||numgamer>7) //限制人数在1~7之间
	{
		cout<<endl<<"玩家人数限定在1~7个,请重新输入人数：";
	    cin>>str;
     	numgamer=atoi(str);
	}
	
	startPosition=0;	//发牌位置
	int i=0;	//临时变量
	//庄家numcards[0]及玩家numcards[1~7]手中的扑克牌张数
	for(i=0;i<=numgamer;i++) numcards[i]=0;
	
	strcpy(name[0],"庄家");
	
	for(i=1;i<=numgamer;i++)   //玩家姓名
	{
		cout<<"输入第"<<i<<"个玩家的姓名:";
		cin>>name[i];
	}
	cout<<"游戏开始"<<endl<<endl;
}

//洗牌，通过产生随机数，交换随机数对应位置的牌和当前位置的牌
void Point21::Shuffle()
{
	srand((unsigned)time(NULL));	//通过调用时间函数初始化随机数 
	for(int nowPos=51;nowPos>0;nowPos--)
	{
		int pos=rand()%(nowPos+1);	//产生0~nowPos之间的随机数
		
		Card temp;		//定义一个临时变量用于交换牌
		temp=PK[pos];
		PK[pos]=PK[nowPos];
		PK[nowPos]=temp;
	}
}
//定义返回第一手牌的总分值 的函数 
int Point21::GetTotalScore(Card gamer[21],int n)
{
	int pos;
	int totalScore=0;
	for(pos=0;pos<n;pos++)	//循环求最大分值(A的分值为11)
	{
		if(gamer[pos].num==A) totalScore+=11;	//A的分值为11
		else if(gamer[pos].num>ten)totalScore+=10;	//J,Q,K的分值为10
		else totalScore+=(int)gamer[pos].num;	//TWO~TEN分值为2~10
	}
	//分值大于21时，将A的分值改为1
	for(pos=0;totalScore>21&&pos<n;pos++)
	{
		if(gamer[pos].num==A) totalScore-=10;
	}
	return totalScore;
}

void Point21::ShowStatus(int num,bool hideFirstCard)
/*当num=0时，显示庄家当前状态，当num>0,显示第num个玩家的当前状态，
当hideFirstCard为真时，将隐藏首张扑克牌与总分，否则将显示首张牌与总分*/


{

	cout<<endl<<name[num]<<":";	//显示庄家或玩家姓名
	
	//根据庄家的状态隐藏或显示庄家首张牌的花色
	if(hideFirstCard)cout<<"<**庄家首张牌被隐藏**>";//隐藏首张牌
	else if(gamers[num][0].shape==clubs) cout<<"梅花";		
	else if(gamers[num][0].shape==diamonds) cout<<"方块";	
	else if(gamers[num][0].shape==hearts) cout<< "红桃";
	else if(gamers[num][0].shape==spades) cout<<"黑桃";	
	//输出庄家首张牌的面值
	if(hideFirstCard)  cout<<"";
	else if(gamers[num][0].num==A) cout<<"A ";	//A表示A
	else if(gamers[num][0].num==J) cout<<"J ";
	else if(gamers[num][0].num==Q) cout<<"Q ";	
	else if(gamers[num][0].num==K) cout<<"K ";
	else cout<<(int)gamers[num][0].num;
	for(int i=1;i<numcards[num];i++)
	{
	if(gamers[num][i].shape==clubs) cout<<"梅花";		

	else if(gamers[num][i].shape==diamonds) cout<<"方块";	

		else if(gamers[num][i].shape==hearts) cout<< "红桃";	

		else if(gamers[num][i].shape==spades) cout<<"黑桃";

//输出面值
		if (gamers[num][i].num==A) cout<<"A";
		else if(gamers[num][i].num==J) cout<<"J";
		else if(gamers[num][i].num==Q) cout<<"Q";
		else if(gamers[num][i].num==K) cout<<"K";
		else cout<<(int)gamers[num][i].num;
	}
	if(!hideFirstCard)
		cout<<"   总分值"<<GetTotalScore(gamers[num],numcards[num]);
	cout<<endl;
	if(GetTotalScore(gamers[num],numcards[num])>21)
		cout<<endl<<name[num]<<"引爆(超过21点啦 ！ 结束啦)!"<<endl; 
}
void Point21::Game()
{
	Shuffle();	//洗牌
	int i,j;
	//为庄家发两张牌
	for(i=0;i<2;i++)
		gamers[0][numcards[0]++]=FirstCard();
		
	ShowStatus(0,true);	//显示庄家状态，隐藏首张牌与总分
	//向各玩家发牌并显示
	for(i=1;i<=numgamer;i++)
	{
		for(j=0;j<2;j++)
		gamers[i][numcards[i]++]=FirstCard();
		ShowStatus(i);
	}
	cout<<endl;
	//依次向各玩家发额外的牌
	for(i=1;i<=numgamer;i++)
	{
		char p;
		cout<<endl<<name[i]<<",你还想再要一张牌吗?如果要请输入1,不要请输入0:";
		cin>>p;
		//玩家选择再要一张牌,如果玩家没有引爆则继续发牌
		//switch(p)
		//{
		while(p!='1' && p!='0')
		{
			cout<<"你的输入不正确，请重新输入。"<<endl;
			cout<<name[i]<<",你还想再要一张牌吗?如果要请输入1,不要请输入0:";
			cin>>p;
		}
		
		while (GetTotalScore(gamers[i],numcards[i])<=21&&p=='1')
		{
			gamers[i][numcards[i]++]=FirstCard();
			ShowStatus(i);
			//玩家引爆则跳出循环
			if(GetTotalScore(gamers[i],numcards[i])>21) break;
			cout<<endl<<name[i]<<",你想再要一张牌吗?如果要请输入1,不要请输入0:";
			cin>>p;
		}	
		//}
	}
	ShowStatus(0);	//显示庄家
	//庄家总分小于等于16，必须再拿牌
	while(GetTotalScore(gamers[0],numcards[0])<=16)
	{
		gamers[0][numcards[0]++]=FirstCard();	//为庄家发1张牌
		ShowStatus(0);	//显示庄家
	}
	cout<<endl;
	//庄家引爆，没有引爆的所有人赢
	if(GetTotalScore(gamers[0],numcards[0])>21)
	{
		for(i=1;i<=numgamer;i++)
		{	//依次查看每位玩家
			if(GetTotalScore(gamers[i],numcards[i])<=21)
				cout<<name[i]<<",恭喜你，庄家引爆，而你没有超过21点，你赢了！"<<endl;//玩家没有引爆
			else cout<<name[i]<<",唉,可惜超过21点了，打了平局！"<<endl;//玩家引爆
		}
	}
	else
	{//庄家没有引爆,依次查看每位玩家
		for(i=1;i<=numgamer;i++)
		{//总分比庄家大
			if(GetTotalScore(gamers[i],numcards[i])<=21&&GetTotalScore(gamers[i],numcards[i])>GetTotalScore(gamers[0],numcards[0]))
			{//玩家未引爆，且总分比庄家大，玩家赢
				cout<<name[i]<<",恭喜你，你最接近21点，你赢了!"<<endl;		
			}
			else if(GetTotalScore(gamers[i],numcards[i])==GetTotalScore(gamers[0],numcards[0]))
			{//玩家总分与庄家相等，平局
				cout<<name[i]<<",唉，可惜了你与庄家总分相同，打了平局!"<<endl;
			}
			else
			{//玩家引爆或总分比庄家小，玩家输
				cout<<name[i]<<",对不起，你输了!（爆了或者庄家更接近21点）"<<endl;		
			}
		}
	}
}
int main()
{		
	char AgainGame;
	do
	{
		Point21 newGame;	
		newGame.Game();
		cout<<endl<<endl<<"***************************************************";
		cout<<endl<<"你想再玩一次吗,再玩请输入1,退出请输任意内容并回车:";
		
		cin>>AgainGame;
		cout<<endl<<"***************************************************";
	} while(AgainGame=='1');
	return 0;
}
