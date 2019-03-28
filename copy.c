#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// add arguments to main to pass in user string
int main(int argc, char *argv[]) {
  char *s = argv[1];

// this copies the address of s into t
  char *t = s;

  if (strlen(t) > 0)
  {
    t[0] = toupper(t[0]);
  }

// prints both strings capitalized bc they both point to the same memory location 
  printf("%s\n", s);
  printf("%s\n", t);
}
