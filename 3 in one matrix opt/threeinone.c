#include <stdio.h>

int main()
{
    int A[20][20], B[20][20], C[20][20];
    int m1, n1, m2, n2, i, j, k, opt, rep = 0;
    do
    {

        printf("\n\nChoose an operation from the following\n\t1 => Sum of two matrices\n\t2 => Product of two matrices\n\t3 => Transpose of a matrix");
        printf("\nEnter an option : ");
        scanf("%d", &opt);

        printf("\nEnter the order of first matrix:");
        scanf("%d%d", &m1, &n1);
        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n1; j++)
            {
                printf("\tEnter the element A[%d][%d]:", i, j);
                scanf("%d", &A[i][j]);
            }
        }

        if (opt != 3)
        {
            printf("\nEnter the order of second matrix:");
            scanf("%d%d", &m2, &n2);
            for (i = 0; i < m2; i++)
            {
                for (j = 0; j < n2; j++)
                {
                    printf("\tEnter the element B[%d][%d]:", i, j);
                    scanf("%d", &B[i][j]);
                }
            }
        }

        printf("The first matrix is: \n");
        for (i = 0; i < m1; i++)
        {
            printf("\t");
            for (j = 0; j < n1; j++)
            {
                printf("%d \t", A[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        if (opt != 3)
        {
            printf("The second matrix is: \n");
            for (i = 0; i < m2; i++)
            {
                printf("\t");
                for (j = 0; j < n2; j++)
                {
                    printf("%d \t", B[i][j]);
                }
                printf("\n");
            }
        }
        printf("\n");
        do
        {
            if (rep == 2)
            {
                printf("\n\nChoose an operation from the following\n\t1 => Sum of two matrices\n\t2 => Product of two matrices\n\t3 => Transpose of a matrix");
                printf("\nEnter an option : ");
                scanf("%d", &opt);
            }

            switch (opt)
            {
            case 1:
                if ((m1 != m2) || (n1 != n2))
                {
                    printf("\nMatrix addition is not possible");
                }
                else
                {
                    printf("\nThe sum of the two matrices is => \n");
                    C[i][j] = 0;

                    for (i = 0; i < m2; i++)
                    {
                        printf("\t");
                        for (j = 0; j < n2; j++)
                        {
                            C[i][j] = A[i][j] + B[i][j];
                            printf("%d \t", C[i][j]);
                        }
                        printf("\n");
                    }
                }
                break;

            case 2:
                if (n1 != m2)
                {
                    printf("\nMatrix multiplication cannot be applied..");
                    break;
                }
                printf("\nThe product of the two matrices is => \n");
                for (i = 0; i < m1; i++)
                {
                    printf("\t");
                    for (j = 0; j < n2; j++)
                    {
                        C[i][j] = 0;
                        for (k = 0; k < n1; k++)
                        {
                            C[i][j] = C[i][j] + A[i][k] * B[k][j];
                        }
                        printf("%d \t", C[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("\nTranspose of the first matrix is\n");
                for (i = 0; i < n1; i++)
                {
                    printf("\t");
                    for (j = 0; j < m1; j++)
                    {
                        printf("%d\t", A[j][i]);
                    }
                    printf("\n");
                }
                break;

            default:
                printf("\nSelect a valid option and please retry...");
                break;
            }
            printf("\n\n\t1 => Restart the program and use new values");
            if (opt != 3)
            {
                printf("\n\t2 => Execute another operation using the same values");
            }
            printf("\nEnter choice: ");
            scanf("%d", &rep);

        } while (rep == 2);

    } while (rep == 1);
    return 0;
}