#include<stdio.h>
void main()

{
    int i,ft=0,cd=4,n,N,diff;
    printf("enter the term to be calculated");
    scanf("%d",&n);
    if(n==1)
        N=0;
    else if(n==2)
        N=2;
    else
    for(i=1;i<=n-3;i++)
    {
        diff=6+(4*i);
        N=N+diff;
    }
    printf("the nth term is %d",N);

}
