#include "main.h"

/**
 * _int - function to print integers
 * @integ: list printed
 * 
 * Return: count
 */
int _int (va_list  integ)
{
  int m, k = 1, count = 0;
  unsigned int n;
  
  m = va_arg(integ, int);
  
  if (m < 0)
  {
    count += _putchar('-');
    n = m * -1;
  }
  else
    n = m;
  while (n / k > 9)
    k *=10;
  
  while (k != 0)
  {
    count = count + _putchar(n / k + '0');
    n %= k;
    k = k / 10;
  }
  return (count)
  }
