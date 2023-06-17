#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**d for the code  goes there */

/**
* main code - store and print variable n is positive or negative.
* Return:0 (Sucessful)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else
	printf("%d is negative\n", n);

return (0);

}
