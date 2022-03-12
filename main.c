#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int len;
  unsigned int ui;  
  

  len = _printf("Let's try to printf a simple sentence.\n");
  ui = (unsigned int)INT_MAX + 1024;
  
  _printf("Length:[%d, %i]\n", len, len);
  _printf("Negative:[%d]\n", -762534);  
  _printf("Character:[%c]\n", 'H');
  _printf("String:[%s]\n", "I am a string !");
  _printf("Unsigned:[%u]\n", ui);
  _printf("Percent:[%%]\n");
  _printf("binary:[%b]\n", 24);
  _printf("Unsigned hexadecimal:[%x]\n", ui);
  _printf("Unsigned HEXadecimal:[%X]\n", ui);
  return (0);
}
