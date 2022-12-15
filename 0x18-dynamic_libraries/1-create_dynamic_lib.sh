#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic *.c -shared -o liball.so
