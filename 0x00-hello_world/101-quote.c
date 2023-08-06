#include <unistd.h>

int main(void)
{
    char unix[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 59;

    write(2, unix, len);

    return (1);
}


