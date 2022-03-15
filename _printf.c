#include "main.h"
/**
 *auxiliar - function
 *@v : char
 *Return: int
 */
int (*auxiliar(char v))(va_list)
{
	int j = 0;

	print_var vars[] = {
		{"s", print_string},
		{"c", print_char},
		{"d", print_double},
		{"i", print_int},
		{"u", print_unsigned},
		{"b", print_bi},
		{"x", print_hex},
		{"X", print_HEXA},
		{"o", print_octal},
		{"r", print_rev},
		{NULL, NULL}
	};

	for (j = 0; vars[j].vars != NULL; j++)
	{
		if (v == *vars[j].vars)
			break;
	}
	return (vars[j].f);
}
/**
 *_printf - printf function
 *@format : character string
 *Return: amount of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list a;

	if (format == NULL)
		return (-1);
	va_start(a, format);
	while (format[i] && format)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				count++;
				_putchar('%');
			}
			if (format[i] == '\0')
			{
				return (-1);
			}
			else if (auxiliar(format[i]) != NULL)
				count = count + (auxiliar(format[i])(a));
				if ((auxiliar(format[i]) == NULL) && (format[i] != '%'))
				{
					_putchar('%');
					_putchar(format[i]);
					count += 2;
				}
		i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(a);
	return (count);
}
