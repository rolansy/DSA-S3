#include <stdio.h>
int q[20],n,f,r;

void insert(int x){
    r=(r+1)%n;
    if (r==f)
    {
        printf("Queue is full\n");
    }
    else{
        q[r]=x;
    }
}