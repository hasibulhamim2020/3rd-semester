/* Write a C program to check Leap x. [ A leap x is exactly divisible by
4 except for century xs (xs ending with 00). The century x is a leap
xonly if it is perfectly divisible by 400. ] */

#include <stdio.h>
int main()
{
    int y;

    printf("Enter year: ");
    scanf("%d",&y);

    if(y % 4 == 0)
    {

        if( y % 100 == 0)
        {
            if ( y % 400 == 0)
                printf("%d is a Leap Year", y);
            else
                printf("%d is not a Leap Year", y);
        }
        else
            printf("%d is a Leap Year", y );
    }
    else
        printf("%d is not a Leap Year", y);

    return 0;
}
