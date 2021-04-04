#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=6;i>0;i--)
    {
        for(j=0;j<i-1;j++)
            printf(" ");

        for(k=5;k>=i;k--)
            printf("%d",k);
        printf("\n");
    }
}

