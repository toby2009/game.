#include<bits/stdc++.h>
#include<ctime>
char s[1000];
using namespace std;
int main()
{
    srand((unsigned int)(time(NULL)));
    while(1)
    { 
        printf("==运势测评机==\n请输入名字：");
        int k=rand()%10;
        k=abs(k);
        int v=rand()%20;
        v=abs(v);
        int y=rand()%10;
        y=abs(y);
        gets(s);
        if(1==1){
            printf("TA的幸运数字是：%d",k);
            printf("\n"); 
            switch(v){
                case 0:printf("TA今日的幸运颜色是：白色");break; 
                case 1:printf("TA今日的幸运颜色是：灰色");break; 
                case 2:printf("TA今日的幸运颜色是：红色");break; 
                case 3:printf("TA今日的幸运颜色是：橙色");break; 
                case 4:printf("TA今日的幸运颜色是：黄色");break; 
                case 5:printf("TA今日的幸运颜色是：绿色");break; 
                case 6:printf("TA今日的幸运颜色是：青色");break; 
                case 7:printf("TA今日的幸运颜色是：蓝色");break; 
                case 8:printf("TA今日的幸运颜色是：紫色");break; 
                case 9:printf("TA今日的幸运颜色是：棕色");break; 
                case 10:printf("TA今日的幸运颜色是：黑色");break; 
                case 11:printf("TA今日的幸运颜色是：金色");break; 
                case 12:printf("TA今日的幸运颜色是：米黄色");break; 
                case 13:printf("TA今日的幸运颜色是：深蓝色");break; 
                case 14:printf("TA今日的幸运颜色是：粉色");break; 
                case 15:printf("TA今日的幸运颜色是：土黄色");break; 
                case 16:printf("TA今日的幸运颜色是：荧黄色");break; 
                case 17:printf("TA今日的幸运颜色是：天蓝色");break; 
                case 18:printf("TA今日的幸运颜色是：浅绿色");break; 
                case 19:printf("TA今日的幸运颜色是：粉红色");break; 
                default:break;
            }
            printf("\n");
            switch(y){
                case 0:printf("TA今日的运势是：大吉");break; 
                case 1:printf("TA今日的运势是：中吉");break; 
                case 2:printf("TA今日的运势是：小吉");break; 
                case 3:printf("TA今日的运势是：末吉");break; 
                case 4:printf("TA今日的运势是：中平");break; 
                case 5:printf("TA今日的运势是：中末");break; 
                case 6:printf("TA今日的运势是：小凶");break; 
                case 7:printf("TA今日的运势是：大凶");break; 
                case 8:printf("TA今日的运势是：中凶");break; 
                case 9:printf("TA今日的运势是：末凶");break; 
            }
            printf("\n");
            printf("只要TA心里一直有幸运数字和颜色，就能化凶为吉。\n\n");
        } 
    }
    return 0;
}
