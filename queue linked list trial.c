struct node{
    int data;
    struct node *link;
};

struct node *front,*rear;

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
