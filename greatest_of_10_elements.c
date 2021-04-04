#include<stdio.h>
void main()
{
    int i,j,a[10],max;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
        printf("%d",a[i]);
    max=a[0];

for(j=1;j<10;j++)
{
    if(a[j]>max)
        max=a[j];
}
printf("%d",max);
getch();
}
