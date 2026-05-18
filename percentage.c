#include <stdio.h>
int main()

{
    float s1, s2, s3, result;
    printf("Enter marks of subjects\n");
    scanf("%f %f %f", &s1, &s2, &s3);

    result =((s1 + s2 + s3)*100)/300;

    printf("The percentage of student is %.1f%%\n", result);
    return 0;
}