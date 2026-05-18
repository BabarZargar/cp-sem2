#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;

    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("enter elemets of a and b: ");
            scanf("%d%d", &a[i][j], &b[i][j]);
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}