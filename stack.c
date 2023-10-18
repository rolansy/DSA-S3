#include <stdio.h>
int top=-1;
void push(int s[100],int x,int n);
void pop(int s[100]);
void display(int s[100]);
void main(){
    int top=-1;
    int s[100],n,x,c,a=0;
    printf("Enter Stack Size : ");
    scanf("%d",&n);
    while (a==0){
        printf("1.Push\n2.Pull\n3.Display\n4.Exit\n");
        printf("Enter Choice : ");
        scanf("%d",&c);
        printf("\n");
        switch (c){
            case 1:
                printf("Enter Element to be Pushed : ");
                scanf("%d",&x);
                push(s,x,n);
                display(s);
                break;
            case 2:
                pop(s);
                display(s);
                break;
            case 3:
                display(s);
                break;
            case 4:
                a=1;
                break;
                
        }
    }
}
void push(int s[100],int x,int n){
    if (top==n-1){
        printf("Stack is Full\n");
    }
    else{
        s[++top]=x;
    }
}
void pop(int s[100]){
    if (top==-1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Popped Element : %d\n",s[top--]);
    }
}
void display(int s[100]){
    if (top==-1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Stack Elements : \n");
        for(int i=0;i<=top;i++){
            printf("%d\n",s[i]);
        }
    }
}
