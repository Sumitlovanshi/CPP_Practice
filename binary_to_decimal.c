#include<stdio.h>
#include<math.h>
void main()
{
    int bin,i=0,sum=0,rem;
    scanf("%d",&bin);

    while(bin>0)
    {
        rem=bin%10;
        sum=sum+rem*(pow(2,i));
        bin=bin/10;
        i++;
    }
    printf("the decimal of is %d",sum);

}
