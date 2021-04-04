#include<stdio.h>
void main()
{
    int i,j,n=5;
    for(i=1;i<6;i++)
    {
    for(j=1;j<=(6-i);j++)
      {if(i>((n/2)+1))
printf("%d",6-i);
else printf("%d",i);
      }printf("\n");
    }
}
