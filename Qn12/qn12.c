// Find the count of total number of digits of an Integer number (N).

#include <stdio.h>

void main()
{
    int N, cnt = 0;

    printf("Enter the number here: ");
    scanf("%d",&N);

    while (N > 0)
    {
        N = N / 10;
        cnt++;
    }

    printf("\nThe total number of digits in the number is %d\n", cnt);
}