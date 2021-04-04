#include<stdio.h>
void main()
{
    int n,i=0,j;
    int a[5];
    scanf("%d",&n);
    while(n>0)
    {
        a[i]=n%2;
        printf("numer is %d\n",a[i]);
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);
}
