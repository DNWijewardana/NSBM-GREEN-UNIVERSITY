#include <stdio.h>

int main()
{
    float n1, n2;

    printf("Input First Number: ");
    scanf("%f", &n1);

    printf("Input Second Number: ");
    scanf("%f", &n2);

    // Compare the numbers and display the highest number
    if(n1 > n2){
        printf("\n%.2f is the highest number\n", n1);
    }
    else{
        printf("\n%.2f is the highest number\n", n2);
    }

    return 0;
}

