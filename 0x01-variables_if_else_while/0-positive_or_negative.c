#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 * Description: This function is the entry point for the program.
 * Return: 0 on success
 */
/* this is the main function */
int main(void)
/* this is the main function */
{
/* this is the main function */
int n;
/* this is the main function */
srand(time(0));
n = rand() - RAND_MAX / 2;
/* Code statements */
if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else
	printf("%d is negative\n", n);
return (0);

}
