#include <stdio.h>
#include <cs50.h>
#include <string.h>

bool compare_strings(string a, string b);

int main(void)
{
    string name = "Bailey";
    string name2 = "Bailey";

    if (compare_strings(name, name2))
    {
      printf("same\n");
    }
    else
    {
      printf("different\n");
    }
}

bool compare_strings(string a, string b)
{
  if (strlen(a) != strlen(b))
  {
    return false;
  }
  for (int i = 0, n = strlen(a); i < n; i++)
  {
    if (a[i] != b[i])
    {
      return false;
    }
  }
  return true;
}
