#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* convert_number - convert an integer into char.
*
* @n: integer to convert
* @counter: number of characters printed
*
* Return: counter
*/
int convert_number(int n, int counter)
{
int num, mod = n % 10, digit, m = 1;
int c = 1;

n = n / 10;
num = n;
if (n < 0)
{
_putchar('-');
num = -num;
n = -n;
mod = -mod;
c++;
}
if (num > 0)
{
while (num / 10 != 0)
{
m = m * 10;
num = num / 10;
}
num = n;
while (m > 0)
{
digit = num / m;
_putchar(digit + '0');
num = num - (digit * m);
m = m / 10;
c++;
}
}
_putchar(mod + '0');
return (c);

}
