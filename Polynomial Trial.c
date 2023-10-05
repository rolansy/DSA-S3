#include <stdio.h>

struct poly{
    int e;
    int c;
};

//Function Declaration
void readpoly(struct poly *p,int *n);
void sortpoly(struct poly *p,int n);
void printpoly(struct poly *p,int n);
int addpoly(struct poly *p1,struct poly *p2,struct poly *res,int n1,int n2);

int main(void){
    struct poly p1[10],p2[10],res[10];
    int n1, n2, n3;
    
    readpoly(p1, &n1);
    readpoly(p2, &n2);

    sortpoly(p1, n1);
    sortpoly(p2, n2);

    printf("Polynomial 1 : ");
    printpoly(p1,n1);
    printf("Polynomial 2 : ");
    printpoly(p2,n2);

    n3=addpoly(p1,p2,res,n1,n2);
    printf("Resultant Polynomial : ");
    printpoly(res,n3);

    return 0;    

    
}

//read polynomials
void readpoly(struct poly *p,int *n){
    printf("Enter Number of Terms : ");
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        printf("Enter the Coefficient : ");
        scanf("%d",&p[i].c);
        printf("Enter the Exponent x^ : ");
        scanf("%d",&p[i].e);
    } 
}

//print polynomials
void printpoly(struct poly *p,int n){
    for (int i=0; i<n; i++){
        if (p[i].c==0){
            continue;
        }
        if (p[i].e==0){
            printf("%d",p[i].c);
        }
        else{
            printf("%dx^%d",p[i].c,p[i].e);
        }
        if (i!=n-1){
            printf("+");
        }
    }
    printf("\n");
}

//Sort Polynomials In Descending Order
void sortpoly(struct poly *p,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-j;j++){
            if(p[j].e<p[j+1].e){
                struct poly temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}


// Add two polynomials and return the number of terms in the resultant polynomial
int addpoly(struct poly *p1, struct poly *p2, struct poly *res, int n1, int n2)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (p1[i].e > p2[j].e)
        {
            res[k++] = p1[i++];
        }
        else if (p1[i].e < p2[j].e)
        {
            res[k++] = p2[j++];
        }
        else
        {
            res[k].e = p1[i].e;
            res[k++].c = p1[i++].c + p2[j++].c;
        }
    }
    while (i < n1)
    {
        res[k++] = p1[i++];
    }
    while (j < n2)
    {
        res[k++] = p2[j++];
    }
    return k;
}