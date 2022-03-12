#include "main.h"
/**
 *print_int - print integer function for %i
 *@i : va list for int argument
 *Return: length of integer
 */
int print_int(va_list i)
{
	int j;
	char *integer = va_arg(i, char *);

	for (j = 0; integer[j] != '\0'; j++)
	{
		_putchar(integer[j]);
	}
	return (j);
}
