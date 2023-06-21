#include "main.h"

/**
 * main - print all alphabet in lowercase
 *
 * return: 0 (success)
 *
 */

void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		_putchar(lowercase);

	_putchar('\n');
}
