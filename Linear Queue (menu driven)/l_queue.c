#include <stdio.h>

// Queue is a linear datastructure that follows the FIFO policy
void main()
{
    int q[50], front = -1, rear = -1, x, y;
    int n, ch, i;
    // Frontend and Rearend are initially equal to -1

    printf("Enter the size of the queue: ");
    scanf("%d", &n);

    do
    {
        printf("\n\n\t1 => Insert Element\n\t2 => Delete Element\n\t3 => Display\n\t4 => Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            // Insert an element
            if (rear == n - 1)
            {
                printf("Queue Overflow");
                break;
            }
            else
            {
                rear++;
                printf("Enter the element: ");
                scanf("%d", &x);
                q[rear] = x;
                if (front == -1)
                {
                    front = 0;
                }
                break;
            }

        case 2:
            // Delete element from queue
            if (front == -1)
            {
                printf("Queue Underflow");
                break;
            }
            else
            {
                y = q[front];
                printf("The element is : %d", y);
                if (front == rear)
                {
                    front = rear = -1;
                }
                else
                {
                    front++;
                }
                break;
            }

        case 3:
            // Display the whole queue
            if (front == -1)
            {
                printf("Queue Underflow");
                break;
            }
            else
            {
                printf("The queue elements are:\n");
                printf("\t");
                for (i = front; i <= rear; i++)
                {
                    printf("%d\t", q[i]);
                }
                break;
            }

        case 4:
            printf("You have chose to exit...");
            break;

        default:
            printf("Invalid choice");
            break;
        }
    } while (ch != 4);
}