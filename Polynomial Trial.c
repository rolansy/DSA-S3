#include <stdio.h>

struct poly{
    int e;
    int c;
};

//Function Declaration
void readpoly(struct poly *p,int n);
void sortpoly(struct poly *p,int n);
void printpoly(struct poly *p,int n);
void addpoly(struct poly *p1,struct poly *p2,struct poly *res,int n1,int n2);

void main(){
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

    n3=add_poly(p1,p2,res,n1,n2);
    printf("Resultant Polynomial : ");
    printpoly(res,n3);

    return 0;    

    
}

//read polynomials
void readpoly(struct poly *p,int *n){
    printf("Enter Number of Terms : ");
    scanf("%d",&n);
    for (int i; i<*n; i++){
        printf("Enter the Coefficient : ");
        scanf("%d",&p[i].c);
        printf("Enter the Exponent : ");
        scanf("%d",&p[i].e);
    } 
}

//print polynomials
void printpoly(struct poly *p,int n){
    for (int i; i<n; i++){
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
        for(int j=0;i<n-i-j;j++){
            if(p[j].e<p[j+1].e){
                struct poly temp=p[j].e;
                p[j].e=p[j+1].e;
                p[j+1].e=temp;
            }
        }
    }
}
