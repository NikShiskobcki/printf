#include "main.h"

/**
 *
 *
 *
 */

void print_number_unsigned(int x)
{
  unsigned int i = x;

  if (i / 10)
    print_number_unsigned(i / 10);

  _putchar((i % 10) + '0');
}

/**
 * 
 * 
 * 
 */

int print_unsigned(va_list u)
{
  int x = va_arg(u, int);
  int i = 1;

  print_number_unsigned(x);

  while (x / 10 != 0)
    {
      i++;
      x = x / 10;
    }

  return (i);

}