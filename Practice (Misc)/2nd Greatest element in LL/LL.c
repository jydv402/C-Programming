#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node* link;
} *newnode,*start=NULL,*ptr;
void main()
{
	int n,t1,t2,i=0,res,x;
	printf("Enter the size of the list-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the element to be stored-");
		scanf("%d",&x);
		newnode->info=x;
		newnode->link=NULL;
		if(start==NULL)
		{
			ptr=start=newnode;
		}
		else
		{
			ptr->link=newnode;
			ptr=newnode;
		}
	}
	ptr=start;
    t1 = t2 = ptr -> info;
	while(ptr!=NULL)
	{
		if((ptr->info)>t1)
		{
			t2=t1;
			t1=ptr->info;
			ptr=ptr->link;
		}
		else if((ptr->info)>t2 && (ptr -> info) != t1)
		{
			t2=ptr->info;
			ptr=ptr->link;
		}
		else
		{
			ptr=ptr->link;
		}
	}
	printf("Largest number in the set %d\n",t1);
	printf("Second largest number in the set %d\n",t2);
	res= t2*t2;
	printf("The square of %d is %d",t2,res);
}