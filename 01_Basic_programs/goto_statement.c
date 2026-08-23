#include <stdio.h>

int main() {
    int i = 0;
    
    loop: // Label for the loop
    if (i < 5) {
        printf("i = %d\n", i);
        i++;
        goto loop; // Jump to the label
    }
    
    return 0;
}