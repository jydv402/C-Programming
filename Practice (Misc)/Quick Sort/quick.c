#include <stdio.h>

int a[50], pivot, i, j, n, q, temp;

void quickSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        q = partition(a, lb, ub);
        quickSort(a, lb, q - 1);
        quickSort(a, q + 1, ub);
    }
}

int partition(int a[], int lb, int ub)
{
    pivot = a[ub];
    i = lb - 1;
    for (j = lb; j <= ub - 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;

            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[i + 1];
    a[i + 1] = a[j];
    a[j] = temp;

    return (i + 1);
}

void display(int a[], int n)
{
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
}

void main()
{
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nOriginal array: \n");
    display(a, n);

    quickSort(a, 0, n - 1);

    printf("\nSorted array: \n");
    display(a, n);
}