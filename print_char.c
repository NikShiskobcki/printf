#include "main.h"

/**
 *print_char - printf for char
 *@c : argument
 *Return: length of char
 */
int print_char(va_list c)
{
  char ch = va_arg(c, int);
  _putchar(ch);
  return(1);
     
}
