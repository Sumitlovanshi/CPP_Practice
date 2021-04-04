#include<stdio.h>
void main()

{
    int i,ft,cd,n,N,diff;
    printf("enter the term to be calculated");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(n%2==0)
          { ft=29;
            cd=(n/2-1);
            diff=ft-cd*7;
            }
        else{ft=31;
            cd=(n/2);
            diff=ft-cd*7;

}printf("the nth term is %d",diff);
}
