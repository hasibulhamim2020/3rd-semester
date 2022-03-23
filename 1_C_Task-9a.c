
/* Write a program to find whether an integer number is ODD or EVEN. */

#include<stdio.h>
int main()
{
     int a,reminder;
     printf("Enter an integer number:");
     scanf("%d",&a);
     reminder = a%2;
     if (reminder == 0)
     {
          printf(" This is an Even Number.");
     }
     else
     {
          printf("This is an Odd Number.");
     }
     return 0;
}
