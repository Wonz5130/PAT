#include<iostream>
using namespace std;
int main(){
	int n,sum = 0,pass = 0;
	int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int Z[11] = {0,1,2,3,4,5,6,7,8,9,10};
	char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
	cin >> n;
	char str[110][20];
	int i,j;
	for(i = 0;i < n;i ++){
		cin >> str[i];
		int flag = 0;  //标记每一个身份证是否合理
		for(j = 0;j < 17;j ++){
			if(str[i][j] < '0' || str[i][j] > '9') break;  //存在非整数,退出循环
			sum += (str[i][j]-'0') * weight[j];  //计算权重
		}
		if(j < 17){
			flag = 0;
			cout << str[i] << endl;
		}
		else{
			sum %= 11;
			if(M[sum] == str[i][17]){  //取完模,Z对应M,是否和最后一位相同
				flag = 1;
				pass ++;  //计算总共合理的身份数量
			}
			else cout << str[i] << endl;
		}
		sum = 0;  //每次循环结束要归0
	}
	if(pass == n){
		printf("All passed\n");
	}
	return 0;
}