#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=6;i>0;i--)
    {
        for(j=0;j<i-1;j++)
            printf(" ");

        for(k=6-i;k>=1;k--)
            printf("%d",k);
        printf("\n");
    }
}

