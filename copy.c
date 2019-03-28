#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// add arguments to main to pass in user string
int main(int argc, char *argv[]) {
  char *s = argv[1];

// this copies the address of s into t
if (!s)
{
  return 1;
}
// malloc = memory allocate
  char *t = malloc(strlen(s) + 1);

  if(!t)
  {
    return 1;
  }

  for (int i = 0, n= strlen(s);i <= n; i++)
  {
    if (strlen(t) > 0)
    {
      t[0] = toupper(t[0]);
    }
      t[i] = s[i];
  }

// t now capitalized, s remains lowercase
  printf("%s\n", s);
  printf("%s\n", t);
}
