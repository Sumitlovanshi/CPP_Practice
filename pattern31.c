#include<stdio.h>
void main()
{
int i,j,tem=1;
for(i=1;i<6;i++)
{
    for(j=1;j<=(6-i);j++)
    {
        printf("%d ",tem);tem++;
    }printf("\n");
}
}
