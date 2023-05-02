#include <stddef.h> // NULL

int upper(const char *str)
{
  int i;
  int u;
  
  i = 0;
  u = 0;
  while (str[i])
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
      u++;
    i++;
  }
  return (i);
}

char* solution(const char *camelCase) {
  int i;
  char *str;
  int a;
  int j;
  
  a = 0;
  j = 0;
  i = upper(camelCase);
  i += strlen(camelCase);
  str = (char *)malloc(sizeof(char) * i + 1);
  while (camelCase[a])
  {
    if (camelCase[a] >= 'A' && camelCase[a] <= 'Z')
    {
      str[j] = ' ';
      j++;
    }
    str[j] = camelCase[a];
    a++;
    j++;
  }
  str[j] = '\0';
  return (str);
}