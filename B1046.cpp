#include<cstdio>
int main(){
    int n,n1,n2;
    n1=n2=0;
    scanf("%d",&n);
    int a1[n],a2[n],b1[n],b2[n];
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d",&a1[i],&a2[i],&b1[i],&b2[i]);
        if((a2[i]==a1[i]+b1[i]&&b2[i]==a1[i]+b1[i])||(a2[i]!=a1[i]+b1[i]&&b2[i]!=a1[i]+b1[i]))
        continue;
        else if(a2[i]==a1[i]+b1[i]){
            n2++;
        }
        else if(b2[i]==a1[i]+b1[i]){
            n1++;
        }
    }
    printf("%d %d",n1,n2);
    return 0;
}