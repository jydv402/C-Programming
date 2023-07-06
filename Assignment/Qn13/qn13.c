// Check whether the
// given number(N) can be expressed as Power of Two (2) or not.
// For example 8 can be expressed as 2^3.

#include <stdio.h>
int main()
{
    int N, org;
    int e = 0;

    printf("Enter the number here: ");
    scanf("%d", &N);

    org = N;

    while (N > 1)
    {
        if (N % 2 != 0)
        {
            printf("The number %d cannot be expressed as a power of 2", org);
            return 0;
        }
        e++;
        N = N / 2;
    }

    printf("The number %d can be expressed as 2^%d.", org, e);
    return 0;
}