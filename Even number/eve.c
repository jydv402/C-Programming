#include <stdio.h>
void main()
{
    int num;
    printf("Enter the number here: ");
    scanf("%d",&num);

    num % 2== 0
        ? printf("The number is even")
        : printf("The number is odd");
}