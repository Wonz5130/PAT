#include<stdio.h>
int main(){
    long long a[3];
    int T,i,j;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        for(j=0;j<3;j++){
            scanf("%lld",&a[j]);  //输入long long 型
        }
        if(a[0]+a[1]>a[2]){
            printf("Case #%d: true\n",i+1); //输出是1到T
        }
        else printf("Case #%d: false\n",i+1);
    }
    return 0;
}