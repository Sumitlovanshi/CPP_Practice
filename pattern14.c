#include<stdio.h>
void main()
{int i,j;
for(i=0;i<5;i++)
    {for(j=0;j<5-i;j++)
{
    printf("%d",(2*i+1)+(2*j));
}printf("\n");
}
}
