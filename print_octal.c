#include "main.h"

/**
 *
 *
 *
 */
int print_octal(va_list o)
{
  unsigned int x;
  int oc[11];
  int i, j;

  if (o != NULL)
    x = va_arg(o, int);
  if (x == 0)
    {
      _putchar('0');
      return (1);
    }
  
  for (i = 0; x > 0; i++)
    {
     oc[i] = x % 8;
      x = x / 8;
    }
  for (j = i - 1 ; j >= 0; j--)
    _putchar(oc[j] + '0');

  return (i);


}
