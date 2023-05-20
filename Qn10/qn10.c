// Calculate the Sum of First and the Last Digit of a given Number.
// For example if the number is 1234 the result is 1+4 = 5.

#include <stdio.h>
void main()
{
    int num;
    int fd, ld;
    int sum = 0;

    printf("Enter the number here: ");
    scanf("%d", &num);

    fd = num;
    while (fd >= 10)
    {
        fd = fd / 10;
    }

    ld = num % 10;

    printf("\nThe first digit is %d\n", fd);
    printf("The second digit is %d\n", ld);

    sum = ld + fd;

    printf("\nSum of the 1st and 2nd digits = %d", sum);
}