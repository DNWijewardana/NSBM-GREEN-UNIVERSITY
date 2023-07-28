#include <stdio.h>

#define PI 3.14159

int main()
{
    float radius, diameter, circumference, area;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("\n");

    // Calculate the diameter
    diameter = 2 * radius;

    // Calculate the circumference
    circumference = 2 * PI * radius;

    // Calculate the area
    area = PI * radius * radius;

    // Print the results
    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}
