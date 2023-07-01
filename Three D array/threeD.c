#include <stdio.h>
void main()
{
    int opert;
    int i, j, a[99][99], n, m;

    printf("\n\n\t1 => Normal Integer Array");
    printf("\n\nEnter your option : ");
    scanf("%d", &opert);
    printf("\n\n");
    
    switch (opert)
    {
    case 1:
        //Normal integer array
        printf("Enter the array row and column: ");
        scanf("%d %d", &m, &n);

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter the elemt: ");
                scanf("%d", &a[i][j]);
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
        break;

    default:
        printf("Please selct the right option and retry!!!");
    }
}