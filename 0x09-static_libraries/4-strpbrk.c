#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input parameter
 * @accept: input parameter
 * Return:  0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
        	int w;
 
        	while (*s)
        	{
                    	for (w = 0; accept[w]; w++)
                    	{
                    	if (*s == accept[w])
                    	return (s);
                    	}
        	s++;
        	}
 
return ('\0');
}
