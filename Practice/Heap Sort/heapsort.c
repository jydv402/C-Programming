#include<stdio.h>
void Max_Heapify(int A[],int n,int i)
{
	int largest = i;
	int l = 2 * i;
	int r = (2*i)+1;
	int temp;
	while(l<n && A[l]>A[largest])
	{
		largest = l;
	}
	while(r<n && A[r]>A[largest])
	{
		largest = r;
	}
	if(largest!=i)
	{
		temp = A[largest];
		A[largest]=A[i];
		A[i]=temp;
		Max_Heapify(A,n,largest);
    }
}	
void heapsort(int A[],int n)
{
	int i,temp;
	for(i = (n/2)-1 ; i>=0 ; i--)
	{
		Max_Heapify(A,n,i);
	}
	for(i=n-1;i>=0;i--)
	{
		temp=A[0];
		A[0]=A[i];
		A[i]=temp;
		Max_Heapify(A,i,0);
	}
}		
void main()
{
	int A[15],n,i=0;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&A[i]);
	}
	printf("ORIGINAL ARRAY: \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",A[i]);
	}
	heapsort(A,n);
	printf("Sorted array is :");
	for(i=0;i<n;i++)
	{
		printf("%d \t",A[i]);
	}
}