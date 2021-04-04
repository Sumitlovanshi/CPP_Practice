#include<stdio.h>
void main()
{
    int i,n,count=0,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    for(i=1;i<=(n/2);i++)
        {if(n%i==0)
           {
            printf("%d is factors of%d\n",i,n);
            sum=sum+i;
            count++;}
        }
        if(sum==temp)
        {printf("the number %d is perfect number",temp);}
        else
        {printf("not a perfect number");}//printf("%d is factors of%d\n",n,n);
//printf("the count is:%d",count+1);
}
