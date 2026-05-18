#include <stdio.h>
int fibo(int);
int main()
{
    int i, n,r;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        r = fibo(i);
        printf("%d", r);
    }
        return 0;
}

int fibo(int i)
{
    if (i==1)
        return 0;
    else if (i==2)
        return 1;
    else
        return (fibo(i-1) + fibo(i-2));
}