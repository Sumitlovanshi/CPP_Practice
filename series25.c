#include<stdio.h>
void main()

{
    int i=1,ft,cd,n,N,diff;
    printf("enter the term to be calculated");
    scanf("%d",&n);
        if(n%2==0)
          {
            ft=332;
            cd=(n-2)/2;
            while(i<=cd)
            {ft=(ft+8)/2;i++;
            }}
        else{ft=664;
       cd=(n-1)/2;
         while(i<=cd)
             {ft=(ft+16)/2;i++;
             }
}printf("the nth term is %d",ft);
}
