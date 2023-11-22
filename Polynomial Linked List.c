#include <stdio.h>
#include <stdlib.h>

struct node{
    int co,expo;
    struct node *link;
}

struct node *p1,*p2,*pr;

struct node * readpoly(){
    struct node *new,*ptr,*head=NULL;
    int n,i;

    printf("Enter Total Number of Terms in Polynomial\n");
    scanf("%d",&n);

    printf("Enter the Coefficient and Exponent of Each Term\n");
    for (i=0;i<n;i++){
        new=(struct node *)malloc(sizeof(struct node));
        scanf("%d%d",&new->co);
        scanf("%d",&new->expo);
        new->link=NULL;
        if(head==NULL){
            head=new;
            ptr=head
        }
        else{
            ptr->link=new;
            ptr=new;
            }
        }
    return head;
    }
}