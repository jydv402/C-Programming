#include <stdio.h>

void main()
{
    int num, temp,tempDig, org, pwr, dig = 0, sum = 0, cube, dig2 = 0;
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
        temp = temp /10;
    }
    printf("%d",sum);
}
