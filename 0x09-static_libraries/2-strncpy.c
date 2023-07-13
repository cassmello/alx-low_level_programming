#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 * Return: dest (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
