#include<stdio.h>
using namespace std;

int string_to_int(char *str)
{

    int i,x=0;
    for(i=0,x=0;str[i];i++)
       { if(str[i]>='0'&&str[i]<='9')
            x=x*10+(str[i]-48);

        else
            break;
}return(x);
}

main(int argc,char *argv[])
{
    int a,n;
    for(n=1;n<5;n++)
    {a=string_to_int(argv[n]);
    printf("%d\n",a+1);}
}

