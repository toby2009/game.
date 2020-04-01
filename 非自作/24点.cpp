#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int a[10],ans[10][10];
bool flag;
void print(){
    for(int i=1;i<=3;i++){
        if(ans[i][1]<ans[i][3])
            swap(ans[i][1],ans[i][3]);
        printf("%d",ans[i][1]);
        switch(ans[i][2]){
        	case 1 : printf("+");
        	break;
        	case 2 : printf("-");
        	break;
        	case 3 : printf("*");
        	break;
        	case 4 : printf("/");
        	break;
        }
        printf("%d",ans[i][3]);
        switch(ans[i][2]){
        	case 1 : {
        		printf("=%d\n",ans[i][1]+ans[i][3]);
        		break;
        	}
        	case 2 : {
        		printf("=%d\n",ans[i][1]-ans[i][3]);
        		break;
        	}
        	case 3 : {
        		printf("=%d\n",ans[i][1]*ans[i][3]);
        		break;
        	}
        	case 4 : {
        		printf("=%d\n",ans[i][1]/ans[i][3]);
        		break;
        	}
        }
    }
}
bool check(){
    for(int i=1;i<=4;i++)
        if(a[i]==24) return true;
    return false;
}
void dfs(int k){
    if(k==4){
        if(check()){
            print();
            flag=1;
        }
        return;
    }
    int x,y;
    for(int i=1;i<=4;i++)
        for(int j=1;j<=4;j++)
            if(i!=j&&a[i]>0&&a[j]>0){
                ans[k][1]=a[i],ans[k][2]=1,ans[k][3]=a[j],x=a[i],y=a[j],a[i]=x+y,a[j]=-1;
                dfs(k+1);
                a[i]=x,a[j]=y;
                if(flag) return;
                ans[k][1]=a[i],ans[k][2]=2,ans[k][3]=a[j],x=a[i],y=a[j],a[i]=x-y,a[j]=-1;
                dfs(k+1);
                a[i]=x,a[j]=y;
                if(flag) return;
                ans[k][1]=a[i],ans[k][2]=3,ans[k][3]=a[j],x=a[i],y=a[j],a[i]=x*y,a[j]=-1;
                dfs(k+1);
                a[i]=x,a[j]=y;
                if(flag) return;
                if(a[j]>0&&a[i]%a[j]==0){
                    ans[k][1]=a[i],ans[k][2]=4,ans[k][3]=a[j],x=a[i],y=a[j],a[i]=x/y,a[j]=-1;
                    dfs(k+1);
                    a[i]=x,a[j]=y;
                    if(flag) return;
                }
            }
}
int main(){
    scanf("%d%d%d%d",&a[1],&a[2],&a[3],&a[4]);
    dfs(1);
    if(!flag) cout<<"No answer!";
    return 0;
}
