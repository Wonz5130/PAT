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
