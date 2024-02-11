#include<stdio.h>
#include<stdlib.h>

void main() {
    struct node {
        int info;
        struct node *link;
    } *newnode, *ptr, *start = NULL, *prev ;

    int n,x, i = 0;
    printf("Enter the limit: ");
    scanf("%d", &n);

    // Input phase: creating linked list
    while (i < n) {
        newnode = (struct node *)malloc(sizeof(struct node));
		
        printf("Enter the element: ");
        scanf("%d", &x);

        newnode->info = x;
		newnode->link =NULL;
        
        if (start == NULL) {
            start = ptr = newnode;
        } else {
            ptr->link = newnode;
            ptr = newnode;
        }
        i++;
    }

    // Sorting phase
   printf("Sorting the list...\n");
   
   
    for (ptr = start; ptr != NULL; ptr = ptr->link)
		{
        for (prev=ptr->link; prev != NULL; prev = prev->link)
			{
             if (ptr->info > prev->info)
			 {
                // Swap info of adjacent nodes
                int temp = ptr->info;
                ptr->info = prev->info;
                prev->info = temp;
            }
        }
    }

   
    // Output phase: printing sorted list
    printf("The sorted list:\n");
    ptr = start;
    while (ptr != NULL)
		{
        printf("%d\t", ptr->info);
        ptr = ptr->link;
    }
}