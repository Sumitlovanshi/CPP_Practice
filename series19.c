#include<stdio.h>
void main()
{
    int i,n,cd,ft,diff;
    printf("enter the nth number ti be find");
    scanf("%d",&n);
    if(n%3==1)
    {
        ft=75;
        cd=(n-1)/2;
        ft=ft-cd*20;
    }
    else if(n%3==2)
        {
        ft=65;
        cd=(n-3)/2;
        ft=ft-cd*20;
    }
   else
   {
        ft=85;}
printf("the nth term is %d",ft);
}
