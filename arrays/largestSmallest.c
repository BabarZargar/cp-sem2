#include <stdio.h>
#define X 3

int main()
{
    int arr[X], i, largest, smallest;

    for(i =0; i < X; i++)
    {
        printf("enter value: ");
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (i=1; i<X; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    smallest = arr[0];
    for (i=1; i<X; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("largest no is: %d\n", largest);
    printf("smallest no is: %d", smallest);

    return 0;
}