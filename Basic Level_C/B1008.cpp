/*
//1st
#include<cstdio>
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    x=x%n;  //x可能比n大
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j=n-x;
    while(j<=n-1){
        printf("%d ",a[j++]);  //先输出最后移位的那几个数
    }
    int i=0;
    while(i<n-x){
        printf("%d",a[i++]);  //再回到前面输出
        if(i!=n-x){
            printf(" ");  //最后移位不能有空格
        }
    }
    return 0;
}
*/


/*
// PAT代码
#include<cstdio>
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    x=x%n;
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j=n-x;
    while(j<=n-1){
        printf("%d ",a[j++]);
    }
    int i=0;
    while(i<n-x){
        printf("%d",a[i++]);
        if(i!=n-x){
            printf(" ");
        }
    }
    return 0;
}
*/


//2nd
#include<stdio.h>
int main(){
    int n,x;
    scanf("%d%d",&n,&x);
    x %= n;
    int a[n];
    for(int i =0;i < n;i ++){
        scanf("%d",&a[i]);
    }
    if(x == 0){
        for(int i = 0;i < n;i ++){
            printf("%d",a[i]);
            if(i != n-1){
                printf(" ");
            }
        }
    }
    else{
        for(int i = n-x;i < n;i ++){
            printf("%d",a[i]);
            if(i != n-1){
                printf(" ");
            }
        }
        for(int i = 0;i < n-x;i ++){
            printf(" %d",a[i]);
        }
    }
    return 0;
}