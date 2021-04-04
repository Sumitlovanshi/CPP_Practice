#include<stdio.h>
void main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);

    i=a<b?a:b;
    printf("%d",i);
    printf("%d",a);
    printf("%d",b);
    while(1)
            { if((a%i==0)&&(b%i==0))
                    break;

             i=i+1;
            }
printf("the hcf is %d",i);
}



