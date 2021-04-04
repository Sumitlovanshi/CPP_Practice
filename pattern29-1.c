#include<stdio.h>
void main()
{
    int i,j,k,count=1;
    for(i=1;i<6;i++)
       {

        for(j=5;j>=i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
         {
            printf("%d ",count);
        count++;
         }
        printf("\n");
}}
