#include <stdio.h>

int i, j, k, n, m, a[50][50], b[50][3], cnt = 0;

void main()
{
    printf("Size : ");
    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);

            if (a[i][j] != 0)
            {
                cnt++;
            }
        }
    }

    printf("\nOriginal matrix is \n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    // building the efficient matrix
    k = 0;
    b[k][0] = n;
    b[k][1] = m;
    b[k][2] = cnt;
    k++;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
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
    printf("\n\n\n");
    // Diaplay the eff matrix
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }
}