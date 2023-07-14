#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates a string to another string
 * @s1: string parameter 1
 * @s2: string parameter 2
 * @n: parameter
 *
 * Return: pointer (success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x = 0, y = 0, long1 = 0, long2 = 0;

	while (s1 && s1[long1])
		long1++;
	while (s2 && s2[long2])
		long2++;

	if (n < long2)
		s = malloc(sizeof(char) * (long1 + n + 1));
	else
		s = malloc(sizeof(char) * (long1 + long2 + 1));

	if (!s)
		return (NULL);

	while (x < long1)
	{
		s[x] = s1[x];
		x++;
	}

	while (n < long2 && x < (long1 + n))
		s[x++] = s2[y++];

	while (n >= long2 && x < (long1 + long2))
		s[x++] = s2[y++];

	s[x] = '\0';

	return (s);
}
