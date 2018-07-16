#include<cstdio>
struct Student{
	long long id;
	int examSeat;
}testSeat[1010];

int main(){
	int n,m,seat,examSeat;
	long long id;  //准考证号用long long型进行存储
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%lld%d%d",&id,&seat,&examSeat);
		testSeat[seat].id = id;  //以试机座位号为基准
		testSeat[seat].examSeat = examSeat;
	}
	scanf("%d",&m);
	for(int i = 0;i < m;i ++){
		scanf("%d",&seat);
		printf("%lld %d\n",testSeat[seat].id,testSeat[seat].examSeat);  //直接根据试机座位号输出结果
	}
	return 0;
}