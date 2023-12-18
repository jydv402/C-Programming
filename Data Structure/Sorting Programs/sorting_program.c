#include <stdio.h>

// bubble sort
void bubbleSort(int a[], int n)
{
    int i, j, temp = 0;
    for (i = 0; i < n; i++)
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
}

// selection sort
void selectionSort(int a[], int n)
{
    int i, j, pos, temp;

    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[pos])
            {
                pos = j;
            }
        }
        temp = a[pos];
        a[pos] = a[i];
        a[i] = temp;
    }
}

// Insertion Sort
void insertionSort(int a[], int n)
{
    int i, key, j;
    for (i = 0; i <= n; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

// display
void display(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int choice, n, i;
    int a[100];
    do
    {

        printf("\nSorting Menu:\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Exit\n");

        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        if (choice != 4)
        {
            printf("Enter the size of the array: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);
            for (i = 0; i < n; i++)
            {
                printf("a[%d] = ", i);
                scanf("%d", &a[i]);
            }
        }
        switch (choice)
        {
        case 1:
            bubbleSort(a, n);
            printf("\nSorted array using Bubble Sort:\n");
            display(a, n);
            break;

        case 2:
            selectionSort(a, n);
            printf("\nSorted array using Selection Sort:\n");
            display(a, n);
            break;

        case 3:
            insertionSort(a, n);
            printf("\nSorted array using Insertion Sort:\n");
            display(a, n);
            break;

        case 4:
            printf("\nExiting the program.\n");
            break;

        default:
            printf("\nInvalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}