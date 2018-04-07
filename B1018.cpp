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