#include <stdio.h>

void main()
{
    struct pol
    {
        int coef;
        int exp;
    } p[10];

    int i, n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the coefficient and exponent: ");
        scanf("%d %d", &p[i].coef, &p[i].exp);
    }

    for (i = 0; i < n - 1; i++)
    {
        printf("%d x^%d + ", p[i].coef, p[i].exp);
    }
    printf("%d x^%d", p[i].coef, p[i].exp);
}