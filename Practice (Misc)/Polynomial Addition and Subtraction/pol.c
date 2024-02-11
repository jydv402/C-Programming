#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int c;
	int e;
	struct node *link;
}*start = NULL,*start1 = NULL,*start2 = NULL,*start3 = NULL,*ptr,*ptr1,*ptr2,*ptr3,*new;

struct node * create()
{
	start = NULL;
	
	int i = 0,N;
	
	printf("\nEnter the number of terms : ");
	scanf("%d",&N);
	
	while(i < N)
	{
		new = (struct node *)malloc(sizeof(struct node));
		new -> link = NULL;
		
		printf("\nCoeff : ");
		scanf("%d",&(new -> c));
		
		printf("\nExpo : ");
		scanf("%d",&(new -> e));
		
		if(start == NULL)
		{
			start = ptr = new;
		}
		else{
			ptr -> link = new;
			ptr = new;
		}
		
		i++;
	}
	return start;
}

void main()
{
	start1 = create();
	start2 = create();
	
	ptr1 = start1;
	ptr2 = start2;
	
	printf("\nFirst Poly\n");
	while(ptr1 -> link != NULL)
	{
		printf("( %d )x^%d + ",ptr1 -> c, ptr1 -> e);
		ptr1 = ptr1 -> link;
	}
	printf("( %d )x^%d ",ptr1 -> c, ptr1 -> e);
	
	printf("\nSecond Poly\n");
	while(ptr2 -> link != NULL)
	{
		printf("( %d )x^%d + ",ptr2 -> c, ptr2 -> e);
		ptr2 = ptr2 -> link;
	}
	printf("( %d )x^%d ",ptr2 -> c, ptr2 -> e);
	
	ptr1 = start1;
	ptr2 = start2;
	
	while(ptr1 != NULL && ptr2 != NULL)
	{
		new = (struct node *)malloc(sizeof(struct node));
		new -> link = NULL;
		
		if(ptr1 -> e > ptr2 -> e)
		{
			new -> c = ptr1 -> c;
			new -> e = ptr1 -> e;
			ptr1 = ptr1 -> link;
		}
		else if(ptr1 -> e < ptr2 -> e)
		{
			new -> c = ptr2 -> c;
			new -> e = ptr2 -> e;
			ptr2 = ptr2 -> link;
		}
		else
		{
			new -> c = ptr1 -> c - ptr2 -> c;
			new -> e = ptr1 -> e;
			
			ptr1 = ptr1 -> link;
			ptr2 = ptr2 -> link;
		}
		
		if(start3 == NULL)
		{
			start3 = ptr3 = new;
		}
		else{
			ptr3 -> link = new;
			ptr3 = new;
		}
	}
	
	while(ptr1 != NULL)
	{
		new = (struct node *)malloc(sizeof(struct node));
		new -> link = NULL;
		
		new -> c = ptr1 -> c;
		new -> e = ptr1 -> e;
		ptr1 = ptr1 -> link;
		
		ptr3 -> link = new;
		ptr3 = new;
		
	}
	
	while(ptr2 != NULL)
	{
		new = (struct node *)malloc(sizeof(struct node));
		new -> link = NULL;
		
		new -> c = ptr2 -> c;
		new -> e = ptr2 -> e;
		ptr2 = ptr2 -> link;
		
		ptr3 -> link = new;
		ptr3 = new;
		
	}
	
	ptr3 = start3;
	printf("\n\nResult\n\n");
	while(ptr3 -> link != NULL)
	{
		printf("( %d )x^%d + ",ptr3 -> c, ptr3 -> e);
		ptr3 = ptr3 -> link;
	}
	printf("( %d )x^%d ",ptr3 -> c, ptr3 -> e);
	
}

