#include <stdio.h>
#include "main.h"

/**
 * printfbin - convert int to binary.
 * @b: number to convert.
 * Return: void
 */

void printfbin(unsigned int b)
{
	int i=0;
	int binaryNum[32];
	
	if (b == 0)
	{
      	putchar('0');
      	return;
    	}
   	while (b > 0)
	{
      		binaryNum[i++] = b % 2;
      		b /= 2;
   	}
   	for (int j = i-1; j >= 0; j--)
	{
      		putchar('0' + binaryNum[j]);
	}
}


