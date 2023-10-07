#include <stdio.h>
void main()
{
    int n, i, a[100], sum = 0, avg = 0;

    printf("Enter the array size : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    avg = sum/n;
    printf("Sum = %d\n",sum);
    printf("Average = %d",avg);
}