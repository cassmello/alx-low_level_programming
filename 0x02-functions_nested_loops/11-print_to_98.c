#include <stdio.h>
#include "main.h"

/**
 * print_to_98  - prints all natural numbers from n to 98,
 *
 * return: 0 (success)
 */

void print_to_98(int n) {
    int i;
    for (i = n; i <= 98; i++) {
        printf("%d", i);
        if (i != 98) {
            printf(", ");
        } else {
            printf("\n");
        }
    }
}

