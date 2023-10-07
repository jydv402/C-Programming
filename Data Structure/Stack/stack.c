#include <stdio.h>
// Menu driven program for stack with push, pull, display and exit
void main()
{
    int s[100], n, i, top = -1, x, y, ch;

    printf("Enter the size of the stack: ");
    scanf("%d", &n);

    do
    {
        printf("\n\n1. Push\n2. Pull\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            if (top == n - 1)
            {
                printf("Stack Overflow\n");
                break;
            }
            else
            {
                top++;
                printf("Enter the element: ");
                scanf("%d", &x);
                s[top] = x;
                break;
            }

        case 2:
            if (top == -1)
            {
                printf("Stack Underflow\n");
                break;
            }
            else
            {
                y = s[top];
                printf("The element = %d", y);
                top--;
                break;
            }

        case 3:
            if (top == -1)
            {
                printf("Stack Underflow\n");
                break;
            }
            else
            {
                for (i = top; i >= 0; i--)
                {
                    printf("%d\t\n", s[i]);
                }
                break;
            }

        case 4:
            break;

        default:
            printf("Invalid choice");
        }
    } while (ch != 4);
}