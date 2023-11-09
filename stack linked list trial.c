struct node{
    int data;
    struct node *link;
};

struct node *top;

void display(){
    struct node *ptr;
    if(top==NULL){
        printf("Stack is Empty\n");
    }
    else{
        ptr=top;
        printf("Stack elements are  :");
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
    }
}

void push(int item){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=item;
    new->link=top;
    top=new;
    display();
}

void pop(){
    temp=top;
    if(top==NULL){
        printf("Stack is Empty\n");
    }
    else{
        printf("Popped element is %d\n",top->data);
        top=top->link;
        free(temp);
        display();
    }
}

void main(){
    int opt,item;
    do{
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&opt);
        switch(opt){
            case 1:printf("Enter the element to be inserted\n");
                    scanf("%d",&item);
                    push(item);
                    break;
            case 2:pop();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
                    break;
            default:printf("Invalid choice\n");
        }
    }
}