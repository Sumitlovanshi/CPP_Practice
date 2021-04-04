#include<stdio.h>
void main()

{
    int i,ft,cd,n,N,diff;
    printf("enter the term to be calculated");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(n%2==0)
          { ft=53;
            cd=((n-1)/2);
            diff=cd*13;
            diff=ft-diff;
            }
        else{ft=53;
                cd=(n/2);
                diff=cd*13;
            diff=ft-diff;
            }

printf("the nth term is %d",diff);

}
