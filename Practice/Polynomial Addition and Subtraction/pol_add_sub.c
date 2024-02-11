#include <stdio.h>
#include <stdlib.h>

struct node
{
	int coeff;
	int exp;
	struct node *link;
} *START = NULL, *START1 = NULL, *START2 = NULL, *START3 = NULL, *PTR, *PTR1, *PTR2, *PTR3, *NEWNODE;

struct node *Create()
{
	START = NULL;
	int i = 1, c, e, N;
	printf("\nEnter the number of terms: ");
	scanf("%d", &N);
	printf("\nEnter the terms: ");
	while (i <= N)
	{
		NEWNODE = (struct node *)malloc(sizeof(struct node));

		printf("\n\tCoefficient : ");
		scanf("%d", &c);
		printf("\tExponential term : ");
		scanf("%d", &e);

		NEWNODE->coeff = c;
		NEWNODE->exp = e;
		NEWNODE->link = NULL;

		if (START == NULL)
		{
			START = PTR = NEWNODE;
		}
		else
		{
			PTR->link = NEWNODE;
			PTR = NEWNODE;
		}
		i++;
	}

	return START;
}

void main()
{
	int isAdd;
	printf("\nEnter the terms of the first polynomial.\n");
	START1 = Create();
	printf("\nEnter the terms of the second polynomial.\n");
	START2 = Create();
	PTR1 = START1;
	PTR2 = START2;
	START3 = NULL;

	printf("\nOperation\n\t0 - Sub\n\t1 - Add\nChoice: ");
	scanf("%d", &isAdd);

	printf("\nFirst Polynomial is: \n");
	while (PTR1->link != NULL)
	{
		printf(" (%d x^%d) +", PTR1->coeff, PTR1->exp);
		PTR1 = PTR1->link;
	}
	printf(" (%d x^%d)\n\n", PTR1->coeff, PTR1->exp);

	printf("\nSecond Polynomial is : \n");
	while (PTR2->link != NULL)
	{
		printf(" (%d x^%d) +", PTR2->coeff, PTR2->exp);
		PTR2 = PTR2->link;
	}
	printf(" (%d x^%d)\n\n", PTR2->coeff, PTR2->exp);

	/*The PTR values are changed
	during display, so we must
	reinitialise it*/

	PTR1 = START1;
	PTR2 = START2;

	while (PTR1 != NULL && PTR2 != NULL)
	{
		NEWNODE = (struct node *)malloc(sizeof(struct node));
		NEWNODE -> link = NULL;

		if (PTR2->exp > PTR1->exp)
		{
			NEWNODE->coeff = PTR2->coeff;
			NEWNODE->exp = PTR2->exp;
			PTR2 = PTR2->link;	
		}
		else if (PTR1->exp > PTR2->exp)
		{
			NEWNODE->coeff = PTR1->coeff;
			NEWNODE->exp = PTR1->exp;
			PTR1 = PTR1->link;
		}
		else
		{
			if (isAdd)
			{
				NEWNODE->coeff = PTR1->coeff + PTR2->coeff;
			}
			else
			{
				NEWNODE->coeff = PTR1->coeff - PTR2->coeff;
			}
			NEWNODE->exp = PTR1->exp;
			PTR1 = PTR1->link;
			PTR2 = PTR2->link;
		}

		if (START3 == NULL)
		{
			START3 = PTR3 = NEWNODE;
		}
		else
		{
			PTR3->link = NEWNODE;
			PTR3 = NEWNODE;
		}
	}

	while (PTR1 != NULL)
	{
		NEWNODE = (struct node *)malloc(sizeof(struct node));
		NEWNODE -> link = NULL;

		NEWNODE->coeff = PTR1->coeff;
		NEWNODE->exp = PTR1->exp;
		PTR1 = PTR1->link;

		PTR3->link = NEWNODE;
		PTR3 = NEWNODE;
	}

	while (PTR2 != NULL)
	{
		NEWNODE = (struct node *)malloc(sizeof(struct node));
		NEWNODE -> link = NULL;

		NEWNODE->coeff = PTR2->coeff;
		NEWNODE->exp = PTR2->exp;
		PTR2 = PTR2->link;

		PTR3->link = NEWNODE;
		PTR3 = NEWNODE;
	}

	printf("\nThe resultant polynomial is : \n");
	PTR3 = START3;
	while (PTR3->link != NULL)
	{
		printf(" (%d x^%d) +", PTR3->coeff, PTR3->exp);
		PTR3 = PTR3->link;
	}
	printf(" (%d x^%d)\n\n", PTR3->coeff, PTR3->exp);
}
