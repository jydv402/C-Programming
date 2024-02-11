#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
} *START = NULL, *PTR, *NEW;

int ch;


void insert()
{
    NEW = (struct node *)malloc(sizeof(struct node));
    NEW -> link = NULL;

    printf("Enter the element:");
    scanf("%d", &(NEW -> info));

    if(START == NULL)
    {
        START = NEW;
    }
    else
    {
        NEW -> link = START;
        START = NEW;
    }
}

void sum_avg(){
    int count = 0, sum = 0, avg = 0;
    PTR = START;
    while(PTR != NULL)
    {
        count++;
        sum += PTR -> info;
        PTR = PTR -> link;
    }
    avg = sum/count;

    printf("\nSum = %d\nAverage = %d\n",sum, avg);
}

void dis()
{
    PTR = START;
    while (PTR != NULL)
    {
        printf("\t%d",PTR -> info);
        PTR = PTR -> link;
    }
    
}

void main()
{
    do
    {
        printf("\n\t1 -> Enter element\n\t2 -> Find sum and average\n\t3 -> Display\n\t4 -> Exit\nEnter the choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            sum_avg();
            break;

        case 3:
            if(START == NULL)
            {
                printf("\nList is empty\n");
                break;
            }
            else
            {
                dis();
                break;
            }

        case 4:
            printf("\nExitng...\n");
            break;

        default:
            printf("Invalid input");
            break;
        }
    } while (ch != 4);
}