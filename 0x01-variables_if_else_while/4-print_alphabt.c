#include <stdio.h>
/*
 * main - input code 
 * return: 0 (achieve)
 */

int main(void)
{
    char x;

    for (x = 'a'; x <= 'z'; x++) {
        if (x != 'q' && x != 'e') {
            putchar(x);
        }
    }
    putchar('\n');
    
    return 0;
}
