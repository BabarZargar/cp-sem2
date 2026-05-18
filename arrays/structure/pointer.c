#include <stdio.h>
int increment(int *p)
{
    (*p)++;
}

int main()
{
    int n;

    printf("enter n");
    scanf("%d", &n);

    increment(&n);

    printf("incremented value: %d", n);

    return 0;
}