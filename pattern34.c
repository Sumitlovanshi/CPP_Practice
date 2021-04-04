#include<stdio.h>
void main()
{
    int i,j,k,count=1,l,a;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(k=5;k>=i;k--){
            printf("%d",count);
        count++;}

        a=count -2;
        for(l=5;l>i;l--){
            printf("%d",a);
        a--;
       count--;


        }printf("\n");
    }
}
