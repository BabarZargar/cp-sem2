#include <stdio.h>

float per(float m1, float m2, float m3)
{
    float percentage;
    percentage = (m1 + m2 + m3)/3.0;
    return percentage;
}

int main()
{
    float m1, m2, m3, result;

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    result = per(m1, m2, m3);

    printf("Percentage = %f", result);

    return 0;

}
