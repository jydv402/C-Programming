#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int info;
    struct tree *lch;
    struct tree *rch;
}*start = NULL,*ptr,*curr,*new;

void insert()
{
    int x;
    new = (struct tree*)malloc(sizeof(struct tree));

    printf("Enter the value : ");
    scanf("%d",&x);

    new -> info = x;
    new -> lch = NULL;
    new -> rch = NULL;

    if(start == NULL)
    {
        start = new;
    }
    else
    {
        ptr = NULL;
        curr = start;

        while(curr != NULL)
        {
            ptr = curr;

            if(curr -> info < x)
            {
                curr = curr -> rch;
            }
            else if(curr -> info > x)
            {
                curr = curr -> lch;
            }
            else{
                printf("Duplicate element.");
                return;
            }
        }

        if(x < ptr -> info)
        {
            ptr -> lch = new;
        }
        else{
            ptr -> rch = new;
        }
    }
}

void inorder(struct tree *adrs)
{
    if(adrs != NULL)
    {
        inorder(adrs -> lch);
        printf("\t%d",adrs -> info);
        inorder(adrs -> rch);
    }
}

void main()
{
    int ch;

    do
    {
        printf("\n\n\t1 - Insert element\n\t2 - Display the tree\n\t3 - Exit\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert();
                break;

            case 2:
                inorder(start);
                break;

            case 3:
                printf("Exiting");
                break;

            default:
                printf("Invalid input.");
                break;                
        }
    } while (ch != 3);
    
}