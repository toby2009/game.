#include <iostream>
#include <memory.h>
#include <cmath>
using namespace std;//�洢�ṹ��chess���ǻ��࣬�������Ǹ������ӣ���chessboard������chess��ָ����ø�������
class chessboard;
class chess{
private:
    int id;//�ȼ�
public:
    chess(int i):id(i){}
    int get(){return id;}
    virtual bool judge_move(chessboard &cb,int startx,int starty,int aimx,int aimy)=0;
    virtual ~chess(){};//������
};

class chessboard{
private:
    chess *c[10][9];
    char chessword[15][4]={"˧","��","��","ʿ","܇","�R","��","","��","��","��","��","�h","��","��"};//����
public:
    chessboard(){memset(c, NULL, sizeof(c));};//��ָ���ʼ��Ϊ��ָ��
    void init();
    chess* get(int x,int y){return c[x][y];}
    int getid(int x,int y){ if(c[x][y]!=NULL) return c[x][y]->get();return 0;}
    void show();
    void play();
    bool move(int startx,int starty,int aimx,int aimy);
    ~chessboard();//��������
    static bool end;//�жϽ���
    static int player;
};

bool chessboard::end=true;
int chessboard::player=-1;

bool chessboard::move(int startx,int starty,int aimx,int aimy){
    if(startx>=0&&startx<10&&starty>=0&&starty<9//�����жϴ���ĵ��Ƿ���Ϲ���
       &&aimx>=0&&aimx<10&&aimy>=0&&aimy<9
       &&getid(startx,starty)&&getid(startx,starty)*player>0
       &&c[startx][starty]->judge_move(*this,startx,starty,aimx,aimy)){
        if(c[aimx][aimy]!=NULL) delete c[aimx][aimy];//����
        c[aimx][aimy]=c[startx][starty];
        c[startx][starty]=NULL;
    player*=-1;
    return true;
    }
    cout<<"�߷����󣬲����Ϲ���"<<endl;
    return false;
}

class horse : public chess{//���ʵ��
public:
    horse(int i) : chess((i==0?-2:2)){}
    bool judge_move(chessboard &cb,int startx,int starty,int aimx,int aimy){
        int tempx=aimx-startx,tempy=aimy-starty;
        int sid=cb.getid(startx, starty),aid=cb.getid(aimx, aimy);
        if(sid*aid<=0&&(tempx*tempx+tempy*tempy==5)&&!cb.get(startx+tempx/2,starty+tempy/2))
        return true;
        return false;
    }
};

class soldier : public chess{//�����䣩��ʵ��
public:
    soldier(int c) : chess((c==0?-1:1)){}
    bool judge_move(chessboard &cb,int startx,int starty,int aimx,int aimy){
        int tempx=aimx-startx,tempy=aimy-starty;
        int sid=cb.getid(startx, starty),aid=cb.getid(aimx, aimy);
        if(sid*aid<=0&&sid*tempx<=0){
            if(abs(tempx)==1&&tempy==0) return true;
            if(abs(tempy)==1&&tempx==0)
                if((startx/5==0&&sid>0)||(startx/5==1&&sid<0)) return true;
            return false;
        }
        return false;
    }
};

class general : public chess{//˧��������ʵ��
public:
    general(int c) : chess((c==0?-7:7)){}
    bool judge_move(chessboard &cb,int startx,int starty,int aimx,int aimy){
        int tempx=aimx-startx,tempy=aimy-starty;
        int sid=cb.getid(startx, starty),aid=cb.getid(aimx, aimy);
        if(sid*aid<=0&&tempy*tempy+tempx*tempx==1&&aimx%7>=0&&aimx%7<=2&&aimy>=3&&aimy<=5)
            return true;
        return false;
    }
    ~general(){chessboard::end=false;}
};

class elephant : public chess{//���ࣩ��ʵ��
public:
    elephant(int c) : chess((c==0?-6:6)){}
    bool judge_move(chessboard &cb,int startx,int starty,int aimx,int aimy){
        int tempx=aimx-startx,tempy=aimy-starty;
        int sid=cb.getid(startx, starty),aid=cb.getid(aimx, aimy);
        if(sid*aid<=0&&tempy*tempy+tempx*tempx==8&&startx/5==aimx/5&&!cb.get(startx+tempx/2,starty+tempy/2))
            return true;
        return false;
    }
};

class cannon : public chess{//�ڵ�ʵ��
public:
    cannon(int c) : chess((c==0?-5:5)){}
    bool judge_move(chessboard &cb,int startx,int starty,int aimx,int aimy){
        int tempx=aimx-startx,tempy=aimy-starty;
        int sid=cb.getid(startx, starty),aid=cb.getid(aimx, aimy);
        if(sid*aid<=0&&!(tempx&&tempy)&&(tempx+tempy)){
            int tot=0;
            if(tempx!=0){
                int sign=tempx>0?1:-1;
                for(int i=1;i<abs(tempx);i++)
                    if(cb.get(startx+sign*i,starty)) tot++;
            }
            else{
                int sign=tempy>0?1:-1;
                for(int i=1;i<abs(tempy);i++)
                    if(cb.get(startx,starty+sign*i)) tot++;
            }
            if(!aid)
            {if(!tot) return true;}
            else
            {if(tot==1) return true;}
        }
        return false;
    }
};

class guard: public chess{//ʿ���ˣ���ʵ��
public:
    guard(int c) : chess((c==0?-4:4)){}
    bool judge_move(chessboard &cb,int startx,int starty,int aimx,int aimy){
        int tempx=aimx-startx,tempy=aimy-starty;
        int sid=cb.getid(startx, starty),aid=cb.getid(aimx, aimy);
        if(sid*aid<=0&&tempy*tempy+tempx*tempx==2&&aimx%7>=0&&aimx%7<=2&&aimy>=3&&aimy<=5)
            return true;
        return false;
    }
};

class rook : public chess{//����ʵ��
public:
    rook(int c) : chess((c==0?-3:3)){}
    bool judge_move(chessboard &cb,int startx,int starty,int aimx,int aimy){
        int tempx=aimx-startx,tempy=aimy-starty;
        int sid=cb.getid(startx, starty),aid=cb.getid(aimx, aimy);
        if(sid*aid<=0&&!(tempx&&tempy)&&(tempx+tempy)){
            if(tempx!=0){
                int sign=tempx>0?1:-1;
                for(int i=1;i<abs(tempx);i++)
                    if(cb.get(startx+sign*i,starty)) return false;
            }
            else{
                int sign=tempy>0?1:-1;
                for(int i=1;i<abs(tempy);i++)
                    if(cb.get(startx,starty+sign*i)) return false;
            }
                return true;
        }
        return false;
    }
};

chessboard :: ~chessboard(){
    for(int i=0;i<10;i++)
        for(int j=0;j<9;j++)
            if(c[i][j]!=NULL){
                delete c[i][j];
                c[i][j]=NULL;
            }
}

void chessboard :: init(){//��ʼ�������ӵ�����
    c[0][0]=new rook(0);        c[0][8]=new rook(0);
    c[0][1]=new horse(0);       c[0][7]=new horse(0);
    c[0][2]=new elephant(0);    c[0][6]=new elephant(0);
    c[0][3]=new guard(0);       c[0][5]=new guard(0);
    c[0][4]=new general(0);     c[9][4]=new general(1);
    c[2][1]=new cannon(0);      c[2][7]=new cannon(0);
    c[3][0]=new soldier(0);     c[3][2]=new soldier(0);
    c[3][4]=new soldier(0);     c[3][6]=new soldier(0);
    c[3][8]=new soldier(0);     c[6][8]=new soldier(1);
    c[6][0]=new soldier(1);     c[6][2]=new soldier(1);
    c[6][4]=new soldier(1);     c[6][6]=new soldier(1);
    c[7][1]=new cannon(1);      c[7][7]=new cannon(1);
    c[9][0]=new rook(1);        c[9][8]=new rook(1);
    c[9][1]=new horse(1);       c[9][7]=new horse(1);
    c[9][2]=new elephant(1);    c[9][6]=new elephant(1);
    c[9][3]=new guard(1);       c[9][5]=new guard(1);
}

void chessboard :: show(){
    cout<<"��  ��һ�����������߰�"<<endl<<endl;
    char num[10][4]={"��","һ","��","��","��","��","��","��","��","��"};
    for(int i=0;i<10;i++){
        if(i==5) cout<<"    ������ �� �� �硪����"<<endl;
        cout<<num[i]<<"  ";
        for(int j=0;j<9;j++){
            if(c[i][j]!=NULL)
            cout<<chessword[c[i][j]->get()+7];
            else if((i==1&&j==4)||(i==8&&j==4))
                cout<<"��";
            else
                cout<<"ʮ";
        }
        cout<<endl;
    }
}

void chessboard::play(){
    this->init();
    this->show();
    do{
       int startx,starty,aimx,aimy;
        int sid,aid;
        do{
            sid=aid=0;
            cout<<"��������ʼ����λ����Ŀ��λ�õ����꣺"<<endl;
            cin>>startx>>starty>>aimx>>aimy;
        }while(!this->move(startx,starty,aimx,aimy));
        this->show();
    }while(chessboard::end);
    cout<<"������Ӯ����Player"<<(chessboard::player==1?1:2)<<endl;
}

int main(){
    chessboard C;
    C.play();
}
