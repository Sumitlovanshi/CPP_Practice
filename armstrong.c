#include<stdio.h>
void main()
{
int n,r,sum=0,cube,temp;
printf("enter the number:");
scanf("%d",&n);
temp=n;
while(n>0)
    {
        r=n%10;
        cube=r*r*r;
        sum=sum+cube;
        n=n/10;
    }
    if(sum==temp)
        printf("the number %d is armstrong numner",temp);
    else
        printf("the number %d is not a armstrong numner",temp);
}
