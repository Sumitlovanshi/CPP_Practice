#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<6;i++)
{
    for(j=1;j<6;j++)
    {
       if (((5-i+j)<5)||(i>j))
        printf("%d",5-i+j);
       else
        printf("5");
    }
 printf("\n");
}
}
