#include<cstdio>
struct person{
	char number[20];  //学号,数组位数要超过15位,至少16位
}person[10010];

int main(){
	int n,In[10010],Out[10010];  //记录登入与登出
	int inhour,inminute,insecond;
	int outhour,outminute,outsecond;
	int earliest = 235959;  //开门时间初值设为边界max值
	int latest = 0;  //关门时间初值设为边界min值
	int early,late;  //记录下标
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%s %d:%d:%d %d:%d:%d",&person[i].number,&inhour,&inminute,&insecond,&outhour,&outminute,&outsecond);
		In[i] = inhour*10000+inminute*100+insecond;
		Out[i] = outhour*10000+outminute*100+outsecond;
		if(In[i] < earliest){
			earliest = In[i];
			early = i;
		}
		if(Out[i] > latest){
			latest = Out[i];
			late = i;
		}
	}
	printf("%s %s",person[early].number,person[late].number);
	return 0;
}