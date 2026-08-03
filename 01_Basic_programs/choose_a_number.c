#include <stdio.h>

int main() 
{
    int choice;

    printf("Choose a number (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose One.\n");
            break;

        case 2:
            printf("You chose Two.\n");
            break;

        case 3:
            printf("You chose Three.\n");
            break;

        case 4:
            printf("You chose Four.\n");
            break;

        case 5:
            printf("You chose Five.\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
