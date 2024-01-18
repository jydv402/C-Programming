#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *lchd;
    struct node *rchd;    
}*ROOT = NULL, *PREV , *NEWNODE, *CURR, *curr, *prev;

int preorder(struct node *adrs)
{
    if(adrs != NULL)
    {
        printf("\t%d",adrs -> info);
        preorder(adrs -> lchd);
        preorder(adrs -> rchd);
    }
    
}

int inorder(struct node *adrs)
{
    if(adrs != NULL)
    {
        inorder(adrs -> lchd);
        printf("\t%d",adrs -> info);
        inorder(adrs -> rchd);
    }
    
}

int postorder(struct node *adrs)
{
    if(adrs != NULL)
    {
        postorder(adrs -> lchd);
        postorder(adrs -> rchd);
        printf("\t%d",adrs -> info);
    }
    
}

void main()
{
    int ch;
    printf("\n\t\tBINARY SEARCH TREE");
    do
    {
    
        printf("\n\n\t1 - Insert element\n\t2 - Display the tree\n\t3 - Exit\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                {
                    int x; 
                    NEWNODE = (struct node *)malloc(sizeof(struct node));
                    
                    printf("Enter the key element : ");
                    scanf("%d",&x);
                    
                    NEWNODE -> info = x;
                    NEWNODE -> lchd = NULL;
                    NEWNODE -> rchd = NULL;
                    
                    if(ROOT == NULL)
                    {
                        ROOT = NEWNODE;
                    }
                    else
                    {
                        PREV = NULL;
                        CURR = ROOT;
                        while(CURR != NULL)
                        {
                            PREV = CURR;
                            if(x < CURR -> info)
                            {
                                CURR = CURR->lchd;
                            }
                            else
                            {
                                CURR = CURR->rchd;
                            }
                        }
                        if(x < PREV->info)
                        {
                            PREV -> lchd = NEWNODE;
                        }
                        else
                        {
                            PREV -> rchd = NEWNODE;
                        }
                    }
                }
                break;
                
            case 2:
                if(ROOT == NULL)
                {
                    printf("The TREE does not exist!");
                    break; 
                }
                else
                {
                    int dis;
                    printf("\nChoose the order\n\t1 - Preorder\n\t2 - Inorder\n\t3 - Postorder\n\nEnter your choice: ");
                    scanf("%d",&dis);
                    switch(dis)
                    {
                        case 1:
                            printf("\nPREORDER FORM\n\n");
                            preorder(ROOT);
                            break;
                        
                        case 2:
                            printf("\nINORDER FORM\n\n");
                            inorder(ROOT);
                            break;
                            
                        case 3:
                            printf("\nPOSTORDER FORM\n\n");
                            postorder(ROOT);
                            break;
                            
                        default:
                            printf("Invalid option. Please retry!");
                            break;
                    }
                }
                break;
                
            case 3:
                printf("\nYou have chose to exit...\n");
                break;
                
            default:
                printf("\nInvalid option. Please retry!");
                break;                    
        }

    }while(ch != 3);

}
