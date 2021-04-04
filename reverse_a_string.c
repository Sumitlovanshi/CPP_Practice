#include<stdio.h>
void main()
{
char a[50],rev[50];
int i,l,j=0;
gets(a);
for(i=0;a[i];i++);
for(l=i-1;l>=0;l--)
    rev[j++]=a[l];
rev[j]='\0';
printf("%s\n",rev);
printf("%s\n",a);
}
