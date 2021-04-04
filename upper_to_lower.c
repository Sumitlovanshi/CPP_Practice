#include<stdio.h>
void main()
{
    char str[50];
    int i,j;
    gets(str);
    for(i=0;str[i];i++);
    for(j=0;j<i;j++)
    {

     if(str[j]>='A'&&str[j]<='Z')
            str[j]=str[j]+32;
}
printf("%s",str);}
