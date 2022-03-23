
/*  Write a program to calculate the average of five integer numbers. */

#include<stdio.h>
int main()
{
     int a,b,c,d,e;
     float sum=0,avg=0;
     printf("Enter Five Numbers:");
     scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
     sum=a+b+c+d+e;
     avg=sum/5;
     printf("the average of five integer numbers: %.3f",avg);
     return 0;
}
