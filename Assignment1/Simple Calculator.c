#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2;
    char op;
    int result;
    float divResult;

    // Ask user for inputs
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Ask user to choose an operation
    printf("Choose an operation (+, -, *, /, %%): ");
    scanf(" %c", &op);

    if (op == '+') {
        result = num1 + num2;
        printf("Result: %d\n", result);
    }
    else if (op == '-') {
        result = num1 - num2;
        printf("Result: %d\n", result);
    }
    else if (op == '*') {
        result = num1 * num2;
        printf("Result: %d\n", result);
    }
    else if (op == '/') {
        if (num2 == 0) {
            printf("Error! Division by zero is not allowed.\n");
        } else {
            divResult = (float)num1 / num2;
            printf("Result: %.2f\n", divResult);
        }
    }
    else if (op == '%') {
        if (num2 == 0) {
            printf("Error! Modulus by zero is not allowed.\n");
        } else {
            result = num1 % num2;
            printf("Result: %d\n", result);
        }
    }
    else {
        printf("Invalid operator selected.\n");
    }

    return 0;
}
