#include<stdio.h>
#include<string.h>

void main()
{
char a[50],ch[50];
int i,l;
gets(a);
for(i=0;a[i];i++);
printf("%d",i);
for(l=0;l<(i/2);l++)
    ch[l]=a[l];
   // printf("%s",ch[l]);
    a[l]=a[i-1-l];
    //printf("%s",a[l]);
    a[i-1-l]=ch[l];
    //printf("%s",a[i-1-l]);
a[i]='\0';
//printf("%s\n",rev);
printf("%s\n",a);
}

