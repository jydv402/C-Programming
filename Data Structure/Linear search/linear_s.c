#include <stdio.h>

void main()
{
    int n, a[30], i, key, index = -1;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            index = i;
        }
    }

    printf("\nThe array is =>\n\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    index == -1 ? printf("\n\nElement not found") : printf("\n\nElement found at index %d", index);
}