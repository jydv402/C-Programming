#include <stdio.h>
void main()
{
    int n, m, p = 0, i;

    printf("Enter n and m : ");
    scanf("%d %d", &n, &m);

    while (n <= m)
    {

        for (i=1; i <= n; i++)
        {
            if (n % i == 0)
            {
                p = p + 1;
            }
        }

        if (p < 3)
        {
            printf("%d\n", n);

        }
        n++;
    }
}