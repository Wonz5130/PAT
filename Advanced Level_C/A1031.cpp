#include<cstdio>
#include<cstring>
int main(){
	char word[100010];
	scanf("%s",word);
	int n = strlen(word);
	int n1,n2,n3;
	//列出前几种情况,找到规律
	n1 = (n+2)/3;  //向下取整
	n3 = n1;  //左右两边相同
	n2 = n+2-n1-n3;
	for(int i = 0;i < n1-1;i ++){
		printf("%c",word[i]);
		for(int j = 0;j < n2-2;j ++){
			printf(" ");
		}
		printf("%c\n",word[n-1-i]);
	}
	//单独打印最下面一层
	for(int i = n1-1;i < n2+n1-1;i ++){
		printf("%c",word[i]);
	}
	printf("\n");
	return 0;
}