#include "main.h"
/**
* largest_number - returns the largest of 3 numbers
* @a: parameter 1
* @b: parameter 2
* @c: parameter 3
* Return: 0 (success)
*/

int largest_number(int a, int b, int c)
{
int largest;
if (a > b && a > c)
{
largest = a;
}
else if (a > b && c > a)
{
largest = c;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}


