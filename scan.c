#include <stdio.h>

// get an int from a user

int main(void) {
  int x;
  printf("x: ");
  // &x gets me the address of the int
  scanf("%i", &x);
  printf("x: %i\n", x);

// states total amount of memory needed
  char s[6];
  printf("Input: ");
  // don't need to use & to get address of the string
  scanf("%s", s);
  printf("Input: %s\n", s);
}
