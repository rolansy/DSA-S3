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
        display(s);
    }
}
void display(int s[100]){
    if (top=-1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Stack Elements : \n");
        for(i=0;i<=top;i++){
            printf("%d\n",s[i]);
        }
    }
}
void main(){
    int s[100],n,x,i,c,a=0;
    printf("Enter Stack Size : ");
    scanf("%d",&n);
    while (a==0){
        printf("1.Push\n2.Pull\n3.Display\n4.Exit");
        printf("Enter Choice");
        scanf("%d",&c);
        switch (c){
            case 1:
                push(s,x,n);
                display(s);
                break;
            case 2:
                pull(s);
        }
    }
}