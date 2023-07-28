#include <stdio.h>

int main()
{
 int byear, age;
 char sname[30];

 printf("Enter Student Name: ");
 scanf("%s", &sname);

 printf("Enter Birth Year: ");
 scanf("%d", &byear);

 //Calculate age and display the name and age
 age= 2023-byear;
 printf("\nName: %s\nAge: %d years old\n", sname, age);

 return 0;
}
