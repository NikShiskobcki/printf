#include "main.h"
/**
 *print_int - print integer function for %i
 *@i : va list for int argument
 *Return: length of integer
 */
int print_int(va_list i)
{
	int i;
	int *integer = va_arg(i, int);

	for (i = 0; integer != '\0'; i++)
	{
		_putchar(integer[i]);
	}
	return (i);
}
