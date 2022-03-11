#include "main.h"

/**
 * print_string - entry
 *
 *
 */
int print_string(va_list s)
{
  int i;
  char *str = va_arg(s, char*s);

  for (i = 0; str[i] != '\0'; i++)
    {
      _putchar(str[i]);
    }
  
  return (i);
  
}
