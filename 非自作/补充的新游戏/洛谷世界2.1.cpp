#include<stdlib.h>
#include<stdio.h>
#include<time.h> //suiji 
#include<string.h>
#include<windows.h> //SLEEP����
char player_name[21];
int tttttt=0,ttttt=0;
struct Player //��ҽṹ�壬����ʼ��player
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
}player= {"��ʿ",666,666,2333,2333,1,0,0,100};
struct Enemy //�ֵĽṹ��,����ʼ�����ֹ�
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
} strongman= {"ɭ�־���","�ǳ�ʯ",999,999,2333,233,100,1,2,1,0,0},
  witch= {"ɭ��Ů��","����",666,666,1111,99,55,2,2,1,1,0},
  xiyi= {"ɭ������","����",333,333,888,168,77,3,3,2,2,0},
  big_strongman= {"ɭ�־�����","����֮��",6666,6666,23333,2333,999,4,4,2,0,0},
  lion= {"��ԭ��ʨ","�ǳ�ʯ",1111,888,2333,233,100,1,2,1,0,0},
  horse= {"��ԭҰ��","��Ѫ��",777,555,1111,99,55,6,2,1,1,0},
  bee= {"��ԭ�Ʒ�","����",444,222,888,168,77,7,3,2,2,0},
  shitu= {"ʹͽ","\0",23333,23333,66666,6666,2333,1,1,1,0,0},
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
char gongname[20]="��",fangname[20]="��";
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
    SlowDisplay("            ��ӭ����������˹��½              \n����һ����ʿ������! ������˹�������繫����İ���˰����!\n\n ΰ�����ʿ��~�������ǵ�����,Ӫ�ȹ���!\n\n\n�����������:\n\n\n");
    scanf("%s",player_name);
    strncpy(player.name,player_name,20);
    if(strcmp(player.name,"������")==0)
    {
        SlowDisplay("\n\n\n�ʵ�ģʽ,����!!!\n\n\n��ӡ����Ľ�������!�����ڿ����ؼ�������!\n\n\n ��������������... �漴... ����!!!\n\n\n");
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
void ChooseWupin() //ѡ����Ʒ ��ʹ��
{
    printf("��Ʒ: 1,ֹѪ��%d�� 2,���Ȱ�%d�� 3,���ϰ�ҩ%d�� 4,�������ϰ�ҩ%d�� 5,��ҩ%d�� 6,����%d�� 7,����%d�� 8,����ʽԭ�ӵ�%d�� 0,����\n\n\n",cao,jijiubao,baiyao,superbaiyao,shenyao,boom,dubiao,atom_boom);
    switch(scanf("%d",&choose_number),choose_number)
    {
        case 1:
            if(cao>0)
            {
                SlowDisplay("ʹ��ֹѪ��,HP����2333\n\n\n");
                cao--;
                if(player.health+2333>player.max_health)player.health=player.max_health;
                else player.health+=2333;
            }
            else SlowDisplay("û��ֹѪ����\n\n\n");
            break;
        case 2:
            if(jijiubao>0)
            {
                SlowDisplay("ʹ�ü��Ȱ�,HP����6666\n\n\n");
                jijiubao--;
                if(player.health+6666>player.max_health)player.health=player.max_health;
                else player.health+=6666;
            }
            else SlowDisplay("û�м��Ȱ���\n\n\n");
            break;
        case 3:
            if(baiyao>0)
            {
                SlowDisplay("ʹ�����ϰ�ҩ,HP����9999\n\n\n");
                baiyao--;
                if(player.health+9999>player.max_health)player.health=player.max_health;
                else player.health+=9999;
            }
            else SlowDisplay("û�����ϰ�ҩ��\n\n\n");
            break;
        case 4:
            if(superbaiyao>0)
            {
                SlowDisplay("ʹ�ó������ϰ�ҩ,HP����16888\n\n\n");
                superbaiyao--;
                if(player.health+16888>player.max_health)player.health=player.max_health;
                else player.health+=16888;
            }
            else SlowDisplay("û�г������ϰ�ҩ��\n\n\n");
            break;
        case 5:
            if(shenyao>0)
            {
                SlowDisplay("ʹ����ҩ,HP����25888");
                shenyao--;
                if(player.health+25888>player.max_health)player.health=player.max_health;
                else player.health+=25888; 
            }
            else SlowDisplay("û����ҩ��\n\n\n");
            break;      
        case 6:
            if(battle) //��ս����(battle=1),����(battle=0)����ʹ�ù�������Ʒ
            {
                if(boom>0)
                {
                    SlowDisplay("ʹ������,����HP����2333�ҷ�������25%\n\n\n");
                    boom--;
                    guai.health-=2333;
                    guai.defense*=0.75;
                    AttackResult();
                }
            }
            else SlowDisplay("��ս��״̬,����ʹ������!\n\n\n");
            break;
        case 7:
            if(battle) //��ս����(battle=1),����(battle=0)����ʹ�ù�������Ʒ
            {
                if(dubiao>0)
                {
                    SlowDisplay("ʹ�ö���,����HP����6666�ҹ�������25%\n\n\n");
                    dubiao--;
                    guai.health-=6666;
                    guai.attack*=0.75;
                    AttackResult();
                }
            }
            else SlowDisplay("��ս��״̬,����ʹ�ö���!\n\n\n");
            break;
        case 8:
            if(battle) //��ս����(battle=1),����(battle=0)����ʹ�ù�������Ʒ
            {
                if(atom_boom>0)
                {
                    SlowDisplay("ʹ������ʽԭ�ӵ�,����HP����16888�ҹ��������������40%\n\n\n");
                    atom_boom--;
                    guai.attack*=0.6;
                    guai.defense*=0.6;
                    guai.health-=16888;
                    AttackResult();
                }
            }
            else SlowDisplay("��ս��״̬,����ʹ������ʽԭ�ӵ�!\n\n\n");
            break;
        case 0:
            break;
default:

            printf("ChooseWupin error!\n\n\n");
    }
}
int AttackResult() //�������:�ж��Ƿ��ʤ �Ƿ�����Ʒ �� �Ƿ�����
{
    if(guai.health<=0)
    {
        battle=0;
        printf("ս��ʤ��!��ý��%d,����%d\n\n\n",guai.money,guai.exp);
        player.exp+=guai.exp;
        player.range_exp+=guai.exp;
        money+=guai.money;
        s=SuiJi();
        if(s<guai.wupinpro)
        {
            SlowDisplay("�ӵ���ʬ���з���");
            printf("%s\n\n\n",guai.wupin);
            AddWupin(guai.wupin_sign);
        }
        WhetherLevelUp();
        return 1; //�����н���˷���1,���򷵻�0,�����ж��Ƿ������ս����Ϊ
    }
    else
    {
        printf("%s����%d��Ѫ\n\n",guai.name,guai.health);
        int s=SuiJi();
        if((guai.attack+s-player.defense/3)<0)
        {
            player.health-=1;
            printf("%s����,���HP������ 1\n\n",guai.name);
        }
        else
        {
            player.health-=guai.attack+s-player.defense/3;
            printf("%s����,���HP������%d\n\n",guai.name,guai.attack+s-player.defense/3);
        }
        if(player.health<0)
        {
            battle=0;
            printf("%sս��!��ҵ���%d\n\n\n",player.name,player.level*200);
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
    if(player.level<=15&&l1>0) //15������,�����㹻 ������������
    {
        printf("����!������+%d, ������+%d, HP����+%d\n\n\n",88*l1,58*l1,128*l1);
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
        printf("����!������+%d, ������+%d, HP����+%d\n\n\n",128*l2,88*l2,168*l2);
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
        printf("����!������+%d, ������+%d, HP����+%d\n\n\n",168*l3,128*l3,288*l3);
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
void OrdinaryAct() //������Ϊ�˵�(�ƶ�,��Ʒ,�Ի�,�鿴״̬,װ��,�˳���Ϸ)
{
    while(1)
    {
        system("pause");
        system("cls");
        puts("==========================================================================");
        printf("Ҫ��ʲô?\n\n\n 1,�ƶ� 2,���� 3,�Ի� 4,�鿴״̬ 5,װ�� 6,��ɱ�� 0,�˳���Ϸ\n\n\n");
        puts("==========================================================================");
        switch(scanf("%d",&choose_number),choose_number)
        {
            system("cls"); 
            case 1: //��ʾ�ƶ��˵�
                SlowDisplay("Ҫȥ����?\n\n\n");
                printf("1,�ư� 2,�ù� 3,ɭ��һ�� 4,ɭ�ֶ��� 5,ɭ������ 6,��ԭһ�� 7,��ԭ���� 8,��ԭ����\n\n\n");
                switch(scanf("%d",&choose_number),choose_number)
                {
                    system("cls"); 
                    case 1:
                        place_sign=place.bar; //��¼Ŀǰλ��-�ư�
                        break;
                    case 2:
                        place_sign=place.hotel; //�����õ�
                        SlowDisplay("Ҫס����? 2000����� 1,�� 0,��\n\n\n");
                        choose_number=1;
                        switch(scanf("%d",&choose_number),choose_number)
                        {
                            case 1:
                                if(money-2000<0) //�ж�Ǯ�Ƿ�
                                {
                                    SlowDisplay("Sorry,���Ǯ����~\n\n\n");
                                }
                                else
                                {
                                    SlowDisplay("�ú���Ϣ\n\tHP��\n\t\t�ڶ�����\n\n");
                                    money-=2000; //����2000ס���
                                    player.health=player.max_health; //������
                                }
                                break;
                            case 0:
                                SlowDisplay("�´�����!\n\n\n");
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
                            printf("%s���˹���!\n\n\n",guai.name);
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
                            printf("%s���˹���!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) witch.die++;
                        }
                        else
                        {
                            SlowDisplay("���ﰲȫ\n\n\n");
//���õ���OAct����,���Զ�ִ��OAct����;
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
                            printf("%s���˹���!\n\n\n",guai.name);
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
                            printf("%s���˹���!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) strongman.die++;
                        }
                        else
                        {
                            SlowDisplay("���ﰲȫ\n\n\n");
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
                            printf("%s���˹���!\n\n\n",guai.name);
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
                            printf("%s���˹���!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) big_strongman.die++;
                        }
                        else
                        {
                            SlowDisplay("���ﰲȫ\n\n\n");
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
                            printf("%s���˹���!\n\n\n",guai.name);
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
                            printf("%s���˹���!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) horse.die++;
                        }
                        else
                        {
                            SlowDisplay("���ﰲȫ\n\n\n");
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
                            printf("%s���˹���!\n\n\n",guai.name);
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
                            printf("%s���˹���!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) lion.die++;
                        }
                        else
                        {
                            SlowDisplay("���ﰲȫ\n\n\n");
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
                            printf("%s���˹���!\n\n\n",guai.name);
                            BattleAct();
                            if(guai.health<=0) lion.die++;
                        }
                        else if(s<9)
                        {
                            battle=1;
                            if(strongman_arm)
                            {
                                if(tttttt==0) SlowDisplay("��������:\n\n\n ����,������,���Ĳ���,����...�ٺ�,���ϵ���!����֮����Ҫ��,������Ҳ�������!\n\n\n");
                                tttttt=1;
                                guai=shitu;
                                guai.health*=guai.die/5+1;
                                guai.attack*=guai.die/5+1;
                                guai.defense*=guai.die/5+1;
                                printf("%s���˹���!\n\n\n",guai.name);
                                BattleAct();
                                if(guai.health<=0) shitu.die++;
                                if(guai.health==shitu.health) printf("ʹͽ����,δ�ܾȳ�����\n\n\n(�ڰ汾ά��ǰ�ǾͲ������ٵ�~~~)\n\n\n");
                            }
                            else SlowDisplay("��������:\n\n\n ������,��ð�.������о���֮��,�ҿ��Ը����㹫��������Ŷ~\n\n\n");
                        }
                        else
                        {
                            SlowDisplay("���ﰲȫ\n\n\n");
                        }
                        break;
default:

                        printf("choose map error!\n\n\n");
                }
                break;
            case 2:
                ChooseWupin();
                break; //��ʾ����,������ʹ��.
            case 3: //�Ի�ѡ��
                if(place_sign==place.bar)
                {
                    SlowDisplay("Ҫ��˭˵��?\n\n\n1,�췢Ů�� 2,�ͽ����� 3,�ư��ϰ� 4,�����ʦ 5,��������\n\n\n"); //��ʾ�Ի�����
                    switch(scanf("%d",&choose_number),choose_number)
                    {
                        case 1:
                            if(ttttt==0)SlowDisplay("�췢Ů��:\n\n\n ��̨���Ǹ�Hunter��˧��!(~����~)\n\n\n��˵�������������,�����·��Ӧ�ú���Ϥ��!\n\n\n"),ttttt=1;
                            else
                            {
                                SlowDisplay("��Ҫ��Ħ����һ����?6666��һ��Ŷ,����������Ŷ\n\n1,�õ� 2,����,����\n\n\n");
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
                                            printf("    ��Ħing    \n\n\n");
                                            Sleep(2000);
                                        }
                                        else SlowDisplay("�㻹Ƿ��Ǯ��!!!\n\n\n");
                                        break;
                                    case 2:
                                        SlowDisplay("�췢Ů��:......(͹(?��ġ�)͹)........���ˣ��´ΰ�......\n\n\n");
                                        break;
                                    default: SlowDisplay("�������\n\n\n");
                                }
                            }
                            break;
                        case 2:
                            if(fang1n<1&&gong1n<1)
                            {
                                SlowDisplay("�ͽ�����:\n\n\n ��Ҫ�ȹ�����!�õ���!\n\n\n ��������Ĵ��ֺͲ�ԭ���ն�,����Խ��ԽΣ��,����ذ�׺Ͳ���,�������Щ������,��ȥ��!\n\n\n");
                                printf("%s����:(��,��λ��������ð�!\n\n\n)",player.name);
                                gong1n++;
                                fang1n++;
                            }
                            else SlowDisplay("�ͽ�����:\n\n\n ���Ͱ�,������!\n\n\n ��Ҫ��������ֺͲ�ԭ���ŵ�!\n\n\n");
                            break;
                        case 3:
                            printf("Ҫ�ȵ�ʲô?\n\n\n 1,����ͷ500��� Attack+168 2,XO��800��� Defence+258 3,��ͷ����1500��� HP_MAX+488 0,����\n\n\n");
                            choose_number=1;
                            while(choose_number)
                            {
                                switch(scanf("%d",&choose_number),choose_number)
                                {
                                    case 1:
                                        if(money<500)
                                        {
                                            SlowDisplay("Ǯ����!");
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
                                            SlowDisplay("Ǯ����!");
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
                                            SlowDisplay("Ǯ����!");
                                        }
                                        else
                                        {
                                            SlowDisplay("HP_MAX+488.");
                                            money-=1500;
                                            player.health+=488;
                                        }
                                        break;
                                    case 0:
                                        SlowDisplay("�´�����!\n");
                                        break;
default: SlowDisplay("�������\n\n\n");
                                }
                            }break;
                        case 4:
                            printf("�����ʦ:\n\n\nҪ�����ʲô?\n\n\n1,����ʥ�� 2,�ƽ�ʥ�� 3,������ 4,������� 5,�ֽ����֮��, 0,�˳�\n\n\n");
                            SlowDisplay("ѡ��Ҫ��������������,���߷ֽ����֮��\n\n\n");
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
                                            strcpy(gongname,"����ʥ��");
                                            gong=gong4;
                                        }
                                        printf("�Ѻϳ� ����ʥ��\n\n\n");
                                    }
                                    else
                                    {
                                        if(gong3n==0)
                                        printf("����Ҫһ�ѱ�Ѫ��\n\n\n");
                                        if(star<10)
                                        printf("����Ҫ%d���ǳ�ʯ\n\n\n",10-star);
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
                                            strcpy(fangname,"�ƽ�ʥ��");
                                            fang=fang4;
                                        }
                                        printf("�Ѻϳ� �ƽ�ʥ��\n\n\n");
                                    }
                                    else
                                    {
                                        if(fang3n==0)
                                        printf("����Ҫһ������\n\n\n");
                                        if(star<10)
                                        printf("����Ҫ%d���ǳ�ʯ\n\n\n",10-star);
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
                                            strcpy(gongname,"������");
                                            gong=gong5;
                                        }
                                        printf("�Ѻϳ� ����-������\n\n\n");
                                    }
                                    else
                                    {
                                        if(gong4n<3)
                                        printf("����Ҫ%d�Ѿ���ʥ��\n\n\n",3-gong4n);
                                        if(star<25)
                                        printf("����Ҫ%d���ǳ�ʯ\n\n\n",25-star);
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
                                            strcpy(fangname,"�������");
                                            fang=fang5;
                                        }
                                        printf("�Ѻϳ� ����-�������\n\n\n");
                                    }
                                    else
                                    {
                                        if(fang4n<3)
                                        printf("����Ҫ%d���ƽ�ʥ��\n\n\n",3-gong4n);
                                        if(star<25)
                                        printf("����Ҫ%d���ǳ�ʯ\n\n\n",25-star);
                                    }
                                    break;
                                case 5:
                                    printf("��Ҫ�ֽ���ٸ�?(��������%d������֮��)\n\n\n",strongman_arm);
                                    int q;scanf("%d",&q);
                                    if(q>strongman_arm||q<0)
                                    {
                                        printf("�������!\n\n\n");
                                        break;
                                    }
                                    strongman_arm-=q;
                                    for(int i=1;i<=q;i++)
                                    {
                                        int sssss=Suiji00000();
                                        star+=sssss;
                                        printf("���%d���ǳ�ʯ\n\n\n",sssss);
                                    } 
                                    break;
                                case 0:break;
                                default: SlowDisplay("�������\n\n\n");
                            }break;
                        case 5:
                            printf("��������:\n\n\n��Ҫ��ʲô����\n\n\n");
                            printf("1,ֹѪ��100��/�� 2,���Ȱ�200��/�� 3,���ϰ�ҩ288��/�� 4,�������ϰ�ҩ588��/�� 5,��ҩ888��/�� 6,����1288��/�� 7,����1588��/�� 8,����ʽԭ�ӵ�5888��/�� 0,�˳�\n\n\n");
                            scanf("%d",&choose_number);
                            if(choose_number==0) break;
                            int q;
                            printf("��Ҫ���ٸ�\n\n\n");
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
                                    else printf("��û���㹻��Ǯ\n\n\n");
                                    break;
                                case 2:
                                    if(money>=200*q)
                                    {
                                        money-=200*q;
                                        jijiubao+=q;
                                    }
                                    else printf("��û���㹻��Ǯ\n\n\n");
                                    break;
                                case 3:
                                    if(money>=288*q)
                                    {
                                        money-=288*q;
                                        baiyao+=q;
                                    }
                                    else printf("��û���㹻��Ǯ\n\n\n");
                                    break;
                                case 4:
                                    if(money>=588*q)
                                    {
                                        money-=588*q;
                                        superbaiyao+=q;
                                    }
                                    else printf("��û���㹻��Ǯ\n\n\n");
                                    break;
                                case 5:
                                    if(money>=888*q)
                                    {
                                        money-=888*q;
                                        shenyao+=q;
                                    }
                                    else printf("��û���㹻��Ǯ\n\n\n");
                                    break;
                                case 6:
                                    if(money>=1288*q)
                                    {
                                        money-=1288*q;
                                        boom+=q;
                                    }
                                    else printf("��û���㹻��Ǯ\n\n\n");
                                    break;
                                case 7:
                                    if(money>=1588*q)
                                    {
                                        money-=1588*q;
                                        dubiao+=q;
                                    }
                                    else printf("��û���㹻��Ǯ\n\n\n");
                                    break;
                                case 8:
                                    if(money>=5888*q)
                                    {
                                        money-=5888*q;
                                        atom_boom+=q;
                                    }
                                    else printf("��û���㹻��Ǯ\n\n\n");
                                    break;
                                default: printf("�������!\n\n\n");
                            }break;
                        break;
                    }
                }
                else if(place_sign==place.hotel)
                    SlowDisplay("���ϰ���!��...��\n\n\n����æ���أ�û������~��\n\n\n");
                else SlowDisplay("�������û�˿�������\n\n\n");
                break;
            case 4:
                DisplayState();
                break; //��ʾ״̬
            case 5: //װ��
                printf("�ǳ�ʯ:%d��\n\n\n",star);
                printf("��װ: 1,ذ��:%d�� 2,����:%d�� 3,��Ѫ��:%d�� 4,����ʥ��:%d�� 5,������:%d��\n\n\n\n",gong1n,gong2n,gong3n,gong4n,gong5n);
                printf("��װ: 6,����:%d�� 7,����:%d�� 8,����:%d�� 9,�ƽ�ʥ��:%d�� 10,�������:%d��\t\t0,����\n\n\n",fang1n,fang2n,fang3n,fang4n,fang5n);
                SlowDisplay("ѡ��Ҫװ�������������:\n\n\n");
                switch(scanf("%d",&choose_number),choose_number)
                {
                    case 1:
                        if(gong1n>=1)
                        {
                            SlowDisplay("������ذ��\n\n\n");
                            gong=gong1;
                            strcpy(gongname,"ذ��");
                        }
                        else SlowDisplay("��û��ذ�׿���װ��\n\n\n");
                        break;
                    case 2:
                        if(gong2n>=1)
                        {
                            SlowDisplay("�����˳���\n\n\n");
                            gong=gong2;
                            strcpy(gongname,"����");
                        }
                        else SlowDisplay("��û�г�������װ��\n\n\n");
                        break;
                    case 3:
                        if(gong3n>=1)
                        {
                            SlowDisplay("�����˱�Ѫ��\n\n\n");
                            gong=gong3;
                            strcpy(gongname,"��Ѫ��");
                        }
                        else SlowDisplay("��û�б�Ѫ������װ��\n\n\n");
                        break;
                    case 4:
                        if(gong4n>=1)
                        {
                            SlowDisplay("�����˾���ʥ��\n\n\n");
                            gong=gong4;
                            strcpy(gongname,"����ʥ��");
                        }
                        else SlowDisplay("��û�о���ʥ������װ��\n\n\n");
                        break;
                    case 5:
                        if(gong5n>=1)
                        {
                            SlowDisplay("������������\n\n\n");
                            gong=gong5;
                            strcpy(gongname,"������");
                        }
                        else SlowDisplay("��û�������񽣿���װ��\n\n\n");
                        break;
                    case 6:
                        if(fang1n>=1)
                        {
                            SlowDisplay("�����˲���\n\n\n");
                            fang=fang1;
                            strcpy(fangname,"����");
                        }
                        else SlowDisplay("��û�в��¿���װ��\n\n\n");
                        break;
                    case 7:
                        if(fang2>=1)
                        {
                            SlowDisplay("����������\n\n\n");
                            fang=fang2;
                            strcpy(fangname,"����");
                        }
                        else SlowDisplay("��û�����׿���װ��\n\n\n");
                        break;
                    case 8:
                        if(fang3n>=1)
                        {
                            SlowDisplay("����������\n\n\n");
                            fang=fang3;
                            strcpy(fangname,"����");
                        }
                        else SlowDisplay("��û�����׿���װ��\n\n\n");
                        break;
                    case 9:
                        if(fang4n>=1)
                        {
                            SlowDisplay("�����˻ƽ�ʥ��\n\n\n");
                            fang=fang4;
                            strcpy(fangname,"�ƽ�ʥ��");
                        }
                        else SlowDisplay("��û�лƽ�ʥ�¿���װ��\n\n\n");
                        break;
                    case 10:
                        if(fang5n>=1)
                        {
                            SlowDisplay("�������������\n\n\n");
                            fang=fang5;
                            strcpy(fangname,"�������");
                        }
                        else SlowDisplay("��û��������¿���װ��\n\n\n");
                        break;
                    case 0:
                        SlowDisplay("δ����װ��\n\n\n");
                        break;
default:

                        printf("change error!");
                }
                break;
            case 6:
                puts("===============================================================================");
                printf("ɭ������ %d  ɭ��Ů�� %d  ɭ�־��� %d  ɭ�־����� %d\n\n\n",xiyi.die,witch.die,strongman.die,big_strongman.die);
                printf("��ԭ�Ʒ� %d  ��ԭҰ�� %d  ��ԭ��ʨ %d  ʹͽ %d\n\n\n",bee.die,horse.die,lion.die,shitu.die);
                puts("===============================================================================");
                break;
            case 0:
                SlowDisplay("ȷ���˳���Ϸ?(Y/N)\n\n\n");
                getchar();
                proof=getchar();
                if(proof=='y'||proof=='Y')
                {
                    SlowDisplay("���ݴ洢��...");
                    getchar();
                    SlowDisplay("���س��˳�");
                    getchar();
                    return;
                }
                else if(proof=='n'||proof=='N')printf("������Ϸ!\n\n\n");
                else SlowDisplay("����!\n\n\n");
                break;
default:

                SlowDisplay("�������!\n\n\n");
        }
    }
}
void DisplayState()
{
    printf("%s ������:%d+%d=%d ������:%d+%d=%d HP:%d/%d \n\n\n",player_name,player.attack,gong,player.attack+gong,player.defense,fang,player.defense+fang,player.health,player.max_health);
    printf("����: %s ����: %s \n\n\n",gongname,fangname);
    printf("�ȼ�:%d ����:%d/%d ����Ҫ%d�������� ���:%d \n\n\n",player.level,player.exp,player.max_exp,player.max_exp-player.exp,money);
}
void BattleAct()
{
    while(1)
    {
        puts("=============================================================================");
        printf("Ҫ��ô��?\n\n\n 1,���� 2,��Ʒ 3,�鿴״̬ 4,����\n\n\n");
        switch(scanf("%d",&choose_number),choose_number)
        {
            case 1:
                s=SuiJi();
                printf("%s����! %sHP����%d\n\n\n",player.name,guai.name,player.attack+s+gong-guai.defense/3);
                guai.health-=player.attack+s+gong-guai.defense/3;
                if(AttackResult())return; //��������н��(���˻����ս��)�˳�����
                else continue;
            case 2:
                ChooseWupin();
                break; //ѡ����Ʒ,����ʹ��,ս��������ʹ�ù�������Ʒ
            case 3:
                DisplayState();
                break; //��ʾ״̬
            case 4:
                s=SuiJi();
                if(s<4) //40%�ĸ��ʿ�������
                {
                    printf("%s������~\n\n\n",player.name);
                    battle=0;
                    return;
                }
                else printf("%s����ʧ��!\n\n\n",player.name);
                break;
default: SlowDisplay("�������,��������!\n\n\n");
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
