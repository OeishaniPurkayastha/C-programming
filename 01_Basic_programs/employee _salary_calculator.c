#include <stdio.h>

int main() 
{
    int choice;
    float basicSalary, hra, da, bonus, grossSalary;

    printf("Employee Salary Calculator\n");
    printf("1. Manager\n");
    printf("2. Developer\n");
    printf("3. Clerk\n");
    printf("Enter Employee Type: ");
    scanf("%d", &choice);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    switch(choice) 
{
        case 1: // Manager
            hra = 0.20 * basicSalary;
            da = 0.15 * basicSalary;
            bonus = 5000;
            break;

        case 2: // Developer
            hra = 0.15 * basicSalary;
            da = 0.10 * basicSalary;
            bonus = 3000;
            break;

        case 3: // Clerk
            hra = 0.10 * basicSalary;
            da = 0.05 * basicSalary;
            bonus = 1000;
            break;

        default:
            printf("Invalid Employee Type!\n");
            return 0;
    }

    grossSalary = basicSalary + hra + da + bonus;

    printf("\n----- Salary Details -----\n");
    printf("Basic Salary : %.2f\n", basicSalary);
    printf("HRA          : %.2f\n", hra);
    printf("DA           : %.2f\n", da);
    printf("Bonus        : %.2f\n", bonus);
    printf("Gross Salary : %.2f\n", grossSalary);

    return 0;
}
