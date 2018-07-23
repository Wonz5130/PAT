#include<cstdio>
int main(){
	int m,n,a[1010] = {0};
	int count = 0;
	while(scanf("%d%d",&m,&n)!=EOF){
		a[n] = m;  //多项式的系数m存进数组,n表示指数
	}
	for(int i = 1;i <= 1000;i ++){
		a[i-1] = a[i] * i;  //求导公式
		a[i] = 0;  //这一项系数不存在了
		if(a[i-1] != 0) count ++;
	}
	if(count == 0) printf("0 0");  //特判
	else{
		for(int i = 1000;i >= 0;i --){
			if(a[i] != 0){
				printf("%d %d",a[i],i);
				count --;
				if(count != 0) printf(" ");
			}
		}
	}
	return 0;
}