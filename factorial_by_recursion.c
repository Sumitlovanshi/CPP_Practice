#include<stdio.h>
int fact(int a);
void main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    sum=fact(n);
return 0;
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return (n*fact(n-1));
}
