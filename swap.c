#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("the numbers are%d%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the numbers after swap are%d%d",a,b);
}
