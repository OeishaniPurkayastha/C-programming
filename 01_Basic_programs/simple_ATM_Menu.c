#include <stdio.h>

int main() {
    int choice;

    printf("1. Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
    scanf("%d", &choice);

    switch(choice) 
    {
        case 1: printf("Balance: Rs.10000"); 
          break;
        case 2: printf("Deposit Selected"); 
          break;
        case 3: printf("Withdraw Selected"); 
          break;
        case 4: printf("Thank You"); 
          break;
        default: 
          printf("Invalid Choice");
    }

    return 0;
}
