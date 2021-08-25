#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
{
 char a[15];
 int i=0,k,d;
 scanf("%d",&d);
 while(d!=0)
 {
     k=d%16;
     if(k>9)
            a[i]=(char)(k+55);
     else
            a[i]=(char)(k+48);

     d=d/16;
     i++;
 }
 a[i]='\0';

 strrev(a);
 printf("%s",a);

}
