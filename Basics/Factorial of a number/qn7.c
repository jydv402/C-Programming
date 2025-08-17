// Find the factorial of a given number using while loop.

#include <stdio.h>

int fact(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}

void main()
{
    int num;
    int factorial;
    int i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("The factorial of %d is %d\n", num, fact(num));
    }

    else
    {
        printf("The number cannot be negative.\n");
    }
}
