#include <stdio.h>

void main()
{

    int num, org, pwr, temp, sum = 0;
    int dig = 0, dig2 = 0, tempDig;

    printf("Enter the number here: ");
    scanf("%d", &num);

    org = num;
    temp = num;

    while (num > 0)
    {
        num = num / 10;
        dig++;
    }

    while (temp > 0)
    {
        dig2 = temp % 10;
        pwr = 1;
        tempDig = dig;
        while (tempDig > 0)
        {
            pwr = pwr * dig2;
            tempDig--;
        }
        sum = sum + pwr;
        temp = temp / 10;
    }
    
    sum == org
    ?printf("%d is an Armstrong number.",org)
    :printf("%d is not an Armstrong number.",org);
}
