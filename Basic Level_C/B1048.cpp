#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
void reverse(char s[]){  //将字符串反转
	int len = strlen(s);
	for(int i = 0;i < len/2;++ i){  //只需到len/2
		int tmp = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = tmp;
	}
}

int main(){
	char str1[110],str2[110],str3[110];
	scanf("%s %s",str1,str2);
	int n1 = strlen(str1);
	int n2 = strlen(str2);
	int mmax = max(n1,n2);
	int mmin = min(n1,n2);
	reverse(str1);
	reverse(str2);
	for(int i = 0;i < mmax;++ i){  //取较长的位数
		int numA = i < n1 ? str1[i] - '0' : 0;  //用？：取值
		int numB = i < n2 ? str2[i] - '0' : 0;
		if(i%2 == 1){  //个位为第一位,从0开始,所以奇偶要反一下
			if(numB - numA < 0){
			    str3[i] = numB - numA + 10 + '0';
		    }
		    else str3[i] = numB - numA + '0';
		}
		else{
	        int tmp = (numB + numA )%13;
			if(tmp == 10) str3[i] = 'J';
			else if(tmp == 11) str3[i] = 'Q';
			else if(tmp == 12) str3[i] = 'K';
			else str3[i] = tmp + '0';
		}
	}
	/*
	//尝试单独输出前面多余的项,失败
	for(int i = mmin-1;i < mmax;++ i){
		if(mmax == n2){
			//int num = str2[i] - '0';
			//str3[i] = num + '0';
			str3[i] = str2[i];
		}
		else{
			//int num = str1[i] - '0';
			//str3[i] = num + '0';
			str3[i] = str1[i];
		}
	}
	*/
	/*
	//尝试单独输出前面多余的项,失败
	reverse(str1);
	reverse(str2);
	for(int i = 0;i < mmax-mmin; ++ i){
		if(mmax == n2){
			printf("%c",str2[i]);
		}
		else printf("%c",str1[i]);
	}
	*/
	reverse(str3);
	printf("%s",str3);
	return 0;
}