#include <stdio.h>

int main()
{
 float firstnum, secondnum, average;

 printf("Enter First Number: ");
 scanf("%f", &firstnum);

 printf("Enter Second Number: ");
 scanf("%f", &secondnum);

 average= (firstnum+secondnum)/2;
 printf("\nThe Average is %.2f \n", average);

 return 0;
}
