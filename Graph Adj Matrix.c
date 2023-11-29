#include <stdio.h>
#include <stdlib.h>

int source,V,E,visited[20],G[20][20],Q[20],f=-1,r=-1;

void DFS(int i){
    int j;
    visited[i]=1;
    printf("%d->",i);
    for(j=1;j<=V;j++){
        if(G[i][j]==1 && visited[j]==0){
            DFS(j);
        }
    }
}

void enqueue(int item){
    if(f==-1 && r==-1){
        f=r=0;
        Q[r]=item;
    }
    else{
        r++;
        q[r]=item;
    }
}

int dequeue(){
    int item;
    if(f==-1 && r==-1){
        printf("Queue is empty\n");
        return -1;
    }
    else if(f==r){
        item=Q[f];
        f=r=-1;
        return item;
    }
    else{
        item=Q[f];
        f++;
        return item;
    }
}

void BFS(int s){
    int i;
    visited[s]=1;
    printf("%d->",s);
    enqueue(s);

    while(f!=-1){
        s=dequeue();
        for(i=1;i<=V;i++){
            if(G[s][i]==1 && visited[i]==0){
                printf("%d->",i);
                visited[i]=1;
                enqueue(i);
            }
        }
    }
}