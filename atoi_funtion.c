#include<stdio.h>
main(int argc,char *argv[])
{
    int a;
    a=string_to_int(argv[1]);
    printf("%d",a);
}
int string_to_int(char *str)
{

    int i,x;
    for(i=0,x=0;str[i];i++)
        if(str[i]>='0'&&str[i]<='9')
            x=x*10+(str[i]-48);
        else
            break;
}
