#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
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
switch (*format)
{
case 'c':
c = va_arg(arg, int);
if ((c >= 0 && c < 32) || c >= 127)
{
return (printed_chars);
}
_putchar(c);
printed_chars++;
break;
case 's':
s = va_arg(arg, char*);
if (s == NULL)
{
write(1, "(null)", 6);
return (printed_chars += 6);
}
printed_chars += strlen(s);
write(1, s, strlen(s));
break;
case '%':
_putchar('%');
printed_chars++;
break;
case 'd':
case 'i':
printed_chars += convert_number(va_arg(arg, int), 0);
break;
case 'b':
printed_chars += convert_number(printfbin(va_arg(arg, int)), 0);
break;
}
return (printed_chars);
}
