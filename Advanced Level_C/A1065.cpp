/*
//1st
#include<cstdio>
int main(){
    long long a,b,c;
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%lld%lld%lld",&a,&b,&c);  //输入long long 型
        long long s=a+b;
        if(a>0&&b>0&&s<0) printf("Case #%d: true\n",i+1);
        else if(a<0&&b<0&&s>=0) printf("Case #%d: false\n",i+1);
        else if(s>c) printf("Case #%d: true\n",i+1); //输出是1到T
        else printf("Case #%d: false\n",i+1);
    }
    return 0;
}
*/


/*
//PAT
#include<cstdio>
int main(){
    long long a,b,c;
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        long long s=a+b;
        if(a>0&&b>0&&s<0) printf("Case #%d: true\n",i+1);
        else if(a<0&&b<0&&s>=0) printf("Case #%d: false\n",i+1);
        else if(s>c) printf("Case #%d: true\n",i+1);
        else printf("Case #%d: false\n",i+1);
    }
    return 0;
}
*/


//2nd
#include<stdio.h>
int main(){
    int n;
    long long A,B,C,D;
    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%lld%lld%lld",&A,&B,&C);
        D = A+B;
        if(A>0 && B>0 && D<=0){
            printf("Case #%d: true\n",i+1);
        }
        else if(A<0 && B<0 && D>=0){
            printf("Case #%d: false\n",i+1);
        }
        else if(D > C){
            printf("Case #%d: true\n",i+1);
        }
        else printf("Case #%d: false\n",i+1);
    }
    return 0;
}