#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int a[n],a1,a2,a3,a5,flag=1;
    a1=0,a2=0,a3=0,a5=0;
    int count1,count2,count3,count4,count5;  //记录是否有满足条件的数,没有就要输出N
    count1=0,count2=0,count3=0,count4=0,count5=0;
    double a4=0;
    for(int i=0;i<n;i++){  //不能在这里赋初值,这样就变成局部变量了
        scanf("%d",&a[i]);
        if(a[i]%10==0){  //被5整除的偶数=被10整除的数
            a1+=a[i];
            count1++;
        }
        if(a[i]%5==1){
            a2+=flag*a[i];
            flag=-flag;  //flag表示错位相加
            count2++;
        }
        if(a[i]%5==2){
            count3++;
        }
        if(a[i]%5==3){
            a4+=a[i];
            count4++;
        }
        if(a[i]%5==4){
            a5=max(a5,a[i]);  //调用C++求max库
            count5++;
        }
    }
    if(count1==0) printf("N ");
    else printf("%d ",a1);
    if(count2==0) printf("N ");
    else printf("%d ",a2);
    if(count3==0) printf("N ");
    else printf("%d ",count3);
    if(count4==0) printf("N ");
    else printf("%.1f ",a4/count4);
    if(count5==0) printf("N");
    else printf("%d",a5);  //最后不输出空格
    return 0;
}