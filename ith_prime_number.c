#include<stdio.h>
void main()
{
    int n,pos,i,k,count=0,status=0;
    printf("enter the range to check numbers upto");
    scanf("%d",&n);
    printf("enter the ith number to be find");
    scanf("%d",&pos);
    for(k=2;k<=n;k++){
        for(i=1;i<=k;i++)
            if((k%i)==0)
              {

                status=1;
            break;
}
if(status==0)
    count++;
if(count==pos){
        printf("%d",k);
    break;
}
status=0;
}
}
