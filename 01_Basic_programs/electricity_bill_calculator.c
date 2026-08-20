#include <stdio.h>

int main() 
{
    int choice;
    float units, bill;

    printf("===== ELECTRICITY BILL CALCULATOR =====\n");
    printf("1. Domestic\n");
    printf("2. Commercial\n");

    printf("\nEnter connection type: ");
    scanf("%d", &choice);

    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    switch (choice) {
        case 1:
            if (units <= 100)
                bill = units * 3.00;
            else if (units <= 200)
                bill = 100 * 3.00 + (units - 100) * 4.50;
            else
                bill = 100 * 3.00 + 100 * 4.50 + (units - 200) * 6.00;

            printf("Domestic Electricity Bill = Rs. %.2f\n", bill);
            break;

        case 2:
            if (units <= 100)
                bill = units * 5.00;
            else if (units <= 200)
                bill = 100 * 5.00 + (units - 100) * 6.50;
            else
                bill = 100 * 5.00 + 100 * 6.50 + (units - 200) * 8.00;

            printf("Commercial Electricity Bill = Rs. %.2f\n", bill);
            break;

        default:
            printf("Invalid connection type!\n");
    }

    return 0;
}
