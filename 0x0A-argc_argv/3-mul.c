#include <stdio.h>	
#include "main.h"
		
/**		
 * _atoi - converts a string to an integer	
 * @s: string parameter	
 * Return: result (success)		
 */
		
int _atoi(char *s)		
{		
	int x, y, z, length, a, number;
		
	x = 0;		
	y = 0;
	z = 0;
	length = 0;
	a = 0;
	number = 0;
		
	while (s[length] != '\0')
		
		length++;
		
	while (x < length && a == 0)		
	{	
		if (s[x] == '-')		
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			number = s[x] - '0';
			if (y % 2)
				number = -number;
			z = z * 10 + number;
			a = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			a = 0;
		}
		x++;		
	}
		
	if (a == 0)
		
		return (0);
		
	return (z);		
}

		
/**		
 * main - multiplies two numbers		
 * @argc: arguments parameter
 * @argv: arguments parameter		
 * Return: alternative outcomes (success)		
 */
		
int main(int argc, char *argv[])		
{		
	int result, num1, num2;
		
	if (argc < 3 || argc > 3)		
	{	
		printf("Error\n");
	
		return (1);		
	}
		
	num1 = _atoi(argv[1]);		
	num2 = _atoi(argv[2]);

	result = num1 * num2;
		
	printf("%d\n", result);
		
	return (0);		
}
