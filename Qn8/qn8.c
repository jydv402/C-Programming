// Check whether a given number is a strong number or not
//(A strong number is a number in which the sum of the factorial of the digits is equal to the number itself )
//(Eg:- 145=1!+4!+5!=1+24+120=145)

#include <stdio.h>

void main()
{

    int num, orgNum, digit, fact, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid input. Please enter a positive number.\n");
    }

    orgNum = num;
    sum = 0;

    while (num)
    {
        digit = num % 10;
        fact = 1;

        while (digit)
        {
            fact = fact * digit;
            digit--;
        }

        sum = sum + fact;
        num = num / 10;
    }

    // if (sum == orgNum)
    // {
    //     printf("The number is a Strong Number");
    // }
    // else
    // {
    //     printf("The number is not a Strong Number");
    // }

    sum == orgNum
        ? printf("%d is a Strong Number",orgNum)
        : printf("%d is not a Strong Number",orgNum);
}