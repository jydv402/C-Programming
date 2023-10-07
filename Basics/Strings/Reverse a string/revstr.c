#include <stdio.h>
#include <string.h>

void main()
{
    int i,j=0;
    char str[99],rev[99];

    printf("Enter the string: ");
    gets(str);

    for ( i = strlen(str)-1; i > -1; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';

    printf("Original string =>\n\n\t%s\nReversed string =>\n\t%s",str,rev);
}