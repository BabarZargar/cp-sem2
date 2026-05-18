#include <stdio.h>

struct book
{
    int id;
    float price;
    char author[20];
};

int main()
{
    float avg, sum = 0;
    int i;

    struct book b1 = {1, 100.0,"Babar"};
    struct book b2 = {.price = 200.0, .id = 1, .author="abc"};
    struct book b3;
    printf("enter details");
    scanf("%d %f %s", &b3.id, &b3.price, b3.author);

    struct book b[3] = {b1, b2, b3};
    for (i=0; i<3; i++)
    {
        sum = sum + b[i].price;
    }
    avg = sum/3;
    printf("avg is %f", avg);
    
}
