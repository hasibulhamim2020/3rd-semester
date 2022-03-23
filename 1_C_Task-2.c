/* Write a program to scan the variables you declared in task #1 and print

them.  */
#include<stdio.h>
int main ()
{
    char ch ,ch1;
    int a, b;
    float c ,d;
    double x, y;

         printf("Enter two character : ");
         scanf("%c %c",&ch ,&ch1);
          printf("The character : %c %c\n",ch ,ch1);

         printf("Enter two integer number : ");
         scanf("%d %d",&a ,&b);
          printf("The integer number : %d %d\n",a ,b);

         printf("Enter two float number : ");
         scanf("%f %f",&c ,&d);
          printf("The float number : %f %f\n",c ,d);

         printf("Enter two double number : ");
         scanf("%lf %lf",&x ,&y);
          printf("The double number : %lf %lf\n",x ,y);

    return 0;
}
