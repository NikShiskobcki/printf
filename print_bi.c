#include "main.h"

/**
 *
 *
 *
 */
int print_bi(va_list b)
{
  unsigned int x = va_arg(b, int);
  int a[22];
  int i, j;

  for (i = 0; x > 0; i++)
    {
      a[i] = x % 2;
      x = x / 2;
    }
  for (j = i; j>=0; j--)
    _putchar(a[j] + '0');

  return (i);
  
  
}