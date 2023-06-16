#include <stdio.h>
int main() {
    float num1, num2, result;
    char operator;
    printf("Enter Number 1: ");
    scanf("%f", &num1);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter Number 2: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2; break;
        case '-':
            result = num1 - num2; break;
        case '*':
            result = num1 * num2; break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero.\n");
                return 0;
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 0;
    }

    printf("Result: %f\n", result);
    return 0;
}
