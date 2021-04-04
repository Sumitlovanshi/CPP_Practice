#include<stdio.h>
void main()
{
    int i,ft,cd,n,N,diff,term;
    printf("enter the term to be calculated");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(n%2==0)
          { ft=20;
            cd=((n-1)/2);
            diff=cd*6;
            diff=ft-diff;
          }
        else
            {   ft=6;
                cd=(n/2);
                diff=cd*2;
                diff=ft+diff;
            }
printf("the nth term is %d",diff);
}

