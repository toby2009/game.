#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int xo=2,yo=2,i,j,s1,s2,x2=20,y2=10,zhashu,zha[100][5],sum=0,s;
char n;
//string a[1000]={"0","��","��","��","��","��","��","��","ָ","��","λ","��",",","��","��","��","��","!",};
string b[1000]={"0","��","��","��","��","Χ",":"};
int chenbai(char n){
    if(n=='1')if(MessageBox(NULL,"��Ӯ��","����Ա",MB_YESNO)!=7);
    if(n=='2') {if(MessageBox(NULL,"������","����Ա",MB_YESNO)!=7);return 0;}
    if(n=='3') if(MessageBox(NULL,"������ը��","����Ա",MB_YESNO)!=7);
}
int guizei()
{
    MessageBox(NULL,"�Ϲ�أ�w,a,s,d���ƣ�","����С��Ϸ",MB_OK);
    MessageBox(NULL,"��Ȼ����Ҳ������W,A,S,D��8,2,4,6���ƣ�","����С��Ϸ",MB_OK);
    MessageBox(NULL,"��������ǵ���ָ��λ��,�������!","����С��Ϸ",MB_OK);
    MessageBox(NULL,"ע��!ǧ��Ҫ����ը����","����С��Ϸ",MB_OK);
    MessageBox(NULL,"�ã���ʼ��!","����С��Ϸ",MB_OK);
}
int kaishi();
void fang(char n);
void zou(char n);
void daxiao();
void shu();
int zhadan();
int main(){
    system("mode con cols=50 lines=30");
    cout<<"\t   $_$ $_$����С��Ϸ$_$ $_$\n";
    cout<<"\t   \1  1.��ʼ����!        \2\n";
    cout<<"\t   \2  2.����(��Χ10,10)  \1\n" ;
    cout<<"\t   \1  ( ^_^ )/~~�ݰ�|    \2\n";
    cin>>i;
    if(i==1){
        system("cls");
        kaishi();
    } 
    else{
        guizei();
        system("cls");
    }
    srand((unsigned)time(NULL));
    s1=1+rand()%x2-1;
    s2=1+rand()%y2-1;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_GREEN);
    zou('o');
    printf("\n���λ��:%d %d\n",xo,yo);
    zhashu=rand()%15+0;
//  zhashu=0;
//  if(zhashu<0) zhashu=0;
    for(i=1;i<=zhashu;i++){
        zha[i][1]=1+rand()%x2;
        zha[i][2]=1+rand()%y2;
    }
    printf("\n��Ϸ��ʼ,Ŀ��λ:");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED);
    printf("%d %d\n",s1,s2);
    if(zhashu>0)
    {
        printf("ը��λ��\n");
        for(i=1;i<=zhashu;i++){
            printf("%d x:%d y:%d\n",i,zha[i][1],zha[i][2]);
        } 
    }
    else printf("��ը��\n");
    Sleep(1000);
    system("cls");
    zou('o');
    for(;xo!=zha[i][1]&&yo!=zha[i][2];){
        if(xo==s1&&yo==s2){
            system("color 4E");
            chenbai('1');
            system("cls");
            system("color 4E");
            printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t�������,�����������%d\n\n\t\t\t\t ",sum);
            system("pause");
            return 0;
        }
        n=getch();
        fang(n);
        system("cls");
        zou('o');
        printf("\n���λ��:%d %d\n",xo,yo);
        s=rand()%9+1;
        zhadan();
        if(sum>s) {
            chenbai('2');
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t�����\n\n\t\t\t  "; 
            system("pause");
            break;
        }
    } 
}
int kaishi(){
    system("color F0");
//  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED);
    printf("��Ȩguoxingyu12345(����˺�)���У���bug���˽����������һ������uid��85933��\n\n");
//  Sleep(10000);
    system("pause");
    system("color 07");
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED|FOREGROUND_BLUE);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n                      ��Ϸ��ʼ");
    Sleep(1000);
    system("cls");
    Sleep(2000);
/*  system("cls");
    for(i=5;i>=1;i--)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t��Ϸ����%d�뿪ʼ",i);
        Sleep(1000);
        system("cls");
    }*/
    shu();
    return 0;
}
void shu(){
    for(i=1;i<=5;i++){
        cout<<b[i];
        Sleep(100);
    }
    printf("  5<=x=30   5<=y=20");
    printf("\nx:");
    scanf("%d",&x2);
    if(x2<=4||x2>30){
        daxiao();
    }
    printf("y:");
    scanf("%d",&y2);
    if(y2<5||y2>30){
        daxiao();
    }
    Sleep(2000);
    system("cls");
}
void daxiao(){
    system("cls");
    if(x2<=1||y2<=1||x2>=20||y2>=20){
        if(x2<=1||y2<=1) printf("����̫С");
        if(x2>30||y2>20) printf("����̫��");
    }
    x2=10;y2=10;
    Sleep(1000);
    system("cls");
    shu();
}
void zou(char n){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_GREEN);
    for(i=1;i<yo;i++){
        for(j=1;j<=x2+1;j++)printf(" ");
        printf("|\n");
    }
    for(i=1;i<=xo;i++) printf(" ");
    if(n=='o') SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_RED);
    if(n=='*') SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED);
    printf("%c",n);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |FOREGROUND_GREEN);
    for(i=xo+1;i<=x2;i++) printf(" ");
    printf("|\n");
    for(i=yo;i<y2;i++){
        for(j=1;j<=x2+1;j++) printf(" ");
        printf("|\n");
    }
    for(i=1;i<=x2+1;i++) printf("-");
}
int zhadan(){
    for(i=1;i<=zhashu;i++){
        if(xo==zha[i][1]&&yo==zha[i][2]){
            system("cls");
            zou('*');
            Sleep(500);
            system("cls");
            zou(' ');
            Sleep(500);
            system("cls");
            zou('*');
            Sleep(500);
            system("cls");
            zou(' ');
            Sleep(500);
            system("cls");
            zou('*');
            Sleep(500);
            system("cls");
            zou(' ');
            Sleep(500);
            chenbai('3');
            system("cls");
            sum++;
        }
    }
}
void fang(char n){
    if(n=='8'||n=='w'||n=='W') yo--;
    if(n=='2'||n=='s'||n=='S') yo++;
    if(n=='4'||n=='a'||n=='A') xo--;
    if(n=='6'||n=='d'||n=='D') xo++;
    if(yo==0) yo=y2-1;
    if(yo==y2+1) yo=1;
    if(xo==0) xo=x2-1;
    if(xo==x2+1) xo=1;
}
