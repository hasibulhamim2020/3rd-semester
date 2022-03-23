/* Write a program to find the maximum and the minimum from two integer

numbers.  */

#include<stdio.h>
int main()
{
     int a=0,b=0;
     printf("ENTER TWO INTEGER VALUE:");
     scanf("%d%d",&a, &b);

     if (a>b)
     {
          printf("Maximum:%d Minimum :%d",a,b);
     }
     else if (a==b)
     {
          printf("two numbers are same.");
     }
     else
     {
          printf("Maximum:%d Minimum : %d",b,a);
     }
     return 0;
}
