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
		      {"u", print_unsigned},
		      {"b", print_bi},
		      {"x", print_hex},
		      {"X", print_HEXA},
		      {"o", print_octal},
		      {NULL, NULL}
  };
  va_list a;
  
  if (format == NULL)
    return(-1);
  
  
  va_start(a, format);

  if (format[i] == '\0')
    return(0);
  
    
  while (format[i] && format)
    {
      if (format[i] == '%')
	{
	  i++;
	  
  
	  if (format[i] == '%')
	    {
	      count++;
	      _putchar('%');
	      i++;
	      continue;
	    }
	  if (format[i] == '\0')
	    return(-1);
	
	  else
	    {
	      for (j = 0; vars[j].vars != NULL; j++)
		{
		  if (format[i] == *vars[j].vars)
		    {
		      count = count + vars[j].f(a);
		      break;
		    }
		}
	      
	        
	    
	  
	    
	      if (vars[j].vars == NULL && format[i] != '%')
		{
		  _putchar('%');
		  _putchar(format[i]);
		  count += 2;
		  
		}
	      else
		{
		  i++;
		  continue;
		}
	    }
	  i++;
	}  
      
    
      if (format[i] == '\0')
	return(count);

	
      _putchar(format[i]);
      count++;

       
      i++;
      
    
}
  va_end(a);
  return (count);
    
}
