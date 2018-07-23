/*
//1st
#include<stdio.h>
int main(){
    int i,n;
    do{
        scanf("%d",&n);
    }
    while(n>1000||n<=0);  //输入不大于1000的正整数
    if(n==1){
        printf("0");  //n为1直接输出
    }
    else{
        for(i=0;n!=1;i++){
            if(n%2==1){
                n=(3*n+1)/2;
            }
            else n/=2;
        }
    printf("%d",i);
    }
    return 0;
}
*/


//2nd
#include<stdio.h>
int main(){
    int n,count = 0;
    scanf("%d",&n);
    while(n != 1){
        if(n%2 == 0){
            n /= 2;
        }
        else{
            n = (3*n+1)/2;
        }
        count ++;
    }
    printf("%d",count);
    return 0;
}