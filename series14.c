#include<stdio.h>
void main()
{ int n,i,ft=2;
    printf("enter the nth term to be calculated");
    scanf("%d",&n);
    for(i=2;i<=n;i++)

    {
       ft=ft*3;
    }
    printf("the nth term is %d",ft);
}
