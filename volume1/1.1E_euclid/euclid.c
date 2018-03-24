#include <stdio.h>
#include <stdlib.h>

/**
 * Algorithm 1.1E Euclid's algorithm
 *
 * This algorithm calculates the greatest common divider
 * of two integers.
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
  if (argc != 3) {
    printf("usage: %s <m> <n>\n", argv[0]);
    return -1;
  }
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int gcd = euclid(a, b);
  printf("%d\n", gcd);
}