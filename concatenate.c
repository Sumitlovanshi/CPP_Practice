#include<stdio.h>
void main()
{
    char a[20],b[50];
    int i,k;
    gets(a);
    gets(b);
    for(i=0;a[i];i++);
    printf("%d",i);
    for(k=0;b[k]!='\0';k++)
        a[i+k]=b[k];

a[i+k]='\0';
printf("%s",a);
}
