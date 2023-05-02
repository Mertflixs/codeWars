#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>


bool  check(char c, char *t_text, int i)
{
  i++;
  while (t_text[i])
  {
    if (c == t_text[i])
      return (true);
    i++;
  }
  return (false);
}

char  *check_two(char c, char *t_text)
{
  int i;

  i = 0;
  while (t_text[i])
  {
    if (t_text[i] == c)
      t_text[i] = ' ';
    i++;
  }
  return (t_text);
}

char *copy(const char *text)
{
  int i;
  char *a;

  i = 0;
  a = malloc(sizeof(char) * (strlen(text) + 1));
  while (text[i])
  {
    a[i] = text[i];
    i++;
  }
  a[i] = '\0';
  return (a);
}

char *buyut(char *t_text)
{
  int i;

  i = 0;
  while (t_text[i])
  {
    if (t_text[i] >= 97 && t_text[i] <= 122)
      t_text[i] -= 32;
    i++;
  }
  return (t_text);
}

size_t duplicate_count(const char *text) {

  int i;
  int x;
  size_t sayac;
  char *temp;
  char *t_text;
  
  x = 0;
  sayac = 0;
  t_text = copy(text);
  t_text = buyut(t_text);
  for (i = 0; i < strlen(text); i++)
  {
    if (check(t_text[i], t_text, i)  && t_text[i] != ' ')
    {
      sayac++;
      t_text = check_two(t_text[i], t_text);
    }
  }
  return (sayac);
}