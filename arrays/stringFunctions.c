#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    strcpy(str2, str1);
    printf("\nCopied string: %s\n", str2);

    if(strcmp(str1, str2) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }


    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    strupr(str1);
    printf("Uppercase string: %s\n", str1);

    strlwr(str1);
    printf("Lowercase string: %s\n", str1);

    return 0;
}