#include<stdio.h>
void divisor(int d);
int main()
{int test;
 int i;
 int a[15];
 scanf("%d",&test);
 for(i=0;i<test;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<test;i++)
 {int value;
 value=a[i];
  divisor(value);
 }
  return 0;
}

void divisor(int M)
{
int i=0;
	for(i=1;i<=M/2;i++)
    {if(M%i==0)
    printf("%d ",i);
    }
    printf("%d ",M);
  printf("\n");
}
