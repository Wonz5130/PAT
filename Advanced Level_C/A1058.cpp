#include<cstdio>
int main(){
	long long G1,S1,K1,G2,S2,K2;
	scanf("%lld.%lld.%lld %lld.%lld.%lld",&G1,&S1,&K1,&G2,&S2,&K2);
	long long P = G1*17*29+S1*29+K1;  //统一到K位
	long long A = G2*17*29+S2*29+K2;
	A = A+P;
	long long G3,S3,K3;
	G3 = A/(17*29);  //是除不是取余
	S3 = (A-G3*17*29)/29;  //这里也是除
	//S3 = A%(17*29)/29;
	//K3 = A-G3*17*29-S3*29;
	K3 = A%29;  //这里是取余
	printf("%lld.%lld.%lld",G3,S3,K3);
	return 0;
}