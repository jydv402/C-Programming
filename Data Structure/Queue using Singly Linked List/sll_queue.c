#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *LINK;
} *START = NULL, *PTR = NULL, *PREV, *DIS, *NEWNODE;

void display()
{
    DIS = START;
    if (DIS == NULL)
    {
        printf("\nQueue Underflow. Enter elements and retry.\n");
    }
    else
    {
        printf("\n");
        while (DIS != NULL)
        {
            printf("\t%d", DIS->info);
            DIS = DIS->LINK;
        }
    }
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

void dlt_begin()
{
    if (START == NULL)
    {
        printf("\nQueue Underflow. Enter elements and retry.\n");
    }
    else
    {
        PTR = START;
        START = START->LINK;
        printf("\nElement deleted is %d\n", PTR->info);
        free(PTR);
    }
}

void main()
{
    int ch;
    do
    {
        printf("\n\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert_end();
            break;
        case 2:
            dlt_begin();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("You have chose to exit\n");
            break;
        default:
            printf("Invalid choice");
            break;
        }
    } while (ch != 4);
}