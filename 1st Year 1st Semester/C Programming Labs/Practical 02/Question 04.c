#include <stdio.h>

int main()
{
    //converts a temperature in Fahrenheit to Celsius

    float fahrenheit, celsius;

    printf("Enter the temperature in degrees Fahrenheit ");
    scanf("%f", &fahrenheit);
    printf("\n");
    celsius= (5.0/9)*(fahrenheit-32);
    printf("Temperature in degrees Celsius = %.2f\n", celsius);

    return 0;
}
