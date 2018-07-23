#include<cstdio>
#include<cstring>
struct Student{
	char name[11];  //字符串数组大小都要设大于10,存‘\0’
	char number[11];
	int score;
}Student[10010];  //结构体大小要大于100

int main(){
	int n;
	char name[11];
	char number[11];
	int score,max,min;
	scanf("%d",&n);
	scanf("%s %s %d",&name,&number,&score);
	strcpy(Student[score].name,name);
	strcpy(Student[score].number,number);
	max = score;
	min = score;
	for(int i = 1;i < n;i ++){
		scanf("%s %s %d",&name,&number,&score);
		strcpy(Student[score].name,name);
		strcpy(Student[score].number,number);
		if(score > max) max = score;
		if(score < min) min = score;
	}
	printf("%s %s\n",Student[max].name,Student[max].number);
	printf("%s %s\n",Student[min].name,Student[min].number);
	return 0;
}