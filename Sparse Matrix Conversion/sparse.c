#include <stdio.h>

void main()
{
    int a[30][30], b[30][30], r1, c1, count = 0, i, j, k;

    printf("enter the row and column: ");
    scanf("%d %d", &r1, &c1);

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter the element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);

            if (a[i][j] != 0)
            {
                count++;
            }
        }
    }

    // Initialize the first row of the efficient matrix
    b[0][0] = r1;
    b[0][1] = c1;
    b[0][2] = count;
    k = 1;

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (a[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }
    }

    printf("\nThe original matrix is: \n");
    for (i = 0; i < r1; i++)
    {
        printf("\t");
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nThe efficient matrix is: \n");

    for (i = 0; i < k; i++)
    {
        printf("\t");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}