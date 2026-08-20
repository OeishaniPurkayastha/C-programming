#include <stdio.h>

int main() {
    int n, num, sum = 0;
    float average;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        sum += num;
    }

    average = (float)sum / n;

    printf("Average = %.2f", average);

    return 0;
}
