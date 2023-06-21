#include "main.h"

/**
 * main - prints the last digit of a number
 * 
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	n = -n;

	x = n % 10;

	if (x < 0)
		x = -a;

	_putchar(x + '0');

	return (x);
}
