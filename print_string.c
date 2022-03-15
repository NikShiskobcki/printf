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
	char *str;

	if (s != NULL)
		str = va_arg(s, char *);
	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
