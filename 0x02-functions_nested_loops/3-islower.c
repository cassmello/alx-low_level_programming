#include "main.h"

/**
 * main - check if char is lowercase
 * 
 * Return: 1 if (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
