// Find the sum of all even numbers from 2 to N where the value of N is taken as input.
//[For example when N is 10 then the sum is 2+4+6+8+10 = 30]

#include <stdio.h>
void main()
{
    int n;
    int sum = 0;
    int org;

    printf("Enter th number here: ");
    scanf("%d", &org);

    n = org;
    while (n >= 2)
    {
        if (n % 2 == 0)
        {
            sum = sum + n;
        }
        n--;
    }

    /*For loop has the same function*/
    // for (int i = 2; i <= n; i = i+2)
    // {
    //     sum = sum+i;
    // }

    printf("The sum of all even numbers upto %d is %d", org, sum);
}
