#include<stdio.h>
void main()
{
int i,j,k=0,tem;
for(i=1;i<6;i++)
{k=i;printf("%d",k);
    for(j=1;j<i;j++)
    {
        k++;
 printf("%d",k);

    }k--;printf("\n");
}
}
