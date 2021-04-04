#include<stdio.h>
void main()
{
char a[50],b[50];
int i,j,count=0,k=0;
gets(a);
for(i=0;a[i];i++);
for(j=0;j<i;j++)
    if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u'||a[j]=='A'||a[j]=='E'||a[j]=='O'||a[j]=='I'||a[j]=='U')
       {

        count++;
        b[k++]=a[j];
       }
       b[k]='\0';

printf("%d",count);
printf("%s",b);

}
