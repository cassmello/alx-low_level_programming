#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: number to search
 * @index: index parameter
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_vara;

	if (index > 63)
		return (-1);

	bit_vara = (n >> index) & 1;

	return (bit_vara);
}
