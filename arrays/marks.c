#include <stdio.h>
#define X 3
int main()
{
    float marks[X], sum=0, avg;
    int i;

    for (i=0; i<X; i++)
    {
        printf("Enter your marks: ");
        scanf("%f", &marks[i]);
        sum = sum + marks[i];
        
    }
    
    avg = sum/X;
    printf("sum: %f\n", sum);
    printf("avg: %f", avg);

    return 0;

}