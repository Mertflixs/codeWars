typedef unsigned long long ull;
ull perimeter(int n) {
  ull dick = 0;
  int i;
  ull first;
  ull second;
  ull next;

  i = 2;
  first = 1;
  second = 1;
  dick += first + second;
  while (i <= n)
  {
    next = first + second;
    dick += next;
    first = second;
    second = next;
    i++;
  }
  return ((4 * dick));
}