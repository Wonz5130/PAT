#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[100];
    int i,count,sum=0;
    char b[][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    if(scanf("%s",str)!=EOF){  //如果用while的话,执行时输入完ctrl+z。然后送掉再按回车就行。
        // getchar();
        count=strlen(str);
        for(i=count-1;i>=0;i--){
            sum+=str[i]-'0';  //累加数字
        }
    }
    sprintf(str,"%d",sum);  // 将任意类型数据按某种格式转换成字符串
    // itoa(num,str2,10);  // 有问题
    for(i=0;str[i]!=0;i++){
        if(i>0)
        printf(" ");
        printf("%s",b[str[i]-'0']);
    }
	// getchar();
    return 0;
}
