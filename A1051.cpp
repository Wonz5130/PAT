// C++版本

#include<cstdio>
#include<stack>
using namespace std;
stack<int> st;
#define N 1000  //数组小于1000会出现段错误
// bool flag = false;
int main(){
    int m,n,x;
    scanf("%d %d %d",&m,&n,&x);
    int a[N]={0};
    // int current = 1;  //放进循环里，因为每一次循环current都要从1开始
    for(int i = 1;i <= x;i++){
		while(!st.empty()) st.pop();  // C++中没有直接清楚stack的功能，所以要用pop
    	for(int j = 1;j <= n;j++){
    		scanf("%d",&a[j]);
    	}
		int current = 1;  //每一次循环开始，current置为1
		bool flag = true;  //每一次循环开始，flag置为true
    	for(int k = 1;k <= n;k++){  //这里是k和n进行比较
    		st.push(k);  //把k压入栈
    		if(st.size() > m){  //如果栈内元素数目大小大于最大容量m，则表示栈已满，不合法，退出循环
    			flag = false;
    			break;
    		}
        	while(!st.empty()&&st.top() == a[current]){  //做top前要先判断栈是否为空，这里要用循环，因为只要一直满足条件，就一直出栈
        		flag = true;
        		st.pop();  //出栈
        		current ++;  //current指向数组a下一个下标
        	}
        }
        if(st.empty() == true&&flag == true){  //判空，表示栈内元素已经全部出栈
        	printf("YES");
        	if(i!=x) printf("\n");
        }
        else{
			printf("NO");
        	if(i!=x) printf("\n");
		}
    }
    return 0;
}




/*
//PAT
#include<cstdio>
#include<stack>
using namespace std;
stack<int> st;
#define N 1000
// bool flag = false;
int main(){
    int m,n,x;
    scanf("%d %d %d",&m,&n,&x);
    int a[N]={0};
    // int current = 1;
    for(int i = 1;i <= x;i++){
		while(!st.empty()) st.pop();
    	for(int j = 1;j <= n;j++){
    		scanf("%d",&a[j]);
    	}
		int current = 1;
		bool flag = true;
    	for(int k = 1;k <= n;k++){
    		st.push(k);
    		if(st.size() > m){
    			flag = false;
    			break;
    		}
        	while(!st.empty()&&st.top() == a[current]){
        		flag = true;
        		st.pop();
        		current ++;
        	}
        }
        if(st.empty()==true&&flag == true){
        	printf("YES");
        	if(i!=x) printf("\n");
        }
        else{
			printf("NO");
        	if(i!=x) printf("\n");
		}
    }
    return 0;
}
*/



/*
// C语言版本,有错
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define N 1000
typedef int BOOL;
typedef int ElemType;

typedef struct{
    int top;
    int maxSize;
    ElemType *element;
}Stack;



void Create(Stack *S, int mSize){
    S->maxSize=mSize-1;
    S->element=(ElemType*)malloc(sizeof(ElemType)*mSize);
    S->top=-1;
}

BOOL IsEmpty(Stack *S){
    return S->top==-1;
}

BOOL IsFULL(Stack *S){
    return S->top==S->maxSize;
}

BOOL Top(Stack *S,ElemType *x){
    if(IsEmpty(S))
        return FALSE;
    *x=S->element[S->top];
    return TRUE;
}

BOOL Push(Stack *S,ElemType x){
    if(IsFULL(S))
        return FALSE;
    S->top++;
    S->element[S->top]=x;
    return TRUE;
}

BOOL Pop(Stack *S){
    if(IsEmpty(S))
        return FALSE;
    S->top--;
    return TRUE;
}


void Output(Stack *S,int n){
    int i;
    i=S->top;
    if(S->top==-1){
        printf("NULL");
    }
    while(S->top!=-1){
        printf("%d",S[i--]);
    }
    printf("\n");
}

int judge(Stack *S,int a[],int m,int n,int x){
	int current = 1;  //每一次循环开始，current置为1
	bool flag = true;  //每一次循环开始，flag置为true
    for(int k = 1;k <= n;k++){  //这里是k和n进行比较
    	Push(&S,k);  //把k压入栈
    	if(IsFULL(&S)){  //如果栈内元素数目大小大于最大容量m，则表示栈已满，不合法，退出循环
    		flag = false;
    		break;
    	}
        while(!ISEmpty(&S)&&S->top == a[current]){  //做top前要先判断栈是否为空，这里要用循环，因为只要一直满足条件，就一直出栈
        	flag = true;
        	Pop(&S);  //出栈
        	current ++;  //current指向数组a下一个下标
        }
    }
    if(IsEmpty(&S) == true&&flag == true){  //判空，表示栈内元素已经全部出栈
        printf("YES");
        if(i!=x) printf("\n");
    }
    else{
		printf("NO");
        if(i!=x) printf("\n");
	}
}



int main(){
    int m,n,t,x;
	int a[N] = {0};
    Stack S;
    scanf("%d%d%d",&m,&n,&t);
    Create(&S,m);
	while(t--){
		while(!IsEmpty()) Pop();
		for(int i = 1;i <= n;i++){
        	scanf("%d",&a[i]);
    	}
		judge(&S,a,m,n,x);
	}
	return 0;
}
*/