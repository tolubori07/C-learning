#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter the operator you wish to use: ");
    scanf(" %c", &operator);  // Notice the space before %c to skip any leading whitespace

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("Enter number 2: ");
    scanf("%lf", &num2);

    switch (operator) {
    case '+':
        result = num1 + num2;
        printf("The result of the addition is: %lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("The result of the subtraction is: %lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("The result of the multiplication is: %lf\n", result);
        break;
    case '/':
        if (num2 == 0) {
            printf("Error: Division by zero is undefined.\n");
        } else {
            result = num1 / num2;
            printf("The result of the division is: %lf\n", result);
        }
        break;
    case '^':
        result = pow(num1, num2);
        printf("The result of the exponentiation is: %lf\n", result);
        break;
    default:
        printf("Not a valid operator\n");
    }

    return EXIT_SUCCESS;
}
