#include<stdio.h>
void main()

{
    int i,ft,cd,n,N,diff;
    printf("enter the term to be calculated");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(n%2==0)
          { ft=20;
          cd=(n-2)/2;
        ft=ft+cd*15;
            }
        else{ft=10;
        cd=(n-1)/2;
        ft=ft+cd*15;


            }

printf("the nth term is %d",ft);

}
