// Check whether the given natural number is prime or not

#include <stdio.h>

void main()
{
    int num;
    int isPrime = 1; // Assume the number is prime initially

    printf("Enter a natural number: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (num <= 1)
    {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0; // If the number is divisible by any number other than 1 and itself, it's not prime
                break;
            }
        }
    }

    // Print the result
    if (isPrime = 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
}
