#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer parameter
 * @index: index parameter
 * Return: 1 (success)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
