#include<bits/stdc++.h>
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
int hh = 0;
long long jx = 15 , fx = 8, hpx = 30 , jy = 0, gold = 0 , lv = 1 , b ,lvd,yyi,yer,ysan,ysi,hhx,dhhx;
int jpn,zt = 0 , dzt = 0 , ztx , dztx ;
string cinmmz , cinboss;
long long j = jx , f = fx, hp = hpx;
bool dhpx = false;
string name;
bool z1,z2,z3,z4,z5,z6,z7;
int slowout(char *p)
{
while(1)
{
if(*p!=0)
printf("%c",*p++);
else
break;
Sleep(70);
}
}
int so(char *o)
{
while(1)
{
if(*o!=0)
printf("%c",*o++);
else
break;
Sleep(10);
}
}
void wap(int dg , int df ,int dhp,string boss,int jyx , int goldx)
{
Sleep(900);
slowout("\n�Ƿ񹥻�/���ܣ�(1/else)");
cin >> ysi;

zt = 0;
dzt = 0;
while(hp > 0 && dhp > 0 && ysi == 1)
{
j = jx;
f = fx;
if(jpn == 1)
{
system("cls");
cout << "\n��ʹ����---�������죡\n";
j += 300;
system("pause");
}
dztx = 0;
ztx = 0;
system("cls");
dhpx = false;
cout << boss;
printf("ʣ��Ѫ��%d\n",dhp);
Sleep(800);
cout << name;
printf("ʣ��Ѫ��%d\n",hp);
Sleep(800);
srand(time(0));
ztx = rand() % 3 + 1;
if(ztx != 1)zt ++;
if(zt == 1)
{
cout << name << "����������һ�㣬״̬����һ��!\n";
j += 2;
}
if(zt == 2)
{
cout << name << "ȼ��־�ˣ�״̬���Ӷ���!\n";
j += 3;
}
if(zt == 3)
{
if(hhx > 1)
{
srand(time(0));
ztx = rand()%3+1;
if(ztx == 1)
{
cout << name << "�ָ������ˣ�״̬������!\n";
j = jx;
hhx = 0;
}
}
else
{
cout << name << "���뱩��״̬������ȫ��������\n";
j += 4;
hhx ++;
}
}
cout << name << "��" << boss << "����!\n";
if(j>=df)
{
dhp -= j - df;
cout<<boss;
printf("����%d��Ѫ\n",j-df);
}
else
{
dhp-=0;
cout<<boss;
printf("����0��Ѫ");
}

if(dhp <= 0)
{
printf("������");
cout << boss;
printf("!\n");
jy += jyx;
gold += goldx;
dhpx = true;
system("pause");
}
else
{
srand(time(0));
dztx = rand() % 3 + 1;
if(dztx != 1)dzt ++;
if(dzt == 1)
{
cout << boss << "����������һ�㣬״̬����һ��!\n";
dg += 2;
}
if(dzt == 2)
{
cout << boss << "ȼ��־�ˣ�״̬���Ӷ���!\n";
dg += 3;
}
if(dzt == 3)
{
if(dhhx > 1)
{
srand(time(0));
dztx = rand()%3+1;
if(dztx == 1)
{
cout << boss << "�ָ������ˣ�״̬������!\n";
dg = jx;
dhhx = 0;
}
}
else
{
cout << boss << "���뱩��״̬������ȫ��������\n";
dg += 4;
dhhx ++;
}
}
cout << boss;
printf("�����");
cout << name << "������\n";
hp -= dg - f;
cout << "���" << name;
printf("����%d��Ѫ\n",dg-f);
system("pause");
if(hp <= 0)
{
slowout("����...\n");
hp = hpx;
system("pause");
return;
}
}
}
}
void gameover()
{
slowout("���������ˣ���Ϊ�˹�����Ӣ�ۡ�");
slowout("����¼�Ҳ��Ϊ��һ������...\n");
}
/*void senlinchuanshuo()
{
system("cls");
system("color 79");
cout<<"��Ҫ�鿴ʲô?\n";
cout<<"1.�豭Ȯ 2.С��ë 3.���ë 4.���� 5.�ϻ� 6.С��\n7.���� 8.������ 9.���\n";
int shuru;
cin>>shuru;
switch(shuru)
{
case 1:
} 
}*/
int main()
{
system("color 07");
bool kg = false;
shurumokuai:
int huida=MessageBox(NULL,"�벻Ҫ���������κ����룬���򽫵�����Ϸ������","��ʾ",MB_YESNO);
if(huida==IDYES)
MessageBox(NULL,"лл��ϣ�","��ʾ",MB_OK);
else
goto shurumokuai;
so("\n\n\n\n\n\n\n----------------------------------Ϊ����� --------------------------------\n\n\n\n\n\n\n");
for(int i = 1; i <= 10; i++)
{
system("color 4F");
system("color 5B");
system("color 6C");
system("color 3D");
system("color 66");
}
slowout("�����У1802�ź�������\n\n\n\n");
system("cls");
xuanzemokuai: 
slowout("�������ţ�������һֻ���˹����Ƿ����\n");
huida=MessageBox(NULL,"�Ƿ����","��ѡ��",MB_YESNO);
if(huida==IDYES)
MessageBox(NULL,"���Ǹ��������ˣ�","��ʾ",MB_OK);
else
{
slowout("��û�м�������������һ����ȥ...\n");
goto xuanzemokuai;
}
slowout("����ȡ�����֣�");
getline(cin,name);
if(hh != 0)goto a;
else if(hh==0)
{
cout<<"��Ϸ��ʼ��!";
Sleep(2000);
system("color 8F");
system("cls");
slowout("������һλɱ���������ﷸ��������\n");
slowout("��˵��ɱ�˲�գ�ۣ���ռ�ѪҺ\n");
slowout("֪������Щ�������Ϊ�����������\n");
system("pause");
system("cls");
cout<<"��ʾ:\n"; 
if(lv == 1)slowout("����ﵽ����֮ǰ��ɭ���﹥���豭Ȯ��С��ë��С��ǧ��Ҫ��������!\n");
if(hp < 10000)slowout("ǧ��𹥻�������!\n");
if(hp < 40000)slowout("��򲻹����!\n");
slowout("����ס��а��֮����\n"); 
system("pause");
goto a;
}
a3:
cout<<"����Ҫ";
cout<<"�ĳ�ʲô���֣�\n";
cin >> name;
slowout("�����ɹ���");
r:
hh++;
system("cls");
system("cls");
cout << "\n�����˺�:" << j << "\n����:" << f << "\n�������ֵ:" << hp << "\n�ȼ�:" << lv << " ����" << lv * 50 - jy << "��������" << "\n��:" << gold << endl;
/*
�����˺� j
���� f
�������ֵ hp
�ȼ� lv
���� jy
Ǯ gold
*/
system("pause");
a:
hh++;
int i;
for(i = 0; lv * 50 - jy <= 0; i++)
{
lv += 1;
jx += lv * 8;
hpx += lv * 10;
fx += lv * 6;
gold += lv * 15;
jy -= lv * 50;
}
if(i > 0)
{
cout<<"������";
cout << i;
cout<<"��!";
Sleep(500);
}
j = jx;
f = fx;
hp = hpx;
system("cls");
cout<<"��Ҫ��ʲô?\n";
cout<<"1.ȥɭ��(������) 2.ȥ�̵� 3.�鿴���� 4.������\n5.���������� 6.ǰ��а��֮�� 7.�鿴��ʾ";
int a;
cin >> a;
if(a == 1)goto b;
if(a == 2)goto c;
if(a == 3)goto r;
if(a == 4)goto a3;
if(a == 5)
{
if(kg == true)
{
slowout("��������������!\n");
goto a;
}
slowout("������Ȩ:\n");
cout << "1.���˺�\n";
cout << "2.��Ѫ��\n";
cout << "3.�߷���\n";
cout << "4.������\n";
cout << "5.��ü��� ��������������!\n";
system("pause");
slowout("����������:");
cin >> cinmmz;
if(cinmmz == "�ܾ����")
{
hpx = 20000;
gold = 1000000;
hp = hpx;
jx += 5000;
fx += 4000;
j = jx;
f = fx;
jy += 15000;
kg = true;
jpn ++;
for(int i = 1; i <= 10; i++)
{
system("color 18");
system("color 29");
system("color 31");
system("color 42");
system("color 53");
system("color 64");
system("color 7B");
system("color 9E");
}
slowout("�����ɹ�!\n");
system("pause");
goto a;
}
else
{
slowout("����!");
goto a;
}
}
if(a == 6)goto BOSS;
if(a == 7)
{
if(lv == 1)slowout("��ɭ���﹥���豭Ȯ��С��ë��С��ǧ��Ҫ��������!\n");
if(kg == true)slowout("����Ϊ�����˾�˭����ù���!\n");
if(hp < 10000)slowout("ǧ��𹥻�������!\n");
if(hp < 40000)slowout("��򲻹����!\n");
system("pause");
goto a;
}

if(a != 1 && a != 2 && a != 3 && a != 4 && a != 5 && a != 6 && a != 7&&a!=8 )
goto x;
b:
int pp;
srand((unsigned)time(NULL));
if(j>=150)
pp=5+rand()%13;
else if(j<=150)
pp = 1+rand()%5;
if(pp == 1)
{
cout << "��������һֻ�豭Ȯ!(Σ�ն�:0��)";
wap(10,5,20,"�豭Ȯ",100,20);
goto a;
}
if(pp == 2)
{
cout << "��������һֻС��ë!(Σ�ն�:0.5��)";
wap(20,15,40,"С��ë",150,35);
goto a;
}
if(pp == 3)
{
cout << "��������һֻ���ë!(Σ�ն�:1��)";
wap(40,20,100,"���ë",350,80);
goto a;
}
if(pp == 4)
{
cout << "��������һֻ����!(Σ�ն�:2��)";
wap(70,50,250,"����",700,100);
goto a;
}
if(pp == 5)
{
cout << "��������һֻ�ϻ�!(Σ�ն�:3��!)";
wap(150,200,500,"�ϻ�",1000,120);
goto a;
}
if(pp > 5 && pp < 10)
{
cout << "��������һֻС��!(Σ�ն�:2.5��)";
wap(100,180,25,"С��",1500,150);
goto a;
}
if(pp == 10)
{
cout << "��������һֻ����!(Σ�ն�:4��!!)";
wap(200,190,1000,"����",2000,200);
goto a;
}
if(pp == 11)
{
cout << "��������һֻ������!(Σ�ն�:6��!!!)";
wap(2000,2000,10000,"������",3000,300);
goto a;
}
if(pp == 12)
{
cout << "��������һֻ���!(Σ�ն�:�޷�����!!!!!!!!!)";
wap(10000,15000,40000,"���",4000,900);
goto a;
}
c:
system("cls");
Sleep(800);
slowout("��Ҫ��ʲô��\n");
cout <<"1.ľ��(����+4)20��\n\n2.ʯ��(����+5)30��\n\n3.����(����+6)40��\n\n4.��(����+4)50��\n\n5.��ʯ��(����+7)60��\n\n6.���� --- ��������150�� \n\n7.40�״�(������500)300��\n\n0.�˳�\n\n";
cout<<"����"<<gold<<"ԪǮ";
cin >> b;
if(b == 1)
{
if(gold < 20)
slowout("����!\n");
if(z1)
{
slowout("�������");
cout<<endl;
}
else
{
slowout("����ɹ�!\n");
gold -= 20;
jx += 4 ;
j=jx;
z1=true; 
}
system("pause");
goto c;
}
if(b == 2)
{
if(gold < 30)
slowout("����!\n");
if(z2)
{
slowout("�������");
cout<<endl;
}
else
{
slowout("����ɹ�!\n");
gold -= 30;
jx += 5 ;
j=jx;
z2=true;
}
system("pause");
goto c;
}
if(b == 3)
{
if(gold < 40)
slowout("����!\n");
if(z3)
{
slowout("�������");
cout<<endl;
}
else
{
slowout("����ɹ�!\n");
gold -= 40;
jx += 6 ;
j=jx;
z3=true;
}
system("pause");
goto c;
}
if(b == 4)
{
if(gold < 50)
slowout("����!\n");
if(z4)
{
slowout("�������");
cout<<endl;
}
else
{
slowout("����ɹ�!\n");
gold -= 50;
jx += 4 ;
j=jx;
z4=true;
}
system("pause");
goto c;
}
if(b == 5)
{
if(gold < 60)
slowout("����!\n");
if(z5)
{
slowout("�������");
cout<<endl;
}
else
{
slowout("����ɹ�!\n");
gold -= 60;
jx += 7;
j=jx;
z5=true;
}
system("pause");
goto c;
}
if(b == 6)
{
if(gold < 150)
slowout("����!\n");
if(z6)
{
slowout("�������");
cout<<endl;
}
else
{
slowout("����ɹ�!\n");
gold -= 150;
jpn =1;
z6=true;
}
system("pause");
goto c;
}
if(b==7)
{
if(gold<300)
slowout("����\n");
if(z7)
{
slowout("�������");
cout<<endl;
}
else
{
slowout("����ɹ�!\n");
gold -= 300;
jx+=500;
j=jx;
z7=true;
}
system("pause");
goto c;
}
if(b == 0)
goto a;
if(b != 0&&b != 1&&b != 2&&b != 3&&b != 4&&b != 5&&b != 6&&b!=7)
goto x;
x:
slowout("�������!");
Sleep(500);
goto a;
BOSS:
slowout("ȷ����?(1/2)");
cin >> ysan;
if(ysan == 2) goto a;
if(ysan != 2 && ysan != 1) goto x;
system("cls");
slowout("�������а��֮����ͻȻ���������ž�Ȼ�Լ�������\n");
slowout("��ΧһƬ��ɭ���Ĵ�����Σ�����������������ˣ�����\n");
Sleep(500);
slowout("������������������!\n");
wap(2000,1000,10000,"����������",1000,2000);
if(dhpx == false || ysi != 1)goto a;
slowout("����������������������ǰ����\n");
slowout("��Ȼ��ս��ݣ�������֪���������ĵ���ԶԶ��ֹ��ˣ�����Ӿ����ˣ�����\n");
Sleep(500);
slowout("ĸ��Ѳ����������!\n");
wap(2500,2000,10000,"ĸ��Ѳ��",2000,4000);
if(dhpx == false || ysi != 1)goto a;
slowout("������ĸ��Ѳ����������ǰ̽����\n");
slowout ("��������а��֮���Ķ��㣬���������ȷ�Ļ�������Ӧ�þ������棡����\n");
Sleep(500);
slowout("���˵���������������!\n");
wap(4000,3000,20000,"���˵�������",3000,7000);
if(dhpx == false || ysi != 1)goto a;
slowout("���������˵������ڣ�������а��֮�������\n");
Sleep(500);
gameover2:
if(kg==true)
{
cout<<"�㾹Ȼ����������񼼣�����"<<endl;
slowout("���˷��±�Ѫ��״̬����") ;
wap(40000,6000,1000000,"����",100000000,100000000);
}
printf("���������");
cout << name;
printf("����!\n");
Sleep(800);
if(hp<=1000)
{

cout << "���" << name << "��ʣ1˿Ѫ\n";
slowout("ͻȻ����ĳ���о���һ���������㴫��\n");
Sleep(800);
slowout("�����������л���԰Ȯ��\n");
j += 10000;
jx=j;
f += 10000;
fx=f;
hp += 10000;
wap(10000,6000,100000,"����",100000000,100000000);
}
if(dhpx == false || ysi != 1)goto a;
else gameover();
return 0;
}
