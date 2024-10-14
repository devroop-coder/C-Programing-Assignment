#include <stdio.h>
int main()
{

    printf("Kaushik Ranjan Rajkumar\n");

    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Error! Division by zero is not allowed.\n");
            return 1;
        }
        result = num1 / num2;
        printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
        break;
    default:
        printf("Error! Invalid operator. Please enter a valid operator (+, -, *, /).\n");
        return 1;
    }
    return 0;
}