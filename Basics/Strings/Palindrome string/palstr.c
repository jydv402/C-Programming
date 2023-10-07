#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int i, j, isPal = 1;
    char str[99], rev[99];

    printf("Enter the string : ");
    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }

    i = strlen(str) - 1;
    j = 0;

    while (i > -1)
    {
        rev[j] = str[i];
        j++;
        i--;
    }
    rev[j] = '\0';

    for (i = 0; i < strlen(str); i++)
    {
        if (rev[i] != str[i])
        {
            isPal = 0;
            break;
        }
    }

    isPal == 1
        ? printf("The word is a PALINDROME %s",str)
        : printf("The word is not a PALINDROME");

}