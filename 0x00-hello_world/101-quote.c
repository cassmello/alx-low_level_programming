#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

#define STDERR_FILENO 2
/**
 * main - Write a C program that print
 * return:1 (achived)
 * write_str_to_stderr:write a string
*/

void write_str_to_stderr(const char *str)
{
size_t len = 0;
while (str[len] != '\0')
len++;

syscall(SYS_write, STDERR_FILENO, str, len);
}

int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write_str_to_stderr(message);
return (1);
}

