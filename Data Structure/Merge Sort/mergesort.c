#include <stdio.h>
#include <stdlib.h>

// merge sort
void merge(int a[], int lb, int mid, int ub)
{
    printf("\n\n%d\t%d\t%d\n\n", lb, mid, ub);
    int i, j, k;
    i = lb;
    j = mid + 1;
    k = lb;
    int b[100];
    while (i <= mid && j <= ub)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for (i = lb; i <= ub; i++)
    {
        a[i] = b[i];
    }
}

void mergeSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergeSort(a, lb, mid);
        mergeSort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}

void display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int n, i;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[100];
    printf("Enter the elements : \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nOriginal array: \n");
    display(a, n);

    mergeSort(a, 0, n - 1);

    printf("\nSorted array: \n");
    display(a, n);

    return 0;
}