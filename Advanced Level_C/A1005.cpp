#include<cstdio>
#include<cstring>
int main(){
	char a[10][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	char n[10010];
	scanf("%s",n);
	int len = strlen(n);
	int sum = 0;
	for(int i = 0; i < len ; ++i){
		sum += n[i] - '0';  //字符化为整数
	}
	int x[10010] = {0};  //要加{}
	int i = 0;
	//特判
	if(sum == 0){
		printf("zero");
		return 0;
	}
	do{
		x[i++] = sum % 10;
		sum /= 10;
	}while(sum != 0);  //用do while
	for(i-- ; i >= 0 ; --i){
		printf("%s",a[x[i]]);
		if(i != 0) printf(" ");
	}
	return 0;
}