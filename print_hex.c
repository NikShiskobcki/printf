#include "main.h"


int get_val(unsigned int val)
{
  if (val < 10)
    return(val + '0');
  if (val == 10)
    return('a');
  if (val == 11)
    return('b');
  if (val == 12)
    return('c');
  if (val == 13)
    return('d');
  if (val == 14)
    return('e');
  if (val == 15)
    return('f');

  return('x');
}

/**
 *
 *
 *
 */
int print_hex(va_list x)
{
  unsigned int y;
  int arr[8];
  int i, j;
  int val;

  if (x != NULL)
    y = va_arg(x, unsigned int);
  else
    return(0);

  if (y == 0)
    {
      _putchar('0');
      return (1);
    }
  
  for (i = 0; y > 0; i++)
    {
      val = y % 16;
      arr[i] = get_val(val);
      y = y / 16;
    }
  for (j = i; j >= 0; j--)
    _putchar(arr[j]);

  return (i);
 }
