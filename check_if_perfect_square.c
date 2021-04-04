#include<stdio.h>
void main()
{
    int i,n,count=0,j,k,root,temp;
    int a[100];
    scanf("%d",&n);
    temp=n;
    for(i=1;i<=(n/2);i++)
        {if(n%i==0)
           {
            printf("%d is factors of%d\n",i,n);
            count=count+1;
    for(k=0;k<count;k++)
                {
                    a[k]=i;
                    printf("%d\n",a[k]);
                }
            }
        }
            printf("the count is:%d\n",count);
for(j=0,k=0;j<=count;j++,k++)
{
    printf("j is %d\n",j);
    printf("%d\n",a[k]);
      // if((a[j]*a[j])==temp)
      //    {
      //       root=a[j];
      //       printf("the number %d is perfect square of%d\n",temp,a[count]);
     //     }
}}
