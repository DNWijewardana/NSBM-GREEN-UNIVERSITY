#include <stdio.h>

int main()
{
    int n1, n2, n3, largest, smallest;

    // Input three integer numbers
    printf("Enter First Number: ");
    scanf("%d", &n1);
    printf("Enter Seconds Number: ");
    scanf("%d", &n2);
    printf("Enter Third Number: ");
    scanf("%d", &n3);
    printf("\n");

    // Assume the first number is both the largest and smallest
    largest = smallest = n1;

    // Find largest number
    if (n2 > largest) {
        largest = n2;
    }
    if (n3 > largest) {
        largest = n3;
    }

    // Find smallest number
    if (n2 < smallest) {
        smallest = n2;
    }
    if (n3 < smallest) {
        smallest = n3;
    }

    // Display the largest & smallest numbers
    printf("%d is the largest number\n", largest);
    printf("%d is the smallest number\n", smallest);

    return 0;
}
