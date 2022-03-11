#include "main.h"

/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
  int i = 0;
  int j;
  int count = 0;
  
  print_var vars[] = {
		      {"s", print_string},
		      {"c", print_char},
		      {"d", print_decimal},
		      {"i", print_int},
		      {NULL, NULL}
  };
		      

  va_list a;
  va_start(a, format);
  
  while (format)
    {
      if (format[i] == '%')
	{
	  i++;
	  j = 0;
	  while (j < 3)
	    {
	      if (format[i] == vars[j])
		{
		  count += f(format[i]);
		  break;
		}
	      j++;
	    }
	  if (((j == 3) && (vars[3])) != format[i])
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
  return (cont);

}
