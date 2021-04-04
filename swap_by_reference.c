#include<stdio.h>
void swap(int *,int *);
void main()
{
    int a,b;
    printf("enter the number to swap");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("the numbers after swap are%d%d:",a,b);
}
void swap(int *a,int *b)
{
    int temp;
    printf("the numbers are:%d%d",*a,*b);
    temp=*a;
    *a=*b;
    *b=temp;
     printf("the numbers after swap are%d%d:",*a,*b);


}
