/*
//1st
#include<cstdio>
int main(){
    int n,count1,count2,count3,c1,j1,b1,c2,j2,b2,i;
    count1=count2=count3=c1=j1=b1=c2=j2=b2=0;
    scanf("%d",&n);
    char a[n][2];
    for(i=0;i<n;i++){
        getchar();  //scanf会把\n换行符读入，所以用getchar吸收\n
        scanf("%c %c",&a[i][0],&a[i][1]);
        if(a[i][0]=='C'&&a[i][1]=='J'){
            count1++;  //甲赢一次
            c1++;  //甲锤子赢一次
        }
        else if(a[i][0]=='C'&&a[i][1]=='B'){
            count2++;
            b2++;
        }
        else if(a[i][0]=='J'&&a[i][1]=='C'){
            count2++;
            c2++;
        }
        else if(a[i][0]=='J'&&a[i][1]=='B'){
            count1++;
            j1++;
        }
        else if(a[i][0]=='B'&&a[i][1]=='C'){
            count1++;
            b1++;
        }
        else if(a[i][0]=='B'&&a[i][1]=='J'){
            count2++;
            j2++;
        }
        else count3++;
    }
    printf("%d %d %d\n",count1,count3,count2);  //甲负即乙赢
    printf("%d %d %d\n",count2,count3,count1);
    // if(c1>b1&&c1>j1) printf("C ");  //多余
    // if(b1>c1&&b1>j1) printf("B ");  //多余
    if(j1>c1&&j1>b1) printf("J ");
    if(b1>=c1&&b1>=j1) printf("B ");
    if(c1>b1&&c1>=j1) printf("C ");
    // if(c2>b2&&c2>j2) printf("C");  //多余
    // if(b2>c2&&b2>j2) printf("B");  //多余
    if(j2>c2&&j2>b2) printf("J");
    if(b2>=c2&&b2>=j2) printf("B");
    if(c2>b2&&c2>=j2) printf("C");
    return 0;
}
*/


/*
// PAT
#include<cstdio>
int main(){
    int n,count1,count2,count3,c1,j1,b1,c2,j2,b2,i;
    count1=count2=count3=c1=j1=b1=c2=j2=b2=0;
    scanf("%d",&n);
    char a[n][2];
    for(i=0;i<n;i++){
        getchar();
        scanf("%c %c",&a[i][0],&a[i][1]);
        if(a[i][0]==67&&a[i][1]==74){
            count1++;
            c1++;
        }
        else if(a[i][0]==67&&a[i][1]==66){
            count2++;
            b2++;
        }
        else if(a[i][0]==74&&a[i][1]==67){
            count2++;
            c2++;
        }
        else if(a[i][0]==74&&a[i][1]==66){
            count1++;
            j1++;
        }
        else if(a[i][0]==66&&a[i][1]==67){
            count1++;
            b1++;
        }
        else if(a[i][0]==66&&a[i][1]==74){
            count2++;
            j2++;
        }
        else count3++;
    }
    printf("%d %d %d\n",count1,count3,count2);
    printf("%d %d %d\n",count2,count3,count1);
    if(j1>c1&&j1>b1) printf("J ");
    if(b1>=c1&&b1>=j1) printf("B ");
    if(c1>b1&&c1>=j1) printf("C ");
    if(j2>c2&&j2>b2) printf("J");
    if(b2>=c2&&b2>=j2) printf("B");
    if(c2>b2&&c2>=j2) printf("C");
    return 0;
}
*/


//2nd
#include<stdio.h>
int main(){
    int N;
    char jia,yi;
    int AS,AE,AF,count1c,count1j,count1b,count2c,count2j,count2b;  //甲胜、甲平、甲负
    AS = AE = AF = count1c = count1j = count1b = count2c = count2j = count2b = 0;
    scanf("%d",&N);
    for(int i = 0;i < N;i ++){
        getchar();
        scanf("%c %c",&jia,&yi);
        if(jia == 'C' && yi == 'J'){
            AS++;
            count1c++;  //只要记录赢的时候的手势,看清题目
        }
        else if(jia == 'C' && yi == 'B'){
            AF++;
            count2b++;
        }
        else if(jia == 'C' && yi == 'C'){
            AE++;
        }
        else if(jia == 'B' && yi == 'B'){
            AE++;
        }
        else if(jia == 'B' && yi == 'C'){
            AS++;
            count1b++;
        }
        else if(jia == 'B' && yi == 'J'){
            AF++;
            count2j++;
        }
        else if(jia == 'J' && yi == 'B'){
            AS++;
            count1j++;
        }
        else if(jia == 'J' && yi == 'C'){
            AF++;
            count2c++;
        }
        else{
            AE++;
        }
    }
    printf("%d %d %d\n",AS,AE,AF);
    printf("%d %d %d\n",AF,AE,AS);
    if(count1b >= count1c && count1b >= count1j){
        printf("B ");
    }
    else if(count1c > count1b && count1c >= count1j){  //结果相同,按字典序输出
        printf("C ");
    }
    else if(count1j > count1b && count1j > count1c){
        printf("J ");
    }
    if(count2c > count2b && count2c >= count2j){
        printf("C");
    }
    else if(count2b >= count2c && count2b >= count2j){
        printf("B");
    }
    else if(count2j > count2b && count2j > count2c){
        printf("J");
    }
    return 0;
}
