#include <stdio.h>
int main(void) {
    int num1;
    int num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

   printf("Enter second number: ");
   scanf("%d", &num2);


   int total = num1 + num2;
   printf("The total of your numbers is: %d\n", total);

   return 0;
}
