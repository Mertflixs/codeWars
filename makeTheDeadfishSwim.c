int* parse(char* program)
{
  int i;
  int j;
  int sum;
  int *count;
  
  i = 0;
  j = 0;
  sum = 0;
  count = malloc(sizeof(int) * 100);
  while (program[i])
  {
    if (program[i] == 'i')
      sum += 1;
    if (program[i] == 'd')
      sum -= 1;
    if (program[i] == 's')
      sum *= sum;
    if (program[i] == 'o')
    {
      count[j] = sum;
      j++;
    }
    i++;
  }
  return (count);
}