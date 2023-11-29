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
