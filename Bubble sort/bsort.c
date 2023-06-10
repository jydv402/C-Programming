#include <stdio.h>

int main()
{
    int a[100];
    int n, i, j, temp, ord;

    printf("Enter the array size : ");
    scanf("%d", &n);

    printf("\nEnter ascending(1) or descending(2) order : ");
    scanf("%d", &ord);

    if(ord != 1 && ord != 2)
    {
        printf("\nUnspecified operation.Aborting program");
        return 0;
    }

    printf("\n");
    // Reading the array
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d => ", i + 1);
        scanf("%d", &a[i]);
    }

    // Printing before sort
    printf("The array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    // Sorting
    // ascending
    if (ord == 1)
    {
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        printf("\nYou chose ascending order.");
    }
    // descending
    if (ord == 2)
    {
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (a[j] < a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        printf("\nYou chose decending order.");
    }

    // Printing after sort

    printf("\n\nThe sorted array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
