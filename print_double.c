#include "main.h"

/**
 *print_double - print double function for %d
 *@d : va list of argument of type double
 *Return: length of double
 */
int print_double(va_list d)
{
	int i;
	char *doub = va_arg(d, char *);

	for (i = 0; doub[i] != '\0'; i++)
	{
		_putchar(doub[i]);
	}
	return (i);
}
