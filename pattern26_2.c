#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=10;i>=1;i--)
       {

        for(j=9;j>=i;j--)
            printf("%d",j);
        printf("0");

        for(k=9;k>=i;k--)
            printf("%d",k);
        printf("\n");
       }

}
