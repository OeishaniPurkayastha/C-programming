#include <stdio.h>

int main() {
    int choice;

    printf("Traffic Light Menu\n");
    printf("1. Red\n");
    printf("2. Yellow\n");
    printf("3. Green\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) 
    {
        case 1:
            printf("RED Light - STOP");
            break;

        case 2:
            printf("YELLOW Light - GET READY");
            break;

        case 3:
            printf("GREEN Light - GO");
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}
