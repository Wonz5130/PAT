/*
// 运行超时
#include<cstdio>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        scanf(" %d",&a[i]);
        sum+=a[i];
    }
    int m;
    scanf("%d\n",&m);
    int b[m][2];
    int add[m][2]={0};
    for(int i=0;i<m;i++){
        scanf("%d %d",&b[i][0],&b[i][1]);
        if(b[i][0]<b[i][1]){
            while(b[i][0]!=b[i][1]){
                add[i][0]+=a[b[i][0]-1];
                b[i][0]++;
            }
            add[i][1]=sum-add[i][0];
            if(add[i][0]<add[i][1]) printf("%d\n",add[i][0]);
            else printf("%d\n",add[i][1]);
        }
        else{
            while(b[i][1]!=b[i][0]){
                add[i][0]+=a[b[i][1]-1];
                b[i][1]++;
            }
            add[i][1]=sum-add[i][0];
            if(add[i][0]<add[i][1]) printf("%d\n",add[i][0]);
            else printf("%d\n",add[i][1]);
        }
    }
    return 0;
}
*/



#include<cstdio>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1],sum=0;
    int dis[n+1]={0};
    for(int i=1;i<=n;i++){  //用1~n+1
        scanf("%d",&a[i]);
        sum+=a[i];
        dis[i]=sum;  //先存下来，不然会运行超时
    }
    int m;
    scanf("%d\n",&m);
    int left,right;
    int add[m][2]={0};
    for(int i=0;i<m;i++){
        scanf("%d%d",&left,&right);
        if(left<right){
            add[i][0]=dis[right-1]-dis[left-1];
            add[i][1]=sum-add[i][0];
            if(add[i][0]<add[i][1]) printf("%d\n",add[i][0]);
            else printf("%d\n",add[i][1]);
        }
        else{
            add[i][0]=dis[left-1]-dis[right-1];
            add[i][1]=sum-add[i][0];
            if(add[i][0]<add[i][1]) printf("%d\n",add[i][0]);
            else printf("%d\n",add[i][1]);
        }
    }
    return 0;
}