/* Write a program to multiply two floating point numbers. */

#include <stdio.h>
int main()
{
     float a,b,mult=0;
     printf("Enter TWO floating Numbers:");
     scanf("%f%f",&a,&b);
     mult= a*b;
     printf("Result is:%.3f",mult);
     return 0;

}
