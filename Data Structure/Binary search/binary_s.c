#include <stdio.h>
// binary search
void main()
{
    int n, a[30], i, j, temp, key;
    int first, last, mid;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
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
        printf("%d\t", a[i]);
    }

    first = 0;
    last = n - 1;
    mid = (first + last) / 2;
    while (first <= last)
    {
        if (a[mid] == key)
        {
            printf("\n\nThe element %d can be found at index %d", key, mid);
            break;
        }
        else
        {
            if (a[mid] < key)
            {
                first = mid + 1;
            }
            else
            {
                last = mid - 1;
            }
            mid = (first + last) / 2;
        }
    }
    if (first > last)
    {
        printf("\nThe element %d can't be found", key);
    }
}