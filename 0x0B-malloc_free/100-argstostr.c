#include "main.h"
#include <stdlib.h>

/**		
 * argstostr - main entry		
 * @ac: parameter
 * @av: parameter
 * Return: 0		
 */
		
char *argstostr(int ac, char **av)		
{		
	int x, y, z = 0, w = 0;		
	char *newString;
		
	if (ac == 0 || av == NULL)		
		return (NULL);
		
	for (x = 0; x < ac; x++)		
	{	
		for (y = 0; av[x][y]; y++)	
			w++;
	}
	
	w += ac;		
	newString = malloc(sizeof(char) * w + 1);

	if (newString == NULL)		
		return (NULL);

	for (x = 0; x < ac; x++)		
	{	
	for (y = 0; av[x][y]; y++)	
	{	
		newString[z] = av[x][y];	
		z++;
	}
	
	if (newString[z] == '\0')		
	{	
		newString[z++] = '\n';	
	}	
	}
	
	return (newString);		
}
