#include<bits/stdc++.h> 
#include<windows.h>
#include<conio.h>
#define INF 0x3f3f3f3f
#define N 500005
#define re register
#define Ii inline int
#define Il inline long long
#define Iv inline void
#define Ib inline bool
#define Id inline double
#define ll long long
#define Fill(a,b) memset(a,b,sizeof(a))
#define R(a,b,c) for(register int a=b;a<=c;++a)
#define nR(a,b,c) for(register int a=b;a>=c;--a)
#define Min(a,b) ((a)<(b)?(a):(b))
#define Max(a,b) ((a)>(b)?(a):(b))
#define Cmin(a,b) ((a)=(a)<(b)?(a):(b))
#define Cmax(a,b) ((a)=(a)>(b)?(a):(b))
#define D_e(x) printf("\n&__ %d __&\n",x)
#define D_e_Line printf("-----------------\n")
#define sleep(x) Sleep(x*1000)
#define Pause() printf("Press any key to continue\n"),_getch()
#define Combat_Effectiveness(x) cout<<x.name<<"'s ",printf("Combat Effectiveness:\nAttack=%d\ndefensive=%d\nSpeed=%d\nHP=%d\n",x.attack,x.defensive,x.speed,x.HP);
#define UFFF D_e_Line,printf("This Part Is Unfinished"),D_e_Line,Pause();
using namespace std;
Ii read(){
    int s=0,f=1;char c;
    for(c=getchar();c>'9'||c<'0';c=getchar())if(c=='-')f=-1;
    while(c>='0'&&c<='9')s=s*10+(c^'0'),c=getchar();
    return s*f;
}
Iv print(int x){
    if(x<0)putchar('-'),x=-x;
    if(x>9)print(x/10);
    putchar(x%10^'0');
}
Iv Print(string s){
    int len=s.size()-1;
    R(i,0,len)
        printf("%c",s[i]),sleep(0.1);
/*
    (char *p)
    while(1){
        if(*p!=0)
            printf("%c",*p++);
        else
            break;
        Sleep(100);
    }
    putchar('\n');
*/
}
struct Character{
    int 
        attack,
        defensive,
        speed,
        HP;
    string
        name;
}Philip,Magwitch;
int key;
set<string>Backpack;
Iv Init_Chapter_One(){
    Backpack.insert("Wooden stick");//Note: Go to learn Trie Tree. 
    Philip.name="Philip";
    Philip.attack=100;
    Philip.defensive=100;
    Philip.speed=100;
    Philip.HP=1000;
    Magwitch.name="Magwitch";
    Magwitch.attack=500;
    Magwitch.defensive=30;
    Magwitch.speed=2000;
    Magwitch.HP=2500;
}
Iv View_Backpack(){
    D_e_Line;
    for(set<string>::iterator i=Backpack.begin();i!=Backpack.end();++i)
        cout<<*i<<"\n";
    D_e_Line;
/*
    printf("Press 'P' to view backpack\n'C' to continue\n");
    char opt;
    while(cin>>opt){
        if(opt=='P'||opt=='p'){
            View_(),
            Pause();break;
        }
        if(opt=='C'||opt=='c')break;
    }
*/
/*
struct Aho_Corasick_Automaton{//Note: This AC automation can be used as  only once.
    int
        ch[N][80],
        val[N],
        fail[N],
        cnt;
    void clear(){
        Fill(ch,0),Fill(val,0),Fill(fail,0),index=0;
    }
    void insert(char *s){
        int len=strlen(s),u=0;
        R(i,0,len-1){
            int v=s[i]-'0';
            if(!ch[u][v])ch[u][v]=++cnt;
            u=ch[u][v];
        }
        ++val[u];
    }
    void build(){
        queue<int>q;
        R(i,0,26-1)//
            if(ch[0][i])
                fail[ch[0][i]]=0,q.push(ch[0][i]);
        while(!q.empty()){
            int u=q.front();q.pop();
            R(i,0,26-1)
                if(ch[u][i])
                    fail[ch[u][i]]=ch[fail[u]][i],
                    q.push(ch[u][i]);
                else
                    ch[u][i]=ch[fail[u]][i];
        }
    }
    int query(char *s){
        int len=strlen(s),u=0,tot=0;
        int *tmp=new int[105];
        R(i,0,len-1){
            u=ch[u][s[i]-'0'];
            for(int j=u;j&&~val[j];j=fail[j])
                tot+=val[j],tmp[j]=val[j],val[j]=-1;
        }
        R(i,0,len-1){
            u=ch[u][s[i]-'0'];
            for(int j=u;j;j=fail[j])
                val[j]=tmp[j];
        }
        delete []tmp;
        return tot;
    }
    bool exist(char *s){
        int len=strlen(s),u=0,flag=0;
        int *tmp=new int[105];
        R(i,0,len-1){
            u=ch[u][s[i]-'0'];
            for(int j=u;j&&~val[j];j=fail[j]){
                flag+=val[j],tmp[j]=val[j],val[j]=-1;
                if(flag)
                    break;
            }
        }
        R(i,0,len-1){
            u=ch[u][s[i]-'0'];
            for(int j=u;j;j=fail[j])
                val[j]=tmp[j];
        }
        delete []tmp;
        return flag;
    }
};
*/
}
Ii Fight(Character A,Character B){
    system("color 4E");
    srand((unsigned)(time(NULL)));
    int HP_one=A.HP,HP_two=A.HP,round=0;
    while(A.HP>0&&B.HP>0){
        if(round&1){//A's turn
            bool dodge=(B.speed-A.speed>=rand());
            if(dodge){
                printf("B Dodged\n"),
                sleep(1);++round;continue;
            }
            int attack_power=(rand()-3*B.defensive+A.attack)%A.attack+A.attack/50;
            B.HP-=attack_power;
            printf("B received %d points of hurt. Residual HP= %d\n",attack_power,B.HP);
            sleep(1);
        }
        else{//B's turn
            bool dodge=(A.speed-B.speed>=rand());
            if(dodge){
                printf("A Dodged\n"),
                sleep(1);++round;continue;
            }
            int attack_power=(rand()-3*A.defensive+B.attack)%B.attack+B.attack/50;
            A.HP-=attack_power;
            printf("A received %d points of hurt. Residual HP= %d\n",attack_power,A.HP);
            sleep(1);
        }
        ++round;
    }
    if(A.HP<0){
        printf("Fighter Two Win\n");
        Cmax(A.HP,HP_one/3<<1),Cmax(B.HP,HP_two/3<<1);
        return 2;
    }
    else{
        printf("Figher One Win\n");
        Cmax(A.HP,HP_one/3<<1),Cmax(B.HP,HP_two/3<<1);
        return 1;
    }
}
string str(int n1,int n2){
    return string(n1,' ')+string(n2,'@');
}
Iv Show_Stick_Man(int index){
    if(index==1){
        printf("\n");
        printf("   ****\n");
        printf("   *  *   *\n");
        printf("   ****  *\n");
        printf("*********\n");
        printf("    ***\n");
        printf("    ***\n");
        printf("    ***\n");
        printf("   *  *\n");
        printf("  *   *\n");
        printf("   *  *\n");
        printf("    * *\n");
        printf("     **\n");
        printf("\n");
        return;
    }
    if(index==2){
        printf("\n");
        printf("       ~~~~~~~~~~~~~~~~~\n");
        printf("       ~~~~~~~~~~~~~~~~~~\n");
        printf("      ~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
        printf("      *****     *****\n");
        printf("        *         *\n");
        printf("      ----     ----\n");
        printf("              ^\n");
        printf("             ^\n");
        printf("             ^\n");
        printf("          _______)  \n");
        printf("\n");
        return;
    }
    if(index==3){
        printf("\n"),
        printf("###############################\n"),
        printf("###############################\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###        **               ###\n"),
        printf("###        **               ###\n"),
        printf("###        **               ###\n"),
        printf("###        **               ###\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###                         ###\n"),
        printf("###############################\n"),
        printf("###############################\n"),
        printf("###############################\n"),
        printf("\n");
        return;
    }
    if(index==4){
        string str(int,int);
        cout<<str(26,8)<<endl;
        cout<<str(19,6)<<str(10,6)<<endl;
        cout<<str(11,9)<<str(22,6)<<endl;
        cout<<str(12,2)<<str(3,5)<<str(17,4)<<str(3,2)<<endl;
        cout<<str(10,2)<<str(7,3)<<str(17,3)<<str(6,2)<<endl;
        cout<<str(8,2)<<str(40,2)<<endl;
        cout<<str(6,17)<<str(13,17)<<endl;
        cout<<str(5,7)<<str(12,1)<<str(10,7)<<str(12,1)<<endl;
        cout<<str(5,15)<<str(5,1)<<str(9,15)<<str(5,1)<<endl;
        cout<<str(4,2)<<str(2,3)<<str(10,4)<<str(13,3)<<str(10,5)<<endl;
        cout<<str(3,2)<<str(50,2)<<endl;
        cout<<str(3,1)<<str(52,1)<<endl;
        cout<<str(3,1)<<str(52,1)<<endl;
        cout<<str(2,2)<<str(52,2)<<endl;
        cout<<str(2,2)<<str(52,2)<<endl;
        cout<<str(2,2)<<str(52,2)<<endl;
        cout<<str(2,2)<<str(52,2)<<endl;
        cout<<str(3,1)<<str(5,1)<<str(40,1)<<str(5,1)<<endl;
        cout<<str(3,2)<<str(5,1)<<str(38,1)<<str(5,2)<<endl;
        cout<<str(4,1)<<str(6,2)<<str(34,2)<<str(6,1)<<endl;
        cout<<str(5,1)<<str(7,3)<<str(28,3)<<str(7,1)<<endl;
        cout<<str(6,1)<<str(8,4)<<str(22,4)<<str(8,1)<<endl;
        cout<<str(7,2)<<str(10,5)<<str(12,5)<<str(10,2)<<endl;
        cout<<str(9,2)<<str(12,14)<<str(12,2)<<endl;
        cout<<str(11,3)<<str(32,3)<<endl;
        cout<<str(14,3)<<str(26,3)<<endl;
        cout<<str(17,5)<<str(16,5)<<endl;
        cout<<str(22,16)<<endl;
    }
}
#define Print_Chapter_Slowly()    printf("C"),sleep(0.2),printf("h"),sleep(0.2),printf("a"),sleep(0.2),printf("p"),sleep(0.2),printf("t"),sleep(0.2),printf("e"),sleep(0.2),printf("r"),sleep(0.2),printf(" "),sleep(0.2)
#define Cthulu_Color system("color a"),system("color b"),system("color c"),system("color d"),system("color e"),system("color f"),system("color 0"),system("color 1"),system("color 2"),system("color 3"),system("color 4"),system("color 5"),system("color 6"),system("color 7"),system("color 8"),system("color 9"),system("color ab"),system("color ac"),system("color ad"),system("color ae"),system("color af")
//Chapter One
class Chapter_One{
    public:
        void Use_BlackBread(Character &A){
            A.attack+=500,
            A.defensive+=500,
            A.speed+=500,
            A.HP+=3500;
        }
        void  Make_Friend_Magwitch(){
            system("color 3E"),sleep(2);
            Print("\n\tWe? What!\n"),sleep(2);
            Print("\tAre you fucking deaf?\nHe sounds angry.\n\tAny way, I haven't eat anything for a week.\n\tGive me your bread now!\n"),sleep(2);
            Print("\tPlease. Then he adds, and so I do.\n"),sleep(2);
            Use_BlackBread(Magwitch);
            Backpack.erase("BlackBread");
            Print("\nMagwitch Used BlackBread\n");
            Combat_Effectiveness(Magwitch);
            D_e_Line;
            Print("If I tell my sister about that day.\nShe'll surely congratulate me with a rolling pin.\n"),sleep(2);
            Print("But believe it or not, we talked for a whole night.\n"),sleep(3);
            Print("About life experience\n"),sleep(2),
            Print("About lonliness\n"),sleep(2),
            Print("About the peaceful winter night...\n"),sleep(4.5);
            Print("Chapter One Over\n");
            return;
        }
        void Fight_Wolf(Character A){
            Character Wolf;
            Wolf.attack=1000000,
            Wolf.defensive=1000000,
            Wolf.speed=100000,
            Wolf.HP=10000000;
            Wolf.name="Wolf";
            Combat_Effectiveness(Wolf);
            sleep(3);
            printf("Fighter one: "),cout<<A.name,printf("\nFighter two: Wolf\n");
            sleep(3);
            int result=Fight(A,Wolf);//Plot kill
            if(result!=2)
                Fight_Wolf(A);
            else{
                Print("You Dead\n");
                sleep(3);
                system("color 5D");
                Print("When life is broken like glaze, will my friends still remember me? Do I really have a friend...\n");
                sleep(5);
                Print("The End");
                Pause();
                exit(0);
            }
        }
//        void Fight_Wolf(Character A,Character B){
//            Character Wolf;
//            Wolf.attack=10,
//            Wolf.defensive=10,
//            Wolf.speed=10000,
//            Wolf.HP=100;
//            Combat_Effectiveness(Wolf);
//            sleep(3);
//            printf("%s Watch out!!\n%s Stay by my side!!!",A.name,B.name);
//            sleep(3);
//            printf("Fighter one: %s and %s Fighter two: Wolf",A.name,B.name);
//            Character Mars;
//            Mars.attack=INF,
//            Mars.defensive=INF,
//            Mars.speed=100,
//            Mars.HP=INF;
//            Fight(Mars,Wolf);
//            sleep(3);
//            Make_Friend_Magwitch();
//        }
        void Chapter_One_Main(){
            //Contents: Philip first meet Abel Magwitch in the cemetery.//Joe Gargery
            Init_Chapter_One();
            Print_Chapter_Slowly(),
            printf("O"),sleep(0.2),
            printf("n"),sleep(0.2),
            printf("e\n"),sleep(0.8);
            system("cls");
            Print("Since I became a orphan, I usually go to the cemetery.\n");
            sleep(3);
            Print("My mom and dad sleep here.\n");
            sleep(3);
            Print("My sister raised me.\n");
            sleep(3);
            Print("She often hits me, says that I was a waste.\n");
            sleep(3);
            Print("But his husband, my only friend Joe always at my side.\nIt's him conceled from my sister, giving me this black bread.\n");
            sleep(3);
            Pause();
            Backpack.insert("BlackBread");
            printf("\nYou Get BlackBread\n");
            Pause();
            printf("Press 'P' to view backpack\n'C' to continue\n");
            char opt;
            while(cin>>opt){
                if(opt=='P'||opt=='p'){
                    View_Backpack(),
                    Pause();break;
                }
                if(opt=='C'||opt=='c')break;
            }
            system("cls");
            system("color 4E");
            Print("\nSuddenly a black shadow flew through the grass\n"),sleep(2);
            Print("What's that?\n");
            printf("Choose my decision:\n");
            printf("1: Go and see what it is.\n2: I'd better leave here now.\n");
            while(cin>>opt){
                if(opt=='1')break;
                else if(opt=='2'){
                    Print("I tried to run, but It's too late.\n"),sleep(2);
                    break;
                }
            }
            Print("A dirty man, looked fierce and malicious,  appeared with electronic bracelet\nGrabed my hand!\n"),sleep(2),
            Print("\n\tYou Fucking boy, Give me Your bread. Now!\n"),sleep(2);
            Print("What should I do? Should I give up Joe's bread?\n"),sleep(2);
            printf("Choose my decision-- I HAVE NO TIME!\n1:Fight with him\n2:Run\n3:Give him.\n");
            while(cin>>opt){
                if(opt=='1'){
                    Backpack.erase("BlackBread");
                    Use_BlackBread(Philip); 
                    printf("Philip Used BlakBread\n");
                    Combat_Effectiveness(Philip);
                    sleep(2);
                    printf("Fighter 1: Philip\nFighter 2: Magwitch\n"),sleep(2);
                    int result=Fight(Philip,Magwitch);
                    if(result==1){
                        Print("\nI beat him down and run to the forest\n");
                        system("color 3A"),sleep(2);
                        Print("Even in the coldest winter, there are still green and vitality.\n"),sleep(2);
                        printf("My HP has only %d left. So I stop\nListen to the melody of the wind\nThe snowflakes falls, dancing like an fairy.\n",Philip.HP),sleep(2);
                        Print("But why is there a little red?\n");
                        system("color 4E"),sleep(2);
                        Print("Oh no! That's blood.\n"),sleep(2);
                        Print("Oh Jesus, something is attacking me!\n");
                        Combat_Effectiveness(Philip);
                        Fight_Wolf(Philip);//End_1
                    } 
                    else{
                        Print("I losed, closing my eyes to wait for death\n"),sleep(2);
                        Make_Friend_Magwitch();
                    }
                    return;
                }
                else if(opt=='2'){
                    Print("I'm too slow. I am caught by him and have to fight.\n"),sleep(2),
                    printf("\nFighter one: Philip\nFighter two: Magwitch\n");
                    Combat_Effectiveness(Philip);sleep(2);
                    Fight(Philip,Magwitch),
                    Make_Friend_Magwitch();
                    return;
                }
                else if(opt=='3'){
                    Make_Friend_Magwitch();
                    return;
                }
            }
        }
}Chapter_One;
//Chapter Two
class Door_2048{
    private:
        int mp[4][4],nn;
    public:
        void showmp(){
            cout<<setw(58)<<"Get at least 512 points to enter the room"<<endl;
            cout<<setw(50)<<"|-----------------------|"<<endl;
            R(i,0,3){
                cout<<setw(24)<<"";
                  R(j,0,3){
                       if(!mp[i][j])
                        cout<<setw(2)<<"|"<<setw(4)<<" ";
                       else
                        cout<<setw(2)<<"|"<<setw(4)<<mp[i][j];
                       if(j==3)
                         cout<<setw(2)<<"|"<<endl,
                         cout<<setw(50)<<"|-----------------------|"<<endl;
                  }
             }
        }
        void newgame(){
             nn=1;
             R(i,0,3)
                R(j,0,3)
                    mp[i][j]=0;
            srand((unsigned)time(NULL));
            int m=rand()%4,n=rand()%4,p=rand()%4,q=rand()%4;
            mp[m][n]=mp[p][q]=2,
            showmp();
        }
        int if2n(int x){
            bool flag=0;
            R(n,1,11){
                if(x==pow(2,n)){
                    flag=1;
                    if(n>nn)
                        nn=n;
                    return flag;
                }
            }
            return flag;
        }
        int upmove(){
            bool flag=0;
            R(j,0,3)
                R(i,0,3)
                    if(if2n(mp[i][j]+mp[i+1][j]))
                        mp[i][j]=mp[i][j]+mp[i+1][j],
                        mp[i+1][j]=0,
                        flag=1;
            return flag;
        }
        int downmove(){
             bool flag=0;
             R(j,0,3)
                 nR(i,3,1)
                    if(if2n(mp[i][j]+mp[i-1][j])==1)
                        mp[i][j]=mp[i][j]+mp[i-1][j],
                        mp[i-1][j]=0,
                        flag=1;
            return flag;
        }
        int leftmove(){
            bool flag=0;
            R(i,0,3)
                R(j,0,2)
                    if(if2n(mp[i][j]+mp[i][j+1])==1)
                        mp[i][j]=mp[i][j]+mp[i][j+1],
                        mp[i][j+1]=0,
                        flag=1;
                return flag;
        }
        int rightmove(){
            bool flag=0;
            R(i,0,3)
                nR(j,3,1)
                if(if2n(mp[i][j]+mp[i][j-1])==1)
                    mp[i][j]=mp[i][j]+mp[i][j-1],
                    mp[i][j-1]=0,
                    flag=1;
            return flag;
        }
        int testup(){
            bool flag=0;
            R(j,0,3)
                R(i,0,2)
                    if((if2n(mp[i][j]+mp[i+1][j])==1)&&mp[i+1][j])
                        flag=1;
            return flag;
        }
        int testdown(){
            bool flag=0;
            R(j,0,3)
                nR(i,3,1)
                    if((if2n(mp[i][j]+mp[i-1][j])==1)&&mp[i-1][j])
                        flag=1;
            return flag;
        }
        int testleft(){
            bool flag=0;
            R(i,0,3)
                R(j,0,2)
                    if((if2n(mp[i][j]+mp[i][j+1])==1)&&mp[i][j+1])
                        flag=1;
            return flag;
        }
        int testright(){
            bool flag=0;
            R(i,0,3)
                nR(j,3,1)
                    if((if2n(mp[i][j]+mp[i][j-1])==1)&&mp[i][j-1])
                        flag=1;
            return flag;
        }
        int mpmax(){
            int maxx=mp[0][0];
            R(i,0,3)
                R(j,0,3)
                    if(mp[i][j]>maxx)
                        maxx=mp[i][j];
            return maxx;
        }
        int win(){
            bool flag=0;
            if(mpmax()>=2048)
                cout<<setw(45)<<"You Beat Down The Door!"<<endl,
                flag=1;
            return flag;
        }
        int GameOver(){
            bool flag;
            if(testup()+testdown()+testleft()+testright()==0)
                cout<<setw(43)<<"Geme Over!"<<endl,
                flag=1;
            return flag;
        }
        void addup(){
            srand((unsigned)time(NULL));
            int n;
            if(nn==1)n=1;
            else n=(rand()%(nn)+1); 
            int newnumber=pow(2,n);
            nR(i,3,0)
                R(j,0,3)
                    if(!mp[i][j]){
                        mp[i][j]=newnumber;return;
                    }
        }
        void adddown(){
            srand((unsigned)time(NULL));
            int n;
            if(nn==1)n=1;
            else n=(rand()%(nn)+1); 
            int newnumber=pow(2,n);
            R(i,0,3)
                R(j,0,3)
                    if(!mp[i][j]){
                        mp[i][j]=newnumber;return;
                    }
        }
        void addleft(){
            srand((unsigned)time(NULL));
            int n;
            if(nn==1)n=1;
            else n=(rand()%(nn)+1); 
            int newnumber=pow(2,n);
            nR(j,3,0)
                R(i,0,3)
                    if(!mp[i][j]){
                        mp[i][j]=newnumber;return;
                    }
        }
        void addright(){
            srand((unsigned)time(NULL));
            int n;
            if(nn==1)n=1;
            else n=(rand()%(nn)+1); 
            int newnumber=pow(2,n);
            R(j,0,3)
                R(i,0,3)
                    if(!mp[i][j]){
                        mp[i][j]=newnumber;return;
                    }
        }
        int Direction(){
            int ret=0;
            while(!ret){
                int ch=getch();
                if(isascii(ch))continue;
                ch=getch();
                switch(ch){
                    case 72:ret=2;break;
                    case 75:ret=1;break;
                    case 77:ret=3;break;
                    case 80:ret=4;break;
                    default:break;
                }
            }
            return ret;
        }
        void Door_2048_Main(){
            int points_biggest=-1;
            nn=1;
            system("color 85");
            int play=1,flag_win=0;
            while(play){
                system("cls"),
                newgame();
                while(win()+GameOver()==0){
                    int c=Direction();
                    switch(c){
                        case 2:
                            if(testup()){
                                upmove();
                                addup();
                                system("cls");
                                showmp();
                            }
                            break;
                        case 4:
                            if(testdown()){
                                downmove();
                                adddown();
                                system("cls");
                                showmp();
                            }
                            break;
                        case 1:
                            if(testleft()){
                                leftmove();
                                addleft();
                                system("cls");
                                showmp();
                            }
                            break;
                        case 3:
                            if(testright()){
                                rightmove();
                                addright();
                                system("cls");
                                showmp();
                            }
                            break;
                        default:
                            break;
                    }
                }
                int points=mpmax();
                cout<<setw(43)<<"You Got："<<points<<endl;
                Cmax(points_biggest,points);
                if(points_biggest>=512){////512
                    flag_win=1;
                    cout<<setw(45)<<"You Got The Key!"<<endl;
                }
                cout<<setw(60)<<"Try again? Input '1'. or input '0 for ending"<<endl;
                cin>>play;
                while(play!=1&&play!=0)
                    cout<<"Unknown Index!"<<endl,
                    cin>>play;
            }
            if(!flag_win){
                Print("After so many years, as a blacksmith, I always think... What's waiting for me behind that door...\n"),sleep(2);
                Print("But I'm old...\n"),sleep(4.5);
                printf("The End\n");
                Pause();
                exit(0);
            }
            Backpack.insert("The Key Of Dust");
            printf("You Got The Key Of Dust\n");
            sleep(2);
            printf("Input 'P' to view backpack, or 'C' to continue.\n");
            char opt;
            while(cin>>opt){
                if(opt=='P'||opt=='p'){
                    View_Backpack();
                    Pause();break;
                }
                else if(opt=='C'||opt=='c')
                    break;
            }
            system("cls");
            return;
        }
    friend class Miss_Havisham_House;
}Door_2048;
class Miss_Havisham_House{
    private:
        bool ReturnOldPlace;
    public:
        void Gate(){
            system("color 0E");
            Print("A pretty girl shouts to me contemptuously\n"),sleep(2);
            Print("\n\tTownship!\n\tGet the door open by yourself.\n"),sleep(3),
            printf("What should I do?\n"),sleep(2);
            printf("Choose Your Decision:\n1: Get the key of the door\n2: Ignore her and leave\n");
            char opt;
            while(cin>>opt)
                if(opt=='1'||opt=='2'){
                    if(opt=='2')
                        Print("But this is not polite.\n"),sleep(2);
                    Print("There is a note on the door, which is writed:\n"),sleep(2.5);
                    Print("\n\tMerciful sir, please unlock the dusty secret behind the door.\n\t2048 runners have been released!\n");
                    Pause();
                    Door_2048.Door_2048_Main();
                    break;
                }
        }
        void Hall(int index){
            if(index==1){
                system("color DE");
                Print("I see Miss.Havisham now. She's as emaciated as a fowl.\n"),sleep(2);
                Print("\tNice to meet you, my friend.\n"),sleep(2);
                Print("\tYou must fall in love with my Estella!\nHahahahahaha...\n"),sleep(4.5);
                Print("\nAfter a few time, I left.\n");
                return;
            }
            Print("I see her again.\n"),sleep(2);
            Print("I never forget this woman, who as emaciated as a fowl.\n"),sleep(2);
            Print("\n\tIt's time to tell the truth, Miss.Havisham.\n"),sleep(2);
            Print("\tWho are you! Why you give me The Key Of Dust!\n"),sleep(2);
            Print("\n\tHave you fell in love with my Estella?\nShe smiles and then screams.\n"),sleep(2);
            Print("\tOh~ Dear Pip, you have my husband's taste.\n\tHave you seen him? He's name is Magwitch.\n"),sleep(2);
            R(i,1,3)Cthulu_Color;
            Print("\n\tNo!!!!!!\nI cried out.\n"),
            Print("But then I begin to understand what has happened...\n"),sleep(2);
            return;
        }
        void Garden(){
            Character Herbert;
            Herbert.attack=150;
            Herbert.defensive=20;
            Herbert.speed=50;
            Herbert.HP=850;
            Herbert.name="Herbert";
            Print("\tHey, I'm Herbert Pocket.\n\tLet's fight\n"),sleep(2);
            Print("A boy with gentlemanly look appeared and shout.\n"),sleep(2);
            printf("What should I do?\n");
            printf("Choose my decision:\n1: Fight\n2: Run\n");
            char opt;
            while(cin>>opt)
                if(opt=='1'||opt=='2'){
                    if(opt=='2')
                        printf("You are too slow, and have too fight.\n");
                    break;
                }
            putchar('\n');
            Combat_Effectiveness(Philip);
            putchar('\n');
            sleep(3);
            Combat_Effectiveness(Herbert);
            Pause();
            printf("Fighter One:Philip\nFighter Two: Herbert\n");
            int result=Fight(Philip,Herbert);
            if(result==1)
                Print("\n\tThis is not the ending.\nHerbert shouts and runs away.\n");
            else
                Print("\n\tYou bastard! Do not close to my Estella!\nHerbert shouts and goes away.\n");
        }
        void Basement(){
            if(!ReturnOldPlace){
                Print("There's an old man screaming strangely.\n");
                sleep(3);
                Print("\n\tCthulhu~ Cthulhu~ Cthulhu~.\n");
                printf("Choose my decision:\n1: Go to see him.\n2: I'd better leave.\n");
                char opt;
                while(cin>>opt)
                    if(opt=='2')return;
                    else if(opt=='1'){
                        Print("\n\tOh~ Merciful sir, thanks for your kind.\n"),sleep(2);
                        Print("He suddenly runs away, leaving a book with black cover.\n"),sleep(2);
                        Backpack.insert("<<HarryPotterAndTheDeathlyHallows>>");
                        printf("\nYou Get <<HarryPotterAndTheDeathlyHallows>>\n");
                        printf("\nPress 'P' to view backpack\n'C' to continue\n");
                        char opt;
                        while(cin>>opt){
                            if(opt=='P'||opt=='p'){
                                View_Backpack(),
                                Pause();break;
                            }
                            if(opt=='C'||opt=='c')break;
                        }
                        ReturnOldPlace=1;
                        return;
                    }
            }
            Print("\nCthulhu~ Cthulhu~ Cthulhu~.\n");
            R(i,1,3)Cthulu_Color;
            Print("I suddenly realized what the old man I met ten years ago said.\n");
            Print("The one who is still screaming here is a Believer!\n"),sleep(2);
            Print("!!!!!!!!!!!!!!!!\n");
            Print("He sees me and walks towards me.\n"),sleep(2);
            Print("I am so shocked that I can't move my legs.\nWill I dead?\nHere?\n"),sleep(2);
            Print("\n\tOh~ Merciful sir~ You are our Majesty~\n\tHope the cruel god sends holy blood on you!\n"),sleep(2);
            Print("\tMerciful sir~ Have you take our Bible?\n"),sleep(2);
            Print("I remembered the book he offered me.\nI take it out from my backpack\n"),sleep(2);
            Print("On the cover, there is a sentence.\nCthulu is The Savior. Do not let Light blames our Savior.\n");
            Print("Oh~ loyal Believer, only Light's bood will cleanse us from sin...\n"),sleep(2);
            Print("\n\tWhy you give me this book?\nI asked."),sleep(2);
            Print("\n\tStop our Savior,\nStop our Crying Daughter,\nStop Havisham!\n"),sleep(2);
            Print("\nThen he disappered again, leaving me stand still...\n"),sleep(2);
            Print("It's clear Havisham plays an important role for today.\nBut if the Savior is Cthulu, who is the 'Crying Daughter'?\nWhat is Estella...\n"),sleep(2);
            return;
        }
        void ReturnTime(){
            system("color 81");
            Print("Every time I look back, this house always appears in my mind.\n");
            Print("No matter how far I have been, this is the start place.\n");
            Print("Where I got The Dust Of Key\nWhere I met Estella...\n"),sleep(2);
ChooseDestination:
            printf("\nWhere should I go next?\n1: Hall\n2: Garden\n");
            if(ReturnOldPlace)printf("3: Basement\n");
            char opt;
            while(cin>>opt){
                if(opt=='1'){
                    Hall(2);
                    return;
                }
                if(opt=='2'){
                    Print("\nThe garden is overgrown with weeds.\n"),sleep(2);
                    Print("The rock Herbert and I used to fight on has disappered.\n"),sleep(2);
                    Print("Without memories, there's nothing.\n");
                    goto ChooseDestination;
                }
                if(opt=='3'&&ReturnOldPlace){
                    Basement();
                    goto ChooseDestination;
                }
            }
        } 
}Havisham_House;
class Chapter_Two{
    public:
        void Chapter_Two_Main(){
            //contents: Magwitch was arrested. Philip was invited to Miss.Havisham's house, where he met Estella.
            Print_Chapter_Slowly(),
            printf("T"),sleep(0.5),
            printf("w"),sleep(0.5);
            printf("o\n"),sleep(0.5);
            system("color 58"),sleep(3);
            Print("The next day,\nbecause of the tracker on the electronic bracelet, Magwitch was arrested...\n"),sleep(2);
            Print("Three years passed, I have been a teenager.\n\tRobust\n\t\tIntelligent\n\t\t\tCharming\n"),sleep(2);
            Print("But have no friend except Joe\n"),sleep(2);
            Print("One day, he said...\n");
            Show_Stick_Man(1);
            Print("\tPip! You are visited to Miss.Havisham's house!\n"),sleep(2);
            Print("\n\tI What?\n"),sleep(2);
            Print("\nThe next day, I got the carriage to the Miss.Havisham's House...\n");
            Pause();
            system("cls");
            system("color 2E"),sleep(3);
            Print("And now here it is...\n"),
            Pause();
            Havisham_House.Gate();
            system("cls");
            printf("Where should I go next?\n"),sleep(2);
            printf("Choose my decision:\n1: Garden\n2: Hall\n3: Baseroom\n");
            char opt;
            bool flag_Garden=0,flag_Hall=0,flag_Basement=0;
            while(cin>>opt){
                if(opt=='1'){Havisham_House.Garden();flag_Garden=1;break;}
                else if(opt=='2'){Havisham_House.Hall(1);flag_Hall=1;break;}
                else if(opt=='3'){Havisham_House.Basement();flag_Basement=1;break;}
            }
            sleep(1.5);
            Print("It's not too late, I may go to another palce.\n"),sleep(2);
            printf("Choose my decision:\n");
            if(flag_Hall){
                printf("1: Garden\n2: Basement\n3: Just leave\n");
                while(cin>>opt){
                    if(opt=='1'){Havisham_House.Garden();break;}
                    else if(opt=='2'){Havisham_House.Basement();break;}
                    else if(opt=='3')break;
                }
            }
            if(flag_Garden){
                printf("1: Basement\n2: Hall\n3: Just leave\n");
                while(cin>>opt){
                    if(opt=='1'){Havisham_House.Basement();break;}
                    else if(opt=='2'){Havisham_House.Hall(1);break;}
                    else if(opt=='3')break;
                }
            }
            if(flag_Basement){
                printf("1: Garden\n2: Hall\n3: Just leave\n");
                while(cin>>opt){
                    if(opt=='1'){Havisham_House.Garden();break;}
                    else if(opt=='2'){Havisham_House.Hall(1);break;}
                    else if(opt=='3')break;
                }
            }
            sleep(5);
            Print("After several years,\nI sometimes wonder what'll happen if I did not enter that house.\n"),sleep(2);
            Print("But there's no denying that\nit's that house changed me and what happened afterwards...\n"),sleep(4.5);
            Print("Chapter Two Over.\n");
            return;
        }
    friend class Miss_Havisham_House;    
}Chapter_Two;
//Chapter Three 
class Tsinghua_Contest{
    private:
        int grades;
    public:
        void ExamOffice(){
            grades=0;
            Print("I meet the chief examiner--\nMr.Jaggers, a serious and stingy old gentleman.\n"),sleep(2);
            Print("\n\tHey idiot! You need pass at least one exam.\n"),sleep(2);
            Print("\tTell me your choices now!\n"),sleep(2);
            Choose_Exam();
        }
        void Choose_Exam(){
            printf("\nChoose My Exam:\n1: Graph\n2: Math\n3: Dynamic\n4: DataStructure\n5: HighPrecision\n101: Why no LOL?\n");//Else subjects will be added later.
            int opt;
            while(cin>>opt){
                if(opt==1){Graph();break;}
                if(opt==2){Math();break;}
                if(opt==3){Dynamic();break;}
                if(opt==4){DataStructure();break;}
                if(opt==5){HighPrecision();break;}
                if(opt==101){Failure();return;}
            }   
        }
        void Failure(){
            system("color 89"),sleep(2);
            Print("\nMany years have gone.\n"),sleep(2);
            Print("One day, when I was forging an iron bar.\n"),sleep(2);
            Print("I suddenly thought, what'll happen if I passed that exam...\n"),sleep(2);
            Print("But time waits for no man...\n"),sleep(4.5);
            Print("The End\n");
            Pause();
            exit(0);
        }
        void Graph(){
            system("start http://poj.org/problem?id=1220"),sleep(1);//
            Print("\nI believe I have finished them all!\n"),sleep(2);
            Show_Stick_Man(4);
            printf("Do I wan't more?\n1: Let rain down more violent strom!\n2: I have had enough.");
            char opt;
            while(cin>>opt){
                if(opt=='1'){Choose_Exam();return;}
                if(opt=='2')return;
            }           
        }
        void Math(){
            system("start http://poj.org/problem?id=1220"),sleep(1);//
            Print("\nI believe I have finished them all!\n"),sleep(2);
            Show_Stick_Man(4);
            printf("Do I wan't more?\n1: Let rain down more violent strom!\n2: I have had enough.");
            char opt;
            while(cin>>opt){
                if(opt=='1'){Choose_Exam();return;}
                if(opt=='2')return;
            }           
        }
        void Dynamic(){
            system("start http://poj.org/problem?id=1220"),sleep(1);//
            Print("\nI believe I have finished them all!\n"),sleep(2);
            Show_Stick_Man(4);
            printf("Do I wan't more?\n1: Let rain down more violent strom!\n2: I have had enough.");
            char opt;
            while(cin>>opt){
                if(opt=='1'){Choose_Exam();return;}
                if(opt=='2')return;
            }           
        }
        void DataStructure(){
            system("start http://poj.org/problem?id=1220"),sleep(1);//
            Print("\nI believe I have finished them all!\n"),sleep(2);
            Show_Stick_Man(4);
            printf("Do I wan't more?\n1: Let rain down more violent strom!\n2: I have had enough.");
            char opt;
            while(cin>>opt){
                if(opt=='1'){Choose_Exam();return;}
                if(opt=='2')return;
            }           
        }
        void HighPrecision(){
            system("start http://poj.org/problem?id=1220"),sleep(1);//
            Print("\nI believe I have finished them all!\n"),sleep(2);
            Show_Stick_Man(4);
            printf("Do I wan't more?\n1: Let rain down more violent strom!\n2: I have had enough.");
            char opt;
            while(cin>>opt){
                if(opt=='1'){Choose_Exam();return;}
                if(opt=='2')return;
            }
        }
        friend class Chapter_Three;
}Contest;
class Chapter_Three{//Content: This time philip received a grant from an unidentified person. Go to Tsinghua to study.
    public:
        void Chapter_Three_Main(){
            Print_Chapter_Slowly(),
            printf("T"),sleep(0.5),
            printf("h"),sleep(0.5),
            printf("r"),sleep(0.5),
            printf("e"),sleep(0.5),
            printf("e\n"),sleep(0.5);
            system("color 1E");
            Print("Not long since I came back from Miss.Havisham's House,\nI received a grant from an unidentified person.\n"),sleep(2);
            Print("Miss.Havisham is right. I fell in love with Estella.\n"),sleep(2);
            Print("So with this unknown help( It must from Miss.Havisham), I must pass a exam.\n"),sleep(2);
            Print("To proof that I can come to Tsinghua!\n");
            Show_Stick_Man(2);
            Pause();
            Contest.ExamOffice();
            Pause();
            Print("\n\tI believe you all achieved the basic goal.\nMr.Jaggers said with an ill-intentioned smile.\n"),sleep(2);
            Print("\tBut team's work is more important for you little idiot.\n"),
            Print("\tSo your last task is teaming up every two people, then compare with each other.\n"),sleep(2);
            printf("\nWho would be my teammate?\n1: A pretty girl( Mary Sue)\n2: A pretty boy( Gay Friend)\n");
            char opt;
            while(cin>>opt){
                if(opt=='1'){Print("She refused...\n");break;}
                if(opt=='2')break;
            }
            Print("\n\tOh you are...\nThe pretty boy cried out.\n"),sleep(2);
            Print("\nI have also recognized him.\n"),sleep(2);
            Print("\n\tHerbert...\n"),sleep(2);
            Print("As an saying goes, No fight, no friend.\nWe soon gain a strong relationship.\nAnd the competition begins...\n"),sleep(2);
            Print("\nOur competitors are that pretty girl and a awful guy called Drummle.\n"),sleep(2);
            Print("\nI suddenly realized who the girl is.\nI never forget that arrogant look.\n");
            system("color 8C"),sleep(2);
            Print("She's Estella!\n"),sleep(2);
            Print("She also remembered me, a stupid cowboy, and smiled haughtily.\n"),sleep(2);
            Print("Now I'm a little unhappy...\n"),sleep(2);
            Print("\n\t\t\tDuel begins!!!\n");
            system("color 0E");
            Pause();
            //int result=1;
            //if(!result)Contest.Failure();//I used wanna set a Card competiton 'Pig country killing', but I failed.
            Print("\tWe beat them down!\nI cried out.\n"),sleep(2);
            Print("\n\tYeah, We did!\n"),sleep(5);
            Print("\n\tLadies and gentlemen, calm down.\n\tGive me some time to announce the admission list, please.\n");
            Print("A gentle look secretaty breaks us.\n"),sleep(2);
            Print("\tNow...\n\t\tNo.1: Estella\n\t\tNo.2: Herbert\n\t...\n\t\tNo. 1024: Philip\n\t\tThat's all!\n"),sleep(4.5);
            Print("\nThis is how I was admitted as the last one.\n"),sleep(2);
            Print("Though it was a bit embarresting...\nI still laughed loudly with the crowds.\n"),sleep(2);
            Print("I did not realize...\n"),sleep(2);
            Print("That's the happiest time of my life...\n"),sleep(2);
            Print("And so,\nHerbert\nJaggers\nEstella\nAnd him..."),sleep(4.5);
            printf("Chapter Three Over.\n");
            return;
        }
    friend class Tsinghua_Contest;    
}Chapter_Three;
//Chpater Four
#define Game_RetroSnaker RetroSnaker.RetroSnaker_Main()
#ifdef Game_RetroSnaker
int gameover,snake_X1,snake_Y1,snake_x,snake_y;ll start,lever_final;
class Snake_Position{
    public:
        int snake_x,snake_y;
        Snake_Position(){};
        void Init(int &j){
            snake_x=1,snake_y=j;
        }
    friend class RetroSnaker;
}position[20*20+1];
class Snake_Map{
     private:
        int
            lever,length,gamespeed,head,tail,score;
        char
            ch[22][22],direction;
    public:
        Snake_Map(int h=4,int t=1,int l=4,char d=77,int s=0):length(l),direction(d),head(h),tail(t),score(s){}

        void Init(){
            R(i,1,3)
                ch[1][i] = '*';
            ch[1][4] = '#';
            R(i,1,20)
                R(j,1,20)
                    ch[i][j]=' ';
            R(i,0,22-1)
                ch[0][i]=ch[22-1][i]='-';
            R(i,1,20)
                ch[i][0]=ch[i][22-1]='|';
        }
        void Show_Game(){
            system("cls");
            putchar('\n');
            R(i,0,22-1){
                putchar('\t');
                R(j,0,22-1)
                    printf("%c ",ch[i][j]);
                if(i==2)cout<<"\tKilling Lever："<<lever;
                if(i==6)cout<<"\tKilling Speed："<<gamespeed;
                if(i==10)cout<<"\tKilling Grades："<<score;
                putchar('\n');
            }
        }
        void Grade_Init(){
            lever=0;gamespeed = 50;
        }
        void display(){
            cout << "\n\t\t\t\tLever：" << lever;
            cout << "\n\n\n\t\t\t\tSpeed：" << gamespeed;
            cout << "\n\n\n\t\t\t\tGrades：" << score;
        }
        void Set_Point(){
            srand((unsigned)time(NULL));
            while(ch[snake_X1][snake_Y1]!=' ')
                snake_X1=rand()%20+1,snake_Y1=rand()%20+1;
            ch[snake_X1][snake_Y1]='*';
        } 
        int updata_game(){
            char key;
            gameover = 1;
            key = direction;
            start = clock();
            while((gameover=(clock()-start<=gamespeed))&&!kbhit());//If the key is pressed or the time exceeds the automatic advance interval, the cycle is terminated.
            if(gameover)
                getch(),key=getch();
            //if(key == ' ')while(getch()!=' '){}//What is achieved here is the function of pausing or continue by pressing the space key], but for some reason, it needs to press twice to continue. This is a bug.
            direction = key;
            switch(direction){
                case 72: snake_x= position[head].snake_x-1; snake_y= position[head].snake_y;break; // 向上
                case 80: snake_x= position[head].snake_x+1; snake_y= position[head].snake_y;break; // 向下
                case 75: snake_x= position[head].snake_x; snake_y= position[head].snake_y-1;break; // 向左
                case 77: snake_x= position[head].snake_x; snake_y= position[head].snake_y+1; // 向右
            }
            while(!(direction==72||direction==80||direction==75 ||direction==77))getch();
            if(snake_x==0 || snake_x==22-1 ||snake_y==0 || snake_y==22-1)gameover = 0;
            else if(ch[snake_x][snake_y]!=' '&&!(snake_x==snake_X1&&snake_y==snake_Y1))gameover = 0;
            else if(snake_x==snake_X1 && snake_y==snake_Y1){ // 吃米，长度加1
                ++length;
                ++lever;
                ch[snake_x][snake_y]= '#'; //更新蛇头
                ch[position[head].snake_x][position[head].snake_y] = '*'; //吃米后将原先蛇头变为蛇身
                head = (head+1) % ( 20*20 ); //取蛇头坐标
                position[head].snake_x = snake_x;
                position[head].snake_y = snake_y;
                Show_Game();
                gameover = 1;
                score += lever*20; //加分
                Set_Point(); //产生米
            }
            else{ // 不吃米
                ch[position[tail].snake_x][position[tail].snake_y]=' ';//将蛇尾置空
                tail= (tail+1) % ( 20 * 20 );//更新蛇尾坐标
                ch[position[head].snake_x][position[head].snake_y]='*'; //将蛇头更为蛇身
                head= (head+1) % ( 20 * 20 );
                position[head].snake_x = snake_x;
                position[head].snake_y = snake_y;
                ch[position[head].snake_x][position[head].snake_y]='#'; //更新蛇头
                gameover = 1;
            }
            Cmax(lever_final,lever);
            return gameover;
        }
    friend class RetroSnaker;
};
class RetroSnaker{
    public:
        bool RetroSnaker_Main(){
            char cth='Y';
            system("color 0E");
            cout<<"\n\n\n\n\n\t\t Get_Grade At Least Fifteen To Save Everybody!\n\n\n"<<endl;
            Pause();
            while(cth=='Y'||cth=='y'){
                system("cls");
                Snake_Map snake;
                snake.Init();
                snake.Grade_Init();
                R(i,1,4)
                    position[i].Init(i);
                snake.Set_Point();
                int nodead=1;
                while(nodead)
                    snake.Show_Game(),
                    nodead = snake.updata_game();
                system("cls");
                cout << "\n\n\n\t\t\t\tGameover！\n\n"<<endl;
                snake.display();
                cout << "\n\n\n\t\t Try again?\nInput Y: Yes or N: No" << endl;
                while(cin>>cth)
                    if(cth=='Y'||cth=='y'||cth=='N'||cth=='n')break;
            }
            return lever_final>=15;
        }
    friend class Chapter_Four;
}RetroSnaker;
#endif
#define Game_PacMan PacMan.PacMan_Main()
#ifdef Game_PacMan
int dali,fx[4]={-1,27,1,-27},fxfx[4][2]={{0,-1},{1,0},{0,1},{-1,0}},dis[1000][1000],f=0;
int changdi[30][27]={
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0},
    {0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0},
    {0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0},
    {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0},
    {0,1,1,1,1,1,1,0,0,1,1,1,1,0,1,1,1,1,0,0,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,2,0,2,0,0,0,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,2,0,2,0,0,0,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,2,2,2,2,2,2,2,2,2,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,2,0,0,0,3,0,0,0,2,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,2,0,3,3,3,3,3,0,2,0,0,1,0,0,0,0,0,0},
    {2,2,2,2,2,2,1,2,2,2,0,3,3,3,3,3,0,2,2,2,1,2,2,2,2,2,2},
    {0,0,0,0,0,0,1,0,0,2,0,3,3,3,3,3,0,2,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,2,0,0,0,0,0,0,0,2,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,2,2,2,2,2,2,2,2,2,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,2,0,0,0,0,0,0,0,2,0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,2,0,0,0,0,0,0,0,2,0,0,1,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0},
    {0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0},
    {0,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,0},
    {0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0},
    {0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0},
    {0,1,1,1,1,1,1,0,0,1,1,1,1,0,1,1,1,1,0,0,1,1,1,1,1,1,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0},
    {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};
class PacMan{
    private:
        struct Point {int x,y;};
        int x,X1,x2,x3,x4,y,Y1,y2,y3,y4,now,now1,now2,now3,now4,g1,g2,g3,g4,fangx,nextfx,last1,last2,last3,last4,fenshu,guozi,guaitimer,T1,T2,t1,t2,stopped,beichi;
    public:
        void color(int a){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);}//颜色函数
        void gotoxy(int x,int y){//位置函数(行为x 列为y)
            COORD pos;
            pos.X=2*y,pos.Y=x;
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
        }
        void begin(){
            color(11); printf("\t\t\t★"); color(10); printf("Escape From The Black Goats"); color(11); printf("★\n\n"); color(7);
            Sleep(1000);
            printf("\n\tGet all the Devil Fruits\n\tDon't dead more than 4 times.\n");
            printf("Control direction：w/s/a/d\n");
            Sleep(2500);
            printf("Please open the window to "); color(11); printf("Full screen\n"); color(7);Sleep(1000);
            printf("Initialization..., please wait"); 
            Sleep(1500);
            for (int i=0; i<=809; i++) for (int j=1; j<=809; j++) dis[i][j]=900;
            for (int i=0; i<=809; i++){
                for (int j=0; j<=3; j++){
                    if (i+fx[j]>=0 && i+fx[j]<=809){
                        int k=i+fx[j],xx=k/27,yy=k%27,kk;
                        if (changdi[i/27][i%27] && changdi[xx][yy]) dis[i][k]=kk=1;
                    }
                }
            }
            for (int k=0; k<=809; k++)if(changdi[k]){
                for (int i=0; i<=809; i++)if(changdi[i])
                    for (int j=0; j<=809; j++)if(changdi[j])
                        if (dis[i][j]>dis[i][k]+dis[k][j]) dis[i][j]=dis[i][k]+dis[k][j];
                if (k%80==0){color (13); gotoxy(3,12); printf("│");}
                if (k%80==20){color(13); gotoxy(3,12); printf("╱");}
                if (k%80==40){color(13); gotoxy(3,12); printf("─");}
                if (k%80==60){color(13); gotoxy(3,12); printf("╲");}
                if (k%60==0){color(11); gotoxy(5,k/60); printf("●");}
            }
        }
        void shuru(){//Init Speed
            char ch=_getch();
            t1=45;
            t2=60;
            if (ch=='A'|ch=='a') if (changdi[x+fxfx[0][0]][y+fxfx[0][1]]==1|changdi[x+fxfx[0][0]][y+fxfx[0][1]]==2) fangx=nextfx=0; else nextfx=0;
            else if (ch=='S'|ch=='s') if (changdi[x+fxfx[1][0]][y+fxfx[1][1]]==1|changdi[x+fxfx[1][0]][y+fxfx[1][1]]==2) fangx=nextfx=1; else nextfx=1;
            else if (ch=='D'|ch=='d') if (changdi[x+fxfx[2][0]][y+fxfx[2][1]]==1|changdi[x+fxfx[2][0]][y+fxfx[2][1]]==2) fangx=nextfx=2; else nextfx=2;
            else if (ch=='W'|ch=='w') if (changdi[x+fxfx[3][0]][y+fxfx[3][1]]==1|changdi[x+fxfx[3][0]][y+fxfx[3][1]]==2) fangx=nextfx=3; else nextfx=3;
            else if (ch==' ') stopped=(stopped+1)%2;//Pause
        }
        void reset(){
            system("cls"); color(7);
            gotoxy(2,30);
            x=22; y=13; 
            X1=x2=x3=x4=14; Y1=11; y2=12; y3=14; y4=15;
            now=607; now1=389; now2=390; now3=392; now4=393;
            for (int k=0; k<=809; k++){
                int i=k/27,j=k%27;
                gotoxy(i,j);
                if (changdi[i][j]==1){color(7); printf("·");}
                else if (!changdi[i][j]){color(1); printf("■");}
                if (j=26){gotoxy(i,27); color(7); printf("%d",i);} ////////////////////////////////////////////////////
            }
            gotoxy(0,0);
            gotoxy(x,y); color(14); printf("●");
            gotoxy(X1,Y1); color(4); printf("◆");
            gotoxy(x2,y2); color(5); printf("◆");
            gotoxy(x3,y3); color(3); printf("◆");
            gotoxy(x4,y4); color(2); printf("◆");
            fangx=0; T1=T2=guaitimer=0; t1=75; t2=100;stopped=0; fenshu=0; guozi=237; g1=g2=g3=g4=0; dali=0;
            gotoxy(14,30); printf("  ");
        }
        void move1(){
            int xx,yy;
            xx=x+fxfx[nextfx][0]; yy=y+fxfx[nextfx][1];
            if (changdi[xx][yy]){
                if (changdi[xx][yy]==1){fenshu+=1; changdi[xx][yy]=2;}
                color(14);
                gotoxy(x,y); printf("  ");
                gotoxy(xx,yy); if (!dali) printf("◎"); else printf("☆");
                now=x*27+y; x=xx; y=yy;
                fangx=nextfx;
            }
            else{
                if (x==13 && y==0 && fangx==0){xx=x; yy=26;}
                else if (x==13 && y==26 && fangx==2){xx=x; yy=0;}
                else{xx=x+fxfx[fangx][0]; yy=y+fxfx[fangx][1];}
                if (changdi[xx][yy]){
                    if (changdi[xx][yy]==1){++fenshu; changdi[xx][yy]=2;}
                    color(14);
                    gotoxy(x,y); printf("  ");
                    gotoxy(xx,yy); if (!dali) printf("◎"); else printf("☆");
                    now=x*27+y; x=xx; y=yy;
                }
            }
            color(7);
        }
        int move2(){
            int haha,minhaha,xx,yy,chi=0,tim=0;
            if (g1){
                minhaha=2147483647;
                if (now1%27==0 | now1%27==26) haha=last1;
                else if (!dali){
                    for (int i=0; i<=3; i++)
                        if (changdi[(now1+fx[i])/27][(now1+fx[i])%27] && i!=last1 && minhaha>dis[now1+fx[i]][now]) 
                            {minhaha=dis[now1+fx[i]][now]; haha=i;}
                }
                else{
                    minhaha=-minhaha;
                    for (int i=0; i<=3; i++)
                        if (changdi[(now1+fx[i])/27][(now1+fx[i])%27] && i!=last1 && minhaha<dis[now1+fx[i]][now]) 
                            {minhaha=dis[now1+fx[i]][now]; haha=i;}
                }
                xx=now1/27; yy=now1%27; gotoxy(xx,yy); 
                if (changdi[xx][yy]==1) printf("·");else printf("  "); 
                now1+=fx[haha]; last1=(haha+2)%4;
                xx=now1/27; yy=now1%27; gotoxy(xx,yy); color(4); printf("◆"); color(7);
                if (xx==x && yy==y){
                    if (!dali)++chi;
                    else {
                        guozi+=50;
                        fenshu+=50;
                        last1=0;
                        gotoxy(now1/27,now1%27); 
                        if (changdi[now1/27][now1%27]==1) printf("·"); else printf("  ");
                        now1=389;
                    }
                }
            }
            if (g2){
                int k;
                minhaha=2147483647;
                if (fangx==0 | fangx==2){
                    k=y+(fxfx[fangx][1])*3;
                    while (k>25 | !changdi[x][k]) k--;
                    while (k<1 | !changdi[x][k]) k++;
                } else{
                    k=x+(fxfx[fangx][0])*3;
                    while (k>28 | !changdi[k][y]) k--;
                    while (k<1 | !changdi[k][y]) k++; 
                } 
                if (fangx==0 | fangx==2) k=x*27+k; else k=k*27+y;

                if (now2%27==0 | now2%27==26) haha=last2;
                else if (!dali)
                    for (int i=0; i<=3; i++){
                        if (changdi[(now2+fx[i])/27][(now2+fx[i])%27] && i!=last2 && minhaha>dis[now2+fx[i]][k])  
                            {minhaha=dis[now2+fx[i]][k]; haha=i;}
                    }       
                else{
                    minhaha=-minhaha;
                    for (int i=0; i<=3; i++){
                        if (changdi[(now2+fx[i])/27][(now2+fx[i])%27] && i!=last2 && minhaha<dis[now2+fx[i]][k])  
                            {minhaha=dis[now2+fx[i]][k]; haha=i;}
                    }   
                }
                xx=now2/27; yy=now2%27; gotoxy(xx,yy); 
                if (changdi[xx][yy]==1) printf("·");else printf("  "); 
                now2+=fx[haha]; last2=(haha+2)%4; gotoxy(18,30);
                xx=now2/27; yy=now2%27; gotoxy(xx,yy); color(5); printf("◆"); color(7);
                if (xx==x && yy==y){
                    if (!dali) chi+=1;
                    else {
                        guozi+=50;
                        fenshu+=50;
                        last2=0;
                        gotoxy(now2/27,now2%27); 
                        if (changdi[now2/27][now2%27]==1) printf("·"); else printf("  ");
                        now2=390;
                    }
                }
            }
            if (g3){
                int k;
                minhaha=2147483647;
                if (fangx==0 | fangx==2){
                    k=y+(fxfx[(fangx+1)%4][1])*3;
                    while (k>25 | !changdi[x][k]) k--;
                    while (k<1 | !changdi[x][k]) k++;
                } else{
                    k=x+(fxfx[(fangx+1)%4][0])*3;
                    while (k>28 | !changdi[k][y]) k--;
                    while (k<1 | !changdi[k][y]) k++; 
                } 
                if (fangx==0 | fangx==2) k=x*27+k; else k=k*27+y;

                if (now3%27==0 | now3%27==26) haha=last3;
                else if (!dali)
                    for (int i=0; i<=3; i++){
                        if (changdi[(now3+fx[i])/27][(now3+fx[i])%27] && i!=last3 && minhaha>dis[now3+fx[i]][k])  
                            {minhaha=dis[now3+fx[i]][k]; haha=i;}
                    }   
                else {
                    minhaha=-minhaha;
                    for (int i=0; i<=3; i++){
                        if (changdi[(now3+fx[i])/27][(now3+fx[i])%27] && i!=last3 && minhaha<dis[now3+fx[i]][k])  
                            {minhaha=dis[now3+fx[i]][k]; haha=i;}
                    }   
                }   

                xx=now3/27; yy=now3%27; gotoxy(xx,yy); 
                if (changdi[xx][yy]==1) printf("·");else printf("  "); 
                now3+=fx[haha]; last3=(haha+2)%4; gotoxy(18,30);
                xx=now3/27; yy=now3%27;         
                gotoxy(xx,yy); color(3); printf("◆"); color(7);
                if (xx==x && yy==y){
                    if (!dali)++chi;
                    else {
                        guozi+=50;
                        fenshu+=50;
                        last3=0;
                        gotoxy(now3/27,now3%27); 
                        if (changdi[now3/27][now3%27]==1) printf("·"); else printf("  ");
                        now3=341;
                    }
                }
            }
            if (chi)++beichi;
            if(beichi>=4){
                while(1){
                    printf("No! Black Goats Are Coming...\n");
                    printf("\t\t\tAah Aah Aah Aah Aah Aah...\n"),sleep(1);
                    if(++tim==10)
                        return 2;//Cthulu End
                }
            }
            return 1;
        }
        Ib PacMan_Main(){
            begin();
            int jixu=1;
            reset();
            string bb[4]={"●","①","②","③"}; color(7);
            gotoxy(12,12); printf("Ready"); color(12);
            for (int i=3; i>=0; i--){if (i==0) color(11);gotoxy(13,13); cout<<bb[i]; Sleep(1000);}
            gotoxy(12,12); printf("      "); gotoxy(13,13); printf(" "); color(7);
            while (!f){
                Sleep(1);
                gotoxy(10,30); printf("Score：%d   ",fenshu);
                gotoxy(8,30); printf("Monster speed：%d   ",300-t2);
                gotoxy(9,30); printf("Character speed：%d   ",300-t1);
                gotoxy(15,30); printf("Dead time：%d ",beichi);
                if (kbhit()) shuru();
                if (stopped) continue;
                T1=(T1+1)%t1; T2=(T2+1)%t2;
                if (T1%t1==0 && now+fx[fangx]>0 && now+fx[fangx]<809) move1();
                if (T2%t2==0){
                    if (guaitimer<=8){
                        if (guaitimer==0) g1=1;
                        if (guaitimer==8) g2=1;
                        guaitimer++;
                    }
                    if (!g3 && fenshu>=30) g3=1;
                    int result=move2();
                    if(result==2)return 0;
                }
                if (fenshu==guozi)f=2;
            }
            if (f==2) {
                Sleep(2500);
                system("cls");
                printf("\n\tCongratulations on having all the Devil fruit!\n\tIt's time to counterattack!\n");
                return 1;
            }
            return 0;
        }
        friend class Chapter_Four;
}PacMan;
#endif
class Chapter_Four{//Content: Philip met Magwitch again, and enemy is also appear.
    public:
        void Cthulu_Crazy(){
            int x=10,y=10;
            srand(unsigned(time(NULL)));
            while(1){
                int x_crazy=GetSystemMetrics(SM_CXSCREEN),y_crazy=GetSystemMetrics(SM_CYSCREEN);
                SetCursorPos(rand()%x_crazy,rand()%y_crazy);
                system("cls");
                R(i,1,x)putchar(' ');
                R(i,1,y)putchar('\n');
                printf("~Cthulu~");
                Cthulu_Color;
                x+=rand()%6,y+=rand()%6;
            }
        }
        void Cthulu_Ending(){
            system("color 4E");
            printf("\n\n\n");
            Print("\tWe tried...\n"),sleep(2);
            Print("\tAnd we failed...\n"),sleep(2);
            Print("\tBelievers are screaming...\n"),sleep(2);
            Print("\tFire expands, children are crying..."),sleep(2);
            Print("\tThen screaming...\v\tEveryone seem to become crazy...\n\n\n");
            Print("\tAnd so I...\n");
            Cthulu_Crazy();
        }
        void Dec_6(){
            system("color 0E");
            Print("\tDec. 6\n"),sleep(2),
            Print("Tonight, the wind blows strongly.\n"),sleep(2);
            R(i,1,3)Cthulu_Color;
            system("color 0E");
            Print("A man stands besides my door with an indescrible eyes.\n"),sleep(2);
            Print("We watch each other for a long time.\n"),sleep(2);
            Print("\tPip\nHe breaks the silence.\n"),sleep(2);
            Print("\tMr.Magwitch?\nI cannot trust my eyes.\n"),sleep(2);
            Print("\n\tI need your help.\n"),sleep(2);
            R(i,1,3)Cthulu_Color;
            Pause();
        }
        void Dec_14(){
            system("color 0E");
            Print("\tDec. 14\n"),sleep(2),
            Print("Mr.Magwitch was innocent.\nHe was accused of participating in a cult rally.\nAnd sacrificed his daughter.\nSo he fell into jail.\nBut the murderer is a Believer of a cult god known as Cthulu.\nHis wife is one of the believers. . .\n\nNow Believers are planning to resurrect the evil spirits.\nOnly six Saints' Hallows can fight against Cthulu.\n\nThe summoning ceremony is on this Christmas Eve\n"),sleep(2);
            Print("He spend years searching for the Hallows, but only find The Map Of Aladdin.\nIt's just a tool.\n"),sleep(2);
            Print("But through the magic inside it. He got the position of all the Hollows.\nAnd reached Tsinghua School.\n"),sleep(2);
            Print("\tWhy you come here?\nWhen I asked him, he replied...\n"),sleep(2);
            Print("\tThere's two Hallows in this school.\nOne is at your backpack.\n"),sleep(2);
            Print("\n\tWhat!\n"),sleep(2);
            Print("\n\tIt's named The Key Of Dust.\n\n\n");
            D_e_Line,sleep(4.5);
            Print("This is our conversation a week .\n\n\n");
		}
}
class Chapter_Four{//Content: Philip met Magwitch again, and enemy is also appear.
    public:
        void Cthulu_Crazy(){
            int x=10,y=10;
            srand(unsigned(time(NULL)));
            while(1){
                int x_crazy=GetSystemMetrics(SM_CXSCREEN),y_crazy=GetSystemMetrics(SM_CYSCREEN);
                SetCursorPos(rand()%x_crazy,rand()%y_crazy);
                system("cls");
                R(i,1,x)putchar(' ');
                R(i,1,y)putchar('\n');
                printf("~Cthulu~");
                Cthulu_Color;
                x+=rand()%6,y+=rand()%6;
            }
        }
        void Cthulu_Ending(){
            system("color 4E");
            printf("\n\n\n");
            Print("\tWe tried...\n"),sleep(2);
            Print("\tAnd we failed...\n"),sleep(2);
            Print("\tBelievers are screaming...\n"),sleep(2);
            Print("\tFire expands, children are crying..."),sleep(2);
            Print("\tThen screaming...\v\tEveryone seem to become crazy...\n\n\n");
            Print("\tAnd so I...\n");
            Cthulu_Crazy();
        }
        void Dec_6(){
            system("color 0E");
            Print("\tDec. 6\n"),sleep(2),
            Print("Tonight, the wind blows strongly.\n"),sleep(2);
            R(i,1,3)Cthulu_Color;
            system("color 0E");
            Print("A man stands besides my door with an indescrible eyes.\n"),sleep(2);
            Print("We watch each other for a long time.\n"),sleep(2);
            Print("\tPip\nHe breaks the silence.\n"),sleep(2);
            Print("\tMr.Magwitch?\nI cannot trust my eyes.\n"),sleep(2);
            Print("\n\tI need your help.\n"),sleep(2);
            R(i,1,3)Cthulu_Color;
            Pause();
        }
        void Dec_14(){
            system("color 0E");
            Print("\tDec. 14\n"),sleep(2),
            Print("Mr.Magwitch was innocent.\nHe was accused of participating in a cult rally.\nAnd sacrificed his daughter.\nSo he fell into jail.\nBut the murderer is a Believer of a cult god known as Cthulu.\nHis wife is one of the believers. . .\n\nNow Believers are planning to resurrect the evil spirits.\nOnly six Saints' Hallows can fight against Cthulu.\n\nThe summoning ceremony is on this Christmas Eve\n"),sleep(2);
            Print("He spend years searching for the Hallows, but only find The Map Of Aladdin.\nIt's just a tool.\n"),sleep(2);
            Print("But through the magic inside it. He got the position of all the Hollows.\nAnd reached Tsinghua School.\n"),sleep(2);
            Print("\tWhy you come here?\nWhen I asked him, he replied...\n"),sleep(2);
            Print("\tThere's two Hallows in this school.\nOne is at your backpack.\n"),sleep(2);
            Print("\n\tWhat!\n"),sleep(2);
            Print("\n\tIt's named The Key Of Dust.\n\n\n");
            D_e_Line,sleep(4.5);
            Print("This is our conversation a week ago.\n"),sleep(2);
            Print("And we have spent a whole week searching for another Hallow, by the name of The Flute Of Magic.\n"),sleep(2);
            Print("And now we are so confidenr that the Hallow must be at The Maze Of Interdisciplinary Information College.\n"),sleep(2);
            Print("I shared the situation with Herbert, he trusted us, and promised to help us.\n"),sleep(2);
            Print("\nNow we are sneaking in...\n"),sleep(4.5);//I used to wanna set a Maze here, but I failed.
            Print("\tOh no.!\nHerbert shouted out.\n"),sleep(2);
            Print("It's embarressed when you hold your target on your hands.\nAnd the headmaster is standing in front of you with a straight face.\n"),sleep(2);
            Print("\n\tYou two, what are you doing now.\n"),sleep(2);
            Print("\tAre you Believers?\n"),sleep(3);
            Print("\nI suddenly be alert to him.\nWhy him know Believers?."),sleep(3);
            printf("Choose Your Decision:\n1: Mr.Jaggers must be a Believer, beating him down!\n2: Wait, I'd better explain out condition to him, maybe he can help.\n");
            char opt;
            while(cin>>opt){
                if(opt=='1'){
                    Character Jaggers;
                    Jaggers.name="Jaggers";
                    Jaggers.attack=4000;
                    Jaggers.defensive=1200;
                    Jaggers.speed=1200;
                    Jaggers.HP=25000;
                    sleep(2);
                    putchar('\n');
                    Combat_Effectiveness(Jaggers);
                    D_e_Line,sleep(2);
                    Character Herbert;
                    Herbert.name="Herbert";
                    Herbert.attack=1000;
                    Herbert.defensive=500;
                    Herbert.speed=1000;
                    Herbert.HP=4000; 
                    Combat_Effectiveness(Herbert);
                    D_e_Line,sleep(2);
                    Combat_Effectiveness(Philip);
                    D_e_Line,sleep(2);
                    Character PhilipAndHerbert;
                    PhilipAndHerbert.name="Philip And Herbert";
                    PhilipAndHerbert.attack=(Philip.attack+Herbert.attack)*3>>2;
                    PhilipAndHerbert.defensive=(Philip.defensive+Herbert.defensive)*3>>2;
                    PhilipAndHerbert.speed=(Philip.speed+Herbert.speed)*3>>3;
                    PhilipAndHerbert.HP=((Philip.HP+Herbert.HP)*3>>2)+1000;
                    printf("Fighter One: Philip and Herbert\nFighter Two: Jaggers\n"),sleep(3);
                    Fight(PhilipAndHerbert,Jaggers),sleep(4.5);
                    Print("\n\tStop! JoJo!\nIt's Magwitch.\n");
                    break;
                }
                else if(opt=='2'){
                    Print("\nOh my god, JoJO!\nMagwitch suddenly appears.\n");
                    break;
                }
            }
            sleep(2);
            Print("Jaggers lets us go, looking confused but exciting.\n"),sleep(2);
            Print("\tThey are my friends, JoJo.\nMagwitch said to Jaggers."),sleep(2);
            Print("\nThen we know Jaggers, who's nick name is JoJo, and Magwitch used to be comrades. They fight against Believers together many years ago.\n"),
            Print("But after the death of Jaggers' wife, they separated...\nBut they two never give up fighting.\n"),
            Print("\nMr.Jaggers have protected The Flute Of Magic  with his snake, Kirito, for over twenty years.\n"),sleep(2);
            Print("Magwitch told us:\n");
            Print("\tThe blood moon will come out on the 21st.\nOther Hallows will be reappeared.\nOn that day the four of us must act.\nThis is the last chance.\n"),sleep(2);
            Pause();
        }
        void Dec_21(){
            system("color 0E");
            Print("\tDec. 21\n"),sleep(2),
            Print("Blood Moon comes out...\n"),sleep(2);
            Print("We need to get all the other Four Hallows.\n"),sleep(2),
            Print("That's the only way to beat down Cthulu.\n"),sleep(2),
            Print("With the help of Mr.Jaggers and Herbert, we finally reached the Dark Cave.\n"),sleep(2);
            system("color 4E");
            Print("\tPhilip! Watch out!\n"),sleep(2);
            Print("Herbert pushes me away.\n"),sleep(2);
            Print("And from the cave, a large swath of flying insect-like organisms is attacking us.\n"),sleep(2);
            Print("\tKirito, Kill them all.\n"),sleep(2);
            Print("Jaggers takes out Magic Flute.\n"),sleep(2);
            Print("But a mantis-like organisms catches him.\n"),sleep(2);
            Print("The Magic Flute rolls to my hand.\n"),sleep(2);
            Print("\n\tPhilip, Hurry! Control Kirito, driving the enemies away!\n"),sleep(2);
            Print("\n\tThe music of the Magic Flute rings out, shining in the moonlight.\n");
            Print("Kirito's eyes seem like blood...\n");
            int result=Game_RetroSnaker;
            if(!result)
                Cthulu_Ending();
            Print("The monsters are drived away.\n");
            Print("We succesfully get in the Cave.\n"),sleep(3);
            Backpack.insert("The Sword Of King Arthur");
            Print("\n\tYou Get The Sword Of King Arthur!\n");
            printf("Press 'P' to view backpack\n'C' to continue\n");
            char opt;
            while(cin>>opt){
                if(opt=='P'||opt=='p'){
                    View_Backpack(),
                    Pause();break;
                }
                if(opt=='C'||opt=='c')break;
            }
            Print("\tNow\n");
            Print("\tWe got\n\tKey Of Secret\n\tFlute Of Dust\n\tThe Sword Of King Arthur!\nHerbert shouts happily.\n"),sleep(2);
            Print("\n\tDon't be happy so quick.\n\tThere's still two inside the dark.\nJaggers said.\n"),sleep(2);
            Print("\tIt's time to get Frostmourne.\n\tIn fact...\nJaggers adds.\n"),sleep(2);
            Print("\tMy wife was killed by it.\n"),sleep(3);
            system("color 17");
            Print("\nThrough the map, we get to the The Stormpeaks.\n"),sleep(2);
            Print("Now\nThree Belivers are chanting magic.\n"),sleep(2);
            Print("\tMerciful Yoggsotos\n\tGive deathly stillness to the dead land!\n\tWelcome Black Goats!\n");
            system("color 4E");
            Print("\n\n\tPhilip, watch out!\n\t\tDon't be trampled by the Black Goats!\n");
            system("cls");
            system("color 0E");
            result=Game_PacMan;
            if(!result)Cthulu_Ending();
            system("color 0E");
            sleep(3);
            Backpack.insert("The Frostmourne Of War");
            Print("You Get The Frostmourne Of War!\n");
            printf("Press 'P' to view backpack\n'C' to continue\n");
            while(cin>>opt){
                if(opt=='P'||opt=='p'){
                    View_Backpack(),
                    Pause();break;
                }
                if(opt=='C'||opt=='c')break;
            }
            Print("\tMany years ago, my wife and me tried to get this sword.\n"),sleep(2);
            Print("\tWe have already got it.\n\tBut A Believer attacked us.\n"),sleep(2);
            Print("\t\tMy wife used the sword to fight back, but that Believer's sickle reached her...\n"),sleep(2);
            Print("\tI was hurt. The only thing I can do was watching the Believer picked up Frostmourne, and swinging...\n"),sleep(2);
            Print("Jaggers told us slowly.\n"),sleep(3);
            Print("\tMoon is fallen, time to come back...\n");
            Pause();
        }
        void Dec_24(){
            system("color CE");
            Print("\tDec. 24\n"),sleep(2),
            Print("\t\tThe last fight is coming.\n"),sleep(2);
            Print("\tThough we haven't collected all the six Hallows,\n\tthe Believers have all gathered at the center of Yalan.."),sleep(2);
            Print("\t\tCthulu~Cthulu~Cthulu~...\n"),sleep(2);
            Print("\tThey are screaming with an indescribable voice...\n");
            R(i,1,3){
                Cthulu_Color;
                R(j,0,i)putchar('\t');
                Print("\tCthulu~Cthulu~Cthulu~\n");
            }
            system("color CE");
            Print("I have waited for you Twenty Years!\n\tJaggers shouted to a Believer.\n"),sleep(2);
            Print("The Believer wears a black cloak, covering the whole body, and holds a sickle...\n"),sleep(2);
            Character Death;
            Death.name="Death";
            Death.attack=10000;
            Death.defensive=1500;
            Death.speed=2000;
            Death.HP=100000;
            Print("I realize it's the one who killed Mr.Jagger's wife.\n"),sleep(2);
            Print("But this time, it's Jaggers controls Frostmourne...\n\n"),sleep(2);
            Character Jaggers;
            Jaggers.name="Jaggers";
            Jaggers.attack=80000;
            Jaggers.defensive=1500;
            Jaggers.speed=1500;
            Jaggers.HP=40000;
            sleep(2);
            Combat_Effectiveness(Jaggers);
            D_e_Line,sleep(2);
            Combat_Effectiveness(Death);
            D_e_Line;
            printf("Fighter One: Jaggers\nFighter Two: Death\n"),sleep(2);
            Fight(Jaggers,Death),sleep(2);
            putchar('\n');
            Print("After a hard fight.\nDeath's sickle falls down from his wrist...\n"),sleep(2);
            Backpack.insert("The Sickle Of Death");
            Print("\nYou Get The Sickle Of Death\n");
            printf("Press 'P' to view backpack\n'C' to continue\n");
            char opt;
            while(cin>>opt){
                if(opt=='P'||opt=='p'){
                    View_Backpack(),
                    Pause();break;
                }
                if(opt=='C'||opt=='c')break;
            }
            system("color C4");
            Print("The six hollows have been found five.\n"),sleep(2);
            system("color CE");
            Print("However, Jaggers is also hurt.\nHe cannot fight anymore.\n"),sleep(2);
            Print("But the Believers are closing.\n"),sleep(2);
            Print("Jaggers, with Frostmourne\n\tHerbert, with King Athur's Sword\n\t\tMagwitch, with Magic Flute\n\t\t\tI, with... a wooden stick... fight together.\n"),sleep(2);
            Print("The Believers are driving away.\n"),sleep(2);
            Print("It seems that we will surely stop the summoning ceremony.\n"),sleep(2);
            R(i,0,2)Cthulu_Color;
            system("color 62");
            Print("Until a green flash breaks from the fire fields...\n"),sleep(2);
            Print("\tOh~Merciful Cthulu~Let the honest death be your honor!\n");
            R(i,0,2)Cthulu_Color;
            system("color 62"),sleep(2);
            Print("\tOh~Merciful gentlemen, best thanks for your sacrifice.\n\t~Cthulu's dearest son-in-law, Abel Magwitch!\n"),sleep(2);
            Print("\n\n\tNo, Lier!\nMagwitch suddenly realizes something.\nHe turns to us with a white face without hope.\n"),sleep(2) ;
            Print("\tSorry, it's all my fault.\n");
            R(i,0,2)Cthulu_Color;
            system("color 62"),sleep(2);
            Print("We are shocked.\n"),sleep(2);
            Print("\tIn fact the five hollows is nothing to Cthulu.\n\tI lied to you just for finding Cthulu, my Father-in-law.\n"),sleep(2);
            Print("\n\tYou wanna me fucking believe your word?\n\tAfter so much!\n\tFor What!\nI cried out.\n"),sleep(2);
            Print("\n\tYou do not how much I wanna revenge on it.\n\tBut the only thing can vanish it is the last hollow:\b\t\t\tThe Blood Of Cruel.\n"),sleep(2);
            Print("\tIt's not a object, but a real body, which owns the blood from Cthulu.\n"),sleep(2);
            Print("\nI realized something, looking at him to my dismay.\n"),sleep(2);
            Print("\n\tAnd I am that body.\n");
            R(i,0,2)Cthulu_Color;
            system("color 62"),sleep(2);
            Print("\n\n\tOh~ That's how you step into this trap.\n\tWe are not expecting reviving Our Honorable Father since the first time, Cthulu~ have already coming for a long period.\n\tWe Just For Vanish You.\nThe voice from the flash screams.\n");
            R(i,0,2)Cthulu_Color;
            system("color 62"),sleep(2);
            R(i,1,3){
                R(j,1,i)
                    putchar('\t');
                Print("Run!!!!!\n");
                Print("Mr. Magwitch!!!");
            }
            Print("\nTo protect us,\n Magwitch turned into light.\nHis blood shines like the sun.\n\n"),sleep(2);
            system("color FE"),sleep(4.5);
            Print("Open eyes again, every one is at a safe place.\n"),sleep(2);
            Print("Except Mr.Jaggers and Magwitch...\n");
            Pause();
        }
        void Dec_25(){
            system("color 0E");
            Print("\tDec. 25\n"),sleep(2),
            Print("\tWhat next should we do?\nHerbert asked me.\n"),sleep(2);
            Print("\nI heared the poets eulogizing the Christmas.\n"),sleep(4.5);
            system("color 0D");
            Print("\nHappy Christmas, that can win us back to the delusions ofour childhood days.\nRecall to the old man the pleasures of hisyouth.\nAnd transport the traveler back to his own fireside andquiet home...\n"),sleep(2);
            system("color 0E");
            Print("\nWe Fight.\n");
        }
        void Chapter_Four_Main(){ 
            Print_Chapter_Slowly(),
            printf("F"),sleep(0.5),
            printf("o"),sleep(0.5),
            printf("u"),sleep(0.5),
            printf("r\n"),sleep(0.5);
            system("color B7");
            Print("Two years passed, the winter is still cold.\n");
            sleep(2);
            Print("These days I do not have a good time.\nWherever I go, I feel that someone is watching me.\n");
            sleep(4.5);
            Print("And the ordinary life has broken, like a glass...\n");
            Pause(),system("cls");
            Dec_6(),system("cls");
            Dec_14(),system("cls");
            Dec_21(),system("cls");
            Dec_24(),system("cls");
            Dec_25(),sleep(4.5),
            printf("\nChapter Four Over\n");
            Pause();
            return;
        }
        friend class RetroSnaker;
        friend class PacMan;
}Chapter_Four;
#undef Game_RetroSnaker
#undef Game_PacMan
//Chapter Five
class Chapter_Five{//Contents: Philip returned Miss.Havisham's House. Estella told him her life.
    public:
        void Chapter_Five_Main(){
            system("color 8C");
            Print_Chapter_Slowly(),
            printf("F"),sleep(0.5),
            printf("i"),sleep(0.5),
            printf("v"),sleep(0.5),
            printf("e\n"),sleep(0.5),
            Print("\nBelievers behave more and more frequently.\n"),
            Print("At a sneak raid, Herbert and I have separated.\n");
            Print("I don't know if he is alive.\nBut I must take action with the left two Hallows.\n"),sleep(2);
            Print("\n\tThe Key Of Dust and The Flute Of Magic.\n"),sleep(2);
            printf("\nNow where should I go?\n1: Miss.Havisham's House\n2: Tsinghua School\n");
            char opt;
            while(cin>>opt){
                if(opt=='1')break;
                if(opt=='2'){
                    Print("\nI may go back to school, Mr,Jaggers may has left some information in it.\n"),sleep(2);
                    Print("\nBut it must be full of Believers now.\nI have no idea.\n"),sleep(2);
                    break;
                }
            }
            Print("\nYes, I should return to Miss.Havisham's House.\n");
            Print("That's where I get The Key Of Dust.\n");
            Print("That gloomy place may well kept other secrets.\n");
            Print("Especially Miss.Havisham...\n"),sleep(3);
            Havisham_House.ReturnTime();
            system("color 8C");
            Print("When I step out the Hall.\n");
            Print("Estella is in front of me.\n"),sleep(2);
            Print("\n\tPip, let me tell you the truth.\nShe said quitely"),sleep(4.5);
            system("color 93");
            Print("\n\n\tWhen I was a tiny girl, I have a happy childhood.\n"),sleep(2);
            Print("\tMy dad, you have met, is the son of Cthulu.\n");
            Print("\tHe fell in love with my mom, Havisham, and got married with her,\n"),
            Print("\tdespiting strenuous objections by Cthulu...\n"),sleep(2);
            Print("\tOne day, Cthulu asked my dad to help him come to the earth.\n"),sleep(2);
            Print("\tOf course my dad refused.\n\tThen Cthulu cheated my mom.\n"),sleep(2);
            Print("\t\t'Dear~ Havisham, if you help me, I'd admit your wedding...'\n"),sleep(2);
            Print("\n\t\t'Oh yes, Mr.Cthulu, thank you!'\n"),sleep(2);
            Print("\tThat's the conversation between them.\n\tThen Cthulu came...\n"),sleep(2);
            Print("\tCthulu seduced our servants to kill us.\n"),sleep(2);
            Print("\tThey prepared a cult rally,\n\t\tsacrifing my brother,\n\t\tmy grandparents,\n\t\tmy confidante...\n"),sleep(2);
            Print("\tOnly one old cook suddenly restores his mind,\n\tand hid my mom and me in this house.\n"),sleep(2);
            Print("\tDad was accused of sacrificing me in that rally.\n\tHe did not know we are alive.\n\tThe vengeful desire forced him to spend his life searching for Cthulu...\n"),sleep(2);
            Print("\tHe has gone, the only one who owns The Blod Of Cruel is me now.\nEstella looks firm, hair swayed in the night wind."),sleep(2);
            Print("\n\tSo you want be the Light, sacricing yourself to save the world?\nI asked her slowly.\n");
            Print("\n\tYes, please.\n\tIt's time to settle accounts.\n"),sleep(2);
            Print("\tHelp me, Pip.\n"),sleep(4.5);
            Print("Chapter Five Over.");
            return;
        }
}Chapter_Five;
//Chapter Six
#define PlayMusic Music()
#ifdef PlayMusic
enum fy{
    d1 = 262, d1_ = 277, d2 = 294, d2_ = 311, d3 = 330, d4 = 349, d5 = 392, d5_= 415,
    d6 = 440, d6_= 466, d7 = 494, z1 = 523, z1_ = 554, z2 = 578, z2_ = 622, z3 = 659,
    z4 = 698, z4_ = 740, z5 = 784, z5_ = 831, z6 = 880, z6_ = 932, z7 = 988, g1 = 1046,
    g1_ = 1109, g2 = 1175, g2_ = 1245, g3 = 1318, g4 = 1397, g4_ = 1480,
    g5 = 1568, g5_ = 1661, g6 = 1760, g6_ = 1865, g7 = 1976, yaya = 0
};
struct yf{
    enum fy s;
    int t;
};
void Music(){
    R(i,1,2){
        struct yf a[1000]={
                {z6,50},{z7,50},{g1,150},{z7,50},{g1,100}, //5
                {g3,100},{z7,300},{z3,100},{z6,150},{z5,50}, //10
                {z6,100},{g1,100},{z5,300},{z2,50},    //14
                {z3,50},{z4,150},{z3,50},{z4,50},{g1,150}, //19
                {z3,150},{z2,50},{z3,50},{g1,150},{z7,150}, //24
                {z4_,50},{z4_,100},{z7,100},{z7,200},{z6,50}, //29
                {z7,50},{g1,150},{z7,50},{g1,100},{g3,100}, //34
                {z7,200},{z3,100},{z6,150},      //37
                {z5,50},{z6,100},{g1,100},{z5,300},{z3,100},{z4,100},{g1,50}, //44
                {z7,150},{g1,100},{g2,100},      //47
                {g3,50},{g1,150},{g1,50},{z7,50},{z6,100},{z7,100},{z5_,100}, //54
                {z6,300},{g1,50},{g2,50},   //57
                {g3,150},{g2,50},{g3,100},{g5,100},{g2,300},{z5,100}, //63
                {g1,150},{z7,50},{g1,100},{g3,100},{g3,300},{z6,50},{z7,50},{g1,150}, //71
                {z7,50},{g1,100},{g2,100},{g1,150},{z5,50}, //76
                {z5,200},{g4,100},{g3,100},{g2,100},{g1,100}, //81
                {g3,400},{yaya,50},{g3,50},{g6,200},{g5,100},{g5,100},{g3,50}, //88
                {g2,50},{g1,100},{yaya,50},{g1,50},{g2,100},{g1,50},{g2,100},{g5,100}, //96
                {g3,200},{yaya,50},{g3,50},{g6,200},{g5,200},{g3,50},{g2,50}, //103
                {g1,200},{yaya,50},{g1,50},{g2,100},{g1,50},{g2,100},{z7,100}, //110
                {z6,200},{yaya,100},{z6,50},{z7,50},{z6,500}
        };
        struct yf *atop;
        atop = a;
        int n = 194;
        while(n--){
            Beep(atop->s,atop->t*5);
            ++atop;
        }
    }
    return;
}
#endif 
class Chapter_Six{
    public:
        void Chapter_Six_Main(){
            system("color 0E");
            Print_Chapter_Slowly(),
            printf("S"),sleep(0.5),
            printf("i"),sleep(0.5),
            printf("x"),sleep(0.5),
            Print("\n\t\tHerbert died.\n"),sleep(3);
            Print("This morning, when I was reading the news,\n"),
            system("color C4");
            Print("the topic came into view:"),sleep(2);
            Print("\n\tA 20 years around man died in London on Saturday.\n\tAccording to eyewitnesses,\n\tHe was holding a sword, fighting with a octopus-like being.\n");
            Print("\tHe had nearly kill that being, but as soon as he touched its blodd.\n\tHe was like being crueled.\n"),
            Print("\tHe kept screaming an indescrible words.\n");
            Print("\t\t'Cthulu~ Cthulu~ Cthulu~'.\n");
            Print("\tThen some people began to follow him, screaming 'Cthulu~'\n");
            Print("\tBefore every one got crazy, the polish arrived,\n\tshooting to the young man...\n");
            system("color B7");
            Print("\nI remembered several years ago,\nhow Herbert and I both held secret love for Estella,\nand we met in the Garden to fight.\n"),sleep(2),
            Print("\nI remembered years later,\nhow we beat down the challenging opponents,\nand then step into Tsinghua.\n"),sleep(2);
            Print("\nI remembered not long befoe now,\nhow we fight together,\nand experience countless life-and-death partings.\n"),sleep(2);
            Print("They are only my own memory now.\n"),sleep(2);
            system("color 0E");
            Print("\n\tKeep calm, Pip.\n\tCthulu has hurt, he must be still in London.\n\tWhat we need now is nothing but find Cthulu,\n\tand let him pay the price!\nEstella said.\n"),sleep(3.5);
            Print("\n\tYou're right, Estella.\n\tWe need to go now.\n"),sleep(3.5);
            Last_Fight();
        }
        void Last_Fight(){
            system("cls");
            R(i,1,3)Cthulu_Color;
            Print("\n\n\n\tHew~ ded~ yeu~ fend~ meeee~\nCthulu seems can't believe this.\n"),
            system("color 0E");
            Print("\n\tOh, our 'greatest' Cthlu,\n\twe have searched for you in every corner of London.\nI smiled, with flames of fury in heart.\n"),sleep(2);
            Print("\n\tYou killed my dad, and caused my mom's crazy!\nEstella shouted out to Cthulu.\n"),sleep(2);
            R(i,1,3)Cthulu_Color;
            Print("\n\tOe~ Thet's veey serprising, bet whet're yeu waet?\n\tKiel mee?\n\tYeu teoooo...?\n");
            system("color 0E");
            Print("\nHis voice has a stange power.\nI feel an impulse, seducing me to be crazy.\n");
            Print("But we are not afraid of him anymore.\n\n"),sleep(2);
            Character Cthulu;
            Cthulu.name="Cthulu";
            Cthulu.attack=6000000;
            Cthulu.defensive=13000;
            Cthulu.speed=3000;
            Cthulu.HP=20000000;
            Combat_Effectiveness(Cthulu);
            Character PhilipAndEstella;
            PhilipAndEstella.name="Philip and Estella";
            PhilipAndEstella.attack=4000;
            PhilipAndEstella.defensive=10000;
            PhilipAndEstella.speed=2000;
            PhilipAndEstella.HP=98000;
            putchar('\n');
            Combat_Effectiveness(PhilipAndEstella);
            printf("Fighter One: PhilipAndEstella\nFighter Two: Cthulu\n"),sleep(3);
            Fight(PhilipAndEstella,Cthulu);
            Print("\nWe don't know he's power is so strong.\nEstella and I have hurt seriously.\n"),sleep(2);
            R(i,1,3)Cthulu_Color;
            Print("\n\tHeee, yeu stepid, lee henst deeth be yoer henor.\n\tImpieey Heman beiegssss...!\n");
            system("color 0E");
            Print("\n\tGood bye, Pip.\n"),sleep(3.5);
            Print("\tI love you...\nEstella whispered\n"),sleep(4.5);
            Estella_Sacifice();
        }
        void Estella_Sacifice(){
            system("color 94");
            Print("\n\tEstella, no!\nI tried to stop her.\n");
            Print("But it's too late.\n"),sleep(3.5);
            system("color F6");
            Print("\nA bright shine gets out of her body.\nThen two\nThree\nFour...\n"),sleep(2);
            Print("Until Estella's body all turned into the light.\n"),sleep(2);
            Print("\nee!e!!ee!!eeeee!!!ee!eee!e...\nCthulu screams.\n");
            Print("Its's body breaks into pieces...\n"),sleep(4.5);
            Print("Then the moon came out.\n"),sleep(2);
            Print("As red as blood...\n"),sleep(2);
            Print("And the wind passed me.\n"),sleep(2);
            Print("As soft as tears...\n"),sleep(4.5);
            End_Cemetery();
        }
        void End_Cemetery(){
            system("color B7");
            Print("\nSeveral days later,\nI came back my hometown.\n");
            Show_Stick_Man(1);
            Print("Joe welcomed me enthusiastically.\n"),sleep(2);
            Print("I pretented that there is nothing wrong,\neven after so much...\n"),sleep(2);
            Print("\nThis evening, I go to the cemetery again.\n"),sleep(2);
            Print("Beside two more new tombs, the winter is nothing changed.\n"),sleep(2);
            Print("When I was a child, Magwitch told me:\n"),sleep(2);
            Print("\n\tWhen the snow melts, I'll wait for you on the lakeside.\n"),
            sleep(4);
            Print("\n\tWhy?\n");
            sleep(3);
            Print("\n\tBecause we are friends...\n");
            sleep(3.5);
            Print("\nIt's a lie, like a dream...\n"),sleep(2);
            Print("I am the dreamer.\n"),sleep(2);
            Print("It's time to wake up...\n"),sleep(4.5);
            Print("The End");
            PlayMusic;
            return;
        }
}Chapter_Six;
#undef PlayMusic
Iv Chapter_Prologue(){
    system("color B7");
//    Show_Lake();
    Print("When the snow melts, I'll wait for you on the lakeside\n"),
    sleep(4);
    Print("Why\n");
    sleep(3);
    Print("Because we are friends...\n");
    sleep(3.5);
}
//Introdution At The End
Iv Introduce_Bingoyes(){
    putchar('\n');
    system("color 0E");
    D_e_Line;
    Print("A strory is over.\n");
    sleep(3);
    Print("But another is started here.\n");
    sleep(2);
    Show_Stick_Man(3);
    Print("Don't you wanna open it, my friend.\n");
    Print("This is your last decision.\n'Y': Open it\n'N': No\n");
    char opt;
    while(cin>>opt){
        if(opt=='Y'||'y'){system("start https://www.cnblogs.com/bingoyes/");return;}//It used to be a bug, but the reason is very funny, so I kept it.
        if(opt=='N'||'n'){system("start www.4399.com");return;}
    }
}
#define Start_New_Chapter() Pause(),system("cls"),system("color 31")
Iv Readme(){
    system("color 0E");
    Print("Read me:\n"),sleep(2);
    Print("This game is created based on Dicken's Great Expectations.\n");
    Print("To colorful the contents, I add other elements inside.\n");
    Print("It's quite simple, but it really costs me two weeks.\n");
    Print("Before do it,\nI didn't know how to set color, print words slowly, even use Class...\n");
    Print("But I stuck on, and I did it.\n");
    Print("I learned a lot, not only programming...\n");
    Print("I decide to share it with you, it's my honor if you like it.\n");
    Print("But at first, I need to say thanks to websites or blogs below.\n");
    Print("Without the knowledge from them, I could do nothing.\n");
    Print("\n\thttps://blog.csdn.net/jackypigpig/article/details/53368531\n");
    Print("\thttps://www.luogu.org/discuss/show/30357\n");
    Print("\thttps://blog.csdn.net/charactr/article/details/78817779\n");
    Print("\thttp://tieba.baidu.com/p/4297649534\n");
    Print("\thttps://www.cnblogs.com/bingoyes/\n");
    Print("\n\tAnd others which I cannot remember yet...\n");
    system("color 0C");
    Print("\n(\nThis game is only for sharing knowledge and programing skill.\nSo I used a few codes from the internet.\nIf you are the original author and think your copyright has been infringed.\nConnect me and I'll delete the relevant part in time.\nIf you wanna infringe my copyright for personal interests, we'll meet in court!\n)\n");
    system("color 0E");
    Print("\nNow let's begin!\n"),sleep(2);
    Print("\nGreat Exceptations\n\t\tby Bingoyes\n");
}
int main(){
    Readme();
    Start_New_Chapter();
    Init_Chapter_One();
    Chapter_Prologue();
    Start_New_Chapter();
    Chapter_One.Chapter_One_Main();
    Start_New_Chapter();
    Chapter_Two.Chapter_Two_Main();
    Start_New_Chapter();
    Chapter_Three.Chapter_Three_Main(); 
    Start_New_Chapter();
    Chapter_Four.Chapter_Four_Main(); 
    Start_New_Chapter();
    Chapter_Five.Chapter_Five_Main();
    Start_New_Chapter();
    Chapter_Six.Last_Fight();
    Introduce_Bingoyes();
    return 0;
}
/*
    Note:
        Describtion:
            This text game is created based on Dickens' <<Great Expectations>>.
            Character:

            Chapters:
                Name:
                    Pip 皮普 又名 Handel 汉德尔 ； 教名菲利普 （Philip）。
                    Abel Magwitch 阿伯尔。马格韦契
                    Mrs Joe Gargery 乔 。葛吉瑞夫人
                    Joe Gargery 乔。葛吉瑞
                    Vompeyson 康培生
                    Mr Pumblechook 潘波趣先生
                    Mr Wopsle 伍甫赛先生
                    Biddy 毕蒂
                    Miss Havisham 郝薇香小姐
                    Estella 艾丝黛拉 ，被郝小姐收养
                    Herbert Pocket 郝伯特。朴凯特
                    Matthew Pocket 马修。朴凯特
                    Orlick 奥立克
                    Mr Jaggers 贾格斯 先生
                    Mr Wemmick 文米克 先生
                    Bentley Drummle 本特利 。朱穆尔
                    Startop 史达多蒲
                    Miss Skiffins 斯基芬小姐

        Set Color:
            0= black         
            1= blue         
            2= green         A = light green
            3= lake blue     B = light green blue
            4= red         C = light red
            5= purple         D = lavender
            6= yellow         E = light yellow
            7= white         F = bright white
            8= gray
            9= light blue

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);

            0E-> Black Golden Fairy
            31-> Blue Cementry
            B7-> Winter Peace
            4E-> Real Hell
            62-> Cthulu's Meditation
            C4-> Bloody Guility
            8C-> Bloody Dust
}
*/
