#include "main.h"
#include <stdarg.h>

/**
 * print_string - entry
 * @s : argument for %s
 * Return: string length
 */
int print_string_rev(va_list sr)
{

  int i = 0;
  int cont = 0;
  char *str;

  if (sr != NULL)
    str = va_arg(sr, char *);

  if (str == NULL)
    {
      _putchar('(');
      _putchar('n');
      _putchar('u');
      _putchar('l');
      _putchar('l');
      _putchar(')');
      return(6);
    }
  for (i = 0; str[i] != '\0'; i++)
    {
    }
  cont = i;

  for (i = i - 1; i >= 0; i--)
    {
      _putchar(str[i]);
    }
  return (cont);
}
