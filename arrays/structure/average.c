#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    float marks;
    char name[10];

};


int main()
{
    int i;
    float avg, sum = 0;
    struct student s[3];

    for(i=0; i<3; i++)
    {
        printf("Enter details");
        scanf("%d%f%s", &s[i].id, &s[i].marks, s[i].name);
    }

    for (i=0; i<3; i++)
    {
        sum = sum + s[i].marks;
    }
    avg = sum/3;
    printf("avg is %f", avg);
}