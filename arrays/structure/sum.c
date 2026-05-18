#include <stdio.h>

int sum(int arr[])
{
    int i, sum = 0;

    for(i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int arr[10], i, result;


    printf("Enter array elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    result = sum(arr);

    printf("Sum of array elements = %d", result);

    return 0;
}