#include <iostream>
#include <ctime>
#define max_length 10 
using namespace std;

typedef enum
{
	//����A,J=10,Q=10,K=10
	A=1,two, three, four, five, six, seven, eight,nine,ten,J,Q,K
}numtype;
//����numtype������Ϊö����enum 

typedef enum
	{
		//�˿��ƵĻ�ɫ��clubs(÷��)��diamonds(����)��hearts(����)��spades(����)
		clubs,diamonds,hearts,spades
	}shapetype;
//����shapetype������Ϊö����enum 

struct Card
{
	numtype num;//��ֵ����
	shapetype shape;//��ɫ��״
};
//����һ���ƵĽṹ��


//���������<<
//������const
ostream &operator<<(ostream &output,const Card &card )
{
	//�����ɫ
	if(card.shape==clubs)  output<<"÷��";
	if(card.shape==diamonds) output<<"����";
	if(card.shape==hearts) output<<"����";
	if(card.shape==spades) output<<"����";

	//�����ֵ
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
	else cout<<(int)card.num;//ǿ��ת����ֵΪint��

	return output;

}
//����21�����Ϸ��
class Point21
{
//�������� 
public:
		//��������
		Point21();	//�޲ι��캯��
		virtual ~Point21(){};//�������� 
		void Game();
		
//˽�б���		
private:
	Card PK[52];//54���Ƽ�ȥ��С��
	int startPosition;//���Ƴ�ʼλ
	Card gamers[8][21];
	//gamers[0]���ׯ�ҵ��ƣ�gamers[1]��[7]�����ҵ��� 
	//����ׯ�Ҽ��ǻ����ˣ�һ����Ҳ����
	 
	int numcards[8];	//ׯ��(numcards[0])����ҵ�����
	char name[8][max_length];	//ׯ�Ҽ��������
	int numgamer;//�����
	
	void Shuffle();	//ϴ�ƺ��� 
	
	int GetTotalScore(Card gamer[21],int n);	//���ص�һ���ƣ���һ�η��ƣ����ܷ�ֵ
	
	void ShowStatus(int num,bool hideFirstCard=false);
		//��ʾׯ��(��Ӧnum=0)�����(��Ӧnum>0)�ĵ�ǰ״̬��Ҫ����ׯ�һ����˵ĵ�һ�η����ƺͷ��� 
	
	Card FirstCard()
	{
		return PK[startPosition++];
	}//��һ���˿���
	
		
};

//��ʼ���˿��ƣ�����λ�ã�ׯ�����������е��˿�����
Point21::Point21()
{
	int nowPos=0;	//��ǰ�˿���λ��
	
	char* str;
	
	for(int shapePos=0;shapePos<4;shapePos++)	//��ɫ
	{
		for(int numPos=1;numPos<=13;numPos++)	//��ֵ
		{
			PK[nowPos].shape=(shapetype)shapePos;	//��ɫ
			PK[nowPos].num=(numtype)numPos;	//��ֵ
			nowPos++;
		}
	}
	cout<<endl<<"�����м����˲μ���Ϸ��(���7����):";
	str =new char[1];
	cin>>str;
	numgamer=atoi(str);
	//atoi������itoa()�������� 
	
	while (numgamer<1||numgamer>7) //����������1~7֮��
	{
		cout<<endl<<"��������޶���1~7��,����������������";
	    cin>>str;
     	numgamer=atoi(str);
	}
	
	startPosition=0;	//����λ��
	int i=0;	//��ʱ����
	//ׯ��numcards[0]�����numcards[1~7]���е��˿�������
	for(i=0;i<=numgamer;i++) numcards[i]=0;
	
	strcpy(name[0],"ׯ��");
	
	for(i=1;i<=numgamer;i++)   //�������
	{
		cout<<"�����"<<i<<"����ҵ�����:";
		cin>>name[i];
	}
	cout<<"��Ϸ��ʼ"<<endl<<endl;
}

//ϴ�ƣ�ͨ������������������������Ӧλ�õ��ƺ͵�ǰλ�õ���
void Point21::Shuffle()
{
	srand((unsigned)time(NULL));	//ͨ������ʱ�亯����ʼ������� 
	for(int nowPos=51;nowPos>0;nowPos--)
	{
		int pos=rand()%(nowPos+1);	//����0~nowPos֮��������
		
		Card temp;		//����һ����ʱ�������ڽ�����
		temp=PK[pos];
		PK[pos]=PK[nowPos];
		PK[nowPos]=temp;
	}
}
//���巵�ص�һ���Ƶ��ܷ�ֵ �ĺ��� 
int Point21::GetTotalScore(Card gamer[21],int n)
{
	int pos;
	int totalScore=0;
	for(pos=0;pos<n;pos++)	//ѭ��������ֵ(A�ķ�ֵΪ11)
	{
		if(gamer[pos].num==A) totalScore+=11;	//A�ķ�ֵΪ11
		else if(gamer[pos].num>ten)totalScore+=10;	//J,Q,K�ķ�ֵΪ10
		else totalScore+=(int)gamer[pos].num;	//TWO~TEN��ֵΪ2~10
	}
	//��ֵ����21ʱ����A�ķ�ֵ��Ϊ1
	for(pos=0;totalScore>21&&pos<n;pos++)
	{
		if(gamer[pos].num==A) totalScore-=10;
	}
	return totalScore;
}

void Point21::ShowStatus(int num,bool hideFirstCard)
/*��num=0ʱ����ʾׯ�ҵ�ǰ״̬����num>0,��ʾ��num����ҵĵ�ǰ״̬��
��hideFirstCardΪ��ʱ�������������˿������ܷ֣�������ʾ���������ܷ�*/


{

	cout<<endl<<name[num]<<":";	//��ʾׯ�һ��������
	
	//����ׯ�ҵ�״̬���ػ���ʾׯ�������ƵĻ�ɫ
	if(hideFirstCard)cout<<"<**ׯ�������Ʊ�����**>";//����������
	else if(gamers[num][0].shape==clubs) cout<<"÷��";		
	else if(gamers[num][0].shape==diamonds) cout<<"����";	
	else if(gamers[num][0].shape==hearts) cout<< "����";
	else if(gamers[num][0].shape==spades) cout<<"����";	
	//���ׯ�������Ƶ���ֵ
	if(hideFirstCard)  cout<<"";
	else if(gamers[num][0].num==A) cout<<"A ";	//A��ʾA
	else if(gamers[num][0].num==J) cout<<"J ";
	else if(gamers[num][0].num==Q) cout<<"Q ";	
	else if(gamers[num][0].num==K) cout<<"K ";
	else cout<<(int)gamers[num][0].num;
	for(int i=1;i<numcards[num];i++)
	{
	if(gamers[num][i].shape==clubs) cout<<"÷��";		

	else if(gamers[num][i].shape==diamonds) cout<<"����";	

		else if(gamers[num][i].shape==hearts) cout<< "����";	

		else if(gamers[num][i].shape==spades) cout<<"����";

//�����ֵ
		if (gamers[num][i].num==A) cout<<"A";
		else if(gamers[num][i].num==J) cout<<"J";
		else if(gamers[num][i].num==Q) cout<<"Q";
		else if(gamers[num][i].num==K) cout<<"K";
		else cout<<(int)gamers[num][i].num;
	}
	if(!hideFirstCard)
		cout<<"   �ܷ�ֵ"<<GetTotalScore(gamers[num],numcards[num]);
	cout<<endl;
	if(GetTotalScore(gamers[num],numcards[num])>21)
		cout<<endl<<name[num]<<"����(����21���� �� ������)!"<<endl; 
}
void Point21::Game()
{
	Shuffle();	//ϴ��
	int i,j;
	//Ϊׯ�ҷ�������
	for(i=0;i<2;i++)
		gamers[0][numcards[0]++]=FirstCard();
		
	ShowStatus(0,true);	//��ʾׯ��״̬���������������ܷ�
	//�����ҷ��Ʋ���ʾ
	for(i=1;i<=numgamer;i++)
	{
		for(j=0;j<2;j++)
		gamers[i][numcards[i]++]=FirstCard();
		ShowStatus(i);
	}
	cout<<endl;
	//���������ҷ��������
	for(i=1;i<=numgamer;i++)
	{
		char p;
		cout<<endl<<name[i]<<",�㻹����Ҫһ������?���Ҫ������1,��Ҫ������0:";
		cin>>p;
		//���ѡ����Ҫһ����,������û���������������
		//switch(p)
		//{
		while(p!='1' && p!='0')
		{
			cout<<"������벻��ȷ�����������롣"<<endl;
			cout<<name[i]<<",�㻹����Ҫһ������?���Ҫ������1,��Ҫ������0:";
			cin>>p;
		}
		
		while (GetTotalScore(gamers[i],numcards[i])<=21&&p=='1')
		{
			gamers[i][numcards[i]++]=FirstCard();
			ShowStatus(i);
			//�������������ѭ��
			if(GetTotalScore(gamers[i],numcards[i])>21) break;
			cout<<endl<<name[i]<<",������Ҫһ������?���Ҫ������1,��Ҫ������0:";
			cin>>p;
		}	
		//}
	}
	ShowStatus(0);	//��ʾׯ��
	//ׯ���ܷ�С�ڵ���16������������
	while(GetTotalScore(gamers[0],numcards[0])<=16)
	{
		gamers[0][numcards[0]++]=FirstCard();	//Ϊׯ�ҷ�1����
		ShowStatus(0);	//��ʾׯ��
	}
	cout<<endl;
	//ׯ��������û��������������Ӯ
	if(GetTotalScore(gamers[0],numcards[0])>21)
	{
		for(i=1;i<=numgamer;i++)
		{	//���β鿴ÿλ���
			if(GetTotalScore(gamers[i],numcards[i])<=21)
				cout<<name[i]<<",��ϲ�㣬ׯ������������û�г���21�㣬��Ӯ�ˣ�"<<endl;//���û������
			else cout<<name[i]<<",��,��ϧ����21���ˣ�����ƽ�֣�"<<endl;//�������
		}
	}
	else
	{//ׯ��û������,���β鿴ÿλ���
		for(i=1;i<=numgamer;i++)
		{//�ֱܷ�ׯ�Ҵ�
			if(GetTotalScore(gamers[i],numcards[i])<=21&&GetTotalScore(gamers[i],numcards[i])>GetTotalScore(gamers[0],numcards[0]))
			{//���δ���������ֱܷ�ׯ�Ҵ����Ӯ
				cout<<name[i]<<",��ϲ�㣬����ӽ�21�㣬��Ӯ��!"<<endl;		
			}
			else if(GetTotalScore(gamers[i],numcards[i])==GetTotalScore(gamers[0],numcards[0]))
			{//����ܷ���ׯ����ȣ�ƽ��
				cout<<name[i]<<",������ϧ������ׯ���ܷ���ͬ������ƽ��!"<<endl;
			}
			else
			{//����������ֱܷ�ׯ��С�������
				cout<<name[i]<<",�Բ���������!�����˻���ׯ�Ҹ��ӽ�21�㣩"<<endl;		
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
		cout<<endl<<"��������һ����,����������1,�˳������������ݲ��س�:";
		
		cin>>AgainGame;
		cout<<endl<<"***************************************************";
	} while(AgainGame=='1');
	return 0;
}
