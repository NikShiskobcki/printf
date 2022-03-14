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
  else
    return (0);
  if (x == 0)
    {
      _putchar('0');
      cont++;
    }
  
  for (i = 0; x > 0; i++)
    {
     oc[i] = x % 8;
      x = x / 8;
      cont++;
    }
  for (j = i - 1 ; j >= 0; j--)
    _putchar(oc[j] + '0');

  return (cont);


}
