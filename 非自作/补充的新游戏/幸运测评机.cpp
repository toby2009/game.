#include<bits/stdc++.h>
#include<ctime>
char s[1000];
using namespace std;
int main()
{
    srand((unsigned int)(time(NULL)));
    while(1)
    { 
        printf("==���Ʋ�����==\n���������֣�");
        int k=rand()%10;
        k=abs(k);
        int v=rand()%20;
        v=abs(v);
        int y=rand()%10;
        y=abs(y);
        gets(s);
        if(1==1){
            printf("TA�����������ǣ�%d",k);
            printf("\n"); 
            switch(v){
                case 0:printf("TA���յ�������ɫ�ǣ���ɫ");break; 
                case 1:printf("TA���յ�������ɫ�ǣ���ɫ");break; 
                case 2:printf("TA���յ�������ɫ�ǣ���ɫ");break; 
                case 3:printf("TA���յ�������ɫ�ǣ���ɫ");break; 
                case 4:printf("TA���յ�������ɫ�ǣ���ɫ");break; 
                case 5:printf("TA���յ�������ɫ�ǣ���ɫ");break; 
                case 6:printf("TA���յ�������ɫ�ǣ���ɫ");break; 
                case 7:printf("TA���յ�������ɫ�ǣ���ɫ");break; 
                case 8:printf("TA���յ�������ɫ�ǣ���ɫ");break; 
                case 9:printf("TA���յ�������ɫ�ǣ���ɫ");break; 
                case 10:printf("TA���յ�������ɫ�ǣ���ɫ");break; 
                case 11:printf("TA���յ�������ɫ�ǣ���ɫ");break; 
                case 12:printf("TA���յ�������ɫ�ǣ��׻�ɫ");break; 
                case 13:printf("TA���յ�������ɫ�ǣ�����ɫ");break; 
                case 14:printf("TA���յ�������ɫ�ǣ���ɫ");break; 
                case 15:printf("TA���յ�������ɫ�ǣ�����ɫ");break; 
                case 16:printf("TA���յ�������ɫ�ǣ�ӫ��ɫ");break; 
                case 17:printf("TA���յ�������ɫ�ǣ�����ɫ");break; 
                case 18:printf("TA���յ�������ɫ�ǣ�ǳ��ɫ");break; 
                case 19:printf("TA���յ�������ɫ�ǣ��ۺ�ɫ");break; 
                default:break;
            }
            printf("\n");
            switch(y){
                case 0:printf("TA���յ������ǣ���");break; 
                case 1:printf("TA���յ������ǣ��м�");break; 
                case 2:printf("TA���յ������ǣ�С��");break; 
                case 3:printf("TA���յ������ǣ�ĩ��");break; 
                case 4:printf("TA���յ������ǣ���ƽ");break; 
                case 5:printf("TA���յ������ǣ���ĩ");break; 
                case 6:printf("TA���յ������ǣ�С��");break; 
                case 7:printf("TA���յ������ǣ�����");break; 
                case 8:printf("TA���յ������ǣ�����");break; 
                case 9:printf("TA���յ������ǣ�ĩ��");break; 
            }
            printf("\n");
            printf("ֻҪTA����һֱ���������ֺ���ɫ�����ܻ���Ϊ����\n\n");
        } 
    }
    return 0;
}
