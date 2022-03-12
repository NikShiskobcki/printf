#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

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
int print_string(va_list s);
int print_char(va_list c);
int print_int(va_list i);
int print_double(va_list d);


#endif
