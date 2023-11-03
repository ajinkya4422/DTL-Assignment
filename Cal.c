#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, ^ for exponentiation, h for hexadecimal conversion): ");
    scanf(" %c", &operator);

    if (operator != 'h') {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '^':
            result = pow(num1, num2);
            printf("%.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 'h':
            printf("Enter a decimal number: ");
            scanf("%lf", &num1);
            int hexValue = (int)num1;
            printf("%.2lf in hexadecimal is: %X\n", num1, hexValue);
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
