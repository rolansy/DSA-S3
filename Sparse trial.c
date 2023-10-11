#include <stdio.h>

#define MAX 100
// Function to print a matrix in its normal form from its tuple form
void printMatrix(int sparse[][3])
{
    int row = sparse[0][0], col = sparse[0][1], n = sparse[0][2];
    int mat[MAX][MAX] = {0};
    int i, j, k;

    // Traverse the sparse array and fill the matrix with its non-zero elements
    for (k = 1; k <= n; k++) {
        i = sparse[k][0];
        j = sparse[k][1];
        mat[i][j] = sparse[k][2];
    }

    // Print the matrix in its normal form
    printf("Matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}


// Function to convert a matrix to its 3-tuple form
void convertToTuple(int mat[][MAX], int row, int col, int sparse[MAX][3])
{
    int i, j, k = 1;

    // Traverse the matrix and store non-zero elements in the sparse array
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (mat[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = mat[i][j];
                k++;
            }
        }
    }

    // Store the number of rows, columns and non-zero elements in the sparse array
    sparse[0][0] = row;
    sparse[0][1] = col;
    sparse[0][2] = k - 1;
    printf("tuple Matrix:\n");
    for(i=0;i<k;i++)
    {for(j=0;j<3;j++)
    {
        printf("%d ",sparse[i][j]);
    }printf("\n");
}
}

// Function to find the transpose of a matrix in its tuple form
void transpose(int sparse[][3], int trans[][3])
{
    int row = sparse[0][0], col = sparse[0][1], n = sparse[0][2];
    int i, j, k = 1;

    // Store the number of rows, columns and non-zero elements in the transpose array
    trans[0][0] = col;
    trans[0][1] = row;
    trans[0][2] = n;

    // Traverse the sparse array and find the transpose
    for (i = 0; i < col; i++) {
        for (j = 1; j <= n; j++) {
            if (sparse[j][1] == i) {
                trans[k][0] = sparse[j][1];
                trans[k][1] = sparse[j][0];
                trans[k][2] = sparse[j][2];
                k++;
            }
        }
    }
     for(i=0;i<k;i++)
    {for(j=0;j<3;j++)
    {
        printf("%d ",trans[i][j]);
    }printf("\n");
    }
}


// Function to add two matrices in their tuple form
void addMatrices(int sparse1[][3], int sparse2[][3], int sum[][3])
{
    int row1 = sparse1[0][0], col1 = sparse1[0][1], n1 = sparse1[0][2];
    int row2 = sparse2[0][0], col2 = sparse2[0][1], n2 = sparse2[0][2];
    int i = 1, j = 1, k = 1;

    // Check if the matrices can be added
    if (row1 != row2 || col1 != col2) {
        printf("Matrices cannot be added.\n");
        return;
    }

    // Store the number of rows, columns and non-zero elements in the sum array
    sum[0][0] = row1;
    sum[0][1] = col1;

    // Traverse the sparse arrays and add the corresponding elements
    while (i <= n1 && j <= n2) {
        if (sparse1[i][0] < sparse2[j][0] || (sparse1[i][0] == sparse2[j][0] && sparse1[i][1] < sparse2[j][1])) {
            sum[k][0] = sparse1[i][0];
            sum[k][1] = sparse1[i][1];
            sum[k][2] = sparse1[i][2];
            i++;
            k++;
        } else if (sparse1[i][0] > sparse2[j][0] || (sparse1[i][0] == sparse2[j][0] && sparse1[i][1] > sparse2[j][1])) {
            sum[k][0] = sparse2[j][0];
            sum[k][1] = sparse2[j][1];
            sum[k][2] = sparse2[j][2];
            j++;
            k++;
        } else {
            sum[k][0] = sparse1[i][0];
            sum[k][1] = sparse1[i][1];
            sum[k][2] = sparse1[i][2] + sparse2[j][2];
            i++;
            j++;
            k++;
        }
    }

    // Copy the remaining elements of the sparse arrays to the sum array
    while (i <= n1) {
        sum[k][0] = sparse1[i][0];
        sum[k][1] = sparse1[i][1];
        sum[k][2] = sparse1[i][2];
        i++;
        k++;
    }
    while (j <= n2) {
        sum[k][0] = sparse2[j][0];
        sum[k][1] = sparse2[j][1];
        sum[k][2] = sparse2[j][2];
        j++;
        k++;
    }

    // Store the number of non-zero elements in the sum array
    sum[0][2] = k - 1;
    for(i=0;i<k;i++)
    {for(j=0;j<3;j++)
    {
        printf("%d ",sum[i][j]);
    }printf("\n");
}
}
void main()
{
    int choice, row1, col1, row2, col2, i, j;
    int mat1[MAX][MAX], mat2[MAX][MAX];
    int sparse1[MAX][3], sparse2[MAX][3], trans1[MAX][3], trans2[MAX][3], sum[MAX][3];
    int x=1;
    while(x==1)
        {printf("\nMenu:\n");
        printf("1. Enter two sparse matrices in their normal form\n");
        printf("2. Convert the matrices into their 3-tuple form and display it\n");
        printf("3. Find the transpose of the two matrices from its tuple form\n");
        printf("4. Print the normal form of the transposed matrix from its tuple form\n");
        printf("5. Find the sum of the two matrices which are represented in tuple form and display the result in tuple form\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Input the first matrix
                printf("Enter the number of rows and columns of the first matrix: ");
                scanf("%d %d", &row1, &col1);
                printf("Enter the elements of the first matrix:\n");
                for (i = 0; i < row1; i++) {
                    for (j = 0; j < col1; j++) {
                        scanf("%d", &mat1[i][j]);
                    }
                }
                

                // Input the second matrix
                printf("Enter the number of rows and columns of the second matrix: ");
                scanf("%d %d", &row2, &col2);
                printf("Enter the elements of the second matrix:\n");
                 for (i = 0; i < row2; i++) {
                    for (j = 0; j < col2; j++) {
                        scanf("%d", &mat2[i][j]);
                    }
                }
               for(i=0;i<row1;i++)
               {
                   for(j=0;j<col1;j++)
                 {
                   printf("%d ",mat1[i][j]);
                 }
               printf("\n");
               }
                printf("\n");
                for(i=0;i<row2;i++)
               {
                   for(j=0;j<col2;j++)
                 {
                   printf("%d ",mat2[i][j]);
                 }
               printf("\n");
               }
                break;
                
            case 2:
                printf("Matrix 1 in 3-tuple form:\n");
                convertToTuple(mat1,row1,col1,sparse1);
               
               

                printf("Matrix 2 in 3-tuple form:\n");
                convertToTuple(mat2,row2,col2,sparse2);
                
                
                
                break;

            case 3:
                printf("Transposing matrix 1...\n");
                transpose(sparse1,trans1);
                

                printf("Transposing matrix 2...\n");
                transpose(sparse2,trans2);
              
                break;
            case 4:
                printf("Transposed matrix 1 in normal form:\n");
                printMatrix(trans1);

                printf("Transposed matrix 2 in normal form:\n");
                printMatrix(trans2);
                break;

            case 5:
                printf("Adding matrices...\n");
                addMatrices(sparse1,sparse2,sum);
                printf("Result in 3-tuple form:\n");
                printf("\nsum of matrix in normal form :\n");
                printMatrix(sum);
                break;

            case 6:
                printf("Exiting...\n");
                x=2;
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
}
}