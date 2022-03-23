/*Write a C program to input side of a triangle and check whether triangle is

validor not using if else.
Sample input: 7 10 5 | output: Triangle is valid
Sample input: 4 10 5 | output: Triangle is not valid*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("input side of a triangle =");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is unvalid");
    }
    return 0;
}
