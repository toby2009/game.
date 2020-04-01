#include <windows.h>
#include<cstdio>
#include<cstdlib>
#include <iostream>
#include <ctime> 
#define random(a,b) (rand()%(b-a)+a)
using namespace std;
//变量 
long long win=0,lose=0,tins=0,CNY=1000/*人民币*/,USD=100/*美元*/;
int elsewin=0,elselose=0,elsetin=0;
int computer;
int ms[2]={0};
int cjs[20]={0};
char xz;
int x;
int i;
int y;
long long yhy,yhm;
bool zjm;
long long tq,zs;
bool js;
//方法 
void strat();//开始 
void out();//out输出 
void cq();//猜拳 
void sz();//设置 
void sd();//商店 
void dw();//段位 
void jq();//剧情 
void one();
void three();
void five();
void winer();
void loser();
void tin();
void yh();
void cj();
void xt();//坑爹的小偷业务
void color();
void HideCursor();
void going();
void jl();
void dh();
//out输出 
void out(string s){
    for(i=0;i<=s.length();i++){
        cout<<s[i];
        Sleep(50);
    }
}
void HideCursor(){                  
    CONSOLE_CURSOR_INFO cursor_info={1,0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cursor_info);
}
//记录 
void jl(){
    //写数据
    FILE *fpWrite=fopen("lat.txt","w");
    if(fpWrite==NULL){
        out("OK");
    }
    for(int i=0;i<10;i++){
        fprintf(fpWrite,"%d ",i);
    }   
    fclose(fpWrite);
}
//读写数据 
void dh(){
    //读数据
    int a[10]={0};
    FILE *fpRead=fopen("lat.txt","r");
    if(fpRead==NULL){
        out("读取记录中... ...");
    }
    for(int i=0;i<10;i++){
        fscanf(fpRead,"%d ",&a[i]);
    }
}
void xt(){
    if(CNY>0&&USD>0){
        srand((int)time(0));
        zs=random(0,11);
        if(zs>8){
            out("你查看了钱包,钱少了"); 
            cout<<endl;
            out("小偷偷了你");
            srand((int)time(0));
            tq=random(0,CNY);
            cout<<tq;
            CNY-=tq;
            out("元,");
            srand((int)time(0));
            tq=random(0,USD);
            cout<<tq;
            USD-=tq;
            out("美元");
        }
    }   
}
void color(int a){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
//银行 
void yh(){
    while(1){
        cj();
        out("请问您办理什么业务?\n");
        out("1.存钱业务\n");
        out("2.取钱业务\n");
        out("3.退出业务\n");
        out("4.查看业务(现金)(可设置)\n");
        cin>>x;
        switch(x){
            case 1:
            out("请问你存多少元(人民币(x>3||x<3) 美元)\n");
            cin>>x>>y;
            if(x>CNY||y>USD){
                out("余额不足");
                system("cls");
            }else{
                out("存款成功");
                yhy+=x;
                yhm+=y;
                CNY-=x;
                USD-=y;
                system("cls");
            } 
            break;
            case 2:
            out("请问你取多少元(人民币 美元)\n");
            cin>>x>>y;
            if(x>yhy||y>yhm){
                out("余额不足");
                system("cls");
            }else{
                out("取款成功");
                yhy-=x;
                yhm-=y;
                CNY+=x;
                USD+=y;
                system("cls");
            }
            break;
            case 3:
            out("已经退出");
            system("cls");
            break;
            case 4:
            out("你有");
            cout<<CNY;
            out("RMB,");
            cout<<USD;
            out("美元");
            cout<<endl;
            out("您可以设置在主界面打印1 or 0\n");
            cin>>zjm;
            system("cls");
            break;
            default:
            out("你他妈输入的是杀鬼?");
            system("cls");
        }
        if(x==3){
            break;
        }
    }

} 
//成就
void cj(){
    //lose成就 
    if(lose>=1&&(!cjs[0])){
        out("达成成就:初次失败"); 
        cjs[0]++;
        Sleep(1000);
    }
    if(lose>=10&&(!cjs[1])){
        out("达成成就:失败的感觉"); 
        cjs[1]++;
        Sleep(1000);
    }
    if(lose>=50&&(!cjs[2])){
        out("达成成就:萌新的滋味"); 
        cjs[2]++;
        Sleep(1000);
    }
    if(lose>=100&&(!cjs[3])){
        out("达成成就:我太菜了"); 
        cjs[3]++;
        Sleep(1000);
    }
    if(lose>=500&&(!cjs[4])){
        out("达成成就:菜鸡一只"); 
        cjs[4]++;
        Sleep(1000);
    }
    //losewintin
    if(lose==win&&win==tins&&(lose!=0)&&(!cjs[5])){
        out("达成成就:均衡发展"); 
        cjs[5]++;
        Sleep(1000);
    }
    ///win
    if(win>=1&&(!cjs[6])){
        out("达成成就:首次胜利"); 
        cjs[6]++;
        Sleep(1000);
    }
    if(win>=10&&(!cjs[7])){
        out("达成成就:想要富先胜利");
        cjs[7]++; 
        Sleep(1000);
    }
    if(win>=50&&(!cjs[8])){
        out("达成成就:你是个大神"); 
        cjs[8]++;
        Sleep(1000);
    }
    if(win>=100&&(!cjs[9])){
        out("达成成就:迷惑电脑的王者"); 
        cjs[9]++;
        Sleep(1000);
    }
    if(win>=500&&(!cjs[10])){
        out("达成成就:我草无情"); 
        cjs[10]++;
        Sleep(1000);
    }
    if(win>=1000&&(!cjs[11])){
        out("达成成就:你怕是改代码了"); 
        cjs[11]++;
        Sleep(1000);
    }
    if(lose>=5000&&(!cjs[12])){
        out("达成成就:太无情了"); 
        cjs[12]++;
        Sleep(1000);
    }
    //tins 
    if(tins>=1&&(!cjs[13])){
        out("达成成就:平局!?"); 
        cjs[13]++;
        Sleep(1000);
    }
    if(tins>=10&&(!cjs[14])){
        out("达成成就:平平淡淡"); 
        cjs[14]++;
        Sleep(1000);
    }
    if(tins>=50&&(!cjs[15])){
        out("达成成就:平局快来"); 
        cjs[15]++;
        Sleep(1000);
    }
    if(tins>=100&&(!cjs[16])){
        cjs[16]++;
        out("达成成就:我草又是平局"); 
        Sleep(1000);
    }
    if(tins>=500&&(!cjs[17])){
        out("达成成就:平局之王"); 
        cjs[17]++;
        Sleep(1000);
    }
    if(tins>=1000&&(!cjs[18])){
        out("达成成就:王者平局");
        cjs[18]++; 
        Sleep(1000);
    }
    //Lose补充 
    if(lose>=1000&&(!cjs[19])){
        cjs[19]++;
        out("达成成就:我去你太菜"); 
        Sleep(1000);
    } 
    system("cls");
} 
//猜拳
//win,lose,tin
void winer(){
    out("玩家胜利");
    CNY+=200;
    USD+=20;
    win++;
    system("cls");
    cj();
    xt();
}
void loser(){
    out("玩家失败");
    lose++;
    system("cls");
    cj();
    xt();
}
void tin(){
    out("平局");
    system("cls");
    tins++;
    CNY+=100;
    USD+=10;
    cj();
    xt();
}
//模式 
void one(){
    cj();
    out("0.石头");
    cout<<endl;
    out("1.剪刀");
    cout<<endl; 
    out("2.布");
    cout<<endl;
    out("您选择:");
    cin>>x;
    if(x==0){
        out(".石头");
        cout<<endl;
    }else if(x==1){
        out(".剪刀");
        cout<<endl; 
    }else{
        out(".布");
        cout<<endl;
    }
    srand((int)time(0));
    computer=random(0,4);
    if(computer==0){
        out("0.石头");
        cout<<endl;
        if(x==2){
            winer();
        }else if(x==1){
            loser();
        }else{
            tin();
        }
    }else if(computer==1){
        out("1.剪刀");
        cout<<endl;
        if(x==0){
            winer();
        }else if(x==2){
            loser();
        }else{
            tin();
        }
    }else{
        out("2.布");
        cout<<endl;
        if(x==1){
            winer();
        }else if(x==0){
            loser();
        }else{
            tin();
        }
    }
}
void three(){
    cj();
    for(i=1;i<=3;i++){
        out("0.石头");
        cout<<endl;
        out("1.剪刀");
        cout<<endl; 
        out("2.布");
        cout<<endl;
        out("您选择:");
        cin>>x;
        if(x==0){
            out(".石头");
            cout<<endl;
        }else if(x==1){
            out(".剪刀");
            cout<<endl; 
        }else{
            out(".布");
            cout<<endl;
        }
        srand((int)time(0));
        computer=random(0,4);
        if(computer==0){
            out("0.石头");
            cout<<endl;
            if(x==2){
                elsewin++;
            }else if(x==1){
                elselose++;
            }else{
                elsetin++;
            }
        }else if(computer==1){
            out("1.剪刀");
            cout<<endl;
            if(x==0){
                elsewin++;
            }else if(x==2){
                elselose++;
            }else{
                elsetin++;
            }
        }else{
            out("2.布");
            cout<<endl;
            if(x==1){
                elsewin++;
            }else if(x==0){
                elselose++;
            }else{
                elsetin++;
            }
        }
        if(elsetin==2){
            tin();
        }else if(elselose==2){
            loser();
        }else if(elsewin==2){
            winer();
        }
    }
}
void five(){
    cj();
    for(i=1;i<=5;i++){
        out("0.石头");
        cout<<endl;
        out("1.剪刀");
        cout<<endl; 
        out("2.布");
        cout<<endl;
        out("您选择:");
        cin>>x;
        if(x==0){
            out(".石头");
            cout<<endl;
        }else if(x==1){
            out(".剪刀");
            cout<<endl; 
        }else{
            out(".布");
            cout<<endl;
        }
        srand((int)time(0));
        computer=random(0,4);
        if(computer==0){
            out("0.石头");
            cout<<endl;
            if(x==2){
                elsewin++;
            }else if(x==1){
                elselose++;
            }else{
                elsetin++;
            }
        }else if(computer==1){
            out("1.剪刀");
            cout<<endl;
            if(x==0){
                elsewin++;
            }else if(x==2){
                elselose++;
            }else{
                elsetin++;
            }
        }else{
            out("2.布");
            cout<<endl;
            if(x==1){
                elsewin++;
            }else if(x==0){
                elselose++;
            }else{
                elsetin++;
            }
        }
        if(elsetin==3){
            tin();
        }else if(elselose==3){
            loser();
        }else if(elsewin==3){
            winer();
        }
    }
}
//猜拳初始界面 
void cq(){
    cj();
    xt();
    while(1){
        out("选择模式:");
        out("0.一局了结");
        cout<<endl;
        if(true==ms[1]){
            out("1.三局两胜");
            cout<<endl;
        } 
        if(true==ms[2]){
            out("2.五局三胜");
            cout<<endl;
        }
        out("3.退出");
        cout<<endl;
        cin>>xz;
        if(xz=='0'){
            system("cls");
            out("  一局了结  ");
            cout<<endl;
            one();
        }else if(true==ms[1]&&xz=='1'){
            system("cls");
            out("  三局两胜  ");
            cout<<endl;
            three();
        }else if(true!=ms[1]&&xz=='1'){
            out("尼玛,你还没解锁就想玩,滚");
            cout<<endl;
            Sleep(1000);
            system("cls");
        }else if(true==ms[2]&&xz=='2'){
            system("cls");
            out("  五局三胜  ");
            cout<<endl;
            five();
        }else if(true!=ms[2]&&xz=='2'){
            out("尼玛,你还没解锁就想玩,滚");
            cout<<endl;
            Sleep(1000);
            system("cls");
        }else if(xz=='3'){
            out("OK");
            break;
        }else{
            out("你他妈搞什么搞,输入啥鬼东西,滚");
            cout<<endl;
            Sleep(1000);
            system("cls");
        }
    }
}
//设置 
void sz(){
    cj();
    xt();
    out("你要什么字体颜色？");
    cout<<endl;
    out("黑色：按1");
    cout<<endl;
    out("蓝色：按2");
    cout<<endl;
    out("绿色：按3");
    cout<<endl;
    out("浅绿色：按4");
    cout<<endl;
    out("红色：按5");
    cout<<endl;
    out("紫色：按6");
    cout<<endl;
    out("黄色：按7");
    cout<<endl;
    out("白色：按8");
    cout<<endl;
    out("灰色：按9");
    cout<<endl;
    cin>>xz;
    switch(xz){
        case '1':system("color 0");break;
        case '2':system("color 1");break;
        case '3':system("color 2");break;
        case '4':system("color 3");break;
        case '5':system("color 4");break;
        case '6':system("color 5");break;
        case '7':system("color 6");break;
        case '8':system("color 7");break;
        case '9':system("color 8");break;
        default:system("color");
    }
    out("调颜色成功。");
}
//商店
void sd(){
    while(1){
        cj();
        xt();
        out("欢迎来到笨蛋小店");
        cout<<endl;
        out("请选择货物");
        cout<<endl;
        out("0.lose是个屁(lose--) 300￥+30$");
        cout<<endl;
        out("1.lose是空气(lose-=5) 1500￥+150$");
        cout<<endl;
        out("2.win是十分棒(win++) 500￥+50$");
        cout<<endl;
        out("3.win是特别棒(win+=5) 3000￥+300$");
        cout<<endl;
        out("4.模式1来了(解锁模式一) 10000￥+20win+1000$");
        cout<<endl;
        out("5.模式2来了(解锁模式二) 50000￥+50win+5000$");
        cout<<endl;
        out("6.退出");
        cout<<endl;
        out("7.我要RMB(RMB+=10) 1$");
        cout<<endl; 
        cin>>x;
        if(x==0){
            if(CNY>=300&&USD>=30){
                CNY-=300;
                USD-=30;
                lose--;
                system("cls");
            }else{
                out("余额不足");
                cout<<endl;
                system("cls");
            }
        }else if(x==1){
            if(CNY>=1500&&USD>=150){
                CNY-=1500;
                USD-=150;
                lose-=5;
                system("cls");
            }else{
                out("余额不足");
                cout<<endl;
                system("cls");
            }
        }else if(x==2){
            if(CNY>=500&&USD>=50){
                CNY-=500;
                USD-=50;
                win++;
                system("cls");
            }else{
                out("余额不足");
                cout<<endl;
                system("cls");
            }
        }else if(x==3){
            if(CNY>=3000&&USD>=300){
                CNY-=3000;
                USD-=300;
                win+=5;
                system("cls");
            }else{
                out("余额不足");
                cout<<endl;
                system("cls");
            }
        }else if(x==4){
            if(CNY>=10000&&USD>=1000&&win>=20){
                CNY-=10000;
                USD-=1000;
                win-=20;
                system("cls");
            }else{
                out("余额不足");
                cout<<endl;
                system("cls");
            }
        }else if(x==5){
            if(CNY>=50000&&USD>=5000&&win>=50){
                CNY-=50000;
                USD-=5000;
                win-=50;
                system("cls");
            }else{
                out("余额不足");
                cout<<endl;
                system("cls");
            }
        }else if(x==6){
            break;
            system("cls");
        }else if(x==7){
            if(USD>=1){
                CNY+=10;
                USD--;
                system("cls");
            }else{
                out("余额不足");
                cout<<endl;
                system("cls");
            }
        }else{
            out("你他妈搞什么搞,输入啥鬼东西,滚");
            cout<<endl;
            Sleep(1000);
            system("cls");
        }
    }
}
//剧情
void jq(){
    cj();
    xt();
    out("此模式正在开发中");
    system("cls");
}
//段位
void dw(){
    cj();
    xt();
    out("此模式正在开发中");
    system("cls");
}
//开始游戏 
void strat(){
    cj();
    cout<<"-------------------------------------------------------"<<endl;
    out("本游戏版权为詹鹏举所有,若发现抄袭,且未标名出处,后果自负");
    cout<<endl<<"-------------------------------------------------------"<<endl;
    out("欢迎来到游戏 猜拳王 ,游戏版本号(2.1.5)");
    Sleep(100);
    cout<<endl;
    out("你赢了");
    cout<<win;
    out("场,输了");
    cout<<lose;
    out("场,平局了");
    cout<<tins;
    out("场");
    cout<<endl;
    if(zjm){
        out("您有");
        cout<<CNY;
        out("元人民币,");
        cout<<USD;
        out("元美金");
        cout<<endl;
    }
    out("您可以选择模式:");
    Sleep(100);
    cout<<endl;
    out("1.猜拳王");
    Sleep(100);
    cout<<endl;
    out("2.商店王");
    Sleep(100);
    cout<<endl;
    out("3.剧情王(开发中)");
    Sleep(100);
    cout<<endl;
    out("4.段位王(开发中)");
    Sleep(100);
    cout<<endl;
    out("5.设置王");
    Sleep(100);
    cout<<endl;
    out("6.银行王");
    Sleep(100);
    cout<<endl;
    out("7.退出");
    cout<<endl;
}
void going(){
    while(1){
        cj();
        strat();
        cin>>xz;
        if(xz=='1'){
            for(i=1;i<=10;i++){
                out("正在加载中... ...");
                Sleep(100);
            }
            cout<<endl;
            out("加载完成");
            Sleep(500);
            system("cls");
            cq();
        }else if(xz=='2'){
            for(i=1;i<=10;i++){
                out("正在加载中... ...");
                Sleep(100);
            }
            cout<<endl;
            out("加载完成");
            Sleep(500);
            system("cls");
            sd();
        }else if(xz=='3'){
            for(i=1;i<=10;i++){
                out("正在加载中... ...");
                Sleep(100);
            }
            cout<<endl;
            out("加载完成");
            Sleep(500);
            system("cls");
            jq();
        }else if(xz=='4'){
            for(i=1;i<=10;i++){
                out("正在加载中... ...");
                Sleep(100);
            }
            cout<<endl;
            out("加载完成");
            Sleep(500);
            system("cls");
            dw();
        }else if(xz=='5'){
            for(i=1;i<=10;i++){
                out("正在加载中... ...");
                Sleep(100);
            }
            cout<<endl;
            out("加载完成");
            Sleep(500);
            system("cls");
            sz(); 
        }else if(xz=='6'){
            for(i=1;i<=10;i++){
                out("正在加载中... ...");
                Sleep(100);
            }
            cout<<endl;
            out("加载完成");
            Sleep(500);
            system("cls");
            yh(); 

        }else{
            out("see you");
            system("cls");
            jl();
            cout<<"-------------------------------------------------------"<<endl;
            out("本游戏版权为詹鹏举所有,若发现抄袭,且未标名出处,后果自负");
            cout<<endl<<"-------------------------------------------------------"<<endl;
            out("再见了 拜拜");
            cout<<endl;  
            out("叮,记录完成");
            break;
        }
    }
}
//主函数 
int main(){
    dh();
    HideCursor(); 
    going();

    return 0;
}
