#include "main.h"
#include <stdarg.h>

/**
 * print_rev - entry
 * @r : string in reverse
 * Return: string length
 */
int print_rev(va_list r)
{
	int i = 0;
	int cont = 0;
	char *str;

	if (r != NULL)
		str = va_arg(r, char *);
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
	}
	cont = i;
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (cont);
}
