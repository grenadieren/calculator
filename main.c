#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
 bool loop  = true;
 do {
  int num1;
  int num2;
  printf("Number 1:");
  scanf("%d", &num1);
  printf("Number 2:");
  scanf("%d", &num2);
  int sum1 = num1 + num2;
  int sum2 = num1 - num2;
  int sum3 = num1 * num2;
  int sum4 = num1 / num2;
  printf("%d\n", sum1);
  printf("%d\n", sum2);
  printf("%d\n", sum3);
  printf("%d\n", sum4);
  printf("Order = +,-,*,/\n");
  printf("More complex:\n");
  int comp1 = pow(num1, num2);
  printf("%d]\n", comp1);
  printf("Order = value of x raised by the power of y\n");
 }
 while (loop == true);
}
