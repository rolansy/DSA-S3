#include <stdio.h>
int q[20],n,f,r;

void insert(int x){
    r=(r+1)%n;
    if (r==f)
    {
        printf("Queue is full\n");
    }
    else if(r==-1){
        f=0;
        r=0;
        q[r]=x;
    }
    else{
        q[r]=x;
    }
}

void delete(int x){
    if (f==-1){
        printf("Queue is empty\n")
    }
    else if (f==r)
    {
        x=q[f];
        f=-1;
        r=-1;
    }
    else{
        x=q[f];
        f=(f+1)%n;
    }
}