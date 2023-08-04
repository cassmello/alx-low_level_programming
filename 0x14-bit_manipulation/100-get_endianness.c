#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 (success)
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *a = (char *) &x;

	return (*a);
}
