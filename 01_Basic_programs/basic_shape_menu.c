#include <stdio.h>

int main() {
    int choice;

    printf("1. Circle\n2. Rectangle\n3. Triangle\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Circle Selected"); 
          break;
        case 2: printf("Rectangle Selected"); 
          break;
        case 3: printf("Triangle Selected"); 
          break;
        default: 
          printf("Invalid Choice");
    }

    return 0;
}
