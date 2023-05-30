// Read a mark and display grade based on the mark
// Mark >= 90 – Display O
// Mark >=80 and Mark < 90 – Display A
// Mark >= 70 and Mark <80 – Display B
// Others – Display Slow Learners
// Negative – Display Invalid

#include <stdio.h>

void main()
{
    int mark;

    printf("\nEnter the mark: ");
    scanf("%d", &mark);

    if (mark < 0)
    {
        printf("Invalid\n");
    }
    else if (mark >= 90)
    {
        printf("O\n");
    }
    else if (mark >= 80 && mark < 90)
    {
        printf("A\n");
    }
    else if (mark >= 70 && mark < 80)
    {
        printf("B\n");
    }
    else
    {printf("Slow Learners\n");}
}
