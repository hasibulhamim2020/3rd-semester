/* Write a program to find whether an integer number is Positive or Negative.*/
#include<stdio.h>
int main()
{
     int a;
     printf("enter an integer:");
     scanf("%d",&a);
     if(a>0)
     {
          printf("number is positive");
     }
     else if(a==0)
     {
          printf("input value is 0. it is nutral.");
     }
     else
     {
          printf("Number is Negative");
     }
     return 0;
}
