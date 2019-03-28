#include <stdio.h>
#include <cs50.h>


int main(void)
{
  char s[6];
  printf("Input: ");
  scanf("%s", s);

  char t[6];
  printf("Input: ");
  scanf("%s", t);

// %p will print the memory location of s
  printf("s: %p\n", s);
// returns s: 0x7ffee0e86ada
  printf("t: %p\n", t);
// returns t: 0x7ffee0e86ad4

}
