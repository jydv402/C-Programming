// same qn but different method

#include <stdio.h>

int main()
{
    int n, i, p = 0;

    printf("Enter the natural number here: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1 is neither prime nor composite.");
        return 0;
    }

    if (n < 1)
    {
        printf("Invalid input (%d is not a natural number).", n);
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            p++;
        }
    }

    // if (p > 2)
    // {
    //     printf("%d is not a Prime number.", n);
    // }

    // else
    // {
    //     printf("%d is a Prime number.", n);
    // }

    p > 2 
    ? printf("%d is not a Prime number.", n) 
    : printf("%d is a Prime number.", n);
    return 0;
}