#ifndef main
#define main

#include <stdio.h>
#include <unistd.h>

/**
 *
 *
 *
 *
 */
typedef struct format
{
  char *vars;
  int (*f)(va_list);
}



int _putchar(char c);
int print_string(va_list s);
int print_char(va_list c);
int print_int(va_list i);
int print_dec(va_list d);

int _printf(const char *format, ...);

#endif
