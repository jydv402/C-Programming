// Find the Largest Element of an Integer Array.

#include <stdio.h>

void main()
{
    int ar[100];
    int size, lrg = 0, i = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("\nEnter the element number %d => ",i+1);
        scanf("%d", &ar[i]);
    }

    lrg = ar[0];

    for (int i = 1; i < size; i++)
    {
        if (ar[i] > lrg)
        {
            lrg = ar[i];
        }
    }

    printf("\n\nThe largest number in the array is %d\n", lrg);
}