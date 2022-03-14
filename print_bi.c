#include "main.h"

/**
 *
 *
 *
 */
int print_bi(va_list b)
{
  unsigned long int x;
  unsigned int a[1024];
  int i, j, cont = 0;

  if (b != NULL)
    x = va_arg(b, unsigned long int);
  else
    return(0);

  if (x == 0)
    {
      _putchar('0');
      
      return (1);
    }
  
  for (i = 0; x > 0; i++)
    {
      a[i] = x % 2;
      x = x / 2;
      cont++;
    }
  for (j = i; j>=0; j--)
    _putchar(a[j] + '0');

  return (cont);
  
  
}
