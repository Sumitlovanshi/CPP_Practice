#include<stdio.h>
void main()
{
int i,j,k,count=1;
for(i=0;i<4;i++)
{
    for(j=50;j>i;j--)
        printf(" ");
    for(k=1;k<=i;k++)
    {
        printf("%d ",count);
        count++;
    }printf("\n");
}
}
