#include<cstdio>
#include<cstring>
int main(){
	char str[10010];
	scanf("%s",str);
	int n = strlen(str);
	int flag_E = -1;
	for(int i = 0;i < n; i ++){
		if(str[i] == 'E'){
			flag_E = i;
			break;
		}
	}
	int exp = 0;
	//计算指数
	for(int i = flag_E + 2;i < n;i ++){
		exp = exp*10 + (str[i] - '0');
	}
	//特判
	if(exp == 0){
		for(int i = 0;i < n;i ++){
			printf("%c",str[i]);
		}
	}
	//负号
	if(str[flag_E + 1] == '-'){
		if(str[0] == '-'){  //判断首位是否为'-','-'要输出
			printf("%c",str[0]);
		}
		printf("0.");
		for(int i = 0;i < exp-1;i ++){  //小数点后连续0的个数
			printf("0");
		}
		printf("%c",str[1]);
		for(int i = 3;i < flag_E;i ++){
			printf("%c",str[i]);
		}
	}
	//正号
	else{
		if(exp < flag_E-3){
			if(str[0] == '-'){
				printf("-");
				printf("%c",str[1]);
			}
			else{
				printf("%c",str[1]);
			}
			for(int i = 3;i <= exp+2;i ++){
				printf("%c",str[i]);
			}
			printf(".");  //输出小数点
			for(int i = exp+3;i < flag_E;i ++){
				printf("%c",str[i]);
			}
		}
		else if(exp == flag_E-3){  //不用输出小数点
			if(str[0] == '-'){
				printf("-");
				printf("%c",str[1]);
			}
			else{
				printf("%c",str[1]);
			}
			for(int i = 3;i <= exp+2;i ++){
				printf("%c",str[i]);
			}
		}
		else{
			if(str[0] == '-'){
				printf("%c%c",str[0],str[1]);
			}
			else{
				printf("%c",str[1]);
			}
			for(int i = 3;i < flag_E;i ++){
			    printf("%c",str[i]);
			    exp --;  //exp要递减,进行更新
		    }
		    for(int i = 0;i < exp;i ++){  //输出0
			    printf("0");
		    }
		}
	}
	return 0;
}