#include <stdio.h>

int main()
{
    int arr[3][3];
    int i, j;
    int even = 0, odd = 0;


    printf("Enter elements of 2D array:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }


    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(arr[i][j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }

    printf("Frequency of even numbers = %d\n", even);
    printf("Frequency of odd numbers = %d\n", odd);

    return 0;
}