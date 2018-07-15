#include<cstdio>
#include<cstring>
int main(){
    char str1[100],str2[100][100];
    int i = 0,j = 0,k = 0;
    gets(str1);  //PTA不能用gets
    int len = strlen(str1);
    for(;i < len;i ++){
        if(str1[i] != ' '){
            str2[j][k++] = str1[i];
        }
        else{
            j++;
            k = 0;
        }
    }
    for(;j >= 0;j --){
        printf("%s",str2[j]);
        if(j != 0) printf(" ");
    }
    return 0;
}