struct node{
    int data;
    struct node *link;
};

struct node *front,*rear;

void display(){
    struct node *ptr;
    if(front==NULL){
        printf("Stack is Empty");
    }
    else{
        ptr=front;
        printf("Queue elements are :");
        while(ptr!=NUll){
            printf("%d ",ptr->data);
            ptr=ptr->link;
        }
    }
}

void enq(int item){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=item;
    new-link=NULL;
    if (front==NULL){
        front=rear=new;
    }
    else{
        rear->link=new;
        rear=rear->link;
    }
    display();

}

void deq(){
    struct node *temp;
    if(front==NULL){
        printf("Queue is Empty");
    }
    else if(front==rear){
        temp=front;
        front=rear=null;
        free(temp);
        display();
    }
    else{
        temp=front;
        front=front->link;
        free(temp);
        display();
    }
}

void main(){
    int opt,x;
    do{
        printf("\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&opt);
        switch(opt){
            case 1:printf("Enter the element to be inserted\n");
                    scanf("%d",&x);
                    enq(item);
                    break;
            case 2:deq();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
                    break;
            default:printf("Invalid choice\n");
        }
    }while(opt!=4);
}


