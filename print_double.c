#include "main.h"


/**
 * print_number - Entry point
 * @n : int
 * Return: 0
 */

void print_number(int x)
{
  unsigned int i = x;
  if (x < 0)
    {
      _putchar('-');
      i = -x;
    }
  if (i / 10)
    print_number(i / 10);
  _putchar((i % 10) + '0');
}


/**
 *print_double - print double function for %d
 *@d : va list of argument of type double
 *Return: length of double
 */
int print_double(va_list d)
{
  int x = va_arg(d, int);
  int i = 1;
  

	print_number(x);
	if (x < 0)
	  i++;
	while (x / 10 != 0)
	  {
	    i++;
	    x = x / 10;
	  }

	return (i);




}
