#include "main.h"

/**
 *  _strcat - function that concatenates two strings
 *  @dest: parameter
 *  @src: parameter
 *  Return: result (success)
 */

char *_strcat(char *dest, char *src)
{
        	int x;
        	int y;

        	x = 0;

        	while (dest[x] != '\0')
        	{
                    	x++;
        	}

        	y = 0;

        	while (src[b] != '\0')
        	{
                    	dest[x] = src[y];
                    	x++;
                    	y++;
        	}

        	dest[x] = '\0';
        	return (dest);


}
