#include <stdio.h>
#include <stdlib.h>

struct node
{
    char name[50];
    struct node *link;
} *newnode, *start = NULL, *ptr;

void main()
{

    int n, i = 0;
    
    printf("Enter the limit of the list-");
    scanf("%d", &n);
    while (i < n)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode -> link = NULL;
        printf("Enter the name of the Student-");
        scanf("%s",&(newnode -> name));
        
        if (start == NULL)
            ptr = start = newnode;
        else
        {
            newnode->link = start;
            start = newnode;
        }
        i++;
    }
    printf("The reversed list is\n");
    ptr = start;
    while (ptr != NULL)
    {
        printf("%s\n", ptr->name);
        ptr = ptr->link;
    }
}