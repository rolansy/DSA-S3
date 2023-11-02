#include <stdio.h>
int q[20],n,f,r;
void insert(int x)
{
    if(r==n-1)
    {
        printf("Queue is full\n");
    }
    else if(r==-1)
        {
            f=0;
            r=0;
        }
    else{
        r++;
        q[r]=x;
    }
    
}

void delete(int x)
{
    if(f==r)
    {
        printf("Queue is empty\n");
    }
    else{
        f++;
        x=q[f]
    }
}

void display()
{
    int i;
    for(i=f;i<=r;i++)
    {
        printf("%d",q[i]);
    }
}

void main()
{
    int ch,x;
    printf("Enter the size of the queue\n");
    scanf("%d",&n);
    f=-1;
    r=-1;
    while(1)
    {
        printf("Enter your choice\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the element to be inserted\n");
                    scanf("%d",&x);
                    insert(x);
                    break;
            case 2:delete(x);
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
                    break;
            default:printf("Invalid choice\n");
        }
    }
}
