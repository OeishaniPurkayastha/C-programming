#include <stdio.h>
int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    // Implicit typecasting
    float result1 = a + b; // int is converted to float
    printf("Result of a + b: %f\n", result1);

    // Explicit typecasting
    int result2 = (int)b + a; // float is explicitly converted to int
    printf("Result of (int)b + a: %d\n", result2);

    // Typecasting char to int
    int result3 = (int)c + a; // char is converted to int
    printf("Result of (int)c + a: %d\n", result3);

    return 0;
}
