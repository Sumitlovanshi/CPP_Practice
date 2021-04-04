#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        for(j=1;j<=6-i;j++)
        {
if(i%2!=0)
  {printf("%d",j);}
else
    {printf("%d",7-i-j);}


    }        printf("\n");
}
}
