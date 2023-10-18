#include <stdio.h>
int top=-1;
void push(int s[100];int x;int n){
    if (top==n-1){
        printf("Stack is Full\n");
    }
    else{
        s[++top]=x;
    }
}
void pull(int s[100]){
    if (n==-1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Popped Element : %d\n",s[top--]);
    }
}
