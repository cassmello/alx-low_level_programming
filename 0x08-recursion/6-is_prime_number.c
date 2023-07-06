#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - prime number or not
 * @n: parameter
 *
 * Return: result (success)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}



/**
 * actual_prime - prime recursively
 * @n: parameter
 * @i: parameter
 *
 * Return: result (success)
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
