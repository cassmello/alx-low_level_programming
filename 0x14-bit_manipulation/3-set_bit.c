#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer parameter
 * @index: index parameter
 * Return: 1 (success)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
