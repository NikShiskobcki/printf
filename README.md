<h1 align="center">
PRINTF PROJECT
</h1>

## THE FUNCTION:

INTRODUCTION:

The _printf function is our 0x11.C - printf Holberton´s project own simulation of the standard library´s printf function, written in c language. 


PROTOTYPE:

The function´s prototype is:   
int _printf(const char *format, ...) 

INPUT:

A character string called format is inputed, the function reads and prints it depending on the characters found. 

RETURN:

The function returns the int amount of characters printed to the standard output stream.

## HOW THE FUNCTION WORKS:

THE "%" CASE:

If a "%" is found along the string "format" the next character is compared to a list of characters which make reference to the type of data wished to be printed.

- To print a "%" the function should me written as following:  
  _printf("%%");  
  Output of function:  
  %

- "s" is used to print a string.  
   For example:   
   _printf("%s", "Print example string");  
  Output of function:  
  Print example string

- "c" is for printing char type variables.  
   For example:  
   char exapmlechar = 'c';  
   _printf("%c", examplechar);  
   Output of function:  
   c

- "d" is used to print decimal (base 10) numbers.   
   For example:  
   _printf(("%d",156780);  
   Output of function:  
   156780  
   _printf("%d",-2035065302);  
   Output of function:  
   -2035065302

- "i" is used to print integers.  
   For example:  
   _printf("%i",455);  
   Output of function:  
   455

- "u" is used to print unsigned ints.  
   For example:  
   _printf("%u", 78475843784758478);  
   Output of function:  
   78475843784758478

- "b" the unsigned int argument is converted to binary
   For example:
   _printf("%b",11);  
   Output of function:
   1011
- "x" print a number in hexidecimal (base 16)
  For example:  
  _printf("%x", 567);  
  Output of function:
  237
- "X"

## Authors: 
Paulina Crespi  
Nicolle Shiskobcki
:
