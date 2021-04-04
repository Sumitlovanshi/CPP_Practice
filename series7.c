#include<stdio.h>
void main()

{
    int i,ft,cd,n,N,diff;
    printf("enter the term to be calculated");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(n%2==0)
          { ft=9;
            cd=((n-2)/2);
            diff=cd*2;
            diff=ft+diff;
            }
        else{diff=21;

            }

printf("the nth term is %d",diff);

}
