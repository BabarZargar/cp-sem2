#include <stdio.h>

int main() 
{
    float a, b, area;
    int shape;

    printf("Enter shape code square(1), rectangle(2), circle(3), triangle(4): ");
    scanf("%d", &shape);

    switch(shape)
    {
        case 1:
            printf("Enter square side: ");
            scanf("%f", &a);
            area = a*a;
            printf("%f", area);
            break;
        
        case 2:
            printf("Enter rectangle sides: ");
            scanf("%f%f", &a, &b);
            area = a*b;
            printf("%f", area);
            break;

        case 3:
            printf("Enter circle radius: ");
            scanf("%f", &a);
            area = 3.14*a*a;
            printf("%f", area);
            break;

        case 4:
            printf("Enter triangle sides: ");
            scanf("%f%f", &a, &b);
            area = 0.5*a*b;
            printf("%f", area);
            break;

        default:
            printf("Invalid shape code");

    }

    return 0;

}