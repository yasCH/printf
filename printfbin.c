#include <stdio.h>
#include "main.h"

/**
 * printfbin - convert int to binary.
 * @b: number to convert.
 * Return: number of printed caracters
 */

int printfbin(unsigned int b, int count)
{
	int i = 0;
	int binaryNum[32];
	
	if (b == 0)
	{
      		_putchar('0');
		count++;
    	}
   	while (b > 0)
	{
      		binaryNum[i++] = b % 2;
      		b /= 2;
   	}
   	for (int j = i-1; j >= 0; j--)
	{
      		_putchar('0' + binaryNum[j]);
		count++;
	}
	return (count);
}


