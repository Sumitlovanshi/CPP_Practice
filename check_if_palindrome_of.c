#include<stdio.h>
#include<conio.h>
void main()
{
int n,p,r,sum=0,temp;
printf("enter the two numbers to compare:");
scanf("%d%d",&n,&p);
temp=n;
while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==p)
        printf("the number %d is palindrome of number %d",temp,p);
    else
         printf("the number %d is not a palindrome of number %d",temp,p);
}

