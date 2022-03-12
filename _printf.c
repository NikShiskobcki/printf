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
		      {"d", print_double},
		      {"i", print_int},
		      {NULL, NULL}
  };
		      

  va_list a;
  va_start(a, format);
  
  while (format[i] != '\0')
    {
      if (format[i] == '%')
	{
	  i++;
	  if (format[i] == '%')
	    {
	      count++;
	      _putchar('%');
	    }
	 
	  for (j = 0; vars[j].vars != NULL; j++)
	    {
	      if (format[i] == *vars[j].vars)
		{
		  count = count + vars[j].f(a);
		  
		}
	    }
	  i++;
	}
     
	
      _putchar(format[i]);
      count++;
      
      i++;    
    }
  va_end(a);
  return (count);

}
