#include<cstdio>
int main(){
	double x,y,z,sum=1.0;
	for(int i = 0;i < 3;i ++){
		scanf("%lf%lf%lf",&x,&y,&z);
		double max = x;
		if(max < y) max = y;
		if(max < z) max = z;
		if(max == x) printf("W ");
		else if(max == y) printf("T ");
		else if(max == z) printf("L ");
		sum *= max;
	}
	sum *= 0.65;
	sum --;
	sum *= 2;
	/*
	sum *= 100;
	int sum1 = (int)sum+0.5;
	sum = sum1/100.0;
	*/
	printf("%.2f",sum);
	return 0;
}
