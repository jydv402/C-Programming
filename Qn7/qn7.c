// Find the factorial of a given number using while loop.

#include <stdio.h>

void main()
{
    int num;
    int factorial;
    int i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        factorial = 1;
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
 