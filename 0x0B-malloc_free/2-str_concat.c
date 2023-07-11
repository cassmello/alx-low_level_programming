#include "main.h"
#include <stdlib.h>

/**		
 * str_concat - get ends of input and add together for size		
 * @s1: input 1 parameter
 * @s2: input 2 parameter
 * Return: pointer (success)
 */
		
char *str_concat(char *s1, char *s2)
		
{		
	char *pointer;		
	int x, y;
		
	if (s1 == NULL)		
		s1 = "";
	if (s2 == NULL)		
		s2 = "";

	x = y = 0;	
	while (s1[x] != '\0')		
		x++;
	while (s2[y] != '\0')		
		y++;
	pointer = malloc(sizeof(char) * (x + y + 1));
		
	if (pointer == NULL)		
		return (NULL);

	x = y = 0;
		
	while (s1[x] != '\0')		
	{	
		pointer[x] = s1[x];	
		x++;
	}
		
	while (s2[y] != '\0')		
	{	
		pointer[x] = s2[y];	
		x++, y++;
	}
		
	pointer[x] = '\0';		
	return (pointer);
}
