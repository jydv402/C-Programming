#include <stdio.h>

void main()
{
    char s[50];

    printf("Enter the string or sentence: \n\t");
    //use the "%[^\n]" scanset to read strings with whitespaces
    scanf("%[^\n]", s);

    printf("\nThe string is\n\n\t%s",s);
}