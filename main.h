#ifndef main
#define main

#include <stdio.h>
#include <unistd.h>

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
int print_string(va_list s);
int print_char(va_list c);
int print_int(va_list i);
int print_dec(va_list d);

int _printf(const char *format, ...);

#endif
