#include<stdio.h>
#include<string.h>
#define max 50
int main()
{
    char a[max],p[max];
    int n,len,leng;

    //scanf("%[^\n]s",a);
    len=strlen(a);
    printf("lenth is : %d",len);
    printf("another ");
    gets(p);
    leng=strlen(p);
    printf("lenth is : %d",leng);
}
