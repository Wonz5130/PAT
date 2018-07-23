/*
//1st-WA
#include<stdio.h>
int main(){
    int i,j,N,x,sum[100000],k=0;
    int a[N][2];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    for(i=0,x=a[0][0];i<N;i++){
    	if(a[i][0]>x){
    		x=a[i][0];
		}
	}
	for(i=1;i<=x;i++){
		for(j=0;j<N;j++){
			if(a[j][0]==i){
				sum[k]+=a[j][1];
			}
		}
		k++; 
	}
	for(i=0,k=sum[0];i<x;i++){
		if(k<sum[i]){
			k=sum[i];
			j=i;
		}
	}
    printf("%d %d",j,k);
    return 0;
}
*/


/*
#include<stdio.h>
int main(){
    int i,j,N,x,k,sum[100000]={0};
    int a[N][2];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d %d",&a[i][0],&a[i][1]);
		sum[a[i][0]]+=a[i][1];
    }
    for(i=1,x=a[0][0];i<N;i++){
    	if(a[i][0]>x){
    		x=a[i][0];
		}
	}
	for(i=1,k=sum[1];i<N;i++){
		if(k<sum[a[i][0]]){
			k=sum[a[i][0]];
			j=i;
		}
	}
    printf("%d %d",j,k);
    return 0;
}
*/


//2nd
#include<stdio.h>
int main(){
	int n,result,max;
	scanf("%d",&n);
	int rank,score,sum[100010] = {0};  //sum尽可能取大一点,否则会出现输出最大值为溢出值
	for(int i = 0;i < n;i ++){
		scanf("%d%d",&rank,&score);
		sum[rank] += score;
	}
	max = sum[1];
	result = 1;
	for(int i = 2;i <= n;i ++){
		if(sum[i] > max){
			result = i;
			max = sum[i];
		} 
	}
	printf("%d %d\n",result,max);
	return 0;
}


/*
//晴神代码
#include<cstdio>
const int maxn = 100010;
int school[maxn] = {0};
int main(){
	int n,schID,score;
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%d%d",&schID,&score);
		school[schID] += score;
	}
	int k = 1,MAX = -1;
	for(int i = 1;i <= n;i ++){
		if(school[i] > MAX){
			MAX = school[i];
			k = i;
		}
	}
	printf("%d %d",k,MAX);
	return 0;
}
*/