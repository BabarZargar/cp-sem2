#include <stdio.h>

int main() 
{
    char c;

    printf("Enter alphabet: ");
    scanf("%c", &c);


    if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
    {
        switch(c) 
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("vowel");
                break;
            default:
                printf("consonant");
        }

    }
    else
        printf("not an alphabet");
    
    return 0;
}