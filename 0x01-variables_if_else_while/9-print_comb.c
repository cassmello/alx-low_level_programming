#include <stdio.h>
/**
 * main - input code
 * return: 0 (achieved)
 */

int main(void)
{
    int a;
    int b;
 
    for (a = 0; a < 10; a++) {
        putchar(a + '0');
        putchar(',');
        putchar(' ');
        for (b = a + 1; b < 10; b++) {
            putchar(b + '0');
            if (b != 9 || a != 8) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}

