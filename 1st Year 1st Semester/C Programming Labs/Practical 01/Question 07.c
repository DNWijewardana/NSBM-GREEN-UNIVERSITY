#include <stdio.h>

int main()
{
 int no1, no2;

 printf("Enter First Number ");
 scanf("%d", &no1);

 printf("Enter Second Number ");
 scanf("%d", &no2);
 printf("\n");

 // output before swap
 printf("First Number is: %d\nSecond Number is: %d", no1,no2);
 printf("\n\n");

 //swap numbers
 int x=no1;
 no1=no2, no2=x;

 //output after swap
 printf("First Number is: %d\nSecond Number is: %d\n", no1,no2);
 return 0;
}
