#include <stdio.h>

/**
 * Calculate greatest common divider
 */
int euclid(int m, int n)
{
  int r = m % n;
  while (r)
  {
    m = n;
    n = r;
    r = m % n;
  }
  
  return n;
}

int main(int argc, char * argv[])
{
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int gcd = euclid(a, b);
  printf("%d\n", gcd);
}