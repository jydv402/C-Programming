#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f1, *f2;
    char str[30];

    f1 = fopen("tt.txt", "r");
    if (f1 == NULL)
    {
        printf("Unable to open input file.\n");
        return 1;
    }

    f2 = fopen("new.txt", "w");
    if (f2 == NULL)
    {
        printf("Unable to open output file.\n");
        fclose(f1); // Close the input file before exiting
        return 1;
    }

    while (fscanf(f1, "%s", str) == 1)
    {
        if (strcmp(str, "Cars") == 0)
            fprintf(f2, "Scooters ");
        else
            fprintf(f2, "%s ", str);
    }

    fclose(f1);
    fclose(f2);

    printf("Replaced String Successfully\n");

    return 0;
}
