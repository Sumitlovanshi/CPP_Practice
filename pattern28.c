#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<5;i++)
    {

        for(j=1;j<=(2*i)-1;j++)
           {

            if(j%2!=0)
                printf("%d",i);
            else printf("*");
        }printf("\n");

    }
    for(i=4;i>=1;i--)
    {

        for(j=1;j<=(2*i)-1;j++)
           {

            if(j%2!=0)
                printf("%d",i);
            else printf("*");
        }printf("\n");

}
}
