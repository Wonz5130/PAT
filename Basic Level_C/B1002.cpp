#include<cstdio>
#include<stdlib.h>
#include<cstring>
int main(){
    char str[100];
    int count,sum = 0;
    char b[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    if(scanf("%s",str)!=EOF){  //如果用while的话,执行时输入完ctrl+z。然后送掉再按回车就行。
        count = strlen(str);
        for(int i = count-1;i >= 0;i --){
            sum += str[i]-'0';  //累加数字
        }
    }
    if(sum == 0){  //特判
        printf("ling\n");
    }
    char result[100][5];
    int j = 0;
    for(int i = 0;sum != 0;i ++){
        strcpy(result[j++],b[sum%10]);  //倒着存储
        sum /= 10;
    }
    j --;
    for(int i = j;i >= 0;i --){
        if(i != j){
            printf(" ");
        }
        printf("%s",result[i]);
    }
    return 0;
}
