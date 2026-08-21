#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
            sum += j;
        }
        printf("\n");
    }

    printf("\nSum of all pattern elements = %d\n", sum);

    return 0;
}