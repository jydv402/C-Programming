#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *LINK;
} *START = NULL, *PTR = NULL, *PREV, *DIS, *NEWNODE;

void display(struct node *DIS)
{
    if (DIS == NULL)
        return;
    display(DIS->LINK);
    printf("\t%d", DIS->info);
}

void insert_end()
{
    int x;
    NEWNODE = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the element : ");
    scanf("%d", &x);

    NEWNODE->info = x;
    NEWNODE->LINK = NULL;

    if (START == NULL)
    {
        START = PTR = NEWNODE;
    }
    else
    {
        PTR = START;

        while (PTR->LINK != NULL)
        {
            PTR = PTR->LINK;
        }
        PTR->LINK = NEWNODE;
        PTR = NEWNODE;
    }
}

void dlt_end()
{
    if (START == NULL)
    {
        printf("\nStack Underflow. Enter elements and retry.\n");
        return;
    }
    else
    {
        PREV = NULL;
        PTR = START;

        while (PTR->LINK != NULL)
        {
            PREV = PTR;
            PTR = PTR->LINK;
        }
        printf("\nElement popped is %d\n", PTR->info);
        if (PTR->LINK == NULL && PTR == START)
        {
            free(PTR);
        }
        else
        {
            PREV->LINK = NULL;
            free(PTR);
        }
    }
}

void main()
{
    int ch;
    do
    {
        printf("\n\n1. Push\n2. Pull\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert_end();
            break;
        case 2:
            dlt_end();
            break;
        case 3:
        {
            if (START == NULL)
            {
                printf("\nStack Underflow. Enter elements and retry.\n");
            }
            else
            {
                display(START);
            }
            break;
        }
        case 4:
            printf("You have chose to exit\n");
            break;
        default:
            printf("Invalid choice");
            break;
        }
    } while (ch != 4);
}