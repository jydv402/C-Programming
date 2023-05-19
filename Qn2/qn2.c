// Check whether a  given number is zero or Positive or Negative Using if...else statement.

#include <stdio.h>

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Number is zero.\n");
    }
    if (num > 0)
    {
        printf("Number is positive.\n");
    }
    else
    {
        printf("Number is negative.\n");
    }
}
