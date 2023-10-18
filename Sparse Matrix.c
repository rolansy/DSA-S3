#include <stdio.h>

void main(){
    int choice;
    int x=1;
    while(x==1){
        printf("\nMenu:\n");
        printf("1. Enter two sparse matrices in their normal form\n");
        printf("2. Convert the matrices into their 3-tuple form and display it\n");
        printf("3. Find the transpose of the two matrices from its tuple form\n");
        printf("4. Print the normal form of the transposed matrix from its tuple form\n");
        printf("5. Find the sum of the two matrices which are represented in tuple form and display the result in tuple form\n");
        printf("6. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter Number of rows of Matrix 1 : ");
                scanf("%d",&r1);
                printf("Enter Number of columns of Matrix 2 : ");
                scanf("%d",c1);
                input(matrix1[r1][c1]);

        }

    }
}

void input(int r,int c,int matrix[r][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
}

void displaym(int r,int c,int matrix[r][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

void convert(int m[][100],int r,int c,int s[100][3]){
    int k=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(m[i][j]!=0){
                s[k][0]=r;
                s[k][1]=c;
                s[k][2]=m[i][j];
                k++;
            }
        }
    }
    s[0][0]=r;
    s[0][1]=c;
    s[0][2]=k-1;
    printf("Tuple Matrix \n");
    for(i=0;i<k;i++){
        for(j=0;j<-p0lokim ;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n")
    }
}