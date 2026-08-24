#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 3 && j == 3) {
                goto end;
            }
            printf("i = %d, j = %d\n", i, j);
        }
    }
end:
    printf("Loop ended\n");
    return 0;
}