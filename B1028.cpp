#include<cstdio>
struct person{
	char name[10];
	int year;
	int month;
	int day;
}a[100010],youngest,oldest,young,old;

//比较上限
int less(person a,person b){
	if(a.year != b.year) return a.year <= b.year;
	else if(a.month != b.month) return a.month <= b.month;
	else if(a.day != b.day) return a.day <= b.day;
	else return 1;
}

//比较下限
int more(person a,person b){
	if(a.year != b.year) return a.year >= b.year;
	else if(a.month != b.month) return a.month >= b.month;
	else if(a.day != b.day) return a.day >= b.day;
	else return 1;
}

int main(){
	int n,count = 0;
	youngest.year = young.year = 1814;
	youngest.month = oldest.month = young.month = old.month = 9;
	youngest.day = oldest.day = young.day = old.day = 6;
	oldest.year = old.year = 2014;
	scanf("%d",&n);
	for(int i = 0;i < n;i ++){
		scanf("%s %d/%d/%d",a[i].name,&a[i].year,&a[i].month,&a[i].day);
		if(less(a[i],oldest) && more(a[i],youngest)){
			count ++;
			if(less(a[i],old)){  //符合在范围内才能更新最年长和最年轻
			    old = a[i];
		    }
		    if(more(a[i],young)){
			    young = a[i];
		    }
		}
	}
	if(count == 0){
		printf("0\n");
	}
	else printf("%d %s %s",count,old.name,young.name);
	return 0;
}