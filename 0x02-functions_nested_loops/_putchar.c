#include "main.h"
#include <unistd.h>


/**
 * main - write the _putchar function
 *
 * return: 1 (success)
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
