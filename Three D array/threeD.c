#include <stdio.h>
void main()
{
    int i, j, a[99][99], n, m;
    printf("Enter the array row and column: ");
    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the elemt: ");
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n\n");
    for (i = 0; i < m; i++)
    {
        printf("|\t");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("|");
        printf("\n");
    }
}