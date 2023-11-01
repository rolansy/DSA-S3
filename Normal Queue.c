#include <stdio.h>
int a[20],n,f,r;
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
        a[r]=x;
    }
    
}