#include <cs50.h>
#include <stdio.h>
#include <string.h>

#include "struct.h"

int main(void)
{
  int enrollment = 3;
  //array of type students
  student students[enrollment];

  for (int i = 0; i< enrollment; i++)
  {
    char s[24];
    char t[24];

    printf("Student Name: ");
    scanf("%s\n", s);
    students[i].name = s;

    printf("Dorm: ");
    scanf("%s\n", t);
    students[i].dorm = t;
    printf("%s\n", students[i].name);
    printf("%s\n", students[i].dorm);
  }

  for (int i = 0; i < enrollment; i++)
  {
    char *name = students[i].name;
    char *dorm = students[i].dorm;
    printf("Name: %s, Dorm: %s\n", name, dorm);
  }
}
