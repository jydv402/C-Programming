#include <stdio.h>

int reccur(int num)
{
    if (num < 10)
    {
        return num;
    }
    else
    {
        int lastdig = num % 10;
        int restdigs = num / 10;
        return lastdig + reccur(restdigs);
        }
}

void main()
{
    int x;
    printf("Enter the number here: ");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("Please enter a Positive integer");
    }
    else
    {
        printf("The sum of digits of %d is equal to %d", x, reccur(x));
    }
}