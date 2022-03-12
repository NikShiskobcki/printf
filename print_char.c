#include "main.h"

/**
 *
 *
 */
int print_char(va_list c)
{
  char *ch = va_arg(c, char *);
  _putchar(ch[0]);
  return(1);
}
