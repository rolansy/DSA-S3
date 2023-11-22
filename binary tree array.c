#include <stdio.h>
void tree(int a[],int i,int item){
    int ch;
    int val;

    a[i]=item;
    printf("Create Left child of %d (1/0)?\n",item);
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter the value of left child of %d\n",item);
        scanf("%d",&val);
        tree(a,2*i,val);
    }

    printf("Create Right child of %d (1/0)?\n",item);
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter the value of right child of %d\n",item);
        scanf("%d",&val);
        tree(a,2*i+1,val);
    }

}

void main(){
    int i;
    int a[100], item;
    for (i=0;i<100;i++){
        a[i]=-1;
    }
    printf("Enter the value of root node\n");
    scanf("%d",&item);
    tree(a,1,item);
    printf("The tree is\n");
    for (i=1;i<16;i++){
        if(a[i]==-1){
            printf("- ");
        }
        else{
            printf("%d ",a[i]);
        }
    }
}