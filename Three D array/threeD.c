#include <stdio.h>
void main()
{
    int opert;
    int i, j, a[99][99], n, m;
    printf("\n\n");
    printf("                                    _____  _             \n");
    printf("     /\\                            |  __ \\| |            \n");
    printf("    /  \\   _ __ _ __ __ _ _   _    | |__) | | __ _ _   _ \n");
    printf("   / /\\ \\ | '__| '__/ _` | | | |   |  ___/| |/ _` | | | |\n");
    printf("  / ____ \\| |  | | | (_| | |_| | _ | |    | | (_| | |_| |\n");
    printf(" /_/    \\_\\_|  |_|  \\__,_|\\__, |(_)|_|    |_|\\__,_|\\__, |\n");
    printf("                           __/ |                    __/ |\n");
    printf("                          |___/                    |___/ \n");
    printf("\n\n\t1 => Normal Integer Array\n");
    printf("\t2 => Character array\n");

    printf("\n\nEnter your option : ");
    scanf("%d", &opert);
    printf("\n\n");

    switch (opert)
    {
    case 1:
        // Normal integer array
        printf("Enter the array row and column: ");
        scanf("%d %d", &m, &n);

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter the element: ");
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
        printf("Please select the right option and retry!!!");
    }
}