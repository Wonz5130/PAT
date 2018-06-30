/*
//1st
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
    double a4=0;  //a4设为double型
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
*/


/*
//柳神小姐姐代码
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, num, A1 = 0, A2 = 0, A5 = 0;  //=左右要空
    double A4 = 0.0;
    cin >> n;
    vector<int> v[5];  //二维数组,有一维已经确定
    for (int i = 0; i < n; i++) {
        cin >> num;
        v[num%5].push_back(num);  //i维判断%5余数,j维每次压栈符合余数条件的num的值
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (i == 0 && v[i][j] % 2 == 0) A1 += v[i][j];  //再判断是否是偶数
            if (i == 1 && j % 2 == 0) A2 += v[i][j];  //奇数位+
            if (i == 1 && j % 2 == 1) A2 -= v[i][j];  //偶数位-
            if (i == 3) A4 += v[i][j];
            if (i == 4 && v[i][j] > A5) A5 = v[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i != 0) printf(" ");  //首元素前不用输出空格
        if (i == 0 && A1 == 0 || i != 0 && v[i].size() == 0) {  //单独判断A1,再判断其他四位size
            printf("N"); continue;
        }
        if (i == 0) printf("%d", A1);
        if (i == 1) printf("%d", A2);
        if (i == 2) printf("%d", v[2].size());
        if (i == 3) printf("%.1f", A4 / v[3].size());
        if (i == 4) printf("%d", A5);
    }
    return 0;
}
*/


//2nd
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int A1,A2,A3,A5,N,count1,count2,count3,count4,count5;
    double A4=0;
    A1=A2=A3=A5=0;
    count5 = count4 = count3 = count2 = count1 = 0;
    scanf("%d",&N);
    int a[N],flag = 2;
    for(int i = 0;i < N;i ++){
        scanf("%d",&a[i]);
        if(a[i] % 10 == 0){
            A1 += a[i];
            count1 ++;
        }
        if(a[i] % 5 == 1){
            A2 += a[i]*pow(-1,flag++);
            count2 ++;
        }
        if(a[i] % 5 == 2){
            A3 ++;
            count3 ++;
        }
        if(a[i] % 5 == 3){
            A4 += a[i];
            count4 ++;
        }
        if(a[i] % 5 == 4){
            A5 = max(a[i],A5);
            count5 ++;
        }
    }
    if(count1 == 0) printf("N ");
    else printf("%d ",A1);
    if(count2 == 0) printf("N ");
    else printf("%d ",A2);
    if(count3 == 0) printf("N ");
    else printf("%d ",A3);
    if(count4 == 0) printf("N ");
    else printf("%.1f ",A4/count4);
    if(count5 == 0) printf("N");
    else printf("%d",A5);
    return 0;
}
