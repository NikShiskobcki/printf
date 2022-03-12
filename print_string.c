#include "main.h"
#include <stdarg.h>

/**
 * print_string - entry
 * @s : argument for %s
 * Return: string length
 */
int print_string(va_list s)
{

  int i;
  char *str = va_arg(s, char *);


	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
