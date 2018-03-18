#include<stdio.h>
int main(){
    //char A,B,D;
    long long A,B;
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
    while(A!=0);
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}


/*
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