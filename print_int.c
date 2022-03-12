#include "main.h"

/**
 *print_double - print double function for %d
 *@d : va list of argument of type double
 *Return: length of double
 */
int print_int(va_list i)
{
  int x = va_arg(i, int);
  int j = 1;


  print_number(x);
  if (x < 0)
    j++;
  while (x / 10 != 0)
    {
      j++;
      x = x / 10;
    }

  return (j);
}
