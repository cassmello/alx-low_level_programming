#!/bin/bash
gcc -wall -pedantic -werror -wextra -o *.c
ar -rc libail.a *.o
ranlib libail.a
