#include <stdio.h>

int main() {
    int base, exponent, i = 1;
    long long result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Please enter a non-negative exponent.\n");
    }
    else if (exponent == 0) {
        printf("%d^0 = 1\n", base);
    }
    else {
        do {
            result = result * base;
            i++;
        } while (i <= exponent);

        printf("%d^%d = %lld\n", base, exponent, result);
    }

    return 0;
}