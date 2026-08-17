#include <stdio.h>

int main() 
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\n\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            printf("Sum = %d", a + b);
            break;

        case 2:
            printf("Difference = %d", a - b);
            break;

        case 3:
            printf("Product = %d", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Quotient = %.2f", (float)a / b);
            else
                printf("Division by zero is not possible.");
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
