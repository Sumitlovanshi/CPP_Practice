#include<stdio.h>
void main()

{
    int i,ft,cd,n,N,diff;
    printf("enter the term to be calculated");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(n%2==0)
          { ft=509;
            cd=(n/2-1);
            diff=ft-cd*70;
            }
        else{ft=544;
            cd=(n/2);
            diff=ft-cd*70;

}printf("the nth term is %d",diff);
}
