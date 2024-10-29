#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Display available operations
    printf("Welcome to the Calculator!\n");
    printf("Choose an operation (+, -, *, /, %%) : ");
    scanf(" %c", &operator);  // Note the space before %c to catch whitespace

    // Ask for two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation based on chosen operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("Result: %.0lf\n", result);
            } else {
                printf("Error: Modulus by zero is undefined.\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
