#!/bin/bash
gcc -wall -pedantric -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
