#include <stdio.h>

void inputm(int r,int c,int m[100][100]);
void displaym(int r,int c,int m[100][100]);
void totuple(int m[][100], int r,int c, int s[100][3]);
void transpose(int s[100][3],int t[100][3]);
void add(int s1[100][3],int s2[100][3],int rs[100][3]);

int main(){
	int s=0,c;
    int r1,c1,r2,c2;
    int m1[100][100],m2[100][100];
	int s1[100][3],s2[100][3],t1[100][3],t2[100][3],rs[100][3];
	while(s==0){
		printf("1.Enter Matrices\n2.Convert to Tuple Form\n3.Transpose of Matrix A\n4.Transpose of Matrix B\n5.Add Matrices\n6.Exit\n");
		printf("Enter choice : ");
		scanf("%d",&c);
		switch(c){
			case(1):
				printf("Enter Number of Rows in the Matrix A : ");
				scanf("%d",&r1);
				printf("Enter Number of Columns in the Matrix A : ");
				scanf("%d",&c1);
				printf("Enter Number of Rows in the Matrix B : ");
				scanf("%d",&r2);
				printf("Enter Number of Columns in the Matrix B : ");
				scanf("%d",&c2);
				inputm(r1,c1,m1);
				inputm(r2,c2,m2);
				displaym(r1,c1,m1);
				displaym(r2,c2,m2);
				break;
			case(2):
				totuple(m1,r1,c1,s1);
				totuple(m2,r2,c2,s2);
				break;
			case(3):
				printf("Transposed matrix 1 in normal form:\n");
				transpose(s1,t1);
				break;
			case(4):
				printf("Transposed matrix 2 in normal form:\n");
				transpose(s2,t2);
				break;
			case(5):
				add(s1,s2,rs);
				break;
			case(6):
				s=1;
				break;
				
			}
		}
}

void inputm(int r,int c,int m[100][100]){
	
	printf("Enter Elements : \n");
	for (int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&m[i][j]);
		}
	}
}

void displaym(int r,int c,int m[100][100]){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d ",m[i][j]);
			}
		printf("\n");
		}
}

void totuple(int m[][100], int r,int c, int s[100][3]){
	
	int k=1;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(m[i][j]!=0){
				s[k][0]=i;
				s[k][1]=j;
				s[k][2]=m[i][j];
				k++;
				}
			}
	}
	s[0][0]=r;
	s[0][1]=c;
	s[0][2]=k-1;
	for (int i=0;i<k;i++){
		for(int j=0;j<3;j++){
			printf("%d ",s[i][j]);
			}
		printf("\n");
		}
}

void transpose(int s[100][3],int t[100][3]){
	int r=s[0][0];
	int c=s[0][1];
	int n=s[0][2];
	int k=1;
	
	t[0][0]=c;
	t[0][1]=r;
	t[0][2]=n;
	
	for(int i=0;i<c;i++){
		for(int j=1;j<=n;j++){
			if (s[j][1]==i){
				t[k][0]=s[j][1];
				t[k][1]=s[j][0];
				t[k][2]=s[j][2];
				k++;
			}
		}
	}
	for(int i=0;i<k;i++){
		for(int j=0;j<3;j++){
			printf("%d ",t[i][j]);
			}
		printf("\n");
		}
	
}

void add(int s1[][3], int s2[][3], int rs[][3])
{
    int r1 = s1[0][0], c1 = s1[0][1], n1 = s1[0][2];
    int r2 = s2[0][0], c2 = s2[0][1], n2 = s2[0][2];
    int i = 1, j = 1, k = 1;

    
    if (r1 != r2 || c1 != c2) {
        printf("Matrices cannot be added.\n");
        return;
    }

    rs[0][0] = r1;
    rs[0][1] = c1;

    while (i <= n1 && j <= n2) {
        if (s1[i][0] < s2[j][0] || (s1[i][0] == s2[j][0] && s1[i][1] < s2[j][1])) {
            rs[k][0] = s1[i][0];
            rs[k][1] = s1[i][1];
            rs[k][2] = s1[i][2];
            i++;
            k++;
        } else if (s1[i][0] > s2[j][0] || (s1[i][0] == s2[j][0] && s1[i][1] > s2[j][1])) {
            rs[k][0] = s2[j][0];
            rs[k][1] = s2[j][1];
            rs[k][2] = s2[j][2];
            j++;
            k++;
        } else {
        	if ((s1[i][2] + s2[j][2])!=0){
        	rs[k][0] = s1[i][0];
            	rs[k][1] = s1[i][1];
            	rs[k][2] = s1[i][2] + s2[j][2];
            	i++;
            	j++;
            	k++;
        	}
        	else{
        	i++;
        	j++;
        	}
        }
    }

    while (i <= n1) {
        rs[k][0] = s1[i][0];
        rs[k][1] = s1[i][1];
        rs[k][2] = s1[i][2];
        i++;
        k++;
    }
    while (j <= n2) {
        rs[k][0] = s2[j][0];
        rs[k][1] = s2[j][1];
        rs[k][2] = s2[j][2];
        j++;
        k++;
    }

    rs[0][2] = k - 1;
    printf("Result Tuple Matrix : \n");
    for(i=0;i<k;i++)
    {for(j=0;j<3;j++)
    {
        printf("%d ",rs[i][j]);
    }printf("\n");
}
}

