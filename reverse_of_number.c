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
        printf("the number %d is reverse of number",sum);
}
