#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int x = 45;
    int y = 30;
    int result = add(x, y);
    printf("The sum is: %d\n", result);
    return 0;
}