#include <stdio.h>
/*
 * main - input code
 * return:0 (achived)
 */

int main(void)
{
    int a;
    int b;

    for (a = 0; a < 100; a++) {
        for (b = a; b < 100; b++) {
            putchar(a / 10 + '0');
            putchar(a % 10 + '0');
            putchar(' ');
            putchar(b / 10 + '0');
            putchar(b % 10 + '0');
            if (a != 99 || b != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}

