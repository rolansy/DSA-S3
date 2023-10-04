#include <stdio.h>

struct poly{
    int e;
    int c;
}

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