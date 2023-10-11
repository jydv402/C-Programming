#include <stdio.h>

void main()
{
	int q[30], f = -1, r = -1, x, y, i, ch, ch2, n;

	printf("Enter the size of the queue: ");
	scanf("%d", &n);

	do
	{
		printf("\n\n\t1 => Input Restricted Queue\n\t2 => Output Restricted Queue\n\t3 => Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);
		f = r = -1;

		switch (ch)
		{
		case 1: // Input Restricted Queue
			do
			{
				printf("\n\n\t1 => Insert element through Rearend\n\t2 => Delete element from Frontend\n\t3 => Delete element from Rearend\n\t4 => Display the Queue\n\t5 => Exit to main menu\n");
				printf("Enter your choice: ");
				scanf("%d", &ch2);

				switch (ch2)
				{
				case 1:
					if (r == n - 1 && f == 0 || f == r + 1)
					{
						printf("\nQueue Overflow");
						break;
					}
					else
					{
						if (r == n - 1)
						{
							r = 0;
						}
						else
						{
							r++;
						}
						printf("\nEnter the element: ");
						scanf("%d", &x);
						q[r] = x;
						if (f == -1)
						{
							f = 0;
						}
						break;
					}

				case 2: // Deletion through Frontend
					if (f == -1)
					{
						printf("\nQueue Underflow");
						break;
					}
					else
					{
						y = q[f];
						printf("\nThe deleted element is: %d", y);
						if (f == r)
						{
							f = r = -1;
						}
						else if (f == n - 1)
						{
							f = 0;
						}
						else
						{
							f++;
						}
						break;
					}

				case 3: // Deletion through Rearend
					if (r == -1)
					{
						printf("\nQueue Underflow");
						break;
					}
					else
					{
						y = q[r];
						printf("\nThe deleted element is: %d", y);
						if (f == r)
						{
							f = r = -1;
						}
						else if (r == 0)
						{
							r = n - 1;
						}
						else
						{
							r--;
						}
						break;
					}
				case 4: // Display
					if (f == -1)
					{
						printf("\nQueue Underflow");
						break;
					}
					else
					{
						printf("\nThe elements of the circular queue are:\n\t");
						if (f <= r)
						{
							for (i = f; i <= r; i++)
							{
								printf("%d\t", q[i]);
							}
						}
						if (f > r)
						{
							for (i = f; i < n; i++)
							{
								printf("%d\t", q[i]);
							}
							for (i = 0; i <= r; i++)
							{
								printf("%d\t", q[i]);
							}
						}
						break;
					}

				case 5:
					printf("\nExiting to main menu...");
					break;
				}

			} while (ch2 != 5);
			break;

		case 2: // Output restricted
			do
			{
				printf("\n\n\t1 => Insert element through Rearend\n\t2 => Insert element through Frontend\n\t3 => Delete element from Frontend\n\t4 => Display the Queue\n\t5 => Exit to main menu\n");
				printf("Enter your choice: ");
				scanf("%d", &ch2);

				switch (ch2)
				{
				case 1: // Insert through rear
					if (r == n - 1 && f == 0 || f == r + 1)
					{
						printf("\nQueue Overflow");
						break;
					}
					else
					{
						if (r == n - 1)
						{
							r = 0;
						}
						else
						{
							r++;
						}
						printf("\nEnter the element: ");
						scanf("%d", &x);
						q[r] = x;
						if (f == -1)
						{
							f = 0;
						}
						break;
					}

				case 2: // Insert through front
					if (r == n - 1 && f == 0 || f == r + 1)
					{
						printf("\nQueue Overflow");
						break;
					}
					else
					{
						if (f == -1 || f == 0)
						{
							f = n - 1;
						}
						else
						{
							f--;
						}
						printf("\nEnter the element: ");
						scanf("%d", &x);
						q[f] = x;
						if (r == -1)
						{
							r = n - 1;
						}
						break;
					}
				case 3: // Delete from front
					if (f == -1)
					{
						printf("\nQueue Underflow");
						break;
					}
					else
					{
						y = q[f];
						printf("\nThe deleted element is: %d", y);
						if (f == r)
						{
							f = r = -1;
						}
						else if (f == n - 1)
						{
							f = 0;
						}
						else
						{
							f++;
						}
						break;
					}

				case 4: // Display
					if (f == -1)
					{
						printf("\nQueue Underflow");
						break;
					}
					else
					{
						printf("\nThe elements of the circular queue are:\n\t");
						if (f <= r)
						{
							for (i = f; i <= r; i++)
							{
								printf("%d\t", q[i]);
							}
						}
						if (f > r)
						{
							for (i = f; i < n; i++)
							{
								printf("%d\t", q[i]);
							}
							for (i = 0; i <= r; i++)
							{
								printf("%d\t", q[i]);
							}
						}
						break;
					}

				case 5:
					printf("\nExiting to main menu...");
					break;
				}

			} while (ch2 != 5);
			break;

		case 3:
			printf("You have chose to exit...\n");
			break;
		}
	} while (ch != 3);
}
