#include <stdio.h>

int main() 
{
    float num1, num2, result;
    char operator;

    printf("Enter num1: ");
    scanf("%f",&num1);

    getchar();

    printf("Enter operator: ");
    scanf("%c",&operator);

    printf("Enter num2: ");
    scanf("%f",&num2);

    switch(operator) {

        default:
            printf("Invalid operator");
            break;

        case '+':
            result = num1 + num2;
            printf("result= %f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("result= %f", result);
            break;
        
        case '*':
            result = num1 * num2;
            printf("result= %f", result);
            break;

        case '/':
            if (num2 == 0)
                printf("Division by zero is not allowed");
            
            else
                result = num1 / num2;
                printf("result= %f", result);
            break;
    }
    return 0;
}