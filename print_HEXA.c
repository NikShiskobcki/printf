#include "main.h"
/**
 *get_value - function
 *@val : unsigned int
 *Return: character amount
 */
int get_value(unsigned int val)
{
  if (val < 10)
    return(val + '0');
  if (val == 10)
    return('A');
  if (val == 11)
    return('B');
  if (val == 12)
    return('C');
  if (val == 13)
    return('D');
  if (val == 14)
    return('E');
  if (val == 15)
    return('F');

  return('x');
}

/**
 *print_HEXA - function
 *@x : va list argument
 *Return: character amount
 */
int print_HEXA(va_list x)
{
  unsigned int y = va_arg(x, unsigned int);
  int arr[8];
  int i, j;
  int val;
  
  
  for (i = 0; y > 0; i++)
    {
      val = y % 16;
      arr[i] = get_value(val);
      y = y / 16;
    }
  for (j = i; j >= 0; j--)
    _putchar(arr[j]);

  return (i);
 }
