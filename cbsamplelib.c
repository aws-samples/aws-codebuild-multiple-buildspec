#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int is_prime(unsigned long n)
{
  unsigned long r, f;
  if ( n == 1 )
    return 0;
  else if ( n == 2 || n == 3 || n == 5 || n == 7)
      return 1;
  else if ( n % 2 == 0 || n % 3 == 0 )
      return 0;
  else
  {
    r = sqrt(n);
    f = 5;
    while ( f <= r ) {
      if ( n % f == 0 )
          return 0;
      if ( n % (f + 2) == 0 )
          return 0;
      f = f + 6;
    }
    return 1;
  }
}

unsigned long sum_of_squares(unsigned long n)
{
  return (n * (n + 1) * ((2 * n) + 1)) / 6;
}

unsigned long sum_of_numbers(unsigned long n)
{
    return (n * (n + 1)) / 2;
}

unsigned long sum_digits(unsigned long n)
{
  unsigned long s = 0;
  while (n != 0){
    s += n % 10;
    n /= 10;
  }
  return s;
}

unsigned long product_digits(unsigned long n)
{
  unsigned long p = 1;
  while (n != 0){
    p *= n % 10;
    n /= 10;
  }
  return p;
}

int check_leap_year(int year)
{
  if (year % 4 == 0){
    if ((year % 100 == 0) && (year % 400 == 0))
        return 1;
    else if ((year % 100 == 0) && (year % 400 != 0))
        return 0;
    else
        return 1;
  }
  else
      return 0;
}

int is_perfect_square(unsigned long n)
{
  unsigned long sq = sqrt(n);
  if (sq * sq == n)
      return 1;
  else
      return 0;
}

int main(void)
{
	return 0;
}
