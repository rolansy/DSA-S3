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