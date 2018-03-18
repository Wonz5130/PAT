/*
#include<stdio.h>
int main(){
    int i,j,col,row;  //col为行数，row为列数
    char c;
    scanf("%d %c",&col,&c);
    if(col%2==1){
        row=col/2+1;  //col为奇数，四舍五入，row向上取整
    }
    else row=col/2;
    for(i=0;i<col;i++){
        printf("%c",c);
    }
    printf("\n");
    for(i=0;i<row-2;i++){
        for(j=0;j<col;j++){
            if(j==0||j==col-1){
                printf("%c",c);
            }
            else printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<col;i++){
        printf("%c",c);
    }
    printf("\n");
    return 0;
}
*/

#include<stdio.h>
int main(){
    int i,j,col,row;
    char c;
    scanf("%d %c",&col,&c);
    if(col%2==1){
        row=col/2+1;
    }
    else row=col/2;  //行数col为偶，就/2；为奇就/2+1，向上取整，四舍五入
    for(i=0;i<col;i++){
        printf("%c",c);
    }
    printf("\n");
    for(i=0;i<row-2;i++){
        for(j=0;j<col;j++){
            if(j==0||j==col-1){
                printf("%c",c);
            }
            else printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<col;i++){
        printf("%c",c);
    }
    printf("\n");
    return 0;
}