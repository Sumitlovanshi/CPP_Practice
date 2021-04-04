#include<stdio.h>
void main()
{
    int i,ft,cd,n,N,diff;
    printf("enter the term to be calculated");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(n%2==0)
          { ft=32;
          cd=(n-2)/2;
        ft=ft-cd*3;
            }
        else{ft=17;
        cd=(n-1)/2;
        ft=ft+cd*2;
            }
printf("the nth term is %d",ft);
}
