#include <stdio.h>

void __attribute__ ((constructor)) startup_func(void);

/**
 * startup_func - functions that executes before the entry point main
 *
 * Return: void
 */
void startup_func(void)
{
        printf("You're beat! and yet, you must allow,\n"
                "I bore my house upon my back!\n");
}
