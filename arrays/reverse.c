#include <stdio.h>
#define X 3
int main()
{
    int str1[X], i;

    for(i=0; i<X; i++)
    {
        printf("enter element: ");
        scanf("%d", &str1[i]);
    }

    for (i=(X-1); i>=0; i--)
    {
        printf("%d", str1[i]);
    }

}
