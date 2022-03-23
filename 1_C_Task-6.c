/*  Write a program to find the maximum and the minimum from three integer

numbers. */

#include<stdio.h>
int main()
{
     int a=0,b=0,c=0;
     printf("ENTER THREE INTEGER VALUE:");
     scanf("%d%d%d",&a, &b ,&c);

     {
               if (a>b & a>c)
          {
               printf("Maximum:%d",a);
          }
          else if (b>a & b>c)
          {
               printf("Maximum:%d",b);
          }
          else
          {
               printf("Maximum:%d",c);
          }
     }

     {
               if (a<b & a<c)
          {
               printf("\nMinimum:%d",a);
          }
          else if (b<a & b<c)
          {
               printf("\nMinimum:%d",b);
          }
          else
          {
               printf("\nMinimum:%d",c);
          }
     }
     return 0;
}
