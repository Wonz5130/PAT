/*
//1st
#include<cstdio>
int main(){
    int n,n1,n2;
    n1=n2=0;
    scanf("%d",&n);
    int a1[n],a2[n],b1[n],b2[n];
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&a1[i],&a2[i],&b1[i],&b2[i]);
        if((a2[i]==a1[i]+b1[i]&&b2[i]==a1[i]+b1[i])||(a2[i]!=a1[i]+b1[i]&&b2[i]!=a1[i]+b1[i]))  //先判断全赢/全输
        continue;
        else if(a2[i]==a1[i]+b1[i]){
            n2++;  // 甲赢，所以乙喝酒
        }
        else if(b2[i]==a1[i]+b1[i]){
            n1++;
        }
    }
    printf("%d %d",n1,n2);
    return 0;
}
*/


//2nd
#include<stdio.h>
int main(){
    int n;
    int a1,a2,b1,b2,count1,count2;
    count1 = count2 = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;i ++){
        scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
        if(a2 == a1+b1 && b2 == a1+b1) continue;
        else if(a2 != a1+b1 && b2 != a1+b1) continue;
        else if(a2 == a1+b1 && b2 != a1+b1) count2++;
        else if(b2 == a1+b1 && a2 != a1+b1) count1++;
    }
    printf("%d %d",count1,count2);
}