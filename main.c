#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void minus() {
  int num1;
  int num2;
  printf("Enter number 1:");
  scanf("%d", &num1);
  printf("Enter number 2:");
  scanf("%d", &num2);
  printf("Here is your result: \n");
  int res1 = num1 - num2;
  printf("%d", res1);
}

void plus() {
  int num1;
  int num2;
  printf("Enter number 1:");
  scanf("%d", &num1);
  printf("Enter number 2:");
  scanf("%d", &num2);
  printf("Here is your result: \n");
  int res2 = num1 + num2;
  printf("%d", res2);
}

int main() {
bool blah = true;
while (blah == true) {
  char operation[2];
  printf("Enter your operation>\n");
  scanf("%s", operation);
if (strcmp(operation, "-") == 0) {
  minus();
}

if (strcmp(operation, "+") == 0) {
  plus();
}

}
}
