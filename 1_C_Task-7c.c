
/*  Write a program to calculate the area of a circle... */
#include<stdio.h>
int main ()
{
     float a,pie=3.1416,sum=0;
     printf("Enter Radious:");
     scanf("%f",&a);
     sum = pie*a*a ;
     printf("the area of a circle %.3f",sum);
     return 0;
}
