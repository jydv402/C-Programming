// Find the factorial of a given number using while loop.

#include <stdio.h>

void main()
{
    int num;
    int factorial = 1;
    int i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        while (i <= num)
        {
            factorial = factorial * i;
            i++;
        }
        printf("The factorial of %d is %d\n", num, factorial);
    }

    else
    {
        printf("The number cannot be negative.\n");
    }
}
