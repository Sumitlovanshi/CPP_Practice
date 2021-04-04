#include<stdio.h>
void main()
{
    int n,i=0,j;
    int a[5];
    scanf("%d",&n);
    while(n>0)
    {
        a[i]=n%8;
        printf("number is %d\n",a[i]);
        n=n/8;
        i++;
    }
    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);
}
