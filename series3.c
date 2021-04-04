#include<stdio.h>
#include<math.h>
void main()

{
    int n;
    double cd,diff,ft=2.0;
    printf("enter the term to be calculated");
    scanf("%d",&n);
    cd=pow(2,n-1);

    printf("the common difference is %lf",cd);
    diff=(double)cd;
    diff=(double)(1/cd);
    diff=ft*diff;
    printf("the nth term is %lf",cd);
    printf("the common difference is %lf",diff);

}
