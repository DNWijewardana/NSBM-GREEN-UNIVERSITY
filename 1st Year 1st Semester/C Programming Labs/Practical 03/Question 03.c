#include <stdio.h>

int main()
{
    char ename[100];
    float bsalary, increment, nsalary;

    // Input employee name
    printf("Enter employee name: ");
    fgets(ename, sizeof(ename), stdin);

    // Input basic salary
    printf("Enter basic salary: ");
    scanf("%f", &bsalary);

    // Calculate increment based on basic salary
    if (bsalary < 5000) {
        increment = 0.05 * bsalary;
    } else if (bsalary >= 5000 && bsalary < 10000) {
        increment = 0.10 * bsalary;
    } else {
        increment = 0.15 * bsalary;
    }

    // Calculate new salary
    nsalary = bsalary + increment;

    // Display employee details and new salary
    printf("\nEmployee Name: %s", ename);
    printf("Basic Salary: %.2f\n", bsalary);
    printf("New Salary: %.2f\n", nsalary);

    return 0;
}

