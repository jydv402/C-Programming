// Make a simple calculator using Switch case.

#include <stdio.h>
void main()
{
    int choice;
    double num1, num2, result;
    int repeat;

    do
    {
        printf("\nChoose the operation:\n");
        printf("1 => Addition\n2 => Subtraction\n3 => Multiplication\n4 => Division\n");

        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("\nResult: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("\nResult: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("\nResult: %.2lf\n", result);
            break;
        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("\nResult: %.2lf\n", result);
            }
            else
            {
                printf("\nError: Denominator cannot be zero.\n");
            }
            break;
        default:
            printf("\nError: Invalid choice.\n");
        }

        printf("\nIf you want to continue type 1 => ");
        scanf("%d", &repeat);

    } while (repeat == 1);
}