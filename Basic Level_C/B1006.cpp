/*
//1st
#include<stdio.h>
int main(){
    int n,a[3],j,i=0;
    scanf("%d",&n);
    while(n!=0){
        a[i++]=n%10;
        n/=10;
    }
    while(a[2]>0&&a[2]<=9){
         printf("B");
        a[2]--;
    }
    while(a[1]>0&&a[1]<=9){
         printf("S");
        a[1]--;
    }
    for(i=1;i<=a[0];i++){
         printf("%d",i);
    }
    return 0;
}
*/


//2nd
#include<stdio.h>
int main(){
    int n,b,s,g,i = 1;
    scanf("%d",&n);
    b = n/100;
    g = n%10;
    s = n/10%10;
    while((b--)!=0){
        printf("B");
    }
    while((s--)!=0){
        printf("S");
    }
    while((g--)!=0){
        printf("%d",i++);
    }
    return 0;
}