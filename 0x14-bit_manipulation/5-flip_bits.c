#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: parameter
 * @m: parameter
 * Return: counter (success)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counter = 0;
	unsigned long int object;
	unsigned long int operation = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		object = operation >> x;
		if (object & 1)
			counter++;
	}

	return (counter);
}
