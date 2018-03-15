/*
#include<stdio.h>
#include<string.h>
void main(){
    char str[100],flag[100]=0;
    int p,t,j,k,x,y,n,i=0;
    do{
        scanf("%d",&n);
    }
    while(n>=10||n<=0);
    while(n!=0){
        scanf("%s",str);
        for(p=t=j=k=x=y=0;i<strlen(str);i++){
            if(str[i]=='P'){
                j=i;
                p++;
            }
            else if(str[i]=='T'){
                k=i;
                t++;
            }
            else if(str[i]!='A'&&str[i]!='P'&&str[i]!='T')
                x++;
            else continue;
        }
        n--;
        if(x>0){
            flag[y++]=0;
            continue;
        }
        else if(p>1||t>1){
            flag[y++]=0;
            continue;
        }
        else if(k-j>2){
            flag[y++]=0;
            continue;
        }
        else{
            flag[y++]=1;
            continue;
        }
    };
    for(i=0;flag[i]!=' ';i++){
        if(flag[i] = 0)
        printf("NO\n");
        else printf("YES\n");
    }
}
*/


/*
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    // int flag[100]=0;
    int p,t,j,k,x,y,n,nn,i=0;
    /*
    do{
        scanf("%d",&n);
    }
    
    scanf("%d\n",&n);
    while(n>=10||n<=0);
    for(nn=0;nn<n;nn++){
        // scanf("%s",str);换成gets
        gets(str);
        y=strlen(str);
        for(p=t=j=k=x=y=0;i<y;i++){
            if(str[i]=='P'){
                j=i;
                p++;
            }
            else if(str[i]=='T'){
                k=i;
                t++;
            }
            else if(str[i]!='A'){ //当前不是P,A,T中的一个
                x++;
            }
        }
        // n--;
        

        
        if(x!=0&&p!=1&&t!=1&&k-j<=1&&(j*(k-j)!=y-k-1))
            printf("NO\n");
        else
            printf("YES\n");
       

        /*合并一下

        if(x>0){
            // flag[y++]=0;
            printf("NO\n");
            // continue;  不需要用continue
        }
        else if(p>1||t>1){
            // flag[y++]=0;
            printf("NO\n");
        }
        else if(k-j<=1){ // P和T中间没有A
             // flag[y++]=0;
             printf("NO\n");
        }
        else if(j*(k-j)==strlen(str)-k-1){
            // flag[y++]=1;
            printf("YES\n");
        }
        else{
            // flag[y++]=0;
            printf("NO\n");
        }
        */

        /*
        for(nn=0;nn<strlen(str);nn++){
            str[nn]='\0';
        }
        
    
    }
    /*
    for(i=0;flag[i]!='\0';i++){
        if(flag[i] = 0)
        printf("NO\n");
        else printf("YES\n");
    // 把输出放在循环里
    
    
    return 0;
}
*/


//精简版
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int p,t,j,k,x,y,n,nn,i=0;
    scanf("%d\n",&n);
    for(nn=0;nn<n;nn++){
        gets(str);
        y=strlen(str);
        for(p=t=j=k=x=y=0;i<y;i++){
            if(str[i]=='P'){
                j=i;
                p++;
            }
            else if(str[i]=='T'){
                k=i;
                t++;
            }
            else if(str[i]!='A'){ //当前不是P,A,T中的一个
                x++;
            }
        }
        if(x!=0||p!=1||t!=1||(k-j<=1)||(j*(k-j)!=(y-k-1)))
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}




/*
#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    int i,j,n;
    int count_P,count_A,count_T,pos_P,pos_T;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        gets(c);
        count_P = 0;
        count_A = 0;
        count_T = 0; 
        pos_P = 0;
        pos_T = 0;
        for(j=0;j<strlen(c);j++)
        {
            if(c[j]=='P')
            {
          count_P++;
                pos_P = j;
            }
            if(c[j]=='A')
                count_A++;
            if(c[j]=='T')
            {
                count_T++;
                pos_T = j;
            }
        }
        if(count_P+count_A+count_T != strlen(c) || pos_T-pos_P<=1 || count_P>1 || count_T>1 || pos_P*(pos_T-pos_P-1)!=strlen(c)-pos_T-1)
            printf("NO\n");
        else
            printf("YES\n");
    }
} 
*/