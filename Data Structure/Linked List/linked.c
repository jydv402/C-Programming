#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
} *start = NULL, *prev, *ptr;

void main()
{
    int ch, info, link;
    do
    {
        printf("1 => Insert\n2 => Display\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            struct node *NEWNODE = (struct node *)malloc(sizeof(struct node));

            printf("Enter the element: ");
            scanf("%d", &info);

            NEWNODE->info = info;
            NEWNODE->link = NULL;

            if (start == NULL)
            {
                start = ptr = NEWNODE;
            }
            else
            {
                ptr->link = NEWNODE;
                ptr = NEWNODE;
            }
        }
        break;

        case 2:
            ptr = start;
            while (ptr != NULL)
            {
                printf("%d -> ", ptr->info);
                ptr = ptr->link;
            }
            printf("NULL\n");

        default:
            printf("Invalid choice");
            break;
        }
    } while (ch != 3);
}
