#include "main.h"

/**
 *
 *
 *
 */
int print_octal(va_list o)
{
  unsigned int x = va_arg(o, int);
  int oc[11];
  int i, j;

  for (i = 0; x > 0; i++)
    {
     oc[i] = x % 8;
      x = x / 8;
    }
  for (j = i - 1 ; j >= 0; j--)
    _putchar(oc[j] + '0');

  return (i);


}