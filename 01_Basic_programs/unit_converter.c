#include <stdio.h>

int main() 
{
    int choice;
    float value, result;

    printf("===== UNIT CONVERTER =====\n");
    printf("1. Kilometer to Meter\n");
    printf("2. Meter to Kilometer\n");
    printf("3. Celsius to Fahrenheit\n");
    printf("4. Fahrenheit to Celsius\n");
    printf("5. Kilogram to Gram\n");
    printf("6. Gram to Kilogram\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            result = value * 1000;
            printf("%.2f km = %.2f m\n", value, result);
            break;

        case 2:
            result = value / 1000;
            printf("%.2f m = %.2f km\n", value, result);
            break;

        case 3:
            result = (value * 9 / 5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", value, result);
            break;

        case 4:
            result = (value - 32) * 5 / 9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", value, result);
            break;

        case 5:
            result = value * 1000;
            printf("%.2f kg = %.2f g\n", value, result);
            break;

        case 6:
            result = value / 1000;
            printf("%.2f g = %.2f kg\n", value, result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
