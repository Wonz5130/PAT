#include<stdio.h>
int main()
{
	/*
	int n,x=0;
	scanf_s("%d", &n);
	if (n <= 3) {
		printf("%d", n+1);
	}
	else {
		for (int i = 1; i <= n - 3; i++) {
			x += i;
		}
	}
	printf("%d", x+n+1);
	*/

	int a[55],n;
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	for (int i = 4; i < 55; i++) {
		a[i] = a[i - 1] + a[i - 3];
	}
	while (scanf("%d", &n) != EOF) {
		printf("%d\n", a[n]);
	}
	return 0;
}