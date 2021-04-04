#include<stdio.h>
void main()
{
    int i,n,cd,ft,diff;
    printf("enter the nth number ti be find");
    scanf("%d",&n);
    if(n%3==0)
    {
        ft=25;
        cd=(n-3)/2;
        ft=ft-cd*5;
    }
    else if(n%3==2)
        {
        ft=7;
        cd=(n-3)/2;
        ft=ft+cd*6;
    }
   else
   {
        ft=4;
        cd=(n-3)/2;
        ft=ft+cd*6;}
printf("the nth term is %d",ft);
}
