#include<stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
        if(n%i==0)
            printf("not a prime number,because factors are %d %d,",n,i,n);


    }
