#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=5;i>=0;i--)
    {
        for(j=1;j<=i-1;j++)
           printf("%d",6-j);
        printf("*");
        for(k=5-i;k>=1;k--)
            printf("%d",k);
        printf("\n");
    }
}
