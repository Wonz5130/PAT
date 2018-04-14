/*
#include<cstdio>
#define N 1000000  //设小了会出现段错误
int main(){
    long long n;
    double s = 0;
    scanf("%lld",&n);
    double a[N];
    for(int i = 0;i < n;i ++){
        scanf("%lf",&a[i]);
        s+=a[i]*(n-i)*(i+1);
    }
    printf("%.2f",s);
    return 0;
}
*/

#include<cstdio>
int main(){
    long long n;
    double s = 0;
    scanf("%lld",&n);
    double x;
    for(int i = 0;i < n;i ++){
        scanf("%lf",&x);
        s+=x*(n-i)*(i+1);
    }
    printf("%.2f",s);
    return 0;
}