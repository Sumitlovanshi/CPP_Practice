#include<stdio.h>
void main()

{
    int i,ft,n,N,diff;
    printf("enter the term to be calculated");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(n%2==0)
          { ft=21;
            diff=ft+(n/2-1);}
        else{ft=22;
            diff=ft+(n/2);}

printf("the nth term is %d",diff);

}
