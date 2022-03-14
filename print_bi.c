#include "main.h"

/**
 *
 *
 *
 */
int print_bi(va_list b)
{
  unsigned int x = va_arg(b, unsigned long int);
  unsigned int a[1024];
  int i = 0, j = 0, cont = 0;


  if (x == 0)
    {
      _putchar('0');
      cont++;
    }
  
  for (i = 0; x > 0; i++)
    {
      a[i] = x % 2;
      x = x / 2;
      cont++;
    }
  for (j = i - 1; j>=0; j--)
    _putchar(a[j] + '0');

  return (cont);
  
  
}
