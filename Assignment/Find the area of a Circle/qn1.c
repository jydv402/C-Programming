// Calculate the area (floating point number with two decimal places) of a Circle given it’s radius (integer value). The value of Pi is 3.14.
#include <stdio.h>

void main()
{
    int r;
    float ar;

    printf("\nEnter the radius of the circle: ");
    scanf("%d", &r);

    ar = r * r * 3.14;

    printf("The area of the circle with radius %d is %.2f\n",r, ar);
}