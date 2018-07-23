#include<cstdio>
int main(){
	int n,b;
	int n1[100010];
	scanf("%d %d",&n,&b);
	int i = 0;
	//应该改用do while,防止第一次就是0
	/*
	while(n!=0){
		n1[i++] = n%b;
		n /= b;
	}
	*/
	do{
		n1[i++] = n%b;
		n /= b;
	}while(n!=0);
	for(int j = 0;j <= i/2;j ++){  //这里是j<=i/2
		if(n1[j] != n1[i-j-1]){
			printf("No\n");
			break;
		}
		if( j == i/2 && n1[j] == n1[i-j-1]){
			printf("Yes\n");
		}
	}
	for(int j = i-1;j >= 0;j --){
		printf("%d",n1[j]);
		if(j != 0) printf(" ");
	}
	printf("\n");
	return 0;
}