#include <stdio.h>
void inc(int);
int main()
{
    int x = 10;
    printf("%d\n", x);
    inc(x);
    printf("%d\n", x);
    return 0;
}

void inc(int x)
{
    x = x + 10;
    printf("%d\n", x);
}