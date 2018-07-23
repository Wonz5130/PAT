/*
//第三个测试点过不去
#include<iostream>
using namespace std;
int main(){
    long long x,m;
    int a[10] ={0},k;  //初值都设为了0
    cin >> x;
    m = x;
    do{
        int j = m%10;
        a[j] ++;
        m /= 10;
    }while(m != 0);
    if(x == 0){
        printf("0:0\n");
    }
    else{
        for(int i = 0;i < 10;i ++){
            if(a[i] != 0){
                printf("%d:%d\n",i,a[i]);
            }
        }
    }
    return 0;
}
*/


//1000位数大小可能超过了long long型,改用字符串
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    char string[10010];
    int a[10] ={0};  //初值都设为了0
    scanf("%s",string);
    int len = strlen(string);
    int i = 0;
    do{
        a[string[i++]-'0'] ++;  //字符转整型数
    }while(--len != 0);
    if(string[0] == 0){
        printf("0:0\n");
    }
    else{
        for(i = 0;i < 10;i ++){
            if(a[i] != 0){
                printf("%d:%d\n",i,a[i]);
            }
        }
    }
    return 0;
}