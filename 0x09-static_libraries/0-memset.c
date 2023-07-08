#include "main.h"

/**
 * _memset - Program fills a block of memory with a specific value
 * @s: parameter
 * @b: parameter
 * @n: number of bytes to be changed
 * Return: s (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
   	int x = 0;

   	for (; n > 0; x++)
   	{
          	s[x] = b;
          	n--;
   	}

   	return (s);
}
