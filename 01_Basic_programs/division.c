#include <stdio.h>

int main() {
    int num1, num2;
    float quotient;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    quotient = (float)num1 / num2;

    printf("Quotient = %.2f\n", quotient);

    return 0;
}
