#include<stdio.h>
void main()
{
int n,i,pos;
printf("enter your birth number and i will tell position of your seat:");
scanf("%d",&n);
pos=n%8;
switch(pos){

          case 4:  printf("lower");break;
          case 1:  printf("lower");break;
          case 7:  printf("side lower");break;
          case 2:  printf("middle");break;
          case 5:  printf("middle");break;
          case 3:  printf("upper");break;
          case 6:  printf("upper");break;
          case 0:  printf("side upper");break;

}}











