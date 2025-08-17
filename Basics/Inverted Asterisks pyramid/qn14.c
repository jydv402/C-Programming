#include <stdio.h>

void main()
{
    int N, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &N);

    for (i = N; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
