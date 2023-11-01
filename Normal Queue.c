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