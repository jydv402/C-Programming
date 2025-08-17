#include <stdio.h>

int fib(int len)
{
    if (len == 0)
    {
        return 0;
    }
    else if (len == 1 || len == 2)
    {
        return 1;
    }
    else
    {
        return fib(len - 1) + fib(len - 2);
    }
}

void main()
{
    int x;
    printf("Enter the length of the series : ");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("Enter a positive integer");
    }

    else
    {
        printf("The Fibonacci series is...");

        printf("\n\t");
        for (int i = 0; i < x; i++)
        {
            printf("%d\t", fib(i));
        }
    }
}