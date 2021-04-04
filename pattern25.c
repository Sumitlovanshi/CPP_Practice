#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<5;i++)
    {
    for(j=1;j<=((2*i)-1);j++)
    {
       if(j>i) printf("%d",((2*i))-j);
       else printf("%d",j);
    }printf("\n");
    }
}
