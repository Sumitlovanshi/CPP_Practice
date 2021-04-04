#include<stdio.h>
void main()
{
    int i,n,count=0;
    scanf("%d",&n);
    for(i=1;i<=(n/2);i++)
        {if(n%i==0)
           {
            printf("%d is factors of%d\n",i,n);
            count++;}


}printf("%d is factors of%d\n",n,n);
printf("the count is:%d",count+1);
}
