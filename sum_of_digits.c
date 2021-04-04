#include<stdio.h>
void main()
{
int n,r,sum=0,temp;
printf("enter the number:");
scanf("%d",&n);
temp=n;
while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==temp)
        printf("the number %d is sum of digits of number",temp);
}
