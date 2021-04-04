#include<stdio.h>
void main()
{
    int i,n,j,cd,diff,ft=8;
    printf("enter the number to find the nth term of:");
    scanf("%d",&n);
    for(i=1,j=2;i<n,j<=n;i++,j++)
       {



      ft=ft*i-j;
        }
printf("nth term is %d",ft);}
