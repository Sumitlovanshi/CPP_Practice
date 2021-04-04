#include<stdio.h>
void main()
{
    int i,j,tem=0,count=0;

    for(i=0;i<5;i++)
    { tem=i+1;
    count=5-1;
    printf("%d ",tem);
        for(j=0;j<i;j++)
           {
               tem=tem+count;
               printf("%d ",tem);
               count--;
           }
    printf("\n");
    }
}
