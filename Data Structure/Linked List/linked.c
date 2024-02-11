#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *LINK;
} *START = NULL, *PTR = NULL, *PREV, *DIS, *NEWNODE, *REP;

void display()
{
	DIS = START;
	if (DIS == NULL)
	{
		printf("\nLinked List is empty...\n");
	}
	printf("\n");
	while (DIS != NULL)
	{
		printf("\t%d", DIS->info);
		DIS = DIS->LINK;
	}
	printf("\n\n");
}

void insert_begin()
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
		NEWNODE->LINK = START;
		START = NEWNODE;
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

void insert_atele()
{
	int x, s;
	NEWNODE = (struct node *)malloc(sizeof(struct node));

	if (START == NULL)
	{
		printf("\nLinked List is empty. Add an element and retry");
		insert_begin();
	}
	else
	{
		display();

		printf("Enter the element after which to be inserted: ");
		scanf("%d", &s);

		printf("\nEnter the element : ");
		scanf("%d", &x);

		NEWNODE->info = x;
		NEWNODE->LINK = NULL;

		PTR = START;
		while (PTR->info != s)
		{
			PTR = PTR->LINK;
		}
		NEWNODE->LINK = PTR->LINK;
		PTR->LINK = NEWNODE;
	}
}

void dlt_begin()
{
	PTR = START;
	START = START->LINK;
	free(PTR);
	printf("\nElement deleted\n");
}

void dlt_end()
{
	PREV = NULL;
	PTR = START;

	while (PTR->LINK != NULL)
	{
		PREV = PTR;
		PTR = PTR->LINK;
	}
	if (PTR->LINK == NULL && PTR == START)
	{
		free(PTR);
	}
	else
	{
		PREV->LINK = NULL;
		free(PTR);
	}
	printf("\nElement deleted\n");
}

void dlt_atele()
{
	int s;
	if (START == NULL)
	{
		printf("\nLinked List is empty.\n");
	}
	else
	{
		display();

		PREV = NULL;
		PTR = START;
		printf("Enter the element to be deleted : ");
		scanf("%d", &s);

		while (PTR->info != s)
		{
			PREV = PTR;
			PTR = PTR->LINK;
		}
		if (PTR->LINK == NULL && PTR == START)
		{
			free(PTR);
		}
		else
		{
			PREV->LINK = PTR->LINK;
			free(PTR);
		}
		printf("\nElement deleted\n");
	}
}

void find_freq()
{
	// frequency of elements in the linked list
	int freq = 0, v, a[50], top = -1;
	PTR = START;
	while (PTR != NULL)
	{
		v = PTR->info;
		int isDuplicate = 0;

		for (int i = 0; i <= top; i++)
		{
			if (v == a[i])
			{
				isDuplicate = 1;
				break;
			}
		}
		if (isDuplicate)
		{
			PTR = PTR->LINK;
			continue;
		}
		
		top++;
		a[top] = v;
		REP = START;
		while (REP != NULL)
		{
			if (v == REP->info)
			{
				freq++;
			}
			REP = REP->LINK;
		}
		printf("The frequency of %d is %d\n", v, freq);
		freq = 0;
		PTR = PTR->LINK;
	}
}

void main()
{
	int ch;
	printf("\n\t\t-- LINKED LIST --\n");
	do
	{
	st:
		printf("\n\t1 => Display the list\n\t2 => Insert at the beginning\n\t3 => Insert at the end\n\t4 => Insert at a specified position\n\t5 => Delete from the begining\n\t6 => Delete from the end\n\t7 => Delete a particular element\n\t8 => Find frequency of elements in the list\n\t9 => Exit\n Enter your choice : ");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:
			display();
			break;

		case 2:
			insert_begin();
			break;

		case 3:
			insert_end();
			break;

		case 4:
			insert_atele();
			break;

		case 5:
			dlt_begin();
			break;

		case 6:
			dlt_end();
			break;

		case 7:
			dlt_atele();
			break;

		case 8:
			find_freq();
			break;

		case 9:
			printf("You have chose to exit\n");
			break;

		default:
			printf("\nInvalid choice. Please retry...\n");
			break;
		}
	} while (ch != 9);
}
