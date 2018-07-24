#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	char str1[100],str2[100],str3[100],str4[100];
	cin >> str1;
	cin >> str2;
	cin >> str3;
	cin >> str4;
	int n1 = min(strlen(str1),strlen(str2));
	int n2 = min(strlen(str3),strlen(str4));
	char Day[10][5] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int flag = 0;
	for(int i = 0;i < n1;i ++){
		if(str1[i] == str2[i] && str1[i] >= 'A' && str1[i] <= 'G'){  //一定要在A到G之间
			//cout << Day[str1[i] - 'A'];
			printf("%s",Day[str1[i] - 'A']);
			flag = i;
			break;
		}
	}
	cout << ' ';
	for(int i = flag+1;i < n1;i ++){
		if(str1[i] == str2[i]){
			if(str1[i] >= '0' && str1[i] <= '9'){  //0和9要加上''
				//printf("%02d",str1[i] - '0');
				cout << '0' << str1[i] - '0';  //最后要减去'0'
			    //cout << '0' << str1[i];  //这个是错的,有些样例过不去
				break;
			}
			else if(str1[i] >= 'A' && str1[i] <= 'N'){  //一定要在A到N之间
				//printf("%02d",str1[i] - 'A' + 10);
				cout << str1[i]-'A' + 10;  //最后要加上10
				//cout << '1' << str1[i]-'A';  //这个是错的,有些样例过不去
				break;
			}
		}
	}
	cout << ':';
	for(int i = 0;i < n2;i ++){
		if(str3[i] == str4[i]){
			if((str3[i] >= 'A' && str3[i] <= 'Z') || (str3[i] >= 'a' && str3[i] <= 'z')){
				if(i <= 9){
				    cout << '0' << i << endl;
				    break;
			    }
			    else{
				    cout << i << endl;
				    break;
			    }
			}
		}
	}
	return 0;
}
