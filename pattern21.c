#include<stdio.h>
void main()
{
int i,j,k;
for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf("%d",j);

        for(k=4;k>i;k--)
         printf("**");

         for(k=i;k>=1;k--)
        printf("%d",k);
        printf("\n");
}
}
