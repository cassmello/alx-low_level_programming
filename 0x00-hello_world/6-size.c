#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's descriptio'
 *
 * Return: Always 0 (Success)
 */

int main(void)
/*Return 0 to indicate successful execution*/
{
/*for betty documentation*/
printf("Size of a char: 1 byte(s)\n");
printf("Size of an int: 4 byte(s)\n");
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: 8 byte(s)\n");
printf("Size of a float: 4 byte(s)\n");


return (0);
}

