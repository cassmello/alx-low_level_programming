#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * 
 * @str: input
 * Return: 
 */

void puts_half(char *str)
{
	int x, n, len;

	len = 0;

	for (x = 0; str[x] != '\0'; x++)
		len++;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (x = n; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
