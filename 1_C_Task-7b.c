
/*  Write a program to calculate the area of a triangle.. */
#include<stdio.h>
int main ()
{
     float a,b,sum=0;
     printf("Enter Heigth:");
     scanf("%f",&a);
     printf("Enter base:");
     scanf("%f",&b);
     sum = .5*a*b ;
     printf("the area of a triangle %.3f",sum);
     return 0;
}
