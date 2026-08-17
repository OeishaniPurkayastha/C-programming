#include <stdio.h>

int main() 
{
    int choice;
    float amount, result;

    printf("===== CURRENCY CONVERTER =====\n");
    printf("1. USD to INR\n");
    printf("2. INR to USD\n");
    printf("3. EUR to INR\n");
    printf("4. INR to EUR\n");
    printf("5. GBP to INR\n");
    printf("6. INR to GBP\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%f", &amount);

    switch (choice) {
        case 1:
            result = amount * 95.2;
            printf("%.2f USD = %.2f INR\n", amount, result);
            break;

        case 2:
            result = amount / 95.2;
            printf("%.2f INR = %.2f USD\n", amount, result);
            break;

        case 3:
            result = amount * 110.8;
            printf("%.2f EUR = %.2f INR\n", amount, result);
            break;

        case 4:
            result = amount / 110.8;
            printf("%.2f INR = %.2f EUR\n", amount, result);
            break;

        case 5:
            result = amount * 127.5;
            printf("%.2f GBP = %.2f INR\n", amount, result);
            break;

        case 6:
            result = amount / 127.5;
            printf("%.2f INR = %.2f GBP\n", amount, result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
