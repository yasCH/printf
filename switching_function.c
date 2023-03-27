#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
* switching_function - external swith fucnction
* @format: an array
* @printed_chars: int
* @arg: va_list
* Return: printed_chars
*/
int switching_function(const char *format, int printed_chars, va_list arg)
{
char c;
char *s;
int d;
switch (*format)
{
case 'c':
c = va_arg(arg, int);
putchar(c);
printed_chars++;
break;
case 's':
s = va_arg(arg, char*);
if (s == NULL)
{
s = "(null)";
}
printed_chars += strlen(s);
fputs(s, stdout);
break;
case '%':
putchar('%');
printed_chars++;
break;
case 'd':
case 'i':
d = va_arg(arg, int);
printed_chars += convert_number(d, 0);
break;
default:
putchar('0');
}
return (printed_chars);
}
