#include<cstdio>
struct student{
	char name[20];  //数组大小要大于10
	char gender;
	char ID[20];
	int grade;
}student[100010];

int main(){
	int n,girl = -1,boy = -1;
	int fmax=0,mmin=100;
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%s %c %s %d",student[i].name,&student[i].gender,student[i].ID,&student[i].grade);  //字符串输入不用&
		if(student[i].gender == 'F'){  //字符直接用=比较,如果是字符串要用strcmp
			if(student[i].grade >= fmax){
				fmax = student[i].grade;
				girl = i;
			}
		}
		else{
			if(student[i].grade <= mmin){
				mmin = student[i].grade;
				boy = i;
			}
		}
	}
	if(girl == -1){
		printf("Absent\n");  //判断如果没有的话
	}
	else printf("%s %s\n",student[girl].name,student[girl].ID);
	if(boy == -1){
		printf("Absent\n");
	}
	else printf("%s %s\n",student[boy].name,student[boy].ID);
	if(girl == -1 || boy == -1){
		printf("NA\n");
	}
	else printf("%d",fmax-mmin);
	return 0;
}