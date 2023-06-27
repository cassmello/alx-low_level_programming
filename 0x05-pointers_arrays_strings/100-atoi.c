#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string parameter
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int a, b, c, len, d, e;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	d = 0;
	e = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			e = s[a] - '0';
			if (d % 2)
				e = -e;
			c = c * 10 + e;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}
