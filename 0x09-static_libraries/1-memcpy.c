#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 *Return: copied memory (success)
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
