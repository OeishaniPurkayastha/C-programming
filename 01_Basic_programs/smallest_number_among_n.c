#include <stdio.h>

int main() {
    int n, num, smallest;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &smallest);

    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num < smallest) {
            smallest = num;
        }
    }

    printf("Smallest number = %d", smallest);

    return 0;
}
