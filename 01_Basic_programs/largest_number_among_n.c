#include <stdio.h>

int main() {
    int n, num, largest;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &largest);

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > largest) {
            largest = num;
        }
    }

    printf("Largest number = %d", largest);

    return 0;
}
