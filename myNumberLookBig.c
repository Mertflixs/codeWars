#include <stdbool.h>

int bas(int a)
{
  int i;
  
  i = 0;
  while (a > 0)
  {
    a = a / 10;
    i++;
  }
  return (i);
}

int toplam(int a, int b)
  {
  int i;
  int top;
  int c;
  
  c = 1;
  top = 0;
  i = 0;
  while (i < b)
    {
		c = c * a;
    top = c;
    i++;
  }
  return (top);
}

bool narcissistic(int num)
{
  int i;
  int x;
  int top;
  int s;
  int temp;
  
  s = 0;
  x = 0;
  top = 0;
  temp = num;
  i = bas(num);
  int a[i];
  while (x < i)
  {
    a[x] = num % 10;
    num = num / 10;
    x++;
  }
  x = 0;
  while (x < i)
    {
    s = a[x];
    top += toplam(s, i);
    x++;
  }
  if (top == temp)
      return (true);
  else 
      return (false);
}