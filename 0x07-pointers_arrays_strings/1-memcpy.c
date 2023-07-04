#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: stored memory
 * @src: copied memory
 * *@n: bytes
 *
 * Return:  n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
