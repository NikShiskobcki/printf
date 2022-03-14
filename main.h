#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

/**
 *struct format - percentages and corresponding functions
 *@vars : percentage characters
 *@f : function pointer
 *
 */
typedef struct format
{
	char *vars;
	int (*f)(va_list);

} print_var;



int _putchar(char c);
int _printf(const char *format, ...);
void print_number(int x);
int print_string(va_list s);
int print_char(va_list c);
int print_int(va_list i);
int print_double(va_list d);
int print_unsigned(va_list u);
int print_bi(va_list d);
int print_hex(va_list h);
int print_HEXA(va_list hex);
int print_octal(va_list o);
int print_string_rev(va_list r);
#endif
