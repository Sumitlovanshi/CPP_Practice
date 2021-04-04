#include<stdio.h>
void main()
{
    int i,n,cd,ft,diff;
    printf("enter the nth number ti be find");
    scanf("%d",&n);
    if(n%3==0)
    {
        ft=50;
        cd=(n-3)/2;
        ft=ft-cd*14;
    }
    else if(n%3==2)
        {
        ft=57;
        cd=(n-3)/2;
        ft=ft-cd*14;
    }
   else
   {
        ft=61;}
printf("the nth term is %d",ft);
}
