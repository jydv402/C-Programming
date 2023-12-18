#include <stdio.h>

// quicksort
void quickSort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = partition(a, p, r);
        quickSort(a, p, q - 1);
        quickSort(a, q + 1, r);
    }
}

// partition
int partition(int a[], int p, int r)
{
    int pivot = a[r];
    int i = p - 1;
    for (int j = p; j <= r - 1; j++)
    {

        if (a[j] <= pivot)
        {
            i++;

            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    int temp = a[i + 1];
    a[i + 1] = a[r];
    a[r] = temp;

    return (i + 1);
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

    quickSort(a, 0, n - 1);

    printf("\nSorted array: \n");
    display(a, n);

    return 0;
}
