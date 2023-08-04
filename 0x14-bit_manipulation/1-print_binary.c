#include "main.h"

/**
 * print_binary - prints the binary equivalent
 * @n: paramater
 * _putchar: 0
 */

void print_binary(unsigned long int n)
{
	int x, counter = 0;
	unsigned long int object;

	for (x = 63; x >= 0; x--)
	{
		object = n >> x;

		if (object & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
