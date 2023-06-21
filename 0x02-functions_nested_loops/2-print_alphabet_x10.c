#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase,
 * 
 *return: 0 (success)
 */

void print_alphabet_x10(void)
{
	char x;
	int i;

	i = 0;

	while (i < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
