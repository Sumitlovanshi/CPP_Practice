#include<stdio.h>
#include<math.h>
void main()
{
    int i,j=1,ft,cd,n,N,diff,next,term;
    printf("enter the term to be calculated");
    scanf("%d",&n);
        if(n%2==0)
          { ft=28;cd=12;
            next=ft;
                cd=(n-1)/2;
                 printf("%d",cd);
                while(cd>=j)
                {
                    next=next+j*12;
                    j++;
                }
          }
        else
            {   ft=14;cd=6;
                next=ft;
                cd=(n-1)/2;
                 printf("%d",cd);
                while(cd>=j)
                {
                    next=next+j*6;
                    j++;
                }
            }
printf("the nth term is %d",next);
}

