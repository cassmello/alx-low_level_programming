#include <stdio.h>		
#include <stdlib.h>
#include "main.h"

/**		
 * _strdup - duplicate to new memory space location		
 * @str: char
 * Return: 0 (success)
 */
		
char *_strdup(char *str)		
{
		
	char *pointer;		
	int x, y = 0;
	
	if (str == NULL)
		
		return (NULL);		
	x = 0;
	while (str[x] != '\0')
		x++;
		
	pointer = malloc(sizeof(char) * (x + 1));

	if (pointer == NULL)		
		return (NULL);
		
	for (y = 0; str[y]; y++)		
		pointer[y] = str[y];
		
	return (pointer);		
}
