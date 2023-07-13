i#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: parameter
 * Return: 1 or 0 (success)
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
