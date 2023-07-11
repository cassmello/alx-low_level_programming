#include <stdio.h>

void _puts(const char* str) {
    while (*str != '\0') {
        putchar(*str);
        str++;
    }
    putchar('\n');
}
