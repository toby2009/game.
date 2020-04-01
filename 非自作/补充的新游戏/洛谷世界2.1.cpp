#include<stdlib.h>
#include<stdio.h>
#include<time.h> //suiji 
#include<string.h>
#include<windows.h> //SLEEP函数
char player_name[21];
int tttttt=0,ttttt=0;
struct Player //玩家结构体，并初始化player
{
    char name[21];
    int attack;
    int defense;
    int health;
    int max_health;
    int level;
    int exp;
    int range_exp;
    int max_exp;
}player= {"勇士",666,666,2333,2333,1,0,0,100};
struct Enemy //怪的结构体,并初始化各种怪
{
    char name[20];
    char wupin[12];
    int attack;
    int defense;
    int health;
    int money;
    int exp;
    int wupin_sign;
    int wupinpro;
    int double_attack;
    int miss;
    int die;
} strongman= {"森林巨人","星辰石",999,999,2333,233,100,1,2,1,0,0},
  witch= {"森林女巫","银甲",666,666,1111,99,55,2,2,1,1,0},
  xiyi= {"森林蜥蜴","铁甲",333,333,888,168,77,3,3,2,2,0},
  big_strongman= {"森林巨人王","巨人之臂",6666,6666,23333,2333,999,4,4,2,0,0},
  lion= {"草原雄狮","星辰石",1111,888,2333,233,100,1,2,1,0,0},
  horse= {"草原野马","碧血剑",777,555,1111,99,55,6,2,1,1,0},
  bee= {"草原黄蜂","长剑",444,222,888,168,77,7,3,2,2,0},
  shitu= {"使徒","\0",23333,23333,66666,6666,2333,1,1,1,0,0},
  guai= {"\0","\0",0,0,0,0,0,0,0,0,0,0};
struct Place
{
    int bar,hotel,forest1,forest2,forest3,grass1,grass2,grass3;
} place= {1,2,3,4,5,6,7,8};
int max_exp=0;
int choose_number=0,s=0,strongman_arm=0,battle=0,money=5000,place_sign=9;
int cao=10,jijiubao=5,baiyao=2,superbaiyao=2,shenyao=1,boom=10,dubiao=5,atom_boom=1;
int fang=0,fang1=666,fang1n=0,fang2=1111,fang2n=0,fang3=2333,fang3n=0,fang4=6666,fang4n=0,gong5=12888,gong5n=0;
int gong=0,gong1=666,gong1n=0,gong2=1111,gong2n=0,gong3=2333,gong3n=0,gong4=6666,gong4n=0,fang5=12888,fang5n=0;
int star=0;
char gongname[20]="无",fangname[20]="无";
char proof;
void AddWupin(int);
int AttackResult();
void BattleAct();
void ChooseWupin();
void DisplayState();
void OrdinaryAct();
int SuiJi();
int SuiJi100();
int Suiji00000();
void WhetherLevelUp();
void SlowDisplay(char *);
int main()
{
    SlowDisplay("            欢迎来到艾泽拉斯大陆              \n这是一个勇士的世界! 雅莉萨斯国的罗茜公主被陌生人绑架了!\n\n 伟大的勇士啊~拿起你们的武器,营救公主!\n\n\n输入你的名字:\n\n\n");
    scanf("%s",player_name);
    strncpy(player.name,player_name,20);
    if(strcmp(player.name,"锦依卫")==0)
    {
        SlowDisplay("\n\n\n彩蛋模式,开启!!!\n\n\n封印多年的锦依卫啊!你终于可以重见天日了!\n\n\n 锦依卫重新启动... 随即... 暴走!!!\n\n\n");
        player.attack=99999;
        player.defense=99999;
        player.health=99999;
        player.max_health=99999;
        player.exp=0;
        player.max_exp=10;
        player.level=1;
        player.range_exp=0; 
    }
    getchar();
    OrdinaryAct();
    return 0;
}
int SuiJi()
{
    srand((unsigned)time(NULL));
    return rand()%10;
}
int Suiji00000()
{
    srand((unsigned)time(NULL));
    return rand()%5;
}
int SuiJi100()
{
    srand((unsigned)time(NULL));
    return rand()%100;
}
void ChooseWupin() //选择物品 并使用
{
    printf("物品: 1,止血草%d个 2,急救包%d个 3,云南白药%d个 4,超级云南白药%d个 5,神药%d个 6,手雷%d个 7,毒标%d个 8,手抛式原子弹%d个 0,返回\n\n\n",cao,jijiubao,baiyao,superbaiyao,shenyao,boom,dubiao,atom_boom);
    switch(scanf("%d",&choose_number),choose_number)
    {
        case 1:
            if(cao>0)
            {
                SlowDisplay("使用止血草,HP增加2333\n\n\n");
                cao--;
                if(player.health+2333>player.max_health)player.health=player.max_health;
                else player.health+=2333;
            }
            else SlowDisplay("没有止血草了\n\n\n");
            break;
        case 2:
            if(jijiubao>0)
            {
                SlowDisplay("使用急救包,HP增加6666\n\n\n");
                jijiubao--;
                if(player.health+6666>player.max_health)player.health=player.max_health;
                else player.health+=6666;
            }
            else SlowDisplay("没有急救包了\n\n\n");
            break;
        case 3:
            if(baiyao>0)
            {
                SlowDisplay("使用云南白药,HP增加9999\n\n\n");
                baiyao--;
                if(player.health+9999>player.max_health)player.health=player.max_health;
                else player.health+=9999;
            }
            else SlowDisplay("没有云南白药了\n\n\n");
            break;
        case 4:
            if(superbaiyao>0)
            {
                SlowDisplay("使用超级云南白药,HP增加16888\n\n\n");
                superbaiyao--;
                if(player.health+16888>player.max_health)player.health=player.max_health;
                else player.health+=16888;
            }
            else SlowDisplay("没有超级云南白药了\n\n\n");
            break;
        case 5:
            if(shenyao>0)
            {
                SlowDisplay("使用神药,HP增加25888");
                shenyao--;
                if(player.health+25888>player.max_health)player.health=player.max_health;
                else player.health+=25888; 
            }
            else SlowDisplay("没有神药了\n\n\n");
            break;      
        case 6:
            if(battle) //在战斗中(battle=1),否则(battle=0)不能使用攻击性物品
            {
                if(boom>0)
                {
                    SlowDisplay("使用手雷,敌人HP减少2333且防御降低25%\n\n\n");
                    boom--;
                    guai.health-=2333;
                    guai.defense*=0.75;
                    AttackResult();
                }
            }
            else SlowDisplay("非战斗状态,不能使用手雷!\n\n\n");
            break;
        case 7:
            if(battle) //在战斗中(battle=1),否则(battle=0)不能使用攻击性物品
            {
                if(dubiao>0)
                {
                    SlowDisplay("使用毒标,敌人HP减少6666且攻击降低25%\n\n\n");
                    dubiao--;
                    guai.health-=6666;
                    guai.attack*=0.75;
                    AttackResult();
                }
            }
            else SlowDisplay("非战斗状态,不能使用毒标!\n\n\n");
            break;
        case 8:
            if(battle) //在战斗中(battle=1),否则(battle=0)不能使用攻击性物品
            {
                if(atom_boom>0)
                {
                    SlowDisplay("使用手抛式原子弹,敌人HP减少16888且攻击与防御均降低40%\n\n\n");
                    atom_boom--;
                    guai.attack*=0.6;
                    guai.defense*=0.6;
                    guai.health-=16888;
                    AttackResult();
                }
            }
            else SlowDisplay("非战斗状态,不能使用手抛式原子弹!\n\n\n");
            break;
        case 0:
            break;
default:

            printf("ChooseWupin error!\n\n\n");
    }
}
int AttackResult() //攻击结果:判断是否获胜 是否获得物品 和 是否升级
{
    if(guai.health<=0)
    {
        battle=0;
        printf("战斗胜利!获得金币%d,经验%d\n\n\n",guai.money,guai.exp);
        player.exp+=guai.exp;
        player.range_exp+=guai.exp;
        money+=guai.money;
        s=SuiJi();
        if(s<guai.wupinpro)
        {
            SlowDisplay("从敌人尸骸中发现");
            printf("%s\n\n\n",guai.wupin);
            AddWupin(guai.wupin_sign);
        }
        WhetherLevelUp();
        return 1; //攻击有结果了返回1,否则返回0,用于判断是否继续做战斗行为
    }
    else
    {
        printf("%s还有%d滴血\n\n",guai.name,guai.health);
        int s=SuiJi();
        if((guai.attack+s-player.defense/3)<0)
        {
            player.health-=1;
            printf("%s反击,你的HP减少了 1\n\n",guai.name);
        }
        else
        {
            player.health-=guai.attack+s-player.defense/3;
            printf("%s反击,你的HP减少了%d\n\n",guai.name,guai.attack+s-player.defense/3);
        }
        if(player.health<0)
        {
            battle=0;
            printf("%s战死!金币掉落%d\n\n\n",player.name,player.level*200);
            money-=player.level*200;
            player.health=player.max_health/5;
            OrdinaryAct();//////////
            return 1;
        }
    }
    return 0;
}
void AddWupin(int wupin_sign)
{
    switch(wupin_sign)
    {
        case 1:
            star++;
            break;
        case 2:
            fang3n++;
            break;
        case 3:
            fang2n++;
            break;
        case 4:
            strongman_arm++;
            break;
        case 6:
            gong3n++;
            break;
        case 7:
            gong2n++;
            break;
default:

            printf("AddWupin error\n\n\n");
    }
}
void WhetherLevelUp()
{
    int i=0,j=0;
    int l1=player.range_exp/100;
    int l2=player.range_exp/300;
    int l3=player.range_exp/600;
    if(player.level<=15&&l1>0) //15级以下,经验足够 都满足则升级
    {
        printf("升级!攻击力+%d, 防御力+%d, HP上限+%d\n\n\n",88*l1,58*l1,128*l1);
        player.exp=player.exp+guai.exp-(player.exp+guai.exp)%100;
        player.attack+=88*l1;
        player.defense+=58*l1;
        player.max_health+=128*l1;
        player.health=player.max_health;
        player.level+=l1;
        player.range_exp=0;
        player.exp=player.max_exp;
        player.max_exp+=100*l1;
    }
    else if(player.level<=40&&l2>0)
    {
        printf("升级!攻击力+%d, 防御力+%d, HP上限+%d\n\n\n",128*l2,88*l2,168*l2);
        player.exp=player.exp+guai.exp-(player.exp+guai.exp)%100;
        player.attack+=128*l2;
        player.defense+=88*l2;
        player.max_health+=168*l2;
        player.health=player.max_health;
        player.level+=l2;
        player.range_exp=0;
        player.exp=player.max_exp;
        player.max_exp+=300*l2;
    }
    else if(l3>0)
    {
        printf("升级!攻击力+%d, 防御力+%d, HP上限+%d\n\n\n",168*l3,128*l3,288*l3);
        player.exp=player.exp+guai.exp-(player.exp+guai.exp)%100;
        player.attack+=168*l3;
        player.defense+=128*l3;
        player.max_health+=288*l3;
        player.health=player.max_health;
        player.level+=l3;
        player.range_exp=0;
        player.exp=player.max_exp;
        player.max_exp+=600*l3;
    }
}
void OrdinaryAct() //正常行为菜单(移动,物品,对话,查看状态,装备,退出游戏)
{
    while(1)
    {
        system("pause");
        system("cls");
        puts("==========================================================================");
        printf("要做什么?\n\n\n 1,移动 2,道具 3,对话 4,查看状态 5,装备 6,击杀榜 0,退出游戏\n\n\n");
        puts("==========================================================================");
        switch(scanf("%d",&choose_number),choose_number)
        {
            system("cls"); 
            case 1: //显示移动菜单
                SlowDisplay("要去哪里?\n\n\n");
                printf("1,酒吧 2,旅馆 3,森林一层 4,森林二层 5,森林三层 6,草原一层 7,草原二层 8,草原三层\n\n\n");
                switch(scanf("%d",&choose_number),choose_number)
                {
                    system("cls"); 
                    case 1:
                        place_sign=place.bar; //记录目前位置-酒吧
                        break;
                    case 2:
                        place_sign=place.hotel; //进入旅店
                        SlowDisplay("要住店吗? 2000个金币 1,是 0,否\n\n\n");
                        choose_number=1;
                        switch(scanf("%d",&choose_number),choose_number)
                        {
                            case 1:
                                if(money-2000<0) //判断钱是否够
                                {
                                    SlowDisplay("Sorry,你的钱不够~\n\n\n");
                                }
                                else
                                {
                                    SlowDisplay("好好休息\n\tHP满\n\t\t第二天了\n\n");
                                    money-=2000; //花费2000住店费
                                    player.health=player.max_health; //体力满
                                }
                                break;
                            case 0:
                                SlowDisplay("下次再来!\n\n\n");
                                break;
default: printf("hotel talk error!\n\n\n");

                        }
                        place_sign=0;
                        break;
                    case 3:
                        place_sign=place.forest1;
                        s=SuiJi();
                        if(s<7)
                        {
                            battle=1;
                            guai=xiyi;
                            guai.health*=guai.die/5+1;
                            guai.attack*=guai.die/5+1;
                            guai.defense*=guai.die/5+1;
                            printf("%s扑了过来!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) xiyi.die++;
                        }
                        else if(s<9)
                        {
                            battle=1;
                            guai=witch;
                            guai.health*=guai.die/5+1;
                            guai.attack*=guai.die/5+1;
                            guai.defense*=guai.die/5+1;
                            printf("%s扑了过来!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) witch.die++;
                        }
                        else
                        {
                            SlowDisplay("这里安全\n\n\n");
//不用调用OAct函数,会自动执行OAct函数;
                        }
                        break;
                    case 4:
                        place_sign=place.forest2;
                        s=SuiJi();
                        if(s<7)
                        {
                            battle=1;
                            guai=witch;
                            guai.health*=guai.die/5+1;
                            guai.attack*=guai.die/5+1;
                            guai.defense*=guai.die/5+1;
                            printf("%s扑了过来!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) witch.die++;
                        }
                        else if(s<9)
                        {
                            battle=1;
                            guai=strongman;
                            guai.health*=guai.die/5+1;
                            guai.attack*=guai.die/5+1;
                            guai.defense*=guai.die/5+1;
                            printf("%s扑了过来!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) strongman.die++;
                        }
                        else
                        {
                            SlowDisplay("这里安全\n\n\n");
                        }
                        break;
                    case 5:
                        place_sign=place.forest3;
                        s=SuiJi();
                        if(s<7)
                        {
                            battle=1;
                            guai=strongman;
                            guai.health*=guai.die/5+1;
                            guai.attack*=guai.die/5+1;
                            guai.defense*=guai.die/5+1;
                            printf("%s扑了过来!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) strongman.die++;
                        }
                        else if(s<9)
                        {
                            battle=1;
                            guai=big_strongman;
                            guai.health*=guai.die/5+1;
                            guai.attack*=guai.die/5+1;
                            guai.defense*=guai.die/5+1;
                            printf("%s扑了过来!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) big_strongman.die++;
                        }
                        else
                        {
                            SlowDisplay("这里安全\n\n\n");
                        }
                        break;
                    case 6:
                        place_sign=place.grass1;
                        s=SuiJi();
                        if(s<7)
                        {
                            battle=1;
                            guai=bee;
                            guai.health*=guai.die/5+1;
                            guai.attack*=guai.die/5+1;
                            guai.defense*=guai.die/5+1;
                            printf("%s扑了过来!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) bee.die++;
                        }
                        else if(s<9)
                        {
                            battle=1;
                            guai=horse;
                            guai.health*=guai.die/5+1;
                            guai.attack*=guai.die/5+1;
                            guai.defense*=guai.die/5+1;
                            printf("%s扑了过来!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) horse.die++;
                        }
                        else
                        {
                            SlowDisplay("这里安全\n\n\n");
                        }
                        break;
                    case 7:
                        place_sign=place.grass2;
                        s=SuiJi();
                        if(s<7)
                        {
                            battle=1;
                            guai=horse;
                            guai.health*=guai.die/5+1;
                            guai.attack*=guai.die/5+1;
                            guai.defense*=guai.die/5+1;
                            printf("%s扑了过来!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) horse.die++;
                        }
                        else if(s<9)
                        {
                            battle=1;
                            guai=lion;
                            guai.health*=guai.die/5+1;
                            guai.attack*=guai.die/5+1;
                            guai.defense*=guai.die/5+1;
                            printf("%s扑了过来!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) lion.die++;
                        }
                        else
                        {
                            SlowDisplay("这里安全\n\n\n");
                        }
                        break;
                    case 8:
                        place_sign=place.grass3;
                        s=SuiJi();
                        if(s<7)
                        {
                            battle=1;
                            guai=lion;
                            guai.health*=guai.die/5+1;
                            guai.attack*=guai.die/5+1;
                            guai.defense*=guai.die/5+1;
                            printf("%s扑了过来!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) lion.die++;
                        }
                        else if(s<9)
                        {
                            battle=1;
                            if(strongman_arm)
                            {
                                if(tttttt==0) SlowDisplay("神秘老人:\n\n\n 哈哈,年轻人,做的不错,不过...嘿嘿,你上当啦!巨人之臂我要了,公主你也别想带走!\n\n\n");
                                tttttt=1;
                                guai=shitu;
                                guai.health*=guai.die/5+1;
                                guai.attack*=guai.die/5+1;
                                guai.defense*=guai.die/5+1;
                                printf("%s扑了过来!\n\n\n",guai.name);
                                BattleAct();
                                if(guai.health<=0) shitu.die++;
                                if(guai.health==shitu.health) printf("使徒逃走,未能救出公主\n\n\n(在版本维护前是就不出公举滴~~~)\n\n\n");
                            }
                            else SlowDisplay("神秘老人:\n\n\n 年轻人,你好啊.如果你有巨人之臂,我可以告诉你公主的下落哦~\n\n\n");
                        }
                        else
                        {
                            SlowDisplay("这里安全\n\n\n");
                        }
                        break;
default:

                        printf("choose map error!\n\n\n");
                }
                break;
            case 2:
                ChooseWupin();
                break; //显示道具,并可以使用.
            case 3: //对话选项
                if(place_sign==place.bar)
                {
                    SlowDisplay("要和谁说话?\n\n\n1,红发女郎 2,赏金猎人 3,酒吧老板 4,锻造大师 5,神秘商人\n\n\n"); //显示对话人物
                    switch(scanf("%d",&choose_number),choose_number)
                    {
                        case 1:
                            if(ttttt==0)SlowDisplay("红发女郎:\n\n\n 吧台边那个Hunter好帅啊!(~脸红~)\n\n\n听说他经常外出打猎,外面的路他应该很熟悉的!\n\n\n"),ttttt=1;
                            else
                            {
                                SlowDisplay("需要按摩放松一下吗?6666块一次哦,还可以赊账哦\n\n1,好的 2,算了,不用\n\n\n");
                                scanf("%d",&choose_number);
                                switch(choose_number)
                                {
                                    case 1:
                                        if(money>=0)
                                        {
                                            money-=6666;
                                            player.attack*=1.2;
                                            player.defense*=1.2;
                                            player.max_health*=1.2;
                                            printf("    按摩ing    \n\n\n");
                                            Sleep(2000);
                                        }
                                        else SlowDisplay("你还欠着钱呢!!!\n\n\n");
                                        break;
                                    case 2:
                                        SlowDisplay("红发女郎:......(凸(?｀∧′)凸)........算了，下次吧......\n\n\n");
                                        break;
                                    default: SlowDisplay("输入错误\n\n\n");
                                }
                            }
                            break;
                        case 2:
                            if(fang1n<1&&gong1n<1)
                            {
                                SlowDisplay("赏金猎人:\n\n\n 你要救公主啊!好胆量!\n\n\n 不过外面的丛林和草原很险恶,而且越深越危险,这是匕首和布衣,对你会有些帮助的,拿去吧!\n\n\n");
                                printf("%s心想:(哇,这位大叔人真好啊!\n\n\n)",player.name);
                                gong1n++;
                                fang1n++;
                            }
                            else SlowDisplay("赏金猎人:\n\n\n 加油吧,年轻人!\n\n\n 不要被外面丛林和草原所吓倒!\n\n\n");
                            break;
                        case 3:
                            printf("要喝点什么?\n\n\n 1,二锅头500金币 Attack+168 2,XO酒800金币 Defence+258 3,人头马面1500金币 HP_MAX+488 0,返回\n\n\n");
                            choose_number=1;
                            while(choose_number)
                            {
                                switch(scanf("%d",&choose_number),choose_number)
                                {
                                    case 1:
                                        if(money<500)
                                        {
                                            SlowDisplay("钱不够!");
                                        }
                                        else
                                        {
                                            SlowDisplay("ATK+168.");
                                            money-=500;
                                            player.attack+=168;
                                        }
                                        break;
                                    case 2:
                                        if(money<800)
                                        {
                                            SlowDisplay("钱不够!");
                                        }
                                        else
                                        {
                                            SlowDisplay("DEF+258.");
                                            money-=800;
                                            player.defense+=258;
                                        }
                                        break;
                                    case 3:
                                        if(money<1500)
                                        {
                                            SlowDisplay("钱不够!");
                                        }
                                        else
                                        {
                                            SlowDisplay("HP_MAX+488.");
                                            money-=1500;
                                            player.health+=488;
                                        }
                                        break;
                                    case 0:
                                        SlowDisplay("下次再来!\n");
                                        break;
default: SlowDisplay("输入错误\n\n\n");
                                }
                            }break;
                        case 4:
                            printf("锻造大师:\n\n\n要打造点什么?\n\n\n1,绝世圣剑 2,黄金圣衣 3,噬天神剑 4,永恒幻衣 5,分解巨人之臂, 0,退出\n\n\n");
                            SlowDisplay("选择要打造的武器或防具,或者分解巨人之臂\n\n\n");
                            switch(scanf("%d",&choose_number),choose_number)
                            {
                                case 1:
                                    if(gong3n>0&&star>=10)
                                    {
                                        gong3n--;
                                        star-=10;
                                        gong4n++;
                                        if(gong3n==0)
                                        {
                                            strcpy(gongname,"绝世圣剑");
                                            gong=gong4;
                                        }
                                        printf("已合成 绝世圣剑\n\n\n");
                                    }
                                    else
                                    {
                                        if(gong3n==0)
                                        printf("还需要一把碧血剑\n\n\n");
                                        if(star<10)
                                        printf("还需要%d颗星辰石\n\n\n",10-star);
                                    }
                                    break;
                                case 2:
                                    if(fang3n>0&&star>=10)
                                    {
                                        fang3n--;
                                        star-=10;
                                        gong4n++;
                                        if(gong3n==0)
                                        {
                                            strcpy(fangname,"黄金圣衣");
                                            fang=fang4;
                                        }
                                        printf("已合成 黄金圣衣\n\n\n");
                                    }
                                    else
                                    {
                                        if(fang3n==0)
                                        printf("还需要一件银甲\n\n\n");
                                        if(star<10)
                                        printf("还需要%d颗星辰石\n\n\n",10-star);
                                    }
                                    break;
                                case 3:
                                    if(gong4n>=3&&star>=25)
                                    {
                                        gong4n-=3;
                                        star-=25;
                                        gong5n++;
                                        if(gong4n==0)
                                        {
                                            strcpy(gongname,"噬天神剑");
                                            gong=gong5;
                                        }
                                        printf("已合成 神器-噬天神剑\n\n\n");
                                    }
                                    else
                                    {
                                        if(gong4n<3)
                                        printf("还需要%d把绝世圣剑\n\n\n",3-gong4n);
                                        if(star<25)
                                        printf("还需要%d颗星辰石\n\n\n",25-star);
                                    }
                                    break;
                                case 4:
                                    if(fang4n>=3&&star>=25)
                                    {
                                        fang4n-=3;
                                        star-=25;
                                        fang5n++;
                                        if(gong4n==0)
                                        {
                                            strcpy(fangname,"永恒幻衣");
                                            fang=fang5;
                                        }
                                        printf("已合成 神器-永恒幻衣\n\n\n");
                                    }
                                    else
                                    {
                                        if(fang4n<3)
                                        printf("还需要%d件黄金圣衣\n\n\n",3-gong4n);
                                        if(star<25)
                                        printf("还需要%d颗星辰石\n\n\n",25-star);
                                    }
                                    break;
                                case 5:
                                    printf("你要分解多少个?(你现在有%d个巨人之臂)\n\n\n",strongman_arm);
                                    int q;scanf("%d",&q);
                                    if(q>strongman_arm||q<0)
                                    {
                                        printf("输出错误!\n\n\n");
                                        break;
                                    }
                                    strongman_arm-=q;
                                    for(int i=1;i<=q;i++)
                                    {
                                        int sssss=Suiji00000();
                                        star+=sssss;
                                        printf("获得%d个星辰石\n\n\n",sssss);
                                    } 
                                    break;
                                case 0:break;
                                default: SlowDisplay("输入错误\n\n\n");
                            }break;
                        case 5:
                            printf("神秘商人:\n\n\n你要点什么东西\n\n\n");
                            printf("1,止血草100币/个 2,急救包200币/个 3,云南白药288币/个 4,超级云南白药588币/个 5,神药888币/个 6,手雷1288币/个 7,毒标1588币/个 8,手抛式原子弹5888币/个 0,退出\n\n\n");
                            scanf("%d",&choose_number);
                            if(choose_number==0) break;
                            int q;
                            printf("你要多少个\n\n\n");
                            scanf("%d",&q);
                            switch(choose_number)
                            {
                                int q;
                                case 1:
                                    if(money>=100*q)
                                    {
                                        money-=100*q;
                                        cao+=q;
                                    }
                                    else printf("你没有足够的钱\n\n\n");
                                    break;
                                case 2:
                                    if(money>=200*q)
                                    {
                                        money-=200*q;
                                        jijiubao+=q;
                                    }
                                    else printf("你没有足够的钱\n\n\n");
                                    break;
                                case 3:
                                    if(money>=288*q)
                                    {
                                        money-=288*q;
                                        baiyao+=q;
                                    }
                                    else printf("你没有足够的钱\n\n\n");
                                    break;
                                case 4:
                                    if(money>=588*q)
                                    {
                                        money-=588*q;
                                        superbaiyao+=q;
                                    }
                                    else printf("你没有足够的钱\n\n\n");
                                    break;
                                case 5:
                                    if(money>=888*q)
                                    {
                                        money-=888*q;
                                        shenyao+=q;
                                    }
                                    else printf("你没有足够的钱\n\n\n");
                                    break;
                                case 6:
                                    if(money>=1288*q)
                                    {
                                        money-=1288*q;
                                        boom+=q;
                                    }
                                    else printf("你没有足够的钱\n\n\n");
                                    break;
                                case 7:
                                    if(money>=1588*q)
                                    {
                                        money-=1588*q;
                                        dubiao+=q;
                                    }
                                    else printf("你没有足够的钱\n\n\n");
                                    break;
                                case 8:
                                    if(money>=5888*q)
                                    {
                                        money-=5888*q;
                                        atom_boom+=q;
                                    }
                                    else printf("你没有足够的钱\n\n\n");
                                    break;
                                default: printf("输入错误!\n\n\n");
                            }break;
                        break;
                    }
                }
                else if(place_sign==place.hotel)
                    SlowDisplay("“老板娘!我...”\n\n\n“我忙着呢，没空理你~”\n\n\n");
                else SlowDisplay("这里好像没人可以聊天\n\n\n");
                break;
            case 4:
                DisplayState();
                break; //显示状态
            case 5: //装备
                printf("星辰石:%d个\n\n\n",star);
                printf("攻装: 1,匕首:%d个 2,长剑:%d个 3,碧血剑:%d个 4,绝世圣剑:%d个 5,噬天神剑:%d个\n\n\n\n",gong1n,gong2n,gong3n,gong4n,gong5n);
                printf("防装: 6,布衣:%d个 7,铁甲:%d个 8,银甲:%d个 9,黄金圣衣:%d个 10,永恒幻衣:%d个\t\t0,返回\n\n\n",fang1n,fang2n,fang3n,fang4n,fang5n);
                SlowDisplay("选择要装备的武器或防具:\n\n\n");
                switch(scanf("%d",&choose_number),choose_number)
                {
                    case 1:
                        if(gong1n>=1)
                        {
                            SlowDisplay("拿起了匕首\n\n\n");
                            gong=gong1;
                            strcpy(gongname,"匕首");
                        }
                        else SlowDisplay("你没有匕首可以装备\n\n\n");
                        break;
                    case 2:
                        if(gong2n>=1)
                        {
                            SlowDisplay("拿起了长剑\n\n\n");
                            gong=gong2;
                            strcpy(gongname,"长剑");
                        }
                        else SlowDisplay("你没有长剑可以装备\n\n\n");
                        break;
                    case 3:
                        if(gong3n>=1)
                        {
                            SlowDisplay("拿起了碧血剑\n\n\n");
                            gong=gong3;
                            strcpy(gongname,"碧血剑");
                        }
                        else SlowDisplay("你没有碧血剑可以装备\n\n\n");
                        break;
                    case 4:
                        if(gong4n>=1)
                        {
                            SlowDisplay("拿起了绝世圣剑\n\n\n");
                            gong=gong4;
                            strcpy(gongname,"绝世圣剑");
                        }
                        else SlowDisplay("你没有绝世圣剑可以装备\n\n\n");
                        break;
                    case 5:
                        if(gong5n>=1)
                        {
                            SlowDisplay("拿起了噬天神剑\n\n\n");
                            gong=gong5;
                            strcpy(gongname,"噬天神剑");
                        }
                        else SlowDisplay("你没有噬天神剑可以装备\n\n\n");
                        break;
                    case 6:
                        if(fang1n>=1)
                        {
                            SlowDisplay("穿上了布衣\n\n\n");
                            fang=fang1;
                            strcpy(fangname,"布衣");
                        }
                        else SlowDisplay("你没有布衣可以装备\n\n\n");
                        break;
                    case 7:
                        if(fang2>=1)
                        {
                            SlowDisplay("穿上了铁甲\n\n\n");
                            fang=fang2;
                            strcpy(fangname,"铁甲");
                        }
                        else SlowDisplay("你没有铁甲可以装备\n\n\n");
                        break;
                    case 8:
                        if(fang3n>=1)
                        {
                            SlowDisplay("穿上了银甲\n\n\n");
                            fang=fang3;
                            strcpy(fangname,"银甲");
                        }
                        else SlowDisplay("你没有银甲可以装备\n\n\n");
                        break;
                    case 9:
                        if(fang4n>=1)
                        {
                            SlowDisplay("穿上了黄金圣衣\n\n\n");
                            fang=fang4;
                            strcpy(fangname,"黄金圣衣");
                        }
                        else SlowDisplay("你没有黄金圣衣可以装备\n\n\n");
                        break;
                    case 10:
                        if(fang5n>=1)
                        {
                            SlowDisplay("穿上了永恒幻衣\n\n\n");
                            fang=fang5;
                            strcpy(fangname,"永恒幻衣");
                        }
                        else SlowDisplay("你没有永恒幻衣可以装备\n\n\n");
                        break;
                    case 0:
                        SlowDisplay("未更换装备\n\n\n");
                        break;
default:

                        printf("change error!");
                }
                break;
            case 6:
                puts("===============================================================================");
                printf("森林蜥蜴 %d  森林女巫 %d  森林巨人 %d  森林巨人王 %d\n\n\n",xiyi.die,witch.die,strongman.die,big_strongman.die);
                printf("草原黄蜂 %d  草原野马 %d  草原雄狮 %d  使徒 %d\n\n\n",bee.die,horse.die,lion.die,shitu.die);
                puts("===============================================================================");
                break;
            case 0:
                SlowDisplay("确定退出游戏?(Y/N)\n\n\n");
                getchar();
                proof=getchar();
                if(proof=='y'||proof=='Y')
                {
                    SlowDisplay("数据存储中...");
                    getchar();
                    SlowDisplay("按回车退出");
                    getchar();
                    return;
                }
                else if(proof=='n'||proof=='N')printf("继续游戏!\n\n\n");
                else SlowDisplay("继续!\n\n\n");
                break;
default:

                SlowDisplay("输入错误!\n\n\n");
        }
    }
}
void DisplayState()
{
    printf("%s 攻击力:%d+%d=%d 防御力:%d+%d=%d HP:%d/%d \n\n\n",player_name,player.attack,gong,player.attack+gong,player.defense,fang,player.defense+fang,player.health,player.max_health);
    printf("武器: %s 防具: %s \n\n\n",gongname,fangname);
    printf("等级:%d 经验:%d/%d 还需要%d经验升级 金币:%d \n\n\n",player.level,player.exp,player.max_exp,player.max_exp-player.exp,money);
}
void BattleAct()
{
    while(1)
    {
        puts("=============================================================================");
        printf("要怎么办?\n\n\n 1,攻击 2,物品 3,查看状态 4,逃跑\n\n\n");
        switch(scanf("%d",&choose_number),choose_number)
        {
            case 1:
                s=SuiJi();
                printf("%s攻击! %sHP减少%d\n\n\n",player.name,guai.name,player.attack+s+gong-guai.defense/3);
                guai.health-=player.attack+s+gong-guai.defense/3;
                if(AttackResult())return; //如果攻击有结果(敌人或玩家战死)退出函数
                else continue;
            case 2:
                ChooseWupin();
                break; //选择物品,可以使用,战斗中允许使用攻击性物品
            case 3:
                DisplayState();
                break; //显示状态
            case 4:
                s=SuiJi();
                if(s<4) //40%的概率可以逃跑
                {
                    printf("%s逃跑了~\n\n\n",player.name);
                    battle=0;
                    return;
                }
                else printf("%s逃跑失败!\n\n\n",player.name);
                break;
default: SlowDisplay("输入错误,重新输入!\n\n\n");
        }
    }
}
void SlowDisplay(char *p)
{
    while(1)
    {
        if(*p!=0)
            printf("%c",*p++);
        else
            break;
        Sleep(75);
    }
}
