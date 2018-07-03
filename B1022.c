/*
//1st
#include<stdio.h>
int main(){
    //char A,B,D;
    long long A,B; //A+B的范围可能会超过int范围(<=2^31-1)
    int D,i=0;
    int a[100];
    //sscanf(str,"%d",&A);
    //sscanf(str,"%d",&B);
    //scanf("%d",&D);
    scanf("%lld%lld%d",&A,&B,&D);
    A=A+B;
    do{
        a[i++]=A%D;
        A=A/D;
    }
    while(A!=0);  //先执行，防止一上来A+B就是0的情况
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}
*/


/*
//PAT
#include<stdio.h>
int main(){
    //char A,B,D;
    int A,B,D,i=0;
    int a[100];
    //sscanf(str,"%d",&A);
    //sscanf(str,"%d",&B);
    //scanf("%d",&D);
    scanf("%d%d%d",&A,&B,&D);
    A=A+B;
    while(A!=0){
        a[i++]=A%D;
        A=A/D;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}
*/


//2nd
#include<stdio.h>
int main(){
    long long A,B;
    int D,a[100],i = 0;
    scanf("%lld%lld%d",&A,&B,&D);
    A = A+B;
    do{
        a[i++] = A%D;
        A /= D;
    }
    while(A != 0);
    for(i--;i >= 0;i--){
        printf("%d",a[i]);
    }
    return 0;
}
