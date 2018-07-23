#include<cstdio>
int main(){
	int n,col,left;
	char sign;
	scanf("%d %c",&n,&sign);
	for(int i = 1;;i ++){
		if(2*i*i-1 > n){
			col = i - 1;  //找出沙漏一半的行数
			left = n - 2*col*col+1;  //剩余没有用的符号数
			break;
		}
	}
	//打印上半层
	for(int i = 0;i < col;i ++){
		for(int j = i;j > 0;j --){
			printf(" ");
		}
		for(int k = 2*col-1 - 2*i;k > 0;k --){
			printf("%c",sign);
		}
		printf("\n");
	}
	//打印下半层
	for(int i = col-1;i > 0;i --){
		for(int j = i;j > 1;j --){
			printf(" ");
		}
		for(int k = 2*i-1;k <= 2*col-1;k ++){
			printf("%c",sign);
		}
		printf("\n");
	}
	printf("%d\n",left);
	return 0;
}