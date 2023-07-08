#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: first parameter
 * @s2: second parameter
 *
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
        	int x;
 
        	x = 0;
        	while (s1[x] != '\0' && s2[x] != '\0')
        	{
                    	if (s1[x] != s2[x])
                    	{
                                	return (s1[x] - s2[x]);
                    	}
        	x++;
        	}
        	return (0);
}
