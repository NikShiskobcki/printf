#include "main.h"

/**
 *print_number_unsig- function
 *@x : argument
 *Return: length
 */

void print_number_unsig(int x)
{
	unsigned int i = x;

	if (i / 10)
	{
		print_number_unsig(i / 10);
	}
	_putchar((i % 10) + '0');
}
/**
 *print_unsigned - function
 *@u : argument
 *Return: length
 */
int print_unsigned(va_list u)
{
	unsigned int x;
	int i = 1;

	if (u != NULL)
		x = va_arg(u, int);
	else
		return (0);
	if (x == 0)
	{
		_putchar('0');
		return (1);
	}
	print_number_unsig(x);
	while (x / 10 != 0)
	{
		i++;
		x = x / 10;
	}
	return (i);
}
