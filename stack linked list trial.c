struct node{
    int data;
    struct node *link;
};

struct node *top;

void push(int item){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=item;
    new->link=top;
    top=new;
    display());
}