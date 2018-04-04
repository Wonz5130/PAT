/*
// #include<iostream>
// #include<string>
#include<stdio.h>
#include<string.h>
#include<math.h>
// using namespace std;
int main(){
    // cin>>A>>DA>>B>>DB;
    char A[10],B[10];  // 设为字符串
    int DA,DB,x,y,n1,n2;
    n1=0;
    n2=0;
    scanf("%s %d %s %d",&A,&DA,&B,&DB);
    for(int i=0;i<strlen(A);i++){  // 用字符串每一位进行比较
        if(A[i]==DA){
            n1++;
        }
    }
    for(int i=0;i<strlen(B);i++){
        if(B[i]==DB){
            n2++;
        }
    }
    for(int i=0,m1=n1,x=0;i<n1&&m1>=0;i++){
        x+=DA*pow(10,m1-1);
        m1--;
    }
    for(int i=0,m2=n2,y=0;i<n2&&m2>=0;i++){
        y+=DB*pow(10,m2-1);
        m2--;
    }
    printf("%d",x+y);
    return 0;
}
*/





#include<cstdio>
int main(){
    long long A,B,DA,DB,x,y;
    x=0;
    y=0;
    scanf("%lld %lld %lld %lld",&A,&DA,&B,&DB);
    while(A!=0){  //枚举A的每一位
        if(A%10==DA){
            x=x*10+DA;  //x=不是x+=
        }
        A/=10;
    }
    while(B!=0){
        if(B%10==DB){
             y=y*10+DB;
        }
        B/=10;
    }
    printf("%lld",x+y);
    return 0;
}