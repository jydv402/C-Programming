#include <stdio.h>

void bs_rec(int a[], int first, int last, int key)
{
    int mid = 0;
    if (first <= last)
    {
        mid = (first + last) / 2;
        if (a[mid] == key)
        {
            printf("\nElement %d found at index %d\n", key, mid);
        }
        else if (a[mid] > key)
        {
            bs_rec(a, first, mid - 1, key);
        }
        else
        {
            bs_rec(a, mid + 1, last, key);
        }
    }
    else
    {
        printf("\nElement %d not found\n", key);
    }
}

void main()
{
    int n, a[30], i, j, temp, key, b[30];
    int first, last, mid;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        b[i] = i;
    }

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

    printf("\nEnter the element to be searched: ");
    scanf("%d", &key);

    printf("\nThe array is =>\n\t");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\n\n\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n\n");

    first = 0;
    last = n - 1;

    bs_rec(a, first, last, key);
}