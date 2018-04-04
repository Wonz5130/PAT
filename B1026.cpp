#include<cstdio>
int main(){
    long long c1,c2;
    scanf("%lld %lld",&c1,&c2);
    c1=c2-c1;
    if(c1%100>=50){  // 判断最后两位是否要四舍五入,用%而不是/
        c1=c1/100+1;
    }
    else c1=c1/100;
    printf("%02lld:%02lld:%02lld",c1/3600,c1/60%60,c1%60);  // 注意不足两位时高位用0补充
    return 0;
}