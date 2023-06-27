#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0 (success)
 */

void print_rev(char *s)
{
	int len = 0;
	int z;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (z = len; z > 0; z--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
