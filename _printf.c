#include "main.h"

/**
 *_printf - printf function
 *@format : character string
 *Return: amount of characters printed
 */
int _printf(const char *format, ...)
{
  int i = 0;
  int j;
  int count = 0;
  
  print_var vars[] = {
		      {"s", print_string},
		      {"c", print_char},
		      {"d", print_dec},
		      {"i", print_int},
		      {NULL, NULL}
  };
		      

  va_list a;
  va_start(a, format);
  
  while (format)
    {
      if (format[i] == '\')
       {
	 i++;
	 if (format[i] == 'n')
	  {
	   _putchar('\n');
	  }
	 else
	 {
	  i--;
	  _putchar(format[i]);
	  count++;
	 }
       }
      if (format[i] == '%')
	{
	  i++;
	  j = 0;
	  while (j < 3)
	    {
	      if (format[i] == *(vars[j].vars))
		{
		  count += vars[j].f(a);
		  break;
		}
	      j++;
	    }
	  if (((j == 3) && (*(vars[3].vars))) != format[i])
	    {
	      i--;
	    }
	 
	}
      else
	{
      _putchar(format[i]);
      count++;
	}
      i++;
      



    }
  va_end(a);
  return (count);

}
