//1st
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	long long N,p;  //防止越界
	scanf("%lld%lld",&N,&p);
	long long a[N];
	for(int i = 0;i < N;i ++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+N);  //排序
	int j = 0,count = 0;
	for(int i = 0;i < N && j < N;i ++){
		for(j = i + count;j < N && a[j] <= a[i]*p;j ++){  //j控制从i+count开始,因为是找max的count
			count = max(count,j-i+1);	
		}
	}
	printf("%d",count);
	return 0;
}


/*
//PAT
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	long long N,p;
	scanf("%lld%lld",&N,&p);
	long long a[N];
	for(int i = 0;i < N;i ++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+N);
	int j = 0,count = 0;
	for(int i = 0;i < N && j < N;i ++){
		for(j = i + count;j < N && a[j] <= a[i]*p;j ++){
			count = max(count,j-i+1);	
		}
	}
	printf("%d",count);
	return 0;
}
*/