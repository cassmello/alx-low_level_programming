#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: parameter
 *
 * Return: 0 (success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
