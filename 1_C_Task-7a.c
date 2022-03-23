/*  Write a program to calculate the area of a rectangle. */
#include<stdio.h>
int main ()
{
     float a,b,sum=0;
     printf("Enter Length:");
     scanf("%f",&a);
     printf("Enter Width:");
     scanf("%f",&b);
     sum = a*b ;
     printf("the area of a rectangle %.3f",sum);
     return 0;
}
