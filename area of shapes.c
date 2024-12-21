#include <stdio.h>
#define PI 3.14

int main() {
    int choice;
    printf("Menu:\n1. Rectangle\n2. Circle\n3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int length, breadth, area;
        printf("Enter the length and breadth: ");
        scanf("%d %d", &length, &breadth);
        area = length * breadth;
        printf("Rectangle area: %d\n", area);
    } else if (choice == 2) {
        int radius;
        float area;
        printf("Enter the radius: ");
        scanf("%d", &radius);
        area = PI * radius * radius;
        printf("Circle area: %.2f\n", area);
    } else if (choice == 3) {
        float base, height, area;
        printf("Enter the base and height: ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Triangle area: %.2f\n", area);
    } else {
        printf("Invalid choice. Exiting program.\n");
    }

    return 0;
}
