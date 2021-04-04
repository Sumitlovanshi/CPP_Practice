#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<6;i++)
    {for(j=0;j<i;j++)
     {if(i%2!=0)
        {
            printf("%d ",1+(2*j));
        }
            else
                printf("%d ",2+(2*j));
    }printf("\n");
    }
}
