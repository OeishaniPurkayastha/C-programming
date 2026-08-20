#include <stdio.h>

int main() 
{
    int choice;
    float radius, length, width, side, base, height, area;

    printf("Area of Different Shapes\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("4. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) 
    {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter length and width: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter side: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;

        case 4:
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
