#include<stdio.h>
void main()
{
char a[50];
int i,j,count=0;
gets(a);
for(i=0;a[i];i++);
for(j=0;j<i;j++)
    if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u'||a[j]=='A'||a[j]=='E'||a[j]=='O'||a[j]=='I'||a[j]=='U')
        count++;

printf("%d",count);

}
