#include<stdio.h>
void main()
{
int n,a=0,b=1,c,i;
printf("enter the term number:");
scanf("%d",&n);
for(i=3;i<=n;i++)
    {
       c=a+b;
       a=b;
       b=c;

    }
        printf("the number %d is the %dth term of fibbonaci number of the series ",c,n);
}

