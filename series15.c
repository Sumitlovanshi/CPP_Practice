#include<stdio.h>
void main()
{
    int i,n,cd,ft,diff;
    printf("enter the nth number ti be find");
    scanf("%d",&n);
    if(n%3==0)
    {
        ft=5;

    }
    else if(n%3==2)
        {
        ft=25;
        cd=(n-3)/2;
        ft=ft-cd*7;
    }
   else
   {
        ft=28;
        printf("first termis %d",ft);
        cd=(n-1)/2;
        printf("%d",cd);
        ft=ft-cd*7;}
printf("the nth term is %d",ft);
}
