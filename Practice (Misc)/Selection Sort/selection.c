#include <stdio.h>

int a[50], pos, i, j, n, temp;

void main()
{
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("a[%d]", i);
		scanf("%d", &a[i]);
	}

	//Code for selection sort
	for (i = 0; i < n - 1; i++)
	{
		pos = i;
		for (j = i+1; j < n; j++)
		{
			if (a[j] <= a[pos])
			{
				pos = j;
			}
		}
		if (i != pos)
		{
			temp = a[pos];
			a[pos] = a[i];
			a[i] = temp;
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("\t%d", a[i]);
	}
}
