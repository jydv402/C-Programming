#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int si;
    char name[50];
    int roll;
    float mark;
    struct node *link;
} *START = NULL, *PTR, *PREV, *NEW, *DIS;

int x = 1;
void insert()
{
    NEW = (struct node *)malloc(sizeof(struct node));
    NEW->link = NULL;
    NEW->si = x;
    x++;
    printf("Name : ");
    scanf("%s", &(NEW->name));

    printf("Roll no. : ");
    scanf("%d", &(NEW->roll));

    printf("Mark : ");
    scanf("%f", &(NEW->mark));

    if (START == NULL)
    {
        START = PTR = NEW;
    }
    else
    {
        PTR = START;
        while (PTR->link != NULL)
        {
            PTR = PTR->link;
        }
        PTR->link = NEW;
        PTR = NEW;
    }
}

void find()
{
    int roll = 0;
    printf("Enter the roll no. : ");
    scanf("%d", &roll);

    PTR = START;
    while (PTR != NULL)
    {
        if (PTR->roll == roll)
        {
            printf("\nThe details are\n\tSI no. : %d\n\tName : %s\n\tRoll no. : %d\n\tMark : %0.2f\n", PTR->si, PTR->name, PTR->roll, PTR->mark);
            return;
        }
        PTR = PTR->link;
    }

    printf("Student doesnt exist");
}

void dis()
{
    DIS = START;

    while (DIS != NULL)
    {
        printf("\n\tSI no. : %d\n\tName : %s\n\tRoll no. : %d\n\tMark : %0.2f\n", DIS->si, DIS->name, DIS->roll, DIS->mark);
        DIS = DIS->link;
    }
}

void dlt()
{
    int roll = 0;
    printf("Enter the roll no of the student: ");
    scanf("%d", &roll);
    PTR = START;
    PREV = NULL;

    while (PTR != NULL)
    {
        if (PTR->roll == roll)
        {
            if (PTR == START)
            {
                START = PTR->link;
            }
            else
            {
                PREV->link = PTR->link;
            }
            free(PTR);
            return;
        }
        PREV = PTR;
        PTR = PTR->link;
        
    }

    printf("Student does not exist");
}

void main()
{
    int ch;
    do
    {
        printf("\n\t1 -> Enter elements\n\t2 -> Find names\n\t3 -> Display the list\n\t4 -> Dlete\n\t5 -> Exit\nEnter the choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            if (START == NULL)
            {
                printf("\nEmpty list\n");
            }
            else
            {
                find();
            }
            break;

        case 3:
            if (START == NULL)
            {
                printf("\nEmpty list\n");
            }
            else
            {
                dis();
            }
            break;

        case 4:
            if (START == NULL)
            {
                printf("\nEmpty list\n");
            }
            else
            {
                dlt();
            }
            break;

        case 5:
            printf("\nExiting...\n");
            break;

        default:
            printf("Invalid choice");
            break;
        }
    } while (ch != 5);
}